/*
 * Code for class WEL_SCROLL_BAR_INFO
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1487.h"
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

/* {WEL_SCROLL_BAR_INFO}.make */
void F1348_15994 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1337_15830(Current);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	ti4_1 = RTOUCB(EIF_INTEGER_32,504,F1348_15995, (Current));
	(((SCROLLINFO *)tp1)->cbSize = (UINT)(ti4_1));
	RTLE;
}

/* {WEL_SCROLL_BAR_INFO}.structure_size */
static EIF_INTEGER_32 F1348_15995_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 504)

	
	RTEV;
	RTOTP;
	Result = (EIF_INTEGER_32) sizeof(SCROLLINFO);
	RTOTE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F1348_15995 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,504,F1348_15995_body,(Current));
}

/* {WEL_SCROLL_BAR_INFO}.position */
EIF_INTEGER_32 F1348_15997 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	return (EIF_INTEGER_32) (EIF_INTEGER_32) (((SCROLLINFO *)tp1)->nPos);
}

/* {WEL_SCROLL_BAR_INFO}.minimum */
EIF_INTEGER_32 F1348_15999 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	return (EIF_INTEGER_32) (EIF_INTEGER_32) (((SCROLLINFO *)tp1)->nMin);
}

/* {WEL_SCROLL_BAR_INFO}.maximum */
EIF_INTEGER_32 F1348_16000 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	return (EIF_INTEGER_32) (EIF_INTEGER_32) (((SCROLLINFO *)tp1)->nMax);
}

/* {WEL_SCROLL_BAR_INFO}.page */
EIF_INTEGER_32 F1348_16001 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	return (EIF_INTEGER_32) (EIF_INTEGER_32) (((SCROLLINFO *)tp1)->nPage);
}

/* {WEL_SCROLL_BAR_INFO}.set_mask */
void F1348_16002 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	(((SCROLLINFO *)tp1)->fMask = (UINT)(arg1));
}

/* {WEL_SCROLL_BAR_INFO}.set_position */
void F1348_16003 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	(((SCROLLINFO *)tp1)->nPos = (int)(arg1));
}

/* {WEL_SCROLL_BAR_INFO}.set_minimum */
void F1348_16005 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	(((SCROLLINFO *)tp1)->nMin = (int)(arg1));
}

/* {WEL_SCROLL_BAR_INFO}.set_maximum */
void F1348_16006 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	(((SCROLLINFO *)tp1)->nMax = (int)(arg1));
}

/* {WEL_SCROLL_BAR_INFO}.set_page */
void F1348_16007 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	(((SCROLLINFO *)tp1)->nPage = (UINT)(arg1));
}

/* {WEL_SCROLL_BAR_INFO}.c_scroll_info_size */
EIF_INTEGER_32 F1348_16008 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) sizeof(SCROLLINFO);
	return Result;
}

/* {WEL_SCROLL_BAR_INFO}.cwel_set_cb_size */
void F1348_16009 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	(((SCROLLINFO *)arg1)->cbSize = (UINT)(arg2));
	
}

/* {WEL_SCROLL_BAR_INFO}.cwel_set_fmask */
void F1348_16010 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	(((SCROLLINFO *)arg1)->fMask = (UINT)(arg2));
	
}

/* {WEL_SCROLL_BAR_INFO}.cwel_set_nmin */
void F1348_16011 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	(((SCROLLINFO *)arg1)->nMin = (int)(arg2));
	
}

/* {WEL_SCROLL_BAR_INFO}.cwel_set_nmax */
void F1348_16012 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	(((SCROLLINFO *)arg1)->nMax = (int)(arg2));
	
}

/* {WEL_SCROLL_BAR_INFO}.cwel_set_npage */
void F1348_16013 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	(((SCROLLINFO *)arg1)->nPage = (UINT)(arg2));
	
}

/* {WEL_SCROLL_BAR_INFO}.cwel_set_npos */
void F1348_16014 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	(((SCROLLINFO *)arg1)->nPos = (int)(arg2));
	
}

/* {WEL_SCROLL_BAR_INFO}.cwel_get_nmin */
EIF_INTEGER_32 F1348_16018 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) (((SCROLLINFO *)arg1)->nMin);
	
	return Result;
}

/* {WEL_SCROLL_BAR_INFO}.cwel_get_nmax */
EIF_INTEGER_32 F1348_16019 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) (((SCROLLINFO *)arg1)->nMax);
	
	return Result;
}

/* {WEL_SCROLL_BAR_INFO}.cwel_get_npage */
EIF_INTEGER_32 F1348_16020 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) (((SCROLLINFO *)arg1)->nPage);
	
	return Result;
}

/* {WEL_SCROLL_BAR_INFO}.cwel_get_npos */
EIF_INTEGER_32 F1348_16021 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) (((SCROLLINFO *)arg1)->nPos);
	
	return Result;
}

void EIF_Minit1487 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
