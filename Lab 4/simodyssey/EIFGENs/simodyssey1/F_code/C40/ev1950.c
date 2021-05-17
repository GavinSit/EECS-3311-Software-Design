/*
 * Code for class EV_TOOL_BAR_TOGGLE_BUTTON_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1950.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_TOOL_BAR_TOGGLE_BUTTON_IMP}.enable_select */
void F1967_23974 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_34_14_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_33_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		F1928_22954(loc1, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_34_20_6_2_));
	}
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_5_) != NULL)) {
		tr1 = F284_12083(Current);
		F977_14409(RTCW(tr1), NULL);
	}
	RTLE;
}

/* {EV_TOOL_BAR_TOGGLE_BUTTON_IMP}.disable_select */
void F1967_23975 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_34_14_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_33_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		F1928_22955(loc1, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_34_20_6_2_));
	}
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_5_) != NULL)) {
		tr1 = F284_12083(Current);
		F977_14409(RTCW(tr1), NULL);
	}
	RTLE;
}

/* {EV_TOOL_BAR_TOGGLE_BUTTON_IMP}.is_selected */
EIF_BOOLEAN F1967_23976 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_34_14_);
}


/* {EV_TOOL_BAR_TOGGLE_BUTTON_IMP}.update_selected */
void F1967_23978 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	
	
	*(EIF_BOOLEAN *)(Current+ _CHROFF_34_14_) = (EIF_BOOLEAN) arg1;
}

void EIF_Minit1950 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
