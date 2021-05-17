/*
 * Code for class EV_BUTTON_ACTION_SEQUENCES
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1586.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_BUTTON_ACTION_SEQUENCES}.select_actions */
EIF_REFERENCE F1591_17697 (EIF_REFERENCE Current)
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
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R14964[Dtype(Current)-1663])(Current);
	Result = F232_11528(RTCW(tr1));
	RTLE;
	return Result;
}

void EIF_Minit1586 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
