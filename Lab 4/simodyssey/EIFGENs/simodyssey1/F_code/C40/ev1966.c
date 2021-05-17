/*
 * Code for class EV_POPUP_WINDOW_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1966.h"
#include <windows.h>
#include "eif_misc.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_POPUP_WINDOW_IMP}.make */
void F1983_24538 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,999,0xFF01,1604,1508,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNSMART(typres0.id);
	}
	F1000_3924(RTCW(tr1), ((EIF_INTEGER_32) 10L));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_53_) = (EIF_REFERENCE) tr1;
	F1982_24436(Current);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_70_15_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_70_16_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTLE;
}

/* {EV_POPUP_WINDOW_IMP}.is_top_level */
EIF_BOOLEAN F1983_24539 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
}

/* {EV_POPUP_WINDOW_IMP}.on_wm_mouseactivate */
void F1983_24541 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_70_17_)) {
		F1982_24497(Current, arg1, arg2);
	} else {
		tp1 = (EIF_POINTER) (LRESULT)((((EIF_INTEGER_32) 3L)));
		F214_11244(Current, tp1);
		F1912_22507(Current);
	}
	RTLE;
}

/* {EV_POPUP_WINDOW_IMP}.class_name */
EIF_REFERENCE F1983_24542 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	
	RTGC;
	Result = RTLNS(eif_new_type(1564, 0x01).id, 1564, _OBJSIZ_1_1_0_3_0_0_0_0_);
	tr1 = F1_4(Current);
	F1565_6898(RTCW(Result), tr1);
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_70_18_)) {
		tr1 = RTMS_EX_H("_with_shadow",12,585657463);
		F1565_6937(RTCW(Result), tr1);
	}
	RTLE;
	return Result;
}

/* {EV_POPUP_WINDOW_IMP}.class_style */
EIF_INTEGER_32 F1983_24543 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLIU(2);
	
	RTGC;
	Result = RTOUCB(EIF_INTEGER_32,240,F1982_24437, (Current));
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_70_18_)) {
		loc1 = RTLNS(eif_new_type(499, 0x01).id, 499, _OBJSIZ_0_0_0_0_0_0_0_0_);
		tb1 = F500_14106(RTCW(loc1));
		if (tb1) {
			ti4_1 = eif_bit_or(Result,((EIF_INTEGER_32) 131072L));
			RTLE;
			return (EIF_INTEGER_32) ti4_1;
		}
	}
	RTLE;
	return Result;
}

/* {EV_POPUP_WINDOW_IMP}.show_flags */
EIF_INTEGER_32 F1983_24544 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_70_17_)) {
		RTLE;
		return (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
	} else {
		RTLE;
		return (EIF_INTEGER_32) ((EIF_INTEGER_32) 5L);
	}/* NOTREACHED */
	
}

/* {EV_POPUP_WINDOW_IMP}.default_style */
EIF_INTEGER_32 F1983_24545 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (((EIF_INTEGER_32) 0x80000000L) + ((EIF_INTEGER_32) 0L)) + ((EIF_INTEGER_32) 33554432L)) + ((EIF_INTEGER_32) 67108864L));
}

/* {EV_POPUP_WINDOW_IMP}.default_ex_style */
EIF_INTEGER_32 F1983_24546 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_70_17_)) {
		Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 8L);
	}
	ti4_1 = eif_bit_or(Result,((EIF_INTEGER_32) 128L));
	RTLE;
	return (EIF_INTEGER_32) ti4_1;
}

void EIF_Minit1966 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
