/*
 * Code for class ETF_GUI_ROOT_INTERFACE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "et1182.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {ETF_GUI_ROOT_INTERFACE}.show_history */
void F265_11870 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_BOOLEAN *)(Current+ _CHROFF_7_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
}

/* {ETF_GUI_ROOT_INTERFACE}.hide_history */
void F265_11871 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_BOOLEAN *)(Current+ _CHROFF_7_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
}

/* {ETF_GUI_ROOT_INTERFACE}.make */
void F265_11874 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLIU(3);
	
	RTGC;
	tr1 = RTLNSMART(eif_new_type(97, 0).id);
	F98_10065(RTCW(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTCT0("attached gui as g", EX_CHECK);
	tr1 = *(EIF_REFERENCE *)(Current);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		RTCK0;
	} else {
		RTCF0;
	}
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_7_0_)) {
		tr1 = *(EIF_REFERENCE *)(loc1);
		tr1 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_18_);
		F1632_18312(RTCW(tr1));
	} else {
		tr1 = *(EIF_REFERENCE *)(loc1);
		tr1 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_18_);
		F1632_18311(RTCW(tr1));
	}
	RTLE;
}

void EIF_Minit1182 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
