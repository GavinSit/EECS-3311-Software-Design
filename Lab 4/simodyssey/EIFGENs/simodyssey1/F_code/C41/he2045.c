/*
 * Code for class HEAP_PRIORITY_QUEUE_ITERATION_CURSOR [G#1]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "he2045.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {HEAP_PRIORITY_QUEUE_ITERATION_CURSOR}.item */
EIF_REFERENCE F1032_4302 (EIF_REFERENCE Current)
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
	Result = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2556[Dtype(RTCW(tr1))-849])(tr1, *(EIF_INTEGER_32 *)(Current + _REFACS_1_));
	RTLE;
	return Result;
}

/* {HEAP_PRIORITY_QUEUE_ITERATION_CURSOR}.after */
EIF_BOOLEAN F1032_4303 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current + _REFACS_1_) > *(EIF_INTEGER_32 *)(Current + _REFACS_2_));
}

/* {HEAP_PRIORITY_QUEUE_ITERATION_CURSOR}.forth */
void F1032_4304 (EIF_REFERENCE Current)
{
	GTCX
	
	
	(*(EIF_INTEGER_32 *)(Current + _REFACS_1_))++;
}

void EIF_Minit2045 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
