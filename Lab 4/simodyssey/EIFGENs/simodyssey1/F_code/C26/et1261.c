/*
 * Code for class ETF_TUPLE_PARAM
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "et1261.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {ETF_TUPLE_PARAM}.out */
EIF_REFERENCE F352_13086 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
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
	tr1 = RTMS_EX_H("TUPLE[",6,1512979291);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, tr1);
	tr1 = *(EIF_REFERENCE *)(Current);
	loc1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_1_1_0_1_);
	for (;;) {
		tr1 = *(EIF_REFERENCE *)(Current);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_1_1_0_0_);
		if ((EIF_BOOLEAN) (loc1 > ti4_1)) break;
		tr1 = *(EIF_REFERENCE *)(Current);
		tr1 = F919_3191(RTCW(tr1), loc1);
		tr1 = *(EIF_REFERENCE *)(RTCW(tr1));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, tr1);
		tr1 = RTMS_EX_H(": ",2,14880);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, tr1);
		tr1 = *(EIF_REFERENCE *)(Current);
		tr1 = F919_3191(RTCW(tr1), loc1);
		tr1 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_1_);
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R28[Dtype(RTCW(tr1))-0])(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, tr1);
		tr1 = *(EIF_REFERENCE *)(Current);
		ti4_2 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_1_1_0_0_);
		if ((EIF_BOOLEAN) (loc1 < ti4_2)) {
			tr1 = RTMS_EX_H("; ",2,15136);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, tr1);
		}
		loc1++;
	}
	tr1 = RTMS_EX_H("]",1,93);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, tr1);
	RTLE;
	return Result;
}

void EIF_Minit1261 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
