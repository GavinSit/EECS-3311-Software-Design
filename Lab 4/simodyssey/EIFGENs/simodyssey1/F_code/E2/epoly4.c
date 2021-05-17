#include "epoly4.h"
#include "../E1/eoffsets.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX Y2258_pgtype0[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype1[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype2[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype3[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype4[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype5[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype6[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype7[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype8[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype9[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype10[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype11[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype12[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype13[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype14[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype15[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype16[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype17[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype18[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype19[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype20[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype21[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype22[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype23[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype24[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype25[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype26[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype27[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype28[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype29[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype30[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype31[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype32[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype33[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype34[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype35[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype36[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype37[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype38[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype39[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype40[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype41[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype42[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype43[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype44[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype45[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype46[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype47[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype48[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype49[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype50[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype51[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype52[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype53[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype54[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype55[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype56[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype57[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype58[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype59[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype60[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype61[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype62[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype63[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype64[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype65[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype66[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype67[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype68[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype69[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype70[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype71[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype72[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype73[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype74[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype75[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype76[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype77[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype78[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype79[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype80[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype81[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype82[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype83[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype84[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype85[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype86[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype87[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype88[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype89[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype90[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype91[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype92[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype93[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype94[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype95[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype96[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype97[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype98[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype99[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype100[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype101[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype102[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype103[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype104[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype105[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype106[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype107[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype108[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype109[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype110[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype111[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype112[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype113[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype114[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype115[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype116[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype117[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype118[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype119[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype120[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype121[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype122[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype123[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype124[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype125[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype126[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype127[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype128[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype129[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype130[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype131[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype132[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype133[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype134[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype135[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype136[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype137[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype138[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype139[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype140[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype141[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype142[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype143[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype144[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype145[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype146[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype147[] = {0xFF01,1604,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype148[] = {0xFF01,1552,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype149[] = {0xFF01,1552,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype150[] = {0xFF01,1552,0xFFF9,1,1475,0xFF01,0,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype151[] = {0xFF01,1552,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype152[] = {0xFF01,1552,0xFF01,0xFFF9,1,1475,0xFF01,1687,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype153[] = {0xFF01,1552,0xFF01,0xFFF9,1,1475,1508,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype154[] = {0xFF01,1552,0xFF01,0xFFF9,1,1475,0xFF01,1668,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype155[] = {0xFF01,1552,0xFF01,0xFFF9,1,1475,1508,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype156[] = {0xFF01,1552,0xFF01,0xFFF9,2,1475,1508,1508,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype157[] = {0xFF01,1552,0xFF01,0xFFF9,1,1475,0xFF01,1676,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype158[] = {0xFF01,1552,0xFF01,0xFFF9,1,1475,0xFF01,1631,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype159[] = {0xFF01,1552,0xFF01,0xFFF9,1,1475,0xFF01,1611,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype160[] = {0xFF01,1552,0xFF01,0xFFF9,1,1475,1294,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype161[] = {0xFF01,1552,0xFF01,0xFFF9,1,1475,0xFF01,1813,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype162[] = {0xFF01,1552,0xFF01,0xFFF9,1,1475,1508,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype163[] = {0xFF01,1552,0xFF01,0xFFF9,1,1475,0xFF01,1564,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype164[] = {0xFF01,1552,0xFF01,0xFFF9,5,1475,1508,1508,1508,1508,1508,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype165[] = {0xFF01,1552,0xFF01,0xFFF9,4,1475,1508,1508,1508,1508,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype166[] = {0xFF01,1552,0xFF01,0xFFF9,2,1475,1508,1508,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype167[] = {0xFF01,1552,0xFF01,0xFFF9,7,1475,1508,1508,1496,1496,1496,1508,1508,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype168[] = {0xFF01,1552,0xFF01,0xFFF9,3,1475,1508,1508,1294,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype169[] = {0xFF01,1552,0xFF01,0xFFF9,0,1475,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype170[] = {0xFF01,1552,0xFF01,0xFFF9,8,1475,1508,1508,1508,1496,1496,1496,1508,1508,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype171[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype172[] = {0xFF01,1631,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype173[] = {0xFF01,1631,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype174[] = {0xFF01,1631,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype175[] = {0xFF01,1631,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype176[] = {0xFF01,1631,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype177[] = {0xFF01,1564,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype178[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype179[] = {0xFF01,1668,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype180[] = {0xFF01,1670,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype181[] = {0xFF01,1669,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype182[] = {0xFF01,1669,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype183[] = {0xFF01,1669,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype184[] = {0xFF01,1687,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype185[] = {0xFF01,1687,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype186[] = {0xFF01,1687,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype187[] = {0xFF01,1687,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype188[] = {0xFF01,1687,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype189[] = {0xFF01,1676,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype190[] = {0xFF01,1676,0xFFFF};
static EIF_TYPE_INDEX Y2258_pgtype191[] = {0xFF01,1676,0xFFFF};
EIF_TYPE_INDEX *Y2258_gen_type [1164];
EIF_TYPE_INDEX Y2258 [1164];
void Y2258_init (void)
{
	egc_routines_types [2258] = Y2258;
	egc_routines_gen_types [2258] = Y2258_gen_type;
	egc_routines_offset [2258] = 684;
	Y2258_gen_type [0] = Y2258_pgtype0;
	Y2258_gen_type [1] = Y2258_pgtype1;
	Y2258_gen_type [2] = Y2258_pgtype2;
	Y2258_gen_type [3] = Y2258_pgtype3;
	Y2258_gen_type [4] = Y2258_pgtype4;
	Y2258_gen_type [5] = Y2258_pgtype5;
	Y2258_gen_type [6] = Y2258_pgtype6;
	Y2258_gen_type [7] = Y2258_pgtype7;
	Y2258_gen_type [8] = Y2258_pgtype8;
	Y2258_gen_type [9] = Y2258_pgtype9;
	Y2258_gen_type [10] = Y2258_pgtype10;
	Y2258_gen_type [11] = Y2258_pgtype11;
	Y2258_gen_type [12] = Y2258_pgtype12;
	Y2258_gen_type [13] = Y2258_pgtype13;
	Y2258_gen_type [14] = Y2258_pgtype14;
	Y2258_gen_type [15] = Y2258_pgtype15;
	Y2258_gen_type [16] = Y2258_pgtype16;
	Y2258_gen_type [17] = Y2258_pgtype17;
	Y2258_gen_type [18] = Y2258_pgtype18;
	Y2258_gen_type [19] = Y2258_pgtype19;
	Y2258_gen_type [20] = Y2258_pgtype20;
	Y2258_gen_type [21] = Y2258_pgtype21;
	Y2258_gen_type [22] = Y2258_pgtype22;
	Y2258_gen_type [23] = Y2258_pgtype23;
	Y2258_gen_type [24] = Y2258_pgtype24;
	Y2258_gen_type [25] = Y2258_pgtype25;
	Y2258_gen_type [26] = Y2258_pgtype26;
	Y2258_gen_type [27] = Y2258_pgtype27;
	Y2258_gen_type [28] = Y2258_pgtype28;
	Y2258_gen_type [29] = Y2258_pgtype29;
	Y2258_gen_type [50] = Y2258_pgtype30;
	Y2258_gen_type [66] = Y2258_pgtype31;
	Y2258_gen_type [67] = Y2258_pgtype32;
	Y2258_gen_type [68] = Y2258_pgtype33;
	Y2258_gen_type [69] = Y2258_pgtype34;
	Y2258_gen_type [70] = Y2258_pgtype35;
	Y2258_gen_type [71] = Y2258_pgtype36;
	Y2258_gen_type [72] = Y2258_pgtype37;
	Y2258_gen_type [73] = Y2258_pgtype38;
	Y2258_gen_type [74] = Y2258_pgtype39;
	Y2258_gen_type [75] = Y2258_pgtype40;
	Y2258_gen_type [76] = Y2258_pgtype41;
	Y2258_gen_type [77] = Y2258_pgtype42;
	Y2258_gen_type [78] = Y2258_pgtype43;
	Y2258_gen_type [79] = Y2258_pgtype44;
	Y2258_gen_type [80] = Y2258_pgtype45;
	Y2258_gen_type [81] = Y2258_pgtype46;
	Y2258_gen_type [82] = Y2258_pgtype47;
	Y2258_gen_type [83] = Y2258_pgtype48;
	Y2258_gen_type [84] = Y2258_pgtype49;
	Y2258_gen_type [85] = Y2258_pgtype50;
	Y2258_gen_type [86] = Y2258_pgtype51;
	Y2258_gen_type [87] = Y2258_pgtype52;
	Y2258_gen_type [88] = Y2258_pgtype53;
	Y2258_gen_type [134] = Y2258_pgtype54;
	Y2258_gen_type [167] = Y2258_pgtype55;
	Y2258_gen_type [168] = Y2258_pgtype56;
	Y2258_gen_type [169] = Y2258_pgtype57;
	Y2258_gen_type [170] = Y2258_pgtype58;
	Y2258_gen_type [171] = Y2258_pgtype59;
	Y2258_gen_type [172] = Y2258_pgtype60;
	Y2258_gen_type [173] = Y2258_pgtype61;
	Y2258_gen_type [174] = Y2258_pgtype62;
	Y2258_gen_type [175] = Y2258_pgtype63;
	Y2258_gen_type [176] = Y2258_pgtype64;
	Y2258_gen_type [177] = Y2258_pgtype65;
	Y2258_gen_type [178] = Y2258_pgtype66;
	Y2258_gen_type [179] = Y2258_pgtype67;
	Y2258_gen_type [180] = Y2258_pgtype68;
	Y2258_gen_type [181] = Y2258_pgtype69;
	Y2258_gen_type [182] = Y2258_pgtype70;
	Y2258_gen_type [183] = Y2258_pgtype71;
	Y2258_gen_type [184] = Y2258_pgtype72;
	Y2258_gen_type [185] = Y2258_pgtype73;
	Y2258_gen_type [186] = Y2258_pgtype74;
	Y2258_gen_type [187] = Y2258_pgtype75;
	Y2258_gen_type [188] = Y2258_pgtype76;
	Y2258_gen_type [189] = Y2258_pgtype77;
	Y2258_gen_type [190] = Y2258_pgtype78;
	Y2258_gen_type [191] = Y2258_pgtype79;
	Y2258_gen_type [192] = Y2258_pgtype80;
	Y2258_gen_type [193] = Y2258_pgtype81;
	Y2258_gen_type [194] = Y2258_pgtype82;
	Y2258_gen_type [195] = Y2258_pgtype83;
	Y2258_gen_type [196] = Y2258_pgtype84;
	Y2258_gen_type [197] = Y2258_pgtype85;
	Y2258_gen_type [198] = Y2258_pgtype86;
	Y2258_gen_type [199] = Y2258_pgtype87;
	Y2258_gen_type [200] = Y2258_pgtype88;
	Y2258_gen_type [201] = Y2258_pgtype89;
	Y2258_gen_type [202] = Y2258_pgtype90;
	Y2258_gen_type [203] = Y2258_pgtype91;
	Y2258_gen_type [204] = Y2258_pgtype92;
	Y2258_gen_type [205] = Y2258_pgtype93;
	Y2258_gen_type [206] = Y2258_pgtype94;
	Y2258_gen_type [207] = Y2258_pgtype95;
	Y2258_gen_type [208] = Y2258_pgtype96;
	Y2258_gen_type [209] = Y2258_pgtype97;
	Y2258_gen_type [210] = Y2258_pgtype98;
	Y2258_gen_type [211] = Y2258_pgtype99;
	Y2258_gen_type [212] = Y2258_pgtype100;
	Y2258_gen_type [213] = Y2258_pgtype101;
	Y2258_gen_type [214] = Y2258_pgtype102;
	Y2258_gen_type [215] = Y2258_pgtype103;
	Y2258_gen_type [216] = Y2258_pgtype104;
	Y2258_gen_type [217] = Y2258_pgtype105;
	Y2258_gen_type [218] = Y2258_pgtype106;
	Y2258_gen_type [219] = Y2258_pgtype107;
	Y2258_gen_type [220] = Y2258_pgtype108;
	Y2258_gen_type [221] = Y2258_pgtype109;
	Y2258_gen_type [222] = Y2258_pgtype110;
	Y2258_gen_type [223] = Y2258_pgtype111;
	Y2258_gen_type [224] = Y2258_pgtype112;
	Y2258_gen_type [225] = Y2258_pgtype113;
	Y2258_gen_type [226] = Y2258_pgtype114;
	Y2258_gen_type [227] = Y2258_pgtype115;
	Y2258_gen_type [228] = Y2258_pgtype116;
	Y2258_gen_type [229] = Y2258_pgtype117;
	Y2258_gen_type [230] = Y2258_pgtype118;
	Y2258_gen_type [231] = Y2258_pgtype119;
	Y2258_gen_type [232] = Y2258_pgtype120;
	Y2258_gen_type [233] = Y2258_pgtype121;
	Y2258_gen_type [264] = Y2258_pgtype122;
	Y2258_gen_type [266] = Y2258_pgtype123;
	Y2258_gen_type [267] = Y2258_pgtype124;
	Y2258_gen_type [268] = Y2258_pgtype125;
	Y2258_gen_type [269] = Y2258_pgtype126;
	Y2258_gen_type [270] = Y2258_pgtype127;
	Y2258_gen_type [271] = Y2258_pgtype128;
	Y2258_gen_type [272] = Y2258_pgtype129;
	Y2258_gen_type [273] = Y2258_pgtype130;
	Y2258_gen_type [274] = Y2258_pgtype131;
	Y2258_gen_type [275] = Y2258_pgtype132;
	Y2258_gen_type [276] = Y2258_pgtype133;
	Y2258_gen_type [277] = Y2258_pgtype134;
	Y2258_gen_type [278] = Y2258_pgtype135;
	Y2258_gen_type [279] = Y2258_pgtype136;
	Y2258_gen_type [280] = Y2258_pgtype137;
	Y2258_gen_type [281] = Y2258_pgtype138;
	Y2258_gen_type [282] = Y2258_pgtype139;
	Y2258_gen_type [283] = Y2258_pgtype140;
	Y2258_gen_type [284] = Y2258_pgtype141;
	Y2258_gen_type [285] = Y2258_pgtype142;
	Y2258_gen_type [286] = Y2258_pgtype143;
	Y2258_gen_type [287] = Y2258_pgtype144;
	Y2258_gen_type [288] = Y2258_pgtype145;
	Y2258_gen_type [289] = Y2258_pgtype146;
	Y2258_gen_type [290] = Y2258_pgtype147;
	Y2258_gen_type [291] = Y2258_pgtype148;
	Y2258_gen_type [292] = Y2258_pgtype149;
	Y2258_gen_type [293] = Y2258_pgtype150;
	Y2258_gen_type [294] = Y2258_pgtype151;
	Y2258_gen_type [295] = Y2258_pgtype152;
	Y2258_gen_type [296] = Y2258_pgtype153;
	Y2258_gen_type [297] = Y2258_pgtype154;
	Y2258_gen_type [298] = Y2258_pgtype155;
	Y2258_gen_type [299] = Y2258_pgtype156;
	Y2258_gen_type [300] = Y2258_pgtype157;
	Y2258_gen_type [301] = Y2258_pgtype158;
	Y2258_gen_type [302] = Y2258_pgtype159;
	Y2258_gen_type [303] = Y2258_pgtype160;
	Y2258_gen_type [304] = Y2258_pgtype161;
	Y2258_gen_type [305] = Y2258_pgtype162;
	Y2258_gen_type [306] = Y2258_pgtype163;
	Y2258_gen_type [307] = Y2258_pgtype164;
	Y2258_gen_type [308] = Y2258_pgtype165;
	Y2258_gen_type [309] = Y2258_pgtype166;
	Y2258_gen_type [310] = Y2258_pgtype167;
	Y2258_gen_type [311] = Y2258_pgtype168;
	Y2258_gen_type [312] = Y2258_pgtype169;
	Y2258_gen_type [313] = Y2258_pgtype170;
	Y2258_gen_type [945] = Y2258_pgtype171;
	Y2258_gen_type [949] = Y2258_pgtype172;
	Y2258_gen_type [950] = Y2258_pgtype173;
	Y2258_gen_type [951] = Y2258_pgtype174;
	Y2258_gen_type [952] = Y2258_pgtype175;
	Y2258_gen_type [953] = Y2258_pgtype176;
	Y2258_gen_type [984] = Y2258_pgtype177;
	Y2258_gen_type [996] = Y2258_pgtype178;
	Y2258_gen_type [997] = Y2258_pgtype179;
	Y2258_gen_type [998] = Y2258_pgtype180;
	Y2258_gen_type [999] = Y2258_pgtype181;
	Y2258_gen_type [1000] = Y2258_pgtype182;
	Y2258_gen_type [1001] = Y2258_pgtype183;
	Y2258_gen_type [1002] = Y2258_pgtype184;
	Y2258_gen_type [1003] = Y2258_pgtype185;
	Y2258_gen_type [1004] = Y2258_pgtype186;
	Y2258_gen_type [1005] = Y2258_pgtype187;
	Y2258_gen_type [1006] = Y2258_pgtype188;
	Y2258_gen_type [1007] = Y2258_pgtype189;
	Y2258_gen_type [1008] = Y2258_pgtype190;
	Y2258_gen_type [1009] = Y2258_pgtype191;
	Y2258[290] = 1604;
	{long i; for (i = 291; i < 314; i++) Y2258[i] = 1552;};
	Y2258[343] = 1508;
	Y2258[345] = 1508;
	{long i; for (i = 606; i < 609; i++) Y2258[i] = 1487;};
	{long i; for (i = 949; i < 954; i++) Y2258[i] = 1631;};
	Y2258[984] = 1564;
	Y2258[997] = 1668;
	Y2258[998] = 1670;
	{long i; for (i = 999; i < 1002; i++) Y2258[i] = 1669;};
	{long i; for (i = 1002; i < 1007; i++) Y2258[i] = 1687;};
	{long i; for (i = 1007; i < 1010; i++) Y2258[i] = 1676;};
	Y2258[1135] = 1487;
	{long i; for (i = 1156; i < 1159; i++) Y2258[i] = 1487;};
	{long i; for (i = 1160; i < 1164; i++) Y2258[i] = 1487;};
}

char *(*R2262[758])();
void R2262_init () {
	R2262[0] = (char *(*)()) F912_3545;
	R2262[1] = (char *(*)()) F913_3545_2262_4;
	R2262[2] = (char *(*)()) F914_3545_2262_4;
	R2262[3] = (char *(*)()) F912_3545;
	R2262[4] = (char *(*)()) F914_3545_2262_4;
	R2262[5] = (char *(*)()) F913_3545_2262_4;
	R2262[6] = (char *(*)()) F912_3545;
	R2262[39] = (char *(*)()) F951_4117;
	R2262[40] = (char *(*)()) F952_4117_2262_4;
	R2262[41] = (char *(*)()) F953_4117_2262_4;
	R2262[42] = (char *(*)()) F954_4117_2262_4;
	R2262[43] = (char *(*)()) F955_4117_2262_4;
	R2262[44] = (char *(*)()) F956_4117_2262_4;
	R2262[45] = (char *(*)()) F957_4117_2262_4;
	R2262[46] = (char *(*)()) F958_4117_2262_4;
	R2262[47] = (char *(*)()) F959_4117_2262_4;
	R2262[48] = (char *(*)()) F960_4117_2262_4;
	R2262[49] = (char *(*)()) F961_4117_2262_4;
	R2262[50] = (char *(*)()) F962_4117_2262_4;
	R2262[51] = (char *(*)()) F963_4117_2262_4;
	R2262[52] = (char *(*)()) F964_4117_2262_4;
	R2262[53] = (char *(*)()) F965_4117_2262_4;
	R2262[54] = (char *(*)()) F951_4117;
	R2262[55] = (char *(*)()) F963_4117_2262_4;
	R2262[56] = (char *(*)()) F957_4117_2262_4;
	R2262[59] = (char *(*)()) F969_4177;
	R2262[60] = (char *(*)()) F970_4177_2262_4;
	R2262[61] = (char *(*)()) F969_4177;
	R2262[62] = (char *(*)()) F970_4177_2262_4;
	{long i; for (i = 63; i < 67; i++) R2262[i] = (char *(*)()) F969_4177;}
	{long i; for (i = 68; i < 87; i++) R2262[i] = (char *(*)()) F969_4177;}
	R2262[757] = (char *(*)()) F969_4177;
}
static void F913_3545_2262_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F913_3545(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F914_3545_2262_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F914_3545(Current, *(EIF_BOOLEAN *)arg1);
}
static void F952_4117_2262_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F952_4117(Current, *(EIF_NATURAL_16 *)arg1);
}
static void F953_4117_2262_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F953_4117(Current, *(EIF_POINTER *)arg1);
}
static void F954_4117_2262_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F954_4117(Current, *(EIF_REAL_32 *)arg1);
}
static void F955_4117_2262_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F955_4117(Current, *(EIF_NATURAL_8 *)arg1);
}
static void F956_4117_2262_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F956_4117(Current, *(EIF_CHARACTER_8 *)arg1);
}
static void F957_4117_2262_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F957_4117(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F958_4117_2262_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F958_4117(Current, *(EIF_REAL_64 *)arg1);
}
static void F959_4117_2262_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F959_4117(Current, *(EIF_INTEGER_8 *)arg1);
}
static void F960_4117_2262_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F960_4117(Current, *(EIF_INTEGER_16 *)arg1);
}
static void F961_4117_2262_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F961_4117(Current, *(EIF_NATURAL_32 *)arg1);
}
static void F962_4117_2262_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F962_4117(Current, *(EIF_INTEGER_64 *)arg1);
}
static void F963_4117_2262_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F963_4117(Current, *(EIF_BOOLEAN *)arg1);
}
static void F964_4117_2262_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F964_4117(Current, *(EIF_NATURAL_64 *)arg1);
}
static void F965_4117_2262_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F965_4117(Current, *(EIF_CHARACTER_32 *)arg1);
}
static void F970_4177_2262_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F970_4177(Current, *(EIF_INTEGER_32 *)arg1);
}

char *(*R2263[876])();
void R2263_init () {
	R2263[0] = (char *(*)()) F819_2579;
	R2263[93] = (char *(*)()) F912_3548;
	R2263[94] = (char *(*)()) F913_3548;
	R2263[95] = (char *(*)()) F914_3548;
	R2263[96] = (char *(*)()) F915_3566;
	R2263[97] = (char *(*)()) F916_3566;
	R2263[98] = (char *(*)()) F917_3566;
	R2263[99] = (char *(*)()) F912_3549;
	R2263[132] = (char *(*)()) F951_4127;
	R2263[133] = (char *(*)()) F952_4127;
	R2263[134] = (char *(*)()) F953_4127;
	R2263[135] = (char *(*)()) F954_4127;
	R2263[136] = (char *(*)()) F955_4127;
	R2263[137] = (char *(*)()) F956_4127;
	R2263[138] = (char *(*)()) F957_4127;
	R2263[139] = (char *(*)()) F958_4127;
	R2263[140] = (char *(*)()) F959_4127;
	R2263[141] = (char *(*)()) F960_4127;
	R2263[142] = (char *(*)()) F961_4127;
	R2263[143] = (char *(*)()) F962_4127;
	R2263[144] = (char *(*)()) F963_4127;
	R2263[145] = (char *(*)()) F964_4127;
	R2263[146] = (char *(*)()) F965_4127;
	R2263[147] = (char *(*)()) F966_4157;
	R2263[148] = (char *(*)()) F967_4157;
	R2263[149] = (char *(*)()) F968_4157;
	R2263[152] = (char *(*)()) F969_4178;
	R2263[153] = (char *(*)()) F970_4178;
	R2263[154] = (char *(*)()) F969_4178;
	R2263[155] = (char *(*)()) F970_4178;
	{long i; for (i = 156; i < 160; i++) R2263[i] = (char *(*)()) F969_4178;}
	{long i; for (i = 161; i < 180; i++) R2263[i] = (char *(*)()) F969_4178;}
	R2263[816] = (char *(*)()) F1630_18274;
	{long i; for (i = 818; i < 820; i++) R2263[i] = (char *(*)()) F1630_18274;}
	R2263[850] = (char *(*)()) F969_4178;
	{long i; for (i = 863; i < 865; i++) R2263[i] = (char *(*)()) F1630_18274;}
	{long i; for (i = 866; i < 868; i++) R2263[i] = (char *(*)()) F1630_18274;}
	{long i; for (i = 870; i < 873; i++) R2263[i] = (char *(*)()) F1630_18274;}
	{long i; for (i = 874; i < 876; i++) R2263[i] = (char *(*)()) F1630_18274;}
}

char *(*R2264[783])();
void R2264_init () {
	R2264[0] = (char *(*)()) F912_3521;
	R2264[1] = (char *(*)()) F913_3521;
	R2264[2] = (char *(*)()) F914_3521;
	R2264[3] = (char *(*)()) F912_3521;
	R2264[4] = (char *(*)()) F914_3521;
	R2264[5] = (char *(*)()) F913_3521;
	R2264[6] = (char *(*)()) F912_3521;
	R2264[39] = (char *(*)()) F951_4084;
	R2264[40] = (char *(*)()) F952_4084;
	R2264[41] = (char *(*)()) F953_4084;
	R2264[42] = (char *(*)()) F954_4084;
	R2264[43] = (char *(*)()) F955_4084;
	R2264[44] = (char *(*)()) F956_4084;
	R2264[45] = (char *(*)()) F957_4084;
	R2264[46] = (char *(*)()) F958_4084;
	R2264[47] = (char *(*)()) F959_4084;
	R2264[48] = (char *(*)()) F960_4084;
	R2264[49] = (char *(*)()) F961_4084;
	R2264[50] = (char *(*)()) F962_4084;
	R2264[51] = (char *(*)()) F963_4084;
	R2264[52] = (char *(*)()) F964_4084;
	R2264[53] = (char *(*)()) F965_4084;
	R2264[54] = (char *(*)()) F951_4084;
	R2264[55] = (char *(*)()) F963_4084;
	R2264[56] = (char *(*)()) F957_4084;
	R2264[59] = (char *(*)()) F951_4084;
	R2264[60] = (char *(*)()) F957_4084;
	R2264[61] = (char *(*)()) F951_4084;
	R2264[62] = (char *(*)()) F957_4084;
	{long i; for (i = 63; i < 67; i++) R2264[i] = (char *(*)()) F951_4084;}
	{long i; for (i = 68; i < 87; i++) R2264[i] = (char *(*)()) F951_4084;}
	R2264[723] = (char *(*)()) F1630_18248;
	{long i; for (i = 725; i < 727; i++) R2264[i] = (char *(*)()) F1630_18248;}
	R2264[757] = (char *(*)()) F951_4084;
	{long i; for (i = 770; i < 772; i++) R2264[i] = (char *(*)()) F1630_18248;}
	{long i; for (i = 773; i < 775; i++) R2264[i] = (char *(*)()) F1630_18248;}
	{long i; for (i = 777; i < 780; i++) R2264[i] = (char *(*)()) F1630_18248;}
	{long i; for (i = 781; i < 783; i++) R2264[i] = (char *(*)()) F1630_18248;}
}

static EIF_TYPE_INDEX Y2264_pgtype0[] = {0xFF01,539,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype1[] = {0xFF01,539,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype2[] = {0xFF01,539,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype3[] = {0xFF01,539,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype4[] = {0xFF01,539,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype5[] = {0xFF01,539,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype6[] = {0xFF01,539,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype7[] = {0xFF01,539,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype8[] = {0xFF01,539,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype9[] = {0xFF01,539,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype10[] = {0xFF01,539,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype11[] = {0xFF01,539,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype12[] = {0xFF01,539,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype13[] = {0xFF01,539,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype14[] = {0xFF01,539,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype15[] = {0xFF01,539,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype16[] = {0xFF01,539,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype17[] = {0xFF01,539,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype18[] = {0xFF01,539,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype19[] = {0xFF01,539,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype20[] = {0xFF01,539,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype21[] = {0xFF01,539,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype22[] = {0xFF01,539,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype23[] = {0xFF01,539,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype24[] = {0xFF01,539,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype25[] = {0xFF01,539,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype26[] = {0xFF01,539,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype27[] = {0xFF01,539,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype28[] = {0xFF01,539,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype29[] = {0xFF01,539,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype30[] = {0xFF01,539,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype31[] = {0xFF01,539,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype32[] = {0xFF01,539,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype33[] = {0xFF01,539,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype34[] = {0xFF01,539,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype35[] = {0xFF01,539,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype36[] = {0xFF01,539,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype37[] = {0xFF01,539,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype38[] = {0xFF01,539,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype39[] = {0xFF01,539,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype40[] = {0xFF01,539,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype41[] = {0xFF01,539,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype42[] = {0xFF01,539,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype43[] = {0xFF01,539,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype44[] = {0xFF01,539,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype45[] = {0xFF01,539,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype46[] = {0xFF01,539,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype47[] = {0xFF01,539,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype48[] = {0xFF01,539,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype49[] = {0xFF01,539,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype50[] = {0xFF01,539,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype51[] = {0xFF01,539,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype52[] = {0xFF01,539,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype53[] = {0xFF01,539,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype54[] = {0xFF01,539,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype55[] = {0xFF01,539,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype56[] = {0xFF01,539,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype57[] = {0xFF01,539,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype58[] = {0xFF01,539,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype59[] = {0xFF01,539,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype60[] = {0xFF01,539,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype61[] = {0xFF01,539,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype62[] = {0xFF01,539,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype63[] = {0xFF01,539,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype64[] = {0xFF01,539,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype65[] = {0xFF01,539,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype66[] = {0xFF01,539,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype67[] = {0xFF01,539,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype68[] = {0xFF01,539,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype69[] = {0xFF01,539,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype70[] = {0xFF01,539,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype71[] = {0xFF01,539,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype72[] = {0xFF01,539,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype73[] = {0xFF01,539,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype74[] = {0xFF01,539,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype75[] = {0xFF01,543,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype76[] = {0xFF01,544,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype77[] = {0xFF01,545,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype78[] = {0xFF01,543,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype79[] = {0xFF01,545,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype80[] = {0xFF01,544,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype81[] = {0xFF01,543,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype82[] = {0xFF01,542,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype83[] = {0xFF01,542,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype84[] = {0xFF01,542,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype85[] = {0xFF01,542,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype86[] = {0xFF01,542,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype87[] = {0xFF01,542,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype88[] = {0xFF01,542,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype89[] = {0xFF01,542,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype90[] = {0xFF01,542,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype91[] = {0xFF01,542,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype92[] = {0xFF01,542,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype93[] = {0xFF01,542,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype94[] = {0xFF01,542,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype95[] = {0xFF01,542,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype96[] = {0xFF01,542,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype97[] = {0xFF01,542,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype98[] = {0xFF01,542,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype99[] = {0xFF01,542,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype100[] = {0xFF01,542,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype101[] = {0xFF01,542,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype102[] = {0xFF01,542,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype103[] = {0xFF01,542,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype104[] = {0xFF01,542,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype105[] = {0xFF01,542,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype106[] = {0xFF01,542,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype107[] = {0xFF01,542,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype108[] = {0xFF01,542,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype109[] = {0xFF01,542,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype110[] = {0xFF01,542,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype111[] = {0xFF01,542,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype112[] = {0xFF01,542,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype113[] = {0xFF01,542,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype114[] = {0xFF01,542,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype115[] = {0xFF01,542,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype116[] = {0xFF01,542,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype117[] = {0xFF01,542,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype118[] = {0xFF01,542,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype119[] = {0xFF01,542,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype120[] = {0xFF01,542,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype121[] = {0xFF01,542,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype122[] = {0xFF01,542,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype123[] = {0xFF01,542,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype124[] = {0xFF01,542,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype125[] = {0xFF01,542,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype126[] = {0xFF01,542,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype127[] = {0xFF01,542,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype128[] = {0xFF01,542,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype129[] = {0xFF01,542,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype130[] = {0xFF01,540,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype131[] = {0xFF01,540,0xFF01,1631,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype132[] = {0xFF01,540,0xFF01,1631,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype133[] = {0xFF01,540,0xFF01,1631,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype134[] = {0xFF01,540,0xFF01,1631,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype135[] = {0xFF01,540,0xFF01,1631,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype136[] = {0xFF01,542,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype137[] = {0xFF01,540,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype138[] = {0xFF01,540,0xFF01,1668,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype139[] = {0xFF01,540,0xFF01,1670,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype140[] = {0xFF01,540,0xFF01,1669,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype141[] = {0xFF01,540,0xFF01,1669,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype142[] = {0xFF01,540,0xFF01,1669,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype143[] = {0xFF01,540,0xFF01,1687,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype144[] = {0xFF01,540,0xFF01,1687,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype145[] = {0xFF01,540,0xFF01,1687,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype146[] = {0xFF01,540,0xFF01,1687,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype147[] = {0xFF01,540,0xFF01,1687,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype148[] = {0xFF01,540,0xFF01,1676,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype149[] = {0xFF01,540,0xFF01,1676,0xFFFF};
static EIF_TYPE_INDEX Y2264_pgtype150[] = {0xFF01,540,0xFF01,1676,0xFFFF};
EIF_TYPE_INDEX *Y2264_gen_type [995];
EIF_TYPE_INDEX Y2264 [995];
void Y2264_init (void)
{
	egc_routines_types [2264] = Y2264;
	egc_routines_gen_types [2264] = Y2264_gen_type;
	egc_routines_offset [2264] = 699;
	Y2264_gen_type [0] = Y2264_pgtype0;
	Y2264_gen_type [1] = Y2264_pgtype1;
	Y2264_gen_type [2] = Y2264_pgtype2;
	Y2264_gen_type [3] = Y2264_pgtype3;
	Y2264_gen_type [4] = Y2264_pgtype4;
	Y2264_gen_type [5] = Y2264_pgtype5;
	Y2264_gen_type [6] = Y2264_pgtype6;
	Y2264_gen_type [7] = Y2264_pgtype7;
	Y2264_gen_type [8] = Y2264_pgtype8;
	Y2264_gen_type [9] = Y2264_pgtype9;
	Y2264_gen_type [10] = Y2264_pgtype10;
	Y2264_gen_type [11] = Y2264_pgtype11;
	Y2264_gen_type [12] = Y2264_pgtype12;
	Y2264_gen_type [13] = Y2264_pgtype13;
	Y2264_gen_type [14] = Y2264_pgtype14;
	Y2264_gen_type [152] = Y2264_pgtype15;
	Y2264_gen_type [153] = Y2264_pgtype16;
	Y2264_gen_type [154] = Y2264_pgtype17;
	Y2264_gen_type [155] = Y2264_pgtype18;
	Y2264_gen_type [156] = Y2264_pgtype19;
	Y2264_gen_type [157] = Y2264_pgtype20;
	Y2264_gen_type [158] = Y2264_pgtype21;
	Y2264_gen_type [159] = Y2264_pgtype22;
	Y2264_gen_type [160] = Y2264_pgtype23;
	Y2264_gen_type [161] = Y2264_pgtype24;
	Y2264_gen_type [162] = Y2264_pgtype25;
	Y2264_gen_type [163] = Y2264_pgtype26;
	Y2264_gen_type [164] = Y2264_pgtype27;
	Y2264_gen_type [165] = Y2264_pgtype28;
	Y2264_gen_type [166] = Y2264_pgtype29;
	Y2264_gen_type [167] = Y2264_pgtype30;
	Y2264_gen_type [168] = Y2264_pgtype31;
	Y2264_gen_type [169] = Y2264_pgtype32;
	Y2264_gen_type [170] = Y2264_pgtype33;
	Y2264_gen_type [171] = Y2264_pgtype34;
	Y2264_gen_type [172] = Y2264_pgtype35;
	Y2264_gen_type [173] = Y2264_pgtype36;
	Y2264_gen_type [174] = Y2264_pgtype37;
	Y2264_gen_type [175] = Y2264_pgtype38;
	Y2264_gen_type [176] = Y2264_pgtype39;
	Y2264_gen_type [177] = Y2264_pgtype40;
	Y2264_gen_type [178] = Y2264_pgtype41;
	Y2264_gen_type [179] = Y2264_pgtype42;
	Y2264_gen_type [180] = Y2264_pgtype43;
	Y2264_gen_type [181] = Y2264_pgtype44;
	Y2264_gen_type [182] = Y2264_pgtype45;
	Y2264_gen_type [183] = Y2264_pgtype46;
	Y2264_gen_type [184] = Y2264_pgtype47;
	Y2264_gen_type [185] = Y2264_pgtype48;
	Y2264_gen_type [186] = Y2264_pgtype49;
	Y2264_gen_type [187] = Y2264_pgtype50;
	Y2264_gen_type [188] = Y2264_pgtype51;
	Y2264_gen_type [189] = Y2264_pgtype52;
	Y2264_gen_type [190] = Y2264_pgtype53;
	Y2264_gen_type [191] = Y2264_pgtype54;
	Y2264_gen_type [192] = Y2264_pgtype55;
	Y2264_gen_type [193] = Y2264_pgtype56;
	Y2264_gen_type [194] = Y2264_pgtype57;
	Y2264_gen_type [195] = Y2264_pgtype58;
	Y2264_gen_type [196] = Y2264_pgtype59;
	Y2264_gen_type [197] = Y2264_pgtype60;
	Y2264_gen_type [198] = Y2264_pgtype61;
	Y2264_gen_type [199] = Y2264_pgtype62;
	Y2264_gen_type [200] = Y2264_pgtype63;
	Y2264_gen_type [201] = Y2264_pgtype64;
	Y2264_gen_type [202] = Y2264_pgtype65;
	Y2264_gen_type [203] = Y2264_pgtype66;
	Y2264_gen_type [204] = Y2264_pgtype67;
	Y2264_gen_type [205] = Y2264_pgtype68;
	Y2264_gen_type [206] = Y2264_pgtype69;
	Y2264_gen_type [207] = Y2264_pgtype70;
	Y2264_gen_type [208] = Y2264_pgtype71;
	Y2264_gen_type [209] = Y2264_pgtype72;
	Y2264_gen_type [210] = Y2264_pgtype73;
	Y2264_gen_type [211] = Y2264_pgtype74;
	Y2264_gen_type [212] = Y2264_pgtype75;
	Y2264_gen_type [213] = Y2264_pgtype76;
	Y2264_gen_type [214] = Y2264_pgtype77;
	Y2264_gen_type [215] = Y2264_pgtype78;
	Y2264_gen_type [216] = Y2264_pgtype79;
	Y2264_gen_type [217] = Y2264_pgtype80;
	Y2264_gen_type [218] = Y2264_pgtype81;
	Y2264_gen_type [251] = Y2264_pgtype82;
	Y2264_gen_type [252] = Y2264_pgtype83;
	Y2264_gen_type [253] = Y2264_pgtype84;
	Y2264_gen_type [254] = Y2264_pgtype85;
	Y2264_gen_type [255] = Y2264_pgtype86;
	Y2264_gen_type [256] = Y2264_pgtype87;
	Y2264_gen_type [257] = Y2264_pgtype88;
	Y2264_gen_type [258] = Y2264_pgtype89;
	Y2264_gen_type [259] = Y2264_pgtype90;
	Y2264_gen_type [260] = Y2264_pgtype91;
	Y2264_gen_type [261] = Y2264_pgtype92;
	Y2264_gen_type [262] = Y2264_pgtype93;
	Y2264_gen_type [263] = Y2264_pgtype94;
	Y2264_gen_type [264] = Y2264_pgtype95;
	Y2264_gen_type [265] = Y2264_pgtype96;
	Y2264_gen_type [266] = Y2264_pgtype97;
	Y2264_gen_type [267] = Y2264_pgtype98;
	Y2264_gen_type [268] = Y2264_pgtype99;
	Y2264_gen_type [269] = Y2264_pgtype100;
	Y2264_gen_type [270] = Y2264_pgtype101;
	Y2264_gen_type [271] = Y2264_pgtype102;
	Y2264_gen_type [272] = Y2264_pgtype103;
	Y2264_gen_type [273] = Y2264_pgtype104;
	Y2264_gen_type [274] = Y2264_pgtype105;
	Y2264_gen_type [275] = Y2264_pgtype106;
	Y2264_gen_type [276] = Y2264_pgtype107;
	Y2264_gen_type [277] = Y2264_pgtype108;
	Y2264_gen_type [278] = Y2264_pgtype109;
	Y2264_gen_type [279] = Y2264_pgtype110;
	Y2264_gen_type [280] = Y2264_pgtype111;
	Y2264_gen_type [281] = Y2264_pgtype112;
	Y2264_gen_type [282] = Y2264_pgtype113;
	Y2264_gen_type [283] = Y2264_pgtype114;
	Y2264_gen_type [284] = Y2264_pgtype115;
	Y2264_gen_type [285] = Y2264_pgtype116;
	Y2264_gen_type [286] = Y2264_pgtype117;
	Y2264_gen_type [287] = Y2264_pgtype118;
	Y2264_gen_type [288] = Y2264_pgtype119;
	Y2264_gen_type [289] = Y2264_pgtype120;
	Y2264_gen_type [290] = Y2264_pgtype121;
	Y2264_gen_type [291] = Y2264_pgtype122;
	Y2264_gen_type [292] = Y2264_pgtype123;
	Y2264_gen_type [293] = Y2264_pgtype124;
	Y2264_gen_type [294] = Y2264_pgtype125;
	Y2264_gen_type [295] = Y2264_pgtype126;
	Y2264_gen_type [296] = Y2264_pgtype127;
	Y2264_gen_type [297] = Y2264_pgtype128;
	Y2264_gen_type [298] = Y2264_pgtype129;
	Y2264_gen_type [930] = Y2264_pgtype130;
	Y2264_gen_type [934] = Y2264_pgtype131;
	Y2264_gen_type [935] = Y2264_pgtype132;
	Y2264_gen_type [936] = Y2264_pgtype133;
	Y2264_gen_type [937] = Y2264_pgtype134;
	Y2264_gen_type [938] = Y2264_pgtype135;
	Y2264_gen_type [969] = Y2264_pgtype136;
	Y2264_gen_type [981] = Y2264_pgtype137;
	Y2264_gen_type [982] = Y2264_pgtype138;
	Y2264_gen_type [983] = Y2264_pgtype139;
	Y2264_gen_type [984] = Y2264_pgtype140;
	Y2264_gen_type [985] = Y2264_pgtype141;
	Y2264_gen_type [986] = Y2264_pgtype142;
	Y2264_gen_type [987] = Y2264_pgtype143;
	Y2264_gen_type [988] = Y2264_pgtype144;
	Y2264_gen_type [989] = Y2264_pgtype145;
	Y2264_gen_type [990] = Y2264_pgtype146;
	Y2264_gen_type [991] = Y2264_pgtype147;
	Y2264_gen_type [992] = Y2264_pgtype148;
	Y2264_gen_type [993] = Y2264_pgtype149;
	Y2264_gen_type [994] = Y2264_pgtype150;
	{long i; for (i = 0; i < 15; i++) Y2264[i] = 539;};
	{long i; for (i = 152; i < 212; i++) Y2264[i] = 539;};
	Y2264[212] = 543;
	Y2264[213] = 544;
	Y2264[214] = 545;
	Y2264[215] = 543;
	Y2264[216] = 545;
	Y2264[217] = 544;
	Y2264[218] = 543;
	{long i; for (i = 251; i < 299; i++) Y2264[i] = 542;};
	Y2264[930] = 540;
	{long i; for (i = 934; i < 939; i++) Y2264[i] = 540;};
	Y2264[969] = 542;
	{long i; for (i = 981; i < 995; i++) Y2264[i] = 540;};
}

char *(*R2266[783])();
void R2266_init () {
	R2266[0] = (char *(*)()) F912_3540;
	R2266[1] = (char *(*)()) F913_3540;
	R2266[2] = (char *(*)()) F914_3540;
	R2266[3] = (char *(*)()) F912_3540;
	R2266[4] = (char *(*)()) F914_3540;
	R2266[5] = (char *(*)()) F913_3540;
	R2266[6] = (char *(*)()) F912_3540;
	R2266[39] = (char *(*)()) F951_4109;
	R2266[40] = (char *(*)()) F952_4109;
	R2266[41] = (char *(*)()) F953_4109;
	R2266[42] = (char *(*)()) F954_4109;
	R2266[43] = (char *(*)()) F955_4109;
	R2266[44] = (char *(*)()) F956_4109;
	R2266[45] = (char *(*)()) F957_4109;
	R2266[46] = (char *(*)()) F958_4109;
	R2266[47] = (char *(*)()) F959_4109;
	R2266[48] = (char *(*)()) F960_4109;
	R2266[49] = (char *(*)()) F961_4109;
	R2266[50] = (char *(*)()) F962_4109;
	R2266[51] = (char *(*)()) F963_4109;
	R2266[52] = (char *(*)()) F964_4109;
	R2266[53] = (char *(*)()) F965_4109;
	R2266[54] = (char *(*)()) F951_4109;
	R2266[55] = (char *(*)()) F963_4109;
	R2266[56] = (char *(*)()) F957_4109;
	R2266[59] = (char *(*)()) F951_4109;
	R2266[60] = (char *(*)()) F957_4109;
	R2266[61] = (char *(*)()) F951_4109;
	R2266[62] = (char *(*)()) F957_4109;
	{long i; for (i = 63; i < 67; i++) R2266[i] = (char *(*)()) F951_4109;}
	{long i; for (i = 68; i < 87; i++) R2266[i] = (char *(*)()) F951_4109;}
	R2266[723] = (char *(*)()) F1630_18260;
	{long i; for (i = 725; i < 727; i++) R2266[i] = (char *(*)()) F1630_18260;}
	R2266[757] = (char *(*)()) F951_4109;
	{long i; for (i = 770; i < 772; i++) R2266[i] = (char *(*)()) F1630_18260;}
	{long i; for (i = 773; i < 775; i++) R2266[i] = (char *(*)()) F1630_18260;}
	{long i; for (i = 777; i < 780; i++) R2266[i] = (char *(*)()) F1630_18260;}
	{long i; for (i = 781; i < 783; i++) R2266[i] = (char *(*)()) F1630_18260;}
}

char *(*R2268[3])();
void R2268_init () {
	R2268[0] = (char *(*)()) F1028_4245;
	R2268[2] = (char *(*)()) F1030_4278;
}

char *(*R2269[1201])();
void R2269_init () {
	R2269[0] = (char *(*)()) F819_2566;
	{long i; for (i = 31; i < 33; i++) R2269[i] = (char *(*)()) F850_3149;}
	R2269[93] = (char *(*)()) F912_3524;
	R2269[94] = (char *(*)()) F913_3524;
	R2269[95] = (char *(*)()) F914_3524;
	R2269[96] = (char *(*)()) F912_3524;
	R2269[97] = (char *(*)()) F914_3524;
	R2269[98] = (char *(*)()) F913_3524;
	R2269[99] = (char *(*)()) F912_3524;
	R2269[100] = (char *(*)()) F919_3198;
	R2269[101] = (char *(*)()) F920_3198;
	R2269[102] = (char *(*)()) F921_3198;
	R2269[103] = (char *(*)()) F922_3198;
	R2269[104] = (char *(*)()) F923_3198;
	R2269[105] = (char *(*)()) F924_3198;
	R2269[106] = (char *(*)()) F925_3198;
	R2269[107] = (char *(*)()) F926_3198;
	R2269[108] = (char *(*)()) F927_3198;
	R2269[109] = (char *(*)()) F928_3198;
	R2269[110] = (char *(*)()) F929_3198;
	R2269[111] = (char *(*)()) F930_3198;
	R2269[112] = (char *(*)()) F931_3198;
	R2269[113] = (char *(*)()) F932_3198;
	R2269[114] = (char *(*)()) F933_3198;
	R2269[115] = (char *(*)()) F923_3198;
	R2269[116] = (char *(*)()) F919_3198;
	R2269[117] = (char *(*)()) F931_3198;
	R2269[118] = (char *(*)()) F925_3198;
	R2269[119] = (char *(*)()) F924_3198;
	R2269[120] = (char *(*)()) F922_3198;
	R2269[121] = (char *(*)()) F919_3198;
	R2269[130] = (char *(*)()) F949_3895;
	R2269[132] = (char *(*)()) F951_4094;
	R2269[133] = (char *(*)()) F952_4094;
	R2269[134] = (char *(*)()) F953_4094;
	R2269[135] = (char *(*)()) F954_4094;
	R2269[136] = (char *(*)()) F955_4094;
	R2269[137] = (char *(*)()) F956_4094;
	R2269[138] = (char *(*)()) F957_4094;
	R2269[139] = (char *(*)()) F958_4094;
	R2269[140] = (char *(*)()) F959_4094;
	R2269[141] = (char *(*)()) F960_4094;
	R2269[142] = (char *(*)()) F961_4094;
	R2269[143] = (char *(*)()) F962_4094;
	R2269[144] = (char *(*)()) F963_4094;
	R2269[145] = (char *(*)()) F964_4094;
	R2269[146] = (char *(*)()) F965_4094;
	R2269[147] = (char *(*)()) F951_4094;
	R2269[148] = (char *(*)()) F963_4094;
	R2269[149] = (char *(*)()) F957_4094;
	R2269[152] = (char *(*)()) F951_4094;
	R2269[153] = (char *(*)()) F957_4094;
	R2269[154] = (char *(*)()) F951_4094;
	R2269[155] = (char *(*)()) F957_4094;
	{long i; for (i = 156; i < 160; i++) R2269[i] = (char *(*)()) F951_4094;}
	{long i; for (i = 161; i < 180; i++) R2269[i] = (char *(*)()) F951_4094;}
	R2269[180] = (char *(*)()) F999_3941;
	R2269[181] = (char *(*)()) F1000_3941;
	R2269[182] = (char *(*)()) F1001_3941;
	R2269[183] = (char *(*)()) F1002_3941;
	R2269[184] = (char *(*)()) F1003_3941;
	R2269[185] = (char *(*)()) F1004_3941;
	R2269[186] = (char *(*)()) F1000_3941;
	R2269[187] = (char *(*)()) F999_3941;
	R2269[188] = (char *(*)()) F1001_3941;
	R2269[189] = (char *(*)()) F999_3941;
	{long i; for (i = 473; i < 475; i++) R2269[i] = (char *(*)()) F1291_4931;}
	{long i; for (i = 742; i < 745; i++) R2269[i] = (char *(*)()) F1559_6626;}
	R2269[746] = (char *(*)()) F1564_6867;
	R2269[816] = (char *(*)()) F1630_18253;
	{long i; for (i = 818; i < 820; i++) R2269[i] = (char *(*)()) F1630_18253;}
	R2269[850] = (char *(*)()) F951_4094;
	{long i; for (i = 863; i < 865; i++) R2269[i] = (char *(*)()) F1630_18253;}
	{long i; for (i = 866; i < 868; i++) R2269[i] = (char *(*)()) F1630_18253;}
	{long i; for (i = 870; i < 873; i++) R2269[i] = (char *(*)()) F1630_18253;}
	{long i; for (i = 874; i < 876; i++) R2269[i] = (char *(*)()) F1630_18253;}
	R2269[1001] = (char *(*)()) F1820_7036;
	{long i; for (i = 1022; i < 1025; i++) R2269[i] = (char *(*)()) F1291_4931;}
	{long i; for (i = 1026; i < 1030; i++) R2269[i] = (char *(*)()) F1291_4931;}
	{long i; for (i = 1199; i < 1201; i++) R2269[i] = (char *(*)()) F2018_25638;}
}

char *(*R2272[1201])();
void R2272_init () {
	R2272[0] = (char *(*)()) F819_2567;
	{long i; for (i = 31; i < 33; i++) R2272[i] = (char *(*)()) F850_3148;}
	R2272[100] = (char *(*)()) F919_3199;
	R2272[101] = (char *(*)()) F920_3199;
	R2272[102] = (char *(*)()) F921_3199;
	R2272[103] = (char *(*)()) F922_3199;
	R2272[104] = (char *(*)()) F923_3199;
	R2272[105] = (char *(*)()) F924_3199;
	R2272[106] = (char *(*)()) F925_3199;
	R2272[107] = (char *(*)()) F926_3199;
	R2272[108] = (char *(*)()) F927_3199;
	R2272[109] = (char *(*)()) F928_3199;
	R2272[110] = (char *(*)()) F929_3199;
	R2272[111] = (char *(*)()) F930_3199;
	R2272[112] = (char *(*)()) F931_3199;
	R2272[113] = (char *(*)()) F932_3199;
	R2272[114] = (char *(*)()) F933_3199;
	R2272[115] = (char *(*)()) F923_3199;
	R2272[116] = (char *(*)()) F919_3199;
	R2272[117] = (char *(*)()) F931_3199;
	R2272[118] = (char *(*)()) F925_3199;
	R2272[119] = (char *(*)()) F924_3199;
	R2272[120] = (char *(*)()) F922_3199;
	R2272[121] = (char *(*)()) F919_3199;
	R2272[130] = (char *(*)()) F949_3896;
	R2272[132] = (char *(*)()) F951_4095;
	R2272[133] = (char *(*)()) F952_4095;
	R2272[134] = (char *(*)()) F953_4095;
	R2272[135] = (char *(*)()) F954_4095;
	R2272[136] = (char *(*)()) F955_4095;
	R2272[137] = (char *(*)()) F956_4095;
	R2272[138] = (char *(*)()) F957_4095;
	R2272[139] = (char *(*)()) F958_4095;
	R2272[140] = (char *(*)()) F959_4095;
	R2272[141] = (char *(*)()) F960_4095;
	R2272[142] = (char *(*)()) F961_4095;
	R2272[143] = (char *(*)()) F962_4095;
	R2272[144] = (char *(*)()) F963_4095;
	R2272[145] = (char *(*)()) F964_4095;
	R2272[146] = (char *(*)()) F965_4095;
	R2272[147] = (char *(*)()) F951_4095;
	R2272[148] = (char *(*)()) F963_4095;
	R2272[149] = (char *(*)()) F957_4095;
	R2272[152] = (char *(*)()) F951_4095;
	R2272[153] = (char *(*)()) F957_4095;
	R2272[154] = (char *(*)()) F951_4095;
	R2272[155] = (char *(*)()) F957_4095;
	{long i; for (i = 156; i < 160; i++) R2272[i] = (char *(*)()) F951_4095;}
	{long i; for (i = 161; i < 180; i++) R2272[i] = (char *(*)()) F951_4095;}
	{long i; for (i = 742; i < 745; i++) R2272[i] = (char *(*)()) F1559_6625;}
	R2272[746] = (char *(*)()) F1564_6866;
	R2272[850] = (char *(*)()) F951_4095;
	{long i; for (i = 1199; i < 1201; i++) R2272[i] = (char *(*)()) F2018_25640;}
}

char *(*R2276[1201])();
void R2276_init () {
	R2276[0] = (char *(*)()) F804_2556;
	{long i; for (i = 31; i < 33; i++) R2276[i] = (char *(*)()) F810_2556;}
	R2276[100] = (char *(*)()) F804_2556;
	R2276[101] = (char *(*)()) F805_2556;
	R2276[102] = (char *(*)()) F806_2556;
	R2276[103] = (char *(*)()) F807_2556;
	R2276[104] = (char *(*)()) F808_2556;
	R2276[105] = (char *(*)()) F809_2556;
	R2276[106] = (char *(*)()) F810_2556;
	R2276[107] = (char *(*)()) F811_2556;
	R2276[108] = (char *(*)()) F812_2556;
	R2276[109] = (char *(*)()) F813_2556;
	R2276[110] = (char *(*)()) F814_2556;
	R2276[111] = (char *(*)()) F815_2556;
	R2276[112] = (char *(*)()) F816_2556;
	R2276[113] = (char *(*)()) F817_2556;
	R2276[114] = (char *(*)()) F818_2556;
	R2276[115] = (char *(*)()) F808_2556;
	R2276[116] = (char *(*)()) F804_2556;
	R2276[117] = (char *(*)()) F816_2556;
	R2276[118] = (char *(*)()) F810_2556;
	R2276[119] = (char *(*)()) F809_2556;
	R2276[120] = (char *(*)()) F807_2556;
	R2276[121] = (char *(*)()) F804_2556;
	R2276[130] = (char *(*)()) F804_2556;
	R2276[132] = (char *(*)()) F804_2556;
	R2276[133] = (char *(*)()) F805_2556;
	R2276[134] = (char *(*)()) F806_2556;
	R2276[135] = (char *(*)()) F807_2556;
	R2276[136] = (char *(*)()) F808_2556;
	R2276[137] = (char *(*)()) F809_2556;
	R2276[138] = (char *(*)()) F810_2556;
	R2276[139] = (char *(*)()) F811_2556;
	R2276[140] = (char *(*)()) F812_2556;
	R2276[141] = (char *(*)()) F813_2556;
	R2276[142] = (char *(*)()) F814_2556;
	R2276[143] = (char *(*)()) F815_2556;
	R2276[144] = (char *(*)()) F816_2556;
	R2276[145] = (char *(*)()) F817_2556;
	R2276[146] = (char *(*)()) F818_2556;
	R2276[147] = (char *(*)()) F804_2556;
	R2276[148] = (char *(*)()) F816_2556;
	R2276[149] = (char *(*)()) F810_2556;
	R2276[152] = (char *(*)()) F804_2556;
	R2276[153] = (char *(*)()) F810_2556;
	R2276[154] = (char *(*)()) F804_2556;
	R2276[155] = (char *(*)()) F810_2556;
	{long i; for (i = 156; i < 160; i++) R2276[i] = (char *(*)()) F804_2556;}
	{long i; for (i = 161; i < 180; i++) R2276[i] = (char *(*)()) F804_2556;}
	{long i; for (i = 742; i < 745; i++) R2276[i] = (char *(*)()) F809_2556;}
	R2276[746] = (char *(*)()) F818_2556;
	R2276[850] = (char *(*)()) F804_2556;
	{long i; for (i = 1199; i < 1201; i++) R2276[i] = (char *(*)()) F809_2556;}
}

char *(*R2278[1201])();
void R2278_init () {
	R2278[0] = (char *(*)()) F819_2582;
	{long i; for (i = 31; i < 33; i++) R2278[i] = (char *(*)()) F850_3159;}
	R2278[100] = (char *(*)()) F919_3229;
	R2278[101] = (char *(*)()) F920_3229;
	R2278[102] = (char *(*)()) F921_3229;
	R2278[103] = (char *(*)()) F922_3229;
	R2278[104] = (char *(*)()) F923_3229;
	R2278[105] = (char *(*)()) F924_3229;
	R2278[106] = (char *(*)()) F925_3229;
	R2278[107] = (char *(*)()) F926_3229;
	R2278[108] = (char *(*)()) F927_3229;
	R2278[109] = (char *(*)()) F928_3229;
	R2278[110] = (char *(*)()) F929_3229;
	R2278[111] = (char *(*)()) F930_3229;
	R2278[112] = (char *(*)()) F931_3229;
	R2278[113] = (char *(*)()) F932_3229;
	R2278[114] = (char *(*)()) F933_3229;
	R2278[115] = (char *(*)()) F923_3229;
	R2278[116] = (char *(*)()) F919_3229;
	R2278[117] = (char *(*)()) F931_3229;
	R2278[118] = (char *(*)()) F925_3229;
	R2278[119] = (char *(*)()) F924_3229;
	R2278[120] = (char *(*)()) F922_3229;
	R2278[121] = (char *(*)()) F919_3229;
	R2278[130] = (char *(*)()) F949_3918;
	R2278[132] = (char *(*)()) F951_4121;
	R2278[133] = (char *(*)()) F952_4121;
	R2278[134] = (char *(*)()) F953_4121;
	R2278[135] = (char *(*)()) F954_4121;
	R2278[136] = (char *(*)()) F955_4121;
	R2278[137] = (char *(*)()) F956_4121;
	R2278[138] = (char *(*)()) F957_4121;
	R2278[139] = (char *(*)()) F958_4121;
	R2278[140] = (char *(*)()) F959_4121;
	R2278[141] = (char *(*)()) F960_4121;
	R2278[142] = (char *(*)()) F961_4121;
	R2278[143] = (char *(*)()) F962_4121;
	R2278[144] = (char *(*)()) F963_4121;
	R2278[145] = (char *(*)()) F964_4121;
	R2278[146] = (char *(*)()) F965_4121;
	R2278[147] = (char *(*)()) F951_4121;
	R2278[148] = (char *(*)()) F963_4121;
	R2278[149] = (char *(*)()) F957_4121;
	R2278[152] = (char *(*)()) F951_4121;
	R2278[153] = (char *(*)()) F957_4121;
	R2278[154] = (char *(*)()) F951_4121;
	R2278[155] = (char *(*)()) F957_4121;
	{long i; for (i = 156; i < 160; i++) R2278[i] = (char *(*)()) F951_4121;}
	{long i; for (i = 161; i < 180; i++) R2278[i] = (char *(*)()) F951_4121;}
	{long i; for (i = 742; i < 745; i++) R2278[i] = (char *(*)()) F1561_6763;}
	R2278[746] = (char *(*)()) F1565_6970;
	R2278[850] = (char *(*)()) F951_4121;
	{long i; for (i = 1199; i < 1201; i++) R2278[i] = (char *(*)()) F1561_6763;}
}


#ifdef __cplusplus
}
#endif
