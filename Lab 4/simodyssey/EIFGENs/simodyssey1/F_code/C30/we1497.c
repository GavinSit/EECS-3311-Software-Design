/*
 * Code for class WEL_TV_HITTESTINFO
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1497.h"
#include "tvhittestinfo.h"
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

/* {WEL_TV_HITTESTINFO}.make_with_point */
void F1358_16212 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	F1337_15830(Current);
	F1358_16216(Current, arg1);
	RTLE;
}

/* {WEL_TV_HITTESTINFO}.flags */
EIF_INTEGER_32 F1358_16214 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	return (EIF_INTEGER_32) (EIF_INTEGER_32) cwel_tv_hittestinfo_get_flags((tp1));
}

/* {WEL_TV_HITTESTINFO}.hitem */
EIF_POINTER F1358_16215 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	return (EIF_POINTER) (EIF_POINTER) cwel_tv_hittestinfo_get_hitem((tp1));
}

/* {WEL_TV_HITTESTINFO}.set_point */
void F1358_16216 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	cwel_tv_hittestinfo_set_pt((tp1), (tp2));
	RTLE;
}

/* {WEL_TV_HITTESTINFO}.structure_size */
static EIF_INTEGER_32 F1358_16217_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 476)

	
	RTEV;
	RTOTP;
	Result = (EIF_INTEGER_32) sizeof (TVHITTESTINFO);
	RTOTE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F1358_16217 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,476,F1358_16217_body,(Current));
}

/* {WEL_TV_HITTESTINFO}.c_size_of_tv_hittestinfo */
EIF_INTEGER_32 F1358_16218 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) sizeof (TVHITTESTINFO);
	return Result;
}

/* {WEL_TV_HITTESTINFO}.cwel_tv_hittestinfo_set_pt */
void F1358_16219 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	
	cwel_tv_hittestinfo_set_pt((arg1), (arg2));
}

/* {WEL_TV_HITTESTINFO}.cwel_tv_hittestinfo_get_flags */
EIF_INTEGER_32 F1358_16221 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) cwel_tv_hittestinfo_get_flags((arg1));
	return Result;
}

/* {WEL_TV_HITTESTINFO}.cwel_tv_hittestinfo_get_hitem */
EIF_POINTER F1358_16222 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = (EIF_POINTER) cwel_tv_hittestinfo_get_hitem((arg1));
	return Result;
}

void EIF_Minit1497 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
