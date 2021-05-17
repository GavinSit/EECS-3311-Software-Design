/*
 * Code for class STRING_ITERATION_CURSOR
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "st163.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {STRING_ITERATION_CURSOR}.item */
EIF_CHARACTER_32 F1029_4260 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER_32 Result = ((EIF_CHARACTER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	Result = (FUNCTION_CAST(EIF_CHARACTER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4645[Dtype(RTCW(tr1))-1560])(tr1, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_));
	RTLE;
	return Result;
}

/* {STRING_ITERATION_CURSOR}.after */
EIF_BOOLEAN F1029_4263 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_) > *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_));
}

/* {STRING_ITERATION_CURSOR}.forth */
void F1029_4265 (EIF_REFERENCE Current)
{
	GTCX
	
	
	(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_))++;
}

void EIF_Minit163 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
