/*
 * Code for class ETF_ARRAY_PARAM
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "et1249.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {ETF_ARRAY_PARAM}.out */
EIF_REFERENCE F340_13043 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,tr2);
	RTLR(3,Result);
	RTLIU(4);
	
	RTGC;
	tr1 = RTMS_EX_H("ARRAY[",6,1508439387);
	tr2 = *(EIF_REFERENCE *)(Current);
	tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R28[Dtype(RTCW(tr2))-0])(tr2);
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(tr1)-1560])(tr1, tr2);
	tr2 = RTMS_EX_H("]",1,93);
	Result = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
	RTLE;
	return Result;
}

void EIF_Minit1249 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
