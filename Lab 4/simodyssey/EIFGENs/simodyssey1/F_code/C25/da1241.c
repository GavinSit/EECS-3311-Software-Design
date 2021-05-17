/*
 * Code for class DATE_TIME_MEASUREMENT
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "da1241.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {DATE_TIME_MEASUREMENT}.year */
EIF_INTEGER_32 F332_12911 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R10660[Dtype(Current)-481])(Current);
	Result = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R10674[Dtype(RTCW(tr1))-483])(tr1);
	RTLE;
	return Result;
}

/* {DATE_TIME_MEASUREMENT}.month */
EIF_INTEGER_32 F332_12912 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R10660[Dtype(Current)-481])(Current);
	Result = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R10673[Dtype(RTCW(tr1))-483])(tr1);
	RTLE;
	return Result;
}

/* {DATE_TIME_MEASUREMENT}.day */
EIF_INTEGER_32 F332_12913 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R10660[Dtype(Current)-481])(Current);
	Result = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R10672[Dtype(RTCW(tr1))-483])(tr1);
	RTLE;
	return Result;
}

/* {DATE_TIME_MEASUREMENT}.second */
EIF_INTEGER_32 F332_12916 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R10661[Dtype(Current)-481])(Current);
	Result = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R10629[Dtype(RTCW(tr1))-329])(tr1);
	RTLE;
	return Result;
}

void EIF_Minit1241 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
