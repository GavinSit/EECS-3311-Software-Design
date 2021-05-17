/*
 * Code for class WEL_COLOR_REF
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1812.h"
#include <windows.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_COLOR_REF}.make */
void F1829_20488 (EIF_REFERENCE Current)
{
	GTCX
	
	
	F1829_20499(Current, ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L));
}

/* {WEL_COLOR_REF}.make_rgb */
void F1829_20489 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	
	
	F1829_20499(Current, arg1, arg2, arg3);
}

/* {WEL_COLOR_REF}.make_system */
void F1829_20490 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	ti4_1 = (EIF_INTEGER_32) GetSysColor(((int) arg1));
	*(EIF_INTEGER_32 *)(Current + O17154[Dtype(Current)-1828]) = (EIF_INTEGER_32) ti4_1;
	RTLE;
}

/* {WEL_COLOR_REF}.make_by_color */
void F1829_20491 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	F1829_20498(Current, arg1);
}

/* {WEL_COLOR_REF}.red */
EIF_INTEGER_32 F1829_20494 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	
	
	ti4_1 = *(EIF_INTEGER_32 *)(Current + O17154[Dtype(Current)-1828]);
	return (EIF_INTEGER_32) (EIF_INTEGER_32) GetRValue(((DWORD) ti4_1));
}

/* {WEL_COLOR_REF}.green */
EIF_INTEGER_32 F1829_20495 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	
	
	ti4_1 = *(EIF_INTEGER_32 *)(Current + O17154[Dtype(Current)-1828]);
	return (EIF_INTEGER_32) (EIF_INTEGER_32) GetGValue(((DWORD) ti4_1));
}

/* {WEL_COLOR_REF}.blue */
EIF_INTEGER_32 F1829_20496 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	
	
	ti4_1 = *(EIF_INTEGER_32 *)(Current + O17154[Dtype(Current)-1828]);
	return (EIF_INTEGER_32) (EIF_INTEGER_32) GetBValue(((DWORD) ti4_1));
}

/* {WEL_COLOR_REF}.same_color */
EIF_BOOLEAN F1829_20497 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	ti4_1 = *(EIF_INTEGER_32 *)(Current + O17154[Dtype(Current)-1828]);
	ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O17154[Dtype(arg1)-1828]);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
	RTLE;
	return Result;
}

/* {WEL_COLOR_REF}.set_color */
void F1829_20498 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	*(EIF_INTEGER_32 *)(Current + O17154[Dtype(Current)-1828]) = (EIF_INTEGER_32) arg1;
}

/* {WEL_COLOR_REF}.set_rgb */
void F1829_20499 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	ti4_1 = (EIF_INTEGER_32) RGB(((BYTE) arg1), ((BYTE) arg2), ((BYTE) arg3));
	*(EIF_INTEGER_32 *)(Current + O17154[Dtype(Current)-1828]) = (EIF_INTEGER_32) ti4_1;
	RTLE;
}

/* {WEL_COLOR_REF}.set_red */
void F1829_20500 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	ti4_1 = F1829_20495(Current);
	ti4_2 = F1829_20496(Current);
	F1829_20499(Current, arg1, ti4_1, ti4_2);
	RTLE;
}

/* {WEL_COLOR_REF}.set_green */
void F1829_20501 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	ti4_1 = F1829_20494(Current);
	ti4_2 = F1829_20496(Current);
	F1829_20499(Current, ti4_1, arg1, ti4_2);
	RTLE;
}

/* {WEL_COLOR_REF}.set_blue */
void F1829_20502 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	ti4_1 = F1829_20494(Current);
	ti4_2 = F1829_20495(Current);
	F1829_20499(Current, ti4_1, ti4_2, arg1);
	RTLE;
}

/* {WEL_COLOR_REF}.cwin_rgb */
EIF_INTEGER_32 F1829_20503 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) RGB(((BYTE) arg1), ((BYTE) arg2), ((BYTE) arg3));
	return Result;
}

/* {WEL_COLOR_REF}.cwin_get_r_value */
EIF_INTEGER_32 F1829_20504 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) GetRValue(((DWORD) arg1));
	return Result;
}

/* {WEL_COLOR_REF}.cwin_get_g_value */
EIF_INTEGER_32 F1829_20505 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) GetGValue(((DWORD) arg1));
	return Result;
}

/* {WEL_COLOR_REF}.cwin_get_b_value */
EIF_INTEGER_32 F1829_20506 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) GetBValue(((DWORD) arg1));
	return Result;
}

/* {WEL_COLOR_REF}.cwin_get_sys_color */
EIF_INTEGER_32 F1829_20507 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) GetSysColor(((int) arg1));
	return Result;
}

void EIF_Minit1812 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
