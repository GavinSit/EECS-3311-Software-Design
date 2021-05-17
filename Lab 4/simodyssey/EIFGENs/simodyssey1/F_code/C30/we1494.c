/*
 * Code for class WEL_NM_TOOL_BAR
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1494.h"
#include "nmtb.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_NM_TOOL_BAR}.make_by_nmhdr */
void F1355_16142 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_0_1_0_0_0_0_);
	F1296_15096(Current, tp1);
	RTLE;
}

/* {WEL_NM_TOOL_BAR}.button_id */
EIF_INTEGER_32 F1355_16144 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	return (EIF_INTEGER_32) (EIF_INTEGER_32) cwel_nmtoolbar_get_iitem((tp1));
}

/* {WEL_NM_TOOL_BAR}.structure_size */
static EIF_INTEGER_32 F1355_16148_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 489)

	
	RTEV;
	RTOTP;
	Result = (EIF_INTEGER_32) sizeof (NMTOOLBAR);
	RTOTE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F1355_16148 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,489,F1355_16148_body,(Current));
}

/* {WEL_NM_TOOL_BAR}.c_size_of_nmtoolbar */
EIF_INTEGER_32 F1355_16149 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) sizeof (NMTOOLBAR);
	return Result;
}

/* {WEL_NM_TOOL_BAR}.cwel_nmtoolbar_get_iitem */
EIF_INTEGER_32 F1355_16151 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) cwel_nmtoolbar_get_iitem((arg1));
	return Result;
}

void EIF_Minit1494 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
