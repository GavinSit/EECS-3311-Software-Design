/*
 * Code for class EV_GDI_BRUSH
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1560.h"
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

/* {EV_GDI_BRUSH}.make_with_values */
void F1517_17609 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	
	
	F1517_17617(Current, arg1, arg2);
}

/* {EV_GDI_BRUSH}.hash_code */
EIF_INTEGER_32 F1517_17610 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_3_);
	ti4_1 = eif_bit_shift_left(ti4_1,((EIF_INTEGER_32) 16L));
	ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_5_);
	ti4_2 = eif_bit_shift_left(ti4_2,((EIF_INTEGER_32) 8L));
	ti4_1 = eif_bit_or((ti4_1),ti4_2);
	Result = eif_bit_or(ti4_1,*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_4_));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tp1 = *(EIF_POINTER *)(loc1+ _PTROFF_0_3_0_3_0_0_);
		ti4_1 = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (tp1)));
		ti4_1 = eif_bit_or(Result,ti4_1);
		Result = (EIF_INTEGER_32) ti4_1;
	}
	RTLE;
	return Result;
}

/* {EV_GDI_BRUSH}.is_equal */
EIF_BOOLEAN F1517_17616 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc2 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc3);
	RTLR(3,tr1);
	RTLR(4,loc4);
	RTLIU(5);
	
	RTGC;
	loc1 = '\0';
	tb1 = '\0';
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_2_0_0_3_);
	if ((EIF_BOOLEAN)(ti4_1 == *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_3_))) {
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_2_0_0_4_);
		tb1 = (EIF_BOOLEAN)(ti4_1 == *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_4_));
	}
	if (tb1) {
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_2_0_0_5_);
		loc1 = (EIF_BOOLEAN)(ti4_1 == *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_5_));
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	loc3 = tr1;
	if (EIF_TEST(loc3)) {
		loc2 = '\0';
		tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_1_);
		loc4 = tr1;
		if (EIF_TEST(loc4)) {
			tp1 = *(EIF_POINTER *)(loc3+ _PTROFF_0_3_0_3_0_0_);
			ti4_1 = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (tp1)));
			tp1 = *(EIF_POINTER *)(loc4+ _PTROFF_0_3_0_3_0_0_);
			ti4_2 = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (tp1)));
			loc2 = (EIF_BOOLEAN)(ti4_1 == ti4_2);
		}
	} else {
		tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_1_);
		loc2 = (EIF_BOOLEAN) (EIF_BOOLEAN)(tr1 == NULL);
	}
	RTLE;
	return (EIF_BOOLEAN) (EIF_BOOLEAN) (loc1 && loc2);
}

/* {EV_GDI_BRUSH}.set_values */
void F1517_17617 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,arg2);
	RTLIU(3);
	
	RTGC;
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) arg1;
	if ((EIF_BOOLEAN)(arg2 != NULL)) {
		ti4_1 = F1829_20494(RTCW(arg2));
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_3_) = (EIF_INTEGER_32) ti4_1;
		ti4_1 = F1829_20496(RTCW(arg2));
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_4_) = (EIF_INTEGER_32) ti4_1;
		ti4_1 = F1829_20495(RTCW(arg2));
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_5_) = (EIF_INTEGER_32) ti4_1;
	} else {
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_3_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_4_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_5_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
	}
	RTLE;
}

void EIF_Minit1560 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
