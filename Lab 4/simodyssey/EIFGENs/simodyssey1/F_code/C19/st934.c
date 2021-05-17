/*
 * Code for class STRING_TABLE [INTEGER_32]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "st934.h"

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
void F1007_4036 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_5_3_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	F1001_3924(Current, arg1);
	RTLE;
}

/* {STRING_TABLE}.hash_code_of */
EIF_INTEGER_32 F1007_4038 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_5_3_)) {
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
EIF_BOOLEAN F1007_4040 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
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
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_5_3_)) {
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
EIF_BOOLEAN F1007_4041 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	tb1 = *(EIF_BOOLEAN *)(RTCW(arg1)+ _CHROFF_5_3_);
	if ((EIF_BOOLEAN)(*(EIF_BOOLEAN *)(Current+ _CHROFF_5_3_) == tb1)) {
		RTLE;
		return (EIF_BOOLEAN) F1001_3946(Current, arg1);
	}
	RTLE;
	return (EIF_BOOLEAN) 0;
}

/* {STRING_TABLE}.empty_duplicate */
EIF_REFERENCE F1007_4042 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTGC;
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_5_3_)) {
		Result = RTLNSMART(dftype);
		F1007_4036(RTCW(Result), arg1);
	} else {
		Result = RTLNSMART(dftype);
		F1001_3924(RTCW(Result), arg1);
	}
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_5_0_)) {
		F583_2465(RTCW(Result));
	}
	RTLE;
	return Result;
}

void EIF_Minit934 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
