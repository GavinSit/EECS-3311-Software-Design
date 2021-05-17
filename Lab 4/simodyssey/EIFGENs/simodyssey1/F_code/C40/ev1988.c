/*
 * Code for class EV_CHECK_BUTTON_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1988.h"
#include <windows.h>
#include "eif_misc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F67_9749
static void inline_F67_9749 (EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3, EIF_POINTER arg4)
{
	SendMessage ((HWND) arg1, (UINT) arg2, (WPARAM) arg3, (LPARAM) arg4)
	;
}
#define INLINE_F67_9749
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_CHECK_BUTTON_IMP}.make */
void F2005_25171 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F2004_25158(Current);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_58_21_6_10_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 20L);
	ti4_1 = F1789_20205(Current);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_58_21_6_4_) = (EIF_INTEGER_32) ti4_1;
	RTLE;
}

/* {EV_CHECK_BUTTON_IMP}.set_default_minimum_size */
void F2005_25172 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLIU(4);
	
	RTGC;
	tb1 = '\0';
	if ((EIF_BOOLEAN) !F1926_22913(Current)) {
		tb2 = F737_2537(RTCV(F1747_19708(Current)));
		tb1 = (EIF_BOOLEAN) !tb2;
	}
	if (tb1) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_39_);
		loc1 = tr1;
		if (EIF_TEST(loc1)) {
			tr1 = *(EIF_REFERENCE *)(loc1 + _REFACS_1_);
			ti4_1 = F1886_21722(RTCW(tr1));
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_58_21_6_10_) = (EIF_INTEGER_32) (EIF_INTEGER_32) (((EIF_INTEGER_32) 20L) + (EIF_INTEGER_32) (ti4_1 / ((EIF_INTEGER_32) 2L)));
		} else {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_40_);
			loc2 = tr1;
			if (EIF_TEST(loc2)) {
				ti4_1 = F1885_21701(loc2);
				*(EIF_INTEGER_32 *)(Current+ _LNGOFF_58_21_6_10_) = (EIF_INTEGER_32) (EIF_INTEGER_32) (((EIF_INTEGER_32) 20L) + (EIF_INTEGER_32) (ti4_1 / ((EIF_INTEGER_32) 2L)));
			}
		}
	}
	F2002_25110(Current);
	RTLE;
}

/* {EV_CHECK_BUTTON_IMP}.enable_select */
void F2005_25173 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_58_21_6_11_0_0_);
	tp2 = (EIF_POINTER) (WPARAM)((((EIF_INTEGER_32) 1L)));
	tp3 = (EIF_POINTER) (LPARAM)((((EIF_INTEGER_32) 0L)));
	inline_F67_9749(tp1, ((EIF_INTEGER_32) 241L), tp2, tp3);
	F2004_25160(Current);
	RTLE;
}

/* {EV_CHECK_BUTTON_IMP}.disable_select */
void F2005_25174 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_58_21_6_11_0_0_);
	tp2 = (EIF_POINTER) (WPARAM)((((EIF_INTEGER_32) 0L)));
	tp3 = (EIF_POINTER) (LPARAM)((((EIF_INTEGER_32) 0L)));
	inline_F67_9749(tp1, ((EIF_INTEGER_32) 241L), tp2, tp3);
	F2004_25161(Current);
	RTLE;
}

/* {EV_CHECK_BUTTON_IMP}.internal_default_height */
EIF_INTEGER_32 F2005_25175 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) ((EIF_INTEGER_32) 13L);
}

/* {EV_CHECK_BUTTON_IMP}.default_style */
EIF_INTEGER_32 F2005_25176 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	RTGC;
	ti4_1 = eif_bit_or(((EIF_INTEGER_32) 1073741824L),((EIF_INTEGER_32) 268435456L));
	ti4_1 = eif_bit_or(ti4_1,((EIF_INTEGER_32) 131072L));
	ti4_1 = eif_bit_or(ti4_1,((EIF_INTEGER_32) 65536L));
	ti4_1 = eif_bit_or(ti4_1,((EIF_INTEGER_32) 33554432L));
	ti4_1 = eif_bit_or(ti4_1,((EIF_INTEGER_32) 67108864L));
	Result = eif_bit_or(ti4_1,((EIF_INTEGER_32) 3L));
	return Result;
}

/* {EV_CHECK_BUTTON_IMP}.set_background_color */
void F2005_25177 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_1_);
	*(EIF_REFERENCE *)(Current + _REFACS_55_) = RTRV(eif_new_type(1829, 0), tr1);
	RTAR(Current, tr1);
	if (F1912_22468(Current)) {
		F1912_22563(Current);
	}
	RTLE;
}

void EIF_Minit1988 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
