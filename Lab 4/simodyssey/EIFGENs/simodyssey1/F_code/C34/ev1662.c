/*
 * Code for class EV_ITEM
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1662.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_ITEM}.parent */
EIF_REFERENCE F1668_18782 (EIF_REFERENCE Current)
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
	tr1 = *(EIF_REFERENCE *)(Current + O15014[Dtype(Current)-1595]);
	Result = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R16915[Dtype(RTCW(tr1))-1958])(tr1);
	RTLE;
	return Result;
}

void EIF_Minit1662 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
