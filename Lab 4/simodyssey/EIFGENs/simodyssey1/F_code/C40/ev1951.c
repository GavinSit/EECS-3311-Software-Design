/*
 * Code for class EV_TOOL_BAR_RADIO_BUTTON_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1951.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_TOOL_BAR_RADIO_BUTTON_IMP}.make */
void F1968_23979 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1965_23937(Current);
	F1968_23981(Current);
	RTLE;
}

/* {EV_TOOL_BAR_RADIO_BUTTON_IMP}.is_selected */
EIF_BOOLEAN F1968_23980 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_35_14_);
}


/* {EV_TOOL_BAR_RADIO_BUTTON_IMP}.enable_select */
void F1968_23981 (EIF_REFERENCE Current)
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
	F1968_23983(Current);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_34_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		F1928_22954(loc1, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_35_20_6_2_));
	}
	RTLE;
}

/* {EV_TOOL_BAR_RADIO_BUTTON_IMP}.disable_select */
void F1968_23982 (EIF_REFERENCE Current)
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
	*(EIF_BOOLEAN *)(Current+ _CHROFF_35_14_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_34_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		F1928_22955(loc1, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_35_20_6_2_));
	}
	RTLE;
}

/* {EV_TOOL_BAR_RADIO_BUTTON_IMP}.update_radio_states */
void F1968_23983 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTGC;
	loc2 = *(EIF_REFERENCE *)(Current + _REFACS_22_);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		loc1 = F912_3521(RTCW(loc2));
		F912_3534(RTCW(loc2));
		for (;;) {
			tb1 = F912_3528(RTCW(loc2));
			if (tb1) break;
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2258[Dtype(RTCW(loc2))-818])(loc2);
			if ((EIF_BOOLEAN)(tr1 != Current)) {
				tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2258[Dtype(RTCW(loc2))-818])(loc2);
				F1968_23982(RTCW(tr1));
			}
			F912_3536(RTCW(loc2));
		}
		F912_3540(RTCW(loc2), loc1);
	}
	*(EIF_BOOLEAN *)(Current+ _CHROFF_35_14_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTLE;
}

void EIF_Minit1951 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
