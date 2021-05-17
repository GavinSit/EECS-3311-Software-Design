#include "epoly5.h"
#include "../E1/eoffsets.h"


#ifdef __cplusplus
extern "C" {
#endif

char *(*R2290[937])();
void R2290_init () {
	R2290[0] = (char *(*)()) F912_3517;
	R2290[1] = (char *(*)()) F913_3517_2290_1;
	R2290[2] = (char *(*)()) F914_3517_2290_1;
	R2290[3] = (char *(*)()) F912_3517;
	R2290[4] = (char *(*)()) F914_3517_2290_1;
	R2290[5] = (char *(*)()) F913_3517_2290_1;
	R2290[6] = (char *(*)()) F912_3517;
	R2290[39] = (char *(*)()) F951_4078;
	R2290[40] = (char *(*)()) F952_4078_2290_1;
	R2290[41] = (char *(*)()) F953_4078_2290_1;
	R2290[42] = (char *(*)()) F954_4078_2290_1;
	R2290[43] = (char *(*)()) F955_4078_2290_1;
	R2290[44] = (char *(*)()) F956_4078_2290_1;
	R2290[45] = (char *(*)()) F957_4078_2290_1;
	R2290[46] = (char *(*)()) F958_4078_2290_1;
	R2290[47] = (char *(*)()) F959_4078_2290_1;
	R2290[48] = (char *(*)()) F960_4078_2290_1;
	R2290[49] = (char *(*)()) F961_4078_2290_1;
	R2290[50] = (char *(*)()) F962_4078_2290_1;
	R2290[51] = (char *(*)()) F963_4078_2290_1;
	R2290[52] = (char *(*)()) F964_4078_2290_1;
	R2290[53] = (char *(*)()) F965_4078_2290_1;
	R2290[54] = (char *(*)()) F951_4078;
	R2290[55] = (char *(*)()) F963_4078_2290_1;
	R2290[56] = (char *(*)()) F957_4078_2290_1;
	R2290[59] = (char *(*)()) F951_4078;
	R2290[60] = (char *(*)()) F957_4078_2290_1;
	R2290[61] = (char *(*)()) F951_4078;
	R2290[62] = (char *(*)()) F957_4078_2290_1;
	{long i; for (i = 63; i < 67; i++) R2290[i] = (char *(*)()) F951_4078;}
	{long i; for (i = 68; i < 87; i++) R2290[i] = (char *(*)()) F951_4078;}
	R2290[115] = (char *(*)()) F1027_14528;
	R2290[116] = (char *(*)()) F735_2757_2290_1;
	R2290[118] = (char *(*)()) F735_2757_2290_1;
	{long i; for (i = 380; i < 382; i++) R2290[i] = (char *(*)()) F1291_4913_2290_1;}
	R2290[723] = (char *(*)()) F1630_18246;
	{long i; for (i = 725; i < 727; i++) R2290[i] = (char *(*)()) F1630_18246;}
	R2290[757] = (char *(*)()) F951_4078;
	{long i; for (i = 770; i < 772; i++) R2290[i] = (char *(*)()) F1630_18246;}
	{long i; for (i = 773; i < 775; i++) R2290[i] = (char *(*)()) F1630_18246;}
	{long i; for (i = 777; i < 780; i++) R2290[i] = (char *(*)()) F1630_18246;}
	{long i; for (i = 781; i < 783; i++) R2290[i] = (char *(*)()) F1630_18246;}
	R2290[908] = (char *(*)()) F1291_4913_2290_1;
	{long i; for (i = 929; i < 932; i++) R2290[i] = (char *(*)()) F1291_4913_2290_1;}
	{long i; for (i = 933; i < 937; i++) R2290[i] = (char *(*)()) F1291_4913_2290_1;}
}
static EIF_REFERENCE F913_3517_2290_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F913_3517(Current);
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
static EIF_REFERENCE F914_3517_2290_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F914_3517(Current);
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
static EIF_REFERENCE F952_4078_2290_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_16 r = F952_4078(Current);
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
static EIF_REFERENCE F953_4078_2290_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_POINTER r = F953_4078(Current);
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
static EIF_REFERENCE F954_4078_2290_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_32 r = F954_4078(Current);
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
static EIF_REFERENCE F955_4078_2290_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_8 r = F955_4078(Current);
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
static EIF_REFERENCE F956_4078_2290_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F956_4078(Current);
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
static EIF_REFERENCE F957_4078_2290_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F957_4078(Current);
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
static EIF_REFERENCE F958_4078_2290_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_64 r = F958_4078(Current);
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
static EIF_REFERENCE F959_4078_2290_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_8 r = F959_4078(Current);
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
static EIF_REFERENCE F960_4078_2290_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_16 r = F960_4078(Current);
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
static EIF_REFERENCE F961_4078_2290_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F961_4078(Current);
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
static EIF_REFERENCE F962_4078_2290_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_64 r = F962_4078(Current);
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
static EIF_REFERENCE F963_4078_2290_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F963_4078(Current);
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
static EIF_REFERENCE F964_4078_2290_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_64 r = F964_4078(Current);
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
static EIF_REFERENCE F965_4078_2290_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F965_4078(Current);
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
static EIF_REFERENCE F735_2757_2290_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F735_2757(Current);
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
static EIF_REFERENCE F1291_4913_2290_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F1291_4913(Current);
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

char *(*R2291[937])();
void R2291_init () {
	R2291[0] = (char *(*)()) F912_3528;
	R2291[1] = (char *(*)()) F913_3528;
	R2291[2] = (char *(*)()) F914_3528;
	R2291[3] = (char *(*)()) F912_3528;
	R2291[4] = (char *(*)()) F914_3528;
	R2291[5] = (char *(*)()) F913_3528;
	R2291[6] = (char *(*)()) F912_3528;
	R2291[39] = (char *(*)()) F852_3270;
	R2291[40] = (char *(*)()) F853_3270;
	R2291[41] = (char *(*)()) F854_3270;
	R2291[42] = (char *(*)()) F855_3270;
	R2291[43] = (char *(*)()) F856_3270;
	R2291[44] = (char *(*)()) F857_3270;
	R2291[45] = (char *(*)()) F858_3270;
	R2291[46] = (char *(*)()) F859_3270;
	R2291[47] = (char *(*)()) F860_3270;
	R2291[48] = (char *(*)()) F861_3270;
	R2291[49] = (char *(*)()) F862_3270;
	R2291[50] = (char *(*)()) F863_3270;
	R2291[51] = (char *(*)()) F864_3270;
	R2291[52] = (char *(*)()) F865_3270;
	R2291[53] = (char *(*)()) F866_3270;
	R2291[54] = (char *(*)()) F852_3270;
	R2291[55] = (char *(*)()) F864_3270;
	R2291[56] = (char *(*)()) F858_3270;
	R2291[59] = (char *(*)()) F852_3270;
	R2291[60] = (char *(*)()) F858_3270;
	R2291[61] = (char *(*)()) F852_3270;
	R2291[62] = (char *(*)()) F858_3270;
	{long i; for (i = 63; i < 67; i++) R2291[i] = (char *(*)()) F852_3270;}
	{long i; for (i = 68; i < 87; i++) R2291[i] = (char *(*)()) F852_3270;}
	R2291[115] = (char *(*)()) F620_2710;
	R2291[116] = (char *(*)()) F613_2610;
	R2291[118] = (char *(*)()) F613_2610;
	{long i; for (i = 380; i < 382; i++) R2291[i] = (char *(*)()) F1291_4934;}
	R2291[723] = (char *(*)()) F852_3270;
	{long i; for (i = 725; i < 727; i++) R2291[i] = (char *(*)()) F852_3270;}
	R2291[757] = (char *(*)()) F852_3270;
	{long i; for (i = 770; i < 772; i++) R2291[i] = (char *(*)()) F852_3270;}
	{long i; for (i = 773; i < 775; i++) R2291[i] = (char *(*)()) F852_3270;}
	{long i; for (i = 777; i < 780; i++) R2291[i] = (char *(*)()) F852_3270;}
	{long i; for (i = 781; i < 783; i++) R2291[i] = (char *(*)()) F852_3270;}
	R2291[908] = (char *(*)()) F1291_4934;
	{long i; for (i = 929; i < 932; i++) R2291[i] = (char *(*)()) F1291_4934;}
	{long i; for (i = 933; i < 937; i++) R2291[i] = (char *(*)()) F1291_4934;}
}

char *(*R2292[937])();
void R2292_init () {
	R2292[0] = (char *(*)()) F912_3534;
	R2292[1] = (char *(*)()) F913_3534;
	R2292[2] = (char *(*)()) F914_3534;
	R2292[3] = (char *(*)()) F912_3534;
	R2292[4] = (char *(*)()) F914_3534;
	R2292[5] = (char *(*)()) F913_3534;
	R2292[6] = (char *(*)()) F912_3534;
	R2292[39] = (char *(*)()) F951_4104;
	R2292[40] = (char *(*)()) F952_4104;
	R2292[41] = (char *(*)()) F953_4104;
	R2292[42] = (char *(*)()) F954_4104;
	R2292[43] = (char *(*)()) F955_4104;
	R2292[44] = (char *(*)()) F956_4104;
	R2292[45] = (char *(*)()) F957_4104;
	R2292[46] = (char *(*)()) F958_4104;
	R2292[47] = (char *(*)()) F959_4104;
	R2292[48] = (char *(*)()) F960_4104;
	R2292[49] = (char *(*)()) F961_4104;
	R2292[50] = (char *(*)()) F962_4104;
	R2292[51] = (char *(*)()) F963_4104;
	R2292[52] = (char *(*)()) F964_4104;
	R2292[53] = (char *(*)()) F965_4104;
	R2292[54] = (char *(*)()) F951_4104;
	R2292[55] = (char *(*)()) F963_4104;
	R2292[56] = (char *(*)()) F957_4104;
	R2292[59] = (char *(*)()) F951_4104;
	R2292[60] = (char *(*)()) F957_4104;
	R2292[61] = (char *(*)()) F951_4104;
	R2292[62] = (char *(*)()) F957_4104;
	{long i; for (i = 63; i < 67; i++) R2292[i] = (char *(*)()) F951_4104;}
	{long i; for (i = 68; i < 87; i++) R2292[i] = (char *(*)()) F951_4104;}
	R2292[115] = (char *(*)()) F1027_14522;
	R2292[116] = (char *(*)()) F735_2765;
	R2292[118] = (char *(*)()) F735_2765;
	{long i; for (i = 380; i < 382; i++) R2292[i] = (char *(*)()) F1291_4989;}
	R2292[723] = (char *(*)()) F1630_18256;
	{long i; for (i = 725; i < 727; i++) R2292[i] = (char *(*)()) F1630_18256;}
	R2292[757] = (char *(*)()) F951_4104;
	{long i; for (i = 770; i < 772; i++) R2292[i] = (char *(*)()) F1630_18256;}
	{long i; for (i = 773; i < 775; i++) R2292[i] = (char *(*)()) F1630_18256;}
	{long i; for (i = 777; i < 780; i++) R2292[i] = (char *(*)()) F1630_18256;}
	{long i; for (i = 781; i < 783; i++) R2292[i] = (char *(*)()) F1630_18256;}
	R2292[908] = (char *(*)()) F1291_4989;
	{long i; for (i = 929; i < 932; i++) R2292[i] = (char *(*)()) F1291_4989;}
	{long i; for (i = 933; i < 937; i++) R2292[i] = (char *(*)()) F1291_4989;}
}

char *(*R2293[937])();
void R2293_init () {
	R2293[0] = (char *(*)()) F605_2613;
	R2293[1] = (char *(*)()) F613_2613;
	R2293[2] = (char *(*)()) F618_2613;
	R2293[3] = (char *(*)()) F605_2613;
	R2293[4] = (char *(*)()) F618_2613;
	R2293[5] = (char *(*)()) F613_2613;
	R2293[6] = (char *(*)()) F605_2613;
	R2293[39] = (char *(*)()) F951_4088;
	R2293[40] = (char *(*)()) F952_4088;
	R2293[41] = (char *(*)()) F953_4088;
	R2293[42] = (char *(*)()) F954_4088;
	R2293[43] = (char *(*)()) F955_4088;
	R2293[44] = (char *(*)()) F956_4088;
	R2293[45] = (char *(*)()) F957_4088;
	R2293[46] = (char *(*)()) F958_4088;
	R2293[47] = (char *(*)()) F959_4088;
	R2293[48] = (char *(*)()) F960_4088;
	R2293[49] = (char *(*)()) F961_4088;
	R2293[50] = (char *(*)()) F962_4088;
	R2293[51] = (char *(*)()) F963_4088;
	R2293[52] = (char *(*)()) F964_4088;
	R2293[53] = (char *(*)()) F965_4088;
	R2293[54] = (char *(*)()) F951_4088;
	R2293[55] = (char *(*)()) F963_4088;
	R2293[56] = (char *(*)()) F957_4088;
	R2293[59] = (char *(*)()) F951_4088;
	R2293[60] = (char *(*)()) F957_4088;
	R2293[61] = (char *(*)()) F951_4088;
	R2293[62] = (char *(*)()) F957_4088;
	{long i; for (i = 63; i < 67; i++) R2293[i] = (char *(*)()) F951_4088;}
	{long i; for (i = 68; i < 87; i++) R2293[i] = (char *(*)()) F951_4088;}
	R2293[115] = (char *(*)()) F605_2613;
	R2293[116] = (char *(*)()) F613_2613;
	R2293[118] = (char *(*)()) F613_2613;
	{long i; for (i = 380; i < 382; i++) R2293[i] = (char *(*)()) F612_2613;}
	R2293[723] = (char *(*)()) F605_2613;
	{long i; for (i = 725; i < 727; i++) R2293[i] = (char *(*)()) F605_2613;}
	R2293[757] = (char *(*)()) F951_4088;
	{long i; for (i = 770; i < 772; i++) R2293[i] = (char *(*)()) F605_2613;}
	{long i; for (i = 773; i < 775; i++) R2293[i] = (char *(*)()) F605_2613;}
	{long i; for (i = 777; i < 780; i++) R2293[i] = (char *(*)()) F605_2613;}
	{long i; for (i = 781; i < 783; i++) R2293[i] = (char *(*)()) F605_2613;}
	R2293[908] = (char *(*)()) F612_2613;
	{long i; for (i = 929; i < 932; i++) R2293[i] = (char *(*)()) F612_2613;}
	{long i; for (i = 933; i < 937; i++) R2293[i] = (char *(*)()) F612_2613;}
}

char *(*R2301[937])();
void R2301_init () {
	R2301[0] = (char *(*)()) F620_2713;
	R2301[1] = (char *(*)()) F626_2713_2301_4;
	R2301[2] = (char *(*)()) F632_2713_2301_4;
	R2301[3] = (char *(*)()) F620_2713;
	R2301[4] = (char *(*)()) F632_2713_2301_4;
	R2301[5] = (char *(*)()) F626_2713_2301_4;
	R2301[6] = (char *(*)()) F620_2713;
	R2301[39] = (char *(*)()) F951_4110;
	R2301[40] = (char *(*)()) F952_4110_2301_4;
	R2301[41] = (char *(*)()) F953_4110_2301_4;
	R2301[42] = (char *(*)()) F954_4110_2301_4;
	R2301[43] = (char *(*)()) F955_4110_2301_4;
	R2301[44] = (char *(*)()) F956_4110_2301_4;
	R2301[45] = (char *(*)()) F957_4110_2301_4;
	R2301[46] = (char *(*)()) F958_4110_2301_4;
	R2301[47] = (char *(*)()) F959_4110_2301_4;
	R2301[48] = (char *(*)()) F960_4110_2301_4;
	R2301[49] = (char *(*)()) F961_4110_2301_4;
	R2301[50] = (char *(*)()) F962_4110_2301_4;
	R2301[51] = (char *(*)()) F963_4110_2301_4;
	R2301[52] = (char *(*)()) F964_4110_2301_4;
	R2301[53] = (char *(*)()) F965_4110_2301_4;
	R2301[54] = (char *(*)()) F951_4110;
	R2301[55] = (char *(*)()) F963_4110_2301_4;
	R2301[56] = (char *(*)()) F957_4110_2301_4;
	R2301[59] = (char *(*)()) F951_4110;
	R2301[60] = (char *(*)()) F957_4110_2301_4;
	R2301[61] = (char *(*)()) F951_4110;
	R2301[62] = (char *(*)()) F957_4110_2301_4;
	{long i; for (i = 63; i < 67; i++) R2301[i] = (char *(*)()) F951_4110;}
	{long i; for (i = 68; i < 87; i++) R2301[i] = (char *(*)()) F951_4110;}
	R2301[115] = (char *(*)()) F620_2713;
	R2301[116] = (char *(*)()) F613_2604_2301_4;
	R2301[118] = (char *(*)()) F613_2604_2301_4;
	{long i; for (i = 380; i < 382; i++) R2301[i] = (char *(*)()) F625_2713_2301_4;}
	R2301[723] = (char *(*)()) F620_2713;
	{long i; for (i = 725; i < 727; i++) R2301[i] = (char *(*)()) F620_2713;}
	R2301[757] = (char *(*)()) F951_4110;
	{long i; for (i = 770; i < 772; i++) R2301[i] = (char *(*)()) F620_2713;}
	{long i; for (i = 773; i < 775; i++) R2301[i] = (char *(*)()) F620_2713;}
	{long i; for (i = 777; i < 780; i++) R2301[i] = (char *(*)()) F620_2713;}
	{long i; for (i = 781; i < 783; i++) R2301[i] = (char *(*)()) F620_2713;}
	R2301[908] = (char *(*)()) F625_2713_2301_4;
	{long i; for (i = 929; i < 932; i++) R2301[i] = (char *(*)()) F625_2713_2301_4;}
	{long i; for (i = 933; i < 937; i++) R2301[i] = (char *(*)()) F625_2713_2301_4;}
}
static void F626_2713_2301_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F626_2713(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F632_2713_2301_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F632_2713(Current, *(EIF_BOOLEAN *)arg1);
}
static void F952_4110_2301_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F952_4110(Current, *(EIF_NATURAL_16 *)arg1);
}
static void F953_4110_2301_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F953_4110(Current, *(EIF_POINTER *)arg1);
}
static void F954_4110_2301_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F954_4110(Current, *(EIF_REAL_32 *)arg1);
}
static void F955_4110_2301_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F955_4110(Current, *(EIF_NATURAL_8 *)arg1);
}
static void F956_4110_2301_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F956_4110(Current, *(EIF_CHARACTER_8 *)arg1);
}
static void F957_4110_2301_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F957_4110(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F958_4110_2301_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F958_4110(Current, *(EIF_REAL_64 *)arg1);
}
static void F959_4110_2301_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F959_4110(Current, *(EIF_INTEGER_8 *)arg1);
}
static void F960_4110_2301_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F960_4110(Current, *(EIF_INTEGER_16 *)arg1);
}
static void F961_4110_2301_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F961_4110(Current, *(EIF_NATURAL_32 *)arg1);
}
static void F962_4110_2301_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F962_4110(Current, *(EIF_INTEGER_64 *)arg1);
}
static void F963_4110_2301_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F963_4110(Current, *(EIF_BOOLEAN *)arg1);
}
static void F964_4110_2301_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F964_4110(Current, *(EIF_NATURAL_64 *)arg1);
}
static void F965_4110_2301_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F965_4110(Current, *(EIF_CHARACTER_32 *)arg1);
}
static void F613_2604_2301_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F613_2604(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F625_2713_2301_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F625_2713(Current, *(EIF_CHARACTER_8 *)arg1);
}

char *(*R2302[783])();
void R2302_init () {
	R2302[0] = (char *(*)()) F912_3520;
	R2302[1] = (char *(*)()) F913_3520;
	R2302[2] = (char *(*)()) F914_3520;
	R2302[3] = (char *(*)()) F912_3520;
	R2302[4] = (char *(*)()) F914_3520;
	R2302[5] = (char *(*)()) F913_3520;
	R2302[6] = (char *(*)()) F912_3520;
	R2302[39] = (char *(*)()) F951_4083;
	R2302[40] = (char *(*)()) F952_4083;
	R2302[41] = (char *(*)()) F953_4083;
	R2302[42] = (char *(*)()) F954_4083;
	R2302[43] = (char *(*)()) F955_4083;
	R2302[44] = (char *(*)()) F956_4083;
	R2302[45] = (char *(*)()) F957_4083;
	R2302[46] = (char *(*)()) F958_4083;
	R2302[47] = (char *(*)()) F959_4083;
	R2302[48] = (char *(*)()) F960_4083;
	R2302[49] = (char *(*)()) F961_4083;
	R2302[50] = (char *(*)()) F962_4083;
	R2302[51] = (char *(*)()) F963_4083;
	R2302[52] = (char *(*)()) F964_4083;
	R2302[53] = (char *(*)()) F965_4083;
	R2302[54] = (char *(*)()) F951_4083;
	R2302[55] = (char *(*)()) F963_4083;
	R2302[56] = (char *(*)()) F957_4083;
	R2302[59] = (char *(*)()) F951_4083;
	R2302[60] = (char *(*)()) F957_4083;
	R2302[61] = (char *(*)()) F951_4083;
	R2302[62] = (char *(*)()) F957_4083;
	{long i; for (i = 63; i < 67; i++) R2302[i] = (char *(*)()) F951_4083;}
	{long i; for (i = 68; i < 87; i++) R2302[i] = (char *(*)()) F951_4083;}
	R2302[116] = (char *(*)()) F735_2756;
	R2302[118] = (char *(*)()) F735_2756;
	R2302[723] = (char *(*)()) F1630_18247;
	{long i; for (i = 725; i < 727; i++) R2302[i] = (char *(*)()) F1630_18247;}
	R2302[757] = (char *(*)()) F951_4083;
	{long i; for (i = 770; i < 772; i++) R2302[i] = (char *(*)()) F1630_18247;}
	{long i; for (i = 773; i < 775; i++) R2302[i] = (char *(*)()) F1630_18247;}
	{long i; for (i = 777; i < 780; i++) R2302[i] = (char *(*)()) F1630_18247;}
	{long i; for (i = 781; i < 783; i++) R2302[i] = (char *(*)()) F1630_18247;}
}

char *(*R2305[937])();
void R2305_init () {
	R2305[0] = (char *(*)()) F605_2608;
	R2305[1] = (char *(*)()) F613_2608;
	R2305[2] = (char *(*)()) F618_2608;
	R2305[3] = (char *(*)()) F605_2608;
	R2305[4] = (char *(*)()) F618_2608;
	R2305[5] = (char *(*)()) F613_2608;
	R2305[6] = (char *(*)()) F605_2608;
	R2305[39] = (char *(*)()) F605_2608;
	R2305[40] = (char *(*)()) F607_2608;
	R2305[41] = (char *(*)()) F608_2608;
	R2305[42] = (char *(*)()) F610_2608;
	R2305[43] = (char *(*)()) F611_2608;
	R2305[44] = (char *(*)()) F612_2608;
	R2305[45] = (char *(*)()) F613_2608;
	R2305[46] = (char *(*)()) F614_2608;
	R2305[47] = (char *(*)()) F615_2608;
	R2305[48] = (char *(*)()) F616_2608;
	R2305[49] = (char *(*)()) F609_2608;
	R2305[50] = (char *(*)()) F617_2608;
	R2305[51] = (char *(*)()) F618_2608;
	R2305[52] = (char *(*)()) F619_2608;
	R2305[53] = (char *(*)()) F606_2608;
	R2305[54] = (char *(*)()) F605_2608;
	R2305[55] = (char *(*)()) F618_2608;
	R2305[56] = (char *(*)()) F613_2608;
	R2305[59] = (char *(*)()) F605_2608;
	R2305[60] = (char *(*)()) F613_2608;
	R2305[61] = (char *(*)()) F605_2608;
	R2305[62] = (char *(*)()) F613_2608;
	{long i; for (i = 63; i < 67; i++) R2305[i] = (char *(*)()) F605_2608;}
	{long i; for (i = 68; i < 87; i++) R2305[i] = (char *(*)()) F605_2608;}
	R2305[115] = (char *(*)()) F605_2608;
	R2305[116] = (char *(*)()) F613_2608;
	R2305[118] = (char *(*)()) F613_2608;
	{long i; for (i = 380; i < 382; i++) R2305[i] = (char *(*)()) F612_2608;}
	R2305[723] = (char *(*)()) F605_2608;
	{long i; for (i = 725; i < 727; i++) R2305[i] = (char *(*)()) F605_2608;}
	R2305[757] = (char *(*)()) F605_2608;
	{long i; for (i = 770; i < 772; i++) R2305[i] = (char *(*)()) F605_2608;}
	{long i; for (i = 773; i < 775; i++) R2305[i] = (char *(*)()) F605_2608;}
	{long i; for (i = 777; i < 780; i++) R2305[i] = (char *(*)()) F605_2608;}
	{long i; for (i = 781; i < 783; i++) R2305[i] = (char *(*)()) F605_2608;}
	R2305[908] = (char *(*)()) F612_2608;
	{long i; for (i = 929; i < 932; i++) R2305[i] = (char *(*)()) F612_2608;}
	{long i; for (i = 933; i < 937; i++) R2305[i] = (char *(*)()) F612_2608;}
}

char *(*R2306[937])();
void R2306_init () {
	R2306[0] = (char *(*)()) F912_3526;
	R2306[1] = (char *(*)()) F913_3526;
	R2306[2] = (char *(*)()) F914_3526;
	R2306[3] = (char *(*)()) F912_3526;
	R2306[4] = (char *(*)()) F914_3526;
	R2306[5] = (char *(*)()) F913_3526;
	R2306[6] = (char *(*)()) F912_3526;
	R2306[39] = (char *(*)()) F882_3332;
	R2306[40] = (char *(*)()) F883_3332;
	R2306[41] = (char *(*)()) F884_3332;
	R2306[42] = (char *(*)()) F885_3332;
	R2306[43] = (char *(*)()) F886_3332;
	R2306[44] = (char *(*)()) F887_3332;
	R2306[45] = (char *(*)()) F888_3332;
	R2306[46] = (char *(*)()) F889_3332;
	R2306[47] = (char *(*)()) F890_3332;
	R2306[48] = (char *(*)()) F891_3332;
	R2306[49] = (char *(*)()) F892_3332;
	R2306[50] = (char *(*)()) F893_3332;
	R2306[51] = (char *(*)()) F894_3332;
	R2306[52] = (char *(*)()) F895_3332;
	R2306[53] = (char *(*)()) F896_3332;
	R2306[54] = (char *(*)()) F882_3332;
	R2306[55] = (char *(*)()) F894_3332;
	R2306[56] = (char *(*)()) F888_3332;
	R2306[59] = (char *(*)()) F882_3332;
	R2306[60] = (char *(*)()) F888_3332;
	R2306[61] = (char *(*)()) F882_3332;
	R2306[62] = (char *(*)()) F888_3332;
	{long i; for (i = 63; i < 67; i++) R2306[i] = (char *(*)()) F882_3332;}
	{long i; for (i = 68; i < 87; i++) R2306[i] = (char *(*)()) F882_3332;}
	R2306[115] = (char *(*)()) F1027_14523;
	R2306[116] = (char *(*)()) F735_2758;
	R2306[118] = (char *(*)()) F735_2758;
	{long i; for (i = 380; i < 382; i++) R2306[i] = (char *(*)()) F1291_4932;}
	R2306[723] = (char *(*)()) F882_3332;
	{long i; for (i = 725; i < 727; i++) R2306[i] = (char *(*)()) F882_3332;}
	R2306[757] = (char *(*)()) F882_3332;
	{long i; for (i = 770; i < 772; i++) R2306[i] = (char *(*)()) F882_3332;}
	{long i; for (i = 773; i < 775; i++) R2306[i] = (char *(*)()) F882_3332;}
	{long i; for (i = 777; i < 780; i++) R2306[i] = (char *(*)()) F882_3332;}
	{long i; for (i = 781; i < 783; i++) R2306[i] = (char *(*)()) F882_3332;}
	R2306[908] = (char *(*)()) F1291_4932;
	{long i; for (i = 929; i < 932; i++) R2306[i] = (char *(*)()) F1291_4932;}
	{long i; for (i = 933; i < 937; i++) R2306[i] = (char *(*)()) F1291_4932;}
}

char *(*R2307[783])();
void R2307_init () {
	R2307[0] = (char *(*)()) F912_3535;
	R2307[1] = (char *(*)()) F913_3535;
	R2307[2] = (char *(*)()) F914_3535;
	R2307[3] = (char *(*)()) F912_3535;
	R2307[4] = (char *(*)()) F914_3535;
	R2307[5] = (char *(*)()) F913_3535;
	R2307[6] = (char *(*)()) F912_3535;
	R2307[39] = (char *(*)()) F951_4105;
	R2307[40] = (char *(*)()) F952_4105;
	R2307[41] = (char *(*)()) F953_4105;
	R2307[42] = (char *(*)()) F954_4105;
	R2307[43] = (char *(*)()) F955_4105;
	R2307[44] = (char *(*)()) F956_4105;
	R2307[45] = (char *(*)()) F957_4105;
	R2307[46] = (char *(*)()) F958_4105;
	R2307[47] = (char *(*)()) F959_4105;
	R2307[48] = (char *(*)()) F960_4105;
	R2307[49] = (char *(*)()) F961_4105;
	R2307[50] = (char *(*)()) F962_4105;
	R2307[51] = (char *(*)()) F963_4105;
	R2307[52] = (char *(*)()) F964_4105;
	R2307[53] = (char *(*)()) F965_4105;
	R2307[54] = (char *(*)()) F951_4105;
	R2307[55] = (char *(*)()) F963_4105;
	R2307[56] = (char *(*)()) F957_4105;
	R2307[59] = (char *(*)()) F951_4105;
	R2307[60] = (char *(*)()) F957_4105;
	R2307[61] = (char *(*)()) F951_4105;
	R2307[62] = (char *(*)()) F957_4105;
	{long i; for (i = 63; i < 67; i++) R2307[i] = (char *(*)()) F951_4105;}
	{long i; for (i = 68; i < 87; i++) R2307[i] = (char *(*)()) F951_4105;}
	R2307[723] = (char *(*)()) F852_3264;
	{long i; for (i = 725; i < 727; i++) R2307[i] = (char *(*)()) F852_3264;}
	R2307[757] = (char *(*)()) F951_4105;
	{long i; for (i = 770; i < 772; i++) R2307[i] = (char *(*)()) F852_3264;}
	{long i; for (i = 773; i < 775; i++) R2307[i] = (char *(*)()) F852_3264;}
	{long i; for (i = 777; i < 780; i++) R2307[i] = (char *(*)()) F852_3264;}
	{long i; for (i = 781; i < 783; i++) R2307[i] = (char *(*)()) F852_3264;}
}

char *(*R2308[937])();
void R2308_init () {
	R2308[0] = (char *(*)()) F912_3536;
	R2308[1] = (char *(*)()) F913_3536;
	R2308[2] = (char *(*)()) F914_3536;
	R2308[3] = (char *(*)()) F912_3536;
	R2308[4] = (char *(*)()) F914_3536;
	R2308[5] = (char *(*)()) F913_3536;
	R2308[6] = (char *(*)()) F912_3536;
	R2308[39] = (char *(*)()) F951_4106;
	R2308[40] = (char *(*)()) F952_4106;
	R2308[41] = (char *(*)()) F953_4106;
	R2308[42] = (char *(*)()) F954_4106;
	R2308[43] = (char *(*)()) F955_4106;
	R2308[44] = (char *(*)()) F956_4106;
	R2308[45] = (char *(*)()) F957_4106;
	R2308[46] = (char *(*)()) F958_4106;
	R2308[47] = (char *(*)()) F959_4106;
	R2308[48] = (char *(*)()) F960_4106;
	R2308[49] = (char *(*)()) F961_4106;
	R2308[50] = (char *(*)()) F962_4106;
	R2308[51] = (char *(*)()) F963_4106;
	R2308[52] = (char *(*)()) F964_4106;
	R2308[53] = (char *(*)()) F965_4106;
	R2308[54] = (char *(*)()) F951_4106;
	R2308[55] = (char *(*)()) F963_4106;
	R2308[56] = (char *(*)()) F957_4106;
	R2308[59] = (char *(*)()) F951_4106;
	R2308[60] = (char *(*)()) F957_4106;
	R2308[61] = (char *(*)()) F951_4106;
	R2308[62] = (char *(*)()) F957_4106;
	{long i; for (i = 63; i < 67; i++) R2308[i] = (char *(*)()) F951_4106;}
	{long i; for (i = 68; i < 87; i++) R2308[i] = (char *(*)()) F951_4106;}
	R2308[115] = (char *(*)()) F1027_14525;
	R2308[116] = (char *(*)()) F735_2764;
	R2308[118] = (char *(*)()) F735_2764;
	{long i; for (i = 380; i < 382; i++) R2308[i] = (char *(*)()) F1291_4991;}
	R2308[723] = (char *(*)()) F1630_18258;
	{long i; for (i = 725; i < 727; i++) R2308[i] = (char *(*)()) F1630_18258;}
	R2308[757] = (char *(*)()) F951_4106;
	{long i; for (i = 770; i < 772; i++) R2308[i] = (char *(*)()) F1630_18258;}
	{long i; for (i = 773; i < 775; i++) R2308[i] = (char *(*)()) F1630_18258;}
	{long i; for (i = 777; i < 780; i++) R2308[i] = (char *(*)()) F1630_18258;}
	{long i; for (i = 781; i < 783; i++) R2308[i] = (char *(*)()) F1630_18258;}
	R2308[908] = (char *(*)()) F1291_4991;
	{long i; for (i = 929; i < 932; i++) R2308[i] = (char *(*)()) F1291_4991;}
	{long i; for (i = 933; i < 937; i++) R2308[i] = (char *(*)()) F1291_4991;}
}

char *(*R2359[937])();
void R2359_init () {
	R2359[0] = (char *(*)()) F912_3527;
	R2359[1] = (char *(*)()) F913_3527;
	R2359[2] = (char *(*)()) F914_3527;
	R2359[3] = (char *(*)()) F912_3527;
	R2359[4] = (char *(*)()) F914_3527;
	R2359[5] = (char *(*)()) F913_3527;
	R2359[6] = (char *(*)()) F912_3527;
	R2359[39] = (char *(*)()) F882_3333;
	R2359[40] = (char *(*)()) F883_3333;
	R2359[41] = (char *(*)()) F884_3333;
	R2359[42] = (char *(*)()) F885_3333;
	R2359[43] = (char *(*)()) F886_3333;
	R2359[44] = (char *(*)()) F887_3333;
	R2359[45] = (char *(*)()) F888_3333;
	R2359[46] = (char *(*)()) F889_3333;
	R2359[47] = (char *(*)()) F890_3333;
	R2359[48] = (char *(*)()) F891_3333;
	R2359[49] = (char *(*)()) F892_3333;
	R2359[50] = (char *(*)()) F893_3333;
	R2359[51] = (char *(*)()) F894_3333;
	R2359[52] = (char *(*)()) F895_3333;
	R2359[53] = (char *(*)()) F896_3333;
	R2359[54] = (char *(*)()) F882_3333;
	R2359[55] = (char *(*)()) F894_3333;
	R2359[56] = (char *(*)()) F888_3333;
	R2359[59] = (char *(*)()) F882_3333;
	R2359[60] = (char *(*)()) F888_3333;
	R2359[61] = (char *(*)()) F882_3333;
	R2359[62] = (char *(*)()) F888_3333;
	{long i; for (i = 63; i < 67; i++) R2359[i] = (char *(*)()) F882_3333;}
	{long i; for (i = 68; i < 87; i++) R2359[i] = (char *(*)()) F882_3333;}
	R2359[115] = (char *(*)()) F1027_14526;
	{long i; for (i = 380; i < 382; i++) R2359[i] = (char *(*)()) F1291_4933;}
	R2359[723] = (char *(*)()) F882_3333;
	{long i; for (i = 725; i < 727; i++) R2359[i] = (char *(*)()) F882_3333;}
	R2359[757] = (char *(*)()) F882_3333;
	{long i; for (i = 770; i < 772; i++) R2359[i] = (char *(*)()) F882_3333;}
	{long i; for (i = 773; i < 775; i++) R2359[i] = (char *(*)()) F882_3333;}
	{long i; for (i = 777; i < 780; i++) R2359[i] = (char *(*)()) F882_3333;}
	{long i; for (i = 781; i < 783; i++) R2359[i] = (char *(*)()) F882_3333;}
	R2359[908] = (char *(*)()) F1291_4933;
	{long i; for (i = 929; i < 932; i++) R2359[i] = (char *(*)()) F1291_4933;}
	{long i; for (i = 933; i < 937; i++) R2359[i] = (char *(*)()) F1291_4933;}
}

char *(*R2360[937])();
void R2360_init () {
	R2360[0] = (char *(*)()) F912_3537;
	R2360[1] = (char *(*)()) F913_3537;
	R2360[2] = (char *(*)()) F914_3537;
	R2360[3] = (char *(*)()) F912_3537;
	R2360[4] = (char *(*)()) F914_3537;
	R2360[5] = (char *(*)()) F913_3537;
	R2360[6] = (char *(*)()) F912_3537;
	R2360[39] = (char *(*)()) F951_4107;
	R2360[40] = (char *(*)()) F952_4107;
	R2360[41] = (char *(*)()) F953_4107;
	R2360[42] = (char *(*)()) F954_4107;
	R2360[43] = (char *(*)()) F955_4107;
	R2360[44] = (char *(*)()) F956_4107;
	R2360[45] = (char *(*)()) F957_4107;
	R2360[46] = (char *(*)()) F958_4107;
	R2360[47] = (char *(*)()) F959_4107;
	R2360[48] = (char *(*)()) F960_4107;
	R2360[49] = (char *(*)()) F961_4107;
	R2360[50] = (char *(*)()) F962_4107;
	R2360[51] = (char *(*)()) F963_4107;
	R2360[52] = (char *(*)()) F964_4107;
	R2360[53] = (char *(*)()) F965_4107;
	R2360[54] = (char *(*)()) F951_4107;
	R2360[55] = (char *(*)()) F963_4107;
	R2360[56] = (char *(*)()) F957_4107;
	R2360[59] = (char *(*)()) F951_4107;
	R2360[60] = (char *(*)()) F957_4107;
	R2360[61] = (char *(*)()) F951_4107;
	R2360[62] = (char *(*)()) F957_4107;
	{long i; for (i = 63; i < 67; i++) R2360[i] = (char *(*)()) F951_4107;}
	{long i; for (i = 68; i < 87; i++) R2360[i] = (char *(*)()) F951_4107;}
	{long i; for (i = 380; i < 382; i++) R2360[i] = (char *(*)()) F1291_4992;}
	R2360[723] = (char *(*)()) F1630_18257;
	{long i; for (i = 725; i < 727; i++) R2360[i] = (char *(*)()) F1630_18257;}
	R2360[757] = (char *(*)()) F951_4107;
	{long i; for (i = 770; i < 772; i++) R2360[i] = (char *(*)()) F1630_18257;}
	{long i; for (i = 773; i < 775; i++) R2360[i] = (char *(*)()) F1630_18257;}
	{long i; for (i = 777; i < 780; i++) R2360[i] = (char *(*)()) F1630_18257;}
	{long i; for (i = 781; i < 783; i++) R2360[i] = (char *(*)()) F1630_18257;}
	R2360[908] = (char *(*)()) F1820_7038;
	{long i; for (i = 929; i < 932; i++) R2360[i] = (char *(*)()) F1291_4992;}
	{long i; for (i = 933; i < 937; i++) R2360[i] = (char *(*)()) F1291_4992;}
}


#ifdef __cplusplus
}
#endif
