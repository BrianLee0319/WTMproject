// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness.h"      // For This
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"

//--------------------
// Internal Methods

VL_INLINE_OPT void VTestHarness::_sequent__TOP__43(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTestHarness::_sequent__TOP__43\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT__AsyncValidSync_1__DOT__sink_extend__DOT__sync_0__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT__AsyncValidSync_reset)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__AsyncValidSync__DOT__source_valid__DOT__sync_0__DOT__reg_0_q));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT__AsyncValidSync_1__DOT__sink_extend__DOT__sync_0__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT__AsyncValidSync_reset)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__AsyncValidSync__DOT__source_valid__DOT__sync_0__DOT__reg_0_q));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/src/main/resources/vsrc/AsyncResetReg.v:81
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__AsyncValidSync_1__DOT__sink_extend__DOT__sync_0__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT__AsyncValidSync_reset)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT__AsyncValidSync__DOT__source_valid__DOT__sync_0__DOT__reg_0_q));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__44(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTestHarness::_sequent__TOP__44\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIGW(__Vtemp845,95,0,3);
    //char	__VpadToAlign36[4];
    VL_SIGW(__Vtemp846,95,0,3);
    //char	__VpadToAlign52[4];
    VL_SIGW(__Vtemp847,95,0,3);
    //char	__VpadToAlign68[4];
    VL_SIGW(__Vtemp853,95,0,3);
    //char	__VpadToAlign84[4];
    VL_SIGW(__Vtemp854,95,0,3);
    //char	__VpadToAlign100[4];
    VL_SIGW(__Vtemp855,95,0,3);
    //char	__VpadToAlign116[4];
    VL_SIGW(__Vtemp857,95,0,3);
    //char	__VpadToAlign132[4];
    VL_SIGW(__Vtemp858,95,0,3);
    //char	__VpadToAlign148[4];
    VL_SIGW(__Vtemp859,95,0,3);
    //char	__VpadToAlign164[4];
    VL_SIGW(__Vtemp860,95,0,3);
    //char	__VpadToAlign180[4];
    VL_SIGW(__Vtemp861,95,0,3);
    //char	__VpadToAlign196[4];
    VL_SIGW(__Vtemp863,95,0,3);
    //char	__VpadToAlign212[4];
    VL_SIGW(__Vtemp868,95,0,3);
    //char	__VpadToAlign228[4];
    VL_SIGW(__Vtemp869,95,0,3);
    //char	__VpadToAlign244[4];
    VL_SIGW(__Vtemp871,95,0,3);
    //char	__VpadToAlign260[4];
    VL_SIGW(__Vtemp872,95,0,3);
    //char	__VpadToAlign276[4];
    VL_SIGW(__Vtemp876,95,0,3);
    //char	__VpadToAlign292[4];
    VL_SIGW(__Vtemp877,95,0,3);
    //char	__VpadToAlign308[4];
    VL_SIGW(__Vtemp919,127,0,4);
    VL_SIGW(__Vtemp920,127,0,4);
    VL_SIGW(__Vtemp921,127,0,4);
    VL_SIGW(__Vtemp922,127,0,4);
    VL_SIGW(__Vtemp926,95,0,3);
    //char	__VpadToAlign388[4];
    VL_SIGW(__Vtemp928,95,0,3);
    //char	__VpadToAlign404[4];
    VL_SIGW(__Vtemp929,95,0,3);
    //char	__VpadToAlign420[4];
    VL_SIGW(__Vtemp931,95,0,3);
    //char	__VpadToAlign436[4];
    VL_SIGW(__Vtemp933,95,0,3);
    //char	__VpadToAlign452[4];
    VL_SIGW(__Vtemp934,95,0,3);
    //char	__VpadToAlign468[4];
    VL_SIGW(__Vtemp936,95,0,3);
    //char	__VpadToAlign484[4];
    VL_SIGW(__Vtemp938,95,0,3);
    //char	__VpadToAlign500[4];
    VL_SIGW(__Vtemp939,95,0,3);
    //char	__VpadToAlign516[4];
    VL_SIGW(__Vtemp941,95,0,3);
    //char	__VpadToAlign532[4];
    VL_SIGW(__Vtemp943,95,0,3);
    //char	__VpadToAlign548[4];
    VL_SIGW(__Vtemp944,95,0,3);
    //char	__VpadToAlign564[4];
    VL_SIGW(__Vtemp946,95,0,3);
    //char	__VpadToAlign580[4];
    VL_SIGW(__Vtemp948,95,0,3);
    //char	__VpadToAlign596[4];
    VL_SIGW(__Vtemp949,95,0,3);
    //char	__VpadToAlign612[4];
    VL_SIGW(__Vtemp951,95,0,3);
    //char	__VpadToAlign628[4];
    VL_SIGW(__Vtemp953,95,0,3);
    //char	__VpadToAlign644[4];
    VL_SIGW(__Vtemp954,95,0,3);
    //char	__VpadToAlign660[4];
    VL_SIGW(__Vtemp956,95,0,3);
    //char	__VpadToAlign676[4];
    VL_SIGW(__Vtemp958,95,0,3);
    //char	__VpadToAlign692[4];
    VL_SIGW(__Vtemp959,95,0,3);
    //char	__VpadToAlign708[4];
    VL_SIGW(__Vtemp961,95,0,3);
    //char	__VpadToAlign724[4];
    VL_SIGW(__Vtemp963,95,0,3);
    //char	__VpadToAlign740[4];
    VL_SIGW(__Vtemp964,95,0,3);
    //char	__VpadToAlign756[4];
    VL_SIGW(__Vtemp971,95,0,3);
    //char	__VpadToAlign772[4];
    VL_SIGW(__Vtemp972,95,0,3);
    //char	__VpadToAlign788[4];
    VL_SIGW(__Vtemp974,95,0,3);
    //char	__VpadToAlign804[4];
    VL_SIGW(__Vtemp975,95,0,3);
    //char	__VpadToAlign820[4];
    VL_SIGW(__Vtemp977,95,0,3);
    //char	__VpadToAlign836[4];
    VL_SIGW(__Vtemp978,95,0,3);
    //char	__VpadToAlign852[4];
    VL_SIGW(__Vtemp985,95,0,3);
    //char	__VpadToAlign868[4];
    VL_SIGW(__Vtemp986,95,0,3);
    //char	__VpadToAlign884[4];
    VL_SIGW(__Vtemp988,95,0,3);
    //char	__VpadToAlign900[4];
    VL_SIGW(__Vtemp989,95,0,3);
    //char	__VpadToAlign916[4];
    VL_SIGW(__Vtemp991,95,0,3);
    //char	__VpadToAlign932[4];
    VL_SIGW(__Vtemp992,95,0,3);
    //char	__VpadToAlign948[4];
    VL_SIGW(__Vtemp999,95,0,3);
    //char	__VpadToAlign964[4];
    VL_SIGW(__Vtemp1000,95,0,3);
    //char	__VpadToAlign980[4];
    VL_SIGW(__Vtemp1002,95,0,3);
    //char	__VpadToAlign996[4];
    VL_SIGW(__Vtemp1003,95,0,3);
    //char	__VpadToAlign1012[4];
    VL_SIGW(__Vtemp1005,95,0,3);
    //char	__VpadToAlign1028[4];
    VL_SIGW(__Vtemp1006,95,0,3);
    //char	__VpadToAlign1044[4];
    VL_SIGW(__Vtemp1013,95,0,3);
    //char	__VpadToAlign1060[4];
    VL_SIGW(__Vtemp1014,95,0,3);
    //char	__VpadToAlign1076[4];
    VL_SIGW(__Vtemp1016,95,0,3);
    //char	__VpadToAlign1092[4];
    VL_SIGW(__Vtemp1017,95,0,3);
    //char	__VpadToAlign1108[4];
    VL_SIGW(__Vtemp1019,95,0,3);
    //char	__VpadToAlign1124[4];
    VL_SIGW(__Vtemp1020,95,0,3);
    //char	__VpadToAlign1140[4];
    VL_SIGW(__Vtemp1027,95,0,3);
    //char	__VpadToAlign1156[4];
    VL_SIGW(__Vtemp1028,95,0,3);
    //char	__VpadToAlign1172[4];
    VL_SIGW(__Vtemp1030,95,0,3);
    //char	__VpadToAlign1188[4];
    VL_SIGW(__Vtemp1031,95,0,3);
    //char	__VpadToAlign1204[4];
    VL_SIGW(__Vtemp1033,95,0,3);
    //char	__VpadToAlign1220[4];
    VL_SIGW(__Vtemp1034,95,0,3);
    //char	__VpadToAlign1236[4];
    VL_SIGW(__Vtemp1041,95,0,3);
    //char	__VpadToAlign1252[4];
    VL_SIGW(__Vtemp1042,95,0,3);
    //char	__VpadToAlign1268[4];
    VL_SIGW(__Vtemp1044,95,0,3);
    //char	__VpadToAlign1284[4];
    VL_SIGW(__Vtemp1045,95,0,3);
    //char	__VpadToAlign1300[4];
    VL_SIGW(__Vtemp1047,95,0,3);
    //char	__VpadToAlign1316[4];
    VL_SIGW(__Vtemp1048,95,0,3);
    //char	__VpadToAlign1332[4];
    VL_SIGW(__Vtemp1054,95,0,3);
    //char	__VpadToAlign1348[4];
    VL_SIGW(__Vtemp1055,95,0,3);
    //char	__VpadToAlign1364[4];
    VL_SIGW(__Vtemp1057,95,0,3);
    //char	__VpadToAlign1380[4];
    VL_SIGW(__Vtemp1058,95,0,3);
    //char	__VpadToAlign1396[4];
    VL_SIGW(__Vtemp1059,95,0,3);
    //char	__VpadToAlign1412[4];
    VL_SIGW(__Vtemp1060,95,0,3);
    //char	__VpadToAlign1428[4];
    VL_SIGW(__Vtemp1064,95,0,3);
    //char	__VpadToAlign1444[4];
    VL_SIGW(__Vtemp1065,95,0,3);
    //char	__VpadToAlign1460[4];
    VL_SIGW(__Vtemp1067,95,0,3);
    //char	__VpadToAlign1476[4];
    VL_SIGW(__Vtemp1068,95,0,3);
    //char	__VpadToAlign1492[4];
    VL_SIGW(__Vtemp1069,95,0,3);
    //char	__VpadToAlign1508[4];
    VL_SIGW(__Vtemp1074,95,0,3);
    //char	__VpadToAlign1524[4];
    VL_SIGW(__Vtemp1075,95,0,3);
    //char	__VpadToAlign1540[4];
    VL_SIGW(__Vtemp1077,95,0,3);
    //char	__VpadToAlign1556[4];
    VL_SIGW(__Vtemp1078,95,0,3);
    //char	__VpadToAlign1572[4];
    VL_SIGW(__Vtemp1079,95,0,3);
    //char	__VpadToAlign1588[4];
    VL_SIGW(__Vtemp1080,95,0,3);
    //char	__VpadToAlign1604[4];
    VL_SIGW(__Vtemp1083,95,0,3);
    //char	__VpadToAlign1620[4];
    VL_SIGW(__Vtemp1084,95,0,3);
    //char	__VpadToAlign1636[4];
    VL_SIGW(__Vtemp1086,95,0,3);
    //char	__VpadToAlign1652[4];
    VL_SIGW(__Vtemp1087,95,0,3);
    //char	__VpadToAlign1668[4];
    VL_SIGW(__Vtemp1088,95,0,3);
    //char	__VpadToAlign1684[4];
    VL_SIGW(__Vtemp1093,95,0,3);
    //char	__VpadToAlign1700[4];
    VL_SIGW(__Vtemp1094,95,0,3);
    //char	__VpadToAlign1716[4];
    VL_SIGW(__Vtemp1096,95,0,3);
    //char	__VpadToAlign1732[4];
    VL_SIGW(__Vtemp1097,95,0,3);
    //char	__VpadToAlign1748[4];
    VL_SIGW(__Vtemp1098,95,0,3);
    //char	__VpadToAlign1764[4];
    VL_SIGW(__Vtemp1099,95,0,3);
    //char	__VpadToAlign1780[4];
    VL_SIGW(__Vtemp1102,95,0,3);
    //char	__VpadToAlign1796[4];
    VL_SIGW(__Vtemp1103,95,0,3);
    //char	__VpadToAlign1812[4];
    VL_SIGW(__Vtemp1105,95,0,3);
    //char	__VpadToAlign1828[4];
    VL_SIGW(__Vtemp1106,95,0,3);
    //char	__VpadToAlign1844[4];
    VL_SIGW(__Vtemp1107,95,0,3);
    //char	__VpadToAlign1860[4];
    VL_SIGW(__Vtemp1112,95,0,3);
    //char	__VpadToAlign1876[4];
    VL_SIGW(__Vtemp1113,95,0,3);
    //char	__VpadToAlign1892[4];
    VL_SIGW(__Vtemp1115,95,0,3);
    //char	__VpadToAlign1908[4];
    VL_SIGW(__Vtemp1116,95,0,3);
    //char	__VpadToAlign1924[4];
    VL_SIGW(__Vtemp1117,95,0,3);
    //char	__VpadToAlign1940[4];
    VL_SIGW(__Vtemp1118,95,0,3);
    //char	__VpadToAlign1956[4];
    VL_SIGW(__Vtemp1121,95,0,3);
    //char	__VpadToAlign1972[4];
    VL_SIGW(__Vtemp1122,95,0,3);
    //char	__VpadToAlign1988[4];
    VL_SIGW(__Vtemp1124,95,0,3);
    //char	__VpadToAlign2004[4];
    VL_SIGW(__Vtemp1125,95,0,3);
    //char	__VpadToAlign2020[4];
    VL_SIGW(__Vtemp1126,95,0,3);
    //char	__VpadToAlign2036[4];
    VL_SIGW(__Vtemp1131,95,0,3);
    //char	__VpadToAlign2052[4];
    VL_SIGW(__Vtemp1132,95,0,3);
    //char	__VpadToAlign2068[4];
    VL_SIGW(__Vtemp1134,95,0,3);
    //char	__VpadToAlign2084[4];
    VL_SIGW(__Vtemp1135,95,0,3);
    //char	__VpadToAlign2100[4];
    VL_SIGW(__Vtemp1136,95,0,3);
    //char	__VpadToAlign2116[4];
    VL_SIGW(__Vtemp1137,95,0,3);
    //char	__VpadToAlign2132[4];
    VL_SIGW(__Vtemp1140,95,0,3);
    //char	__VpadToAlign2148[4];
    VL_SIGW(__Vtemp1141,95,0,3);
    //char	__VpadToAlign2164[4];
    VL_SIGW(__Vtemp1143,95,0,3);
    //char	__VpadToAlign2180[4];
    VL_SIGW(__Vtemp1144,95,0,3);
    //char	__VpadToAlign2196[4];
    VL_SIGW(__Vtemp1145,95,0,3);
    //char	__VpadToAlign2212[4];
    VL_SIGW(__Vtemp1150,95,0,3);
    //char	__VpadToAlign2228[4];
    VL_SIGW(__Vtemp1151,95,0,3);
    //char	__VpadToAlign2244[4];
    VL_SIGW(__Vtemp1153,95,0,3);
    //char	__VpadToAlign2260[4];
    VL_SIGW(__Vtemp1154,95,0,3);
    //char	__VpadToAlign2276[4];
    VL_SIGW(__Vtemp1155,95,0,3);
    //char	__VpadToAlign2292[4];
    VL_SIGW(__Vtemp1156,95,0,3);
    //char	__VpadToAlign2308[4];
    VL_SIGW(__Vtemp1159,95,0,3);
    //char	__VpadToAlign2324[4];
    VL_SIGW(__Vtemp1160,95,0,3);
    //char	__VpadToAlign2340[4];
    VL_SIGW(__Vtemp1162,95,0,3);
    //char	__VpadToAlign2356[4];
    VL_SIGW(__Vtemp1163,95,0,3);
    //char	__VpadToAlign2372[4];
    VL_SIGW(__Vtemp1164,95,0,3);
    //char	__VpadToAlign2388[4];
    VL_SIGW(__Vtemp1169,95,0,3);
    //char	__VpadToAlign2404[4];
    VL_SIGW(__Vtemp1170,95,0,3);
    //char	__VpadToAlign2420[4];
    VL_SIGW(__Vtemp1172,95,0,3);
    //char	__VpadToAlign2436[4];
    VL_SIGW(__Vtemp1173,95,0,3);
    //char	__VpadToAlign2452[4];
    VL_SIGW(__Vtemp1174,95,0,3);
    //char	__VpadToAlign2468[4];
    VL_SIGW(__Vtemp1175,95,0,3);
    //char	__VpadToAlign2484[4];
    VL_SIGW(__Vtemp1178,95,0,3);
    //char	__VpadToAlign2500[4];
    VL_SIGW(__Vtemp1179,95,0,3);
    //char	__VpadToAlign2516[4];
    VL_SIGW(__Vtemp1181,95,0,3);
    //char	__VpadToAlign2532[4];
    VL_SIGW(__Vtemp1182,95,0,3);
    //char	__VpadToAlign2548[4];
    VL_SIGW(__Vtemp1183,95,0,3);
    //char	__VpadToAlign2564[4];
    VL_SIGW(__Vtemp1188,95,0,3);
    //char	__VpadToAlign2580[4];
    VL_SIGW(__Vtemp1189,95,0,3);
    //char	__VpadToAlign2596[4];
    VL_SIGW(__Vtemp1191,95,0,3);
    //char	__VpadToAlign2612[4];
    VL_SIGW(__Vtemp1192,95,0,3);
    //char	__VpadToAlign2628[4];
    VL_SIGW(__Vtemp1193,95,0,3);
    //char	__VpadToAlign2644[4];
    VL_SIGW(__Vtemp1194,95,0,3);
    //char	__VpadToAlign2660[4];
    VL_SIGW(__Vtemp1197,95,0,3);
    //char	__VpadToAlign2676[4];
    VL_SIGW(__Vtemp1198,95,0,3);
    //char	__VpadToAlign2692[4];
    VL_SIGW(__Vtemp1200,95,0,3);
    //char	__VpadToAlign2708[4];
    VL_SIGW(__Vtemp1201,95,0,3);
    //char	__VpadToAlign2724[4];
    VL_SIGW(__Vtemp1202,95,0,3);
    //char	__VpadToAlign2740[4];
    VL_SIGW(__Vtemp1206,95,0,3);
    //char	__VpadToAlign2756[4];
    VL_SIGW(__Vtemp1207,95,0,3);
    //char	__VpadToAlign2772[4];
    VL_SIGW(__Vtemp1209,95,0,3);
    //char	__VpadToAlign2788[4];
    VL_SIGW(__Vtemp1210,95,0,3);
    //char	__VpadToAlign2804[4];
    VL_SIGW(__Vtemp1211,95,0,3);
    //char	__VpadToAlign2820[4];
    VL_SIGW(__Vtemp1214,95,0,3);
    //char	__VpadToAlign2836[4];
    VL_SIGW(__Vtemp1215,95,0,3);
    //char	__VpadToAlign2852[4];
    VL_SIGW(__Vtemp1225,255,0,8);
    VL_SIGW(__Vtemp1226,255,0,8);
    VL_SIGW(__Vtemp1229,255,0,8);
    VL_SIGW(__Vtemp1230,255,0,8);
    VL_SIGW(__Vtemp1233,95,0,3);
    //char	__VpadToAlign2996[4];
    VL_SIGW(__Vtemp1234,95,0,3);
    //char	__VpadToAlign3012[4];
    VL_SIGW(__Vtemp1237,95,0,3);
    //char	__VpadToAlign3028[4];
    VL_SIGW(__Vtemp1238,95,0,3);
    //char	__VpadToAlign3044[4];
    VL_SIGW(__Vtemp1244,159,0,5);
    //char	__VpadToAlign3068[4];
    VL_SIGW(__Vtemp1245,159,0,5);
    //char	__VpadToAlign3092[4];
    VL_SIGW(__Vtemp1246,159,0,5);
    //char	__VpadToAlign3116[4];
    VL_SIGW(__Vtemp1250,95,0,3);
    //char	__VpadToAlign3132[4];
    VL_SIGW(__Vtemp1251,95,0,3);
    //char	__VpadToAlign3148[4];
    VL_SIGW(__Vtemp1254,95,0,3);
    //char	__VpadToAlign3164[4];
    VL_SIGW(__Vtemp1255,95,0,3);
    //char	__VpadToAlign3180[4];
    VL_SIGW(__Vtemp1258,191,0,6);
    VL_SIGW(__Vtemp1259,191,0,6);
    VL_SIGW(__Vtemp1266,95,0,3);
    //char	__VpadToAlign3244[4];
    VL_SIGW(__Vtemp1267,95,0,3);
    //char	__VpadToAlign3260[4];
    VL_SIGW(__Vtemp1269,95,0,3);
    //char	__VpadToAlign3276[4];
    VL_SIGW(__Vtemp1270,95,0,3);
    //char	__VpadToAlign3292[4];
    VL_SIGW(__Vtemp1272,95,0,3);
    //char	__VpadToAlign3308[4];
    VL_SIGW(__Vtemp1273,95,0,3);
    //char	__VpadToAlign3324[4];
    VL_SIGW(__Vtemp1280,95,0,3);
    //char	__VpadToAlign3340[4];
    VL_SIGW(__Vtemp1281,95,0,3);
    //char	__VpadToAlign3356[4];
    VL_SIGW(__Vtemp1283,95,0,3);
    //char	__VpadToAlign3372[4];
    VL_SIGW(__Vtemp1284,95,0,3);
    //char	__VpadToAlign3388[4];
    VL_SIGW(__Vtemp1286,95,0,3);
    //char	__VpadToAlign3404[4];
    VL_SIGW(__Vtemp1287,95,0,3);
    //char	__VpadToAlign3420[4];
    VL_SIGW(__Vtemp1294,95,0,3);
    //char	__VpadToAlign3436[4];
    VL_SIGW(__Vtemp1295,95,0,3);
    //char	__VpadToAlign3452[4];
    VL_SIGW(__Vtemp1297,95,0,3);
    //char	__VpadToAlign3468[4];
    VL_SIGW(__Vtemp1298,95,0,3);
    //char	__VpadToAlign3484[4];
    VL_SIGW(__Vtemp1300,95,0,3);
    //char	__VpadToAlign3500[4];
    VL_SIGW(__Vtemp1301,95,0,3);
    //char	__VpadToAlign3516[4];
    VL_SIGW(__Vtemp1303,95,0,3);
    //char	__VpadToAlign3532[4];
    VL_SIGW(__Vtemp1304,95,0,3);
    //char	__VpadToAlign3548[4];
    VL_SIGW(__Vtemp1305,95,0,3);
    //char	__VpadToAlign3564[4];
    VL_SIGW(__Vtemp1306,95,0,3);
    //char	__VpadToAlign3580[4];
    VL_SIGW(__Vtemp1307,95,0,3);
    //char	__VpadToAlign3596[4];
    VL_SIGW(__Vtemp1308,95,0,3);
    //char	__VpadToAlign3612[4];
    VL_SIGW(__Vtemp1309,95,0,3);
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__int_sync_xing_sourcelzy__DOT__AsyncResetRegVec_w2_i0_io_d 
	= (((vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__time__024 
	     >= vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__timecmp_0) 
	    << 1U) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__ipi_0));
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
    VL_EXTEND_WQ(65,64, __Vtemp845, vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__counter__DOT__count);
    VL_EXTEND_WI(65,4, __Vtemp846, (0xfU & ((7U & (
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
    VL_ADD_W(3, __Vtemp847, __Vtemp845, __Vtemp846);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__counter__DOT___T_588[0U] 
	= __Vtemp847[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__counter__DOT___T_588[1U] 
	= __Vtemp847[1U];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__counter__DOT___T_588[2U] 
	= (1U & __Vtemp847[2U]);
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_96061 
	= (1U & ((~ (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_24259 
		     >> 0x11U)) | ((0x1000U <= (0xffffU 
						& vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_24259)) 
				   & (0x101fU >= (0xffffU 
						  & vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_24259)))));
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
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_1053 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_denied___05FT_63_data) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_corrupt___05FT_63_data));
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
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_641 
	= (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_634 
	   & (~ ((IData)(1U) + vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_634)));
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
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_134) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw_io_invalidExc) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__isNaN_Z));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isSpecialInfOut 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw_io_infiniteExc) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__isInf_Z));
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
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1369 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_corrupt) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_denied___05FT_63_data));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1370 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_denied) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_denied___05FT_63_data));
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
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__RoccCommandRouter__DOT__cmdReadys_1 
	= ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__translator__DOT__state)) 
	   & (0x2bU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__RoccCommandRouter__DOT__cmd__DOT__ram_inst_opcode___05FT_63_data)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__RoccCommandRouter__DOT__cmdReadys_2 
	= ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__counter__DOT__state)) 
	   & (0x5bU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__RoccCommandRouter__DOT__cmd__DOT__ram_inst_opcode___05FT_63_data)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_192 
	= ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__count)) 
	   & (~ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_94[2U]));
    __Vtemp853[0U] = ((0xfffffe00U & ((IData)((VL_ULL(0xffffffffffffff) 
					       & VL_NEGATE_Q((QData)((IData)(
									     (1U 
									      & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[2U])))))) 
				      << 9U)) | ((0x100U 
						  & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[2U] 
						     << 8U)) 
						 | (0xffU 
						    & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_109[0U])));
    __Vtemp853[1U] = ((0x1ffU & ((IData)((VL_ULL(0xffffffffffffff) 
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
    __Vtemp853[2U] = (0x1ffU & ((IData)(((VL_ULL(0xffffffffffffff) 
					  & VL_NEGATE_Q((QData)((IData)(
									(1U 
									 & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[2U]))))) 
					 >> 0x20U)) 
				>> 0x17U));
    VL_EXTENDS_WW(74,65, __Vtemp854, __Vtemp853);
    __Vtemp855[0U] = __Vtemp854[0U];
    __Vtemp855[1U] = __Vtemp854[1U];
    __Vtemp855[2U] = (0x3ffU & __Vtemp854[2U]);
    VL_EXTENDS_WW(74,65, __Vtemp857, vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__divisor);
    __Vtemp858[0U] = __Vtemp857[0U];
    __Vtemp858[1U] = __Vtemp857[1U];
    __Vtemp858[2U] = (0x3ffU & __Vtemp857[2U]);
    VL_MULS_WWW(74,74,74, __Vtemp859, __Vtemp855, __Vtemp858);
    __Vtemp860[0U] = __Vtemp859[0U];
    __Vtemp860[1U] = __Vtemp859[1U];
    __Vtemp860[2U] = (0x3ffU & __Vtemp859[2U]);
    VL_EXTENDS_WW(75,74, __Vtemp861, __Vtemp860);
    __Vtemp863[0U] = __Vtemp861[0U];
    __Vtemp863[1U] = __Vtemp861[1U];
    __Vtemp863[2U] = (0x7ffU & __Vtemp861[2U]);
    __Vtemp868[0U] = vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_109[2U];
    __Vtemp868[1U] = vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_109[3U];
    __Vtemp868[2U] = ((0x3feU & (VL_NEGATE_I((IData)(
						     (1U 
						      & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_109[4U]))) 
				 << 1U)) | (1U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_109[4U]));
    VL_EXTENDS_WW(75,74, __Vtemp869, __Vtemp868);
    __Vtemp871[0U] = __Vtemp869[0U];
    __Vtemp871[1U] = __Vtemp869[1U];
    __Vtemp871[2U] = (0x7ffU & __Vtemp869[2U]);
    VL_ADD_W(3, __Vtemp872, __Vtemp863, __Vtemp871);
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
	= ((0xff000000U & (__Vtemp872[0U] << 0x18U)) 
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
	= ((0xffffffU & (__Vtemp872[0U] >> 8U)) | (0xff000000U 
						   & (__Vtemp872[1U] 
						      << 0x18U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_124[3U] 
	= ((0xffffffU & (__Vtemp872[1U] >> 8U)) | (0xff000000U 
						   & (__Vtemp872[2U] 
						      << 0x18U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_124[4U] 
	= (3U & (__Vtemp872[2U] >> 8U));
    __Vtemp876[0U] = 0U;
    __Vtemp876[1U] = 0U;
    __Vtemp876[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp877, __Vtemp876, 
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
						   __Vtemp877[1U])) 
				   << 0x20U) | (QData)((IData)(
							       __Vtemp877[0U])))))));
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
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__beatsDO_3 
	= (0x1ffU & ((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))
		      ? (~ (0xffffffU & (((IData)(0xfffU) 
					  << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
					 >> 3U))) : 0U));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__beatsDO_0 
	= (7U & ((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))
		  ? (~ (0x3ffffU & (((IData)(0x3fU) 
				     << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
				    >> 3U))) : 0U));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__beatsDO_2 
	= (0x1fU & ((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))
		     ? (~ (0xfffffU & (((IData)(0xffU) 
					<< (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
				       >> 3U))) : 0U));
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
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__beatsAI_0 
	= (0x1ffU & ((4U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))
		      ? 0U : (~ (0xffffffU & (((IData)(0xfffU) 
					       << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data)) 
					      >> 3U)))));
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
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_101 
	= (1U & ((~ (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
		     >> 2U)) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
				   >> 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_104 
	= (1U & ((~ (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
		     >> 2U)) & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
				>> 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_107 
	= (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
		  >> 2U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
			       >> 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_110 
	= (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
		  >> 2U) & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
			    >> 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_101 
	= (1U & ((~ (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
		     >> 2U)) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
				   >> 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_104 
	= (1U & ((~ (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
		     >> 2U)) & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
				>> 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_107 
	= (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
		  >> 2U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
			       >> 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_110 
	= (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
		  >> 2U) & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
			    >> 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_101 
	= (1U & ((~ (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
		     >> 2U)) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
				   >> 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_104 
	= (1U & ((~ (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
		     >> 2U)) & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
				>> 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_107 
	= (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
		  >> 2U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
			       >> 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_110 
	= (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
		  >> 2U) & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
			    >> 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__buffer__DOT__TLMonitor__DOT___T_101 
	= (1U & ((~ (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
		     >> 2U)) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
				   >> 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__buffer__DOT__TLMonitor__DOT___T_104 
	= (1U & ((~ (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
		     >> 2U)) & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
				>> 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__buffer__DOT__TLMonitor__DOT___T_107 
	= (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
		  >> 2U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
			       >> 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__buffer__DOT__TLMonitor__DOT___T_110 
	= (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
		  >> 2U) & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
			    >> 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT__Repeater__DOT__full)
	    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT__Repeater__DOT__saved_opcode)
	    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT__full)
	    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT__saved_opcode)
	    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__Repeater__DOT__full)
	    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__Repeater__DOT__saved_opcode)
	    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__Repeater__DOT__full)
	    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__Repeater__DOT__saved_opcode)
	    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_93 
	= (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
		 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
			   >> 2U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
					>> 2U))))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_96 
	= (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
		 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
			   >> 2U) & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
				     >> 2U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_93 
	= (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
		 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
			   >> 2U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
					>> 2U))))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_96 
	= (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
		 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
			   >> 2U) & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
				     >> 2U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_93 
	= (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
		 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
			   >> 2U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
					>> 2U))))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_96 
	= (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
		 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
			   >> 2U) & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
				     >> 2U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_93 
	= (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
		 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
			   >> 2U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
					>> 2U))))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_96 
	= (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
		 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
			   >> 2U) & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
				     >> 2U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_93 
	= (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
		 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
			   >> 2U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
					>> 2U))))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_96 
	= (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
		 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
			   >> 2U) & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
				     >> 2U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_93 
	= (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
		 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
			   >> 2U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
					>> 2U))))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_96 
	= (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
		 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
			   >> 2U) & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
				     >> 2U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_93 
	= (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
		 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
			   >> 2U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
					>> 2U))))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_96 
	= (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
		 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
			   >> 2U) & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
				     >> 2U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_93 
	= (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
		 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
			   >> 2U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
					>> 2U))))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_96 
	= (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
		 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
			   >> 2U) & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
				     >> 2U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__buffer__DOT__TLMonitor__DOT___T_93 
	= (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
		 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
			   >> 2U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
					>> 2U))))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__buffer__DOT__TLMonitor__DOT___T_96 
	= (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
		 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
			   >> 2U) & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
				     >> 2U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_size 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT__full)
	    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT__saved_size)
	    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_size 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT__Repeater__DOT__full)
	    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_bootrom__DOT__fragmenter__DOT__Repeater__DOT__saved_size)
	    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__Repeater_io_deq_bits_size 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__Repeater__DOT__full)
	    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__Repeater__DOT__saved_size)
	    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_size 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__Repeater__DOT__full)
	    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__Repeater__DOT__saved_size)
	    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_540 
	= ((0U == (0xffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_77 
				    >> 0x17U)))) & 
	   (0U == (0x7fffffU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_77))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_360 
	= ((0U == (0x7ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_77 
				     >> 0x34U)))) & 
	   (VL_ULL(0) == (VL_ULL(0xfffffffffffff) & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_77)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_408 
	= ((0xffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_77 
			     >> 8U))) | (0xff00U & 
					 ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_77) 
					  << 8U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_149 
	= ((0xffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_77 
			     >> 0x28U))) | (0xff00U 
					    & ((IData)(
						       (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_77 
							>> 0x20U)) 
					       << 8U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_96 
	= ((0xffffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_77 
			       >> 0x10U))) | (0xffff0000U 
					      & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_77) 
						 << 0x10U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__bad_va 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__vm_enabled) 
	   & (VL_GTS_IQQ(1,40,40, VL_ULL(0), vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr) 
	      != VL_GTS_III(1,27,27, 0U, (0x7ffffffU 
					  & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
						     >> 0xcU))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_0 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__vm_enabled) 
	   & ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__valid) 
		& ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_0 
				      >> 0x21U))) == 
		   (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
				      >> 0x1eU))))) 
	       & ((1U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_0 
				       >> 0xdU)))) 
		  | ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_0 
					>> 0x18U))) 
		     == (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
					   >> 0x15U)))))) 
	      & ((2U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_0 
				      >> 0xdU)))) | 
		 ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_0 
				     >> 0xfU))) == 
		  (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
				     >> 0xcU)))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_1 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__vm_enabled) 
	   & ((((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__valid 
			 >> 1U)) & ((0x1ffU & (IData)(
						      (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_1 
						       >> 0x21U))) 
				    == (0x1ffU & (IData)(
							 (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
							  >> 0x1eU))))) 
	       & ((1U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_1 
				       >> 0xdU)))) 
		  | ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_1 
					>> 0x18U))) 
		     == (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
					   >> 0x15U)))))) 
	      & ((2U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_1 
				      >> 0xdU)))) | 
		 ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_1 
				     >> 0xfU))) == 
		  (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
				     >> 0xcU)))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_2 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__vm_enabled) 
	   & ((((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__valid 
			 >> 2U)) & ((0x1ffU & (IData)(
						      (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_2 
						       >> 0x21U))) 
				    == (0x1ffU & (IData)(
							 (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
							  >> 0x1eU))))) 
	       & ((1U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_2 
				       >> 0xdU)))) 
		  | ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_2 
					>> 0x18U))) 
		     == (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
					   >> 0x15U)))))) 
	      & ((2U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_2 
				      >> 0xdU)))) | 
		 ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_2 
				     >> 0xfU))) == 
		  (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
				     >> 0xcU)))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_3 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__vm_enabled) 
	   & ((((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__valid 
			 >> 3U)) & ((0x1ffU & (IData)(
						      (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_3 
						       >> 0x21U))) 
				    == (0x1ffU & (IData)(
							 (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
							  >> 0x1eU))))) 
	       & ((1U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_3 
				       >> 0xdU)))) 
		  | ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_3 
					>> 0x18U))) 
		     == (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
					   >> 0x15U)))))) 
	      & ((2U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_3 
				      >> 0xdU)))) | 
		 ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_3 
				     >> 0xfU))) == 
		  (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
				     >> 0xcU)))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_4 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__vm_enabled) 
	   & ((((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__valid 
			 >> 4U)) & ((0x1ffU & (IData)(
						      (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_4 
						       >> 0x21U))) 
				    == (0x1ffU & (IData)(
							 (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
							  >> 0x1eU))))) 
	       & ((1U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_4 
				       >> 0xdU)))) 
		  | ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_4 
					>> 0x18U))) 
		     == (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
					   >> 0x15U)))))) 
	      & ((2U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_4 
				      >> 0xdU)))) | 
		 ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_4 
				     >> 0xfU))) == 
		  (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
				     >> 0xcU)))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_5 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__vm_enabled) 
	   & ((((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__valid 
			 >> 5U)) & ((0x1ffU & (IData)(
						      (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_5 
						       >> 0x21U))) 
				    == (0x1ffU & (IData)(
							 (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
							  >> 0x1eU))))) 
	       & ((1U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_5 
				       >> 0xdU)))) 
		  | ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_5 
					>> 0x18U))) 
		     == (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
					   >> 0x15U)))))) 
	      & ((2U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_5 
				      >> 0xdU)))) | 
		 ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_5 
				     >> 0xfU))) == 
		  (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
				     >> 0xcU)))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_6 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__vm_enabled) 
	   & ((((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__valid 
			 >> 6U)) & ((0x1ffU & (IData)(
						      (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_6 
						       >> 0x21U))) 
				    == (0x1ffU & (IData)(
							 (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
							  >> 0x1eU))))) 
	       & ((1U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_6 
				       >> 0xdU)))) 
		  | ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_6 
					>> 0x18U))) 
		     == (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
					   >> 0x15U)))))) 
	      & ((2U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_6 
				      >> 0xdU)))) | 
		 ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_6 
				     >> 0xfU))) == 
		  (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
				     >> 0xcU)))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_7 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__vm_enabled) 
	   & ((((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__valid 
			 >> 7U)) & ((0x1ffU & (IData)(
						      (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_7 
						       >> 0x21U))) 
				    == (0x1ffU & (IData)(
							 (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
							  >> 0x1eU))))) 
	       & ((1U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_7 
				       >> 0xdU)))) 
		  | ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_7 
					>> 0x18U))) 
		     == (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
					   >> 0x15U)))))) 
	      & ((2U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_7 
				      >> 0xdU)))) | 
		 ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_7 
				     >> 0xfU))) == 
		  (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
				     >> 0xcU)))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_8 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__vm_enabled) 
	   & ((((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__valid 
			 >> 8U)) & ((0x1ffU & (IData)(
						      (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_8 
						       >> 0x21U))) 
				    == (0x1ffU & (IData)(
							 (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
							  >> 0x1eU))))) 
	       & ((1U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_8 
				       >> 0xdU)))) 
		  | ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_8 
					>> 0x18U))) 
		     == (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
					   >> 0x15U)))))) 
	      & ((2U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_8 
				      >> 0xdU)))) | 
		 ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_8 
				     >> 0xfU))) == 
		  (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
				     >> 0xcU)))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_9 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__vm_enabled) 
	   & ((((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__valid 
			 >> 9U)) & ((0x1ffU & (IData)(
						      (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_9 
						       >> 0x21U))) 
				    == (0x1ffU & (IData)(
							 (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
							  >> 0x1eU))))) 
	       & ((1U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_9 
				       >> 0xdU)))) 
		  | ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_9 
					>> 0x18U))) 
		     == (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
					   >> 0x15U)))))) 
	      & ((2U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_9 
				      >> 0xdU)))) | 
		 ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_9 
				     >> 0xfU))) == 
		  (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
				     >> 0xcU)))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_10 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__vm_enabled) 
	   & ((((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__valid 
			 >> 0xaU)) & ((0x1ffU & (IData)(
							(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_10 
							 >> 0x21U))) 
				      == (0x1ffU & (IData)(
							   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
							    >> 0x1eU))))) 
	       & ((1U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_10 
				       >> 0xdU)))) 
		  | ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_10 
					>> 0x18U))) 
		     == (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
					   >> 0x15U)))))) 
	      & ((2U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_10 
				      >> 0xdU)))) | 
		 ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_10 
				     >> 0xfU))) == 
		  (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
				     >> 0xcU)))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_11 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__vm_enabled) 
	   & ((((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__valid 
			 >> 0xbU)) & ((0x1ffU & (IData)(
							(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_11 
							 >> 0x21U))) 
				      == (0x1ffU & (IData)(
							   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
							    >> 0x1eU))))) 
	       & ((1U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_11 
				       >> 0xdU)))) 
		  | ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_11 
					>> 0x18U))) 
		     == (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
					   >> 0x15U)))))) 
	      & ((2U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_11 
				      >> 0xdU)))) | 
		 ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_11 
				     >> 0xfU))) == 
		  (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
				     >> 0xcU)))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_12 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__vm_enabled) 
	   & ((((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__valid 
			 >> 0xcU)) & ((0x1ffU & (IData)(
							(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_12 
							 >> 0x21U))) 
				      == (0x1ffU & (IData)(
							   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
							    >> 0x1eU))))) 
	       & ((1U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_12 
				       >> 0xdU)))) 
		  | ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_12 
					>> 0x18U))) 
		     == (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
					   >> 0x15U)))))) 
	      & ((2U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_12 
				      >> 0xdU)))) | 
		 ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_12 
				     >> 0xfU))) == 
		  (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
				     >> 0xcU)))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_13 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__vm_enabled) 
	   & ((((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__valid 
			 >> 0xdU)) & ((0x1ffU & (IData)(
							(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_13 
							 >> 0x21U))) 
				      == (0x1ffU & (IData)(
							   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
							    >> 0x1eU))))) 
	       & ((1U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_13 
				       >> 0xdU)))) 
		  | ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_13 
					>> 0x18U))) 
		     == (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
					   >> 0x15U)))))) 
	      & ((2U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_13 
				      >> 0xdU)))) | 
		 ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_13 
				     >> 0xfU))) == 
		  (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
				     >> 0xcU)))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_14 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__vm_enabled) 
	   & ((((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__valid 
			 >> 0xeU)) & ((0x1ffU & (IData)(
							(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_14 
							 >> 0x21U))) 
				      == (0x1ffU & (IData)(
							   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
							    >> 0x1eU))))) 
	       & ((1U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_14 
				       >> 0xdU)))) 
		  | ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_14 
					>> 0x18U))) 
		     == (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
					   >> 0x15U)))))) 
	      & ((2U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_14 
				      >> 0xdU)))) | 
		 ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_14 
				     >> 0xfU))) == 
		  (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
				     >> 0xcU)))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_15 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__vm_enabled) 
	   & ((((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__valid 
			 >> 0xfU)) & ((0x1ffU & (IData)(
							(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_15 
							 >> 0x21U))) 
				      == (0x1ffU & (IData)(
							   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
							    >> 0x1eU))))) 
	       & ((1U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_15 
				       >> 0xdU)))) 
		  | ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_15 
					>> 0x18U))) 
		     == (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
					   >> 0x15U)))))) 
	      & ((2U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_15 
				      >> 0xdU)))) | 
		 ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_15 
				     >> 0xfU))) == 
		  (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
				     >> 0xcU)))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_16 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__vm_enabled) 
	   & ((((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__valid 
			 >> 0x10U)) & ((0x1ffU & (IData)(
							 (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_16 
							  >> 0x21U))) 
				       == (0x1ffU & (IData)(
							    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
							     >> 0x1eU))))) 
	       & ((1U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_16 
				       >> 0xdU)))) 
		  | ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_16 
					>> 0x18U))) 
		     == (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
					   >> 0x15U)))))) 
	      & ((2U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_16 
				      >> 0xdU)))) | 
		 ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_16 
				     >> 0xfU))) == 
		  (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
				     >> 0xcU)))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_17 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__vm_enabled) 
	   & ((((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__valid 
			 >> 0x11U)) & ((0x1ffU & (IData)(
							 (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_17 
							  >> 0x21U))) 
				       == (0x1ffU & (IData)(
							    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
							     >> 0x1eU))))) 
	       & ((1U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_17 
				       >> 0xdU)))) 
		  | ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_17 
					>> 0x18U))) 
		     == (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
					   >> 0x15U)))))) 
	      & ((2U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_17 
				      >> 0xdU)))) | 
		 ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_17 
				     >> 0xfU))) == 
		  (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
				     >> 0xcU)))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_18 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__vm_enabled) 
	   & ((((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__valid 
			 >> 0x12U)) & ((0x1ffU & (IData)(
							 (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_18 
							  >> 0x21U))) 
				       == (0x1ffU & (IData)(
							    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
							     >> 0x1eU))))) 
	       & ((1U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_18 
				       >> 0xdU)))) 
		  | ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_18 
					>> 0x18U))) 
		     == (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
					   >> 0x15U)))))) 
	      & ((2U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_18 
				      >> 0xdU)))) | 
		 ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_18 
				     >> 0xfU))) == 
		  (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
				     >> 0xcU)))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_19 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__vm_enabled) 
	   & ((((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__valid 
			 >> 0x13U)) & ((0x1ffU & (IData)(
							 (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_19 
							  >> 0x21U))) 
				       == (0x1ffU & (IData)(
							    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
							     >> 0x1eU))))) 
	       & ((1U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_19 
				       >> 0xdU)))) 
		  | ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_19 
					>> 0x18U))) 
		     == (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
					   >> 0x15U)))))) 
	      & ((2U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_19 
				      >> 0xdU)))) | 
		 ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_19 
				     >> 0xfU))) == 
		  (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
				     >> 0xcU)))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_20 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__vm_enabled) 
	   & ((((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__valid 
			 >> 0x14U)) & ((0x1ffU & (IData)(
							 (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_20 
							  >> 0x21U))) 
				       == (0x1ffU & (IData)(
							    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
							     >> 0x1eU))))) 
	       & ((1U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_20 
				       >> 0xdU)))) 
		  | ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_20 
					>> 0x18U))) 
		     == (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
					   >> 0x15U)))))) 
	      & ((2U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_20 
				      >> 0xdU)))) | 
		 ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_20 
				     >> 0xfU))) == 
		  (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
				     >> 0xcU)))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_21 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__vm_enabled) 
	   & ((((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__valid 
			 >> 0x15U)) & ((0x1ffU & (IData)(
							 (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_21 
							  >> 0x21U))) 
				       == (0x1ffU & (IData)(
							    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
							     >> 0x1eU))))) 
	       & ((1U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_21 
				       >> 0xdU)))) 
		  | ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_21 
					>> 0x18U))) 
		     == (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
					   >> 0x15U)))))) 
	      & ((2U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_21 
				      >> 0xdU)))) | 
		 ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_21 
				     >> 0xfU))) == 
		  (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
				     >> 0xcU)))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_22 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__vm_enabled) 
	   & ((((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__valid 
			 >> 0x16U)) & ((0x1ffU & (IData)(
							 (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_22 
							  >> 0x21U))) 
				       == (0x1ffU & (IData)(
							    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
							     >> 0x1eU))))) 
	       & ((1U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_22 
				       >> 0xdU)))) 
		  | ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_22 
					>> 0x18U))) 
		     == (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
					   >> 0x15U)))))) 
	      & ((2U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_22 
				      >> 0xdU)))) | 
		 ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_22 
				     >> 0xfU))) == 
		  (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
				     >> 0xcU)))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_23 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__vm_enabled) 
	   & ((((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__valid 
			 >> 0x17U)) & ((0x1ffU & (IData)(
							 (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_23 
							  >> 0x21U))) 
				       == (0x1ffU & (IData)(
							    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
							     >> 0x1eU))))) 
	       & ((1U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_23 
				       >> 0xdU)))) 
		  | ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_23 
					>> 0x18U))) 
		     == (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
					   >> 0x15U)))))) 
	      & ((2U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_23 
				      >> 0xdU)))) | 
		 ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_23 
				     >> 0xfU))) == 
		  (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
				     >> 0xcU)))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_24 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__vm_enabled) 
	   & ((((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__valid 
			 >> 0x18U)) & ((0x1ffU & (IData)(
							 (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_24 
							  >> 0x21U))) 
				       == (0x1ffU & (IData)(
							    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
							     >> 0x1eU))))) 
	       & ((1U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_24 
				       >> 0xdU)))) 
		  | ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_24 
					>> 0x18U))) 
		     == (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
					   >> 0x15U)))))) 
	      & ((2U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_24 
				      >> 0xdU)))) | 
		 ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_24 
				     >> 0xfU))) == 
		  (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
				     >> 0xcU)))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_25 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__vm_enabled) 
	   & ((((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__valid 
			 >> 0x19U)) & ((0x1ffU & (IData)(
							 (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_25 
							  >> 0x21U))) 
				       == (0x1ffU & (IData)(
							    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
							     >> 0x1eU))))) 
	       & ((1U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_25 
				       >> 0xdU)))) 
		  | ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_25 
					>> 0x18U))) 
		     == (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
					   >> 0x15U)))))) 
	      & ((2U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_25 
				      >> 0xdU)))) | 
		 ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_25 
				     >> 0xfU))) == 
		  (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
				     >> 0xcU)))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_26 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__vm_enabled) 
	   & ((((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__valid 
			 >> 0x1aU)) & ((0x1ffU & (IData)(
							 (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_26 
							  >> 0x21U))) 
				       == (0x1ffU & (IData)(
							    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
							     >> 0x1eU))))) 
	       & ((1U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_26 
				       >> 0xdU)))) 
		  | ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_26 
					>> 0x18U))) 
		     == (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
					   >> 0x15U)))))) 
	      & ((2U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_26 
				      >> 0xdU)))) | 
		 ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_26 
				     >> 0xfU))) == 
		  (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
				     >> 0xcU)))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_27 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__vm_enabled) 
	   & ((((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__valid 
			 >> 0x1bU)) & ((0x1ffU & (IData)(
							 (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_27 
							  >> 0x21U))) 
				       == (0x1ffU & (IData)(
							    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
							     >> 0x1eU))))) 
	       & ((1U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_27 
				       >> 0xdU)))) 
		  | ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_27 
					>> 0x18U))) 
		     == (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
					   >> 0x15U)))))) 
	      & ((2U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_27 
				      >> 0xdU)))) | 
		 ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_27 
				     >> 0xfU))) == 
		  (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
				     >> 0xcU)))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_28 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__vm_enabled) 
	   & ((((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__valid 
			 >> 0x1cU)) & ((0x1ffU & (IData)(
							 (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_28 
							  >> 0x21U))) 
				       == (0x1ffU & (IData)(
							    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
							     >> 0x1eU))))) 
	       & ((1U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_28 
				       >> 0xdU)))) 
		  | ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_28 
					>> 0x18U))) 
		     == (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
					   >> 0x15U)))))) 
	      & ((2U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_28 
				      >> 0xdU)))) | 
		 ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_28 
				     >> 0xfU))) == 
		  (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
				     >> 0xcU)))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_29 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__vm_enabled) 
	   & ((((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__valid 
			 >> 0x1dU)) & ((0x1ffU & (IData)(
							 (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_29 
							  >> 0x21U))) 
				       == (0x1ffU & (IData)(
							    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
							     >> 0x1eU))))) 
	       & ((1U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_29 
				       >> 0xdU)))) 
		  | ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_29 
					>> 0x18U))) 
		     == (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
					   >> 0x15U)))))) 
	      & ((2U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_29 
				      >> 0xdU)))) | 
		 ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_29 
				     >> 0xfU))) == 
		  (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
				     >> 0xcU)))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_30 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__vm_enabled) 
	   & ((((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__valid 
			 >> 0x1eU)) & ((0x1ffU & (IData)(
							 (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_30 
							  >> 0x21U))) 
				       == (0x1ffU & (IData)(
							    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
							     >> 0x1eU))))) 
	       & ((1U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_30 
				       >> 0xdU)))) 
		  | ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_30 
					>> 0x18U))) 
		     == (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
					   >> 0x15U)))))) 
	      & ((2U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_30 
				      >> 0xdU)))) | 
		 ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_30 
				     >> 0xfU))) == 
		  (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
				     >> 0xcU)))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_31 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__vm_enabled) 
	   & ((((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__valid 
			 >> 0x1fU)) & ((0x1ffU & (IData)(
							 (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_31 
							  >> 0x21U))) 
				       == (0x1ffU & (IData)(
							    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
							     >> 0x1eU))))) 
	       & ((1U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_31 
				       >> 0xdU)))) 
		  | ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_31 
					>> 0x18U))) 
		     == (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
					   >> 0x15U)))))) 
	      & ((2U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_31 
				      >> 0xdU)))) | 
		 ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_31 
				     >> 0xfU))) == 
		  (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
				     >> 0xcU)))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__hitsVec_32 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__vm_enabled) 
	   & ((((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__valid 
			 >> 0x20U)) & ((0x1ffU & (IData)(
							 (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_32 
							  >> 0x21U))) 
				       == (0x1ffU & (IData)(
							    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
							     >> 0x1eU))))) 
	       & ((1U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_32 
				       >> 0xdU)))) 
		  | ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_32 
					>> 0x18U))) 
		     == (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
					   >> 0x15U)))))) 
	      & ((2U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_32 
				      >> 0xdU)))) | 
		 ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_32 
				     >> 0xfU))) == 
		  (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
				     >> 0xcU)))))));
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_412 
	= ((0x3ffffffU & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker__DOT__address 
			  >> 6U)) == (0x3ffffffU & 
				      (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_address___05FT_63_data 
				       >> 6U)));
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_414 
	= ((0x3ffffffU & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_1__DOT__address 
			  >> 6U)) == (0x3ffffffU & 
				      (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_address___05FT_63_data 
				       >> 6U)));
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_416 
	= ((0x3ffffffU & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_2__DOT__address 
			  >> 6U)) == (0x3ffffffU & 
				      (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_address___05FT_63_data 
				       >> 6U)));
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_418 
	= ((0x3ffffffU & (vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_3__DOT__address 
			  >> 6U)) == (0x3ffffffU & 
				      (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_address___05FT_63_data 
				       >> 6U)));
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_515 
	= (1U & ((~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_address___05FT_63_data 
		     >> 2U)) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_address___05FT_63_data 
				   >> 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_518 
	= (1U & ((~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_address___05FT_63_data 
		     >> 2U)) & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_address___05FT_63_data 
				>> 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_521 
	= (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_address___05FT_63_data 
		  >> 2U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_address___05FT_63_data 
			       >> 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_524 
	= (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_address___05FT_63_data 
		  >> 2U) & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_address___05FT_63_data 
			    >> 1U)));
    vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_679 
	= ((IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_599_0) 
	   | (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_resp___05FT_63_data));
    vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_684 
	= ((IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_599_1) 
	   | (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_resp___05FT_63_data));
    vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_689 
	= ((IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_599_2) 
	   | (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_resp___05FT_63_data));
    vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_694 
	= ((IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_599_3) 
	   | (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_resp___05FT_63_data));
    vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_699 
	= ((IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_599_4) 
	   | (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_resp___05FT_63_data));
    vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_704 
	= ((IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_599_5) 
	   | (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_resp___05FT_63_data));
    vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_709 
	= ((IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_599_6) 
	   | (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_resp___05FT_63_data));
    vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_714 
	= ((IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_599_7) 
	   | (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_resp___05FT_63_data));
    vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_719 
	= ((IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_599_8) 
	   | (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_resp___05FT_63_data));
    vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_724 
	= ((IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_599_9) 
	   | (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_resp___05FT_63_data));
    vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_729 
	= ((IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_599_10) 
	   | (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_resp___05FT_63_data));
    vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_734 
	= ((IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_599_11) 
	   | (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_resp___05FT_63_data));
    vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_739 
	= ((IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_599_12) 
	   | (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_resp___05FT_63_data));
    vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_744 
	= ((IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_599_13) 
	   | (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_resp___05FT_63_data));
    vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_749 
	= ((IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_599_14) 
	   | (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_resp___05FT_63_data));
    vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_754 
	= ((IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_599_15) 
	   | (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_resp___05FT_63_data));
    vlTOPp->TestHarness__DOT__mem__DOT__axi4frag_auto_in_b_bits_resp 
	= ((IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_resp___05FT_63_data) 
	   | ((0xfU == (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data))
	       ? (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_599_15)
	       : ((0xeU == (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data))
		   ? (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_599_14)
		   : ((0xdU == (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data))
		       ? (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_599_13)
		       : ((0xcU == (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data))
			   ? (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_599_12)
			   : ((0xbU == (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data))
			       ? (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_599_11)
			       : ((0xaU == (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data))
				   ? (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_599_10)
				   : ((9U == (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data))
				       ? (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_599_9)
				       : ((8U == (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data))
					   ? (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_599_8)
					   : ((7U == (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data))
					       ? (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_599_7)
					       : ((6U 
						   == (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data))
						   ? (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_599_6)
						   : 
						  ((5U 
						    == (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data))
						    ? (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_599_5)
						    : 
						   ((4U 
						     == (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data))
						     ? (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_599_4)
						     : 
						    ((3U 
						      == (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data))
						      ? (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_599_3)
						      : 
						     ((2U 
						       == (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data))
						       ? (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_599_2)
						       : 
						      ((1U 
							== (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data))
						        ? (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_599_1)
						        : (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4frag__DOT___T_599_0)))))))))))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank_auto_in_b_bits_user 
	= ((0xfU == (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data))
	    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_31__DOT__ram___05FT_63_data)
	    : ((0xeU == (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data))
	        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_30__DOT__ram___05FT_63_data)
	        : ((0xdU == (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data))
		    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_29__DOT__ram___05FT_63_data)
		    : ((0xcU == (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data))
		        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_28__DOT__ram___05FT_63_data)
		        : ((0xbU == (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data))
			    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_27__DOT__ram___05FT_63_data)
			    : ((0xaU == (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data))
			        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_26__DOT__ram___05FT_63_data)
			        : ((9U == (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data))
				    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_25__DOT__ram___05FT_63_data)
				    : ((8U == (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data))
				        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_24__DOT__ram___05FT_63_data)
				        : ((7U == (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data))
					    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_23__DOT__ram___05FT_63_data)
					    : ((6U 
						== (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data))
					        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_22__DOT__ram___05FT_63_data)
					        : (
						   (5U 
						    == (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data))
						    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_21__DOT__ram___05FT_63_data)
						    : 
						   ((4U 
						     == (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data))
						     ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_20__DOT__ram___05FT_63_data)
						     : 
						    ((3U 
						      == (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data))
						      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_19__DOT__ram___05FT_63_data)
						      : 
						     ((2U 
						       == (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data))
						       ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_18__DOT__ram___05FT_63_data)
						       : 
						      ((1U 
							== (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data))
						        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_17__DOT__ram___05FT_63_data)
						        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_16__DOT__ram___05FT_63_data))))))))))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_354 
	= ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue_io_deq_bits_burst)) 
	   | (3U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue_io_deq_bits_size)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_241 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_235)
	    ? vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_237
	    : vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue_io_deq_bits_addr);
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_369 
	= (0x7fffffU & ((0xffU | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue_io_deq_bits_len) 
				  << 8U)) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue_io_deq_bits_size)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_240 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_235)
	    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_239)
	    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue_io_deq_bits_len));
    vlTOPp->TestHarness__DOT__mem__DOT__axi4frag_auto_in_r_bits_last 
	= ((IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_4__DOT__ram_last___05FT_63_data) 
	   & (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_4__DOT__ram_user___05FT_63_data));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__beatsAI_1 
	= (0x1ffU & ((4U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))
		      ? 0U : (~ (0xffffffU & (((IData)(0xfffU) 
					       << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data)) 
					      >> 3U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_453 
	= ((0xcU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data)) 
	   & (VL_ULL(0) == (VL_ULL(0x1fffff000) & (QData)((IData)(
								  (0x3000U 
								   ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data))))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_453 
	= ((0xcU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data)) 
	   & (VL_ULL(0) == (VL_ULL(0x1fffff000) & (QData)((IData)(
								  (0x3000U 
								   ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data))))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_453 
	= ((0xcU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data)) 
	   & (VL_ULL(0) == (VL_ULL(0x1fffff000) & (QData)((IData)(
								  (0x3000U 
								   ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data))))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_453 
	= ((0xcU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data)) 
	   & (VL_ULL(0) == (VL_ULL(0x1fffff000) & (QData)((IData)(
								  (0x3000U 
								   ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data))))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_190 
	= (((VL_ULL(0) == (VL_ULL(0x1fc000000) & (QData)((IData)(
								 (0xc000000U 
								  ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data))))) 
	    | (VL_ULL(0) == (VL_ULL(0x1ffff0000) & (QData)((IData)(
								   (0x2000000U 
								    ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data)))))) 
	   | (VL_ULL(0) == (VL_ULL(0x1fffff000) & (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data)))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_190 
	= (((VL_ULL(0) == (VL_ULL(0x1fc000000) & (QData)((IData)(
								 (0xc000000U 
								  ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data))))) 
	    | (VL_ULL(0) == (VL_ULL(0x1ffff0000) & (QData)((IData)(
								   (0x2000000U 
								    ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data)))))) 
	   | (VL_ULL(0) == (VL_ULL(0x1fffff000) & (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data)))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_190 
	= (((VL_ULL(0) == (VL_ULL(0x1fc000000) & (QData)((IData)(
								 (0xc000000U 
								  ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data))))) 
	    | (VL_ULL(0) == (VL_ULL(0x1ffff0000) & (QData)((IData)(
								   (0x2000000U 
								    ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data)))))) 
	   | (VL_ULL(0) == (VL_ULL(0x1fffff000) & (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data)))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_190 
	= (((VL_ULL(0) == (VL_ULL(0x1fc000000) & (QData)((IData)(
								 (0xc000000U 
								  ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data))))) 
	    | (VL_ULL(0) == (VL_ULL(0x1ffff0000) & (QData)((IData)(
								   (0x2000000U 
								    ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data)))))) 
	   | (VL_ULL(0) == (VL_ULL(0x1fffff000) & (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data)))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_73 
	= (1U & ((~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
		     >> 2U)) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
				   >> 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_76 
	= (1U & ((~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
		     >> 2U)) & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
				>> 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_79 
	= (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
		  >> 2U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
			       >> 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_82 
	= (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
		  >> 2U) & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
			    >> 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_73 
	= (1U & ((~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
		     >> 2U)) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
				   >> 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_76 
	= (1U & ((~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
		     >> 2U)) & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
				>> 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_79 
	= (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
		  >> 2U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
			       >> 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_82 
	= (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
		  >> 2U) & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
			    >> 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_73 
	= (1U & ((~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
		     >> 2U)) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
				   >> 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_76 
	= (1U & ((~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
		     >> 2U)) & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
				>> 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_79 
	= (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
		  >> 2U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
			       >> 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_82 
	= (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
		  >> 2U) & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
			    >> 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_73 
	= (1U & ((~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
		     >> 2U)) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
				   >> 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_76 
	= (1U & ((~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
		     >> 2U)) & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
				>> 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_79 
	= (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
		  >> 2U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
			       >> 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_82 
	= (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
		  >> 2U) & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
			    >> 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_65 
	= (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data)) 
		 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data))) 
			   >> 2U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
					>> 2U))))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_68 
	= (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data)) 
		 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data))) 
			   >> 2U) & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
				     >> 2U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_65 
	= (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data)) 
		 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data))) 
			   >> 2U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
					>> 2U))))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_68 
	= (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data)) 
		 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data))) 
			   >> 2U) & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
				     >> 2U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_65 
	= (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data)) 
		 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data))) 
			   >> 2U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
					>> 2U))))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_68 
	= (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data)) 
		 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data))) 
			   >> 2U) & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
				     >> 2U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_65 
	= (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data)) 
		 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data))) 
			   >> 2U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
					>> 2U))))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_68 
	= (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data)) 
		 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data))) 
			   >> 2U) & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
				     >> 2U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2570[0U] 
	= ((0xfffffffeU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_data___05FT_63_data) 
			   << 1U)) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_corrupt___05FT_63_data));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2570[1U] 
	= ((1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_data___05FT_63_data) 
		  >> 0x1fU)) | (0xfffffffeU & ((IData)(
						       (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_data___05FT_63_data 
							>> 0x20U)) 
					       << 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2570[2U] 
	= ((0xfffffffeU & ((IData)((((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data)) 
				     << 8U) | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_mask___05FT_63_data)))) 
			   << 1U)) | (1U & ((IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_data___05FT_63_data 
						     >> 0x20U)) 
					    >> 0x1fU)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2570[3U] 
	= ((0xfffffe00U & (0x2000U | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data) 
					<< 0x15U) | 
				       ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data) 
					<< 0x12U)) 
				      | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data) 
					  << 0xeU) 
					 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_source___05FT_63_data) 
					    << 9U))))) 
	   | ((1U & ((IData)((((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data)) 
			       << 8U) | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_mask___05FT_63_data)))) 
		     >> 0x1fU)) | (0xfffffffeU & ((IData)(
							  ((((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data)) 
							     << 8U) 
							    | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_mask___05FT_63_data))) 
							   >> 0x20U)) 
						  << 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__requestAIO_1_0 
	= ((((VL_ULL(0) == (VL_ULL(0xc8000000) & (QData)((IData)(
								 (0x8000000U 
								  ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data))))) 
	     | (VL_ULL(0) == (VL_ULL(0xca010000) & (QData)((IData)(
								   (0x2000000U 
								    ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data)))))) 
	    | (VL_ULL(0) == (VL_ULL(0xca012000) & (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data))))) 
	   | (VL_ULL(0) == (VL_ULL(0xca010000) & (QData)((IData)(
								 (0x10000U 
								  ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data))))));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank_auto_in_r_bits_user 
	= ((0xfU == (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data))
	    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_15__DOT__ram___05FT_63_data)
	    : ((0xeU == (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data))
	        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_14__DOT__ram___05FT_63_data)
	        : ((0xdU == (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data))
		    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_13__DOT__ram___05FT_63_data)
		    : ((0xcU == (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data))
		        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_12__DOT__ram___05FT_63_data)
		        : ((0xbU == (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data))
			    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_11__DOT__ram___05FT_63_data)
			    : ((0xaU == (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data))
			        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_10__DOT__ram___05FT_63_data)
			        : ((9U == (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data))
				    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_9__DOT__ram___05FT_63_data)
				    : ((8U == (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data))
				        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_8__DOT__ram___05FT_63_data)
				        : ((7U == (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data))
					    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_7__DOT__ram___05FT_63_data)
					    : ((6U 
						== (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data))
					        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_6__DOT__ram___05FT_63_data)
					        : (
						   (5U 
						    == (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data))
						    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_5__DOT__ram___05FT_63_data)
						    : 
						   ((4U 
						     == (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data))
						     ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_4__DOT__ram___05FT_63_data)
						     : 
						    ((3U 
						      == (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data))
						      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_3__DOT__ram___05FT_63_data)
						      : 
						     ((2U 
						       == (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data))
						       ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_2__DOT__ram___05FT_63_data)
						       : 
						      ((1U 
							== (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data))
						        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_1__DOT__ram___05FT_63_data)
						        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue__DOT__ram___05FT_63_data))))))))))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq_io_enq_bits_xcpt_ae_inst 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache_io_resp_valid) 
	    & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__s2_tl_error)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s2_tlb_resp_ae_inst));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_victim_dirty 
	= ((3U == (8U | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_victim_state_state))) 
	   | ((2U != (8U | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_victim_state_state))) 
	      & ((1U != (8U | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_victim_state_state))) 
		 & ((0U != (8U | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_victim_state_state))) 
		    & ((7U == (8U | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_victim_state_state))) 
		       | ((6U != (8U | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_victim_state_state))) 
			  & ((5U != (8U | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_victim_state_state))) 
			     & ((4U != (8U | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_victim_state_state))) 
				& (0xbU == (8U | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_victim_state_state)))))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2784 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2780) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_io_cpu_s2_xcpt_ma_ld));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2781 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2780) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_io_cpu_s2_xcpt_ma_st));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2790 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2780) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_io_cpu_s2_xcpt_pf_ld));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2787 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2780) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_io_cpu_s2_xcpt_pf_st));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_read 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_780) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_806));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_write 
	= ((((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd)) 
	     | (0x11U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd))) 
	    | (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_806));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl_auto_out_d_ready 
	= (1U & ((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))
		  ? (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue__DOT__maybe_full))
		  : (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue_1__DOT__maybe_full))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_len 
	= (0xffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__maybe_full)
		     ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__ram_len___05FT_55_data)
		     : (~ (0x7fffffU & (((IData)(0x7ffU) 
					 << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
					>> 3U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_468 
	= ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))
	    ? 3U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1_io_enq_bits_user 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data) 
		     | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data) 
			<< 5U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_93 
	= (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
		 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
			   >> 2U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
					>> 2U))))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_96 
	= (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
		 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
			   >> 2U) & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
				     >> 2U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_93 
	= (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
		 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
			   >> 2U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
					>> 2U))))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_96 
	= (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
		 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
			   >> 2U) & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
				     >> 2U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_384 
	= (0x1fU & ((4U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))
		     ? 0U : (~ (0xfffffU & (((IData)(0xffU) 
					     << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
					    >> 3U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1_io_deq_bits_wen 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__maybe_full)
		  ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__ram_wen___05FT_55_data)
		  : (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data) 
			>> 2U))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_489 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data) 
		  >> 2U) | ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_456)) 
			    & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue__DOT__maybe_full)))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_717 
	= (((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_678)) 
	    & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_680) 
	       != (1U & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data) 
			    >> 2U))))) | (8U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_678)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_93 
	= (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data)) 
		 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data))) 
			   >> 2U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
					>> 2U))))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_96 
	= (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data)) 
		 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data))) 
			   >> 2U) & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
				     >> 2U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_327 
	= ((3U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data)) 
	   & (2U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum[0U] 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT___T_22_doSubMags)
	    ? (~ ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[2U] 
		   << 0xaU) | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[1U] 
			       >> 0x16U))) : ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[2U] 
					       << 9U) 
					      | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[1U] 
						 >> 0x17U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum[1U] 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT___T_22_doSubMags)
	    ? (~ ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[3U] 
		   << 0xaU) | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[2U] 
			       >> 0x16U))) : ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[3U] 
					       << 9U) 
					      | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[2U] 
						 >> 0x17U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum[2U] 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT___T_22_doSubMags)
	    ? (~ ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[4U] 
		   << 0xaU) | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[3U] 
			       >> 0x16U))) : ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[4U] 
					       << 9U) 
					      | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[3U] 
						 >> 0x17U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum[3U] 
	= (0xfffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT___T_22_doSubMags)
		      ? (~ ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[5U] 
			     << 0xaU) | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[4U] 
					 >> 0x16U)))
		      : ((0x600U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT___T_22_highAlignedSigC 
					     >> 0x35U)) 
				    << 9U)) | (0x1ffU 
					       & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[5U] 
						   << 9U) 
						  | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[4U] 
						     >> 0x17U))))));
    __Vtemp919[0U] = vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[0U];
    __Vtemp919[1U] = vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[1U];
    __Vtemp919[2U] = vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[2U];
    __Vtemp919[3U] = vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[3U];
    VL_EXTEND_WI(110,1, __Vtemp920, (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT___T_22_doSubMags));
    __Vtemp921[0U] = __Vtemp920[0U];
    __Vtemp921[1U] = __Vtemp920[1U];
    __Vtemp921[2U] = __Vtemp920[2U];
    __Vtemp921[3U] = __Vtemp920[3U];
    VL_ADD_W(4, __Vtemp922, __Vtemp919, __Vtemp921);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[0U] 
	= ((0x2000U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[3U])
	    ? (~ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[0U])
	    : __Vtemp922[0U]);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[1U] 
	= ((0x2000U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[3U])
	    ? (~ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[1U])
	    : __Vtemp922[1U]);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
	= ((0x2000U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[3U])
	    ? (~ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[2U])
	    : __Vtemp922[2U]);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[3U] 
	= (0x1fffU & ((0x2000U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[3U])
		       ? (~ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[3U])
		       : __Vtemp922[3U]));
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_507 
	= (1U & ((3U <= (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_size___05FT_63_data))) 
		 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_size___05FT_63_data))) 
			   >> 2U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_address___05FT_63_data 
					>> 2U))))));
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_510 
	= (1U & ((3U <= (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_size___05FT_63_data))) 
		 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_size___05FT_63_data))) 
			   >> 2U) & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__ram_address___05FT_63_data 
				     >> 2U)))));
    VL_EXTEND_WI(66,32, __Vtemp926, vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_469_7);
    VL_EXTEND_WQ(66,63, __Vtemp928, vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_459);
    VL_SHIFTL_WWI(66,66,32, __Vtemp929, __Vtemp928, 3U);
    VL_EXTEND_WI(66,32, __Vtemp931, vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_469_6);
    VL_EXTEND_WQ(66,63, __Vtemp933, vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_459);
    VL_SHIFTL_WWI(66,66,32, __Vtemp934, __Vtemp933, 3U);
    VL_EXTEND_WI(66,32, __Vtemp936, vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_469_5);
    VL_EXTEND_WQ(66,63, __Vtemp938, vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_459);
    VL_SHIFTL_WWI(66,66,32, __Vtemp939, __Vtemp938, 3U);
    VL_EXTEND_WI(66,32, __Vtemp941, vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_469_4);
    VL_EXTEND_WQ(66,63, __Vtemp943, vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_459);
    VL_SHIFTL_WWI(66,66,32, __Vtemp944, __Vtemp943, 3U);
    VL_EXTEND_WI(66,32, __Vtemp946, vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_469_3);
    VL_EXTEND_WQ(66,63, __Vtemp948, vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_459);
    VL_SHIFTL_WWI(66,66,32, __Vtemp949, __Vtemp948, 3U);
    VL_EXTEND_WI(66,32, __Vtemp951, vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_469_2);
    VL_EXTEND_WQ(66,63, __Vtemp953, vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_459);
    VL_SHIFTL_WWI(66,66,32, __Vtemp954, __Vtemp953, 3U);
    VL_EXTEND_WI(66,32, __Vtemp956, vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_469_1);
    VL_EXTEND_WQ(66,63, __Vtemp958, vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_459);
    VL_SHIFTL_WWI(66,66,32, __Vtemp959, __Vtemp958, 3U);
    VL_EXTEND_WI(66,32, __Vtemp961, vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_469_0);
    VL_EXTEND_WQ(66,63, __Vtemp963, vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_459);
    VL_SHIFTL_WWI(66,66,32, __Vtemp964, __Vtemp963, 3U);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_509 
	= (((((((IData)((0U == (((__Vtemp926[0U] ^ 
				  __Vtemp929[0U]) | 
				 (__Vtemp926[1U] ^ 
				  __Vtemp929[1U])) 
				| (__Vtemp926[2U] ^ 
				   (3U & __Vtemp929[2U]))))) 
		<< 1U) | (0U == (((__Vtemp931[0U] ^ 
				   __Vtemp934[0U]) 
				  | (__Vtemp931[1U] 
				     ^ __Vtemp934[1U])) 
				 | (__Vtemp931[2U] 
				    ^ (3U & __Vtemp934[2U]))))) 
	      << 6U) | ((((IData)((0U == (((__Vtemp936[0U] 
					    ^ __Vtemp939[0U]) 
					   | (__Vtemp936[1U] 
					      ^ __Vtemp939[1U])) 
					  | (__Vtemp936[2U] 
					     ^ (3U 
						& __Vtemp939[2U]))))) 
			  << 1U) | (0U == (((__Vtemp941[0U] 
					     ^ __Vtemp944[0U]) 
					    | (__Vtemp941[1U] 
					       ^ __Vtemp944[1U])) 
					   | (__Vtemp941[2U] 
					      ^ (3U 
						 & __Vtemp944[2U]))))) 
			<< 4U)) | (((((IData)((0U == 
					       (((__Vtemp946[0U] 
						  ^ 
						  __Vtemp949[0U]) 
						 | (__Vtemp946[1U] 
						    ^ 
						    __Vtemp949[1U])) 
						| (__Vtemp946[2U] 
						   ^ 
						   (3U 
						    & __Vtemp949[2U]))))) 
				      << 1U) | (0U 
						== 
						(((__Vtemp951[0U] 
						   ^ 
						   __Vtemp954[0U]) 
						  | (__Vtemp951[1U] 
						     ^ 
						     __Vtemp954[1U])) 
						 | (__Vtemp951[2U] 
						    ^ 
						    (3U 
						     & __Vtemp954[2U]))))) 
				    << 2U) | (((IData)(
						       (0U 
							== 
							(((__Vtemp956[0U] 
							   ^ 
							   __Vtemp959[0U]) 
							  | (__Vtemp956[1U] 
							     ^ 
							     __Vtemp959[1U])) 
							 | (__Vtemp956[2U] 
							    ^ 
							    (3U 
							     & __Vtemp959[2U]))))) 
					       << 1U) 
					      | (0U 
						 == 
						 (((__Vtemp961[0U] 
						    ^ 
						    __Vtemp964[0U]) 
						   | (__Vtemp961[1U] 
						      ^ 
						      __Vtemp964[1U])) 
						  | (__Vtemp961[2U] 
						     ^ 
						     (3U 
						      & __Vtemp964[2U]))))))) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_465));
    VL_EXTEND_WQ(66,63, __Vtemp971, vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_459);
    VL_SHIFTL_WWI(66,66,32, __Vtemp972, __Vtemp971, 3U);
    VL_EXTEND_WQ(66,54, __Vtemp974, (VL_ULL(0x3fffffffffffff) 
				     & (((QData)((IData)(
							 (3U 
							  & __Vtemp972[2U]))) 
					 << 0x34U) 
					| (((QData)((IData)(
							    __Vtemp972[1U])) 
					    << 0x14U) 
					   | ((QData)((IData)(
							      __Vtemp972[0U])) 
					      >> 0xcU)))));
    VL_SHIFTL_WWI(66,66,32, __Vtemp975, __Vtemp974, 0xcU);
    __Vtemp977[0U] = (0x60000000U ^ __Vtemp975[0U]);
    __Vtemp977[1U] = __Vtemp975[1U];
    __Vtemp977[2U] = (3U & __Vtemp975[2U]);
    VL_EXTEND_WW(67,66, __Vtemp978, __Vtemp977);
    VL_EXTEND_WQ(66,63, __Vtemp985, vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_459);
    VL_SHIFTL_WWI(66,66,32, __Vtemp986, __Vtemp985, 3U);
    VL_EXTEND_WQ(66,54, __Vtemp988, (VL_ULL(0x3fffffffffffff) 
				     & (((QData)((IData)(
							 (3U 
							  & __Vtemp986[2U]))) 
					 << 0x34U) 
					| (((QData)((IData)(
							    __Vtemp986[1U])) 
					    << 0x14U) 
					   | ((QData)((IData)(
							      __Vtemp986[0U])) 
					      >> 0xcU)))));
    VL_SHIFTL_WWI(66,66,32, __Vtemp989, __Vtemp988, 0xcU);
    __Vtemp991[0U] = (0x3000U ^ __Vtemp989[0U]);
    __Vtemp991[1U] = __Vtemp989[1U];
    __Vtemp991[2U] = (3U & __Vtemp989[2U]);
    VL_EXTEND_WW(67,66, __Vtemp992, __Vtemp991);
    VL_EXTEND_WQ(66,63, __Vtemp999, vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_459);
    VL_SHIFTL_WWI(66,66,32, __Vtemp1000, __Vtemp999, 3U);
    VL_EXTEND_WQ(66,54, __Vtemp1002, (VL_ULL(0x3fffffffffffff) 
				      & (((QData)((IData)(
							  (3U 
							   & __Vtemp1000[2U]))) 
					  << 0x34U) 
					 | (((QData)((IData)(
							     __Vtemp1000[1U])) 
					     << 0x14U) 
					    | ((QData)((IData)(
							       __Vtemp1000[0U])) 
					       >> 0xcU)))));
    VL_SHIFTL_WWI(66,66,32, __Vtemp1003, __Vtemp1002, 0xcU);
    __Vtemp1005[0U] = (0xc000000U ^ __Vtemp1003[0U]);
    __Vtemp1005[1U] = __Vtemp1003[1U];
    __Vtemp1005[2U] = (3U & __Vtemp1003[2U]);
    VL_EXTEND_WW(67,66, __Vtemp1006, __Vtemp1005);
    VL_EXTEND_WQ(66,63, __Vtemp1013, vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_459);
    VL_SHIFTL_WWI(66,66,32, __Vtemp1014, __Vtemp1013, 3U);
    VL_EXTEND_WQ(66,54, __Vtemp1016, (VL_ULL(0x3fffffffffffff) 
				      & (((QData)((IData)(
							  (3U 
							   & __Vtemp1014[2U]))) 
					  << 0x34U) 
					 | (((QData)((IData)(
							     __Vtemp1014[1U])) 
					     << 0x14U) 
					    | ((QData)((IData)(
							       __Vtemp1014[0U])) 
					       >> 0xcU)))));
    VL_SHIFTL_WWI(66,66,32, __Vtemp1017, __Vtemp1016, 0xcU);
    __Vtemp1019[0U] = (0x2000000U ^ __Vtemp1017[0U]);
    __Vtemp1019[1U] = __Vtemp1017[1U];
    __Vtemp1019[2U] = (3U & __Vtemp1017[2U]);
    VL_EXTEND_WW(67,66, __Vtemp1020, __Vtemp1019);
    VL_EXTEND_WQ(66,63, __Vtemp1027, vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_459);
    VL_SHIFTL_WWI(66,66,32, __Vtemp1028, __Vtemp1027, 3U);
    VL_EXTEND_WQ(66,54, __Vtemp1030, (VL_ULL(0x3fffffffffffff) 
				      & (((QData)((IData)(
							  (3U 
							   & __Vtemp1028[2U]))) 
					  << 0x34U) 
					 | (((QData)((IData)(
							     __Vtemp1028[1U])) 
					     << 0x14U) 
					    | ((QData)((IData)(
							       __Vtemp1028[0U])) 
					       >> 0xcU)))));
    VL_SHIFTL_WWI(66,66,32, __Vtemp1031, __Vtemp1030, 0xcU);
    __Vtemp1033[0U] = (0x10000U ^ __Vtemp1031[0U]);
    __Vtemp1033[1U] = __Vtemp1031[1U];
    __Vtemp1033[2U] = (3U & __Vtemp1031[2U]);
    VL_EXTEND_WW(67,66, __Vtemp1034, __Vtemp1033);
    VL_EXTEND_WQ(66,63, __Vtemp1041, vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_459);
    VL_SHIFTL_WWI(66,66,32, __Vtemp1042, __Vtemp1041, 3U);
    VL_EXTEND_WQ(66,54, __Vtemp1044, (VL_ULL(0x3fffffffffffff) 
				      & (((QData)((IData)(
							  (3U 
							   & __Vtemp1042[2U]))) 
					  << 0x34U) 
					 | (((QData)((IData)(
							     __Vtemp1042[1U])) 
					     << 0x14U) 
					    | ((QData)((IData)(
							       __Vtemp1042[0U])) 
					       >> 0xcU)))));
    VL_SHIFTL_WWI(66,66,32, __Vtemp1045, __Vtemp1044, 0xcU);
    __Vtemp1047[0U] = (0x80000000U ^ __Vtemp1045[0U]);
    __Vtemp1047[1U] = __Vtemp1045[1U];
    __Vtemp1047[2U] = (3U & __Vtemp1045[2U]);
    VL_EXTEND_WW(67,66, __Vtemp1048, __Vtemp1047);
    VL_EXTEND_WQ(66,63, __Vtemp1054, vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_459);
    VL_SHIFTL_WWI(66,66,32, __Vtemp1055, __Vtemp1054, 3U);
    VL_EXTEND_WQ(66,54, __Vtemp1057, (VL_ULL(0x3fffffffffffff) 
				      & (((QData)((IData)(
							  (3U 
							   & __Vtemp1055[2U]))) 
					  << 0x34U) 
					 | (((QData)((IData)(
							     __Vtemp1055[1U])) 
					     << 0x14U) 
					    | ((QData)((IData)(
							       __Vtemp1055[0U])) 
					       >> 0xcU)))));
    VL_SHIFTL_WWI(66,66,32, __Vtemp1058, __Vtemp1057, 0xcU);
    __Vtemp1059[0U] = __Vtemp1058[0U];
    __Vtemp1059[1U] = __Vtemp1058[1U];
    __Vtemp1059[2U] = (3U & __Vtemp1058[2U]);
    VL_EXTEND_WW(67,66, __Vtemp1060, __Vtemp1059);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__pmaPgLevelHomogeneous_2 
	= (((((((0U == (((0xe0000000U & __Vtemp978[0U]) 
			 | __Vtemp978[1U]) | (7U & 
					      __Vtemp978[2U]))) 
		| (0U == (((0xfffff000U & __Vtemp992[0U]) 
			   | __Vtemp992[1U]) | (7U 
						& __Vtemp992[2U])))) 
	       | (0U == (((0xfc000000U & __Vtemp1006[0U]) 
			  | __Vtemp1006[1U]) | (7U 
						& __Vtemp1006[2U])))) 
	      | (0U == (((0xffff0000U & __Vtemp1020[0U]) 
			 | __Vtemp1020[1U]) | (7U & 
					       __Vtemp1020[2U])))) 
	     | (0U == (((0xffff0000U & __Vtemp1034[0U]) 
			| __Vtemp1034[1U]) | (7U & 
					      __Vtemp1034[2U])))) 
	    | (0U == (((0xf0000000U & __Vtemp1048[0U]) 
		       | __Vtemp1048[1U]) | (7U & __Vtemp1048[2U])))) 
	   | (0U == (((0xfffff000U & __Vtemp1060[0U]) 
		      | __Vtemp1060[1U]) | (7U & __Vtemp1060[2U]))));
    VL_EXTEND_WQ(66,63, __Vtemp1064, vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_459);
    VL_SHIFTL_WWI(66,66,32, __Vtemp1065, __Vtemp1064, 3U);
    VL_EXTEND_WQ(66,54, __Vtemp1067, (VL_ULL(0x3fffffffffffff) 
				      & (((QData)((IData)(
							  (3U 
							   & __Vtemp1065[2U]))) 
					  << 0x34U) 
					 | (((QData)((IData)(
							     __Vtemp1065[1U])) 
					     << 0x14U) 
					    | ((QData)((IData)(
							       __Vtemp1065[0U])) 
					       >> 0xcU)))));
    VL_SHIFTL_WWI(66,66,32, __Vtemp1068, __Vtemp1067, 0xcU);
    VL_EXTEND_WI(66,32, __Vtemp1069, (~ (3U | (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_0_addr 
						  << 2U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_982[0U] 
	= (__Vtemp1068[0U] ^ __Vtemp1069[0U]);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_982[1U] 
	= (__Vtemp1068[1U] ^ __Vtemp1069[1U]);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_982[2U] 
	= (3U & (__Vtemp1068[2U] ^ __Vtemp1069[2U]));
    VL_EXTEND_WQ(66,63, __Vtemp1074, vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_459);
    VL_SHIFTL_WWI(66,66,32, __Vtemp1075, __Vtemp1074, 3U);
    VL_EXTEND_WQ(66,54, __Vtemp1077, (VL_ULL(0x3fffffffffffff) 
				      & (((QData)((IData)(
							  (3U 
							   & __Vtemp1075[2U]))) 
					  << 0x34U) 
					 | (((QData)((IData)(
							     __Vtemp1075[1U])) 
					     << 0x14U) 
					    | ((QData)((IData)(
							       __Vtemp1075[0U])) 
					       >> 0xcU)))));
    VL_SHIFTL_WWI(66,66,32, __Vtemp1078, __Vtemp1077, 0xcU);
    __Vtemp1079[0U] = __Vtemp1078[0U];
    __Vtemp1079[1U] = __Vtemp1078[1U];
    __Vtemp1079[2U] = (3U & __Vtemp1078[2U]);
    VL_EXTEND_WI(66,32, __Vtemp1080, (~ (3U | (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_0_addr 
						  << 2U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1030 
	= VL_LT_W(3, __Vtemp1079, __Vtemp1080);
    VL_EXTEND_WQ(66,63, __Vtemp1083, vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_459);
    VL_SHIFTL_WWI(66,66,32, __Vtemp1084, __Vtemp1083, 3U);
    VL_EXTEND_WQ(66,54, __Vtemp1086, (VL_ULL(0x3fffffffffffff) 
				      & (((QData)((IData)(
							  (3U 
							   & __Vtemp1084[2U]))) 
					  << 0x34U) 
					 | (((QData)((IData)(
							     __Vtemp1084[1U])) 
					     << 0x14U) 
					    | ((QData)((IData)(
							       __Vtemp1084[0U])) 
					       >> 0xcU)))));
    VL_SHIFTL_WWI(66,66,32, __Vtemp1087, __Vtemp1086, 0xcU);
    VL_EXTEND_WI(66,32, __Vtemp1088, (~ (3U | (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_1_addr 
						  << 2U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1085[0U] 
	= (__Vtemp1087[0U] ^ __Vtemp1088[0U]);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1085[1U] 
	= (__Vtemp1087[1U] ^ __Vtemp1088[1U]);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1085[2U] 
	= (3U & (__Vtemp1087[2U] ^ __Vtemp1088[2U]));
    VL_EXTEND_WQ(66,63, __Vtemp1093, vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_459);
    VL_SHIFTL_WWI(66,66,32, __Vtemp1094, __Vtemp1093, 3U);
    VL_EXTEND_WQ(66,54, __Vtemp1096, (VL_ULL(0x3fffffffffffff) 
				      & (((QData)((IData)(
							  (3U 
							   & __Vtemp1094[2U]))) 
					  << 0x34U) 
					 | (((QData)((IData)(
							     __Vtemp1094[1U])) 
					     << 0x14U) 
					    | ((QData)((IData)(
							       __Vtemp1094[0U])) 
					       >> 0xcU)))));
    VL_SHIFTL_WWI(66,66,32, __Vtemp1097, __Vtemp1096, 0xcU);
    __Vtemp1098[0U] = __Vtemp1097[0U];
    __Vtemp1098[1U] = __Vtemp1097[1U];
    __Vtemp1098[2U] = (3U & __Vtemp1097[2U]);
    VL_EXTEND_WI(66,32, __Vtemp1099, (~ (3U | (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_1_addr 
						  << 2U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1133 
	= VL_LT_W(3, __Vtemp1098, __Vtemp1099);
    VL_EXTEND_WQ(66,63, __Vtemp1102, vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_459);
    VL_SHIFTL_WWI(66,66,32, __Vtemp1103, __Vtemp1102, 3U);
    VL_EXTEND_WQ(66,54, __Vtemp1105, (VL_ULL(0x3fffffffffffff) 
				      & (((QData)((IData)(
							  (3U 
							   & __Vtemp1103[2U]))) 
					  << 0x34U) 
					 | (((QData)((IData)(
							     __Vtemp1103[1U])) 
					     << 0x14U) 
					    | ((QData)((IData)(
							       __Vtemp1103[0U])) 
					       >> 0xcU)))));
    VL_SHIFTL_WWI(66,66,32, __Vtemp1106, __Vtemp1105, 0xcU);
    VL_EXTEND_WI(66,32, __Vtemp1107, (~ (3U | (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_2_addr 
						  << 2U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1188[0U] 
	= (__Vtemp1106[0U] ^ __Vtemp1107[0U]);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1188[1U] 
	= (__Vtemp1106[1U] ^ __Vtemp1107[1U]);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1188[2U] 
	= (3U & (__Vtemp1106[2U] ^ __Vtemp1107[2U]));
    VL_EXTEND_WQ(66,63, __Vtemp1112, vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_459);
    VL_SHIFTL_WWI(66,66,32, __Vtemp1113, __Vtemp1112, 3U);
    VL_EXTEND_WQ(66,54, __Vtemp1115, (VL_ULL(0x3fffffffffffff) 
				      & (((QData)((IData)(
							  (3U 
							   & __Vtemp1113[2U]))) 
					  << 0x34U) 
					 | (((QData)((IData)(
							     __Vtemp1113[1U])) 
					     << 0x14U) 
					    | ((QData)((IData)(
							       __Vtemp1113[0U])) 
					       >> 0xcU)))));
    VL_SHIFTL_WWI(66,66,32, __Vtemp1116, __Vtemp1115, 0xcU);
    __Vtemp1117[0U] = __Vtemp1116[0U];
    __Vtemp1117[1U] = __Vtemp1116[1U];
    __Vtemp1117[2U] = (3U & __Vtemp1116[2U]);
    VL_EXTEND_WI(66,32, __Vtemp1118, (~ (3U | (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_2_addr 
						  << 2U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1236 
	= VL_LT_W(3, __Vtemp1117, __Vtemp1118);
    VL_EXTEND_WQ(66,63, __Vtemp1121, vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_459);
    VL_SHIFTL_WWI(66,66,32, __Vtemp1122, __Vtemp1121, 3U);
    VL_EXTEND_WQ(66,54, __Vtemp1124, (VL_ULL(0x3fffffffffffff) 
				      & (((QData)((IData)(
							  (3U 
							   & __Vtemp1122[2U]))) 
					  << 0x34U) 
					 | (((QData)((IData)(
							     __Vtemp1122[1U])) 
					     << 0x14U) 
					    | ((QData)((IData)(
							       __Vtemp1122[0U])) 
					       >> 0xcU)))));
    VL_SHIFTL_WWI(66,66,32, __Vtemp1125, __Vtemp1124, 0xcU);
    VL_EXTEND_WI(66,32, __Vtemp1126, (~ (3U | (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_3_addr 
						  << 2U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1291[0U] 
	= (__Vtemp1125[0U] ^ __Vtemp1126[0U]);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1291[1U] 
	= (__Vtemp1125[1U] ^ __Vtemp1126[1U]);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1291[2U] 
	= (3U & (__Vtemp1125[2U] ^ __Vtemp1126[2U]));
    VL_EXTEND_WQ(66,63, __Vtemp1131, vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_459);
    VL_SHIFTL_WWI(66,66,32, __Vtemp1132, __Vtemp1131, 3U);
    VL_EXTEND_WQ(66,54, __Vtemp1134, (VL_ULL(0x3fffffffffffff) 
				      & (((QData)((IData)(
							  (3U 
							   & __Vtemp1132[2U]))) 
					  << 0x34U) 
					 | (((QData)((IData)(
							     __Vtemp1132[1U])) 
					     << 0x14U) 
					    | ((QData)((IData)(
							       __Vtemp1132[0U])) 
					       >> 0xcU)))));
    VL_SHIFTL_WWI(66,66,32, __Vtemp1135, __Vtemp1134, 0xcU);
    __Vtemp1136[0U] = __Vtemp1135[0U];
    __Vtemp1136[1U] = __Vtemp1135[1U];
    __Vtemp1136[2U] = (3U & __Vtemp1135[2U]);
    VL_EXTEND_WI(66,32, __Vtemp1137, (~ (3U | (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_3_addr 
						  << 2U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1339 
	= VL_LT_W(3, __Vtemp1136, __Vtemp1137);
    VL_EXTEND_WQ(66,63, __Vtemp1140, vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_459);
    VL_SHIFTL_WWI(66,66,32, __Vtemp1141, __Vtemp1140, 3U);
    VL_EXTEND_WQ(66,54, __Vtemp1143, (VL_ULL(0x3fffffffffffff) 
				      & (((QData)((IData)(
							  (3U 
							   & __Vtemp1141[2U]))) 
					  << 0x34U) 
					 | (((QData)((IData)(
							     __Vtemp1141[1U])) 
					     << 0x14U) 
					    | ((QData)((IData)(
							       __Vtemp1141[0U])) 
					       >> 0xcU)))));
    VL_SHIFTL_WWI(66,66,32, __Vtemp1144, __Vtemp1143, 0xcU);
    VL_EXTEND_WI(66,32, __Vtemp1145, (~ (3U | (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_4_addr 
						  << 2U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1394[0U] 
	= (__Vtemp1144[0U] ^ __Vtemp1145[0U]);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1394[1U] 
	= (__Vtemp1144[1U] ^ __Vtemp1145[1U]);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1394[2U] 
	= (3U & (__Vtemp1144[2U] ^ __Vtemp1145[2U]));
    VL_EXTEND_WQ(66,63, __Vtemp1150, vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_459);
    VL_SHIFTL_WWI(66,66,32, __Vtemp1151, __Vtemp1150, 3U);
    VL_EXTEND_WQ(66,54, __Vtemp1153, (VL_ULL(0x3fffffffffffff) 
				      & (((QData)((IData)(
							  (3U 
							   & __Vtemp1151[2U]))) 
					  << 0x34U) 
					 | (((QData)((IData)(
							     __Vtemp1151[1U])) 
					     << 0x14U) 
					    | ((QData)((IData)(
							       __Vtemp1151[0U])) 
					       >> 0xcU)))));
    VL_SHIFTL_WWI(66,66,32, __Vtemp1154, __Vtemp1153, 0xcU);
    __Vtemp1155[0U] = __Vtemp1154[0U];
    __Vtemp1155[1U] = __Vtemp1154[1U];
    __Vtemp1155[2U] = (3U & __Vtemp1154[2U]);
    VL_EXTEND_WI(66,32, __Vtemp1156, (~ (3U | (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_4_addr 
						  << 2U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1442 
	= VL_LT_W(3, __Vtemp1155, __Vtemp1156);
    VL_EXTEND_WQ(66,63, __Vtemp1159, vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_459);
    VL_SHIFTL_WWI(66,66,32, __Vtemp1160, __Vtemp1159, 3U);
    VL_EXTEND_WQ(66,54, __Vtemp1162, (VL_ULL(0x3fffffffffffff) 
				      & (((QData)((IData)(
							  (3U 
							   & __Vtemp1160[2U]))) 
					  << 0x34U) 
					 | (((QData)((IData)(
							     __Vtemp1160[1U])) 
					     << 0x14U) 
					    | ((QData)((IData)(
							       __Vtemp1160[0U])) 
					       >> 0xcU)))));
    VL_SHIFTL_WWI(66,66,32, __Vtemp1163, __Vtemp1162, 0xcU);
    VL_EXTEND_WI(66,32, __Vtemp1164, (~ (3U | (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_5_addr 
						  << 2U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1497[0U] 
	= (__Vtemp1163[0U] ^ __Vtemp1164[0U]);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1497[1U] 
	= (__Vtemp1163[1U] ^ __Vtemp1164[1U]);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1497[2U] 
	= (3U & (__Vtemp1163[2U] ^ __Vtemp1164[2U]));
    VL_EXTEND_WQ(66,63, __Vtemp1169, vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_459);
    VL_SHIFTL_WWI(66,66,32, __Vtemp1170, __Vtemp1169, 3U);
    VL_EXTEND_WQ(66,54, __Vtemp1172, (VL_ULL(0x3fffffffffffff) 
				      & (((QData)((IData)(
							  (3U 
							   & __Vtemp1170[2U]))) 
					  << 0x34U) 
					 | (((QData)((IData)(
							     __Vtemp1170[1U])) 
					     << 0x14U) 
					    | ((QData)((IData)(
							       __Vtemp1170[0U])) 
					       >> 0xcU)))));
    VL_SHIFTL_WWI(66,66,32, __Vtemp1173, __Vtemp1172, 0xcU);
    __Vtemp1174[0U] = __Vtemp1173[0U];
    __Vtemp1174[1U] = __Vtemp1173[1U];
    __Vtemp1174[2U] = (3U & __Vtemp1173[2U]);
    VL_EXTEND_WI(66,32, __Vtemp1175, (~ (3U | (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_5_addr 
						  << 2U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1545 
	= VL_LT_W(3, __Vtemp1174, __Vtemp1175);
    VL_EXTEND_WQ(66,63, __Vtemp1178, vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_459);
    VL_SHIFTL_WWI(66,66,32, __Vtemp1179, __Vtemp1178, 3U);
    VL_EXTEND_WQ(66,54, __Vtemp1181, (VL_ULL(0x3fffffffffffff) 
				      & (((QData)((IData)(
							  (3U 
							   & __Vtemp1179[2U]))) 
					  << 0x34U) 
					 | (((QData)((IData)(
							     __Vtemp1179[1U])) 
					     << 0x14U) 
					    | ((QData)((IData)(
							       __Vtemp1179[0U])) 
					       >> 0xcU)))));
    VL_SHIFTL_WWI(66,66,32, __Vtemp1182, __Vtemp1181, 0xcU);
    VL_EXTEND_WI(66,32, __Vtemp1183, (~ (3U | (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_6_addr 
						  << 2U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1600[0U] 
	= (__Vtemp1182[0U] ^ __Vtemp1183[0U]);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1600[1U] 
	= (__Vtemp1182[1U] ^ __Vtemp1183[1U]);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1600[2U] 
	= (3U & (__Vtemp1182[2U] ^ __Vtemp1183[2U]));
    VL_EXTEND_WQ(66,63, __Vtemp1188, vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_459);
    VL_SHIFTL_WWI(66,66,32, __Vtemp1189, __Vtemp1188, 3U);
    VL_EXTEND_WQ(66,54, __Vtemp1191, (VL_ULL(0x3fffffffffffff) 
				      & (((QData)((IData)(
							  (3U 
							   & __Vtemp1189[2U]))) 
					  << 0x34U) 
					 | (((QData)((IData)(
							     __Vtemp1189[1U])) 
					     << 0x14U) 
					    | ((QData)((IData)(
							       __Vtemp1189[0U])) 
					       >> 0xcU)))));
    VL_SHIFTL_WWI(66,66,32, __Vtemp1192, __Vtemp1191, 0xcU);
    __Vtemp1193[0U] = __Vtemp1192[0U];
    __Vtemp1193[1U] = __Vtemp1192[1U];
    __Vtemp1193[2U] = (3U & __Vtemp1192[2U]);
    VL_EXTEND_WI(66,32, __Vtemp1194, (~ (3U | (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_6_addr 
						  << 2U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1648 
	= VL_LT_W(3, __Vtemp1193, __Vtemp1194);
    VL_EXTEND_WQ(66,63, __Vtemp1197, vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_459);
    VL_SHIFTL_WWI(66,66,32, __Vtemp1198, __Vtemp1197, 3U);
    VL_EXTEND_WQ(66,54, __Vtemp1200, (VL_ULL(0x3fffffffffffff) 
				      & (((QData)((IData)(
							  (3U 
							   & __Vtemp1198[2U]))) 
					  << 0x34U) 
					 | (((QData)((IData)(
							     __Vtemp1198[1U])) 
					     << 0x14U) 
					    | ((QData)((IData)(
							       __Vtemp1198[0U])) 
					       >> 0xcU)))));
    VL_SHIFTL_WWI(66,66,32, __Vtemp1201, __Vtemp1200, 0xcU);
    VL_EXTEND_WI(66,32, __Vtemp1202, (~ (3U | (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_7_addr 
						  << 2U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1703[0U] 
	= (__Vtemp1201[0U] ^ __Vtemp1202[0U]);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1703[1U] 
	= (__Vtemp1201[1U] ^ __Vtemp1202[1U]);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1703[2U] 
	= (3U & (__Vtemp1201[2U] ^ __Vtemp1202[2U]));
    VL_EXTEND_WQ(66,63, __Vtemp1206, vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_459);
    VL_SHIFTL_WWI(66,66,32, __Vtemp1207, __Vtemp1206, 3U);
    VL_EXTEND_WQ(66,54, __Vtemp1209, (VL_ULL(0x3fffffffffffff) 
				      & (((QData)((IData)(
							  (3U 
							   & __Vtemp1207[2U]))) 
					  << 0x34U) 
					 | (((QData)((IData)(
							     __Vtemp1207[1U])) 
					     << 0x14U) 
					    | ((QData)((IData)(
							       __Vtemp1207[0U])) 
					       >> 0xcU)))));
    VL_SHIFTL_WWI(66,66,32, __Vtemp1210, __Vtemp1209, 0xcU);
    VL_EXTEND_WI(66,32, __Vtemp1211, vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1044);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1045[0U] 
	= (__Vtemp1210[0U] & __Vtemp1211[0U]);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1045[1U] 
	= (__Vtemp1210[1U] & __Vtemp1211[1U]);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1045[2U] 
	= (__Vtemp1210[2U] & __Vtemp1211[2U]);
    VL_EXTEND_WQ(66,63, __Vtemp1214, vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_459);
    VL_SHIFTL_WWI(66,66,32, __Vtemp1215, __Vtemp1214, 3U);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__mpu_physaddr 
	= (((QData)((IData)((0xfffffffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__resp_valid_0)
					    ? (0xfffffU 
					       & ((__Vtemp1215[1U] 
						   << 0x14U) 
						  | (__Vtemp1215[0U] 
						     >> 0xcU)))
					    : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__vm_enabled)
					        ? (0xfffffU 
						   & (IData)(
							     (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_32 
							      >> 0x2aU)))
					        : (IData)(
							  (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
							   >> 0xcU))))))) 
	    << 0xcU) | (QData)((IData)((0xfffU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr)))));
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_3__DOT___T_78 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_3__DOT__idle) 
	   | (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1270)));
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_2__DOT___T_78 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_2__DOT__idle) 
	   | (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1270)));
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_1__DOT___T_78 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_1__DOT__idle) 
	   | (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1270)));
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker__DOT___T_78 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker__DOT__idle) 
	   | (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1270)));
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT___T_1297 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_3_io_idle) 
	    << 3U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_2_io_idle) 
		       << 2U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_1_io_idle) 
				  << 1U) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_io_idle))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext_RW0_wdata[0U] 
	= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_data___05FT_63_data);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext_RW0_wdata[1U] 
	= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_data___05FT_63_data);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext_RW0_wdata[2U] 
	= (IData)((((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_data___05FT_63_data)) 
		    << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_data___05FT_63_data))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext_RW0_wdata[3U] 
	= (IData)(((((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_data___05FT_63_data)) 
		     << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_data___05FT_63_data))) 
		   >> 0x20U));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext_RW0_wdata[0U] 
	= (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_data___05FT_63_data 
		   >> 0x20U));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext_RW0_wdata[1U] 
	= (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_data___05FT_63_data 
		   >> 0x20U));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext_RW0_wdata[2U] 
	= (IData)((((QData)((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_data___05FT_63_data 
				     >> 0x20U))) << 0x20U) 
		   | (QData)((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_data___05FT_63_data 
				      >> 0x20U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext_RW0_wdata[3U] 
	= (IData)(((((QData)((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_data___05FT_63_data 
				      >> 0x20U))) << 0x20U) 
		    | (QData)((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_data___05FT_63_data 
				       >> 0x20U)))) 
		   >> 0x20U));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__regfile___05FT_258_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__regfile
	[(3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_rs2___05FT_63_data))];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT___GEN_27 
	= ((3U == (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_rs2___05FT_63_data)))
	    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__busy_3)
	    : ((2U == (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_rs2___05FT_63_data)))
	        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__busy_2)
	        : ((1U == (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_rs2___05FT_63_data)))
		    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__busy_1)
		    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__busy_0))));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_4__DOT__empty 
	= ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_4__DOT___T_41) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_4__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_4__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_4__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_4__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_1__DOT__empty 
	= ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_1__DOT___T_41) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_1__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_1__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_1__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_1__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_1__DOT__empty 
	= ((IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_1__DOT___T_41) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_1__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_1__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_1__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_1__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT__empty 
	= ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT___T_41) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_2__DOT__empty 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_2__DOT___T_41) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_2__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_2__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_2__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_2__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_3__DOT__empty 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_3__DOT___T_41) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_3__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_3__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_3__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_3__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__PLICFanIn_io_ip 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__enables_0_0) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__pendingUInt));
    vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__PLICFanIn_1_io_ip 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__enables_1_0) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__pendingUInt));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_3__DOT__empty 
	= ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_3__DOT___T_41) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_3__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_3__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_3__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_3__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_8__DOT__empty 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_8__DOT___T_41) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_8__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_8__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_8__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_8__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_9__DOT__empty 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_9__DOT___T_41) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_9__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_9__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_9__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_9__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue__DOT__empty 
	= ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue__DOT___T_41) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__empty 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT___T_41) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_3__DOT__empty 
	= ((IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_3__DOT___T_41) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_3__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_3__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_3__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_3__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT__empty 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT___T_41) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue__DOT__empty 
	= ((IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue__DOT___T_41) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT___T_41) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__empty 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT___T_41) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_1__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_1__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_1__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_1__DOT__empty 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_1__DOT___T_41) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_1__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__empty 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT___T_41) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_312 
	= ((0U == (0x7ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_29 
				     >> 0x34U)))) & 
	   (VL_ULL(0) == (VL_ULL(0xfffffffffffff) & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_29)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_492 
	= ((0U == (0xffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_29 
				    >> 0x17U)))) & 
	   (0U == (0x7fffffU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_29))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_360 
	= ((0xffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_29 
			     >> 8U))) | (0xff00U & 
					 ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_29) 
					  << 8U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_101 
	= ((0xffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_29 
			     >> 0x28U))) | (0xff00U 
					    & ((IData)(
						       (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_29 
							>> 0x20U)) 
					       << 8U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_48 
	= ((0xffffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_29 
			       >> 0x10U))) | (0xffff0000U 
					      & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_29) 
						 << 0x10U)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__empty 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT___T_41) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_480 
	= (1U & ((4U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))
		  ? (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__maybe_full))
		  : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_478) 
		     & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue__DOT__maybe_full)))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__isNaNOut 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN_io_invalidExc) 
	   | ((3U == (3U & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__in_bits_in1[2U] 
			     << 2U) | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__in_bits_in1[1U] 
				       >> 0x1eU)))) 
	      & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__in_bits_in1[1U] 
		 >> 0x1dU)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__overflow_roundMagUp 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_139) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__roundMagUp));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__adjustedSig 
	= ((0x7fffffeU & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN_io_in_sig 
				   >> 0x1cU)) << 1U)) 
	   | (0U != (0xfffffffU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN_io_in_sig))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_65 
	= ((0xf0fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_55) 
		      >> 4U)) | (0xf0f0U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_55) 
					    << 4U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__empty 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT___T_41) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__rawB_S_sig 
	= (((0U != (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_io_b 
				  >> 0x1dU)))) << 0x17U) 
	   | (0x7fffffU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_io_b)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__rawB_S_isNaN 
	= ((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_io_b 
				 >> 0x1eU)))) & (IData)(
							(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_io_b 
							 >> 0x1dU)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__rawB_S_isInf 
	= ((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_io_b 
				 >> 0x1eU)))) & (~ (IData)(
							   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_io_b 
							    >> 0x1dU))));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__empty 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT___T_41) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__empty 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT___T_41) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_2__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT___T_41) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4_auto_in_d_bits_denied 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_503)) 
	   & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT__ram_resp___05FT_63_data)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor_io_in_d_bits_denied 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_503)) 
	   & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT__ram_resp___05FT_63_data)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_537 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_503)
		  ? ((0xfU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_545))
		      ? 0U : ((0xeU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_545))
			       ? 0U : ((0xdU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_545))
				        ? 0U : ((0xcU 
						 == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_545))
						 ? 0U
						 : 
						((0xbU 
						  == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_545))
						  ? 0U
						  : 
						 ((0xaU 
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
						        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_5__DOT__ram_id___05FT_63_data)
						        : 
						       ((4U 
							 == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_545))
							 ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_4__DOT__ram_id___05FT_63_data)
							 : 
							((3U 
							  == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_545))
							  ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_3__DOT__ram_id___05FT_63_data)
							  : 
							 ((2U 
							   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_545))
							   ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_2__DOT__ram_id___05FT_63_data)
							   : 
							  ((1U 
							    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_545))
							    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_1__DOT__ram_id___05FT_63_data)
							    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue__DOT__ram_id___05FT_63_data))))))))))))))))
		  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
		  & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT___T_93_isInf))) 
		 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT___T_93_isZero))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_122 
	= ((0xf0fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_112) 
		      >> 4U)) | (0xf0f0U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_112) 
					    << 4U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_69 
	= ((0xff00ffU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_59 
			 >> 8U)) | (0xff00ff00U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_59 
						   << 8U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_4__DOT__empty 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_4__DOT___T_41) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_4__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_4__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_4__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_4__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT___T_41) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__empty 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT___T_41) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_1__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_1__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_1__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_2__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_2__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_2__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_3__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_3__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_3__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_4__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_4__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_4__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_5__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_5__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_5__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2485 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2476) 
	    << 1U) | (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2353 
			     << 1U) >> (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2476))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt_io_nack_mem 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__write_port_busy) 
	    | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_1340) 
	       & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__wen)))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__divSqrt_inFlight));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_io_inValid 
	= ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__mem_reg_valid) 
	     & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__mem_ctrl_singleOut)) 
	    & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_1340)) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__divSqrt_inFlight)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1_io_inValid 
	= ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__mem_reg_valid) 
	     & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__mem_ctrl_singleOut))) 
	    & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_1340)) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__divSqrt_inFlight)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT___T_67 
	= (((QData)((IData)((1U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U]))) 
	    << 0x3fU) | (((QData)((IData)((0x7ffU & 
					   ((VL_GTS_III(1,13,13, 0x402U, 
							(0xfffU 
							 & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
							     << 0xcU) 
							    | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
							       >> 0x14U))))
					      ? 0U : 
					     ((0xfffU 
					       & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
						   << 0xcU) 
						  | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
						     >> 0x14U))) 
					      - (IData)(0x401U))) 
					    | ((((3U 
						  == 
						  (3U 
						   & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
						       << 2U) 
						      | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
							 >> 0x1eU)))) 
						 & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
						    >> 0x1dU)) 
						| (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT___T_30))
					        ? 0x7ffU
					        : 0U))))) 
			  << 0x34U) | (VL_ULL(0xfffffffffffff) 
				       & (VL_GTS_III(1,13,13, 0x402U, 
						     (0xfffU 
						      & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
							  << 0xcU) 
							 | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
							    >> 0x14U))))
					   ? (VL_ULL(0x1fffffffffffff) 
					      & ((VL_ULL(0x1fffffffffffff) 
						  & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT___T_38 
						     >> 1U)) 
						 >> 
						 (0x3fU 
						  & ((IData)(1U) 
						     - 
						     (0xfffU 
						      & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
							  << 0xcU) 
							 | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
							    >> 0x14U)))))))
					   : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT___T_30)
					       ? VL_ULL(0)
					       : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT___T_38)))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT___T_204 
	= ((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT___T_176 
				 >> 0x1eU)))) & (~ (IData)(
							   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT___T_176 
							    >> 0x1dU))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT___T_198 
	= (((1U == (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT___T_176 
				  >> 0x1eU)))) & (2U 
						  <= 
						  (0x7fU 
						   & (IData)(
							     (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT___T_176 
							      >> 0x17U))))) 
	   | (2U == (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT___T_176 
				   >> 0x1eU)))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT___T_190 
	= ((1U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT___T_176 
				 >> 0x1dU)))) | ((1U 
						  == 
						  (3U 
						   & (IData)(
							     (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT___T_176 
							      >> 0x1eU)))) 
						 & (2U 
						    > 
						    (0x7fU 
						     & (IData)(
							       (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT___T_176 
								>> 0x17U))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT___T_87 
	= ((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT___T_72 
				 >> 0x1eU)))) & (~ (IData)(
							   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT___T_72 
							    >> 0x1dU))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT___T_95 
	= (((0U != (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT___T_72 
				  >> 0x1dU)))) << 0x17U) 
	   | (0x7fffffU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT___T_72)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__dcmp__DOT__ordered 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__dcmp__DOT__rawA_isNaN)) 
		 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__dcmp__DOT__rawB_isNaN))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT__notSigNaNIn_invalidExc_S_div 
	= (((0U == (7U & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
			   << 3U) | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
				     >> 0x1dU)))) & 
	    (0U == (7U & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[2U] 
			   << 3U) | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[1U] 
				     >> 0x1dU))))) 
	   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT__rawA_S_isInf) 
	      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT__rawB_S_isInf)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT__notSigNaNIn_invalidExc_S_sqrt 
	= (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT__rawA_S_isNaN)) 
	    & (0U != (7U & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
			     << 3U) | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
				       >> 0x1dU))))) 
	   & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U]);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT___T_84 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT__rawA_S_isNaN) 
	   & (~ (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT__rawA_S_sig 
			 >> 0x33U))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT__specialCaseA_S 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT__rawA_S_isNaN) 
	    | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT__rawA_S_isInf)) 
	   | (0U == (7U & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
			    << 3U) | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
				      >> 0x1dU)))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN__DOT__excSign 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN__DOT__rawIn_isNaN)) 
		 & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U]));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN__DOT__invalidExc 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN__DOT__rawIn_isNaN) 
	   | ((3U == (3U & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
			     << 2U) | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
				       >> 0x1eU)))) 
	      & (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
		    >> 0x1dU))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__dcmp__DOT__common_ltMags 
	= (VL_LTS_III(1,13,13, (0xfffU & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
					   << 0xcU) 
					  | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
					     >> 0x14U))), 
		      (0xfffU & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[2U] 
				  << 0xcU) | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[1U] 
					      >> 0x14U)))) 
	   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__dcmp__DOT__eqExps) 
	      & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__dcmp__DOT__rawA_sig 
		 < vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__dcmp__DOT__rawB_sig)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__dcmp__DOT__common_eqMags 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__dcmp__DOT__eqExps) 
	   & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__dcmp__DOT__rawA_sig 
	      == vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__dcmp__DOT__rawB_sig));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT___T_193 
	= ((1U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT__cycleNum)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_1__DOT__divSqrtRecFNToRaw__DOT__oddSqrt_S));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__sExpQuot_S_div 
	= (0x7ffU & (VL_EXTENDS_II(11,10, (0x1ffU & (IData)(
							    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_io_a 
							     >> 0x17U)))) 
		     + VL_EXTENDS_II(11,10, ((0x200U 
					      & ((IData)(
							 (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_io_b 
							  >> 0x17U)) 
						 << 1U)) 
					     | ((0x100U 
						 & (IData)(
							   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_io_b 
							    >> 0x17U))) 
						| (0xffU 
						   & (~ 
						      (0x1ffU 
						       & (IData)(
								 (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_io_b 
								  >> 0x17U))))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__rawA_S_sig 
	= (((0U != (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_io_a 
				  >> 0x1dU)))) << 0x17U) 
	   | (0x7fffffU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_io_a)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__rawA_S_isInf 
	= ((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_io_a 
				 >> 0x1eU)))) & (~ (IData)(
							   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_io_a 
							    >> 0x1dU))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__rawA_S_isNaN 
	= ((3U == (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_io_a 
				 >> 0x1eU)))) & (IData)(
							(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_io_a 
							 >> 0x1dU)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small__DOT__divSqrtRecFNToRaw__DOT__oddSqrt_S 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__mem_ctrl_sqrt) 
		     & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__DivSqrtRecFN_small_io_a 
				>> 0x17U))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN_1__DOT__alignedSig 
	= ((VL_ULL(0x3fffffffe) & (((QData)((IData)(
						    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN_1__DOT__shiftedSig[2U])) 
				    << 0xeU) | (VL_ULL(0x3ffffffffffe) 
						& ((QData)((IData)(
								   vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN_1__DOT__shiftedSig[1U])) 
						   >> 0x12U)))) 
	   | (QData)((IData)((VL_ULL(0) != (VL_ULL(0x7ffffffffffff) 
					    & (((QData)((IData)(
								vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN_1__DOT__shiftedSig[1U])) 
						<< 0x20U) 
					       | (QData)((IData)(
								 vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN_1__DOT__shiftedSig[0U]))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN__DOT__alignedSig[0U] 
	= ((0xfffffffeU & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN__DOT__shiftedSig[2U] 
			    << 0xeU) | (0x3ffeU & (
						   vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN__DOT__shiftedSig[1U] 
						   >> 0x12U)))) 
	   | (VL_ULL(0) != (VL_ULL(0x7ffffffffffff) 
			    & (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN__DOT__shiftedSig[1U])) 
				<< 0x20U) | (QData)((IData)(
							    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN__DOT__shiftedSig[0U]))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN__DOT__alignedSig[1U] 
	= ((1U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN__DOT__shiftedSig[2U] 
		  >> 0x12U)) | (0xfffffffeU & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN__DOT__shiftedSig[3U] 
						<< 0xeU) 
					       | (0x3ffeU 
						  & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN__DOT__shiftedSig[2U] 
						     >> 0x12U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN__DOT__alignedSig[2U] 
	= ((1U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN__DOT__shiftedSig[3U] 
		  >> 0x12U)) | (2U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__RecFNToIN__DOT__shiftedSig[3U] 
				      >> 0x12U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__empty 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT___T_41) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__RoccCommandRouter__DOT__cmd__DOT__empty 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__RoccCommandRouter__DOT__cmd__DOT___T_41) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__RoccCommandRouter__DOT__cmd__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__RoccCommandRouter__DOT__cmd__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__RoccCommandRouter__DOT__cmd__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__RoccCommandRouter__DOT__cmd__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_report_param 
	= ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_1253))
	    ? 3U : ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_1253))
		     ? 3U : ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_1253))
			      ? 4U : ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_1253))
				       ? 5U : ((7U 
						== (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_1253))
					        ? 0U
					        : (
						   (6U 
						    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_1253))
						    ? 0U
						    : 
						   ((5U 
						     == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_1253))
						     ? 4U
						     : 
						    ((4U 
						      == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_1253))
						      ? 2U
						      : 
						     ((0xbU 
						       == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_1253))
						       ? 1U
						       : 
						      ((0xaU 
							== (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_1253))
						        ? 1U
						        : 
						       ((9U 
							 == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_1253))
							 ? 2U
							 : 
							((8U 
							  == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_1253))
							  ? 5U
							  : 0U))))))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_prb_ack_data 
	= ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_1253)) 
	   | ((2U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_1253)) 
	      & ((1U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_1253)) 
		 & ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_1253)) 
		    & ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_1253)) 
		       | ((6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_1253)) 
			  & ((5U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_1253)) 
			     & ((4U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_1253)) 
				& (0xbU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_1253))))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT___T_41) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT___T_41) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT___T_41) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue_1__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue_1__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue_1__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue_2__DOT__empty 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue_2__DOT___T_41) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue_2__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue_2__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue_2__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue_2__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue_3__DOT__empty 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue_3__DOT___T_41) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue_3__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue_3__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue_3__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue_3__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__empty 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT___T_41) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__Queue_1__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__Queue_1__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__Queue_1__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__Queue_1__DOT__empty 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__Queue_1__DOT___T_41) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__Queue_1__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__empty 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT___T_41) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_3__DOT__o_data__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_3__DOT__o_data__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_3__DOT__o_data__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_3__DOT__o_data__DOT__empty 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_3__DOT__o_data__DOT___T_41) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_3__DOT__o_data__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_2__DOT__o_data__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_2__DOT__o_data__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_2__DOT__o_data__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_2__DOT__o_data__DOT__empty 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_2__DOT__o_data__DOT___T_41) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_2__DOT__o_data__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_1__DOT__o_data__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_1__DOT__o_data__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_1__DOT__o_data__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_1__DOT__o_data__DOT__empty 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_1__DOT__o_data__DOT___T_41) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker_1__DOT__o_data__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker__DOT__o_data__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker__DOT__o_data__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker__DOT__o_data__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker__DOT__o_data__DOT__empty 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker__DOT__o_data__DOT___T_41) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__bh__DOT__TLBroadcastTracker__DOT__o_data__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag_auto_out_aw_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue_1__DOT__maybe_full) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_591));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_525 
	= ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue_1_io_deq_bits_burst)) 
	   | (3U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue_1_io_deq_bits_size)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_623 
	= ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_599)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_595));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_418 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_412)
	    ? vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_414
	    : vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue_1_io_deq_bits_addr);
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_540 
	= (0x7fffffU & ((0xffU | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue_1_io_deq_bits_len) 
				  << 8U)) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue_1_io_deq_bits_size)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_417 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_412)
	    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_416)
	    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue_1_io_deq_bits_len));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF_2__DOT__replayq__DOT__nackq__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF_2__DOT__replayq__DOT__nackq__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF_2__DOT__replayq__DOT__nackq__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF_2__DOT__replayq__DOT__nackq__DOT__empty 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF_2__DOT__replayq__DOT__nackq__DOT___T_41) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF_2__DOT__replayq__DOT__nackq__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF_1__DOT__replayq__DOT__nackq__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF_1__DOT__replayq__DOT__nackq__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF_1__DOT__replayq__DOT__nackq__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF_1__DOT__replayq__DOT__nackq__DOT__empty 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF_1__DOT__replayq__DOT__nackq__DOT___T_41) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF_1__DOT__replayq__DOT__nackq__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_2485 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_2476) 
	    << 1U) | (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_2353 
			     << 1U) >> (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_2476))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__Queue__DOT__empty 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__Queue__DOT___T_41) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__Queue__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__Queue__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__Queue__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__Queue__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__empty 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT___T_41) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__AMOALU_io_out 
	= ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__AMOALU__DOT__wmask 
	    & ((8U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__pstore1_cmd))
	        ? ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_data 
		    & (~ (QData)((IData)((0x80000000U 
					  & ((~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__pstore1_mask) 
						 >> 3U)) 
					     << 0x1fU)))))) 
		   + (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__a_data 
		      & (~ (QData)((IData)((0x80000000U 
					    & ((~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__pstore1_mask) 
						   >> 3U)) 
					       << 0x1fU)))))))
	        : (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__AMOALU__DOT__logic_and) 
		    | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__AMOALU__DOT__logic_xor))
		    ? (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__AMOALU__DOT__logic_and)
			 ? (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_data 
			    & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__a_data)
			 : VL_ULL(0)) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__AMOALU__DOT__logic_xor)
					  ? (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_data 
					     ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__a_data)
					  : VL_ULL(0)))
		    : (((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__AMOALU__DOT___T_48) 
			  == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__AMOALU__DOT___T_54))
			  ? ((1U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__pstore1_mask) 
				     >> 4U) & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__pstore1_mask) 
					       >> 3U)))
			      ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__AMOALU__DOT___T_60) 
				 | (((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_data 
					      >> 0x20U)) 
				     == (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__a_data 
						 >> 0x20U))) 
				    & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__AMOALU__DOT___T_57)))
			      : ((0x10U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__pstore1_mask))
				  ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__AMOALU__DOT___T_60)
				  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__AMOALU__DOT___T_57)))
			  : ((0U == (2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__pstore1_cmd)))
			      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__AMOALU__DOT___T_48)
			      : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__AMOALU__DOT___T_54)))
			 ? ((0xcU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__pstore1_cmd)) 
			    | (0xeU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__pstore1_cmd)))
			 : ((0xdU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__pstore1_cmd)) 
			    | (0xfU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__pstore1_cmd))))
		        ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_data
		        : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__a_data)))) 
	   | ((~ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__AMOALU__DOT__wmask) 
	      & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_data));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF__DOT__replayq__DOT__nackq__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF__DOT__replayq__DOT__nackq__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF__DOT__replayq__DOT__nackq__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF__DOT__replayq__DOT__nackq__DOT__empty 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF__DOT__replayq__DOT__nackq__DOT___T_41) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF__DOT__replayq__DOT__nackq__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue__DOT__empty 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue__DOT___T_41) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_1__DOT__empty 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_1__DOT___T_41) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_1__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_1__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_1__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_1__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_2__DOT__empty 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_2__DOT___T_41) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_2__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_2__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_2__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_2__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_3__DOT__empty 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_3__DOT___T_41) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_3__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_3__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_3__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_3__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_4__DOT__empty 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_4__DOT___T_41) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_4__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_4__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_4__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_4__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_5__DOT__empty 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_5__DOT___T_41) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_5__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_5__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_5__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_5__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_6__DOT__empty 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_6__DOT___T_41) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_6__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_6__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_6__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_6__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_7__DOT__empty 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_7__DOT___T_41) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_7__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_7__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_7__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_7__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_8__DOT__empty 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_8__DOT___T_41) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_8__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_8__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_8__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_8__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_9__DOT__empty 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_9__DOT___T_41) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_9__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_9__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_9__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_9__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_10__DOT__empty 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_10__DOT___T_41) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_10__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_10__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_10__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_10__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_11__DOT__empty 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_11__DOT___T_41) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_11__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_11__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_11__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_11__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_12__DOT__empty 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_12__DOT___T_41) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_12__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_12__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_12__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_12__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_13__DOT__empty 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_13__DOT___T_41) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_13__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_13__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_13__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_13__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_14__DOT__empty 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_14__DOT___T_41) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_14__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_14__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_14__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_14__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_15__DOT__empty 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_15__DOT___T_41) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_15__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_15__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_15__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_15__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_16__DOT__empty 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_16__DOT___T_41) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_16__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_16__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_16__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_16__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_17__DOT__empty 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_17__DOT___T_41) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_17__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_17__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_17__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_17__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_18__DOT__empty 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_18__DOT___T_41) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_18__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_18__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_18__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_18__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_19__DOT__empty 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_19__DOT___T_41) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_19__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_19__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_19__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_19__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_20__DOT__empty 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_20__DOT___T_41) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_20__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_20__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_20__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_20__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_21__DOT__empty 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_21__DOT___T_41) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_21__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_21__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_21__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_21__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_22__DOT__empty 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_22__DOT___T_41) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_22__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_22__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_22__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_22__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_23__DOT__empty 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_23__DOT___T_41) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_23__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_23__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_23__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_23__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_24__DOT__empty 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_24__DOT___T_41) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_24__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_24__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_24__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_24__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_25__DOT__empty 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_25__DOT___T_41) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_25__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_25__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_25__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_25__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_26__DOT__empty 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_26__DOT___T_41) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_26__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_26__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_26__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_26__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_27__DOT__empty 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_27__DOT___T_41) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_27__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_27__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_27__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_27__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_28__DOT__empty 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_28__DOT___T_41) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_28__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_28__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_28__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_28__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_29__DOT__empty 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_29__DOT___T_41) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_29__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_29__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_29__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_29__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_30__DOT__empty 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_30__DOT___T_41) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_30__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_30__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_30__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_30__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_31__DOT__empty 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_31__DOT___T_41) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_31__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_31__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_31__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__mbus__DOT__coupler_to_memory_controller_named_axi4__DOT__axi4yank__DOT__Queue_31__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__empty 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT___T_41) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_3__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT__empty 
	= ((IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT___T_41) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_2__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT___T_41) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_4__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_4__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_4__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_4__DOT__empty 
	= ((IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_4__DOT___T_41) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__mem__DOT__axi4buf__DOT__Queue_4__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__Queue_2__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__Queue_2__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__Queue_2__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__Queue_2__DOT__empty 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__Queue_2__DOT___T_41) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__Queue_2__DOT__maybe_full)));
    __Vtemp1225[0U] = 1U;
    __Vtemp1225[1U] = 0U;
    __Vtemp1225[2U] = 0U;
    __Vtemp1225[3U] = 0U;
    __Vtemp1225[4U] = 0U;
    __Vtemp1225[5U] = 0U;
    __Vtemp1225[6U] = 0U;
    __Vtemp1225[7U] = 0U;
    VL_SHIFTL_WWI(256,256,8, __Vtemp1226, __Vtemp1225, (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT___T_228));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT___T_315[0U] 
	= (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__vb_array[0U] 
	   | __Vtemp1226[0U]);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT___T_315[1U] 
	= (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__vb_array[1U] 
	   | __Vtemp1226[1U]);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT___T_315[2U] 
	= (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__vb_array[2U] 
	   | __Vtemp1226[2U]);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT___T_315[3U] 
	= (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__vb_array[3U] 
	   | __Vtemp1226[3U]);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT___T_315[4U] 
	= (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__vb_array[4U] 
	   | __Vtemp1226[4U]);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT___T_315[5U] 
	= (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__vb_array[5U] 
	   | __Vtemp1226[5U]);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT___T_315[6U] 
	= (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__vb_array[6U] 
	   | __Vtemp1226[6U]);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT___T_315[7U] 
	= (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__vb_array[7U] 
	   | __Vtemp1226[7U]);
    __Vtemp1229[0U] = 1U;
    __Vtemp1229[1U] = 0U;
    __Vtemp1229[2U] = 0U;
    __Vtemp1229[3U] = 0U;
    __Vtemp1229[4U] = 0U;
    __Vtemp1229[5U] = 0U;
    __Vtemp1229[6U] = 0U;
    __Vtemp1229[7U] = 0U;
    VL_SHIFTL_WWI(256,256,8, __Vtemp1230, __Vtemp1229, (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT___T_228));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT___T_317[0U] 
	= ((~ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__vb_array[0U]) 
	   | __Vtemp1230[0U]);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT___T_317[1U] 
	= ((~ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__vb_array[1U]) 
	   | __Vtemp1230[1U]);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT___T_317[2U] 
	= ((~ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__vb_array[2U]) 
	   | __Vtemp1230[2U]);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT___T_317[3U] 
	= ((~ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__vb_array[3U]) 
	   | __Vtemp1230[3U]);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT___T_317[4U] 
	= ((~ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__vb_array[4U]) 
	   | __Vtemp1230[4U]);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT___T_317[5U] 
	= ((~ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__vb_array[5U]) 
	   | __Vtemp1230[5U]);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT___T_317[6U] 
	= ((~ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__vb_array[6U]) 
	   | __Vtemp1230[6U]);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT___T_317[7U] 
	= ((~ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__vb_array[7U]) 
	   | __Vtemp1230[7U]);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_145 
	= ((1U < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp_io_prv)) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_l)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_320 
	= ((1U < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp_io_prv)) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_l)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_495 
	= ((1U < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp_io_prv)) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_l)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_670 
	= ((1U < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp_io_prv)) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_l)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_845 
	= ((1U < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp_io_prv)) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_l)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_1020 
	= ((1U < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp_io_prv)) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_l)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_1195 
	= ((1U < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp_io_prv)) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_l)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_1370 
	= ((1U < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp_io_prv)) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_l)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__arb__DOT___T_99 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__arb__DOT__validMask_1) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__arb__DOT__validMask_2));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__arb_io_chosen 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__arb__DOT__validMask_1)
	    ? 1U : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__arb__DOT__validMask_2)
		     ? 2U : ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__state))
			      ? 0U : ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__translator__DOT__state))
				       ? 1U : 2U))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__priv_rw_ok 
	= (VL_ULL(0x1ffffffff) & (((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_1963)) 
					  | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_sum)))
				    ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_2539
				    : VL_ULL(0)) | 
				  ((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_1963))
				    ? (~ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_2539)
				    : VL_ULL(0))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_2314 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_2304) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_typ))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_2312))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_2317 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_2304) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_typ))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_2315))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_2320 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_2307) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_typ))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_2318))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_2323 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_2307) 
	   | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_typ))) 
		     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_2321))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_4339 
	= ((2U == (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_typ)))
	    ? ((1U & ((~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_typ) 
			  >> 2U)) & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_4324 
				     >> 0x1fU))) ? 0xffffffffU
	        : 0U) : (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_data 
				 >> 0x20U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_sc_fail 
	= ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd)) 
	   & (~ ((3U < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__lrscCount)) 
		 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__lrscAddrMatch))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_4290 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_valid_pre_xcpt) 
	   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_error_valid) 
	      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__lrscAddrMatch)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_307 
	= (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_245) 
		   - (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_read___05FT_55_data) 
			    | (1U & (((IData)(1U) << 
				      (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_extra___05FT_55_data))) 
				     >> 3U))))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_285 
	= (0x3fU & ((0x38U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_extra___05FT_55_data) 
			      << 1U)) | (7U & (~ (0x3fU 
						  & ((IData)(7U) 
						     << 
						     (3U 
						      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_extra___05FT_55_data))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_318 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_read___05FT_55_data)) 
	   & (0U != (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_extra___05FT_55_data) 
			   >> 2U))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__grantIsUncached 
	= (((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data)) 
	    | (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
	   | (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT___T_194 
	= (0x1ffU & ((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))
		      ? (~ (0xffffffU & (((IData)(0xfffU) 
					  << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
					 >> 3U))) : 0U));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_3784 
	= (0x1ffU & ((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))
		      ? (~ (0xffffffU & (((IData)(0xfffU) 
					  << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
					 >> 3U))) : 0U));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_4015 
	= ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data)) 
	   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__blockUncachedGrant) 
	      | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_valid)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__grantIsCached 
	= ((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data)) 
	   | (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF_1__DOT__replayq__DOT___GEN_7 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF_1__DOT__replayq__DOT__nackq__DOT__ram___05FT_63_data)
	    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF_1__DOT__replayq__DOT__reqs_1_tag)
	    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF_1__DOT__replayq__DOT__reqs_0_tag));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF_2__DOT__replayq__DOT___GEN_7 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF_2__DOT__replayq__DOT__nackq__DOT__ram___05FT_63_data)
	    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF_2__DOT__replayq__DOT__reqs_1_tag)
	    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF_2__DOT__replayq__DOT__reqs_0_tag));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF__DOT__replayq__DOT___GEN_7 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF__DOT__replayq__DOT__nackq__DOT__ram___05FT_63_data)
	    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF__DOT__replayq__DOT__reqs_1_tag)
	    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__SimpleHellaCacheIF__DOT__replayq__DOT__reqs_0_tag));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_627 
	= ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__state)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div_io_req_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___T_84 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___T_78) 
		  ^ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__in_fmaCmd) 
		     >> 1U)) ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__in_in3[1U]));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___T_86 
	= (0xfffU & (VL_EXTENDS_II(12,11, (0x7ffU & 
					   ((IData)(0x71bU) 
					    + (0xfffU 
					       & VL_EXTENDS_II(12,11, (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___T_80)))))) 
		     - VL_EXTENDS_II(12,11, (0x1ffU 
					     & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__in_in3[1U] 
						 << 9U) 
						| (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__in_in3[0U] 
						   >> 0x17U))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_138 
	= ((0x33U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_128) 
		     >> 2U)) | (0xccU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_128) 
					 << 2U)));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_75 
	= (((8U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_56) 
		    | ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
				>> 0x26U)) & (IData)(
						     (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						      >> 0x25U)))) 
		   << 3U)) | (4U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_56) 
				     | ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						 >> 0x26U)) 
					& (~ (IData)(
						     (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						      >> 0x25U))))) 
				    << 2U))) | ((2U 
						 & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_53) 
						     | ((~ (IData)(
								   (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
								    >> 0x26U))) 
							& (IData)(
								  (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
								   >> 0x25U)))) 
						    << 1U)) 
						| (1U 
						   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_53) 
						      | ((~ (IData)(
								    (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
								     >> 0x26U))) 
							 & (~ (IData)(
								      (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
								       >> 0x25U))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_auto_out_c_bits_corrupt 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__inWriteback) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_4233));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_auto_out_c_bits_opcode 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_4186)
	    ? 7U : ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__release_state))
		     ? 5U : 4U));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_auto_out_c_bits_source 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_4186)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__probe_bits_source));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache_auto_out_c_bits_size 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_4186)
	    ? 6U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__probe_bits_size));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out___05Fc_bits_opcode 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_4186)
	    ? 7U : ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__release_state))
		     ? 5U : 4U));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out___05Fc_bits_size 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_4186)
	    ? 6U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__probe_bits_size));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3120 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3105) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_3119));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_read 
	= ((((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_cmd)) 
	     | (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_cmd))) 
	    | (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_cmd))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_321));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_write 
	= ((((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_cmd)) 
	     | (0x11U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_cmd))) 
	    | (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_cmd))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_321));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_728 
	= (((((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
			     >> 1U))) ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_715)
	       : 0U) | ((2U <= (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_typ)))
			 ? 3U : 0U)) << 2U) | ((1U 
						& (IData)(
							  (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
							   >> 1U)))
					        ? 0U
					        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_715)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_662 
	= (((QData)((IData)((1U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__regfile_ex_rs_0_data[0U] 
				   >> 0x1fU)))) << 0x20U) 
	   | (QData)((IData)(((0x80000000U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__regfile_ex_rs_0_data[1U] 
					      << 0xbU)) 
			      | (0x7fffffffU & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__regfile_ex_rs_0_data[0U])))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_702 
	= (((QData)((IData)((1U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__regfile_ex_rs_1_data[0U] 
				   >> 0x1fU)))) << 0x20U) 
	   | (QData)((IData)(((0x80000000U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__regfile_ex_rs_1_data[1U] 
					      << 0xbU)) 
			      | (0x7fffffffU & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__regfile_ex_rs_1_data[0U])))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_1189 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__mem_ctrl_fromint) 
	    | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_1088)
	        ? 2U : 0U)) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_1094)
			        ? 3U : 0U));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__memLatencyMask 
	= ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__mem_ctrl_fastpipe) 
	     | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__mem_ctrl_fromint)) 
	    | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_1088)
	        ? 2U : 0U)) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_1094)
			        ? 4U : 0U));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___T_84 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___T_78) 
		  ^ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__in_fmaCmd) 
		     >> 1U)) ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__in_in3[2U]));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___T_86 
	= (0x7fffU & (VL_EXTENDS_II(15,14, (0x3fffU 
					    & ((IData)(0x3838U) 
					       + (0x7fffU 
						  & VL_EXTENDS_II(15,14, (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___T_80)))))) 
		      - VL_EXTENDS_II(15,14, (0xfffU 
					      & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__in_in3[2U] 
						  << 0xcU) 
						 | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__in_in3[1U] 
						    >> 0x14U))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_3112 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core_io_dmem_req_valid) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__dcache_blocked));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_749 
	= (((0x67U == (0x7fU & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache_io_resp_bits_data)) 
	    | (0x6fU == (0x7fU & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache_io_resp_bits_data))) 
	   & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache_io_resp_bits_data 
	      >> 7U));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_915 
	= ((0x800U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache_io_resp_bits_data 
		      >> 0x14U)) | (0x7ffU & VL_NEGATE_I((IData)(
								 (1U 
								  & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache_io_resp_bits_data 
								     >> 0x1fU))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_809 
	= ((0x40000000U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache_io_resp_bits_data)
	    ? ((0x1fe000U & (VL_NEGATE_I((IData)((1U 
						  & (((0x10000000U 
						       & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache_io_resp_bits_data)
						       ? 0x1fU
						       : 0U) 
						     >> 4U)))) 
			     << 0xdU)) | (((((0x10000000U 
					      & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache_io_resp_bits_data)
					      ? 0x1fU
					      : 0U) 
					    << 8U) 
					   | ((0xc0U 
					       & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache_io_resp_bits_data 
						  >> 0xfU)) 
					      | (0x20U 
						 & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache_io_resp_bits_data 
						    >> 0xdU)))) 
					  | ((0x18U 
					      & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache_io_resp_bits_data 
						 >> 0x17U)) 
					     | (6U 
						& (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache_io_resp_bits_data 
						   >> 0x12U)))))
	    : ((((0x10000000U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache_io_resp_bits_data)
		  ? 0x3ffU : 0U) << 0xbU) | ((0x400U 
					      & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache_io_resp_bits_data 
						 >> 0xeU)) 
					     | ((0x300U 
						 & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache_io_resp_bits_data 
						    >> 0x11U)) 
						| ((0x80U 
						    & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache_io_resp_bits_data 
						       >> 0xfU)) 
						   | ((0x40U 
						       & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache_io_resp_bits_data 
							  >> 0x11U)) 
						      | (((0x20U 
							   & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache_io_resp_bits_data 
							      >> 0xdU)) 
							  | (0x10U 
							     & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache_io_resp_bits_data 
								>> 0x17U))) 
							 | (0xeU 
							    & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache_io_resp_bits_data 
							       >> 0x12U)))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_746 
	= (((0x67U == (0x7fU & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache_io_resp_bits_data)) 
	    & (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache_io_resp_bits_data 
		  >> 7U))) & (1U == (0x1bU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache_io_resp_bits_data 
					      >> 0xfU))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_410 
	= ((0x4000U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache_io_resp_bits_data)
	    ? ((0x1fe000U & (VL_NEGATE_I((IData)((1U 
						  & (((0x1000U 
						       & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache_io_resp_bits_data)
						       ? 0x1fU
						       : 0U) 
						     >> 4U)))) 
			     << 0xdU)) | (((((0x1000U 
					      & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache_io_resp_bits_data)
					      ? 0x1fU
					      : 0U) 
					    << 8U) 
					   | ((0xc0U 
					       & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache_io_resp_bits_data 
						  << 1U)) 
					      | (0x20U 
						 & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache_io_resp_bits_data 
						    << 3U)))) 
					  | ((0x18U 
					      & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache_io_resp_bits_data 
						 >> 7U)) 
					     | (6U 
						& (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache_io_resp_bits_data 
						   >> 2U)))))
	    : ((((0x1000U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache_io_resp_bits_data)
		  ? 0x3ffU : 0U) << 0xbU) | ((0x400U 
					      & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache_io_resp_bits_data 
						 << 2U)) 
					     | ((0x300U 
						 & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache_io_resp_bits_data 
						    >> 1U)) 
						| ((0x80U 
						    & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache_io_resp_bits_data 
						       << 1U)) 
						   | ((0x40U 
						       & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache_io_resp_bits_data 
							  >> 1U)) 
						      | (((0x20U 
							   & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache_io_resp_bits_data 
							      << 3U)) 
							  | (0x10U 
							     & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache_io_resp_bits_data 
								>> 7U))) 
							 | (0xeU 
							    & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache_io_resp_bits_data 
							       >> 2U)))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_831 
	= ((0x9002U == (0xf003U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache_io_resp_bits_data 
				   >> 0x10U))) & (0U 
						  == 
						  (0x1fU 
						   & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache_io_resp_bits_data 
						      >> 0x12U))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_758 
	= ((0xc001U == (0xe003U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache_io_resp_bits_data 
				   >> 0x10U))) | (0xe001U 
						  == 
						  (0xe003U 
						   & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache_io_resp_bits_data 
						      >> 0x10U))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_817 
	= ((0x8002U == (0xf003U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache_io_resp_bits_data 
				   >> 0x10U))) & (0U 
						  == 
						  (0x1fU 
						   & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache_io_resp_bits_data 
						      >> 0x12U))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_432 
	= ((0x9002U == (0xf003U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache_io_resp_bits_data)) 
	   & (0U == (0x1fU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache_io_resp_bits_data 
			      >> 2U))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_359 
	= ((0xc001U == (0xe003U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache_io_resp_bits_data)) 
	   | (0xe001U == (0xe003U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache_io_resp_bits_data)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_418 
	= ((0x8002U == (0xf003U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache_io_resp_bits_data)) 
	   & (0U == (0x1fU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache_io_resp_bits_data 
			      >> 2U))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_325 
	= ((0xffff0000U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache_io_resp_bits_data 
			   << 0x10U)) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s2_partial_insn));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq_io_deq_bits_data 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__valid_0)
	    ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__elts_0_data
	    : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache_io_resp_bits_data);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2090 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2087) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_ctrl_mem)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2243 
	= ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_sel_alu2))
	    ? (((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2146) 
		  << 0x1fU) | (0x7ff00000U & (((2U 
						== (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_sel_imm))
					        ? (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_reg_inst 
						   >> 0x14U)
					        : VL_NEGATE_I((IData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2146)))) 
					      << 0x14U))) 
		| ((0xff000U & ((((2U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_sel_imm)) 
				  & (3U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_sel_imm)))
				  ? VL_NEGATE_I((IData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2146)))
				  : (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_reg_inst 
				     >> 0xcU)) << 0xcU)) 
		   | (0x800U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2164)) 
				 & ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_sel_imm))
				     ? (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_reg_inst 
					>> 0x14U) : 
				    ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_sel_imm))
				      ? (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_reg_inst 
					 >> 7U) : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2146)))) 
				<< 0xbU)))) | ((0x7e0U 
						& (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2164)
						     ? 0U
						     : 
						    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_reg_inst 
						     >> 0x19U)) 
						   << 5U)) 
					       | ((0x1eU 
						   & (((2U 
							== (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_sel_imm))
						        ? 0U
						        : 
						       (((0U 
							  == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_sel_imm)) 
							 | (1U 
							    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_sel_imm)))
							 ? 
							(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_reg_inst 
							 >> 8U)
							 : 
							((5U 
							  == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_sel_imm))
							  ? 
							 (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_reg_inst 
							  >> 0x10U)
							  : 
							 (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_reg_inst 
							  >> 0x15U)))) 
						      << 1U)) 
						  | (1U 
						     & ((0U 
							 == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_sel_imm))
							 ? 
							(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_reg_inst 
							 >> 7U)
							 : 
							((4U 
							  == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_sel_imm))
							  ? 
							 (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_reg_inst 
							  >> 0x14U)
							  : 
							 ((5U 
							   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_sel_imm)) 
							  & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_reg_inst 
							     >> 0xfU))))))))
	    : ((0xfffffff0U & (VL_NEGATE_I((IData)(
						   (1U 
						    & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2241) 
						       >> 3U)))) 
			       << 4U)) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2241)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf_io_pc 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__nBufValid)
	    ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__buf___05Fpc
	    : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq_io_deq_bits_pc);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma_io_in_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_652) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ex_ctrl_singleOut));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe_io_in_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT___T_652) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ex_ctrl_singleOut)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_76 
	= ((1U < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp_io_prv)) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_l)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_124 
	= ((1U < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp_io_prv)) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_l)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_172 
	= ((1U < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp_io_prv)) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_l)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_220 
	= ((1U < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp_io_prv)) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_l)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_268 
	= ((1U < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp_io_prv)) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_l)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_316 
	= ((1U < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp_io_prv)) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_l)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_364 
	= ((1U < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp_io_prv)) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_l)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_412 
	= ((1U < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp_io_prv)) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_l)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__bad_va 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__vm_enabled) 
	   & (VL_GTS_IQQ(1,40,40, VL_ULL(0), vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc) 
	      != VL_GTS_III(1,27,27, 0U, (0x7ffffffU 
					  & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
						     >> 0xcU))))));
    VL_EXTEND_WQ(66,63, __Vtemp1233, vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_459);
    VL_SHIFTL_WWI(66,66,32, __Vtemp1234, __Vtemp1233, 3U);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__mpu_physaddr 
	= (((QData)((IData)((0xfffffffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__resp_valid_2)
					    ? (0xfffffU 
					       & ((__Vtemp1234[1U] 
						   << 0x14U) 
						  | (__Vtemp1234[0U] 
						     >> 0xcU)))
					    : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__vm_enabled)
					        ? (0xfffffU 
						   & (IData)(
							     (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_32 
							      >> 0x2aU)))
					        : (IData)(
							  (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
							   >> 0xcU))))))) 
	    << 0xcU) | (QData)((IData)((0xfffU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc)))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_0 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__vm_enabled) 
	   & ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__valid) 
		& ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_0 
				      >> 0x21U))) == 
		   (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
				      >> 0x1eU))))) 
	       & ((1U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_0 
				       >> 0xdU)))) 
		  | ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_0 
					>> 0x18U))) 
		     == (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
					   >> 0x15U)))))) 
	      & ((2U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_0 
				      >> 0xdU)))) | 
		 ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_0 
				     >> 0xfU))) == 
		  (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
				     >> 0xcU)))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_1 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__vm_enabled) 
	   & ((((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__valid 
			 >> 1U)) & ((0x1ffU & (IData)(
						      (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_1 
						       >> 0x21U))) 
				    == (0x1ffU & (IData)(
							 (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
							  >> 0x1eU))))) 
	       & ((1U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_1 
				       >> 0xdU)))) 
		  | ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_1 
					>> 0x18U))) 
		     == (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
					   >> 0x15U)))))) 
	      & ((2U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_1 
				      >> 0xdU)))) | 
		 ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_1 
				     >> 0xfU))) == 
		  (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
				     >> 0xcU)))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_2 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__vm_enabled) 
	   & ((((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__valid 
			 >> 2U)) & ((0x1ffU & (IData)(
						      (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_2 
						       >> 0x21U))) 
				    == (0x1ffU & (IData)(
							 (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
							  >> 0x1eU))))) 
	       & ((1U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_2 
				       >> 0xdU)))) 
		  | ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_2 
					>> 0x18U))) 
		     == (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
					   >> 0x15U)))))) 
	      & ((2U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_2 
				      >> 0xdU)))) | 
		 ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_2 
				     >> 0xfU))) == 
		  (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
				     >> 0xcU)))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_3 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__vm_enabled) 
	   & ((((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__valid 
			 >> 3U)) & ((0x1ffU & (IData)(
						      (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_3 
						       >> 0x21U))) 
				    == (0x1ffU & (IData)(
							 (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
							  >> 0x1eU))))) 
	       & ((1U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_3 
				       >> 0xdU)))) 
		  | ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_3 
					>> 0x18U))) 
		     == (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
					   >> 0x15U)))))) 
	      & ((2U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_3 
				      >> 0xdU)))) | 
		 ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_3 
				     >> 0xfU))) == 
		  (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
				     >> 0xcU)))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_4 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__vm_enabled) 
	   & ((((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__valid 
			 >> 4U)) & ((0x1ffU & (IData)(
						      (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_4 
						       >> 0x21U))) 
				    == (0x1ffU & (IData)(
							 (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
							  >> 0x1eU))))) 
	       & ((1U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_4 
				       >> 0xdU)))) 
		  | ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_4 
					>> 0x18U))) 
		     == (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
					   >> 0x15U)))))) 
	      & ((2U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_4 
				      >> 0xdU)))) | 
		 ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_4 
				     >> 0xfU))) == 
		  (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
				     >> 0xcU)))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_5 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__vm_enabled) 
	   & ((((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__valid 
			 >> 5U)) & ((0x1ffU & (IData)(
						      (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_5 
						       >> 0x21U))) 
				    == (0x1ffU & (IData)(
							 (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
							  >> 0x1eU))))) 
	       & ((1U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_5 
				       >> 0xdU)))) 
		  | ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_5 
					>> 0x18U))) 
		     == (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
					   >> 0x15U)))))) 
	      & ((2U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_5 
				      >> 0xdU)))) | 
		 ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_5 
				     >> 0xfU))) == 
		  (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
				     >> 0xcU)))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_6 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__vm_enabled) 
	   & ((((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__valid 
			 >> 6U)) & ((0x1ffU & (IData)(
						      (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_6 
						       >> 0x21U))) 
				    == (0x1ffU & (IData)(
							 (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
							  >> 0x1eU))))) 
	       & ((1U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_6 
				       >> 0xdU)))) 
		  | ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_6 
					>> 0x18U))) 
		     == (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
					   >> 0x15U)))))) 
	      & ((2U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_6 
				      >> 0xdU)))) | 
		 ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_6 
				     >> 0xfU))) == 
		  (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
				     >> 0xcU)))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_7 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__vm_enabled) 
	   & ((((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__valid 
			 >> 7U)) & ((0x1ffU & (IData)(
						      (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_7 
						       >> 0x21U))) 
				    == (0x1ffU & (IData)(
							 (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
							  >> 0x1eU))))) 
	       & ((1U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_7 
				       >> 0xdU)))) 
		  | ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_7 
					>> 0x18U))) 
		     == (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
					   >> 0x15U)))))) 
	      & ((2U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_7 
				      >> 0xdU)))) | 
		 ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_7 
				     >> 0xfU))) == 
		  (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
				     >> 0xcU)))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_8 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__vm_enabled) 
	   & ((((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__valid 
			 >> 8U)) & ((0x1ffU & (IData)(
						      (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_8 
						       >> 0x21U))) 
				    == (0x1ffU & (IData)(
							 (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
							  >> 0x1eU))))) 
	       & ((1U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_8 
				       >> 0xdU)))) 
		  | ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_8 
					>> 0x18U))) 
		     == (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
					   >> 0x15U)))))) 
	      & ((2U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_8 
				      >> 0xdU)))) | 
		 ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_8 
				     >> 0xfU))) == 
		  (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
				     >> 0xcU)))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_9 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__vm_enabled) 
	   & ((((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__valid 
			 >> 9U)) & ((0x1ffU & (IData)(
						      (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_9 
						       >> 0x21U))) 
				    == (0x1ffU & (IData)(
							 (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
							  >> 0x1eU))))) 
	       & ((1U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_9 
				       >> 0xdU)))) 
		  | ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_9 
					>> 0x18U))) 
		     == (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
					   >> 0x15U)))))) 
	      & ((2U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_9 
				      >> 0xdU)))) | 
		 ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_9 
				     >> 0xfU))) == 
		  (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
				     >> 0xcU)))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_10 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__vm_enabled) 
	   & ((((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__valid 
			 >> 0xaU)) & ((0x1ffU & (IData)(
							(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_10 
							 >> 0x21U))) 
				      == (0x1ffU & (IData)(
							   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
							    >> 0x1eU))))) 
	       & ((1U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_10 
				       >> 0xdU)))) 
		  | ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_10 
					>> 0x18U))) 
		     == (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
					   >> 0x15U)))))) 
	      & ((2U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_10 
				      >> 0xdU)))) | 
		 ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_10 
				     >> 0xfU))) == 
		  (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
				     >> 0xcU)))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_11 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__vm_enabled) 
	   & ((((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__valid 
			 >> 0xbU)) & ((0x1ffU & (IData)(
							(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_11 
							 >> 0x21U))) 
				      == (0x1ffU & (IData)(
							   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
							    >> 0x1eU))))) 
	       & ((1U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_11 
				       >> 0xdU)))) 
		  | ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_11 
					>> 0x18U))) 
		     == (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
					   >> 0x15U)))))) 
	      & ((2U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_11 
				      >> 0xdU)))) | 
		 ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_11 
				     >> 0xfU))) == 
		  (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
				     >> 0xcU)))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_12 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__vm_enabled) 
	   & ((((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__valid 
			 >> 0xcU)) & ((0x1ffU & (IData)(
							(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_12 
							 >> 0x21U))) 
				      == (0x1ffU & (IData)(
							   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
							    >> 0x1eU))))) 
	       & ((1U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_12 
				       >> 0xdU)))) 
		  | ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_12 
					>> 0x18U))) 
		     == (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
					   >> 0x15U)))))) 
	      & ((2U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_12 
				      >> 0xdU)))) | 
		 ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_12 
				     >> 0xfU))) == 
		  (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
				     >> 0xcU)))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_13 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__vm_enabled) 
	   & ((((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__valid 
			 >> 0xdU)) & ((0x1ffU & (IData)(
							(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_13 
							 >> 0x21U))) 
				      == (0x1ffU & (IData)(
							   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
							    >> 0x1eU))))) 
	       & ((1U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_13 
				       >> 0xdU)))) 
		  | ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_13 
					>> 0x18U))) 
		     == (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
					   >> 0x15U)))))) 
	      & ((2U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_13 
				      >> 0xdU)))) | 
		 ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_13 
				     >> 0xfU))) == 
		  (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
				     >> 0xcU)))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_14 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__vm_enabled) 
	   & ((((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__valid 
			 >> 0xeU)) & ((0x1ffU & (IData)(
							(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_14 
							 >> 0x21U))) 
				      == (0x1ffU & (IData)(
							   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
							    >> 0x1eU))))) 
	       & ((1U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_14 
				       >> 0xdU)))) 
		  | ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_14 
					>> 0x18U))) 
		     == (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
					   >> 0x15U)))))) 
	      & ((2U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_14 
				      >> 0xdU)))) | 
		 ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_14 
				     >> 0xfU))) == 
		  (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
				     >> 0xcU)))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_15 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__vm_enabled) 
	   & ((((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__valid 
			 >> 0xfU)) & ((0x1ffU & (IData)(
							(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_15 
							 >> 0x21U))) 
				      == (0x1ffU & (IData)(
							   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
							    >> 0x1eU))))) 
	       & ((1U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_15 
				       >> 0xdU)))) 
		  | ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_15 
					>> 0x18U))) 
		     == (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
					   >> 0x15U)))))) 
	      & ((2U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_15 
				      >> 0xdU)))) | 
		 ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_15 
				     >> 0xfU))) == 
		  (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
				     >> 0xcU)))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_16 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__vm_enabled) 
	   & ((((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__valid 
			 >> 0x10U)) & ((0x1ffU & (IData)(
							 (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_16 
							  >> 0x21U))) 
				       == (0x1ffU & (IData)(
							    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
							     >> 0x1eU))))) 
	       & ((1U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_16 
				       >> 0xdU)))) 
		  | ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_16 
					>> 0x18U))) 
		     == (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
					   >> 0x15U)))))) 
	      & ((2U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_16 
				      >> 0xdU)))) | 
		 ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_16 
				     >> 0xfU))) == 
		  (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
				     >> 0xcU)))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_17 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__vm_enabled) 
	   & ((((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__valid 
			 >> 0x11U)) & ((0x1ffU & (IData)(
							 (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_17 
							  >> 0x21U))) 
				       == (0x1ffU & (IData)(
							    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
							     >> 0x1eU))))) 
	       & ((1U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_17 
				       >> 0xdU)))) 
		  | ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_17 
					>> 0x18U))) 
		     == (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
					   >> 0x15U)))))) 
	      & ((2U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_17 
				      >> 0xdU)))) | 
		 ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_17 
				     >> 0xfU))) == 
		  (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
				     >> 0xcU)))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_18 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__vm_enabled) 
	   & ((((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__valid 
			 >> 0x12U)) & ((0x1ffU & (IData)(
							 (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_18 
							  >> 0x21U))) 
				       == (0x1ffU & (IData)(
							    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
							     >> 0x1eU))))) 
	       & ((1U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_18 
				       >> 0xdU)))) 
		  | ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_18 
					>> 0x18U))) 
		     == (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
					   >> 0x15U)))))) 
	      & ((2U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_18 
				      >> 0xdU)))) | 
		 ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_18 
				     >> 0xfU))) == 
		  (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
				     >> 0xcU)))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_19 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__vm_enabled) 
	   & ((((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__valid 
			 >> 0x13U)) & ((0x1ffU & (IData)(
							 (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_19 
							  >> 0x21U))) 
				       == (0x1ffU & (IData)(
							    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
							     >> 0x1eU))))) 
	       & ((1U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_19 
				       >> 0xdU)))) 
		  | ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_19 
					>> 0x18U))) 
		     == (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
					   >> 0x15U)))))) 
	      & ((2U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_19 
				      >> 0xdU)))) | 
		 ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_19 
				     >> 0xfU))) == 
		  (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
				     >> 0xcU)))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_20 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__vm_enabled) 
	   & ((((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__valid 
			 >> 0x14U)) & ((0x1ffU & (IData)(
							 (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_20 
							  >> 0x21U))) 
				       == (0x1ffU & (IData)(
							    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
							     >> 0x1eU))))) 
	       & ((1U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_20 
				       >> 0xdU)))) 
		  | ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_20 
					>> 0x18U))) 
		     == (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
					   >> 0x15U)))))) 
	      & ((2U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_20 
				      >> 0xdU)))) | 
		 ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_20 
				     >> 0xfU))) == 
		  (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
				     >> 0xcU)))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_21 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__vm_enabled) 
	   & ((((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__valid 
			 >> 0x15U)) & ((0x1ffU & (IData)(
							 (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_21 
							  >> 0x21U))) 
				       == (0x1ffU & (IData)(
							    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
							     >> 0x1eU))))) 
	       & ((1U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_21 
				       >> 0xdU)))) 
		  | ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_21 
					>> 0x18U))) 
		     == (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
					   >> 0x15U)))))) 
	      & ((2U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_21 
				      >> 0xdU)))) | 
		 ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_21 
				     >> 0xfU))) == 
		  (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
				     >> 0xcU)))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_22 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__vm_enabled) 
	   & ((((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__valid 
			 >> 0x16U)) & ((0x1ffU & (IData)(
							 (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_22 
							  >> 0x21U))) 
				       == (0x1ffU & (IData)(
							    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
							     >> 0x1eU))))) 
	       & ((1U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_22 
				       >> 0xdU)))) 
		  | ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_22 
					>> 0x18U))) 
		     == (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
					   >> 0x15U)))))) 
	      & ((2U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_22 
				      >> 0xdU)))) | 
		 ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_22 
				     >> 0xfU))) == 
		  (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
				     >> 0xcU)))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_23 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__vm_enabled) 
	   & ((((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__valid 
			 >> 0x17U)) & ((0x1ffU & (IData)(
							 (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_23 
							  >> 0x21U))) 
				       == (0x1ffU & (IData)(
							    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
							     >> 0x1eU))))) 
	       & ((1U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_23 
				       >> 0xdU)))) 
		  | ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_23 
					>> 0x18U))) 
		     == (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
					   >> 0x15U)))))) 
	      & ((2U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_23 
				      >> 0xdU)))) | 
		 ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_23 
				     >> 0xfU))) == 
		  (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
				     >> 0xcU)))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_24 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__vm_enabled) 
	   & ((((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__valid 
			 >> 0x18U)) & ((0x1ffU & (IData)(
							 (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_24 
							  >> 0x21U))) 
				       == (0x1ffU & (IData)(
							    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
							     >> 0x1eU))))) 
	       & ((1U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_24 
				       >> 0xdU)))) 
		  | ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_24 
					>> 0x18U))) 
		     == (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
					   >> 0x15U)))))) 
	      & ((2U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_24 
				      >> 0xdU)))) | 
		 ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_24 
				     >> 0xfU))) == 
		  (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
				     >> 0xcU)))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_25 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__vm_enabled) 
	   & ((((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__valid 
			 >> 0x19U)) & ((0x1ffU & (IData)(
							 (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_25 
							  >> 0x21U))) 
				       == (0x1ffU & (IData)(
							    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
							     >> 0x1eU))))) 
	       & ((1U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_25 
				       >> 0xdU)))) 
		  | ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_25 
					>> 0x18U))) 
		     == (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
					   >> 0x15U)))))) 
	      & ((2U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_25 
				      >> 0xdU)))) | 
		 ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_25 
				     >> 0xfU))) == 
		  (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
				     >> 0xcU)))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_26 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__vm_enabled) 
	   & ((((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__valid 
			 >> 0x1aU)) & ((0x1ffU & (IData)(
							 (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_26 
							  >> 0x21U))) 
				       == (0x1ffU & (IData)(
							    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
							     >> 0x1eU))))) 
	       & ((1U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_26 
				       >> 0xdU)))) 
		  | ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_26 
					>> 0x18U))) 
		     == (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
					   >> 0x15U)))))) 
	      & ((2U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_26 
				      >> 0xdU)))) | 
		 ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_26 
				     >> 0xfU))) == 
		  (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
				     >> 0xcU)))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_27 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__vm_enabled) 
	   & ((((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__valid 
			 >> 0x1bU)) & ((0x1ffU & (IData)(
							 (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_27 
							  >> 0x21U))) 
				       == (0x1ffU & (IData)(
							    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
							     >> 0x1eU))))) 
	       & ((1U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_27 
				       >> 0xdU)))) 
		  | ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_27 
					>> 0x18U))) 
		     == (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
					   >> 0x15U)))))) 
	      & ((2U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_27 
				      >> 0xdU)))) | 
		 ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_27 
				     >> 0xfU))) == 
		  (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
				     >> 0xcU)))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_28 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__vm_enabled) 
	   & ((((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__valid 
			 >> 0x1cU)) & ((0x1ffU & (IData)(
							 (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_28 
							  >> 0x21U))) 
				       == (0x1ffU & (IData)(
							    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
							     >> 0x1eU))))) 
	       & ((1U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_28 
				       >> 0xdU)))) 
		  | ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_28 
					>> 0x18U))) 
		     == (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
					   >> 0x15U)))))) 
	      & ((2U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_28 
				      >> 0xdU)))) | 
		 ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_28 
				     >> 0xfU))) == 
		  (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
				     >> 0xcU)))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_29 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__vm_enabled) 
	   & ((((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__valid 
			 >> 0x1dU)) & ((0x1ffU & (IData)(
							 (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_29 
							  >> 0x21U))) 
				       == (0x1ffU & (IData)(
							    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
							     >> 0x1eU))))) 
	       & ((1U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_29 
				       >> 0xdU)))) 
		  | ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_29 
					>> 0x18U))) 
		     == (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
					   >> 0x15U)))))) 
	      & ((2U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_29 
				      >> 0xdU)))) | 
		 ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_29 
				     >> 0xfU))) == 
		  (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
				     >> 0xcU)))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_30 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__vm_enabled) 
	   & ((((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__valid 
			 >> 0x1eU)) & ((0x1ffU & (IData)(
							 (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_30 
							  >> 0x21U))) 
				       == (0x1ffU & (IData)(
							    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
							     >> 0x1eU))))) 
	       & ((1U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_30 
				       >> 0xdU)))) 
		  | ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_30 
					>> 0x18U))) 
		     == (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
					   >> 0x15U)))))) 
	      & ((2U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_30 
				      >> 0xdU)))) | 
		 ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_30 
				     >> 0xfU))) == 
		  (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
				     >> 0xcU)))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_31 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__vm_enabled) 
	   & ((((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__valid 
			 >> 0x1fU)) & ((0x1ffU & (IData)(
							 (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_31 
							  >> 0x21U))) 
				       == (0x1ffU & (IData)(
							    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
							     >> 0x1eU))))) 
	       & ((1U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_31 
				       >> 0xdU)))) 
		  | ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_31 
					>> 0x18U))) 
		     == (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
					   >> 0x15U)))))) 
	      & ((2U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_31 
				      >> 0xdU)))) | 
		 ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_31 
				     >> 0xfU))) == 
		  (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
				     >> 0xcU)))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_32 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__vm_enabled) 
	   & ((((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__valid 
			 >> 0x20U)) & ((0x1ffU & (IData)(
							 (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_32 
							  >> 0x21U))) 
				       == (0x1ffU & (IData)(
							    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
							     >> 0x1eU))))) 
	       & ((1U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_32 
				       >> 0xdU)))) 
		  | ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_32 
					>> 0x18U))) 
		     == (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
					   >> 0x15U)))))) 
	      & ((2U > (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_32 
				      >> 0xdU)))) | 
		 ((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__reg_entries_32 
				     >> 0xfU))) == 
		  (0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
				     >> 0xcU)))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_xcpt0_pf_inst 
	= ((1U & ((3U & ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__nBufValid))) 
		  - (IData)(1U))) ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__buf___05Fxcpt_pf_inst)
	    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq_io_deq_bits_xcpt_pf_inst));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache_io_s2_kill 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s2_speculative) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s2_tlb_resp_cacheable))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s2_xcpt));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__doTgtPageRepl 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__samePage)) 
	   & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__pageHit)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxPageRepl 
	= (0xffU & (((0x3eU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__pageHit) 
			       << 1U)) | (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__pageHit) 
						>> 5U))) 
		    | ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__pageHit))
		        ? 0U : ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__nextPageRepl)))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_902 
	= (0xffffU & ((0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit 
				 >> 0x10U)) | vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_1176 
	= (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit 
		  >> 1U) | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit 
			    >> 2U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_1192 
	= (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit 
		  >> 3U) | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit 
			    >> 4U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_1203 
	= (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit 
		  >> 5U) | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit 
			    >> 6U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_1227 
	= (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit 
		  >> 8U) | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit 
			    >> 9U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_1243 
	= (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit 
		  >> 0xaU) | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit 
			      >> 0xbU)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_1254 
	= (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit 
		  >> 0xcU) | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit 
			      >> 0xdU)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_1283 
	= (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit 
		  >> 0xfU) | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit 
			      >> 0x10U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_1299 
	= (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit 
		  >> 0x11U) | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit 
			       >> 0x12U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_1310 
	= (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit 
		  >> 0x13U) | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit 
			       >> 0x14U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_1334 
	= (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit 
		  >> 0x16U) | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit 
			       >> 0x17U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_1350 
	= (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit 
		  >> 0x18U) | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit 
			       >> 0x19U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_1361 
	= (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit 
		  >> 0x1aU) | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit 
			       >> 0x1bU)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_664 
	= (0x7fU & ((0x7fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__pageHit) 
			      << 1U)) >> ((((((((((
						   (((((((((((((((((((1U 
								      & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit)
								      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxPages_0)
								      : 0U) 
								    | ((2U 
									& vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit)
								        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxPages_1)
								        : 0U)) 
								   | ((4U 
								       & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit)
								       ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxPages_2)
								       : 0U)) 
								  | ((8U 
								      & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit)
								      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxPages_3)
								      : 0U)) 
								 | ((0x10U 
								     & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit)
								     ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxPages_4)
								     : 0U)) 
								| ((0x20U 
								    & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit)
								    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxPages_5)
								    : 0U)) 
							       | ((0x40U 
								   & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit)
								   ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxPages_6)
								   : 0U)) 
							      | ((0x80U 
								  & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit)
								  ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxPages_7)
								  : 0U)) 
							     | ((0x100U 
								 & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit)
								 ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxPages_8)
								 : 0U)) 
							    | ((0x200U 
								& vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit)
							        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxPages_9)
							        : 0U)) 
							   | ((0x400U 
							       & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit)
							       ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxPages_10)
							       : 0U)) 
							  | ((0x800U 
							      & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit)
							      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxPages_11)
							      : 0U)) 
							 | ((0x1000U 
							     & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit)
							     ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxPages_12)
							     : 0U)) 
							| ((0x2000U 
							    & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit)
							    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxPages_13)
							    : 0U)) 
						       | ((0x4000U 
							   & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit)
							   ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxPages_14)
							   : 0U)) 
						      | ((0x8000U 
							  & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit)
							  ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxPages_15)
							  : 0U)) 
						     | ((0x10000U 
							 & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit)
							 ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxPages_16)
							 : 0U)) 
						    | ((0x20000U 
							& vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit)
						        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxPages_17)
						        : 0U)) 
						   | ((0x40000U 
						       & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit)
						       ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxPages_18)
						       : 0U)) 
						  | ((0x80000U 
						      & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit)
						      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxPages_19)
						      : 0U)) 
						 | ((0x100000U 
						     & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit)
						     ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxPages_20)
						     : 0U)) 
						| ((0x200000U 
						    & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit)
						    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxPages_21)
						    : 0U)) 
					       | ((0x400000U 
						   & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit)
						   ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxPages_22)
						   : 0U)) 
					      | ((0x800000U 
						  & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit)
						  ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxPages_23)
						  : 0U)) 
					     | ((0x1000000U 
						 & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit)
						 ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxPages_24)
						 : 0U)) 
					    | ((0x2000000U 
						& vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit)
					        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxPages_25)
					        : 0U)) 
					   | ((0x4000000U 
					       & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit)
					       ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxPages_26)
					       : 0U)) 
					  | ((0x8000000U 
					      & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit)
					      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxPages_27)
					      : 0U))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_1507 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_1386___05FT_1487_data)) 
	   & (0U != (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit 
		     & (((((((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__cfiType_27)) 
			     << 0x1bU) | ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__cfiType_26)) 
					  << 0x1aU)) 
			   | (((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__cfiType_25)) 
			       << 0x19U) | ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__cfiType_24)) 
					    << 0x18U))) 
			  | (((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__cfiType_23)) 
			      << 0x17U) | (((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__cfiType_22)) 
					    << 0x16U) 
					   | ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__cfiType_21)) 
					      << 0x15U)))) 
			 | (((((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__cfiType_20)) 
			       << 0x14U) | ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__cfiType_19)) 
					    << 0x13U)) 
			     | (((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__cfiType_18)) 
				 << 0x12U) | ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__cfiType_17)) 
					      << 0x11U))) 
			    | (((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__cfiType_16)) 
				<< 0x10U) | (((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__cfiType_15)) 
					      << 0xfU) 
					     | ((0U 
						 == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__cfiType_14)) 
						<< 0xeU))))) 
			| ((((((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__cfiType_13)) 
			       << 0xdU) | ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__cfiType_12)) 
					   << 0xcU)) 
			     | (((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__cfiType_11)) 
				 << 0xbU) | ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__cfiType_10)) 
					     << 0xaU))) 
			    | (((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__cfiType_9)) 
				<< 9U) | (((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__cfiType_8)) 
					   << 8U) | 
					  ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__cfiType_7)) 
					   << 7U)))) 
			   | (((((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__cfiType_6)) 
				 << 6U) | ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__cfiType_5)) 
					   << 5U)) 
			       | (((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__cfiType_4)) 
				   << 4U) | ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__cfiType_3)) 
					     << 3U))) 
			      | (((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__cfiType_2)) 
				  << 2U) | (((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__cfiType_1)) 
					     << 1U) 
					    | (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__cfiType_0))))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT___T_778 
	= (((((((((((((((((((((((((((((1U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit)
				       ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__tgtPages_0)
				       : 0U) | ((2U 
						 & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit)
						 ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__tgtPages_1)
						 : 0U)) 
				    | ((4U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit)
				        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__tgtPages_2)
				        : 0U)) | ((8U 
						   & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit)
						   ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__tgtPages_3)
						   : 0U)) 
				  | ((0x10U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit)
				      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__tgtPages_4)
				      : 0U)) | ((0x20U 
						 & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit)
						 ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__tgtPages_5)
						 : 0U)) 
				| ((0x40U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit)
				    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__tgtPages_6)
				    : 0U)) | ((0x80U 
					       & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit)
					       ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__tgtPages_7)
					       : 0U)) 
			      | ((0x100U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit)
				  ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__tgtPages_8)
				  : 0U)) | ((0x200U 
					     & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit)
					     ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__tgtPages_9)
					     : 0U)) 
			    | ((0x400U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit)
			        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__tgtPages_10)
			        : 0U)) | ((0x800U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit)
					   ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__tgtPages_11)
					   : 0U)) | 
			  ((0x1000U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit)
			    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__tgtPages_12)
			    : 0U)) | ((0x2000U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit)
				       ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__tgtPages_13)
				       : 0U)) | ((0x4000U 
						  & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit)
						  ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__tgtPages_14)
						  : 0U)) 
		       | ((0x8000U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit)
			   ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__tgtPages_15)
			   : 0U)) | ((0x10000U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit)
				      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__tgtPages_16)
				      : 0U)) | ((0x20000U 
						 & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit)
						 ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__tgtPages_17)
						 : 0U)) 
		    | ((0x40000U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit)
		        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__tgtPages_18)
		        : 0U)) | ((0x80000U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit)
				   ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__tgtPages_19)
				   : 0U)) | ((0x100000U 
					      & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit)
					      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__tgtPages_20)
					      : 0U)) 
		 | ((0x200000U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit)
		     ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__tgtPages_21)
		     : 0U)) | ((0x400000U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit)
			        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__tgtPages_22)
			        : 0U)) | ((0x800000U 
					   & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit)
					   ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__tgtPages_23)
					   : 0U)) | 
	      ((0x1000000U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit)
	        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__tgtPages_24)
	        : 0U)) | ((0x2000000U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit)
			   ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__tgtPages_25)
			   : 0U)) | ((0x4000000U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit)
				      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__tgtPages_26)
				      : 0U)) | ((0x8000000U 
						 & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__idxHit)
						 ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__BTB__DOT__tgtPages_27)
						 : 0U));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2559 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2384)
	    ? ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2466) 
		 << 0x14U) | ((0xff000U & (VL_NEGATE_I((IData)(
							       (1U 
								& (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_reg_inst 
								   >> 0x1fU)))) 
					   << 0xcU)) 
			      | (0x800U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_reg_inst 
					   << 4U)))) 
	       | ((0x7e0U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_reg_inst 
			     >> 0x14U)) | (0x1eU & 
					   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_reg_inst 
					    >> 7U))))
	    : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_ctrl_jal)
	        ? ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2466) 
		     << 0x14U) | ((0xff000U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_reg_inst) 
				  | (0x800U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_reg_inst 
					       >> 9U)))) 
		   | (0x7feU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_reg_inst 
				>> 0x14U))) : ((0xfffffff0U 
						& (VL_NEGATE_I((IData)(
								       (1U 
									& (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_reg_rvc)
									     ? 2U
									     : 4U) 
									   >> 3U)))) 
						   << 4U)) 
					       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_reg_rvc)
						   ? 2U
						   : 4U))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA0__DOT___GEN_4 
	= (VL_ULL(0x1ffffffff) & ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))
				   ? ((QData)((IData)(
						      (((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA0__DOT__input_array_0 
							 & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA0__DOT__input_array_1) 
							| (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA0__DOT__input_array_1 
							   & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA0__DOT__input_array_2)) 
						       | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA0__DOT__input_array_0 
							  & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA0__DOT__input_array_2)))) 
				      << 1U) : (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA0__DOT__temp_array_1))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA1__DOT___GEN_4 
	= (VL_ULL(0x1ffffffff) & ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))
				   ? ((QData)((IData)(
						      (((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA1__DOT__input_array_0 
							 & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA1__DOT__input_array_1) 
							| (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA1__DOT__input_array_1 
							   & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA1__DOT__input_array_2)) 
						       | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA1__DOT__input_array_0 
							  & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA1__DOT__input_array_2)))) 
				      << 1U) : (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA1__DOT__temp_array_1))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA2__DOT___GEN_4 
	= (VL_ULL(0x1ffffffff) & ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))
				   ? ((QData)((IData)(
						      (((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA2__DOT__input_array_0 
							 & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA2__DOT__input_array_1) 
							| (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA2__DOT__input_array_1 
							   & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA2__DOT__input_array_2)) 
						       | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA2__DOT__input_array_0 
							  & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA2__DOT__input_array_2)))) 
				      << 1U) : (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA2__DOT__temp_array_1))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA3__DOT___GEN_4 
	= (VL_ULL(0x1ffffffff) & ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))
				   ? ((QData)((IData)(
						      (((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA3__DOT__input_array_0 
							 & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA3__DOT__input_array_1) 
							| (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA3__DOT__input_array_1 
							   & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA3__DOT__input_array_2)) 
						       | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA3__DOT__input_array_0 
							  & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA3__DOT__input_array_2)))) 
				      << 1U) : (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA3__DOT__temp_array_1))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA4__DOT___GEN_4 
	= (VL_ULL(0x1ffffffff) & ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))
				   ? ((QData)((IData)(
						      (((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA4__DOT__input_array_0 
							 & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA4__DOT__input_array_1) 
							| (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA4__DOT__input_array_1 
							   & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA4__DOT__input_array_2)) 
						       | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA4__DOT__input_array_0 
							  & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA4__DOT__input_array_2)))) 
				      << 1U) : (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA4__DOT__temp_array_1))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA5__DOT___GEN_4 
	= (VL_ULL(0x1ffffffff) & ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))
				   ? ((QData)((IData)(
						      (((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA5__DOT__input_array_0 
							 & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA5__DOT__input_array_1) 
							| (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA5__DOT__input_array_1 
							   & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA5__DOT__input_array_2)) 
						       | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA5__DOT__input_array_0 
							  & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA5__DOT__input_array_2)))) 
				      << 1U) : (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA5__DOT__temp_array_1))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA6__DOT___GEN_4 
	= (VL_ULL(0x1ffffffff) & ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))
				   ? ((QData)((IData)(
						      (((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA6__DOT__input_array_0 
							 & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA6__DOT__input_array_1) 
							| (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA6__DOT__input_array_1 
							   & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA6__DOT__input_array_2)) 
						       | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA6__DOT__input_array_0 
							  & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA6__DOT__input_array_2)))) 
				      << 1U) : (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA6__DOT__temp_array_1))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA7__DOT___GEN_4 
	= (VL_ULL(0x1ffffffff) & ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))
				   ? ((QData)((IData)(
						      (((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA7__DOT__input_array_0 
							 & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA7__DOT__input_array_1) 
							| (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA7__DOT__input_array_1 
							   & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA7__DOT__input_array_2)) 
						       | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA7__DOT__input_array_0 
							  & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA7__DOT__input_array_2)))) 
				      << 1U) : (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA7__DOT__temp_array_1))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA8__DOT___GEN_4 
	= (VL_ULL(0x1ffffffff) & ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))
				   ? ((QData)((IData)(
						      (((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA8__DOT__input_array_0 
							 & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA8__DOT__input_array_1) 
							| (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA8__DOT__input_array_1 
							   & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA8__DOT__input_array_2)) 
						       | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA8__DOT__input_array_0 
							  & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA8__DOT__input_array_2)))) 
				      << 1U) : (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA8__DOT__temp_array_1))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA9__DOT___GEN_4 
	= (VL_ULL(0x1ffffffff) & ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))
				   ? ((QData)((IData)(
						      (((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA9__DOT__input_array_0 
							 & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA9__DOT__input_array_1) 
							| (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA9__DOT__input_array_1 
							   & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA9__DOT__input_array_2)) 
						       | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA9__DOT__input_array_0 
							  & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA9__DOT__input_array_2)))) 
				      << 1U) : (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA9__DOT__temp_array_1))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA10__DOT___GEN_4 
	= (VL_ULL(0x1ffffffff) & ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))
				   ? ((QData)((IData)(
						      (((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA10__DOT__input_array_0 
							 & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA10__DOT__input_array_1) 
							| (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA10__DOT__input_array_1 
							   & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA10__DOT__input_array_2)) 
						       | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA10__DOT__input_array_0 
							  & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA10__DOT__input_array_2)))) 
				      << 1U) : (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA10__DOT__temp_array_1))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA11__DOT___GEN_4 
	= (VL_ULL(0x1ffffffff) & ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))
				   ? ((QData)((IData)(
						      (((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA11__DOT__input_array_0 
							 & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA11__DOT__input_array_1) 
							| (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA11__DOT__input_array_1 
							   & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA11__DOT__input_array_2)) 
						       | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA11__DOT__input_array_0 
							  & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA11__DOT__input_array_2)))) 
				      << 1U) : (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA11__DOT__temp_array_1))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA12__DOT___GEN_4 
	= (VL_ULL(0x1ffffffff) & ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))
				   ? ((QData)((IData)(
						      (((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA12__DOT__input_array_0 
							 & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA12__DOT__input_array_1) 
							| (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA12__DOT__input_array_1 
							   & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA12__DOT__input_array_2)) 
						       | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA12__DOT__input_array_0 
							  & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA12__DOT__input_array_2)))) 
				      << 1U) : (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA12__DOT__temp_array_1))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA13__DOT___GEN_4 
	= (VL_ULL(0x1ffffffff) & ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))
				   ? ((QData)((IData)(
						      (((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA13__DOT__input_array_0 
							 & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA13__DOT__input_array_1) 
							| (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA13__DOT__input_array_1 
							   & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA13__DOT__input_array_2)) 
						       | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA13__DOT__input_array_0 
							  & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA13__DOT__input_array_2)))) 
				      << 1U) : (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA13__DOT__temp_array_1))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA14__DOT___GEN_4 
	= (VL_ULL(0x1ffffffff) & ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))
				   ? ((QData)((IData)(
						      (((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA14__DOT__input_array_0 
							 & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA14__DOT__input_array_1) 
							| (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA14__DOT__input_array_1 
							   & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA14__DOT__input_array_2)) 
						       | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA14__DOT__input_array_0 
							  & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA14__DOT__input_array_2)))) 
				      << 1U) : (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA14__DOT__temp_array_1))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA15__DOT___GEN_4 
	= (VL_ULL(0x1ffffffff) & ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))
				   ? ((QData)((IData)(
						      (((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA15__DOT__input_array_0 
							 & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA15__DOT__input_array_1) 
							| (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA15__DOT__input_array_1 
							   & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA15__DOT__input_array_2)) 
						       | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA15__DOT__input_array_0 
							  & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA15__DOT__input_array_2)))) 
				      << 1U) : (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA15__DOT__temp_array_1))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA16__DOT___GEN_4 
	= (VL_ULL(0x1ffffffff) & ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))
				   ? ((QData)((IData)(
						      (((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA16__DOT__input_array_0 
							 & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA16__DOT__input_array_1) 
							| (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA16__DOT__input_array_1 
							   & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA16__DOT__input_array_2)) 
						       | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA16__DOT__input_array_0 
							  & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA16__DOT__input_array_2)))) 
				      << 1U) : (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA16__DOT__temp_array_1))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA17__DOT___GEN_4 
	= (VL_ULL(0x1ffffffff) & ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))
				   ? ((QData)((IData)(
						      (((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA17__DOT__input_array_0 
							 & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA17__DOT__input_array_1) 
							| (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA17__DOT__input_array_1 
							   & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA17__DOT__input_array_2)) 
						       | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA17__DOT__input_array_0 
							  & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA17__DOT__input_array_2)))) 
				      << 1U) : (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA17__DOT__temp_array_1))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA18__DOT___GEN_4 
	= (VL_ULL(0x1ffffffff) & ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))
				   ? ((QData)((IData)(
						      (((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA18__DOT__input_array_0 
							 & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA18__DOT__input_array_1) 
							| (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA18__DOT__input_array_1 
							   & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA18__DOT__input_array_2)) 
						       | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA18__DOT__input_array_0 
							  & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA18__DOT__input_array_2)))) 
				      << 1U) : (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA18__DOT__temp_array_1))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA19__DOT___GEN_4 
	= (VL_ULL(0x1ffffffff) & ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))
				   ? ((QData)((IData)(
						      (((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA19__DOT__input_array_0 
							 & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA19__DOT__input_array_1) 
							| (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA19__DOT__input_array_1 
							   & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA19__DOT__input_array_2)) 
						       | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA19__DOT__input_array_0 
							  & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA19__DOT__input_array_2)))) 
				      << 1U) : (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA19__DOT__temp_array_1))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA20__DOT___GEN_4 
	= (VL_ULL(0x1ffffffff) & ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))
				   ? ((QData)((IData)(
						      (((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA20__DOT__input_array_0 
							 & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA20__DOT__input_array_1) 
							| (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA20__DOT__input_array_1 
							   & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA20__DOT__input_array_2)) 
						       | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA20__DOT__input_array_0 
							  & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA20__DOT__input_array_2)))) 
				      << 1U) : (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA20__DOT__temp_array_1))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA21__DOT___GEN_4 
	= (VL_ULL(0x1ffffffff) & ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))
				   ? ((QData)((IData)(
						      (((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA21__DOT__input_array_0 
							 & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA21__DOT__input_array_1) 
							| (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA21__DOT__input_array_1 
							   & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA21__DOT__input_array_2)) 
						       | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA21__DOT__input_array_0 
							  & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA21__DOT__input_array_2)))) 
				      << 1U) : (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA21__DOT__temp_array_1))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA22__DOT___GEN_4 
	= (VL_ULL(0x1ffffffff) & ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))
				   ? ((QData)((IData)(
						      (((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA22__DOT__input_array_0 
							 & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA22__DOT__input_array_1) 
							| (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA22__DOT__input_array_1 
							   & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA22__DOT__input_array_2)) 
						       | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA22__DOT__input_array_0 
							  & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA22__DOT__input_array_2)))) 
				      << 1U) : (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA22__DOT__temp_array_1))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA23__DOT___GEN_4 
	= (VL_ULL(0x1ffffffff) & ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))
				   ? ((QData)((IData)(
						      (((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA23__DOT__input_array_0 
							 & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA23__DOT__input_array_1) 
							| (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA23__DOT__input_array_1 
							   & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA23__DOT__input_array_2)) 
						       | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA23__DOT__input_array_0 
							  & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA23__DOT__input_array_2)))) 
				      << 1U) : (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA23__DOT__temp_array_1))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA24__DOT___GEN_4 
	= (VL_ULL(0x1ffffffff) & ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))
				   ? ((QData)((IData)(
						      (((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA24__DOT__input_array_0 
							 & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA24__DOT__input_array_1) 
							| (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA24__DOT__input_array_1 
							   & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA24__DOT__input_array_2)) 
						       | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA24__DOT__input_array_0 
							  & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA24__DOT__input_array_2)))) 
				      << 1U) : (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA24__DOT__temp_array_1))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA25__DOT___GEN_4 
	= (VL_ULL(0x1ffffffff) & ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))
				   ? ((QData)((IData)(
						      (((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA25__DOT__input_array_0 
							 & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA25__DOT__input_array_1) 
							| (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA25__DOT__input_array_1 
							   & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA25__DOT__input_array_2)) 
						       | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA25__DOT__input_array_0 
							  & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA25__DOT__input_array_2)))) 
				      << 1U) : (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA25__DOT__temp_array_1))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA26__DOT___GEN_4 
	= (VL_ULL(0x1ffffffff) & ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))
				   ? ((QData)((IData)(
						      (((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA26__DOT__input_array_0 
							 & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA26__DOT__input_array_1) 
							| (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA26__DOT__input_array_1 
							   & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA26__DOT__input_array_2)) 
						       | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA26__DOT__input_array_0 
							  & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA26__DOT__input_array_2)))) 
				      << 1U) : (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA26__DOT__temp_array_1))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA27__DOT___GEN_4 
	= (VL_ULL(0x1ffffffff) & ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__cmd__DOT__ram_inst_funct___05FT_63_data))
				   ? ((QData)((IData)(
						      (((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA27__DOT__input_array_0 
							 & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA27__DOT__input_array_1) 
							| (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA27__DOT__input_array_1 
							   & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA27__DOT__input_array_2)) 
						       | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA27__DOT__input_array_0 
							  & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA27__DOT__input_array_2)))) 
				      << 1U) : (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__accumulator__DOT__Mul__DOT__CSA27__DOT__temp_array_1))));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:183795
    vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT___T_305 
	= (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__PLICFanIn_1__DOT___T_23)
		  ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__PLICFanIn_1__DOT___T_20)
		  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__PLICFanIn_1__DOT__effectivePriority_2)));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:183769
    if (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT___T_2584) 
	 & (0U == (3U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT___T_714)))))) {
	vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__threshold_1 
	    = (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_data___05FT_55_data));
    }
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:183794
    vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT___T_300 
	= (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__PLICFanIn__DOT___T_23)
		  ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__PLICFanIn__DOT___T_20)
		  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__PLICFanIn__DOT__effectivePriority_2)));
    // ALWAYS at /home/brianlee/Documents/project-template/rocket-chip/emulator/generated-src/freechips.rocketchip.system.RoccTest2Config.v:183766
    if (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT___T_2552) 
	 & (0U == (3U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT___T_714)))))) {
	vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__threshold_0 
	    = (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_data___05FT_55_data));
    }
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
    VL_EXTEND_WQ(81,50, __Vtemp1237, vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum);
    VL_SHIFTL_WWI(81,81,5, __Vtemp1238, __Vtemp1237, (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_22_CDom_CAlignDist));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_34[0U] 
	= __Vtemp1238[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_34[1U] 
	= __Vtemp1238[1U];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_34[2U] 
	= (0x1ffffU & __Vtemp1238[2U]);
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
    VL_SHIFTR_WWI(129,129,6, __Vtemp1244, vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_109, 
		  (0x3fU & VL_NEGATE_I((0x7ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__count) 
						  << 3U)))));
    __Vtemp1245[0U] = __Vtemp1244[0U];
    __Vtemp1245[1U] = __Vtemp1244[1U];
    __Vtemp1245[2U] = __Vtemp1244[2U];
    __Vtemp1245[3U] = __Vtemp1244[3U];
    __Vtemp1245[4U] = (1U & __Vtemp1244[4U]);
    VL_EXTEND_WW(130,129, __Vtemp1246, __Vtemp1245);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_160[0U] 
	= (IData)((((QData)((IData)(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_148)
				      ? __Vtemp1246[1U]
				      : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_124[1U]))) 
		    << 0x20U) | (QData)((IData)(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_148)
						  ? 
						 __Vtemp1246[0U]
						  : 
						 vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_124[0U])))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_160[1U] 
	= (IData)(((((QData)((IData)(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_148)
				       ? __Vtemp1246[1U]
				       : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_124[1U]))) 
		     << 0x20U) | (QData)((IData)(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_148)
						   ? 
						  __Vtemp1246[0U]
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
    VL_EXTEND_WQ(65,64, __Vtemp1250, vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___GEN_19);
    VL_NEGATE_W(3, __Vtemp1251, __Vtemp1250);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN__DOT___T_16 
	= ((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__in_bits_typ)) 
		  & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___GEN_19 
			     >> 0x3fU)))) ? (((QData)((IData)(
							      __Vtemp1251[1U])) 
					      << 0x20U) 
					     | (QData)((IData)(
							       __Vtemp1251[0U])))
	    : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___GEN_19);
    VL_EXTEND_WQ(65,64, __Vtemp1254, vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___GEN_19);
    VL_NEGATE_W(3, __Vtemp1255, __Vtemp1254);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN_1__DOT___T_16 
	= ((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__in_bits_typ)) 
		  & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___GEN_19 
			     >> 0x3fU)))) ? (((QData)((IData)(
							      __Vtemp1255[1U])) 
					      << 0x20U) 
					     | (QData)((IData)(
							       __Vtemp1255[0U])))
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
    VL_EXTEND_WW(171,108, __Vtemp1258, vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum);
    VL_SHIFTL_WWI(171,171,6, __Vtemp1259, __Vtemp1258, (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT___T_22_CDom_CAlignDist));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_34[0U] 
	= __Vtemp1259[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_34[1U] 
	= __Vtemp1259[1U];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_34[2U] 
	= __Vtemp1259[2U];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_34[3U] 
	= __Vtemp1259[3U];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_34[4U] 
	= __Vtemp1259[4U];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fpuOpt__DOT__FPUFMAPipe__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___T_34[5U] 
	= (0x7ffU & __Vtemp1259[5U]);
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
    VL_EXTEND_WQ(66,63, __Vtemp1266, vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_459);
    VL_SHIFTL_WWI(66,66,32, __Vtemp1267, __Vtemp1266, 3U);
    VL_EXTEND_WQ(66,54, __Vtemp1269, (VL_ULL(0x3fffffffffffff) 
				      & (((QData)((IData)(
							  (3U 
							   & __Vtemp1267[2U]))) 
					  << 0x34U) 
					 | (((QData)((IData)(
							     __Vtemp1267[1U])) 
					     << 0x14U) 
					    | ((QData)((IData)(
							       __Vtemp1267[0U])) 
					       >> 0xcU)))));
    VL_SHIFTL_WWI(66,66,32, __Vtemp1270, __Vtemp1269, 0xcU);
    __Vtemp1272[0U] = (0x60000000U ^ __Vtemp1270[0U]);
    __Vtemp1272[1U] = __Vtemp1270[1U];
    __Vtemp1272[2U] = (3U & __Vtemp1270[2U]);
    VL_EXTEND_WW(67,66, __Vtemp1273, __Vtemp1272);
    VL_EXTEND_WQ(66,63, __Vtemp1280, vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_459);
    VL_SHIFTL_WWI(66,66,32, __Vtemp1281, __Vtemp1280, 3U);
    VL_EXTEND_WQ(66,54, __Vtemp1283, (VL_ULL(0x3fffffffffffff) 
				      & (((QData)((IData)(
							  (3U 
							   & __Vtemp1281[2U]))) 
					  << 0x34U) 
					 | (((QData)((IData)(
							     __Vtemp1281[1U])) 
					     << 0x14U) 
					    | ((QData)((IData)(
							       __Vtemp1281[0U])) 
					       >> 0xcU)))));
    VL_SHIFTL_WWI(66,66,32, __Vtemp1284, __Vtemp1283, 0xcU);
    __Vtemp1286[0U] = (0xc000000U ^ __Vtemp1284[0U]);
    __Vtemp1286[1U] = __Vtemp1284[1U];
    __Vtemp1286[2U] = (3U & __Vtemp1284[2U]);
    VL_EXTEND_WW(67,66, __Vtemp1287, __Vtemp1286);
    VL_EXTEND_WQ(66,63, __Vtemp1294, vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_459);
    VL_SHIFTL_WWI(66,66,32, __Vtemp1295, __Vtemp1294, 3U);
    VL_EXTEND_WQ(66,54, __Vtemp1297, (VL_ULL(0x3fffffffffffff) 
				      & (((QData)((IData)(
							  (3U 
							   & __Vtemp1295[2U]))) 
					  << 0x34U) 
					 | (((QData)((IData)(
							     __Vtemp1295[1U])) 
					     << 0x14U) 
					    | ((QData)((IData)(
							       __Vtemp1295[0U])) 
					       >> 0xcU)))));
    VL_SHIFTL_WWI(66,66,32, __Vtemp1298, __Vtemp1297, 0xcU);
    __Vtemp1300[0U] = (0x80000000U ^ __Vtemp1298[0U]);
    __Vtemp1300[1U] = __Vtemp1298[1U];
    __Vtemp1300[2U] = (3U & __Vtemp1298[2U]);
    VL_EXTEND_WW(67,66, __Vtemp1301, __Vtemp1300);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__pmaHomogeneous 
	= ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__count))
	    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__pmaPgLevelHomogeneous_2)
	    : ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__count))
	        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__pmaPgLevelHomogeneous_2)
	        : ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT__count)) 
		   & (((0U == (((0xe0000000U & __Vtemp1273[0U]) 
				| __Vtemp1273[1U]) 
			       | (7U & __Vtemp1273[2U]))) 
		       | (0U == (((0xfc000000U & __Vtemp1287[0U]) 
				  | __Vtemp1287[1U]) 
				 | (7U & __Vtemp1287[2U])))) 
		      | (0U == (((0xf0000000U & __Vtemp1301[0U]) 
				 | __Vtemp1301[1U]) 
				| (7U & __Vtemp1301[2U])))))));
    VL_EXTEND_WI(66,32, __Vtemp1303, ((~ (3U | (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_0_addr 
						   << 2U)))) 
				      & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1044));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1060 
	= VL_LT_W(3, vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1045, __Vtemp1303);
    VL_EXTEND_WI(66,32, __Vtemp1304, ((~ (3U | (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_1_addr 
						   << 2U)))) 
				      & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1044));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1163 
	= VL_LT_W(3, vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1045, __Vtemp1304);
    VL_EXTEND_WI(66,32, __Vtemp1305, ((~ (3U | (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_2_addr 
						   << 2U)))) 
				      & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1044));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1266 
	= VL_LT_W(3, vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1045, __Vtemp1305);
    VL_EXTEND_WI(66,32, __Vtemp1306, ((~ (3U | (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_3_addr 
						   << 2U)))) 
				      & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1044));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1369 
	= VL_LT_W(3, vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1045, __Vtemp1306);
    VL_EXTEND_WI(66,32, __Vtemp1307, ((~ (3U | (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_4_addr 
						   << 2U)))) 
				      & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1044));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1472 
	= VL_LT_W(3, vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1045, __Vtemp1307);
    VL_EXTEND_WI(66,32, __Vtemp1308, ((~ (3U | (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_5_addr 
						   << 2U)))) 
				      & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1044));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1575 
	= VL_LT_W(3, vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1045, __Vtemp1308);
    VL_EXTEND_WI(66,32, __Vtemp1309, ((~ (3U | (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_6_addr 
						   << 2U)))) 
				      & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1044));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1678 
	= VL_LT_W(3, vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__ptw__DOT___T_1045, __Vtemp1309);
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
}
