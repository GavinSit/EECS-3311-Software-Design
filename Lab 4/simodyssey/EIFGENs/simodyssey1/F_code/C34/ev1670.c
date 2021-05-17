/*
 * Code for class EV_TOOL_BAR_RADIO_BUTTON
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1670.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_TOOL_BAR_RADIO_BUTTON}.implementation */
EIF_REFERENCE F1676_18822 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_3_);
}


/* {EV_TOOL_BAR_RADIO_BUTTON}.create_implementation */
void F1676_18823 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(1967, 0x01).id, 1967, _OBJSIZ_35_20_6_5_0_0_0_3_);
	F1968_23979(RTCW(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	RTLE;
}

void EIF_Minit1670 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
