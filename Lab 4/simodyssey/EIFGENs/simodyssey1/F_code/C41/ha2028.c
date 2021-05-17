/*
 * Code for class HASH_TABLE_ITERATION_CURSOR [G#1, POINTER]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ha2028.h"
#include "eif_built_in.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {HASH_TABLE_ITERATION_CURSOR}.item */
EIF_REFERENCE F1153_4413 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	tr1 = *(EIF_REFERENCE *)(RTCW(tr1) + O3010[Dtype(tr1)-998]);
	Result = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2556[Dtype(RTCW(tr1))-849])(tr1, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_4_));
	RTLE;
	return Result;
}

/* {HASH_TABLE_ITERATION_CURSOR}.key */
EIF_POINTER F1153_4414 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	tr1 = *(EIF_REFERENCE *)(RTCW(tr1) + O3011[Dtype(tr1)-998]);
	/* INLINED CODE (SPECIAL.item) */
	tp2 = *((EIF_POINTER *)RTCW(tr1) + (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_4_)));
	/* END INLINED CODE */
	Result = tp2;
	RTLE;
	return Result;
}

/* {HASH_TABLE_ITERATION_CURSOR}.after */
EIF_BOOLEAN F1153_4416 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_4_);
	Result = '\01';
	tb1 = '\01';
	if (!(EIF_BOOLEAN) !(FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3208[Dtype(Current)-1062])(Current)) {
		tb1 = (EIF_BOOLEAN) (loc1 < ((EIF_INTEGER_32) 0L));
	}
	if (!tb1) {
		tr1 = *(EIF_REFERENCE *)(Current);
		tr1 = *(EIF_REFERENCE *)(RTCW(tr1) + O3011[Dtype(tr1)-998]);
		ti4_1 = (EIF_INTEGER_32) eif_builtin_SPECIAL_count (tr1);
		Result = (EIF_BOOLEAN) (loc1 >= ti4_1);
	}
	RTLE;
	return Result;
}

/* {HASH_TABLE_ITERATION_CURSOR}.forth */
void F1153_4417 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	loc3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_4_);
	loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_);
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_)) {
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc1 > loc2) || (EIF_BOOLEAN) (loc3 < ((EIF_INTEGER_32) 0L)))) break;
			tr1 = *(EIF_REFERENCE *)(Current);
			ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R3001[Dtype(RTCW(tr1))-998])(tr1, loc3);
			loc3 = (EIF_INTEGER_32) ti4_1;
			loc1++;
		}
	} else {
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			tb1 = '\01';
			if (!(EIF_BOOLEAN) (loc1 > loc2)) {
				tr1 = *(EIF_REFERENCE *)(Current);
				tr1 = *(EIF_REFERENCE *)(RTCW(tr1) + O3011[Dtype(tr1)-998]);
				ti4_1 = (EIF_INTEGER_32) eif_builtin_SPECIAL_count (tr1);
				tb1 = (EIF_BOOLEAN) (loc3 >= ti4_1);
			}
			if (tb1) break;
			tr1 = *(EIF_REFERENCE *)(Current);
			ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R3000[Dtype(RTCW(tr1))-998])(tr1, loc3);
			loc3 = (EIF_INTEGER_32) ti4_1;
			loc1++;
		}
	}
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_4_) = (EIF_INTEGER_32) loc3;
	RTLE;
}

/* {HASH_TABLE_ITERATION_CURSOR}.target */
EIF_REFERENCE F1153_4418 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


void EIF_Minit2028 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
