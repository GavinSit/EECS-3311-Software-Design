/*
 * Code for class ARRAY_ITERATION_CURSOR [G#1]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ar276.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {ARRAY_ITERATION_CURSOR}.make */
void F1113_4402 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) arg1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr1 = *(EIF_REFERENCE *)(RTCW(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O2664[Dtype(arg1)-918]);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_2_) = (EIF_INTEGER_32) ti4_1;
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O2663[Dtype(arg1)-918]);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_1_) = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 - *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_2_));
	RTLE;
}

/* {ARRAY_ITERATION_CURSOR}.first_index */
EIF_INTEGER_32 F1113_4403 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_2_);
}


/* {ARRAY_ITERATION_CURSOR}.target */
EIF_REFERENCE F1113_4406 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {ARRAY_ITERATION_CURSOR}.area_first_index */
EIF_INTEGER_32 F1113_4407 (EIF_REFERENCE Current)
{
	return (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
}

void EIF_Minit276 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
