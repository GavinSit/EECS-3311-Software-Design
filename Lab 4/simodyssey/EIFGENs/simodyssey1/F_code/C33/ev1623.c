/*
 * Code for class EV_PICK_AND_DROPABLE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1623.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_PICK_AND_DROPABLE}.configurable_target_menu_handler */
EIF_REFERENCE F1628_18224 (EIF_REFERENCE Current)
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
	Result = *(EIF_REFERENCE *)(RTCW(tr1) + O16503[Dtype(tr1)-1750]);
	RTLE;
	return Result;
}

void EIF_Minit1623 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
