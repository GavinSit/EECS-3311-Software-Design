/*
 * Code for class EV_POPUP_WINDOW
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1638.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_POPUP_WINDOW}.implementation */
EIF_REFERENCE F1644_18493 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_3_);
}


/* {EV_POPUP_WINDOW}.create_implementation */
void F1644_18494 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_6_3_)) {
		tr1 = RTLNS(eif_new_type(1982, 0x01).id, 1982, _OBJSIZ_70_30_6_11_0_3_0_3_);
		F1764_19947(RTCW(tr1));
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	} else {
		tr1 = RTLNS(eif_new_type(1982, 0x01).id, 1982, _OBJSIZ_70_30_6_11_0_3_0_3_);
		F1983_24538(RTCW(tr1));
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	}
	RTLE;
}

void EIF_Minit1638 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
