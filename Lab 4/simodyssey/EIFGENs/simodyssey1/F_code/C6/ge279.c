/*
 * Code for class GENERAL_SPECIAL_ITERATION_CURSOR [G#1, G#2]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ge279.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {GENERAL_SPECIAL_ITERATION_CURSOR}.item */
EIF_REFERENCE F1081_4364 (EIF_REFERENCE Current)
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
	Result = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2556[Dtype(RTCW(tr1))-849])(tr1, *(EIF_INTEGER_32 *)(Current + O3226[Dtype(Current)-1080]));
	RTLE;
	return Result;
}

/* {GENERAL_SPECIAL_ITERATION_CURSOR}.target_index */
EIF_INTEGER_32 F1081_4366 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	Result = *(EIF_INTEGER_32 *)(Current + O3226[dtype-1080]);
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3200[dtype-1062])(Current);
	ti4_2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3227[dtype-1095])(Current);
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (Result + ti4_1) - ti4_2);
	RTLE;
	return Result;
}

/* {GENERAL_SPECIAL_ITERATION_CURSOR}.after */
EIF_BOOLEAN F1081_4373 (EIF_REFERENCE Current)
{
	GTCX
	RTCDT;
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current + O3226[dtype-1080]) > *(EIF_INTEGER_32 *)(Current + O3228[dtype-1080]));
}

/* {GENERAL_SPECIAL_ITERATION_CURSOR}.start */
void F1081_4378 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3227[dtype-1095])(Current);
	*(EIF_INTEGER_32 *)(Current + O3226[dtype-1080]) = (EIF_INTEGER_32) ti4_1;
	RTLE;
}

/* {GENERAL_SPECIAL_ITERATION_CURSOR}.forth */
void F1081_4379 (EIF_REFERENCE Current)
{
	GTCX
	RTCDT;
	
	
	(*(EIF_INTEGER_32 *)(Current + O3226[dtype-1080]))++;
}

/* {GENERAL_SPECIAL_ITERATION_CURSOR}.area */
EIF_REFERENCE F1081_4380 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


void EIF_Minit279 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
