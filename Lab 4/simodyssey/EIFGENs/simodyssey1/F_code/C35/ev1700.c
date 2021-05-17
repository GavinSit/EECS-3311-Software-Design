/*
 * Code for class EV_FONT_I
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1700.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_FONT_I}.copy_preferred_families */
void F1707_19187 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,arg1);
	RTLIU(4);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr1 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_3_);
	F976_4204(RTCW(tr1));
	tr1 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_4_);
	F976_4204(RTCW(tr1));
	F969_4184(RTCW(loc1));
	F969_4173(RTCW(loc1), arg1);
	tr1 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_3_);
	F976_4206(RTCW(tr1));
	tr1 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_4_);
	F976_4206(RTCW(tr1));
	RTLE;
}

void EIF_Minit1700 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
