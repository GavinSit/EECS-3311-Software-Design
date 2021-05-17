/*
 * Code for class EV_PICK_AND_DROPABLE_ACTION_SEQUENCES
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1582.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_PICK_AND_DROPABLE_ACTION_SEQUENCES}.drop_actions */
EIF_REFERENCE F1587_17684 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	
	RTGC;
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R14948[Dtype(Current)-1634])(Current);
	Result = F320_12790(RTCW(tr1));
	tb1 = F736_2537(RTCW(Result));
	if (tb1) {
		F1295_15092(Current, Result);
	}
	RTLE;
	return Result;
}

void EIF_Minit1582 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
