/*
 * Code for class ETF_TUPLE_ARG
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "et1275.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {ETF_TUPLE_ARG}.make */
void F366_13144 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	tr1 = RTLNSMART(eif_new_type(1560, 1).id);
	F1558_6510(RTCW(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) arg1;
	RTLE;
}

/* {ETF_TUPLE_ARG}.out */
EIF_REFERENCE F366_13146 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Result);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTGC;
	Result = RTLNS(eif_new_type(1560, 0x01).id, 1560, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F1558_6510(RTCW(Result));
	tr1 = RTMS_EX_H("[",1,91);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, tr1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	loc1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_1_1_0_1_);
	for (;;) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_1_1_0_0_);
		if ((EIF_BOOLEAN) (loc1 > ti4_1)) break;
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tr1 = F919_3191(RTCW(tr1), loc1);
		tr1 = *(EIF_REFERENCE *)(RTCW(tr1));
		tb1 = F743_2537(RTCW(tr1));
		if ((EIF_BOOLEAN) !tb1) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			tr1 = F919_3191(RTCW(tr1), loc1);
			tr1 = *(EIF_REFERENCE *)(RTCW(tr1));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, tr1);
		} else {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			tr1 = F919_3191(RTCW(tr1), loc1);
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R28[Dtype(RTCW(tr1))-0])(tr1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, tr1);
		}
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		ti4_2 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_1_1_0_0_);
		if ((EIF_BOOLEAN) (loc1 < ti4_2)) {
			tr1 = RTMS_EX_H(", ",2,11296);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, tr1);
		}
		loc1++;
	}
	tr1 = RTMS_EX_H("]",1,93);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, tr1);
	RTLE;
	return Result;
}

void EIF_Minit1275 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
