#include "epoly7.h"
#include "../E1/eoffsets.h"


#ifdef __cplusplus
extern "C" {
#endif

char *(*R2686[783])();
void R2686_init () {
	R2686[0] = (char *(*)()) F605_2603;
	R2686[1] = (char *(*)()) F613_2603_2686_137;
	R2686[2] = (char *(*)()) F618_2603_2686_137;
	R2686[3] = (char *(*)()) F605_2603;
	R2686[4] = (char *(*)()) F618_2603_2686_137;
	R2686[5] = (char *(*)()) F613_2603_2686_137;
	R2686[6] = (char *(*)()) F605_2603;
	R2686[39] = (char *(*)()) F605_2603;
	R2686[40] = (char *(*)()) F607_2603_2686_137;
	R2686[41] = (char *(*)()) F608_2603_2686_137;
	R2686[42] = (char *(*)()) F610_2603_2686_137;
	R2686[43] = (char *(*)()) F611_2603_2686_137;
	R2686[44] = (char *(*)()) F612_2603_2686_137;
	R2686[45] = (char *(*)()) F613_2603_2686_137;
	R2686[46] = (char *(*)()) F614_2603_2686_137;
	R2686[47] = (char *(*)()) F615_2603_2686_137;
	R2686[48] = (char *(*)()) F616_2603_2686_137;
	R2686[49] = (char *(*)()) F609_2603_2686_137;
	R2686[50] = (char *(*)()) F617_2603_2686_137;
	R2686[51] = (char *(*)()) F618_2603_2686_137;
	R2686[52] = (char *(*)()) F619_2603_2686_137;
	R2686[53] = (char *(*)()) F606_2603_2686_137;
	R2686[54] = (char *(*)()) F605_2603;
	R2686[55] = (char *(*)()) F618_2603_2686_137;
	R2686[56] = (char *(*)()) F613_2603_2686_137;
	R2686[59] = (char *(*)()) F605_2603;
	R2686[60] = (char *(*)()) F613_2603_2686_137;
	R2686[61] = (char *(*)()) F605_2603;
	R2686[62] = (char *(*)()) F613_2603_2686_137;
	{long i; for (i = 63; i < 67; i++) R2686[i] = (char *(*)()) F605_2603;}
	{long i; for (i = 68; i < 87; i++) R2686[i] = (char *(*)()) F605_2603;}
	R2686[723] = (char *(*)()) F605_2603;
	{long i; for (i = 725; i < 727; i++) R2686[i] = (char *(*)()) F605_2603;}
	R2686[757] = (char *(*)()) F605_2603;
	{long i; for (i = 770; i < 772; i++) R2686[i] = (char *(*)()) F605_2603;}
	{long i; for (i = 773; i < 775; i++) R2686[i] = (char *(*)()) F605_2603;}
	{long i; for (i = 777; i < 780; i++) R2686[i] = (char *(*)()) F605_2603;}
	{long i; for (i = 781; i < 783; i++) R2686[i] = (char *(*)()) F605_2603;}
}
static EIF_INTEGER_32 F613_2603_2686_137 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F613_2603(Current, *(EIF_INTEGER_32 *)arg1, arg2);
}
static EIF_INTEGER_32 F618_2603_2686_137 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F618_2603(Current, *(EIF_BOOLEAN *)arg1, arg2);
}
static EIF_INTEGER_32 F607_2603_2686_137 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F607_2603(Current, *(EIF_NATURAL_16 *)arg1, arg2);
}
static EIF_INTEGER_32 F608_2603_2686_137 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F608_2603(Current, *(EIF_POINTER *)arg1, arg2);
}
static EIF_INTEGER_32 F610_2603_2686_137 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F610_2603(Current, *(EIF_REAL_32 *)arg1, arg2);
}
static EIF_INTEGER_32 F611_2603_2686_137 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F611_2603(Current, *(EIF_NATURAL_8 *)arg1, arg2);
}
static EIF_INTEGER_32 F612_2603_2686_137 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F612_2603(Current, *(EIF_CHARACTER_8 *)arg1, arg2);
}
static EIF_INTEGER_32 F614_2603_2686_137 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F614_2603(Current, *(EIF_REAL_64 *)arg1, arg2);
}
static EIF_INTEGER_32 F615_2603_2686_137 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F615_2603(Current, *(EIF_INTEGER_8 *)arg1, arg2);
}
static EIF_INTEGER_32 F616_2603_2686_137 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F616_2603(Current, *(EIF_INTEGER_16 *)arg1, arg2);
}
static EIF_INTEGER_32 F609_2603_2686_137 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F609_2603(Current, *(EIF_NATURAL_32 *)arg1, arg2);
}
static EIF_INTEGER_32 F617_2603_2686_137 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F617_2603(Current, *(EIF_INTEGER_64 *)arg1, arg2);
}
static EIF_INTEGER_32 F619_2603_2686_137 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F619_2603(Current, *(EIF_NATURAL_64 *)arg1, arg2);
}
static EIF_INTEGER_32 F606_2603_2686_137 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F606_2603(Current, *(EIF_CHARACTER_32 *)arg1, arg2);
}

char *(*R2687[783])();
void R2687_init () {
	R2687[0] = (char *(*)()) F605_2602;
	R2687[1] = (char *(*)()) F613_2602_2687_2;
	R2687[2] = (char *(*)()) F618_2602_2687_2;
	R2687[3] = (char *(*)()) F605_2602;
	R2687[4] = (char *(*)()) F618_2602_2687_2;
	R2687[5] = (char *(*)()) F613_2602_2687_2;
	R2687[6] = (char *(*)()) F605_2602;
	R2687[39] = (char *(*)()) F605_2602;
	R2687[40] = (char *(*)()) F607_2602_2687_2;
	R2687[41] = (char *(*)()) F608_2602_2687_2;
	R2687[42] = (char *(*)()) F610_2602_2687_2;
	R2687[43] = (char *(*)()) F611_2602_2687_2;
	R2687[44] = (char *(*)()) F612_2602_2687_2;
	R2687[45] = (char *(*)()) F613_2602_2687_2;
	R2687[46] = (char *(*)()) F614_2602_2687_2;
	R2687[47] = (char *(*)()) F615_2602_2687_2;
	R2687[48] = (char *(*)()) F616_2602_2687_2;
	R2687[49] = (char *(*)()) F609_2602_2687_2;
	R2687[50] = (char *(*)()) F617_2602_2687_2;
	R2687[51] = (char *(*)()) F618_2602_2687_2;
	R2687[52] = (char *(*)()) F619_2602_2687_2;
	R2687[53] = (char *(*)()) F606_2602_2687_2;
	R2687[54] = (char *(*)()) F605_2602;
	R2687[55] = (char *(*)()) F618_2602_2687_2;
	R2687[56] = (char *(*)()) F613_2602_2687_2;
	R2687[59] = (char *(*)()) F605_2602;
	R2687[60] = (char *(*)()) F613_2602_2687_2;
	R2687[61] = (char *(*)()) F605_2602;
	R2687[62] = (char *(*)()) F613_2602_2687_2;
	{long i; for (i = 63; i < 67; i++) R2687[i] = (char *(*)()) F605_2602;}
	{long i; for (i = 68; i < 87; i++) R2687[i] = (char *(*)()) F605_2602;}
	R2687[723] = (char *(*)()) F605_2602;
	{long i; for (i = 725; i < 727; i++) R2687[i] = (char *(*)()) F605_2602;}
	R2687[757] = (char *(*)()) F605_2602;
	{long i; for (i = 770; i < 772; i++) R2687[i] = (char *(*)()) F605_2602;}
	{long i; for (i = 773; i < 775; i++) R2687[i] = (char *(*)()) F605_2602;}
	{long i; for (i = 777; i < 780; i++) R2687[i] = (char *(*)()) F605_2602;}
	{long i; for (i = 781; i < 783; i++) R2687[i] = (char *(*)()) F605_2602;}
}
static EIF_BOOLEAN F613_2602_2687_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F613_2602(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F618_2602_2687_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F618_2602(Current, *(EIF_BOOLEAN *)arg1);
}
static EIF_BOOLEAN F607_2602_2687_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F607_2602(Current, *(EIF_NATURAL_16 *)arg1);
}
static EIF_BOOLEAN F608_2602_2687_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F608_2602(Current, *(EIF_POINTER *)arg1);
}
static EIF_BOOLEAN F610_2602_2687_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F610_2602(Current, *(EIF_REAL_32 *)arg1);
}
static EIF_BOOLEAN F611_2602_2687_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F611_2602(Current, *(EIF_NATURAL_8 *)arg1);
}
static EIF_BOOLEAN F612_2602_2687_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F612_2602(Current, *(EIF_CHARACTER_8 *)arg1);
}
static EIF_BOOLEAN F614_2602_2687_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F614_2602(Current, *(EIF_REAL_64 *)arg1);
}
static EIF_BOOLEAN F615_2602_2687_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F615_2602(Current, *(EIF_INTEGER_8 *)arg1);
}
static EIF_BOOLEAN F616_2602_2687_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F616_2602(Current, *(EIF_INTEGER_16 *)arg1);
}
static EIF_BOOLEAN F609_2602_2687_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F609_2602(Current, *(EIF_NATURAL_32 *)arg1);
}
static EIF_BOOLEAN F617_2602_2687_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F617_2602(Current, *(EIF_INTEGER_64 *)arg1);
}
static EIF_BOOLEAN F619_2602_2687_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F619_2602(Current, *(EIF_NATURAL_64 *)arg1);
}
static EIF_BOOLEAN F606_2602_2687_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F606_2602(Current, *(EIF_CHARACTER_32 *)arg1);
}

char *(*R2706[7])();
void R2706_init () {
	R2706[0] = (char *(*)()) F912_3541;
	R2706[1] = (char *(*)()) F913_3541_2706_4;
	R2706[2] = (char *(*)()) F914_3541_2706_4;
	R2706[3] = (char *(*)()) F912_3541;
	R2706[4] = (char *(*)()) F914_3541_2706_4;
	R2706[5] = (char *(*)()) F913_3541_2706_4;
	R2706[6] = (char *(*)()) F912_3541;
}
static void F913_3541_2706_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F913_3541(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F914_3541_2706_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F914_3541(Current, *(EIF_BOOLEAN *)arg1);
}

char *(*R2707[719])();
void R2707_init () {
	R2707[0] = (char *(*)()) F951_4115;
	R2707[1] = (char *(*)()) F952_4115_2707_4;
	R2707[2] = (char *(*)()) F953_4115_2707_4;
	R2707[3] = (char *(*)()) F954_4115_2707_4;
	R2707[4] = (char *(*)()) F955_4115_2707_4;
	R2707[5] = (char *(*)()) F956_4115_2707_4;
	R2707[6] = (char *(*)()) F957_4115_2707_4;
	R2707[7] = (char *(*)()) F958_4115_2707_4;
	R2707[8] = (char *(*)()) F959_4115_2707_4;
	R2707[9] = (char *(*)()) F960_4115_2707_4;
	R2707[10] = (char *(*)()) F961_4115_2707_4;
	R2707[11] = (char *(*)()) F962_4115_2707_4;
	R2707[12] = (char *(*)()) F963_4115_2707_4;
	R2707[13] = (char *(*)()) F964_4115_2707_4;
	R2707[14] = (char *(*)()) F965_4115_2707_4;
	R2707[15] = (char *(*)()) F951_4115;
	R2707[16] = (char *(*)()) F963_4115_2707_4;
	R2707[17] = (char *(*)()) F957_4115_2707_4;
	R2707[20] = (char *(*)()) F969_4174;
	R2707[21] = (char *(*)()) F970_4174_2707_4;
	R2707[22] = (char *(*)()) F969_4174;
	R2707[23] = (char *(*)()) F970_4174_2707_4;
	{long i; for (i = 24; i < 28; i++) R2707[i] = (char *(*)()) F969_4174;}
	{long i; for (i = 29; i < 48; i++) R2707[i] = (char *(*)()) F969_4174;}
	R2707[718] = (char *(*)()) F969_4174;
}
static void F952_4115_2707_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F952_4115(Current, *(EIF_NATURAL_16 *)arg1);
}
static void F953_4115_2707_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F953_4115(Current, *(EIF_POINTER *)arg1);
}
static void F954_4115_2707_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F954_4115(Current, *(EIF_REAL_32 *)arg1);
}
static void F955_4115_2707_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F955_4115(Current, *(EIF_NATURAL_8 *)arg1);
}
static void F956_4115_2707_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F956_4115(Current, *(EIF_CHARACTER_8 *)arg1);
}
static void F957_4115_2707_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F957_4115(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F958_4115_2707_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F958_4115(Current, *(EIF_REAL_64 *)arg1);
}
static void F959_4115_2707_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F959_4115(Current, *(EIF_INTEGER_8 *)arg1);
}
static void F960_4115_2707_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F960_4115(Current, *(EIF_INTEGER_16 *)arg1);
}
static void F961_4115_2707_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F961_4115(Current, *(EIF_NATURAL_32 *)arg1);
}
static void F962_4115_2707_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F962_4115(Current, *(EIF_INTEGER_64 *)arg1);
}
static void F963_4115_2707_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F963_4115(Current, *(EIF_BOOLEAN *)arg1);
}
static void F964_4115_2707_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F964_4115(Current, *(EIF_NATURAL_64 *)arg1);
}
static void F965_4115_2707_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F965_4115(Current, *(EIF_CHARACTER_32 *)arg1);
}
static void F970_4174_2707_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F970_4174(Current, *(EIF_INTEGER_32 *)arg1);
}

char *(*R2712[7])();
void R2712_init () {
	R2712[0] = (char *(*)()) F912_3550;
	R2712[1] = (char *(*)()) F913_3550;
	R2712[2] = (char *(*)()) F914_3550;
	R2712[3] = (char *(*)()) F912_3550;
	R2712[4] = (char *(*)()) F914_3550;
	R2712[5] = (char *(*)()) F913_3550;
	R2712[6] = (char *(*)()) F912_3550;
}

char *(*R2766[7])();
void R2766_init () {
	R2766[0] = (char *(*)()) F912_3554;
	R2766[1] = (char *(*)()) F913_3554_2766_5;
	R2766[2] = (char *(*)()) F914_3554_2766_5;
	R2766[3] = (char *(*)()) F912_3554;
	R2766[4] = (char *(*)()) F914_3554_2766_5;
	R2766[5] = (char *(*)()) F913_3554_2766_5;
	R2766[6] = (char *(*)()) F912_3554;
}
static EIF_REFERENCE F913_3554_2766_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F913_3554(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_REFERENCE F914_3554_2766_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F914_3554(Current, *(EIF_BOOLEAN *)arg1);
}

char *(*R2767[7])();
void R2767_init () {
	R2767[0] = (char *(*)()) F912_3555;
	R2767[1] = (char *(*)()) F913_3555;
	R2767[2] = (char *(*)()) F914_3555;
	R2767[3] = (char *(*)()) F912_3555;
	R2767[4] = (char *(*)()) F914_3555;
	R2767[5] = (char *(*)()) F913_3555;
	R2767[6] = (char *(*)()) F912_3555;
}

char *(*R2770[7])();
void R2770_init () {
	R2770[0] = (char *(*)()) F912_3558;
	R2770[1] = (char *(*)()) F913_3558;
	R2770[2] = (char *(*)()) F914_3558;
	R2770[3] = (char *(*)()) F912_3558;
	R2770[4] = (char *(*)()) F914_3558;
	R2770[5] = (char *(*)()) F913_3558;
	R2770[6] = (char *(*)()) F912_3558;
}

char *(*R2771[7])();
void R2771_init () {
	R2771[0] = (char *(*)()) F912_3559;
	R2771[1] = (char *(*)()) F913_3559;
	R2771[2] = (char *(*)()) F914_3559;
	R2771[3] = (char *(*)()) F912_3559;
	R2771[4] = (char *(*)()) F914_3559;
	R2771[5] = (char *(*)()) F913_3559;
	R2771[6] = (char *(*)()) F912_3559;
}

char *(*R2772[7])();
void R2772_init () {
	R2772[0] = (char *(*)()) F912_3560;
	R2772[1] = (char *(*)()) F913_3560;
	R2772[2] = (char *(*)()) F914_3560;
	R2772[3] = (char *(*)()) F912_3560;
	R2772[4] = (char *(*)()) F914_3560;
	R2772[5] = (char *(*)()) F913_3560;
	R2772[6] = (char *(*)()) F912_3560;
}

char *(*R2777[3])();
void R2777_init () {
	R2777[0] = (char *(*)()) F912_3517;
	R2777[1] = (char *(*)()) F914_3517_2777_1;
	R2777[2] = (char *(*)()) F913_3517_2777_1;
}
static EIF_REFERENCE F914_3517_2777_1 (EIF_REFERENCE Current)
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
static EIF_REFERENCE F913_3517_2777_1 (EIF_REFERENCE Current)
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

char *(*R2778[3])();
void R2778_init () {
	R2778[0] = (char *(*)()) F912_3548;
	R2778[1] = (char *(*)()) F914_3548;
	R2778[2] = (char *(*)()) F913_3548;
}

char *(*R2832[2])();
void R2832_init () {
	R2832[0] = (char *(*)()) F944_3751;
	R2832[1] = (char *(*)()) F945_14363;
}

char *(*R2934[1072])();
void R2934_init () {
	R2934[0] = (char *(*)()) F948_3856;
	R2934[1] = (char *(*)()) F949_3914;
	R2934[2] = (char *(*)()) F950_14390;
	R2934[3] = (char *(*)()) F951_4133;
	R2934[4] = (char *(*)()) F952_4133;
	R2934[5] = (char *(*)()) F953_4133;
	R2934[6] = (char *(*)()) F954_4133;
	R2934[7] = (char *(*)()) F955_4133;
	R2934[8] = (char *(*)()) F956_4133;
	R2934[9] = (char *(*)()) F957_4133;
	R2934[10] = (char *(*)()) F958_4133;
	R2934[11] = (char *(*)()) F959_4133;
	R2934[12] = (char *(*)()) F960_4133;
	R2934[13] = (char *(*)()) F961_4133;
	R2934[14] = (char *(*)()) F962_4133;
	R2934[15] = (char *(*)()) F963_4133;
	R2934[16] = (char *(*)()) F964_4133;
	R2934[17] = (char *(*)()) F965_4133;
	R2934[18] = (char *(*)()) F951_4133;
	R2934[19] = (char *(*)()) F963_4133;
	R2934[20] = (char *(*)()) F957_4133;
	R2934[23] = (char *(*)()) F951_4133;
	R2934[24] = (char *(*)()) F957_4133;
	R2934[25] = (char *(*)()) F951_4133;
	R2934[26] = (char *(*)()) F957_4133;
	{long i; for (i = 27; i < 31; i++) R2934[i] = (char *(*)()) F951_4133;}
	{long i; for (i = 32; i < 51; i++) R2934[i] = (char *(*)()) F951_4133;}
	R2934[51] = (char *(*)()) F999_3983;
	R2934[52] = (char *(*)()) F1000_3983;
	R2934[53] = (char *(*)()) F1001_3983;
	R2934[54] = (char *(*)()) F1002_3983;
	R2934[55] = (char *(*)()) F1003_3983;
	R2934[56] = (char *(*)()) F1004_3983;
	R2934[57] = (char *(*)()) F1000_3983;
	R2934[58] = (char *(*)()) F999_3983;
	R2934[59] = (char *(*)()) F1001_3983;
	R2934[60] = (char *(*)()) F999_3983;
	R2934[528] = (char *(*)()) F1476_5421;
	{long i; for (i = 605; i < 610; i++) R2934[i] = (char *(*)()) F1552_6476;}
	{long i; for (i = 613; i < 616; i++) R2934[i] = (char *(*)()) F1561_6780;}
	R2934[617] = (char *(*)()) F1565_6988;
	R2934[620] = (char *(*)()) F1568_7030;
	R2934[721] = (char *(*)()) F951_4133;
	{long i; for (i = 930; i < 935; i++) R2934[i] = (char *(*)()) F950_14390;}
	{long i; for (i = 1070; i < 1072; i++) R2934[i] = (char *(*)()) F1561_6780;}
}

char *(*R2970[10])();
void R2970_init () {
	R2970[0] = (char *(*)()) F999_3924;
	R2970[1] = (char *(*)()) F1000_3924;
	R2970[2] = (char *(*)()) F1001_3924;
	R2970[3] = (char *(*)()) F1002_3924;
	R2970[4] = (char *(*)()) F1003_3924;
	R2970[5] = (char *(*)()) F1004_3924;
	R2970[6] = (char *(*)()) F1000_3924;
	R2970[7] = (char *(*)()) F999_3924;
	R2970[8] = (char *(*)()) F1001_3924;
	R2970[9] = (char *(*)()) F999_3924;
}

char *(*R2972[10])();
void R2972_init () {
	R2972[0] = (char *(*)()) F999_3926;
	R2972[1] = (char *(*)()) F1000_3926;
	R2972[2] = (char *(*)()) F1001_3926;
	R2972[3] = (char *(*)()) F1002_3926;
	R2972[4] = (char *(*)()) F1003_3926;
	R2972[5] = (char *(*)()) F1004_3926;
	R2972[6] = (char *(*)()) F1000_3926;
	R2972[7] = (char *(*)()) F999_3926;
	R2972[8] = (char *(*)()) F1001_3926;
	R2972[9] = (char *(*)()) F999_3926;
}

char *(*R2973[10])();
void R2973_init () {
	R2973[0] = (char *(*)()) F999_3927;
	R2973[1] = (char *(*)()) F1000_3927;
	R2973[2] = (char *(*)()) F1001_3927_2973_1;
	R2973[3] = (char *(*)()) F1002_3927_2973_1;
	R2973[4] = (char *(*)()) F1003_3927;
	R2973[5] = (char *(*)()) F1004_3927_2973_1;
	R2973[6] = (char *(*)()) F1000_3927;
	R2973[7] = (char *(*)()) F999_3927;
	R2973[8] = (char *(*)()) F1001_3927_2973_1;
	R2973[9] = (char *(*)()) F999_3927;
}
static EIF_REFERENCE F1001_3927_2973_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F1001_3927(Current);
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
static EIF_REFERENCE F1002_3927_2973_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F1002_3927(Current);
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
static EIF_REFERENCE F1004_3927_2973_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F1004_3927(Current);
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

char *(*R2978[10])();
void R2978_init () {
	R2978[0] = (char *(*)()) F999_3935;
	R2978[1] = (char *(*)()) F1000_3935;
	R2978[2] = (char *(*)()) F1001_3935_2978_1;
	R2978[3] = (char *(*)()) F1002_3935_2978_1;
	R2978[4] = (char *(*)()) F1003_3935;
	R2978[5] = (char *(*)()) F1004_3935_2978_1;
	R2978[6] = (char *(*)()) F1000_3935;
	R2978[7] = (char *(*)()) F999_3935;
	R2978[8] = (char *(*)()) F1001_3935_2978_1;
	R2978[9] = (char *(*)()) F999_3935;
}
static EIF_REFERENCE F1001_3935_2978_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F1001_3935(Current);
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
static EIF_REFERENCE F1002_3935_2978_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F1002_3935(Current);
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
static EIF_REFERENCE F1004_3935_2978_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F1004_3935(Current);
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

char *(*R2981[10])();
void R2981_init () {
	R2981[0] = (char *(*)()) F999_3940;
	R2981[1] = (char *(*)()) F1000_3940_2981_9;
	R2981[2] = (char *(*)()) F1001_3940;
	R2981[3] = (char *(*)()) F1002_3940_2981_9;
	R2981[4] = (char *(*)()) F1003_3940_2981_9;
	R2981[5] = (char *(*)()) F1004_3940_2981_9;
	R2981[6] = (char *(*)()) F1000_3940_2981_9;
	R2981[7] = (char *(*)()) F1006_4038;
	R2981[8] = (char *(*)()) F1007_4038;
	R2981[9] = (char *(*)()) F999_3940;
}
static EIF_INTEGER_32 F1000_3940_2981_9 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F1000_3940(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_INTEGER_32 F1002_3940_2981_9 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F1002_3940(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_INTEGER_32 F1003_3940_2981_9 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F1003_3940(Current, *(EIF_POINTER *)arg1);
}
static EIF_INTEGER_32 F1004_3940_2981_9 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F1004_3940(Current, *(EIF_POINTER *)arg1);
}

char *(*R2983[10])();
void R2983_init () {
	R2983[0] = (char *(*)()) F999_3947;
	R2983[1] = (char *(*)()) F1000_3947_2983_3;
	R2983[2] = (char *(*)()) F1001_3947;
	R2983[3] = (char *(*)()) F1002_3947_2983_3;
	R2983[4] = (char *(*)()) F1003_3947_2983_3;
	R2983[5] = (char *(*)()) F1004_3947_2983_3;
	R2983[6] = (char *(*)()) F1000_3947_2983_3;
	R2983[7] = (char *(*)()) F1006_4040;
	R2983[8] = (char *(*)()) F1007_4040;
	R2983[9] = (char *(*)()) F999_3947;
}
static EIF_BOOLEAN F1000_3947_2983_3 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	return F1000_3947(Current, *(EIF_INTEGER_32 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static EIF_BOOLEAN F1002_3947_2983_3 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	return F1002_3947(Current, *(EIF_INTEGER_32 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static EIF_BOOLEAN F1003_3947_2983_3 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	return F1003_3947(Current, *(EIF_POINTER *)arg1, *(EIF_POINTER *)arg2);
}
static EIF_BOOLEAN F1004_3947_2983_3 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	return F1004_3947(Current, *(EIF_POINTER *)arg1, *(EIF_POINTER *)arg2);
}

char *(*R2989[10])();
void R2989_init () {
	R2989[0] = (char *(*)()) F999_3956;
	R2989[1] = (char *(*)()) F1000_3956;
	R2989[2] = (char *(*)()) F1001_3956;
	R2989[3] = (char *(*)()) F1002_3956;
	R2989[4] = (char *(*)()) F1003_3956;
	R2989[5] = (char *(*)()) F1004_3956;
	R2989[6] = (char *(*)()) F1000_3956;
	R2989[7] = (char *(*)()) F999_3956;
	R2989[8] = (char *(*)()) F1001_3956;
	R2989[9] = (char *(*)()) F999_3956;
}

char *(*R2990[10])();
void R2990_init () {
	R2990[0] = (char *(*)()) F999_3957;
	R2990[1] = (char *(*)()) F1000_3957;
	R2990[2] = (char *(*)()) F1001_3957;
	R2990[3] = (char *(*)()) F1002_3957;
	R2990[4] = (char *(*)()) F1003_3957;
	R2990[5] = (char *(*)()) F1004_3957;
	R2990[6] = (char *(*)()) F1000_3957;
	R2990[7] = (char *(*)()) F999_3957;
	R2990[8] = (char *(*)()) F1001_3957;
	R2990[9] = (char *(*)()) F999_3957;
}

char *(*R2992[10])();
void R2992_init () {
	R2992[0] = (char *(*)()) F999_3959;
	R2992[1] = (char *(*)()) F1000_3959;
	R2992[2] = (char *(*)()) F1001_3959;
	R2992[3] = (char *(*)()) F1002_3959;
	R2992[4] = (char *(*)()) F1003_3959;
	R2992[5] = (char *(*)()) F1004_3959;
	R2992[6] = (char *(*)()) F1000_3959;
	R2992[7] = (char *(*)()) F999_3959;
	R2992[8] = (char *(*)()) F1001_3959;
	R2992[9] = (char *(*)()) F999_3959;
}

char *(*R2995[10])();
void R2995_init () {
	R2995[0] = (char *(*)()) F999_3963;
	R2995[1] = (char *(*)()) F1000_3963;
	R2995[2] = (char *(*)()) F1001_3963;
	R2995[3] = (char *(*)()) F1002_3963;
	R2995[4] = (char *(*)()) F1003_3963;
	R2995[5] = (char *(*)()) F1004_3963;
	R2995[6] = (char *(*)()) F1000_3963;
	R2995[7] = (char *(*)()) F999_3963;
	R2995[8] = (char *(*)()) F1001_3963;
	R2995[9] = (char *(*)()) F999_3963;
}

char *(*R2996[10])();
void R2996_init () {
	R2996[0] = (char *(*)()) F999_3964;
	R2996[1] = (char *(*)()) F1000_3964;
	R2996[2] = (char *(*)()) F1001_3964;
	R2996[3] = (char *(*)()) F1002_3964;
	R2996[4] = (char *(*)()) F1003_3964;
	R2996[5] = (char *(*)()) F1004_3964;
	R2996[6] = (char *(*)()) F1000_3964;
	R2996[7] = (char *(*)()) F999_3964;
	R2996[8] = (char *(*)()) F1001_3964;
	R2996[9] = (char *(*)()) F999_3964;
}

char *(*R2998[10])();
void R2998_init () {
	R2998[0] = (char *(*)()) F999_3966;
	R2998[1] = (char *(*)()) F1000_3966_2998_4;
	R2998[2] = (char *(*)()) F1001_3966;
	R2998[3] = (char *(*)()) F1002_3966_2998_4;
	R2998[4] = (char *(*)()) F1003_3966_2998_4;
	R2998[5] = (char *(*)()) F1004_3966_2998_4;
	R2998[6] = (char *(*)()) F1000_3966_2998_4;
	R2998[7] = (char *(*)()) F999_3966;
	R2998[8] = (char *(*)()) F1001_3966;
	R2998[9] = (char *(*)()) F999_3966;
}
static void F1000_3966_2998_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F1000_3966(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F1002_3966_2998_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F1002_3966(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F1003_3966_2998_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F1003_3966(Current, *(EIF_POINTER *)arg1);
}
static void F1004_3966_2998_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F1004_3966(Current, *(EIF_POINTER *)arg1);
}

char *(*R3000[10])();
void R3000_init () {
	R3000[0] = (char *(*)()) F999_3968;
	R3000[1] = (char *(*)()) F1000_3968;
	R3000[2] = (char *(*)()) F1001_3968;
	R3000[3] = (char *(*)()) F1002_3968;
	R3000[4] = (char *(*)()) F1003_3968;
	R3000[5] = (char *(*)()) F1004_3968;
	R3000[6] = (char *(*)()) F1000_3968;
	R3000[7] = (char *(*)()) F999_3968;
	R3000[8] = (char *(*)()) F1001_3968;
	R3000[9] = (char *(*)()) F999_3968;
}

char *(*R3001[10])();
void R3001_init () {
	R3001[0] = (char *(*)()) F999_3969;
	R3001[1] = (char *(*)()) F1000_3969;
	R3001[2] = (char *(*)()) F1001_3969;
	R3001[3] = (char *(*)()) F1002_3969;
	R3001[4] = (char *(*)()) F1003_3969;
	R3001[5] = (char *(*)()) F1004_3969;
	R3001[6] = (char *(*)()) F1000_3969;
	R3001[7] = (char *(*)()) F999_3969;
	R3001[8] = (char *(*)()) F1001_3969;
	R3001[9] = (char *(*)()) F999_3969;
}

char *(*R3008[10])();
void R3008_init () {
	R3008[0] = (char *(*)()) F999_3982;
	R3008[1] = (char *(*)()) F1000_3982;
	R3008[2] = (char *(*)()) F1001_3982;
	R3008[3] = (char *(*)()) F1002_3982;
	R3008[4] = (char *(*)()) F1003_3982;
	R3008[5] = (char *(*)()) F1004_3982;
	R3008[6] = (char *(*)()) F1000_3982;
	R3008[7] = (char *(*)()) F1006_4042;
	R3008[8] = (char *(*)()) F1007_4042;
	R3008[9] = (char *(*)()) F999_3982;
}

char *(*R3017[10])();
void R3017_init () {
	R3017[0] = (char *(*)()) F999_3992;
	R3017[1] = (char *(*)()) F1000_3992;
	R3017[2] = (char *(*)()) F1001_3992;
	R3017[3] = (char *(*)()) F1002_3992;
	R3017[4] = (char *(*)()) F1003_3992;
	R3017[5] = (char *(*)()) F1004_3992;
	R3017[6] = (char *(*)()) F1000_3992;
	R3017[7] = (char *(*)()) F999_3992;
	R3017[8] = (char *(*)()) F1001_3992;
	R3017[9] = (char *(*)()) F999_3992;
}

char *(*R3018[10])();
void R3018_init () {
	R3018[0] = (char *(*)()) F999_3993;
	R3018[1] = (char *(*)()) F1000_3993;
	R3018[2] = (char *(*)()) F1001_3993;
	R3018[3] = (char *(*)()) F1002_3993;
	R3018[4] = (char *(*)()) F1003_3993;
	R3018[5] = (char *(*)()) F1004_3993;
	R3018[6] = (char *(*)()) F1000_3993;
	R3018[7] = (char *(*)()) F999_3993;
	R3018[8] = (char *(*)()) F1001_3993;
	R3018[9] = (char *(*)()) F999_3993;
}

char *(*R3025[10])();
void R3025_init () {
	R3025[0] = (char *(*)()) F999_4000;
	R3025[1] = (char *(*)()) F1000_4000;
	R3025[2] = (char *(*)()) F1001_4000_3025_1;
	R3025[3] = (char *(*)()) F1002_4000_3025_1;
	R3025[4] = (char *(*)()) F1003_4000;
	R3025[5] = (char *(*)()) F1004_4000_3025_1;
	R3025[6] = (char *(*)()) F1000_4000;
	R3025[7] = (char *(*)()) F999_4000;
	R3025[8] = (char *(*)()) F1001_4000_3025_1;
	R3025[9] = (char *(*)()) F999_4000;
}
static EIF_REFERENCE F1001_4000_3025_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F1001_4000(Current);
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
static EIF_REFERENCE F1002_4000_3025_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F1002_4000(Current);
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
static EIF_REFERENCE F1004_4000_3025_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F1004_4000(Current);
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

char *(*R3026[10])();
void R3026_init () {
	R3026[0] = (char *(*)()) F999_4001;
	R3026[1] = (char *(*)()) F1000_4001_3026_1;
	R3026[2] = (char *(*)()) F1001_4001;
	R3026[3] = (char *(*)()) F1002_4001_3026_1;
	R3026[4] = (char *(*)()) F1003_4001_3026_1;
	R3026[5] = (char *(*)()) F1004_4001_3026_1;
	R3026[6] = (char *(*)()) F1000_4001_3026_1;
	R3026[7] = (char *(*)()) F999_4001;
	R3026[8] = (char *(*)()) F1001_4001;
	R3026[9] = (char *(*)()) F999_4001;
}
static EIF_REFERENCE F1000_4001_3026_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F1000_4001(Current);
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
static EIF_REFERENCE F1002_4001_3026_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F1002_4001(Current);
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
static EIF_REFERENCE F1003_4001_3026_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_POINTER r = F1003_4001(Current);
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
static EIF_REFERENCE F1004_4001_3026_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_POINTER r = F1004_4001(Current);
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

char *(*R3027[10])();
void R3027_init () {
	R3027[0] = (char *(*)()) F999_4002;
	R3027[1] = (char *(*)()) F1000_4002;
	R3027[2] = (char *(*)()) F1001_4002;
	R3027[3] = (char *(*)()) F1002_4002;
	R3027[4] = (char *(*)()) F1003_4002;
	R3027[5] = (char *(*)()) F1004_4002;
	R3027[6] = (char *(*)()) F1000_4002;
	R3027[7] = (char *(*)()) F999_4002;
	R3027[8] = (char *(*)()) F1001_4002;
	R3027[9] = (char *(*)()) F999_4002;
}

char *(*R3028[10])();
void R3028_init () {
	R3028[0] = (char *(*)()) F999_4003;
	R3028[1] = (char *(*)()) F1000_4003;
	R3028[2] = (char *(*)()) F1001_4003;
	R3028[3] = (char *(*)()) F1002_4003;
	R3028[4] = (char *(*)()) F1003_4003;
	R3028[5] = (char *(*)()) F1004_4003;
	R3028[6] = (char *(*)()) F1000_4003;
	R3028[7] = (char *(*)()) F999_4003;
	R3028[8] = (char *(*)()) F1001_4003;
	R3028[9] = (char *(*)()) F999_4003;
}

char *(*R3029[10])();
void R3029_init () {
	R3029[0] = (char *(*)()) F999_4004;
	R3029[1] = (char *(*)()) F1000_4004;
	R3029[2] = (char *(*)()) F1001_4004;
	R3029[3] = (char *(*)()) F1002_4004;
	R3029[4] = (char *(*)()) F1003_4004;
	R3029[5] = (char *(*)()) F1004_4004;
	R3029[6] = (char *(*)()) F1000_4004;
	R3029[7] = (char *(*)()) F999_4004;
	R3029[8] = (char *(*)()) F1001_4004;
	R3029[9] = (char *(*)()) F999_4004;
}

char *(*R3030[10])();
void R3030_init () {
	R3030[0] = (char *(*)()) F999_4005;
	R3030[1] = (char *(*)()) F1000_4005;
	R3030[2] = (char *(*)()) F1001_4005;
	R3030[3] = (char *(*)()) F1002_4005;
	R3030[4] = (char *(*)()) F1003_4005;
	R3030[5] = (char *(*)()) F1004_4005;
	R3030[6] = (char *(*)()) F1000_4005;
	R3030[7] = (char *(*)()) F999_4005;
	R3030[8] = (char *(*)()) F1001_4005;
	R3030[9] = (char *(*)()) F999_4005;
}

char *(*R3031[10])();
void R3031_init () {
	R3031[0] = (char *(*)()) F999_4006;
	R3031[1] = (char *(*)()) F1000_4006;
	R3031[2] = (char *(*)()) F1001_4006;
	R3031[3] = (char *(*)()) F1002_4006;
	R3031[4] = (char *(*)()) F1003_4006;
	R3031[5] = (char *(*)()) F1004_4006;
	R3031[6] = (char *(*)()) F1000_4006;
	R3031[7] = (char *(*)()) F999_4006;
	R3031[8] = (char *(*)()) F1001_4006;
	R3031[9] = (char *(*)()) F999_4006;
}

char *(*R3033[10])();
void R3033_init () {
	R3033[0] = (char *(*)()) F999_4008;
	R3033[1] = (char *(*)()) F1000_4008;
	R3033[2] = (char *(*)()) F1001_4008;
	R3033[3] = (char *(*)()) F1002_4008;
	R3033[4] = (char *(*)()) F1003_4008;
	R3033[5] = (char *(*)()) F1004_4008;
	R3033[6] = (char *(*)()) F1000_4008;
	R3033[7] = (char *(*)()) F999_4008;
	R3033[8] = (char *(*)()) F1001_4008;
	R3033[9] = (char *(*)()) F999_4008;
}

char *(*R3034[10])();
void R3034_init () {
	R3034[0] = (char *(*)()) F999_4009;
	R3034[1] = (char *(*)()) F1000_4009;
	R3034[2] = (char *(*)()) F1001_4009;
	R3034[3] = (char *(*)()) F1002_4009;
	R3034[4] = (char *(*)()) F1003_4009;
	R3034[5] = (char *(*)()) F1004_4009;
	R3034[6] = (char *(*)()) F1000_4009;
	R3034[7] = (char *(*)()) F999_4009;
	R3034[8] = (char *(*)()) F1001_4009;
	R3034[9] = (char *(*)()) F999_4009;
}

char *(*R3035[10])();
void R3035_init () {
	R3035[0] = (char *(*)()) F999_4010;
	R3035[1] = (char *(*)()) F1000_4010;
	R3035[2] = (char *(*)()) F1001_4010;
	R3035[3] = (char *(*)()) F1002_4010;
	R3035[4] = (char *(*)()) F1003_4010;
	R3035[5] = (char *(*)()) F1004_4010;
	R3035[6] = (char *(*)()) F1000_4010;
	R3035[7] = (char *(*)()) F999_4010;
	R3035[8] = (char *(*)()) F1001_4010;
	R3035[9] = (char *(*)()) F999_4010;
}

char *(*R3039[10])();
void R3039_init () {
	R3039[0] = (char *(*)()) F999_4014;
	R3039[1] = (char *(*)()) F1000_4014_3039_4;
	R3039[2] = (char *(*)()) F1001_4014;
	R3039[3] = (char *(*)()) F1002_4014_3039_4;
	R3039[4] = (char *(*)()) F1003_4014_3039_4;
	R3039[5] = (char *(*)()) F1004_4014_3039_4;
	R3039[6] = (char *(*)()) F1000_4014_3039_4;
	R3039[7] = (char *(*)()) F999_4014;
	R3039[8] = (char *(*)()) F1001_4014;
	R3039[9] = (char *(*)()) F999_4014;
}
static void F1000_4014_3039_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F1000_4014(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F1002_4014_3039_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F1002_4014(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F1003_4014_3039_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F1003_4014(Current, *(EIF_POINTER *)arg1);
}
static void F1004_4014_3039_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F1004_4014(Current, *(EIF_POINTER *)arg1);
}

char *(*R3040[10])();
void R3040_init () {
	R3040[0] = (char *(*)()) F999_4015;
	R3040[1] = (char *(*)()) F1000_4015_3040_4;
	R3040[2] = (char *(*)()) F1001_4015;
	R3040[3] = (char *(*)()) F1002_4015_3040_4;
	R3040[4] = (char *(*)()) F1003_4015_3040_4;
	R3040[5] = (char *(*)()) F1004_4015_3040_4;
	R3040[6] = (char *(*)()) F1000_4015_3040_4;
	R3040[7] = (char *(*)()) F999_4015;
	R3040[8] = (char *(*)()) F1001_4015;
	R3040[9] = (char *(*)()) F999_4015;
}
static void F1000_4015_3040_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F1000_4015(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F1002_4015_3040_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F1002_4015(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F1003_4015_3040_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F1003_4015(Current, *(EIF_POINTER *)arg1);
}
static void F1004_4015_3040_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F1004_4015(Current, *(EIF_POINTER *)arg1);
}

char *(*R3045[10])();
void R3045_init () {
	R3045[0] = (char *(*)()) F999_4020;
	R3045[1] = (char *(*)()) F1000_4020;
	R3045[2] = (char *(*)()) F1001_4020;
	R3045[3] = (char *(*)()) F1002_4020;
	R3045[4] = (char *(*)()) F1003_4020;
	R3045[5] = (char *(*)()) F1004_4020;
	R3045[6] = (char *(*)()) F1000_4020;
	R3045[7] = (char *(*)()) F999_4020;
	R3045[8] = (char *(*)()) F1001_4020;
	R3045[9] = (char *(*)()) F999_4020;
}

char *(*R3058[10])();
void R3058_init () {
	R3058[0] = (char *(*)()) F999_4033;
	R3058[1] = (char *(*)()) F1000_4033;
	R3058[2] = (char *(*)()) F1001_4033;
	R3058[3] = (char *(*)()) F1002_4033;
	R3058[4] = (char *(*)()) F1003_4033;
	R3058[5] = (char *(*)()) F1004_4033;
	R3058[6] = (char *(*)()) F1000_4033;
	R3058[7] = (char *(*)()) F999_4033;
	R3058[8] = (char *(*)()) F1001_4033;
	R3058[9] = (char *(*)()) F999_4033;
}

char *(*R3061[2])();
void R3061_init () {
	R3061[0] = (char *(*)()) F1006_4036;
	R3061[1] = (char *(*)()) F1007_4036;
}

char *(*R3081[719])();
void R3081_init () {
	R3081[0] = (char *(*)()) F951_4073;
	R3081[1] = (char *(*)()) F952_4073;
	R3081[2] = (char *(*)()) F953_4073;
	R3081[3] = (char *(*)()) F954_4073;
	R3081[4] = (char *(*)()) F955_4073;
	R3081[5] = (char *(*)()) F956_4073;
	R3081[6] = (char *(*)()) F957_4073;
	R3081[7] = (char *(*)()) F958_4073;
	R3081[8] = (char *(*)()) F959_4073;
	R3081[9] = (char *(*)()) F960_4073;
	R3081[10] = (char *(*)()) F961_4073;
	R3081[11] = (char *(*)()) F962_4073;
	R3081[12] = (char *(*)()) F963_4073;
	R3081[13] = (char *(*)()) F964_4073;
	R3081[14] = (char *(*)()) F965_4073;
	R3081[15] = (char *(*)()) F951_4073;
	R3081[16] = (char *(*)()) F963_4073;
	R3081[17] = (char *(*)()) F957_4073;
	R3081[20] = (char *(*)()) F951_4073;
	R3081[21] = (char *(*)()) F957_4073;
	R3081[22] = (char *(*)()) F951_4073;
	R3081[23] = (char *(*)()) F957_4073;
	{long i; for (i = 24; i < 28; i++) R3081[i] = (char *(*)()) F951_4073;}
	{long i; for (i = 29; i < 48; i++) R3081[i] = (char *(*)()) F951_4073;}
	R3081[718] = (char *(*)()) F951_4073;
}

char *(*R3085[719])();
void R3085_init () {
	R3085[0] = (char *(*)()) F951_4077;
	R3085[1] = (char *(*)()) F952_4077;
	R3085[2] = (char *(*)()) F953_4077;
	R3085[3] = (char *(*)()) F954_4077;
	R3085[4] = (char *(*)()) F955_4077;
	R3085[5] = (char *(*)()) F956_4077;
	R3085[6] = (char *(*)()) F957_4077;
	R3085[7] = (char *(*)()) F958_4077;
	R3085[8] = (char *(*)()) F959_4077;
	R3085[9] = (char *(*)()) F960_4077;
	R3085[10] = (char *(*)()) F961_4077;
	R3085[11] = (char *(*)()) F962_4077;
	R3085[12] = (char *(*)()) F963_4077;
	R3085[13] = (char *(*)()) F964_4077;
	R3085[14] = (char *(*)()) F965_4077;
	R3085[15] = (char *(*)()) F951_4077;
	R3085[16] = (char *(*)()) F963_4077;
	R3085[17] = (char *(*)()) F957_4077;
	R3085[20] = (char *(*)()) F951_4077;
	R3085[21] = (char *(*)()) F957_4077;
	R3085[22] = (char *(*)()) F951_4077;
	R3085[23] = (char *(*)()) F957_4077;
	{long i; for (i = 24; i < 28; i++) R3085[i] = (char *(*)()) F951_4077;}
	{long i; for (i = 29; i < 48; i++) R3085[i] = (char *(*)()) F951_4077;}
	R3085[718] = (char *(*)()) F951_4077;
}

char *(*R3089[719])();
void R3089_init () {
	R3089[0] = (char *(*)()) F951_4096;
	R3089[1] = (char *(*)()) F952_4096;
	R3089[2] = (char *(*)()) F953_4096;
	R3089[3] = (char *(*)()) F954_4096;
	R3089[4] = (char *(*)()) F955_4096;
	R3089[5] = (char *(*)()) F956_4096;
	R3089[6] = (char *(*)()) F957_4096;
	R3089[7] = (char *(*)()) F958_4096;
	R3089[8] = (char *(*)()) F959_4096;
	R3089[9] = (char *(*)()) F960_4096;
	R3089[10] = (char *(*)()) F961_4096;
	R3089[11] = (char *(*)()) F962_4096;
	R3089[12] = (char *(*)()) F963_4096;
	R3089[13] = (char *(*)()) F964_4096;
	R3089[14] = (char *(*)()) F965_4096;
	R3089[15] = (char *(*)()) F951_4096;
	R3089[16] = (char *(*)()) F963_4096;
	R3089[17] = (char *(*)()) F957_4096;
	R3089[20] = (char *(*)()) F951_4096;
	R3089[21] = (char *(*)()) F957_4096;
	R3089[22] = (char *(*)()) F951_4096;
	R3089[23] = (char *(*)()) F957_4096;
	{long i; for (i = 24; i < 28; i++) R3089[i] = (char *(*)()) F951_4096;}
	{long i; for (i = 29; i < 48; i++) R3089[i] = (char *(*)()) F951_4096;}
	R3089[718] = (char *(*)()) F951_4096;
}

char *(*R3093[719])();
void R3093_init () {
	R3093[0] = (char *(*)()) F951_4136;
	R3093[1] = (char *(*)()) F952_4136_3093_122;
	R3093[2] = (char *(*)()) F953_4136_3093_122;
	R3093[3] = (char *(*)()) F954_4136_3093_122;
	R3093[4] = (char *(*)()) F955_4136_3093_122;
	R3093[5] = (char *(*)()) F956_4136_3093_122;
	R3093[6] = (char *(*)()) F957_4136_3093_122;
	R3093[7] = (char *(*)()) F958_4136_3093_122;
	R3093[8] = (char *(*)()) F959_4136_3093_122;
	R3093[9] = (char *(*)()) F960_4136_3093_122;
	R3093[10] = (char *(*)()) F961_4136_3093_122;
	R3093[11] = (char *(*)()) F962_4136_3093_122;
	R3093[12] = (char *(*)()) F963_4136_3093_122;
	R3093[13] = (char *(*)()) F964_4136_3093_122;
	R3093[14] = (char *(*)()) F965_4136_3093_122;
	R3093[15] = (char *(*)()) F951_4136;
	R3093[16] = (char *(*)()) F963_4136_3093_122;
	R3093[17] = (char *(*)()) F957_4136_3093_122;
	R3093[20] = (char *(*)()) F951_4136;
	R3093[21] = (char *(*)()) F957_4136_3093_122;
	R3093[22] = (char *(*)()) F951_4136;
	R3093[23] = (char *(*)()) F957_4136_3093_122;
	{long i; for (i = 24; i < 28; i++) R3093[i] = (char *(*)()) F951_4136;}
	{long i; for (i = 29; i < 48; i++) R3093[i] = (char *(*)()) F951_4136;}
	R3093[718] = (char *(*)()) F951_4136;
}
static void F952_4136_3093_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F952_4136(Current, *(EIF_NATURAL_16 *)arg1, arg2);
}
static void F953_4136_3093_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F953_4136(Current, *(EIF_POINTER *)arg1, arg2);
}
static void F954_4136_3093_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F954_4136(Current, *(EIF_REAL_32 *)arg1, arg2);
}
static void F955_4136_3093_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F955_4136(Current, *(EIF_NATURAL_8 *)arg1, arg2);
}
static void F956_4136_3093_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F956_4136(Current, *(EIF_CHARACTER_8 *)arg1, arg2);
}
static void F957_4136_3093_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F957_4136(Current, *(EIF_INTEGER_32 *)arg1, arg2);
}
static void F958_4136_3093_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F958_4136(Current, *(EIF_REAL_64 *)arg1, arg2);
}
static void F959_4136_3093_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F959_4136(Current, *(EIF_INTEGER_8 *)arg1, arg2);
}
static void F960_4136_3093_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F960_4136(Current, *(EIF_INTEGER_16 *)arg1, arg2);
}
static void F961_4136_3093_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F961_4136(Current, *(EIF_NATURAL_32 *)arg1, arg2);
}
static void F962_4136_3093_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F962_4136(Current, *(EIF_INTEGER_64 *)arg1, arg2);
}
static void F963_4136_3093_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F963_4136(Current, *(EIF_BOOLEAN *)arg1, arg2);
}
static void F964_4136_3093_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F964_4136(Current, *(EIF_NATURAL_64 *)arg1, arg2);
}
static void F965_4136_3093_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F965_4136(Current, *(EIF_CHARACTER_32 *)arg1, arg2);
}

char *(*R3101[3])();
void R3101_init () {
	R3101[0] = (char *(*)()) F951_4114;
	R3101[1] = (char *(*)()) F963_4114_3101_4;
	R3101[2] = (char *(*)()) F957_4114_3101_4;
}
static void F963_4114_3101_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F963_4114(Current, *(EIF_BOOLEAN *)arg1);
}
static void F957_4114_3101_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F957_4114(Current, *(EIF_INTEGER_32 *)arg1);
}

char *(*R3102[3])();
void R3102_init () {
	R3102[0] = (char *(*)()) F951_4127;
	R3102[1] = (char *(*)()) F963_4127;
	R3102[2] = (char *(*)()) F957_4127;
}

char *(*R3103[699])();
void R3103_init () {
	R3103[0] = (char *(*)()) F971_4193;
	R3103[1] = (char *(*)()) F972_4193_3103_122;
	R3103[2] = (char *(*)()) F973_14401;
	R3103[3] = (char *(*)()) F974_14401_3103_122;
	R3103[4] = (char *(*)()) F973_14401;
	{long i; for (i = 5; i < 8; i++) R3103[i] = (char *(*)()) F976_4197;}
	{long i; for (i = 9; i < 28; i++) R3103[i] = (char *(*)()) F976_4197;}
	R3103[698] = (char *(*)()) F1669_18790;
}
static void F972_4193_3103_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F972_4193(Current, *(EIF_INTEGER_32 *)arg1, arg2);
}
static void F974_14401_3103_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F974_14401(Current, *(EIF_INTEGER_32 *)arg1, arg2);
}

char *(*R3104[699])();
void R3104_init () {
	R3104[0] = (char *(*)()) F971_4194;
	R3104[1] = (char *(*)()) F972_4194_3104_122;
	R3104[2] = (char *(*)()) F973_14402;
	R3104[3] = (char *(*)()) F974_14402_3104_122;
	R3104[4] = (char *(*)()) F973_14402;
	{long i; for (i = 5; i < 8; i++) R3104[i] = (char *(*)()) F976_4198;}
	{long i; for (i = 9; i < 28; i++) R3104[i] = (char *(*)()) F976_4198;}
	R3104[698] = (char *(*)()) F1669_18791;
}
static void F972_4194_3104_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F972_4194(Current, *(EIF_INTEGER_32 *)arg1, arg2);
}
static void F974_14402_3104_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F974_14402(Current, *(EIF_INTEGER_32 *)arg1, arg2);
}

char *(*R3108[699])();
void R3108_init () {
	R3108[0] = (char *(*)()) F969_4187;
	R3108[1] = (char *(*)()) F970_4187_3108_122;
	R3108[2] = (char *(*)()) F969_4187;
	R3108[3] = (char *(*)()) F970_4187_3108_122;
	{long i; for (i = 4; i < 8; i++) R3108[i] = (char *(*)()) F969_4187;}
	{long i; for (i = 9; i < 28; i++) R3108[i] = (char *(*)()) F969_4187;}
	R3108[698] = (char *(*)()) F969_4187;
}
static void F970_4187_3108_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F970_4187(Current, *(EIF_INTEGER_32 *)arg1, arg2);
}

char *(*R3109[699])();
void R3109_init () {
	R3109[0] = (char *(*)()) F969_4188;
	R3109[1] = (char *(*)()) F970_4188_3109_122;
	R3109[2] = (char *(*)()) F969_4188;
	R3109[3] = (char *(*)()) F970_4188_3109_122;
	{long i; for (i = 4; i < 8; i++) R3109[i] = (char *(*)()) F969_4188;}
	{long i; for (i = 9; i < 28; i++) R3109[i] = (char *(*)()) F969_4188;}
	R3109[698] = (char *(*)()) F969_4188;
}
static void F970_4188_3109_122 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F970_4188(Current, *(EIF_INTEGER_32 *)arg1, arg2);
}

char *(*R3112[23])();
void R3112_init () {
	R3112[0] = (char *(*)()) F976_4199;
	R3112[1] = (char *(*)()) F977_14409;
	R3112[2] = (char *(*)()) F978_14410;
	{long i; for (i = 4; i < 23; i++) R3112[i] = (char *(*)()) F977_14409;}
}

static EIF_TYPE_INDEX Y3144_pgtype0[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3144_pgtype1[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3144_pgtype2[] = {0xFFF9,1,1475,0xFF01,0,0xFFFF};
static EIF_TYPE_INDEX Y3144_pgtype3[] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX Y3144_pgtype4[] = {0xFF01,0xFFF9,1,1475,0xFF01,1687,0xFFFF};
static EIF_TYPE_INDEX Y3144_pgtype5[] = {0xFF01,0xFFF9,1,1475,1508,0xFFFF};
static EIF_TYPE_INDEX Y3144_pgtype6[] = {0xFF01,0xFFF9,1,1475,0xFF01,1668,0xFFFF};
static EIF_TYPE_INDEX Y3144_pgtype7[] = {0xFF01,0xFFF9,1,1475,1508,0xFFFF};
static EIF_TYPE_INDEX Y3144_pgtype8[] = {0xFF01,0xFFF9,2,1475,1508,1508,0xFFFF};
static EIF_TYPE_INDEX Y3144_pgtype9[] = {0xFF01,0xFFF9,1,1475,0xFF01,1676,0xFFFF};
static EIF_TYPE_INDEX Y3144_pgtype10[] = {0xFF01,0xFFF9,1,1475,0xFF01,1631,0xFFFF};
static EIF_TYPE_INDEX Y3144_pgtype11[] = {0xFF01,0xFFF9,1,1475,0xFF01,1611,0xFFFF};
static EIF_TYPE_INDEX Y3144_pgtype12[] = {0xFF01,0xFFF9,1,1475,1294,0xFFFF};
static EIF_TYPE_INDEX Y3144_pgtype13[] = {0xFF01,0xFFF9,1,1475,0xFF01,1813,0xFFFF};
static EIF_TYPE_INDEX Y3144_pgtype14[] = {0xFF01,0xFFF9,1,1475,1508,0xFFFF};
static EIF_TYPE_INDEX Y3144_pgtype15[] = {0xFF01,0xFFF9,1,1475,0xFF01,1564,0xFFFF};
static EIF_TYPE_INDEX Y3144_pgtype16[] = {0xFF01,0xFFF9,5,1475,1508,1508,1508,1508,1508,0xFFFF};
static EIF_TYPE_INDEX Y3144_pgtype17[] = {0xFF01,0xFFF9,4,1475,1508,1508,1508,1508,0xFFFF};
static EIF_TYPE_INDEX Y3144_pgtype18[] = {0xFF01,0xFFF9,2,1475,1508,1508,0xFFFF};
static EIF_TYPE_INDEX Y3144_pgtype19[] = {0xFF01,0xFFF9,7,1475,1508,1508,1496,1496,1496,1508,1508,0xFFFF};
static EIF_TYPE_INDEX Y3144_pgtype20[] = {0xFF01,0xFFF9,3,1475,1508,1508,1294,0xFFFF};
static EIF_TYPE_INDEX Y3144_pgtype21[] = {0xFF01,0xFFF9,0,1475,0xFFFF};
static EIF_TYPE_INDEX Y3144_pgtype22[] = {0xFF01,0xFFF9,8,1475,1508,1508,1508,1496,1496,1496,1508,1508,0xFFFF};
EIF_TYPE_INDEX *Y3144_gen_type [23];
EIF_TYPE_INDEX Y3144 [23];
void Y3144_init (void)
{
	egc_routines_types [3144] = Y3144;
	egc_routines_gen_types [3144] = Y3144_gen_type;
	egc_routines_offset [3144] = 975;
	Y3144_gen_type [0] = Y3144_pgtype0;
	Y3144_gen_type [1] = Y3144_pgtype1;
	Y3144_gen_type [2] = Y3144_pgtype2;
	Y3144_gen_type [3] = Y3144_pgtype3;
	Y3144_gen_type [4] = Y3144_pgtype4;
	Y3144_gen_type [5] = Y3144_pgtype5;
	Y3144_gen_type [6] = Y3144_pgtype6;
	Y3144_gen_type [7] = Y3144_pgtype7;
	Y3144_gen_type [8] = Y3144_pgtype8;
	Y3144_gen_type [9] = Y3144_pgtype9;
	Y3144_gen_type [10] = Y3144_pgtype10;
	Y3144_gen_type [11] = Y3144_pgtype11;
	Y3144_gen_type [12] = Y3144_pgtype12;
	Y3144_gen_type [13] = Y3144_pgtype13;
	Y3144_gen_type [14] = Y3144_pgtype14;
	Y3144_gen_type [15] = Y3144_pgtype15;
	Y3144_gen_type [16] = Y3144_pgtype16;
	Y3144_gen_type [17] = Y3144_pgtype17;
	Y3144_gen_type [18] = Y3144_pgtype18;
	Y3144_gen_type [19] = Y3144_pgtype19;
	Y3144_gen_type [20] = Y3144_pgtype20;
	Y3144_gen_type [21] = Y3144_pgtype21;
	Y3144_gen_type [22] = Y3144_pgtype22;
	Y3144[2] = 1475;
	{long i; for (i = 4; i < 23; i++) Y3144[i] = 1475;};
}

char *(*R3145[257])();
void R3145_init () {
	R3145[0] = (char *(*)()) F1027_14528;
	R3145[1] = (char *(*)()) F735_2757_3145_1;
	R3145[2] = (char *(*)()) F1029_4260_3145_1;
	R3145[3] = (char *(*)()) F735_2757_3145_1;
	R3145[4] = (char *(*)()) F1031_4284;
	R3145[5] = (char *(*)()) F1032_4302;
	R3145[36] = (char *(*)()) F1048_4324;
	R3145[37] = (char *(*)()) F1049_4324_3145_1;
	R3145[38] = (char *(*)()) F1050_4324_3145_1;
	R3145[39] = (char *(*)()) F1051_4324_3145_1;
	R3145[40] = (char *(*)()) F1052_4324_3145_1;
	R3145[41] = (char *(*)()) F1053_4324_3145_1;
	R3145[42] = (char *(*)()) F1054_4324_3145_1;
	R3145[43] = (char *(*)()) F1055_4324_3145_1;
	R3145[44] = (char *(*)()) F1056_4324_3145_1;
	R3145[45] = (char *(*)()) F1057_4324_3145_1;
	R3145[46] = (char *(*)()) F1058_4324_3145_1;
	R3145[47] = (char *(*)()) F1059_4324_3145_1;
	R3145[48] = (char *(*)()) F1060_4324_3145_1;
	R3145[49] = (char *(*)()) F1061_4324_3145_1;
	R3145[50] = (char *(*)()) F1062_4324_3145_1;
	R3145[51] = (char *(*)()) F1078_4352;
	R3145[52] = (char *(*)()) F1079_4352_3145_1;
	R3145[53] = (char *(*)()) F1080_4352_3145_1;
	R3145[69] = (char *(*)()) F1081_4364;
	R3145[70] = (char *(*)()) F1082_4364_3145_1;
	R3145[71] = (char *(*)()) F1083_4364_3145_1;
	R3145[72] = (char *(*)()) F1084_4364_3145_1;
	R3145[73] = (char *(*)()) F1085_4364_3145_1;
	R3145[74] = (char *(*)()) F1086_4364_3145_1;
	R3145[75] = (char *(*)()) F1087_4364_3145_1;
	R3145[76] = (char *(*)()) F1088_4364_3145_1;
	R3145[77] = (char *(*)()) F1089_4364_3145_1;
	R3145[78] = (char *(*)()) F1090_4364_3145_1;
	R3145[79] = (char *(*)()) F1091_4364_3145_1;
	R3145[80] = (char *(*)()) F1092_4364_3145_1;
	R3145[81] = (char *(*)()) F1093_4364_3145_1;
	R3145[82] = (char *(*)()) F1094_4364_3145_1;
	{long i; for (i = 83; i < 85; i++) R3145[i] = (char *(*)()) F1095_4364_3145_1;}
	R3145[85] = (char *(*)()) F1086_4364_3145_1;
	R3145[86] = (char *(*)()) F1081_4364;
	R3145[87] = (char *(*)()) F1082_4364_3145_1;
	R3145[88] = (char *(*)()) F1083_4364_3145_1;
	R3145[89] = (char *(*)()) F1084_4364_3145_1;
	R3145[90] = (char *(*)()) F1085_4364_3145_1;
	R3145[91] = (char *(*)()) F1086_4364_3145_1;
	R3145[92] = (char *(*)()) F1087_4364_3145_1;
	R3145[93] = (char *(*)()) F1088_4364_3145_1;
	R3145[94] = (char *(*)()) F1089_4364_3145_1;
	R3145[95] = (char *(*)()) F1090_4364_3145_1;
	R3145[96] = (char *(*)()) F1091_4364_3145_1;
	R3145[97] = (char *(*)()) F1092_4364_3145_1;
	R3145[98] = (char *(*)()) F1093_4364_3145_1;
	R3145[99] = (char *(*)()) F1094_4364_3145_1;
	R3145[100] = (char *(*)()) F1095_4364_3145_1;
	R3145[101] = (char *(*)()) F1081_4364;
	R3145[102] = (char *(*)()) F1082_4364_3145_1;
	R3145[103] = (char *(*)()) F1083_4364_3145_1;
	R3145[104] = (char *(*)()) F1084_4364_3145_1;
	R3145[105] = (char *(*)()) F1085_4364_3145_1;
	R3145[106] = (char *(*)()) F1086_4364_3145_1;
	R3145[107] = (char *(*)()) F1087_4364_3145_1;
	R3145[108] = (char *(*)()) F1088_4364_3145_1;
	R3145[109] = (char *(*)()) F1089_4364_3145_1;
	R3145[110] = (char *(*)()) F1090_4364_3145_1;
	R3145[111] = (char *(*)()) F1091_4364_3145_1;
	R3145[112] = (char *(*)()) F1092_4364_3145_1;
	R3145[113] = (char *(*)()) F1093_4364_3145_1;
	R3145[114] = (char *(*)()) F1094_4364_3145_1;
	R3145[115] = (char *(*)()) F1095_4364_3145_1;
	R3145[122] = (char *(*)()) F1149_4413;
	R3145[123] = (char *(*)()) F1150_4413;
	R3145[124] = (char *(*)()) F1151_4413_3145_1;
	R3145[125] = (char *(*)()) F1152_4413_3145_1;
	R3145[126] = (char *(*)()) F1153_4413;
	R3145[127] = (char *(*)()) F1154_4413_3145_1;
	R3145[128] = (char *(*)()) F1155_4420;
	R3145[256] = (char *(*)()) F1283_4446_3145_1;
}
static EIF_REFERENCE F735_2757_3145_1 (EIF_REFERENCE Current)
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
static EIF_REFERENCE F1029_4260_3145_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F1029_4260(Current);
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
static EIF_REFERENCE F1049_4324_3145_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F1049_4324(Current);
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
static EIF_REFERENCE F1050_4324_3145_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_16 r = F1050_4324(Current);
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
static EIF_REFERENCE F1051_4324_3145_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_POINTER r = F1051_4324(Current);
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
static EIF_REFERENCE F1052_4324_3145_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F1052_4324(Current);
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
static EIF_REFERENCE F1053_4324_3145_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_32 r = F1053_4324(Current);
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
static EIF_REFERENCE F1054_4324_3145_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_8 r = F1054_4324(Current);
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
static EIF_REFERENCE F1055_4324_3145_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F1055_4324(Current);
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
static EIF_REFERENCE F1056_4324_3145_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F1056_4324(Current);
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
static EIF_REFERENCE F1057_4324_3145_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_64 r = F1057_4324(Current);
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
static EIF_REFERENCE F1058_4324_3145_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_8 r = F1058_4324(Current);
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
static EIF_REFERENCE F1059_4324_3145_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_16 r = F1059_4324(Current);
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
static EIF_REFERENCE F1060_4324_3145_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_64 r = F1060_4324(Current);
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
static EIF_REFERENCE F1061_4324_3145_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F1061_4324(Current);
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
static EIF_REFERENCE F1062_4324_3145_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_64 r = F1062_4324(Current);
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
static EIF_REFERENCE F1079_4352_3145_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F1079_4352(Current);
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
static EIF_REFERENCE F1080_4352_3145_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F1080_4352(Current);
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
static EIF_REFERENCE F1082_4364_3145_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_16 r = F1082_4364(Current);
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
static EIF_REFERENCE F1083_4364_3145_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_POINTER r = F1083_4364(Current);
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
static EIF_REFERENCE F1084_4364_3145_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_32 r = F1084_4364(Current);
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
static EIF_REFERENCE F1085_4364_3145_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_8 r = F1085_4364(Current);
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
static EIF_REFERENCE F1086_4364_3145_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F1086_4364(Current);
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
static EIF_REFERENCE F1087_4364_3145_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F1087_4364(Current);
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
static EIF_REFERENCE F1088_4364_3145_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_64 r = F1088_4364(Current);
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
static EIF_REFERENCE F1089_4364_3145_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_8 r = F1089_4364(Current);
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
static EIF_REFERENCE F1090_4364_3145_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_16 r = F1090_4364(Current);
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
static EIF_REFERENCE F1091_4364_3145_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F1091_4364(Current);
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
static EIF_REFERENCE F1092_4364_3145_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_64 r = F1092_4364(Current);
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
static EIF_REFERENCE F1093_4364_3145_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F1093_4364(Current);
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
static EIF_REFERENCE F1094_4364_3145_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_64 r = F1094_4364(Current);
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
static EIF_REFERENCE F1095_4364_3145_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F1095_4364(Current);
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
static EIF_REFERENCE F1151_4413_3145_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F1151_4413(Current);
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
static EIF_REFERENCE F1152_4413_3145_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F1152_4413(Current);
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
static EIF_REFERENCE F1154_4413_3145_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F1154_4413(Current);
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
static EIF_REFERENCE F1283_4446_3145_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F1283_4446(Current);
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

char *(*R3146[257])();
void R3146_init () {
	R3146[0] = (char *(*)()) F1027_14523;
	R3146[1] = (char *(*)()) F735_2758;
	R3146[2] = (char *(*)()) F1029_4263;
	R3146[3] = (char *(*)()) F735_2758;
	R3146[4] = (char *(*)()) F1031_4285;
	R3146[5] = (char *(*)()) F1032_4303;
	R3146[36] = (char *(*)()) F1063_4342;
	R3146[37] = (char *(*)()) F1064_4342;
	R3146[38] = (char *(*)()) F1065_4342;
	R3146[39] = (char *(*)()) F1066_4342;
	R3146[40] = (char *(*)()) F1067_4342;
	R3146[41] = (char *(*)()) F1068_4342;
	R3146[42] = (char *(*)()) F1069_4342;
	R3146[43] = (char *(*)()) F1070_4342;
	R3146[44] = (char *(*)()) F1071_4342;
	R3146[45] = (char *(*)()) F1072_4342;
	R3146[46] = (char *(*)()) F1073_4342;
	R3146[47] = (char *(*)()) F1074_4342;
	R3146[48] = (char *(*)()) F1075_4342;
	R3146[49] = (char *(*)()) F1076_4342;
	R3146[50] = (char *(*)()) F1077_4342;
	R3146[51] = (char *(*)()) F1078_4353;
	R3146[52] = (char *(*)()) F1079_4353;
	R3146[53] = (char *(*)()) F1080_4353;
	R3146[69] = (char *(*)()) F1081_4373;
	R3146[70] = (char *(*)()) F1082_4373;
	R3146[71] = (char *(*)()) F1083_4373;
	R3146[72] = (char *(*)()) F1084_4373;
	R3146[73] = (char *(*)()) F1085_4373;
	R3146[74] = (char *(*)()) F1086_4373;
	R3146[75] = (char *(*)()) F1087_4373;
	R3146[76] = (char *(*)()) F1088_4373;
	R3146[77] = (char *(*)()) F1089_4373;
	R3146[78] = (char *(*)()) F1090_4373;
	R3146[79] = (char *(*)()) F1091_4373;
	R3146[80] = (char *(*)()) F1092_4373;
	R3146[81] = (char *(*)()) F1093_4373;
	R3146[82] = (char *(*)()) F1094_4373;
	{long i; for (i = 83; i < 85; i++) R3146[i] = (char *(*)()) F1095_4373;}
	R3146[85] = (char *(*)()) F1086_4373;
	R3146[86] = (char *(*)()) F1081_4373;
	R3146[87] = (char *(*)()) F1082_4373;
	R3146[88] = (char *(*)()) F1083_4373;
	R3146[89] = (char *(*)()) F1084_4373;
	R3146[90] = (char *(*)()) F1085_4373;
	R3146[91] = (char *(*)()) F1086_4373;
	R3146[92] = (char *(*)()) F1087_4373;
	R3146[93] = (char *(*)()) F1088_4373;
	R3146[94] = (char *(*)()) F1089_4373;
	R3146[95] = (char *(*)()) F1090_4373;
	R3146[96] = (char *(*)()) F1091_4373;
	R3146[97] = (char *(*)()) F1092_4373;
	R3146[98] = (char *(*)()) F1093_4373;
	R3146[99] = (char *(*)()) F1094_4373;
	R3146[100] = (char *(*)()) F1095_4373;
	R3146[101] = (char *(*)()) F1081_4373;
	R3146[102] = (char *(*)()) F1082_4373;
	R3146[103] = (char *(*)()) F1083_4373;
	R3146[104] = (char *(*)()) F1084_4373;
	R3146[105] = (char *(*)()) F1085_4373;
	R3146[106] = (char *(*)()) F1086_4373;
	R3146[107] = (char *(*)()) F1087_4373;
	R3146[108] = (char *(*)()) F1088_4373;
	R3146[109] = (char *(*)()) F1089_4373;
	R3146[110] = (char *(*)()) F1090_4373;
	R3146[111] = (char *(*)()) F1091_4373;
	R3146[112] = (char *(*)()) F1092_4373;
	R3146[113] = (char *(*)()) F1093_4373;
	R3146[114] = (char *(*)()) F1094_4373;
	R3146[115] = (char *(*)()) F1095_4373;
	R3146[122] = (char *(*)()) F1149_4416;
	R3146[123] = (char *(*)()) F1150_4416;
	R3146[124] = (char *(*)()) F1151_4416;
	R3146[125] = (char *(*)()) F1152_4416;
	R3146[126] = (char *(*)()) F1153_4416;
	R3146[127] = (char *(*)()) F1154_4416;
	R3146[128] = (char *(*)()) F1155_4421;
	R3146[256] = (char *(*)()) F1283_4448;
}

char *(*R3147[257])();
void R3147_init () {
	R3147[0] = (char *(*)()) F1027_14525;
	R3147[1] = (char *(*)()) F735_2764;
	R3147[2] = (char *(*)()) F1029_4265;
	R3147[3] = (char *(*)()) F735_2764;
	R3147[4] = (char *(*)()) F1031_4286;
	R3147[5] = (char *(*)()) F1032_4304;
	R3147[36] = (char *(*)()) F1063_4350;
	R3147[37] = (char *(*)()) F1064_4350;
	R3147[38] = (char *(*)()) F1065_4350;
	R3147[39] = (char *(*)()) F1066_4350;
	R3147[40] = (char *(*)()) F1067_4350;
	R3147[41] = (char *(*)()) F1068_4350;
	R3147[42] = (char *(*)()) F1069_4350;
	R3147[43] = (char *(*)()) F1070_4350;
	R3147[44] = (char *(*)()) F1071_4350;
	R3147[45] = (char *(*)()) F1072_4350;
	R3147[46] = (char *(*)()) F1073_4350;
	R3147[47] = (char *(*)()) F1074_4350;
	R3147[48] = (char *(*)()) F1075_4350;
	R3147[49] = (char *(*)()) F1076_4350;
	R3147[50] = (char *(*)()) F1077_4350;
	R3147[51] = (char *(*)()) F1078_4355;
	R3147[52] = (char *(*)()) F1079_4355;
	R3147[53] = (char *(*)()) F1080_4355;
	R3147[69] = (char *(*)()) F1081_4379;
	R3147[70] = (char *(*)()) F1082_4379;
	R3147[71] = (char *(*)()) F1083_4379;
	R3147[72] = (char *(*)()) F1084_4379;
	R3147[73] = (char *(*)()) F1085_4379;
	R3147[74] = (char *(*)()) F1086_4379;
	R3147[75] = (char *(*)()) F1087_4379;
	R3147[76] = (char *(*)()) F1088_4379;
	R3147[77] = (char *(*)()) F1089_4379;
	R3147[78] = (char *(*)()) F1090_4379;
	R3147[79] = (char *(*)()) F1091_4379;
	R3147[80] = (char *(*)()) F1092_4379;
	R3147[81] = (char *(*)()) F1093_4379;
	R3147[82] = (char *(*)()) F1094_4379;
	{long i; for (i = 83; i < 85; i++) R3147[i] = (char *(*)()) F1095_4379;}
	R3147[85] = (char *(*)()) F1086_4379;
	R3147[86] = (char *(*)()) F1081_4379;
	R3147[87] = (char *(*)()) F1082_4379;
	R3147[88] = (char *(*)()) F1083_4379;
	R3147[89] = (char *(*)()) F1084_4379;
	R3147[90] = (char *(*)()) F1085_4379;
	R3147[91] = (char *(*)()) F1086_4379;
	R3147[92] = (char *(*)()) F1087_4379;
	R3147[93] = (char *(*)()) F1088_4379;
	R3147[94] = (char *(*)()) F1089_4379;
	R3147[95] = (char *(*)()) F1090_4379;
	R3147[96] = (char *(*)()) F1091_4379;
	R3147[97] = (char *(*)()) F1092_4379;
	R3147[98] = (char *(*)()) F1093_4379;
	R3147[99] = (char *(*)()) F1094_4379;
	R3147[100] = (char *(*)()) F1095_4379;
	R3147[101] = (char *(*)()) F1081_4379;
	R3147[102] = (char *(*)()) F1082_4379;
	R3147[103] = (char *(*)()) F1083_4379;
	R3147[104] = (char *(*)()) F1084_4379;
	R3147[105] = (char *(*)()) F1085_4379;
	R3147[106] = (char *(*)()) F1086_4379;
	R3147[107] = (char *(*)()) F1087_4379;
	R3147[108] = (char *(*)()) F1088_4379;
	R3147[109] = (char *(*)()) F1089_4379;
	R3147[110] = (char *(*)()) F1090_4379;
	R3147[111] = (char *(*)()) F1091_4379;
	R3147[112] = (char *(*)()) F1092_4379;
	R3147[113] = (char *(*)()) F1093_4379;
	R3147[114] = (char *(*)()) F1094_4379;
	R3147[115] = (char *(*)()) F1095_4379;
	R3147[122] = (char *(*)()) F1149_4417;
	R3147[123] = (char *(*)()) F1150_4417;
	R3147[124] = (char *(*)()) F1151_4417;
	R3147[125] = (char *(*)()) F1152_4417;
	R3147[126] = (char *(*)()) F1153_4417;
	R3147[127] = (char *(*)()) F1154_4417;
	R3147[128] = (char *(*)()) F1155_4422;
	R3147[256] = (char *(*)()) F1283_4449;
}


#ifdef __cplusplus
}
#endif
