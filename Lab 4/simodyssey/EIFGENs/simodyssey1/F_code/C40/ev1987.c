/*
 * Code for class EV_TOGGLE_BUTTON_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1987.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_TOGGLE_BUTTON_IMP}.make */
void F2004_25158 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F2002_25107(Current);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_58_15_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTLE;
}

/* {EV_TOGGLE_BUTTON_IMP}.is_selected */
EIF_BOOLEAN F2004_25159 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_58_15_);
}


/* {EV_TOGGLE_BUTTON_IMP}.enable_select */
void F2004_25160 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_58_15_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	tr1 = F232_11528(Current);
	F977_14409(RTCW(tr1), NULL);
	F1912_22563(Current);
	RTLE;
}

/* {EV_TOGGLE_BUTTON_IMP}.disable_select */
void F2004_25161 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_58_15_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	tr1 = F232_11528(Current);
	F977_14409(RTCW(tr1), NULL);
	F1912_22563(Current);
	RTLE;
}

/* {EV_TOGGLE_BUTTON_IMP}.has_pushed_appearence */
EIF_BOOLEAN F2004_25162 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	Result = F2002_25129(Current, arg1);
	if ((EIF_BOOLEAN) !Result) {
		Result = *(EIF_BOOLEAN *)(Current+ _CHROFF_58_15_);
		RTLE;
		return (EIF_BOOLEAN) Result;
	}
	RTLE;
	return Result;
}

/* {EV_TOGGLE_BUTTON_IMP}.on_bn_clicked */
void F2004_25163 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_58_15_) = (EIF_BOOLEAN) (EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_58_15_);
	F1912_22563(Current);
	tr1 = F232_11528(Current);
	F977_14409(RTCW(tr1), NULL);
	RTLE;
}

/* {EV_TOGGLE_BUTTON_IMP}.on_bn_double_clicked */
void F2004_25164 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_58_15_) = (EIF_BOOLEAN) (EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_58_15_);
	F1912_22563(Current);
	tr1 = F232_11528(Current);
	F977_14409(RTCW(tr1), NULL);
	RTLE;
}

/* {EV_TOGGLE_BUTTON_IMP}.process_notification */
void F2004_25165 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 5L))) {
		F2004_25164(Current);
	} else {
		F1941_23312(Current, arg1);
	}
	RTLE;
}

/* {EV_TOGGLE_BUTTON_IMP}.update_current_push_button */
void F2004_25166 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(RTCV(F1956_23756(Current)) + _REFACS_40_);
	loc1 = RTRV(eif_new_type(1765, 0x00), loc1);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		tr1 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_58_);
		F1766_19981(RTCW(loc1), tr1);
	}
	RTLE;
}

/* {EV_TOGGLE_BUTTON_IMP}.internal_background_brush */
EIF_REFERENCE F2004_25167 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_58_15_)) {
		RTLE;
		return (EIF_REFERENCE) F2002_25132(Current);
	} else {
		RTLE;
		return (EIF_REFERENCE) F2004_25169(Current);
	}/* NOTREACHED */
	
}

/* {EV_TOGGLE_BUTTON_IMP}.fire_select_actions_on_enter */
void F2004_25168 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {EV_TOGGLE_BUTTON_IMP}.splitter_brush */
EIF_REFERENCE F2004_25169 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	loc1 = RTLNS(eif_new_type(34, 0x01).id, 34, _OBJSIZ_0_0_0_0_0_0_0_0_);
	tr1 = F35_9060(RTCW(loc1));
	RTLE;
	return (EIF_REFERENCE) tr1;
}

void EIF_Minit1987 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
