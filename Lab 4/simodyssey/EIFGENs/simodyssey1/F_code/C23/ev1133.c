/*
 * Code for class EV_DOCKABLE_TARGET_ACTION_SEQUENCES_I
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1133.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_DOCKABLE_TARGET_ACTION_SEQUENCES_I}.docked_actions */
EIF_REFERENCE F210_11086 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_2_) == NULL)) {
		tr1 = RTLNSMART(eif_new_type(986, 0).id);
		F976_4196(RTCW(tr1));
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
	}
	RTLE;
	return (EIF_REFERENCE) *(EIF_REFERENCE *)(Current + _REFACS_2_);
}

void EIF_Minit1133 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
