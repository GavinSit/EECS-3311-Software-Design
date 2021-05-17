/*
 * Code for class TREE_ITERATION_CURSOR [G#1]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "tr2040.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {TREE_ITERATION_CURSOR}.item */
EIF_REFERENCE F1155_4420 (EIF_REFERENCE Current)
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
	Result = *(EIF_REFERENCE *)(RTCW(tr1) + O1718[Dtype(tr1)-488]);
	RTLE;
	return Result;
}

/* {TREE_ITERATION_CURSOR}.after */
EIF_BOOLEAN F1155_4421 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	Result = F744_2537(RTCW(tr1));
	RTLE;
	return Result;
}

/* {TREE_ITERATION_CURSOR}.forth */
void F1155_4422 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCFDT;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc2);
	RTLR(3,loc3);
	RTLR(4,loc5);
	RTLIU(5);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	loc1 = (eif_optimize_return = 1, *(EIF_INTEGER_32 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2258[Dtype(RTCW(tr1))-818])(tr1));
	tr1 = *(EIF_REFERENCE *)(Current);
	loc4 = ((EIF_INTEGER_32) 2L);
	tr1 = *(EIF_REFERENCE *)(Current);
	loc2 = F716_2916(RTCW(tr1));
	for (;;) {
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc1 >= loc4) || (EIF_BOOLEAN)(loc3 != NULL))) break;
		loc1++;
		tr1 = *(EIF_REFERENCE *)(Current);
		F716_2932(RTCW(tr1), loc1);
		tr1 = *(EIF_REFERENCE *)(Current);
		tb1 = F715_2790(RTCW(tr1));
		if (tb1) {
			tr1 = *(EIF_REFERENCE *)(Current);
			loc3 = F716_2915(RTCW(tr1));
		}
	}
	tr1 = *(EIF_REFERENCE *)(Current);
	F716_2927(RTCW(tr1), loc2);
	if ((EIF_BOOLEAN)(loc3 != NULL)) {
		RTAR(Current, loc3);
		*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) loc3;
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2262[Dtype(RTCW(tr1))-911])(tr1, (EIF_REFERENCE) &loc1);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		ti4_1 = ((EIF_INTEGER_32) 0L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2221[Dtype(RTCW(tr1))-818])(tr1, (EIF_REFERENCE) &ti4_1);
	} else {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R2263[Dtype(RTCW(tr1))-818])(tr1);
		tr1 = *(EIF_REFERENCE *)(Current);
		tr1 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_1_);
		loc5 = tr1;
		if (EIF_TEST(loc5)) {
			RTAR(Current, loc5);
			*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) loc5;
		}
	}
	RTLE;
}

void EIF_Minit2040 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
