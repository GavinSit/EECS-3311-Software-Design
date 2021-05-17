/*
 * Code for class EV_TEXT_FIELD_ACTION_SEQUENCES
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1587.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_TEXT_FIELD_ACTION_SEQUENCES}.return_actions */
EIF_REFERENCE F1592_17699 (EIF_REFERENCE Current)
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
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R14966[Dtype(Current)-1661])(Current);
	Result = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R9311[Dtype(RTCW(tr1))-2000])(tr1);
	RTLE;
	return Result;
}

void EIF_Minit1587 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
