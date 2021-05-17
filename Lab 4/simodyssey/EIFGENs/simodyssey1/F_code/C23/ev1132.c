/*
 * Code for class EV_DOCKABLE_SOURCE_ACTION_SEQUENCES_I
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1132.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_DOCKABLE_SOURCE_ACTION_SEQUENCES_I}.dock_ended_actions */
EIF_REFERENCE F209_11083 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O8860[dtype-208]) == NULL)) {
		tr1 = RTLNSMART(eif_new_type(996, 0).id);
		F976_4196(RTCW(tr1));
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + O8860[dtype-208]) = (EIF_REFERENCE) tr1;
	}
	RTLE;
	return (EIF_REFERENCE) *(EIF_REFERENCE *)(Current + O8860[dtype-208]);
}

void EIF_Minit1132 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
