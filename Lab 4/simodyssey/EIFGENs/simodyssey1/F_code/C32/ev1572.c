/*
 * Code for class EV_MULTI_COLUMN_LIST_ACTION_SEQUENCES
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1572.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_MULTI_COLUMN_LIST_ACTION_SEQUENCES}.column_title_click_actions */
EIF_REFERENCE F1577_17653 (EIF_REFERENCE Current)
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
	Result = F161_10373(RTCW(tr1));
	RTLE;
	return Result;
}

void EIF_Minit1572 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
