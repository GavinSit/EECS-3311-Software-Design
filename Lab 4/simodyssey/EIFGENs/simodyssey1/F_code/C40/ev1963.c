/*
 * Code for class EV_VIEWPORT_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1963.h"
#include <windows.h>
#include "eif_helpers.h"
#include "eif_misc.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_VIEWPORT_IMP}.compute_minimum_width */
void F1980_24398 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O16311[dtype-1722]);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_0_4_0_4_);
	tr1 = *(EIF_REFERENCE *)(Current + O16311[dtype-1722]);
	ti4_2 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_0_4_0_5_);
	F1725_19527(Current, ti4_1, ti4_2, arg1);
	RTLE;
}

/* {EV_VIEWPORT_IMP}.compute_minimum_height */
void F1980_24399 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O16311[dtype-1722]);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_0_4_0_4_);
	tr1 = *(EIF_REFERENCE *)(Current + O16311[dtype-1722]);
	ti4_2 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_0_4_0_5_);
	F1725_19527(Current, ti4_1, ti4_2, arg1);
	RTLE;
}

/* {EV_VIEWPORT_IMP}.compute_minimum_size */
void F1980_24400 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O16311[dtype-1722]);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_0_4_0_4_);
	tr1 = *(EIF_REFERENCE *)(Current + O16311[dtype-1722]);
	ti4_2 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_0_4_0_5_);
	F1725_19527(Current, ti4_1, ti4_2, arg1);
	RTLE;
}

/* {EV_VIEWPORT_IMP}.is_horizontal_scroll_bar_visible */
EIF_BOOLEAN F1980_24401 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current + O19853[Dtype(Current)-1979]);
}


/* {EV_VIEWPORT_IMP}.is_vertical_scroll_bar_visible */
EIF_BOOLEAN F1980_24402 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current + O19854[Dtype(Current)-1979]);
}


/* {EV_VIEWPORT_IMP}.on_size */
void F1980_24403 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_BOOLEAN)) R19855[Dtype(Current)-1979])(Current, (EIF_BOOLEAN) 1);
	F1970_24131(Current, arg2, arg3);
	RTLE;
}

/* {EV_VIEWPORT_IMP}.ev_apply_new_size */
void F1980_24404 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_BOOLEAN arg5)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1723_19497(Current, arg1, arg2, arg3, arg4, arg5);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_BOOLEAN)) R19855[Dtype(Current)-1979])(Current, (EIF_BOOLEAN) 0);
	RTLE;
}

/* {EV_VIEWPORT_IMP}.on_size_requested */
void F1980_24405 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	tr1 = F1977_24333(Current);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		if (arg1) {
			ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16396[Dtype(loc1)-1730])(loc1);
			ti4_2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16397[Dtype(loc1)-1730])(loc1);
			ti4_3 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16400[Dtype(loc1)-1730])(loc1);
			ti4_4 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16401[Dtype(loc1)-1730])(loc1);
			F1723_19483(loc1, ti4_1, ti4_2, ti4_3, ti4_4);
		} else {
			ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16396[Dtype(loc1)-1730])(loc1);
			ti4_2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16397[Dtype(loc1)-1730])(loc1);
			ti4_3 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16400[Dtype(loc1)-1730])(loc1);
			ti4_4 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16401[Dtype(loc1)-1730])(loc1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32, EIF_BOOLEAN)) R16318[Dtype(loc1)-1972])(loc1, ti4_1, ti4_2, ti4_3, ti4_4, (EIF_BOOLEAN) 1);
		}
	}
	RTLE;
}

/* {EV_VIEWPORT_IMP}.default_style */
EIF_INTEGER_32 F1980_24407 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	RTGC;
	ti4_1 = eif_bit_or(((EIF_INTEGER_32) 1073741824L),((EIF_INTEGER_32) 268435456L));
	Result = eif_bit_or(ti4_1,((EIF_INTEGER_32) 67108864L));
	return Result;
}

/* {EV_VIEWPORT_IMP}.on_erase_background */
void F1980_24408 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc8 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,loc9);
	RTLR(2,tr1);
	RTLR(3,arg2);
	RTLR(4,loc7);
	RTLR(5,arg1);
	RTLIU(6);
	
	RTGC;
	tb1 = '\0';
	if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current + O19020[Dtype(Current)-1924])) {
		tr1 = F1977_24333(Current);
		loc9 = tr1;
		tb1 = EIF_TEST(loc9);
	}
	if (tb1) {
		loc1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16396[Dtype(loc9)-1730])(loc9);
		loc2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16397[Dtype(loc9)-1730])(loc9);
		loc3 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16396[Dtype(loc9)-1730])(loc9);
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16400[Dtype(loc9)-1730])(loc9);
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 + ti4_1);
		loc4 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16397[Dtype(loc9)-1730])(loc9);
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16401[Dtype(loc9)-1730])(loc9);
		loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc4 + ti4_1);
		loc5 = F1408_17330(RTCW(arg2));
		loc6 = F1408_17331(RTCW(arg2));
		loc7 = F1971_24179(Current);
		if ((EIF_BOOLEAN)(loc7 != NULL)) {
			if ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L))) {
				F1408_17334(RTCW(arg2), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), loc5, loc2);
				tr1 = *(EIF_REFERENCE *)(RTCV(F1956_23756(Current)) + _REFACS_41_);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R10490[Dtype(RTCW(tr1))-409])(tr1, Current, arg1, arg2, loc7);
				loc8 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			}
			if ((EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 0L))) {
				ti4_1 = eif_max_int32 (loc2,((EIF_INTEGER_32) 0L));
				ti4_2 = eif_min_int32 (loc4,loc6);
				F1408_17334(RTCW(arg2), ((EIF_INTEGER_32) 0L), ti4_1, loc1, ti4_2);
				tr1 = *(EIF_REFERENCE *)(RTCV(F1956_23756(Current)) + _REFACS_41_);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R10490[Dtype(RTCW(tr1))-409])(tr1, Current, arg1, arg2, loc7);
				loc8 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			}
			if ((EIF_BOOLEAN) (loc3 < loc5)) {
				ti4_1 = eif_max_int32 (loc2,((EIF_INTEGER_32) 0L));
				ti4_2 = eif_min_int32 (loc4,loc6);
				F1408_17334(RTCW(arg2), loc3, ti4_1, loc5, ti4_2);
				tr1 = *(EIF_REFERENCE *)(RTCV(F1956_23756(Current)) + _REFACS_41_);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R10490[Dtype(RTCW(tr1))-409])(tr1, Current, arg1, arg2, loc7);
				loc8 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			}
			if ((EIF_BOOLEAN) (loc4 < loc6)) {
				F1408_17334(RTCW(arg2), ((EIF_INTEGER_32) 0L), loc4, loc5, loc6);
				tr1 = *(EIF_REFERENCE *)(RTCV(F1956_23756(Current)) + _REFACS_41_);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R10490[Dtype(RTCW(tr1))-409])(tr1, Current, arg1, arg2, loc7);
				loc8 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			}
			F1912_22507(Current);
			tp1 = (EIF_POINTER) (LRESULT)((((EIF_INTEGER_32) 1L)));
			F214_11244(Current, tp1);
			F519_14213(RTCW(loc7));
		}
	} else {
		F1925_22888(Current, arg1, arg2);
	}
	RTLE;
}

void EIF_Minit1963 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
