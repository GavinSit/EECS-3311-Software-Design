/*
 * Code for class WEL_GDIP_BITMAP_DATA
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we997.h"
#include "wel_gdi_plus.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F39_9141
static EIF_POINTER inline_F39_9141 (EIF_POINTER arg1)
{
	return (EIF_POINTER) (((BitmapData *)arg1)->Scan0)
	;
}
#define INLINE_F39_9141
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_GDIP_BITMAP_DATA}.make */
void F39_9113 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNSMART(eif_new_type(1283, 1).id);
	ti4_1 = F39_9121(Current);
	F1284_4468(RTCW(tr1), ti4_1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {WEL_GDIP_BITMAP_DATA}.structure_size */
EIF_INTEGER_32 F39_9121 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) (EIF_INTEGER_32) sizeof (BitmapData);
}

/* {WEL_GDIP_BITMAP_DATA}.scan_0 */
EIF_POINTER F39_9126 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tp1 = F39_9128(Current);
	Result = inline_F39_9141(tp1);
	RTLE;
	return Result;
}

/* {WEL_GDIP_BITMAP_DATA}.item */
EIF_POINTER F39_9128 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	Result = *(EIF_POINTER *)(RTCW(tr1)+ _PTROFF_0_1_0_1_0_0_);
	RTLE;
	return Result;
}

/* {WEL_GDIP_BITMAP_DATA}.c_size_of_bitmap_data */
EIF_INTEGER_32 F39_9130 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) sizeof (BitmapData);
	return Result;
}

/* {WEL_GDIP_BITMAP_DATA}.c_scan_0 */
EIF_POINTER F39_9141 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = inline_F39_9141 ((EIF_POINTER) arg1);
	return Result;
}

void EIF_Minit997 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
