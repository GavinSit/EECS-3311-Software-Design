/*
 * Code for class EV_DESELECTABLE_I
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1728.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_DESELECTABLE_I}.toggle */
void F1739_19677 (EIF_REFERENCE Current)
{
	GTCX
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R16459[dtype-1958])(Current)) {
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R16462[dtype-1958])(Current);
	} else {
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R16460[dtype-1809])(Current);
	}
	RTLE;
}

void EIF_Minit1728 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
