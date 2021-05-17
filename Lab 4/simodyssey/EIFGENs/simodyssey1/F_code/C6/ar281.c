/*
 * Code for class ARRAYED_LIST_ITERATION_CURSOR [G#1]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ar281.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {ARRAYED_LIST_ITERATION_CURSOR}.make */
void F1096_4384 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3085[Dtype(RTCW(tr1))-950])(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3089[Dtype(RTCW(arg1))-950])(arg1);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_1_) = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L));
	RTLE;
}

/* {ARRAYED_LIST_ITERATION_CURSOR}.first_index */
EIF_INTEGER_32 F1096_4385 (EIF_REFERENCE Current)
{
	return (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
}

/* {ARRAYED_LIST_ITERATION_CURSOR}.target */
EIF_REFERENCE F1096_4388 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {ARRAYED_LIST_ITERATION_CURSOR}.area_first_index */
EIF_INTEGER_32 F1096_4389 (EIF_REFERENCE Current)
{
	return (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
}

void EIF_Minit281 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
