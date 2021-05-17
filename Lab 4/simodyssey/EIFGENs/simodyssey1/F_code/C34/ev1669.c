/*
 * Code for class EV_TOOL_BAR_TOGGLE_BUTTON
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1669.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_TOOL_BAR_TOGGLE_BUTTON}.implementation */
EIF_REFERENCE F1675_18819 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_3_);
}


/* {EV_TOOL_BAR_TOGGLE_BUTTON}.create_implementation */
void F1675_18820 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(1966, 0x01).id, 1966, _OBJSIZ_34_20_6_5_0_0_0_3_);
	F1965_23937(RTCW(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	RTLE;
}

void EIF_Minit1669 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
