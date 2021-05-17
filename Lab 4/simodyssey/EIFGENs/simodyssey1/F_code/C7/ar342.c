/*
 * Code for class ARRAYED_LIST_ITERATION_CURSOR [NATURAL_16]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ar342.h"

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
void F1097_4384 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	tr1 = F952_4077(RTCW(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	ti4_1 = F952_4096(RTCW(arg1));
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_1_) = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L));
	RTLE;
}

/* {ARRAYED_LIST_ITERATION_CURSOR}.first_index */
EIF_INTEGER_32 F1097_4385 (EIF_REFERENCE Current)
{
	return (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
}

/* {ARRAYED_LIST_ITERATION_CURSOR}.target */
EIF_REFERENCE F1097_4388 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {ARRAYED_LIST_ITERATION_CURSOR}.area_first_index */
EIF_INTEGER_32 F1097_4389 (EIF_REFERENCE Current)
{
	return (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
}

void EIF_Minit342 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
