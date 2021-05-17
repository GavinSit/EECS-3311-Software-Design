/*
 * Code for class EV_WINDOW_ACTION_SEQUENCES
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1589.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_WINDOW_ACTION_SEQUENCES}.move_actions */
EIF_REFERENCE F1594_17717 (EIF_REFERENCE Current)
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
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R14984[Dtype(Current)-1642])(Current);
	Result = F246_11658(RTCW(tr1));
	RTLE;
	return Result;
}

/* {EV_WINDOW_ACTION_SEQUENCES}.close_request_actions */
EIF_REFERENCE F1594_17720 (EIF_REFERENCE Current)
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
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R14984[Dtype(Current)-1642])(Current);
	Result = F246_11656(RTCW(tr1));
	RTLE;
	return Result;
}

void EIF_Minit1589 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
