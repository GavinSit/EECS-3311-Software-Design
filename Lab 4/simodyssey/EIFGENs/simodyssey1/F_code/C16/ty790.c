/*
 * Code for class TYPED_INDEXABLE_ITERATION_CURSOR [BOOLEAN, G#2]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ty790.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {TYPED_INDEXABLE_ITERATION_CURSOR}.item */
EIF_BOOLEAN F1061_4324 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3212[dtype-1062])(Current);
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3199[dtype-1062])(Current);
	Result = (eif_optimize_return = 1, *(EIF_BOOLEAN *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2556[Dtype(RTCW(tr1))-849])(tr1, ti4_1));
	RTLE;
	return Result;
}

void EIF_Minit790 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
