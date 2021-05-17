/*
 * Code for class EV_SCROLLABLE_AREA
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1636.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_SCROLLABLE_AREA}.show_horizontal_scroll_bar */
void F1642_18444 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	F1981_24415(RTCW(tr1));
	RTLE;
}

/* {EV_SCROLLABLE_AREA}.show_vertical_scroll_bar */
void F1642_18446 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	F1981_24417(RTCW(tr1));
	RTLE;
}

/* {EV_SCROLLABLE_AREA}.hide_vertical_scroll_bar */
void F1642_18447 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	F1981_24418(RTCW(tr1));
	RTLE;
}

/* {EV_SCROLLABLE_AREA}.implementation */
EIF_REFERENCE F1642_18449 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_3_);
}


/* {EV_SCROLLABLE_AREA}.create_implementation */
void F1642_18450 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(1980, 0x01).id, 1980, _OBJSIZ_64_28_6_7_0_2_0_3_);
	F1981_24410(RTCW(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	RTLE;
}

void EIF_Minit1636 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
