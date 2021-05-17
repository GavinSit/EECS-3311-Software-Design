/*
 * Code for class WEL_LV_HITTESTINFO
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1502.h"
#include "lvhittestinfo.h"
#include "cctrl.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_LV_HITTESTINFO}.make_with_point */
void F1363_16333 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	F1337_15830(Current);
	F1363_16338(Current, arg1);
	RTLE;
}

/* {WEL_LV_HITTESTINFO}.flags */
EIF_INTEGER_32 F1363_16335 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	return (EIF_INTEGER_32) (EIF_INTEGER_32) cwel_lv_hittestinfo_get_flags((tp1));
}

/* {WEL_LV_HITTESTINFO}.iitem */
EIF_INTEGER_32 F1363_16336 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	return (EIF_INTEGER_32) (EIF_INTEGER_32) cwel_lv_hittestinfo_get_iitem((tp1));
}

/* {WEL_LV_HITTESTINFO}.set_point */
void F1363_16338 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	tp2 = *(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_0_1_0_0_0_0_);
	cwel_lv_hittestinfo_set_pt((tp1), (tp2));
	RTLE;
}

/* {WEL_LV_HITTESTINFO}.structure_size */
static EIF_INTEGER_32 F1363_16339_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 467)

	
	RTEV;
	RTOTP;
	Result = (EIF_INTEGER_32) sizeof (LVHITTESTINFO);
	RTOTE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F1363_16339 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,467,F1363_16339_body,(Current));
}

/* {WEL_LV_HITTESTINFO}.c_size_of_lv_hittestinfo */
EIF_INTEGER_32 F1363_16340 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) sizeof (LVHITTESTINFO);
	return Result;
}

/* {WEL_LV_HITTESTINFO}.cwel_lv_hittestinfo_set_pt */
void F1363_16341 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	
	cwel_lv_hittestinfo_set_pt((arg1), (arg2));
}

/* {WEL_LV_HITTESTINFO}.cwel_lv_hittestinfo_get_flags */
EIF_INTEGER_32 F1363_16343 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) cwel_lv_hittestinfo_get_flags((arg1));
	return Result;
}

/* {WEL_LV_HITTESTINFO}.cwel_lv_hittestinfo_get_iitem */
EIF_INTEGER_32 F1363_16344 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) cwel_lv_hittestinfo_get_iitem((arg1));
	return Result;
}

void EIF_Minit1502 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
