/*
 * Code for class EV_ITEM_ACTION_SEQUENCES
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1576.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_ITEM_ACTION_SEQUENCES}.pointer_motion_actions */
EIF_REFERENCE F1581_17666 (EIF_REFERENCE Current)
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
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R14933[Dtype(Current)-1668])(Current);
	Result = F177_10616(RTCW(tr1));
	RTLE;
	return Result;
}

/* {EV_ITEM_ACTION_SEQUENCES}.pointer_button_press_actions */
EIF_REFERENCE F1581_17667 (EIF_REFERENCE Current)
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
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R14933[Dtype(Current)-1668])(Current);
	Result = F177_10618(RTCW(tr1));
	RTLE;
	return Result;
}

/* {EV_ITEM_ACTION_SEQUENCES}.pointer_double_press_actions */
EIF_REFERENCE F1581_17668 (EIF_REFERENCE Current)
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
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R14933[Dtype(Current)-1668])(Current);
	Result = F177_10620(RTCW(tr1));
	RTLE;
	return Result;
}

void EIF_Minit1576 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
