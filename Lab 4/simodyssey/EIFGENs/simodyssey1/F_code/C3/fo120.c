/*
 * Code for class FORMAT_DOUBLE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "fo120.h"
#include <math.h>
#include "eif_helpers.h"
#include "eif_out.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {FORMAT_DOUBLE}.make */
void F394_1725 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F271_761(Current, arg1);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_8_0_3_) = (EIF_INTEGER_32) arg2;
	*(EIF_CHARACTER_8 *)(Current+ _CHROFF_1_2_) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '.';
	*(EIF_BOOLEAN *)(Current+ _CHROFF_1_7_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTLE;
}

/* {FORMAT_DOUBLE}.formatted */
EIF_REFERENCE F394_1743 (EIF_REFERENCE Current, EIF_REAL_64 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REAL_64 loc2 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc3 = (EIF_REAL_64) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REAL_64 loc6 = (EIF_REAL_64) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,loc4);
	RTLR(2,tr1);
	RTLR(3,loc5);
	RTLR(4,Result);
	RTLIU(5);
	
	RTGC;
	loc6 = (EIF_REAL_64) arg1;
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
	if ((EIF_BOOLEAN) eif_is_less_real_64 (arg1, tr8_1)) {
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
		loc6 = (EIF_REAL_64) (EIF_REAL_64) -loc6;
	}
	tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 5L));
	tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) ((EIF_INTEGER_32) -*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_8_0_3_) - ((EIF_INTEGER_32) 1L))));
	loc6 += (EIF_REAL_64) (tr8_1 * (EIF_REAL_64) pow ((EIF_REAL_64) (((EIF_INTEGER_32) 10L)), (EIF_REAL_64) (tr8_2)));
	loc2 = (EIF_REAL_64) floor((double) loc6);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_8_0_3_);
	tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L))));
	loc3 = (EIF_REAL_64) floor((double) (EIF_REAL_64) ((EIF_REAL_64) (loc6 - loc2) * (EIF_REAL_64) pow ((EIF_REAL_64) (((EIF_INTEGER_32) 10L)), (EIF_REAL_64) (tr8_1))));
	if ((EIF_BOOLEAN) !F271_778(Current)) {
		tr1 = c_outr64(loc2);
		loc4 = F271_818(Current, tr1);
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_1_5_)) {
			tr1 = F394_1744(Current, loc3);
			loc5 = F394_1745(Current, tr1);
		} else {
			loc5 = F394_1744(Current, loc3);
		}
	} else {
		loc4 = c_outr64(loc2);
		loc5 = F394_1744(Current, loc3);
	}
	Result = RTLNS(eif_new_type(1560, 0x01).id, 1560, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F1559_6605(RTCW(Result), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_8_0_0_));
	tb1 = '\01';
	tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
	if (!(EIF_BOOLEAN) !eif_is_equal_real_64 (loc2, tr8_1)) {
		tb1 = (EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_1_6_);
	}
	if (tb1) {
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, loc4);
	}
	tc1 = (EIF_CHARACTER_8) 'e';
	tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R2209[Dtype(RTCW(Result))-911])(Result, (EIF_REFERENCE) &tc1);
	if ((EIF_BOOLEAN) !tb1) {
		F1561_6746(RTCW(Result), *(EIF_CHARACTER_8 *)(Current+ _CHROFF_1_2_));
		if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_8_0_3_) > ((EIF_INTEGER_32) 0L))) {
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, loc5);
		}
		if ((EIF_BOOLEAN) !F271_777(Current)) {
			tr1 = F271_819(Current, Result, loc1);
			Result = (EIF_REFERENCE) tr1;
		}
	}
	tb1 = '\0';
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_8_0_1_) != ((EIF_INTEGER_32) 0L))) {
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_1_1_0_2_);
		tb1 = (EIF_BOOLEAN) (ti4_1 < *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_8_0_0_));
	}
	if (tb1) {
		RTLE;
		return (EIF_REFERENCE) F271_822(Current, Result);
	}
	RTLE;
	return Result;
}

/* {FORMAT_DOUBLE}.pad_fraction */
EIF_REFERENCE F394_1744 (EIF_REFERENCE Current, EIF_REAL_64 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Result);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	Result = c_outr64(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R4800[Dtype(RTCW(Result))-1560])(Result, ((EIF_INTEGER_32) 1L));
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_1_1_0_2_);
	if ((EIF_BOOLEAN) (ti4_1 > *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_8_0_3_))) {
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4722[Dtype(RTCW(Result))-1560])(Result, ((EIF_INTEGER_32) 1L), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_8_0_3_));
		Result = (EIF_REFERENCE) tr1;
	} else {
		for (;;) {
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_1_1_0_2_);
			if ((EIF_BOOLEAN)(ti4_1 == *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_8_0_3_))) break;
			F1561_6720(RTCW(Result), (EIF_CHARACTER_8) '0');
		}
	}
	if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_1_7_)) {
		loc1 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_1_1_0_2_);
		for (;;) {
			tb1 = '\01';
			if (!(EIF_BOOLEAN) (loc1 <= ((EIF_INTEGER_32) 1L))) {
				tc1 = (eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2556[Dtype(RTCW(Result))-849])(Result, loc1));
				tb1 = (EIF_BOOLEAN)(tc1 != (EIF_CHARACTER_8) '0');
			}
			if (tb1) break;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R4797[Dtype(RTCW(Result))-1560])(Result, loc1);
			loc1--;
		}
	}
	RTLE;
	return Result;
}

/* {FORMAT_DOUBLE}.separate_fraction */
EIF_REFERENCE F394_1745 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTGC;
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	Result = RTLNS(eif_new_type(1560, 0x01).id, 1560, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F1559_6605(RTCW(Result), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_8_0_0_));
	for (;;) {
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
		if ((EIF_BOOLEAN) (loc1 > (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 3L)))) break;
		loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		for (;;) {
			if ((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 3L))) break;
			tc1 = (eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2556[Dtype(RTCW(arg1))-849])(arg1, loc1));
			F1561_6746(RTCW(Result), tc1);
			loc1++;
			loc2++;
		}
		F1561_6746(RTCW(Result), *(EIF_CHARACTER_8 *)(Current+ _CHROFF_1_1_));
	}
	for (;;) {
		ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
		if ((EIF_BOOLEAN) (loc1 > ti4_2)) break;
		tc1 = (eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2556[Dtype(RTCW(arg1))-849])(arg1, loc1));
		F1561_6746(RTCW(Result), tc1);
		loc1++;
	}
	RTLE;
	return Result;
}

void EIF_Minit120 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
