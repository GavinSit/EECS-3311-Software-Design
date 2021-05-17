#include "epoly6.h"
#include "../E1/eoffsets.h"


#ifdef __cplusplus
extern "C" {
#endif

char *(*R2375[783])();
void R2375_init () {
	R2375[0] = (char *(*)()) F852_3274;
	R2375[1] = (char *(*)()) F858_3274;
	R2375[2] = (char *(*)()) F864_3274;
	R2375[3] = (char *(*)()) F766_2540;
	R2375[4] = (char *(*)()) F767_2540;
	R2375[5] = (char *(*)()) F768_2540;
	R2375[6] = (char *(*)()) F766_2540;
	R2375[39] = (char *(*)()) F951_4120;
	R2375[40] = (char *(*)()) F952_4120;
	R2375[41] = (char *(*)()) F953_4120;
	R2375[42] = (char *(*)()) F954_4120;
	R2375[43] = (char *(*)()) F955_4120;
	R2375[44] = (char *(*)()) F956_4120;
	R2375[45] = (char *(*)()) F957_4120;
	R2375[46] = (char *(*)()) F958_4120;
	R2375[47] = (char *(*)()) F959_4120;
	R2375[48] = (char *(*)()) F960_4120;
	R2375[49] = (char *(*)()) F961_4120;
	R2375[50] = (char *(*)()) F962_4120;
	R2375[51] = (char *(*)()) F963_4120;
	R2375[52] = (char *(*)()) F964_4120;
	R2375[53] = (char *(*)()) F965_4120;
	R2375[54] = (char *(*)()) F766_2540;
	R2375[55] = (char *(*)()) F767_2540;
	R2375[56] = (char *(*)()) F768_2540;
	R2375[59] = (char *(*)()) F969_4173;
	R2375[60] = (char *(*)()) F970_4173;
	R2375[61] = (char *(*)()) F969_4173;
	R2375[62] = (char *(*)()) F970_4173;
	{long i; for (i = 63; i < 67; i++) R2375[i] = (char *(*)()) F969_4173;}
	{long i; for (i = 68; i < 87; i++) R2375[i] = (char *(*)()) F969_4173;}
	R2375[723] = (char *(*)()) F1630_18281;
	{long i; for (i = 725; i < 727; i++) R2375[i] = (char *(*)()) F1630_18281;}
	R2375[757] = (char *(*)()) F969_4173;
	{long i; for (i = 770; i < 772; i++) R2375[i] = (char *(*)()) F1630_18281;}
	{long i; for (i = 773; i < 775; i++) R2375[i] = (char *(*)()) F1630_18281;}
	{long i; for (i = 777; i < 780; i++) R2375[i] = (char *(*)()) F1630_18281;}
	{long i; for (i = 781; i < 783; i++) R2375[i] = (char *(*)()) F1630_18281;}
}

EIF_TYPE_INDEX *Y2382_gen_type [3];
EIF_TYPE_INDEX Y2382 [3];
void Y2382_init (void)
{
	egc_routines_types [2382] = Y2382;
	egc_routines_gen_types [2382] = Y2382_gen_type;
	egc_routines_offset [2382] = 714;
	{long i; for (i = 0; i < 3; i++) Y2382[i] = 1508;};
}

char *(*R2556[1170])();
void R2556_init () {
	{long i; for (i = 0; i < 2; i++) R2556[i] = (char *(*)()) F850_3143_2556_51;}
	R2556[62] = (char *(*)()) F852_3259;
	R2556[63] = (char *(*)()) F858_3259_2556_51;
	R2556[64] = (char *(*)()) F864_3259_2556_51;
	R2556[65] = (char *(*)()) F852_3259;
	R2556[66] = (char *(*)()) F864_3259_2556_51;
	R2556[67] = (char *(*)()) F858_3259_2556_51;
	R2556[68] = (char *(*)()) F852_3259;
	R2556[69] = (char *(*)()) F919_3191;
	R2556[70] = (char *(*)()) F920_3191_2556_51;
	R2556[71] = (char *(*)()) F921_3191_2556_51;
	R2556[72] = (char *(*)()) F922_3191_2556_51;
	R2556[73] = (char *(*)()) F923_3191_2556_51;
	R2556[74] = (char *(*)()) F924_3191_2556_51;
	R2556[75] = (char *(*)()) F925_3191_2556_51;
	R2556[76] = (char *(*)()) F926_3191_2556_51;
	R2556[77] = (char *(*)()) F927_3191_2556_51;
	R2556[78] = (char *(*)()) F928_3191_2556_51;
	R2556[79] = (char *(*)()) F929_3191_2556_51;
	R2556[80] = (char *(*)()) F930_3191_2556_51;
	R2556[81] = (char *(*)()) F931_3191_2556_51;
	R2556[82] = (char *(*)()) F932_3191_2556_51;
	R2556[83] = (char *(*)()) F933_3191_2556_51;
	R2556[84] = (char *(*)()) F923_3191_2556_51;
	R2556[85] = (char *(*)()) F919_3191;
	R2556[86] = (char *(*)()) F931_3191_2556_51;
	R2556[87] = (char *(*)()) F925_3191_2556_51;
	R2556[88] = (char *(*)()) F924_3191_2556_51;
	R2556[89] = (char *(*)()) F922_3191_2556_51;
	R2556[90] = (char *(*)()) F919_3191;
	R2556[101] = (char *(*)()) F951_4079;
	R2556[102] = (char *(*)()) F952_4079_2556_51;
	R2556[103] = (char *(*)()) F953_4079_2556_51;
	R2556[104] = (char *(*)()) F954_4079_2556_51;
	R2556[105] = (char *(*)()) F955_4079_2556_51;
	R2556[106] = (char *(*)()) F956_4079_2556_51;
	R2556[107] = (char *(*)()) F957_4079_2556_51;
	R2556[108] = (char *(*)()) F958_4079_2556_51;
	R2556[109] = (char *(*)()) F959_4079_2556_51;
	R2556[110] = (char *(*)()) F960_4079_2556_51;
	R2556[111] = (char *(*)()) F961_4079_2556_51;
	R2556[112] = (char *(*)()) F962_4079_2556_51;
	R2556[113] = (char *(*)()) F963_4079_2556_51;
	R2556[114] = (char *(*)()) F964_4079_2556_51;
	R2556[115] = (char *(*)()) F965_4079_2556_51;
	R2556[116] = (char *(*)()) F951_4079;
	R2556[117] = (char *(*)()) F963_4079_2556_51;
	R2556[118] = (char *(*)()) F957_4079_2556_51;
	R2556[121] = (char *(*)()) F951_4079;
	R2556[122] = (char *(*)()) F957_4079_2556_51;
	R2556[123] = (char *(*)()) F951_4079;
	R2556[124] = (char *(*)()) F957_4079_2556_51;
	{long i; for (i = 125; i < 129; i++) R2556[i] = (char *(*)()) F951_4079;}
	{long i; for (i = 130; i < 149; i++) R2556[i] = (char *(*)()) F951_4079;}
	R2556[149] = (char *(*)()) F999_3939;
	R2556[150] = (char *(*)()) F1000_3939;
	R2556[151] = (char *(*)()) F1001_3939_2556_51;
	R2556[152] = (char *(*)()) F1002_3939_2556_51;
	R2556[153] = (char *(*)()) F1003_3939;
	R2556[154] = (char *(*)()) F1004_3939_2556_51;
	R2556[155] = (char *(*)()) F1000_3939;
	R2556[156] = (char *(*)()) F999_3939;
	R2556[157] = (char *(*)()) F1001_3939_2556_51;
	R2556[158] = (char *(*)()) F999_3939;
	R2556[344] = (char *(*)()) F1194_3085;
	R2556[345] = (char *(*)()) F1195_3085_2556_51;
	R2556[346] = (char *(*)()) F1196_3085_2556_51;
	R2556[347] = (char *(*)()) F1197_3085_2556_51;
	R2556[348] = (char *(*)()) F1198_3085_2556_51;
	R2556[349] = (char *(*)()) F1199_3085_2556_51;
	R2556[350] = (char *(*)()) F1200_3085_2556_51;
	R2556[351] = (char *(*)()) F1201_3085_2556_51;
	R2556[352] = (char *(*)()) F1202_3085_2556_51;
	R2556[353] = (char *(*)()) F1203_3085_2556_51;
	R2556[354] = (char *(*)()) F1204_3085_2556_51;
	R2556[355] = (char *(*)()) F1205_3085_2556_51;
	R2556[356] = (char *(*)()) F1206_3085_2556_51;
	R2556[357] = (char *(*)()) F1207_3085_2556_51;
	R2556[358] = (char *(*)()) F1208_3085_2556_51;
	R2556[626] = (char *(*)()) F1476_5317;
	{long i; for (i = 711; i < 714; i++) R2556[i] = (char *(*)()) F1561_6696_2556_51;}
	R2556[715] = (char *(*)()) F1565_6904_2556_51;
	R2556[717] = (char *(*)()) F1567_6993_2556_51;
	R2556[718] = (char *(*)()) F1568_7015_2556_51;
	R2556[785] = (char *(*)()) F1630_18249;
	{long i; for (i = 787; i < 789; i++) R2556[i] = (char *(*)()) F1630_18249;}
	R2556[819] = (char *(*)()) F951_4079;
	{long i; for (i = 832; i < 834; i++) R2556[i] = (char *(*)()) F1630_18249;}
	{long i; for (i = 835; i < 837; i++) R2556[i] = (char *(*)()) F1630_18249;}
	{long i; for (i = 839; i < 842; i++) R2556[i] = (char *(*)()) F1630_18249;}
	{long i; for (i = 843; i < 845; i++) R2556[i] = (char *(*)()) F1630_18249;}
	{long i; for (i = 1168; i < 1170; i++) R2556[i] = (char *(*)()) F2018_25622_2556_51;}
}
static EIF_REFERENCE F850_3143_2556_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F850_3143(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(1508, 0x00).id, 1508, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F858_3259_2556_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F858_3259(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(1508, 0x00).id, 1508, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F864_3259_2556_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F864_3259(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_b = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_b;
	} else {
		Result = RTLNS(eif_new_type(1493, 0x00).id, 1493, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_BOOLEAN *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F920_3191_2556_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_16 r = F920_3191(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n2;
	} else {
		Result = RTLNS(eif_new_type(1505, 0x00).id, 1505, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_NATURAL_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F921_3191_2556_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_POINTER r = F921_3191(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		Result = RTLNS(eif_new_type(1550, 0x00).id, 1550, _OBJSIZ_0_0_0_0_0_1_0_0_);
		*(EIF_POINTER *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F922_3191_2556_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_32 r = F922_3191(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r4;
	} else {
		Result = RTLNS(eif_new_type(1481, 0x00).id, 1481, _OBJSIZ_0_0_0_0_1_0_0_0_);
		*(EIF_REAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F923_3191_2556_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_8 r = F923_3191(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n1;
	} else {
		Result = RTLNS(eif_new_type(1499, 0x00).id, 1499, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_NATURAL_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F924_3191_2556_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F924_3191(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c1;
	} else {
		Result = RTLNS(eif_new_type(1487, 0x00).id, 1487, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_CHARACTER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F925_3191_2556_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F925_3191(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(1508, 0x00).id, 1508, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F926_3191_2556_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_64 r = F926_3191(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r8;
	} else {
		Result = RTLNS(eif_new_type(1496, 0x00).id, 1496, _OBJSIZ_0_0_0_0_0_0_0_1_);
		*(EIF_REAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F927_3191_2556_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_8 r = F927_3191(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i1;
	} else {
		Result = RTLNS(eif_new_type(1478, 0x00).id, 1478, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_INTEGER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F928_3191_2556_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_16 r = F928_3191(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i2;
	} else {
		Result = RTLNS(eif_new_type(1511, 0x00).id, 1511, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_INTEGER_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F929_3191_2556_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F929_3191(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n4;
	} else {
		Result = RTLNS(eif_new_type(1502, 0x00).id, 1502, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_NATURAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F930_3191_2556_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_64 r = F930_3191(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i8;
	} else {
		Result = RTLNS(eif_new_type(1490, 0x00).id, 1490, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_INTEGER_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F931_3191_2556_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F931_3191(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_b = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_b;
	} else {
		Result = RTLNS(eif_new_type(1493, 0x00).id, 1493, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_BOOLEAN *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F932_3191_2556_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_64 r = F932_3191(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n8;
	} else {
		Result = RTLNS(eif_new_type(1514, 0x00).id, 1514, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_NATURAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F933_3191_2556_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F933_3191(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c4;
	} else {
		Result = RTLNS(eif_new_type(1484, 0x00).id, 1484, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_CHARACTER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F952_4079_2556_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_16 r = F952_4079(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n2;
	} else {
		Result = RTLNS(eif_new_type(1505, 0x00).id, 1505, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_NATURAL_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F953_4079_2556_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_POINTER r = F953_4079(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		Result = RTLNS(eif_new_type(1550, 0x00).id, 1550, _OBJSIZ_0_0_0_0_0_1_0_0_);
		*(EIF_POINTER *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F954_4079_2556_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_32 r = F954_4079(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r4;
	} else {
		Result = RTLNS(eif_new_type(1481, 0x00).id, 1481, _OBJSIZ_0_0_0_0_1_0_0_0_);
		*(EIF_REAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F955_4079_2556_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_8 r = F955_4079(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n1;
	} else {
		Result = RTLNS(eif_new_type(1499, 0x00).id, 1499, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_NATURAL_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F956_4079_2556_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F956_4079(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c1;
	} else {
		Result = RTLNS(eif_new_type(1487, 0x00).id, 1487, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_CHARACTER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F957_4079_2556_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F957_4079(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(1508, 0x00).id, 1508, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F958_4079_2556_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_64 r = F958_4079(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r8;
	} else {
		Result = RTLNS(eif_new_type(1496, 0x00).id, 1496, _OBJSIZ_0_0_0_0_0_0_0_1_);
		*(EIF_REAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F959_4079_2556_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_8 r = F959_4079(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i1;
	} else {
		Result = RTLNS(eif_new_type(1478, 0x00).id, 1478, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_INTEGER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F960_4079_2556_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_16 r = F960_4079(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i2;
	} else {
		Result = RTLNS(eif_new_type(1511, 0x00).id, 1511, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_INTEGER_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F961_4079_2556_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F961_4079(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n4;
	} else {
		Result = RTLNS(eif_new_type(1502, 0x00).id, 1502, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_NATURAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F962_4079_2556_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_64 r = F962_4079(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i8;
	} else {
		Result = RTLNS(eif_new_type(1490, 0x00).id, 1490, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_INTEGER_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F963_4079_2556_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F963_4079(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_b = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_b;
	} else {
		Result = RTLNS(eif_new_type(1493, 0x00).id, 1493, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_BOOLEAN *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F964_4079_2556_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_64 r = F964_4079(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n8;
	} else {
		Result = RTLNS(eif_new_type(1514, 0x00).id, 1514, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_NATURAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F965_4079_2556_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F965_4079(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c4;
	} else {
		Result = RTLNS(eif_new_type(1484, 0x00).id, 1484, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_CHARACTER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F1001_3939_2556_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F1001_3939(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(1508, 0x00).id, 1508, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F1002_3939_2556_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F1002_3939(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(1508, 0x00).id, 1508, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F1004_3939_2556_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F1004_3939(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n4;
	} else {
		Result = RTLNS(eif_new_type(1502, 0x00).id, 1502, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_NATURAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F1195_3085_2556_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_16 r = F1195_3085(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n2;
	} else {
		Result = RTLNS(eif_new_type(1505, 0x00).id, 1505, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_NATURAL_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F1196_3085_2556_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_POINTER r = F1196_3085(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		Result = RTLNS(eif_new_type(1550, 0x00).id, 1550, _OBJSIZ_0_0_0_0_0_1_0_0_);
		*(EIF_POINTER *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F1197_3085_2556_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_32 r = F1197_3085(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r4;
	} else {
		Result = RTLNS(eif_new_type(1481, 0x00).id, 1481, _OBJSIZ_0_0_0_0_1_0_0_0_);
		*(EIF_REAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F1198_3085_2556_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_8 r = F1198_3085(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n1;
	} else {
		Result = RTLNS(eif_new_type(1499, 0x00).id, 1499, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_NATURAL_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F1199_3085_2556_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F1199_3085(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c1;
	} else {
		Result = RTLNS(eif_new_type(1487, 0x00).id, 1487, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_CHARACTER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F1200_3085_2556_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F1200_3085(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(1508, 0x00).id, 1508, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F1201_3085_2556_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_64 r = F1201_3085(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r8;
	} else {
		Result = RTLNS(eif_new_type(1496, 0x00).id, 1496, _OBJSIZ_0_0_0_0_0_0_0_1_);
		*(EIF_REAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F1202_3085_2556_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_8 r = F1202_3085(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i1;
	} else {
		Result = RTLNS(eif_new_type(1478, 0x00).id, 1478, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_INTEGER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F1203_3085_2556_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_16 r = F1203_3085(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i2;
	} else {
		Result = RTLNS(eif_new_type(1511, 0x00).id, 1511, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_INTEGER_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F1204_3085_2556_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F1204_3085(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n4;
	} else {
		Result = RTLNS(eif_new_type(1502, 0x00).id, 1502, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_NATURAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F1205_3085_2556_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_64 r = F1205_3085(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i8;
	} else {
		Result = RTLNS(eif_new_type(1490, 0x00).id, 1490, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_INTEGER_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F1206_3085_2556_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F1206_3085(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_b = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_b;
	} else {
		Result = RTLNS(eif_new_type(1493, 0x00).id, 1493, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_BOOLEAN *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F1207_3085_2556_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_64 r = F1207_3085(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n8;
	} else {
		Result = RTLNS(eif_new_type(1514, 0x00).id, 1514, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_NATURAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F1208_3085_2556_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F1208_3085(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c4;
	} else {
		Result = RTLNS(eif_new_type(1484, 0x00).id, 1484, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_CHARACTER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F1561_6696_2556_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F1561_6696(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c1;
	} else {
		Result = RTLNS(eif_new_type(1487, 0x00).id, 1487, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_CHARACTER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F1565_6904_2556_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F1565_6904(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c4;
	} else {
		Result = RTLNS(eif_new_type(1484, 0x00).id, 1484, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_CHARACTER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F1567_6993_2556_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F1567_6993(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c1;
	} else {
		Result = RTLNS(eif_new_type(1487, 0x00).id, 1487, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_CHARACTER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F1568_7015_2556_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F1568_7015(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c4;
	} else {
		Result = RTLNS(eif_new_type(1484, 0x00).id, 1484, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_CHARACTER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F2018_25622_2556_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F2018_25622(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c1;
	} else {
		Result = RTLNS(eif_new_type(1487, 0x00).id, 1487, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_CHARACTER_8 *)Result = r;
		return Result;
	}
}

char *(*R2557[1170])();
void R2557_init () {
	{long i; for (i = 0; i < 2; i++) R2557[i] = (char *(*)()) F850_3140;}
	R2557[62] = (char *(*)()) F852_3262;
	R2557[63] = (char *(*)()) F858_3262;
	R2557[64] = (char *(*)()) F864_3262;
	R2557[65] = (char *(*)()) F852_3262;
	R2557[66] = (char *(*)()) F864_3262;
	R2557[67] = (char *(*)()) F858_3262;
	R2557[68] = (char *(*)()) F852_3262;
	R2557[69] = (char *(*)()) F919_3196;
	R2557[70] = (char *(*)()) F920_3196;
	R2557[71] = (char *(*)()) F921_3196;
	R2557[72] = (char *(*)()) F922_3196;
	R2557[73] = (char *(*)()) F923_3196;
	R2557[74] = (char *(*)()) F924_3196;
	R2557[75] = (char *(*)()) F925_3196;
	R2557[76] = (char *(*)()) F926_3196;
	R2557[77] = (char *(*)()) F927_3196;
	R2557[78] = (char *(*)()) F928_3196;
	R2557[79] = (char *(*)()) F929_3196;
	R2557[80] = (char *(*)()) F930_3196;
	R2557[81] = (char *(*)()) F931_3196;
	R2557[82] = (char *(*)()) F932_3196;
	R2557[83] = (char *(*)()) F933_3196;
	R2557[84] = (char *(*)()) F923_3196;
	R2557[85] = (char *(*)()) F919_3196;
	R2557[86] = (char *(*)()) F931_3196;
	R2557[87] = (char *(*)()) F925_3196;
	R2557[88] = (char *(*)()) F924_3196;
	R2557[89] = (char *(*)()) F922_3196;
	R2557[90] = (char *(*)()) F919_3196;
	R2557[101] = (char *(*)()) F852_3262;
	R2557[102] = (char *(*)()) F853_3262;
	R2557[103] = (char *(*)()) F854_3262;
	R2557[104] = (char *(*)()) F855_3262;
	R2557[105] = (char *(*)()) F856_3262;
	R2557[106] = (char *(*)()) F857_3262;
	R2557[107] = (char *(*)()) F858_3262;
	R2557[108] = (char *(*)()) F859_3262;
	R2557[109] = (char *(*)()) F860_3262;
	R2557[110] = (char *(*)()) F861_3262;
	R2557[111] = (char *(*)()) F862_3262;
	R2557[112] = (char *(*)()) F863_3262;
	R2557[113] = (char *(*)()) F864_3262;
	R2557[114] = (char *(*)()) F865_3262;
	R2557[115] = (char *(*)()) F866_3262;
	R2557[116] = (char *(*)()) F852_3262;
	R2557[117] = (char *(*)()) F864_3262;
	R2557[118] = (char *(*)()) F858_3262;
	R2557[121] = (char *(*)()) F852_3262;
	R2557[122] = (char *(*)()) F858_3262;
	R2557[123] = (char *(*)()) F852_3262;
	R2557[124] = (char *(*)()) F858_3262;
	{long i; for (i = 125; i < 129; i++) R2557[i] = (char *(*)()) F852_3262;}
	{long i; for (i = 130; i < 149; i++) R2557[i] = (char *(*)()) F852_3262;}
	R2557[149] = (char *(*)()) F999_3944;
	R2557[150] = (char *(*)()) F1000_3944;
	R2557[151] = (char *(*)()) F1001_3944;
	R2557[152] = (char *(*)()) F1002_3944;
	R2557[153] = (char *(*)()) F1003_3944;
	R2557[154] = (char *(*)()) F1004_3944;
	R2557[155] = (char *(*)()) F1000_3944;
	R2557[156] = (char *(*)()) F999_3944;
	R2557[157] = (char *(*)()) F1001_3944;
	R2557[158] = (char *(*)()) F999_3944;
	R2557[344] = (char *(*)()) F1194_3093;
	R2557[345] = (char *(*)()) F1195_3093;
	R2557[346] = (char *(*)()) F1196_3093;
	R2557[347] = (char *(*)()) F1197_3093;
	R2557[348] = (char *(*)()) F1198_3093;
	R2557[349] = (char *(*)()) F1199_3093;
	R2557[350] = (char *(*)()) F1200_3093;
	R2557[351] = (char *(*)()) F1201_3093;
	R2557[352] = (char *(*)()) F1202_3093;
	R2557[353] = (char *(*)()) F1203_3093;
	R2557[354] = (char *(*)()) F1204_3093;
	R2557[355] = (char *(*)()) F1205_3093;
	R2557[356] = (char *(*)()) F1206_3093;
	R2557[357] = (char *(*)()) F1207_3093;
	R2557[358] = (char *(*)()) F1208_3093;
	R2557[626] = (char *(*)()) F1476_5347;
	{long i; for (i = 711; i < 714; i++) R2557[i] = (char *(*)()) F1559_6628;}
	R2557[715] = (char *(*)()) F1564_6869;
	R2557[717] = (char *(*)()) F1559_6628;
	R2557[718] = (char *(*)()) F1564_6869;
	R2557[785] = (char *(*)()) F852_3262;
	{long i; for (i = 787; i < 789; i++) R2557[i] = (char *(*)()) F852_3262;}
	R2557[819] = (char *(*)()) F852_3262;
	{long i; for (i = 832; i < 834; i++) R2557[i] = (char *(*)()) F852_3262;}
	{long i; for (i = 835; i < 837; i++) R2557[i] = (char *(*)()) F852_3262;}
	{long i; for (i = 839; i < 842; i++) R2557[i] = (char *(*)()) F852_3262;}
	{long i; for (i = 843; i < 845; i++) R2557[i] = (char *(*)()) F852_3262;}
	{long i; for (i = 1168; i < 1170; i++) R2557[i] = (char *(*)()) F1559_6628;}
}

EIF_TYPE_INDEX *Y2557_gen_type [1200];
EIF_TYPE_INDEX Y2557 [1200];
void Y2557_init (void)
{
	egc_routines_types [2557] = Y2557;
	egc_routines_gen_types [2557] = Y2557_gen_type;
	egc_routines_offset [2557] = 819;
	{long i; for (i = 0; i < 121; i++) Y2557[i] = 1508;};
	{long i; for (i = 131; i < 189; i++) Y2557[i] = 1508;};
	{long i; for (i = 374; i < 389; i++) Y2557[i] = 1508;};
	Y2557[656] = 1508;
	Y2557[739] = 1508;
	{long i; for (i = 741; i < 746; i++) Y2557[i] = 1508;};
	{long i; for (i = 747; i < 749; i++) Y2557[i] = 1508;};
	Y2557[810] = 1508;
	{long i; for (i = 814; i < 819; i++) Y2557[i] = 1508;};
	Y2557[849] = 1508;
	{long i; for (i = 861; i < 875; i++) Y2557[i] = 1508;};
	{long i; for (i = 1198; i < 1200; i++) Y2557[i] = 1508;};
}

char *(*R2558[1170])();
void R2558_init () {
	{long i; for (i = 0; i < 2; i++) R2558[i] = (char *(*)()) F850_3142;}
	R2558[62] = (char *(*)()) F912_3524;
	R2558[63] = (char *(*)()) F913_3524;
	R2558[64] = (char *(*)()) F914_3524;
	R2558[65] = (char *(*)()) F912_3524;
	R2558[66] = (char *(*)()) F914_3524;
	R2558[67] = (char *(*)()) F913_3524;
	R2558[68] = (char *(*)()) F912_3524;
	R2558[69] = (char *(*)()) F919_3197;
	R2558[70] = (char *(*)()) F920_3197;
	R2558[71] = (char *(*)()) F921_3197;
	R2558[72] = (char *(*)()) F922_3197;
	R2558[73] = (char *(*)()) F923_3197;
	R2558[74] = (char *(*)()) F924_3197;
	R2558[75] = (char *(*)()) F925_3197;
	R2558[76] = (char *(*)()) F926_3197;
	R2558[77] = (char *(*)()) F927_3197;
	R2558[78] = (char *(*)()) F928_3197;
	R2558[79] = (char *(*)()) F929_3197;
	R2558[80] = (char *(*)()) F930_3197;
	R2558[81] = (char *(*)()) F931_3197;
	R2558[82] = (char *(*)()) F932_3197;
	R2558[83] = (char *(*)()) F933_3197;
	R2558[84] = (char *(*)()) F923_3197;
	R2558[85] = (char *(*)()) F919_3197;
	R2558[86] = (char *(*)()) F931_3197;
	R2558[87] = (char *(*)()) F925_3197;
	R2558[88] = (char *(*)()) F924_3197;
	R2558[89] = (char *(*)()) F922_3197;
	R2558[90] = (char *(*)()) F919_3197;
	R2558[101] = (char *(*)()) F951_4094;
	R2558[102] = (char *(*)()) F952_4094;
	R2558[103] = (char *(*)()) F953_4094;
	R2558[104] = (char *(*)()) F954_4094;
	R2558[105] = (char *(*)()) F955_4094;
	R2558[106] = (char *(*)()) F956_4094;
	R2558[107] = (char *(*)()) F957_4094;
	R2558[108] = (char *(*)()) F958_4094;
	R2558[109] = (char *(*)()) F959_4094;
	R2558[110] = (char *(*)()) F960_4094;
	R2558[111] = (char *(*)()) F961_4094;
	R2558[112] = (char *(*)()) F962_4094;
	R2558[113] = (char *(*)()) F963_4094;
	R2558[114] = (char *(*)()) F964_4094;
	R2558[115] = (char *(*)()) F965_4094;
	R2558[116] = (char *(*)()) F951_4094;
	R2558[117] = (char *(*)()) F963_4094;
	R2558[118] = (char *(*)()) F957_4094;
	R2558[121] = (char *(*)()) F951_4094;
	R2558[122] = (char *(*)()) F957_4094;
	R2558[123] = (char *(*)()) F951_4094;
	R2558[124] = (char *(*)()) F957_4094;
	{long i; for (i = 125; i < 129; i++) R2558[i] = (char *(*)()) F951_4094;}
	{long i; for (i = 130; i < 149; i++) R2558[i] = (char *(*)()) F951_4094;}
	R2558[149] = (char *(*)()) F999_3945;
	R2558[150] = (char *(*)()) F1000_3945;
	R2558[151] = (char *(*)()) F1001_3945;
	R2558[152] = (char *(*)()) F1002_3945;
	R2558[153] = (char *(*)()) F1003_3945;
	R2558[154] = (char *(*)()) F1004_3945;
	R2558[155] = (char *(*)()) F1000_3945;
	R2558[156] = (char *(*)()) F999_3945;
	R2558[157] = (char *(*)()) F1001_3945;
	R2558[158] = (char *(*)()) F999_3945;
	R2558[344] = (char *(*)()) F1194_3094;
	R2558[345] = (char *(*)()) F1195_3094;
	R2558[346] = (char *(*)()) F1196_3094;
	R2558[347] = (char *(*)()) F1197_3094;
	R2558[348] = (char *(*)()) F1198_3094;
	R2558[349] = (char *(*)()) F1199_3094;
	R2558[350] = (char *(*)()) F1200_3094;
	R2558[351] = (char *(*)()) F1201_3094;
	R2558[352] = (char *(*)()) F1202_3094;
	R2558[353] = (char *(*)()) F1203_3094;
	R2558[354] = (char *(*)()) F1204_3094;
	R2558[355] = (char *(*)()) F1205_3094;
	R2558[356] = (char *(*)()) F1206_3094;
	R2558[357] = (char *(*)()) F1207_3094;
	R2558[358] = (char *(*)()) F1208_3094;
	R2558[626] = (char *(*)()) F1476_5346;
	{long i; for (i = 711; i < 714; i++) R2558[i] = (char *(*)()) F1559_6626;}
	R2558[715] = (char *(*)()) F1564_6867;
	R2558[717] = (char *(*)()) F1559_6626;
	R2558[718] = (char *(*)()) F1564_6867;
	R2558[785] = (char *(*)()) F1630_18253;
	{long i; for (i = 787; i < 789; i++) R2558[i] = (char *(*)()) F1630_18253;}
	R2558[819] = (char *(*)()) F951_4094;
	{long i; for (i = 832; i < 834; i++) R2558[i] = (char *(*)()) F1630_18253;}
	{long i; for (i = 835; i < 837; i++) R2558[i] = (char *(*)()) F1630_18253;}
	{long i; for (i = 839; i < 842; i++) R2558[i] = (char *(*)()) F1630_18253;}
	{long i; for (i = 843; i < 845; i++) R2558[i] = (char *(*)()) F1630_18253;}
	{long i; for (i = 1168; i < 1170; i++) R2558[i] = (char *(*)()) F2018_25638;}
}

char *(*R2560[1170])();
void R2560_init () {
	{long i; for (i = 0; i < 2; i++) R2560[i] = (char *(*)()) F850_3146;}
	R2560[62] = (char *(*)()) F852_3267;
	R2560[63] = (char *(*)()) F858_3267;
	R2560[64] = (char *(*)()) F864_3267;
	R2560[65] = (char *(*)()) F852_3267;
	R2560[66] = (char *(*)()) F864_3267;
	R2560[67] = (char *(*)()) F858_3267;
	R2560[68] = (char *(*)()) F852_3267;
	R2560[69] = (char *(*)()) F919_3206;
	R2560[70] = (char *(*)()) F920_3206;
	R2560[71] = (char *(*)()) F921_3206;
	R2560[72] = (char *(*)()) F922_3206;
	R2560[73] = (char *(*)()) F923_3206;
	R2560[74] = (char *(*)()) F924_3206;
	R2560[75] = (char *(*)()) F925_3206;
	R2560[76] = (char *(*)()) F926_3206;
	R2560[77] = (char *(*)()) F927_3206;
	R2560[78] = (char *(*)()) F928_3206;
	R2560[79] = (char *(*)()) F929_3206;
	R2560[80] = (char *(*)()) F930_3206;
	R2560[81] = (char *(*)()) F931_3206;
	R2560[82] = (char *(*)()) F932_3206;
	R2560[83] = (char *(*)()) F933_3206;
	R2560[84] = (char *(*)()) F923_3206;
	R2560[85] = (char *(*)()) F919_3206;
	R2560[86] = (char *(*)()) F931_3206;
	R2560[87] = (char *(*)()) F925_3206;
	R2560[88] = (char *(*)()) F924_3206;
	R2560[89] = (char *(*)()) F922_3206;
	R2560[90] = (char *(*)()) F919_3206;
	R2560[101] = (char *(*)()) F951_4100;
	R2560[102] = (char *(*)()) F952_4100;
	R2560[103] = (char *(*)()) F953_4100;
	R2560[104] = (char *(*)()) F954_4100;
	R2560[105] = (char *(*)()) F955_4100;
	R2560[106] = (char *(*)()) F956_4100;
	R2560[107] = (char *(*)()) F957_4100;
	R2560[108] = (char *(*)()) F958_4100;
	R2560[109] = (char *(*)()) F959_4100;
	R2560[110] = (char *(*)()) F960_4100;
	R2560[111] = (char *(*)()) F961_4100;
	R2560[112] = (char *(*)()) F962_4100;
	R2560[113] = (char *(*)()) F963_4100;
	R2560[114] = (char *(*)()) F964_4100;
	R2560[115] = (char *(*)()) F965_4100;
	R2560[116] = (char *(*)()) F951_4100;
	R2560[117] = (char *(*)()) F963_4100;
	R2560[118] = (char *(*)()) F957_4100;
	R2560[121] = (char *(*)()) F951_4100;
	R2560[122] = (char *(*)()) F957_4100;
	R2560[123] = (char *(*)()) F951_4100;
	R2560[124] = (char *(*)()) F957_4100;
	{long i; for (i = 125; i < 129; i++) R2560[i] = (char *(*)()) F951_4100;}
	{long i; for (i = 130; i < 149; i++) R2560[i] = (char *(*)()) F951_4100;}
	R2560[149] = (char *(*)()) F999_3962;
	R2560[150] = (char *(*)()) F1000_3962;
	R2560[151] = (char *(*)()) F1001_3962;
	R2560[152] = (char *(*)()) F1002_3962;
	R2560[153] = (char *(*)()) F1003_3962;
	R2560[154] = (char *(*)()) F1004_3962;
	R2560[155] = (char *(*)()) F1000_3962;
	R2560[156] = (char *(*)()) F999_3962;
	R2560[157] = (char *(*)()) F1001_3962;
	R2560[158] = (char *(*)()) F999_3962;
	R2560[344] = (char *(*)()) F1194_3099;
	R2560[345] = (char *(*)()) F1195_3099;
	R2560[346] = (char *(*)()) F1196_3099;
	R2560[347] = (char *(*)()) F1197_3099;
	R2560[348] = (char *(*)()) F1198_3099;
	R2560[349] = (char *(*)()) F1199_3099;
	R2560[350] = (char *(*)()) F1200_3099;
	R2560[351] = (char *(*)()) F1201_3099;
	R2560[352] = (char *(*)()) F1202_3099;
	R2560[353] = (char *(*)()) F1203_3099;
	R2560[354] = (char *(*)()) F1204_3099;
	R2560[355] = (char *(*)()) F1205_3099;
	R2560[356] = (char *(*)()) F1206_3099;
	R2560[357] = (char *(*)()) F1207_3099;
	R2560[358] = (char *(*)()) F1208_3099;
	R2560[626] = (char *(*)()) F1476_5344;
	{long i; for (i = 711; i < 714; i++) R2560[i] = (char *(*)()) F1558_6522;}
	R2560[715] = (char *(*)()) F1558_6522;
	{long i; for (i = 717; i < 719; i++) R2560[i] = (char *(*)()) F1558_6522;}
	R2560[785] = (char *(*)()) F852_3267;
	{long i; for (i = 787; i < 789; i++) R2560[i] = (char *(*)()) F852_3267;}
	R2560[819] = (char *(*)()) F951_4100;
	{long i; for (i = 832; i < 834; i++) R2560[i] = (char *(*)()) F852_3267;}
	{long i; for (i = 835; i < 837; i++) R2560[i] = (char *(*)()) F852_3267;}
	{long i; for (i = 839; i < 842; i++) R2560[i] = (char *(*)()) F852_3267;}
	{long i; for (i = 843; i < 845; i++) R2560[i] = (char *(*)()) F852_3267;}
	{long i; for (i = 1168; i < 1170; i++) R2560[i] = (char *(*)()) F1558_6522;}
}

char *(*R2561[15])();
void R2561_init () {
	R2561[0] = (char *(*)()) F1194_3082;
	R2561[1] = (char *(*)()) F1195_3082;
	R2561[2] = (char *(*)()) F1196_3082;
	R2561[3] = (char *(*)()) F1197_3082;
	R2561[4] = (char *(*)()) F1198_3082;
	R2561[5] = (char *(*)()) F1199_3082;
	R2561[6] = (char *(*)()) F1200_3082;
	R2561[7] = (char *(*)()) F1201_3082;
	R2561[8] = (char *(*)()) F1202_3082;
	R2561[9] = (char *(*)()) F1203_3082;
	R2561[10] = (char *(*)()) F1204_3082;
	R2561[11] = (char *(*)()) F1205_3082;
	R2561[12] = (char *(*)()) F1206_3082;
	R2561[13] = (char *(*)()) F1207_3082;
	R2561[14] = (char *(*)()) F1208_3082;
}

char *(*R2562[15])();
void R2562_init () {
	R2562[0] = (char *(*)()) F1194_3083;
	R2562[1] = (char *(*)()) F1195_3083_2562_122;
	R2562[2] = (char *(*)()) F1196_3083_2562_122;
	R2562[3] = (char *(*)()) F1197_3083_2562_122;
	R2562[4] = (char *(*)()) F1198_3083_2562_122;
	R2562[5] = (char *(*)()) F1199_3083_2562_122;
	R2562[6] = (char *(*)()) F1200_3083_2562_122;
	R2562[7] = (char *(*)()) F1201_3083_2562_122;
	R2562[8] = (char *(*)()) F1202_3083_2562_122;
	R2562[9] = (char *(*)()) F1203_3083_2562_122;
	R2562[10] = (char *(*)()) F1204_3083_2562_122;
	R2562[11] = (char *(*)()) F1205_3083_2562_122;
	R2562[12] = (char *(*)()) F1206_3083_2562_122;
	R2562[13] = (char *(*)()) F1207_3083_2562_122;
	R2562[14] = (char *(*)()) F1208_3083_2562_122;
}
static void F1195_3083_2562_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F1195_3083(Current, *(EIF_NATURAL_16 *)arg1, arg2);
}
static void F1196_3083_2562_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F1196_3083(Current, *(EIF_POINTER *)arg1, arg2);
}
static void F1197_3083_2562_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F1197_3083(Current, *(EIF_REAL_32 *)arg1, arg2);
}
static void F1198_3083_2562_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F1198_3083(Current, *(EIF_NATURAL_8 *)arg1, arg2);
}
static void F1199_3083_2562_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F1199_3083(Current, *(EIF_CHARACTER_8 *)arg1, arg2);
}
static void F1200_3083_2562_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F1200_3083(Current, *(EIF_INTEGER_32 *)arg1, arg2);
}
static void F1201_3083_2562_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F1201_3083(Current, *(EIF_REAL_64 *)arg1, arg2);
}
static void F1202_3083_2562_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F1202_3083(Current, *(EIF_INTEGER_8 *)arg1, arg2);
}
static void F1203_3083_2562_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F1203_3083(Current, *(EIF_INTEGER_16 *)arg1, arg2);
}
static void F1204_3083_2562_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F1204_3083(Current, *(EIF_NATURAL_32 *)arg1, arg2);
}
static void F1205_3083_2562_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F1205_3083(Current, *(EIF_INTEGER_64 *)arg1, arg2);
}
static void F1206_3083_2562_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F1206_3083(Current, *(EIF_BOOLEAN *)arg1, arg2);
}
static void F1207_3083_2562_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F1207_3083(Current, *(EIF_NATURAL_64 *)arg1, arg2);
}
static void F1208_3083_2562_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F1208_3083(Current, *(EIF_CHARACTER_32 *)arg1, arg2);
}

char *(*R2564[15])();
void R2564_init () {
	R2564[0] = (char *(*)()) F1194_3086;
	R2564[1] = (char *(*)()) F1195_3086_2564_51;
	R2564[2] = (char *(*)()) F1196_3086_2564_51;
	R2564[3] = (char *(*)()) F1197_3086_2564_51;
	R2564[4] = (char *(*)()) F1198_3086_2564_51;
	R2564[5] = (char *(*)()) F1199_3086_2564_51;
	R2564[6] = (char *(*)()) F1200_3086_2564_51;
	R2564[7] = (char *(*)()) F1201_3086_2564_51;
	R2564[8] = (char *(*)()) F1202_3086_2564_51;
	R2564[9] = (char *(*)()) F1203_3086_2564_51;
	R2564[10] = (char *(*)()) F1204_3086_2564_51;
	R2564[11] = (char *(*)()) F1205_3086_2564_51;
	R2564[12] = (char *(*)()) F1206_3086_2564_51;
	R2564[13] = (char *(*)()) F1207_3086_2564_51;
	R2564[14] = (char *(*)()) F1208_3086_2564_51;
}
static EIF_REFERENCE F1195_3086_2564_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_16 r = F1195_3086(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n2;
	} else {
		Result = RTLNS(eif_new_type(1505, 0x00).id, 1505, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_NATURAL_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F1196_3086_2564_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_POINTER r = F1196_3086(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		Result = RTLNS(eif_new_type(1550, 0x00).id, 1550, _OBJSIZ_0_0_0_0_0_1_0_0_);
		*(EIF_POINTER *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F1197_3086_2564_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_32 r = F1197_3086(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r4;
	} else {
		Result = RTLNS(eif_new_type(1481, 0x00).id, 1481, _OBJSIZ_0_0_0_0_1_0_0_0_);
		*(EIF_REAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F1198_3086_2564_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_8 r = F1198_3086(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n1;
	} else {
		Result = RTLNS(eif_new_type(1499, 0x00).id, 1499, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_NATURAL_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F1199_3086_2564_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F1199_3086(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c1;
	} else {
		Result = RTLNS(eif_new_type(1487, 0x00).id, 1487, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_CHARACTER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F1200_3086_2564_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F1200_3086(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(1508, 0x00).id, 1508, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F1201_3086_2564_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_64 r = F1201_3086(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r8;
	} else {
		Result = RTLNS(eif_new_type(1496, 0x00).id, 1496, _OBJSIZ_0_0_0_0_0_0_0_1_);
		*(EIF_REAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F1202_3086_2564_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_8 r = F1202_3086(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i1;
	} else {
		Result = RTLNS(eif_new_type(1478, 0x00).id, 1478, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_INTEGER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F1203_3086_2564_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_16 r = F1203_3086(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i2;
	} else {
		Result = RTLNS(eif_new_type(1511, 0x00).id, 1511, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_INTEGER_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F1204_3086_2564_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F1204_3086(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n4;
	} else {
		Result = RTLNS(eif_new_type(1502, 0x00).id, 1502, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_NATURAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F1205_3086_2564_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_64 r = F1205_3086(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i8;
	} else {
		Result = RTLNS(eif_new_type(1490, 0x00).id, 1490, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_INTEGER_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F1206_3086_2564_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F1206_3086(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_b = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_b;
	} else {
		Result = RTLNS(eif_new_type(1493, 0x00).id, 1493, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_BOOLEAN *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F1207_3086_2564_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_64 r = F1207_3086(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n8;
	} else {
		Result = RTLNS(eif_new_type(1514, 0x00).id, 1514, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_NATURAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F1208_3086_2564_51 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F1208_3086(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c4;
	} else {
		Result = RTLNS(eif_new_type(1484, 0x00).id, 1484, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_CHARACTER_32 *)Result = r;
		return Result;
	}
}

char *(*R2571[15])();
void R2571_init () {
	R2571[0] = (char *(*)()) F1194_3098;
	R2571[1] = (char *(*)()) F1195_3098;
	R2571[2] = (char *(*)()) F1196_3098;
	R2571[3] = (char *(*)()) F1197_3098;
	R2571[4] = (char *(*)()) F1198_3098;
	R2571[5] = (char *(*)()) F1199_3098;
	R2571[6] = (char *(*)()) F1200_3098;
	R2571[7] = (char *(*)()) F1201_3098;
	R2571[8] = (char *(*)()) F1202_3098;
	R2571[9] = (char *(*)()) F1203_3098;
	R2571[10] = (char *(*)()) F1204_3098;
	R2571[11] = (char *(*)()) F1205_3098;
	R2571[12] = (char *(*)()) F1206_3098;
	R2571[13] = (char *(*)()) F1207_3098;
	R2571[14] = (char *(*)()) F1208_3098;
}

char *(*R2572[15])();
void R2572_init () {
	R2572[0] = (char *(*)()) F1194_3100;
	R2572[1] = (char *(*)()) F1195_3100_2572_122;
	R2572[2] = (char *(*)()) F1196_3100_2572_122;
	R2572[3] = (char *(*)()) F1197_3100_2572_122;
	R2572[4] = (char *(*)()) F1198_3100_2572_122;
	R2572[5] = (char *(*)()) F1199_3100_2572_122;
	R2572[6] = (char *(*)()) F1200_3100_2572_122;
	R2572[7] = (char *(*)()) F1201_3100_2572_122;
	R2572[8] = (char *(*)()) F1202_3100_2572_122;
	R2572[9] = (char *(*)()) F1203_3100_2572_122;
	R2572[10] = (char *(*)()) F1204_3100_2572_122;
	R2572[11] = (char *(*)()) F1205_3100_2572_122;
	R2572[12] = (char *(*)()) F1206_3100_2572_122;
	R2572[13] = (char *(*)()) F1207_3100_2572_122;
	R2572[14] = (char *(*)()) F1208_3100_2572_122;
}
static void F1195_3100_2572_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F1195_3100(Current, *(EIF_NATURAL_16 *)arg1, arg2);
}
static void F1196_3100_2572_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F1196_3100(Current, *(EIF_POINTER *)arg1, arg2);
}
static void F1197_3100_2572_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F1197_3100(Current, *(EIF_REAL_32 *)arg1, arg2);
}
static void F1198_3100_2572_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F1198_3100(Current, *(EIF_NATURAL_8 *)arg1, arg2);
}
static void F1199_3100_2572_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F1199_3100(Current, *(EIF_CHARACTER_8 *)arg1, arg2);
}
static void F1200_3100_2572_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F1200_3100(Current, *(EIF_INTEGER_32 *)arg1, arg2);
}
static void F1201_3100_2572_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F1201_3100(Current, *(EIF_REAL_64 *)arg1, arg2);
}
static void F1202_3100_2572_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F1202_3100(Current, *(EIF_INTEGER_8 *)arg1, arg2);
}
static void F1203_3100_2572_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F1203_3100(Current, *(EIF_INTEGER_16 *)arg1, arg2);
}
static void F1204_3100_2572_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F1204_3100(Current, *(EIF_NATURAL_32 *)arg1, arg2);
}
static void F1205_3100_2572_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F1205_3100(Current, *(EIF_INTEGER_64 *)arg1, arg2);
}
static void F1206_3100_2572_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F1206_3100(Current, *(EIF_BOOLEAN *)arg1, arg2);
}
static void F1207_3100_2572_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F1207_3100(Current, *(EIF_NATURAL_64 *)arg1, arg2);
}
static void F1208_3100_2572_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F1208_3100(Current, *(EIF_CHARACTER_32 *)arg1, arg2);
}

char *(*R2573[15])();
void R2573_init () {
	R2573[0] = (char *(*)()) F1194_3101;
	R2573[1] = (char *(*)()) F1195_3101_2573_122;
	R2573[2] = (char *(*)()) F1196_3101_2573_122;
	R2573[3] = (char *(*)()) F1197_3101_2573_122;
	R2573[4] = (char *(*)()) F1198_3101_2573_122;
	R2573[5] = (char *(*)()) F1199_3101_2573_122;
	R2573[6] = (char *(*)()) F1200_3101_2573_122;
	R2573[7] = (char *(*)()) F1201_3101_2573_122;
	R2573[8] = (char *(*)()) F1202_3101_2573_122;
	R2573[9] = (char *(*)()) F1203_3101_2573_122;
	R2573[10] = (char *(*)()) F1204_3101_2573_122;
	R2573[11] = (char *(*)()) F1205_3101_2573_122;
	R2573[12] = (char *(*)()) F1206_3101_2573_122;
	R2573[13] = (char *(*)()) F1207_3101_2573_122;
	R2573[14] = (char *(*)()) F1208_3101_2573_122;
}
static void F1195_3101_2573_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F1195_3101(Current, *(EIF_NATURAL_16 *)arg1, arg2);
}
static void F1196_3101_2573_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F1196_3101(Current, *(EIF_POINTER *)arg1, arg2);
}
static void F1197_3101_2573_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F1197_3101(Current, *(EIF_REAL_32 *)arg1, arg2);
}
static void F1198_3101_2573_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F1198_3101(Current, *(EIF_NATURAL_8 *)arg1, arg2);
}
static void F1199_3101_2573_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F1199_3101(Current, *(EIF_CHARACTER_8 *)arg1, arg2);
}
static void F1200_3101_2573_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F1200_3101(Current, *(EIF_INTEGER_32 *)arg1, arg2);
}
static void F1201_3101_2573_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F1201_3101(Current, *(EIF_REAL_64 *)arg1, arg2);
}
static void F1202_3101_2573_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F1202_3101(Current, *(EIF_INTEGER_8 *)arg1, arg2);
}
static void F1203_3101_2573_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F1203_3101(Current, *(EIF_INTEGER_16 *)arg1, arg2);
}
static void F1204_3101_2573_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F1204_3101(Current, *(EIF_NATURAL_32 *)arg1, arg2);
}
static void F1205_3101_2573_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F1205_3101(Current, *(EIF_INTEGER_64 *)arg1, arg2);
}
static void F1206_3101_2573_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F1206_3101(Current, *(EIF_BOOLEAN *)arg1, arg2);
}
static void F1207_3101_2573_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F1207_3101(Current, *(EIF_NATURAL_64 *)arg1, arg2);
}
static void F1208_3101_2573_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F1208_3101(Current, *(EIF_CHARACTER_32 *)arg1, arg2);
}

char *(*R2574[15])();
void R2574_init () {
	R2574[0] = (char *(*)()) F1194_3102;
	R2574[1] = (char *(*)()) F1195_3102_2574_4;
	R2574[2] = (char *(*)()) F1196_3102_2574_4;
	R2574[3] = (char *(*)()) F1197_3102_2574_4;
	R2574[4] = (char *(*)()) F1198_3102_2574_4;
	R2574[5] = (char *(*)()) F1199_3102_2574_4;
	R2574[6] = (char *(*)()) F1200_3102_2574_4;
	R2574[7] = (char *(*)()) F1201_3102_2574_4;
	R2574[8] = (char *(*)()) F1202_3102_2574_4;
	R2574[9] = (char *(*)()) F1203_3102_2574_4;
	R2574[10] = (char *(*)()) F1204_3102_2574_4;
	R2574[11] = (char *(*)()) F1205_3102_2574_4;
	R2574[12] = (char *(*)()) F1206_3102_2574_4;
	R2574[13] = (char *(*)()) F1207_3102_2574_4;
	R2574[14] = (char *(*)()) F1208_3102_2574_4;
}
static void F1195_3102_2574_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F1195_3102(Current, *(EIF_NATURAL_16 *)arg1);
}
static void F1196_3102_2574_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F1196_3102(Current, *(EIF_POINTER *)arg1);
}
static void F1197_3102_2574_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F1197_3102(Current, *(EIF_REAL_32 *)arg1);
}
static void F1198_3102_2574_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F1198_3102(Current, *(EIF_NATURAL_8 *)arg1);
}
static void F1199_3102_2574_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F1199_3102(Current, *(EIF_CHARACTER_8 *)arg1);
}
static void F1200_3102_2574_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F1200_3102(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F1201_3102_2574_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F1201_3102(Current, *(EIF_REAL_64 *)arg1);
}
static void F1202_3102_2574_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F1202_3102(Current, *(EIF_INTEGER_8 *)arg1);
}
static void F1203_3102_2574_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F1203_3102(Current, *(EIF_INTEGER_16 *)arg1);
}
static void F1204_3102_2574_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F1204_3102(Current, *(EIF_NATURAL_32 *)arg1);
}
static void F1205_3102_2574_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F1205_3102(Current, *(EIF_INTEGER_64 *)arg1);
}
static void F1206_3102_2574_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F1206_3102(Current, *(EIF_BOOLEAN *)arg1);
}
static void F1207_3102_2574_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F1207_3102(Current, *(EIF_NATURAL_64 *)arg1);
}
static void F1208_3102_2574_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F1208_3102(Current, *(EIF_CHARACTER_32 *)arg1);
}

char *(*R2576[15])();
void R2576_init () {
	R2576[0] = (char *(*)()) F1194_3104;
	R2576[1] = (char *(*)()) F1195_3104_2576_134;
	R2576[2] = (char *(*)()) F1196_3104_2576_134;
	R2576[3] = (char *(*)()) F1197_3104_2576_134;
	R2576[4] = (char *(*)()) F1198_3104_2576_134;
	R2576[5] = (char *(*)()) F1199_3104_2576_134;
	R2576[6] = (char *(*)()) F1200_3104_2576_134;
	R2576[7] = (char *(*)()) F1201_3104_2576_134;
	R2576[8] = (char *(*)()) F1202_3104_2576_134;
	R2576[9] = (char *(*)()) F1203_3104_2576_134;
	R2576[10] = (char *(*)()) F1204_3104_2576_134;
	R2576[11] = (char *(*)()) F1205_3104_2576_134;
	R2576[12] = (char *(*)()) F1206_3104_2576_134;
	R2576[13] = (char *(*)()) F1207_3104_2576_134;
	R2576[14] = (char *(*)()) F1208_3104_2576_134;
}
static void F1195_3104_2576_134 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F1195_3104(Current, *(EIF_NATURAL_16 *)arg1, arg2, arg3);
}
static void F1196_3104_2576_134 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F1196_3104(Current, *(EIF_POINTER *)arg1, arg2, arg3);
}
static void F1197_3104_2576_134 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F1197_3104(Current, *(EIF_REAL_32 *)arg1, arg2, arg3);
}
static void F1198_3104_2576_134 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F1198_3104(Current, *(EIF_NATURAL_8 *)arg1, arg2, arg3);
}
static void F1199_3104_2576_134 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F1199_3104(Current, *(EIF_CHARACTER_8 *)arg1, arg2, arg3);
}
static void F1200_3104_2576_134 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F1200_3104(Current, *(EIF_INTEGER_32 *)arg1, arg2, arg3);
}
static void F1201_3104_2576_134 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F1201_3104(Current, *(EIF_REAL_64 *)arg1, arg2, arg3);
}
static void F1202_3104_2576_134 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F1202_3104(Current, *(EIF_INTEGER_8 *)arg1, arg2, arg3);
}
static void F1203_3104_2576_134 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F1203_3104(Current, *(EIF_INTEGER_16 *)arg1, arg2, arg3);
}
static void F1204_3104_2576_134 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F1204_3104(Current, *(EIF_NATURAL_32 *)arg1, arg2, arg3);
}
static void F1205_3104_2576_134 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F1205_3104(Current, *(EIF_INTEGER_64 *)arg1, arg2, arg3);
}
static void F1206_3104_2576_134 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F1206_3104(Current, *(EIF_BOOLEAN *)arg1, arg2, arg3);
}
static void F1207_3104_2576_134 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F1207_3104(Current, *(EIF_NATURAL_64 *)arg1, arg2, arg3);
}
static void F1208_3104_2576_134 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F1208_3104(Current, *(EIF_CHARACTER_32 *)arg1, arg2, arg3);
}

char *(*R2579[15])();
void R2579_init () {
	R2579[0] = (char *(*)()) F1194_3107;
	R2579[1] = (char *(*)()) F1195_3107;
	R2579[2] = (char *(*)()) F1196_3107;
	R2579[3] = (char *(*)()) F1197_3107;
	R2579[4] = (char *(*)()) F1198_3107;
	R2579[5] = (char *(*)()) F1199_3107;
	R2579[6] = (char *(*)()) F1200_3107;
	R2579[7] = (char *(*)()) F1201_3107;
	R2579[8] = (char *(*)()) F1202_3107;
	R2579[9] = (char *(*)()) F1203_3107;
	R2579[10] = (char *(*)()) F1204_3107;
	R2579[11] = (char *(*)()) F1205_3107;
	R2579[12] = (char *(*)()) F1206_3107;
	R2579[13] = (char *(*)()) F1207_3107;
	R2579[14] = (char *(*)()) F1208_3107;
}

char *(*R2580[15])();
void R2580_init () {
	R2580[0] = (char *(*)()) F1194_3108;
	R2580[1] = (char *(*)()) F1195_3108;
	R2580[2] = (char *(*)()) F1196_3108;
	R2580[3] = (char *(*)()) F1197_3108;
	R2580[4] = (char *(*)()) F1198_3108;
	R2580[5] = (char *(*)()) F1199_3108;
	R2580[6] = (char *(*)()) F1200_3108;
	R2580[7] = (char *(*)()) F1201_3108;
	R2580[8] = (char *(*)()) F1202_3108;
	R2580[9] = (char *(*)()) F1203_3108;
	R2580[10] = (char *(*)()) F1204_3108;
	R2580[11] = (char *(*)()) F1205_3108;
	R2580[12] = (char *(*)()) F1206_3108;
	R2580[13] = (char *(*)()) F1207_3108;
	R2580[14] = (char *(*)()) F1208_3108;
}

char *(*R2581[15])();
void R2581_init () {
	R2581[0] = (char *(*)()) F1194_3109;
	R2581[1] = (char *(*)()) F1195_3109;
	R2581[2] = (char *(*)()) F1196_3109;
	R2581[3] = (char *(*)()) F1197_3109;
	R2581[4] = (char *(*)()) F1198_3109;
	R2581[5] = (char *(*)()) F1199_3109;
	R2581[6] = (char *(*)()) F1200_3109;
	R2581[7] = (char *(*)()) F1201_3109;
	R2581[8] = (char *(*)()) F1202_3109;
	R2581[9] = (char *(*)()) F1203_3109;
	R2581[10] = (char *(*)()) F1204_3109;
	R2581[11] = (char *(*)()) F1205_3109;
	R2581[12] = (char *(*)()) F1206_3109;
	R2581[13] = (char *(*)()) F1207_3109;
	R2581[14] = (char *(*)()) F1208_3109;
}

char *(*R2582[15])();
void R2582_init () {
	R2582[0] = (char *(*)()) F1194_3110;
	R2582[1] = (char *(*)()) F1195_3110;
	R2582[2] = (char *(*)()) F1196_3110;
	R2582[3] = (char *(*)()) F1197_3110;
	R2582[4] = (char *(*)()) F1198_3110;
	R2582[5] = (char *(*)()) F1199_3110;
	R2582[6] = (char *(*)()) F1200_3110;
	R2582[7] = (char *(*)()) F1201_3110;
	R2582[8] = (char *(*)()) F1202_3110;
	R2582[9] = (char *(*)()) F1203_3110;
	R2582[10] = (char *(*)()) F1204_3110;
	R2582[11] = (char *(*)()) F1205_3110;
	R2582[12] = (char *(*)()) F1206_3110;
	R2582[13] = (char *(*)()) F1207_3110;
	R2582[14] = (char *(*)()) F1208_3110;
}

char *(*R2583[15])();
void R2583_init () {
	R2583[0] = (char *(*)()) F1194_3111;
	R2583[1] = (char *(*)()) F1195_3111;
	R2583[2] = (char *(*)()) F1196_3111;
	R2583[3] = (char *(*)()) F1197_3111;
	R2583[4] = (char *(*)()) F1198_3111;
	R2583[5] = (char *(*)()) F1199_3111;
	R2583[6] = (char *(*)()) F1200_3111;
	R2583[7] = (char *(*)()) F1201_3111;
	R2583[8] = (char *(*)()) F1202_3111;
	R2583[9] = (char *(*)()) F1203_3111;
	R2583[10] = (char *(*)()) F1204_3111;
	R2583[11] = (char *(*)()) F1205_3111;
	R2583[12] = (char *(*)()) F1206_3111;
	R2583[13] = (char *(*)()) F1207_3111;
	R2583[14] = (char *(*)()) F1208_3111;
}

char *(*R2586[15])();
void R2586_init () {
	R2586[0] = (char *(*)()) F1194_3114;
	R2586[1] = (char *(*)()) F1195_3114;
	R2586[2] = (char *(*)()) F1196_3114;
	R2586[3] = (char *(*)()) F1197_3114;
	R2586[4] = (char *(*)()) F1198_3114;
	R2586[5] = (char *(*)()) F1199_3114;
	R2586[6] = (char *(*)()) F1200_3114;
	R2586[7] = (char *(*)()) F1201_3114;
	R2586[8] = (char *(*)()) F1202_3114;
	R2586[9] = (char *(*)()) F1203_3114;
	R2586[10] = (char *(*)()) F1204_3114;
	R2586[11] = (char *(*)()) F1205_3114;
	R2586[12] = (char *(*)()) F1206_3114;
	R2586[13] = (char *(*)()) F1207_3114;
	R2586[14] = (char *(*)()) F1208_3114;
}

char *(*R2589[15])();
void R2589_init () {
	R2589[0] = (char *(*)()) F1194_3117;
	R2589[1] = (char *(*)()) F1195_3117;
	R2589[2] = (char *(*)()) F1196_3117;
	R2589[3] = (char *(*)()) F1197_3117;
	R2589[4] = (char *(*)()) F1198_3117;
	R2589[5] = (char *(*)()) F1199_3117;
	R2589[6] = (char *(*)()) F1200_3117;
	R2589[7] = (char *(*)()) F1201_3117;
	R2589[8] = (char *(*)()) F1202_3117;
	R2589[9] = (char *(*)()) F1203_3117;
	R2589[10] = (char *(*)()) F1204_3117;
	R2589[11] = (char *(*)()) F1205_3117;
	R2589[12] = (char *(*)()) F1206_3117;
	R2589[13] = (char *(*)()) F1207_3117;
	R2589[14] = (char *(*)()) F1208_3117;
}

char *(*R2590[15])();
void R2590_init () {
	R2590[0] = (char *(*)()) F1194_3118;
	R2590[1] = (char *(*)()) F1195_3118_2590_106;
	R2590[2] = (char *(*)()) F1196_3118_2590_106;
	R2590[3] = (char *(*)()) F1197_3118_2590_106;
	R2590[4] = (char *(*)()) F1198_3118_2590_106;
	R2590[5] = (char *(*)()) F1199_3118_2590_106;
	R2590[6] = (char *(*)()) F1200_3118_2590_106;
	R2590[7] = (char *(*)()) F1201_3118_2590_106;
	R2590[8] = (char *(*)()) F1202_3118_2590_106;
	R2590[9] = (char *(*)()) F1203_3118_2590_106;
	R2590[10] = (char *(*)()) F1204_3118_2590_106;
	R2590[11] = (char *(*)()) F1205_3118_2590_106;
	R2590[12] = (char *(*)()) F1206_3118_2590_106;
	R2590[13] = (char *(*)()) F1207_3118_2590_106;
	R2590[14] = (char *(*)()) F1208_3118_2590_106;
}
static EIF_REFERENCE F1195_3118_2590_106 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F1195_3118(Current, *(EIF_NATURAL_16 *)arg1, arg2);
}
static EIF_REFERENCE F1196_3118_2590_106 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F1196_3118(Current, *(EIF_POINTER *)arg1, arg2);
}
static EIF_REFERENCE F1197_3118_2590_106 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F1197_3118(Current, *(EIF_REAL_32 *)arg1, arg2);
}
static EIF_REFERENCE F1198_3118_2590_106 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F1198_3118(Current, *(EIF_NATURAL_8 *)arg1, arg2);
}
static EIF_REFERENCE F1199_3118_2590_106 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F1199_3118(Current, *(EIF_CHARACTER_8 *)arg1, arg2);
}
static EIF_REFERENCE F1200_3118_2590_106 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F1200_3118(Current, *(EIF_INTEGER_32 *)arg1, arg2);
}
static EIF_REFERENCE F1201_3118_2590_106 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F1201_3118(Current, *(EIF_REAL_64 *)arg1, arg2);
}
static EIF_REFERENCE F1202_3118_2590_106 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F1202_3118(Current, *(EIF_INTEGER_8 *)arg1, arg2);
}
static EIF_REFERENCE F1203_3118_2590_106 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F1203_3118(Current, *(EIF_INTEGER_16 *)arg1, arg2);
}
static EIF_REFERENCE F1204_3118_2590_106 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F1204_3118(Current, *(EIF_NATURAL_32 *)arg1, arg2);
}
static EIF_REFERENCE F1205_3118_2590_106 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F1205_3118(Current, *(EIF_INTEGER_64 *)arg1, arg2);
}
static EIF_REFERENCE F1206_3118_2590_106 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F1206_3118(Current, *(EIF_BOOLEAN *)arg1, arg2);
}
static EIF_REFERENCE F1207_3118_2590_106 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F1207_3118(Current, *(EIF_NATURAL_64 *)arg1, arg2);
}
static EIF_REFERENCE F1208_3118_2590_106 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F1208_3118(Current, *(EIF_CHARACTER_32 *)arg1, arg2);
}

char *(*R2592[15])();
void R2592_init () {
	R2592[0] = (char *(*)()) F1194_3120;
	R2592[1] = (char *(*)()) F1195_3120;
	R2592[2] = (char *(*)()) F1196_3120;
	R2592[3] = (char *(*)()) F1197_3120;
	R2592[4] = (char *(*)()) F1198_3120;
	R2592[5] = (char *(*)()) F1199_3120;
	R2592[6] = (char *(*)()) F1200_3120;
	R2592[7] = (char *(*)()) F1201_3120;
	R2592[8] = (char *(*)()) F1202_3120;
	R2592[9] = (char *(*)()) F1203_3120;
	R2592[10] = (char *(*)()) F1204_3120;
	R2592[11] = (char *(*)()) F1205_3120;
	R2592[12] = (char *(*)()) F1206_3120;
	R2592[13] = (char *(*)()) F1207_3120;
	R2592[14] = (char *(*)()) F1208_3120;
}

char *(*R2594[15])();
void R2594_init () {
	R2594[0] = (char *(*)()) F1194_3122;
	R2594[1] = (char *(*)()) F1195_3122;
	R2594[2] = (char *(*)()) F1196_3122;
	R2594[3] = (char *(*)()) F1197_3122;
	R2594[4] = (char *(*)()) F1198_3122;
	R2594[5] = (char *(*)()) F1199_3122;
	R2594[6] = (char *(*)()) F1200_3122;
	R2594[7] = (char *(*)()) F1201_3122;
	R2594[8] = (char *(*)()) F1202_3122;
	R2594[9] = (char *(*)()) F1203_3122;
	R2594[10] = (char *(*)()) F1204_3122;
	R2594[11] = (char *(*)()) F1205_3122;
	R2594[12] = (char *(*)()) F1206_3122;
	R2594[13] = (char *(*)()) F1207_3122;
	R2594[14] = (char *(*)()) F1208_3122;
}

char *(*R2601[15])();
void R2601_init () {
	R2601[0] = (char *(*)()) F1194_3130;
	R2601[1] = (char *(*)()) F1195_3130;
	R2601[2] = (char *(*)()) F1196_3130;
	R2601[3] = (char *(*)()) F1197_3130;
	R2601[4] = (char *(*)()) F1198_3130;
	R2601[5] = (char *(*)()) F1199_3130;
	R2601[6] = (char *(*)()) F1200_3130;
	R2601[7] = (char *(*)()) F1201_3130;
	R2601[8] = (char *(*)()) F1202_3130;
	R2601[9] = (char *(*)()) F1203_3130;
	R2601[10] = (char *(*)()) F1204_3130;
	R2601[11] = (char *(*)()) F1205_3130;
	R2601[12] = (char *(*)()) F1206_3130;
	R2601[13] = (char *(*)()) F1207_3130;
	R2601[14] = (char *(*)()) F1208_3130;
}

char *(*R2611[2])();
void R2611_init () {
	R2611[0] = (char *(*)()) F850_3157;
	R2611[1] = (char *(*)()) F851_3179;
}

char *(*R2628[22])();
void R2628_init () {
	R2628[0] = (char *(*)()) F919_3186;
	R2628[1] = (char *(*)()) F920_3186_2628_134;
	R2628[2] = (char *(*)()) F921_3186_2628_134;
	R2628[3] = (char *(*)()) F922_3186_2628_134;
	R2628[4] = (char *(*)()) F923_3186_2628_134;
	R2628[5] = (char *(*)()) F924_3186_2628_134;
	R2628[6] = (char *(*)()) F925_3186_2628_134;
	R2628[7] = (char *(*)()) F926_3186_2628_134;
	R2628[8] = (char *(*)()) F927_3186_2628_134;
	R2628[9] = (char *(*)()) F928_3186_2628_134;
	R2628[10] = (char *(*)()) F929_3186_2628_134;
	R2628[11] = (char *(*)()) F930_3186_2628_134;
	R2628[12] = (char *(*)()) F931_3186_2628_134;
	R2628[13] = (char *(*)()) F932_3186_2628_134;
	R2628[14] = (char *(*)()) F933_3186_2628_134;
	R2628[15] = (char *(*)()) F923_3186_2628_134;
	R2628[16] = (char *(*)()) F919_3186;
	R2628[17] = (char *(*)()) F931_3186_2628_134;
	R2628[18] = (char *(*)()) F925_3186_2628_134;
	R2628[19] = (char *(*)()) F924_3186_2628_134;
	R2628[20] = (char *(*)()) F922_3186_2628_134;
	R2628[21] = (char *(*)()) F919_3186;
}
static void F920_3186_2628_134 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F920_3186(Current, *(EIF_NATURAL_16 *)arg1, arg2, arg3);
}
static void F921_3186_2628_134 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F921_3186(Current, *(EIF_POINTER *)arg1, arg2, arg3);
}
static void F922_3186_2628_134 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F922_3186(Current, *(EIF_REAL_32 *)arg1, arg2, arg3);
}
static void F923_3186_2628_134 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F923_3186(Current, *(EIF_NATURAL_8 *)arg1, arg2, arg3);
}
static void F924_3186_2628_134 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F924_3186(Current, *(EIF_CHARACTER_8 *)arg1, arg2, arg3);
}
static void F925_3186_2628_134 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F925_3186(Current, *(EIF_INTEGER_32 *)arg1, arg2, arg3);
}
static void F926_3186_2628_134 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F926_3186(Current, *(EIF_REAL_64 *)arg1, arg2, arg3);
}
static void F927_3186_2628_134 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F927_3186(Current, *(EIF_INTEGER_8 *)arg1, arg2, arg3);
}
static void F928_3186_2628_134 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F928_3186(Current, *(EIF_INTEGER_16 *)arg1, arg2, arg3);
}
static void F929_3186_2628_134 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F929_3186(Current, *(EIF_NATURAL_32 *)arg1, arg2, arg3);
}
static void F930_3186_2628_134 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F930_3186(Current, *(EIF_INTEGER_64 *)arg1, arg2, arg3);
}
static void F931_3186_2628_134 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F931_3186(Current, *(EIF_BOOLEAN *)arg1, arg2, arg3);
}
static void F932_3186_2628_134 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F932_3186(Current, *(EIF_NATURAL_64 *)arg1, arg2, arg3);
}
static void F933_3186_2628_134 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F933_3186(Current, *(EIF_CHARACTER_32 *)arg1, arg2, arg3);
}

char *(*R2631[22])();
void R2631_init () {
	R2631[0] = (char *(*)()) F919_3189;
	R2631[1] = (char *(*)()) F920_3189;
	R2631[2] = (char *(*)()) F921_3189;
	R2631[3] = (char *(*)()) F922_3189;
	R2631[4] = (char *(*)()) F923_3189;
	R2631[5] = (char *(*)()) F924_3189;
	R2631[6] = (char *(*)()) F925_3189;
	R2631[7] = (char *(*)()) F926_3189;
	R2631[8] = (char *(*)()) F927_3189;
	R2631[9] = (char *(*)()) F928_3189;
	R2631[10] = (char *(*)()) F929_3189;
	R2631[11] = (char *(*)()) F930_3189;
	R2631[12] = (char *(*)()) F931_3189;
	R2631[13] = (char *(*)()) F932_3189;
	R2631[14] = (char *(*)()) F933_3189;
	R2631[15] = (char *(*)()) F923_3189;
	R2631[16] = (char *(*)()) F919_3189;
	R2631[17] = (char *(*)()) F931_3189;
	R2631[18] = (char *(*)()) F925_3189;
	R2631[19] = (char *(*)()) F924_3189;
	R2631[20] = (char *(*)()) F922_3189;
	R2631[21] = (char *(*)()) F919_3189;
}

char *(*R2641[22])();
void R2641_init () {
	R2641[0] = (char *(*)()) F919_3215;
	R2641[1] = (char *(*)()) F920_3215;
	R2641[2] = (char *(*)()) F921_3215;
	R2641[3] = (char *(*)()) F922_3215;
	R2641[4] = (char *(*)()) F923_3215;
	R2641[5] = (char *(*)()) F924_3215;
	R2641[6] = (char *(*)()) F925_3215;
	R2641[7] = (char *(*)()) F926_3215;
	R2641[8] = (char *(*)()) F927_3215;
	R2641[9] = (char *(*)()) F928_3215;
	R2641[10] = (char *(*)()) F929_3215;
	R2641[11] = (char *(*)()) F930_3215;
	R2641[12] = (char *(*)()) F931_3215;
	R2641[13] = (char *(*)()) F932_3215;
	R2641[14] = (char *(*)()) F933_3215;
	R2641[15] = (char *(*)()) F923_3215;
	R2641[16] = (char *(*)()) F919_3215;
	R2641[17] = (char *(*)()) F931_3215;
	R2641[18] = (char *(*)()) F925_3215;
	R2641[19] = (char *(*)()) F924_3215;
	R2641[20] = (char *(*)()) F922_3215;
	R2641[21] = (char *(*)()) F919_3215;
}

char *(*R2655[22])();
void R2655_init () {
	R2655[0] = (char *(*)()) F919_3231;
	R2655[1] = (char *(*)()) F920_3231_2655_134;
	R2655[2] = (char *(*)()) F921_3231_2655_134;
	R2655[3] = (char *(*)()) F922_3231_2655_134;
	R2655[4] = (char *(*)()) F923_3231_2655_134;
	R2655[5] = (char *(*)()) F924_3231_2655_134;
	R2655[6] = (char *(*)()) F925_3231_2655_134;
	R2655[7] = (char *(*)()) F926_3231_2655_134;
	R2655[8] = (char *(*)()) F927_3231_2655_134;
	R2655[9] = (char *(*)()) F928_3231_2655_134;
	R2655[10] = (char *(*)()) F929_3231_2655_134;
	R2655[11] = (char *(*)()) F930_3231_2655_134;
	R2655[12] = (char *(*)()) F931_3231_2655_134;
	R2655[13] = (char *(*)()) F932_3231_2655_134;
	R2655[14] = (char *(*)()) F933_3231_2655_134;
	R2655[15] = (char *(*)()) F923_3231_2655_134;
	R2655[16] = (char *(*)()) F919_3231;
	R2655[17] = (char *(*)()) F931_3231_2655_134;
	R2655[18] = (char *(*)()) F925_3231_2655_134;
	R2655[19] = (char *(*)()) F924_3231_2655_134;
	R2655[20] = (char *(*)()) F922_3231_2655_134;
	R2655[21] = (char *(*)()) F919_3231;
}
static void F920_3231_2655_134 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F920_3231(Current, *(EIF_NATURAL_16 *)arg1, arg2, arg3);
}
static void F921_3231_2655_134 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F921_3231(Current, *(EIF_POINTER *)arg1, arg2, arg3);
}
static void F922_3231_2655_134 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F922_3231(Current, *(EIF_REAL_32 *)arg1, arg2, arg3);
}
static void F923_3231_2655_134 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F923_3231(Current, *(EIF_NATURAL_8 *)arg1, arg2, arg3);
}
static void F924_3231_2655_134 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F924_3231(Current, *(EIF_CHARACTER_8 *)arg1, arg2, arg3);
}
static void F925_3231_2655_134 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F925_3231(Current, *(EIF_INTEGER_32 *)arg1, arg2, arg3);
}
static void F926_3231_2655_134 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F926_3231(Current, *(EIF_REAL_64 *)arg1, arg2, arg3);
}
static void F927_3231_2655_134 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F927_3231(Current, *(EIF_INTEGER_8 *)arg1, arg2, arg3);
}
static void F928_3231_2655_134 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F928_3231(Current, *(EIF_INTEGER_16 *)arg1, arg2, arg3);
}
static void F929_3231_2655_134 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F929_3231(Current, *(EIF_NATURAL_32 *)arg1, arg2, arg3);
}
static void F930_3231_2655_134 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F930_3231(Current, *(EIF_INTEGER_64 *)arg1, arg2, arg3);
}
static void F931_3231_2655_134 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F931_3231(Current, *(EIF_BOOLEAN *)arg1, arg2, arg3);
}
static void F932_3231_2655_134 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F932_3231(Current, *(EIF_NATURAL_64 *)arg1, arg2, arg3);
}
static void F933_3231_2655_134 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F933_3231(Current, *(EIF_CHARACTER_32 *)arg1, arg2, arg3);
}

char *(*R2662[22])();
void R2662_init () {
	R2662[0] = (char *(*)()) F919_3243;
	R2662[1] = (char *(*)()) F920_3243;
	R2662[2] = (char *(*)()) F921_3243;
	R2662[3] = (char *(*)()) F922_3243;
	R2662[4] = (char *(*)()) F923_3243;
	R2662[5] = (char *(*)()) F924_3243;
	R2662[6] = (char *(*)()) F925_3243;
	R2662[7] = (char *(*)()) F926_3243;
	R2662[8] = (char *(*)()) F927_3243;
	R2662[9] = (char *(*)()) F928_3243;
	R2662[10] = (char *(*)()) F929_3243;
	R2662[11] = (char *(*)()) F930_3243;
	R2662[12] = (char *(*)()) F931_3243;
	R2662[13] = (char *(*)()) F932_3243;
	R2662[14] = (char *(*)()) F933_3243;
	R2662[15] = (char *(*)()) F923_3243;
	R2662[16] = (char *(*)()) F919_3243;
	R2662[17] = (char *(*)()) F931_3243;
	R2662[18] = (char *(*)()) F925_3243;
	R2662[19] = (char *(*)()) F924_3243;
	R2662[20] = (char *(*)()) F922_3243;
	R2662[21] = (char *(*)()) F919_3243;
}

char *(*R2676[783])();
void R2676_init () {
	R2676[0] = (char *(*)()) F912_3518;
	R2676[1] = (char *(*)()) F913_3518_2676_1;
	R2676[2] = (char *(*)()) F914_3518_2676_1;
	R2676[3] = (char *(*)()) F912_3518;
	R2676[4] = (char *(*)()) F914_3518_2676_1;
	R2676[5] = (char *(*)()) F913_3518_2676_1;
	R2676[6] = (char *(*)()) F912_3518;
	R2676[39] = (char *(*)()) F951_4081;
	R2676[40] = (char *(*)()) F952_4081_2676_1;
	R2676[41] = (char *(*)()) F953_4081_2676_1;
	R2676[42] = (char *(*)()) F954_4081_2676_1;
	R2676[43] = (char *(*)()) F955_4081_2676_1;
	R2676[44] = (char *(*)()) F956_4081_2676_1;
	R2676[45] = (char *(*)()) F957_4081_2676_1;
	R2676[46] = (char *(*)()) F958_4081_2676_1;
	R2676[47] = (char *(*)()) F959_4081_2676_1;
	R2676[48] = (char *(*)()) F960_4081_2676_1;
	R2676[49] = (char *(*)()) F961_4081_2676_1;
	R2676[50] = (char *(*)()) F962_4081_2676_1;
	R2676[51] = (char *(*)()) F963_4081_2676_1;
	R2676[52] = (char *(*)()) F964_4081_2676_1;
	R2676[53] = (char *(*)()) F965_4081_2676_1;
	R2676[54] = (char *(*)()) F951_4081;
	R2676[55] = (char *(*)()) F963_4081_2676_1;
	R2676[56] = (char *(*)()) F957_4081_2676_1;
	R2676[59] = (char *(*)()) F951_4081;
	R2676[60] = (char *(*)()) F957_4081_2676_1;
	R2676[61] = (char *(*)()) F951_4081;
	R2676[62] = (char *(*)()) F957_4081_2676_1;
	{long i; for (i = 63; i < 67; i++) R2676[i] = (char *(*)()) F951_4081;}
	{long i; for (i = 68; i < 87; i++) R2676[i] = (char *(*)()) F951_4081;}
	R2676[723] = (char *(*)()) F852_3255;
	{long i; for (i = 725; i < 727; i++) R2676[i] = (char *(*)()) F852_3255;}
	R2676[757] = (char *(*)()) F951_4081;
	{long i; for (i = 770; i < 772; i++) R2676[i] = (char *(*)()) F852_3255;}
	{long i; for (i = 773; i < 775; i++) R2676[i] = (char *(*)()) F852_3255;}
	{long i; for (i = 777; i < 780; i++) R2676[i] = (char *(*)()) F852_3255;}
	{long i; for (i = 781; i < 783; i++) R2676[i] = (char *(*)()) F852_3255;}
}
static EIF_REFERENCE F913_3518_2676_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F913_3518(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(1508, 0x00).id, 1508, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F914_3518_2676_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F914_3518(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_b = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_b;
	} else {
		Result = RTLNS(eif_new_type(1493, 0x00).id, 1493, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_BOOLEAN *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F952_4081_2676_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_16 r = F952_4081(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n2;
	} else {
		Result = RTLNS(eif_new_type(1505, 0x00).id, 1505, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_NATURAL_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F953_4081_2676_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_POINTER r = F953_4081(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		Result = RTLNS(eif_new_type(1550, 0x00).id, 1550, _OBJSIZ_0_0_0_0_0_1_0_0_);
		*(EIF_POINTER *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F954_4081_2676_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_32 r = F954_4081(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r4;
	} else {
		Result = RTLNS(eif_new_type(1481, 0x00).id, 1481, _OBJSIZ_0_0_0_0_1_0_0_0_);
		*(EIF_REAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F955_4081_2676_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_8 r = F955_4081(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n1;
	} else {
		Result = RTLNS(eif_new_type(1499, 0x00).id, 1499, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_NATURAL_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F956_4081_2676_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F956_4081(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c1;
	} else {
		Result = RTLNS(eif_new_type(1487, 0x00).id, 1487, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_CHARACTER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F957_4081_2676_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F957_4081(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(1508, 0x00).id, 1508, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F958_4081_2676_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_64 r = F958_4081(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r8;
	} else {
		Result = RTLNS(eif_new_type(1496, 0x00).id, 1496, _OBJSIZ_0_0_0_0_0_0_0_1_);
		*(EIF_REAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F959_4081_2676_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_8 r = F959_4081(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i1;
	} else {
		Result = RTLNS(eif_new_type(1478, 0x00).id, 1478, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_INTEGER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F960_4081_2676_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_16 r = F960_4081(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i2;
	} else {
		Result = RTLNS(eif_new_type(1511, 0x00).id, 1511, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_INTEGER_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F961_4081_2676_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F961_4081(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n4;
	} else {
		Result = RTLNS(eif_new_type(1502, 0x00).id, 1502, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_NATURAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F962_4081_2676_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_64 r = F962_4081(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i8;
	} else {
		Result = RTLNS(eif_new_type(1490, 0x00).id, 1490, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_INTEGER_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F963_4081_2676_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F963_4081(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_b = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_b;
	} else {
		Result = RTLNS(eif_new_type(1493, 0x00).id, 1493, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_BOOLEAN *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F964_4081_2676_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_64 r = F964_4081(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n8;
	} else {
		Result = RTLNS(eif_new_type(1514, 0x00).id, 1514, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_NATURAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F965_4081_2676_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F965_4081(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c4;
	} else {
		Result = RTLNS(eif_new_type(1484, 0x00).id, 1484, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_CHARACTER_32 *)Result = r;
		return Result;
	}
}

char *(*R2678[7])();
void R2678_init () {
	R2678[0] = (char *(*)()) F912_3538;
	R2678[1] = (char *(*)()) F913_3538;
	R2678[2] = (char *(*)()) F914_3538;
	R2678[3] = (char *(*)()) F912_3538;
	R2678[4] = (char *(*)()) F914_3538;
	R2678[5] = (char *(*)()) F913_3538;
	R2678[6] = (char *(*)()) F912_3538;
}

char *(*R2679[783])();
void R2679_init () {
	R2679[0] = (char *(*)()) F912_3539;
	R2679[1] = (char *(*)()) F913_3539;
	R2679[2] = (char *(*)()) F914_3539;
	R2679[3] = (char *(*)()) F912_3539;
	R2679[4] = (char *(*)()) F914_3539;
	R2679[5] = (char *(*)()) F913_3539;
	R2679[6] = (char *(*)()) F912_3539;
	R2679[39] = (char *(*)()) F951_4108;
	R2679[40] = (char *(*)()) F952_4108;
	R2679[41] = (char *(*)()) F953_4108;
	R2679[42] = (char *(*)()) F954_4108;
	R2679[43] = (char *(*)()) F955_4108;
	R2679[44] = (char *(*)()) F956_4108;
	R2679[45] = (char *(*)()) F957_4108;
	R2679[46] = (char *(*)()) F958_4108;
	R2679[47] = (char *(*)()) F959_4108;
	R2679[48] = (char *(*)()) F960_4108;
	R2679[49] = (char *(*)()) F961_4108;
	R2679[50] = (char *(*)()) F962_4108;
	R2679[51] = (char *(*)()) F963_4108;
	R2679[52] = (char *(*)()) F964_4108;
	R2679[53] = (char *(*)()) F965_4108;
	R2679[54] = (char *(*)()) F951_4108;
	R2679[55] = (char *(*)()) F963_4108;
	R2679[56] = (char *(*)()) F957_4108;
	R2679[59] = (char *(*)()) F951_4108;
	R2679[60] = (char *(*)()) F957_4108;
	R2679[61] = (char *(*)()) F951_4108;
	R2679[62] = (char *(*)()) F957_4108;
	{long i; for (i = 63; i < 67; i++) R2679[i] = (char *(*)()) F951_4108;}
	{long i; for (i = 68; i < 87; i++) R2679[i] = (char *(*)()) F951_4108;}
	R2679[723] = (char *(*)()) F1630_18259;
	{long i; for (i = 725; i < 727; i++) R2679[i] = (char *(*)()) F1630_18259;}
	R2679[757] = (char *(*)()) F951_4108;
	{long i; for (i = 770; i < 772; i++) R2679[i] = (char *(*)()) F1630_18259;}
	{long i; for (i = 773; i < 775; i++) R2679[i] = (char *(*)()) F1630_18259;}
	{long i; for (i = 777; i < 780; i++) R2679[i] = (char *(*)()) F1630_18259;}
	{long i; for (i = 781; i < 783; i++) R2679[i] = (char *(*)()) F1630_18259;}
}

char *(*R2680[7])();
void R2680_init () {
	R2680[0] = (char *(*)()) F912_3529;
	R2680[1] = (char *(*)()) F913_3529;
	R2680[2] = (char *(*)()) F914_3529;
	R2680[3] = (char *(*)()) F912_3529;
	R2680[4] = (char *(*)()) F914_3529;
	R2680[5] = (char *(*)()) F913_3529;
	R2680[6] = (char *(*)()) F912_3529;
}

char *(*R2681[783])();
void R2681_init () {
	R2681[0] = (char *(*)()) F912_3530;
	R2681[1] = (char *(*)()) F913_3530;
	R2681[2] = (char *(*)()) F914_3530;
	R2681[3] = (char *(*)()) F912_3530;
	R2681[4] = (char *(*)()) F914_3530;
	R2681[5] = (char *(*)()) F913_3530;
	R2681[6] = (char *(*)()) F912_3530;
	R2681[39] = (char *(*)()) F852_3269;
	R2681[40] = (char *(*)()) F853_3269;
	R2681[41] = (char *(*)()) F854_3269;
	R2681[42] = (char *(*)()) F855_3269;
	R2681[43] = (char *(*)()) F856_3269;
	R2681[44] = (char *(*)()) F857_3269;
	R2681[45] = (char *(*)()) F858_3269;
	R2681[46] = (char *(*)()) F859_3269;
	R2681[47] = (char *(*)()) F860_3269;
	R2681[48] = (char *(*)()) F861_3269;
	R2681[49] = (char *(*)()) F862_3269;
	R2681[50] = (char *(*)()) F863_3269;
	R2681[51] = (char *(*)()) F864_3269;
	R2681[52] = (char *(*)()) F865_3269;
	R2681[53] = (char *(*)()) F866_3269;
	R2681[54] = (char *(*)()) F852_3269;
	R2681[55] = (char *(*)()) F864_3269;
	R2681[56] = (char *(*)()) F858_3269;
	R2681[59] = (char *(*)()) F852_3269;
	R2681[60] = (char *(*)()) F858_3269;
	R2681[61] = (char *(*)()) F852_3269;
	R2681[62] = (char *(*)()) F858_3269;
	{long i; for (i = 63; i < 67; i++) R2681[i] = (char *(*)()) F852_3269;}
	{long i; for (i = 68; i < 87; i++) R2681[i] = (char *(*)()) F852_3269;}
	R2681[723] = (char *(*)()) F852_3269;
	{long i; for (i = 725; i < 727; i++) R2681[i] = (char *(*)()) F852_3269;}
	R2681[757] = (char *(*)()) F852_3269;
	{long i; for (i = 770; i < 772; i++) R2681[i] = (char *(*)()) F852_3269;}
	{long i; for (i = 773; i < 775; i++) R2681[i] = (char *(*)()) F852_3269;}
	{long i; for (i = 777; i < 780; i++) R2681[i] = (char *(*)()) F852_3269;}
	{long i; for (i = 781; i < 783; i++) R2681[i] = (char *(*)()) F852_3269;}
}

char *(*R2682[783])();
void R2682_init () {
	R2682[0] = (char *(*)()) F852_3271;
	R2682[1] = (char *(*)()) F858_3271;
	R2682[2] = (char *(*)()) F864_3271;
	R2682[3] = (char *(*)()) F852_3271;
	R2682[4] = (char *(*)()) F864_3271;
	R2682[5] = (char *(*)()) F858_3271;
	R2682[6] = (char *(*)()) F852_3271;
	R2682[39] = (char *(*)()) F852_3271;
	R2682[40] = (char *(*)()) F853_3271;
	R2682[41] = (char *(*)()) F854_3271;
	R2682[42] = (char *(*)()) F855_3271;
	R2682[43] = (char *(*)()) F856_3271;
	R2682[44] = (char *(*)()) F857_3271;
	R2682[45] = (char *(*)()) F858_3271;
	R2682[46] = (char *(*)()) F859_3271;
	R2682[47] = (char *(*)()) F860_3271;
	R2682[48] = (char *(*)()) F861_3271;
	R2682[49] = (char *(*)()) F862_3271;
	R2682[50] = (char *(*)()) F863_3271;
	R2682[51] = (char *(*)()) F864_3271;
	R2682[52] = (char *(*)()) F865_3271;
	R2682[53] = (char *(*)()) F866_3271;
	R2682[54] = (char *(*)()) F852_3271;
	R2682[55] = (char *(*)()) F864_3271;
	R2682[56] = (char *(*)()) F858_3271;
	R2682[59] = (char *(*)()) F852_3271;
	R2682[60] = (char *(*)()) F858_3271;
	R2682[61] = (char *(*)()) F852_3271;
	R2682[62] = (char *(*)()) F858_3271;
	{long i; for (i = 63; i < 67; i++) R2682[i] = (char *(*)()) F852_3271;}
	{long i; for (i = 68; i < 87; i++) R2682[i] = (char *(*)()) F852_3271;}
	R2682[723] = (char *(*)()) F852_3271;
	{long i; for (i = 725; i < 727; i++) R2682[i] = (char *(*)()) F852_3271;}
	R2682[757] = (char *(*)()) F852_3271;
	{long i; for (i = 770; i < 772; i++) R2682[i] = (char *(*)()) F852_3271;}
	{long i; for (i = 773; i < 775; i++) R2682[i] = (char *(*)()) F852_3271;}
	{long i; for (i = 777; i < 780; i++) R2682[i] = (char *(*)()) F852_3271;}
	{long i; for (i = 781; i < 783; i++) R2682[i] = (char *(*)()) F852_3271;}
}


#ifdef __cplusplus
}
#endif
