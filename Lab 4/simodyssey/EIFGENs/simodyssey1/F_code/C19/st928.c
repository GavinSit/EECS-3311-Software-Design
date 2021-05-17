/*
 * Code for class STRING_TABLE [G#1]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "st928.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {STRING_TABLE}.make_caseless */
void F1006_4036 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	*(EIF_BOOLEAN *)(Current + O3063[dtype-1005]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R2970[dtype-998])(Current, arg1);
	RTLE;
}

/* {STRING_TABLE}.hash_code_of */
EIF_INTEGER_32 F1006_4038 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	if (*(EIF_BOOLEAN *)(Current + O3063[Dtype(Current)-1005])) {
		ti4_1 = F1558_6520(RTCW(arg1));
		RTLE;
		return (EIF_INTEGER_32) ti4_1;
	} else {
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3816[Dtype(RTCW(arg1))-1420])(arg1);
		RTLE;
		return (EIF_INTEGER_32) ti4_1;
	}/* NOTREACHED */
	
}

/* {STRING_TABLE}.same_keys */
EIF_BOOLEAN F1006_4040 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,arg2);
	RTLIU(3);
	
	RTGC;
	if (*(EIF_BOOLEAN *)(Current + O3063[Dtype(Current)-1005])) {
		tb1 = F1558_6552(RTCW(arg1), arg2);
		RTLE;
		return (EIF_BOOLEAN) tb1;
	} else {
		tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R4687[Dtype(RTCW(arg1))-1560])(arg1, arg2);
		RTLE;
		return (EIF_BOOLEAN) tb1;
	}/* NOTREACHED */
	
}

/* {STRING_TABLE}.is_equal */
EIF_BOOLEAN F1006_4041 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	tb1 = *(EIF_BOOLEAN *)(RTCW(arg1) + O3063[Dtype(arg1)-1005]);
	if ((EIF_BOOLEAN)(*(EIF_BOOLEAN *)(Current + O3063[Dtype(Current)-1005]) == tb1)) {
		RTLE;
		return (EIF_BOOLEAN) F999_3946(Current, arg1);
	}
	RTLE;
	return (EIF_BOOLEAN) 0;
}

/* {STRING_TABLE}.empty_duplicate */
EIF_REFERENCE F1006_4042 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTGC;
	if (*(EIF_BOOLEAN *)(Current + O3063[dtype-1005])) {
		Result = RTLNSMART(dftype);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R3061[Dtype(RTCW(Result))-1005])(Result, arg1);
	} else {
		Result = RTLNSMART(dftype);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R2970[Dtype(RTCW(Result))-998])(Result, arg1);
	}
	if (*(EIF_BOOLEAN *)(Current + O2212[dtype-574])) {
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R2214[Dtype(RTCW(Result))-715])(Result);
	}
	RTLE;
	return Result;
}

void EIF_Minit928 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
