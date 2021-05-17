/*
 * Code for class EV_SPIN_BUTTON_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1984.h"
#include <windows.h>
#include <winx.h>
#include "cctrl.h"
#include "eif_helpers.h"
#include "eif_out.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_SPIN_BUTTON_IMP}.make */
void F2001_25026 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,loc2);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLIU(5);
	
	RTGC;
	loc1 = RTLNS(eif_new_type(1661, 0x01).id, 1661, _OBJSIZ_5_2_0_1_0_0_0_0_);
	F1596_17742(RTCW(loc1));
	loc2 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_3_);
	loc2 = RTRV(eif_new_type(2007, 1), loc2);
	RTCT0("l_internal_text_field /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	RTAR(Current, loc2);
	*(EIF_REFERENCE *)(Current + _REFACS_61_) = (EIF_REFERENCE) loc2;
	tr1 = RTOUCR(249,F1970_24036, (Current));
	tr2 = RTMS_EX_H("",0,0);
	F1917_22822(Current, tr1, tr2);
	F1750_19724(Current);
	F1999_25005(Current);
	RTLE;
}

/* {EV_SPIN_BUTTON_IMP}.initialize_gauge_control */
void F2001_25027 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNSMART(eif_new_type(24, 1).id);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_36_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_new_type(1934, 0).id);
	F1934_23140(RTCW(tr1), Current, ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 16L), ((EIF_INTEGER_32) 20L), ((EIF_INTEGER_32) -1L));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_60_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_61_);
	F1912_22525(RTCW(tr1), Current);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_60_);
	F1934_23147(RTCW(tr1), *(EIF_REFERENCE *)(Current + _REFACS_61_));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_60_);
	F1934_23146(RTCW(tr1), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 100L));
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_62_18_6_7_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	F1999_25006(Current);
	RTLE;
}

/* {EV_SPIN_BUTTON_IMP}.align_text_center */
void F2001_25029 (EIF_REFERENCE Current)
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
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_61_);
	F2008_25310(RTCW(tr1));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_60_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		F1934_23147(loc1, *(EIF_REFERENCE *)(Current + _REFACS_61_));
	}
	RTLE;
}

/* {EV_SPIN_BUTTON_IMP}.align_text_left */
void F2001_25031 (EIF_REFERENCE Current)
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
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_61_);
	F2008_25312(RTCW(tr1));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_60_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		F1934_23147(loc1, *(EIF_REFERENCE *)(Current + _REFACS_61_));
	}
	RTLE;
}

/* {EV_SPIN_BUTTON_IMP}.default_style */
EIF_INTEGER_32 F2001_25032 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	Result = RTOUCB(EIF_INTEGER_32,334,F1922_22867, (Current));
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result + ((EIF_INTEGER_32) 65536L));
	RTLE;
	return Result;
}

/* {EV_SPIN_BUTTON_IMP}.leap */
EIF_INTEGER_32 F2001_25033 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_62_18_6_9_);
}


/* {EV_SPIN_BUTTON_IMP}.value */
EIF_INTEGER_32 F2001_25034 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	RTCT0("internal_arrows_control /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_60_) != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_60_);
	Result = F1934_23141(RTCW(tr1));
	RTLE;
	return Result;
}

/* {EV_SPIN_BUTTON_IMP}.step */
EIF_INTEGER_32 F2001_25035 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_62_18_6_8_);
}


/* {EV_SPIN_BUTTON_IMP}.top_level_window_imp */
EIF_REFERENCE F2001_25038 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_59_);
}


/* {EV_SPIN_BUTTON_IMP}.text */
EIF_REFERENCE F2001_25039 (EIF_REFERENCE Current)
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
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_61_);
	Result = F2008_25308(RTCW(tr1));
	RTLE;
	return Result;
}

/* {EV_SPIN_BUTTON_IMP}.set_minimum_width */
void F2001_25040 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	F1723_19476(Current, arg1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_61_);
	F1723_19476(RTCW(tr1), (EIF_INTEGER_32) (arg1 - ((EIF_INTEGER_32) 20L)));
	RTLE;
}

/* {EV_SPIN_BUTTON_IMP}.set_minimum_size */
void F2001_25041 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F2001_25040(Current, arg1);
	F1723_19477(Current, arg2);
	RTLE;
}

/* {EV_SPIN_BUTTON_IMP}.set_default_minimum_size */
void F2001_25042 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_61_);
	ti4_1 = F1723_19471(RTCW(tr1));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_61_);
	ti4_2 = F1723_19472(RTCW(tr1));
	ti4_2 = eif_max_int32 (ti4_2,((EIF_INTEGER_32) 16L));
	F1724_19513(Current, (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 20L)), ti4_2, (EIF_BOOLEAN) 0);
	RTLE;
}

/* {EV_SPIN_BUTTON_IMP}.set_top_level_window_imp */
void F2001_25043 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_59_) = (EIF_REFERENCE) arg1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_61_);
	F1989_24666(RTCW(tr1), arg1);
	RTLE;
}

/* {EV_SPIN_BUTTON_IMP}.set_focus */
void F2001_25044 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_61_);
	F1912_22517(RTCW(tr1));
	RTLE;
}

/* {EV_SPIN_BUTTON_IMP}.enable_sensitive */
void F2001_25048 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_61_);
	F1970_24060(RTCW(tr1));
	RTCT0("internal_arrows_control /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_60_) != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_60_);
	F1912_22508(RTCW(tr1));
	F1970_24060(Current);
	RTLE;
}

/* {EV_SPIN_BUTTON_IMP}.disable_sensitive */
void F2001_25049 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_61_);
	F1970_24059(RTCW(tr1));
	RTCT0("internal_arrows_control /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_60_) != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_60_);
	F1912_22509(RTCW(tr1));
	F1970_24059(Current);
	RTLE;
}

/* {EV_SPIN_BUTTON_IMP}.wel_set_leap */
void F2001_25050 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_62_18_6_9_) = (EIF_INTEGER_32) arg1;
}

/* {EV_SPIN_BUTTON_IMP}.wel_set_step */
void F2001_25051 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_62_18_6_8_) = (EIF_INTEGER_32) arg1;
}

/* {EV_SPIN_BUTTON_IMP}.wel_set_value */
void F2001_25052 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	RTCT0("internal_arrows_control /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_60_) != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_60_);
	F1934_23145(RTCW(tr1), arg1);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_62_18_6_7_) = (EIF_INTEGER_32) arg1;
	RTLE;
}

/* {EV_SPIN_BUTTON_IMP}.wel_set_range */
void F2001_25053 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	RTCT0("internal_arrows_control /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_60_) != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_60_);
	F1934_23146(RTCW(tr1), arg1, arg2);
	if ((EIF_BOOLEAN) (F2001_25034(Current) < arg1)) {
		F2001_25052(Current, arg1);
	} else {
		if ((EIF_BOOLEAN) (F2001_25034(Current) > arg2)) {
			F2001_25052(Current, arg2);
		}
	}
	RTLE;
}

/* {EV_SPIN_BUTTON_IMP}.set_font */
void F2001_25054 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLIU(5);
	
	RTGC;
	F1750_19723(Current, arg1);
	RTCT0("private_font /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_40_) != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_40_);
	loc1 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_1_);
	loc1 = RTRV(eif_new_type(1885, 0x00), loc1);
	RTCT0("valid_font", EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_61_);
	tr2 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_2_);
	F1926_22912(RTCW(tr1), tr2);
	*(EIF_REFERENCE *)(Current + _REFACS_41_) = (EIF_REFERENCE) NULL;
	RTLE;
}

/* {EV_SPIN_BUTTON_IMP}.return_actions */
EIF_REFERENCE F2001_25056 (EIF_REFERENCE Current)
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
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_61_);
	Result = F234_11536(RTCW(tr1));
	RTLE;
	return Result;
}

/* {EV_SPIN_BUTTON_IMP}.focus_in_actions */
EIF_REFERENCE F2001_25057 (EIF_REFERENCE Current)
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
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_61_);
	Result = F413_13382(RTCW(tr1));
	RTLE;
	return Result;
}

/* {EV_SPIN_BUTTON_IMP}.focus_out_actions */
EIF_REFERENCE F2001_25058 (EIF_REFERENCE Current)
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
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_61_);
	Result = F413_13384(RTCW(tr1));
	RTLE;
	return Result;
}

/* {EV_SPIN_BUTTON_IMP}.key_press_actions */
EIF_REFERENCE F2001_25059 (EIF_REFERENCE Current)
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
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_61_);
	Result = F413_13376(RTCW(tr1));
	RTLE;
	return Result;
}

/* {EV_SPIN_BUTTON_IMP}.key_press_string_actions */
EIF_REFERENCE F2001_25060 (EIF_REFERENCE Current)
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
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_61_);
	Result = F413_13378(RTCW(tr1));
	RTLE;
	return Result;
}

/* {EV_SPIN_BUTTON_IMP}.pointer_button_press_actions */
EIF_REFERENCE F2001_25062 (EIF_REFERENCE Current)
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
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_61_);
	Result = F413_13364(RTCW(tr1));
	RTLE;
	return Result;
}

/* {EV_SPIN_BUTTON_IMP}.pointer_motion_actions */
EIF_REFERENCE F2001_25067 (EIF_REFERENCE Current)
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
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_61_);
	Result = F413_13362(RTCW(tr1));
	RTLE;
	return Result;
}

/* {EV_SPIN_BUTTON_IMP}.set_editable */
void F2001_25078 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_61_);
	F2006_25189(RTCW(tr1), arg1);
	RTLE;
}

/* {EV_SPIN_BUTTON_IMP}.set_text */
void F2001_25080 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_61_);
	F2008_25307(RTCW(tr1), arg1);
	RTLE;
}

/* {EV_SPIN_BUTTON_IMP}.insert_text */
void F2001_25081 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_61_);
	F2006_25195(RTCW(tr1), arg1);
	RTLE;
}

/* {EV_SPIN_BUTTON_IMP}.append_text */
void F2001_25082 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_61_);
	F2006_25196(RTCW(tr1), arg1);
	RTLE;
}

/* {EV_SPIN_BUTTON_IMP}.on_key_down */
void F2001_25092 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTGC;
	F1999_25016(Current, arg1, arg2);
	if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 13L))) {
		F2001_25094(Current);
		tr1 = F1592_17699(RTCV(F1696_18976(Current)));
		F977_14409(RTCW(tr1), NULL);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_62_18_6_7_) != F2001_25034(Current))) {
			if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current) != NULL)) {
				ti4_1 = F2001_25034(Current);
				*(EIF_INTEGER_32 *)(Current+ _LNGOFF_62_18_6_7_) = (EIF_INTEGER_32) ti4_1;
				tr1 = *(EIF_REFERENCE *)(Current);
				{
					static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,1475,1508,0xFFFF};
					EIF_TYPE typres0;
					static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
					
					typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
					tr2 = RTLNTS(typres0.id, 2, 1);
				}
				ti4_1 = F2001_25034(Current);
				((EIF_TYPED_VALUE *)tr2+1)->it_i4 = ti4_1;
				F977_14409(RTCW(tr1), tr2);
			}
		}
	}
	RTLE;
}

/* {EV_SPIN_BUTTON_IMP}.on_set_focus */
void F2001_25093 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_61_);
	F1912_22517(RTCW(tr1));
	RTLE;
}

/* {EV_SPIN_BUTTON_IMP}.translate_text */
void F2001_25094 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	RTCT0("internal_arrows_control /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_60_) != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	loc1 = F2001_25039(Current);
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) ',';
	F1565_6963(RTCW(loc1), tw1);
	tb1 = F1558_6541(RTCW(loc1));
	if (tb1) {
		loc2 = F1558_6575(RTCW(loc1));
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_60_);
		ti4_1 = F1934_23142(RTCW(tr1));
		if ((EIF_BOOLEAN) (loc2 < ti4_1)) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_60_);
			ti4_1 = F1934_23142(RTCW(tr1));
			tr1 = c_outi(ti4_1);
			F2001_25080(Current, tr1);
		} else {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_60_);
			ti4_1 = F1934_23143(RTCW(tr1));
			if ((EIF_BOOLEAN) (loc2 > ti4_1)) {
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_60_);
				ti4_1 = F1934_23143(RTCW(tr1));
				tr1 = c_outi(ti4_1);
				F2001_25080(Current, tr1);
			} else {
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_60_);
				F1934_23145(RTCW(tr1), loc2);
			}
		}
	} else {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_60_);
		ti4_1 = F1934_23142(RTCW(tr1));
		tr1 = c_outi(ti4_1);
		F2001_25080(Current, tr1);
	}
	RTLE;
}

/* {EV_SPIN_BUTTON_IMP}.on_notify */
void F2001_25095 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg2);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTGC;
	ti4_1 = F1903_22268(RTCW(arg2));
	if ((EIF_BOOLEAN)(ti4_1 == (EIF_INTEGER_32) UDN_DELTAPOS)) {
		loc1 = RTLNS(eif_new_type(1374, 0x01).id, 1374, _OBJSIZ_0_1_0_0_0_1_0_0_);
		tp1 = *(EIF_POINTER *)(RTCW(arg2)+ _PTROFF_0_1_0_0_0_0_);
		F1296_15096(RTCW(loc1), tp1);
		ti4_1 = F1375_16535(RTCW(loc1));
		if ((EIF_BOOLEAN) (ti4_1 < ((EIF_INTEGER_32) 0L))) {
			F1375_16537(RTCW(loc1), (EIF_INTEGER_32) -*(EIF_INTEGER_32 *)(Current+ _LNGOFF_62_18_6_8_));
		} else {
			F1375_16537(RTCW(loc1), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_62_18_6_8_));
		}
	}
	RTLE;
}

/* {EV_SPIN_BUTTON_IMP}.on_wm_vscroll */
void F2001_25097 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTGC;
	if ((EIF_BOOLEAN)((EIF_INTEGER_32) LOWORD((arg1)) != ((EIF_INTEGER_32) 8L))) {
		loc2 = (EIF_POINTER) GET_WM_VSCROLL_HWND(((WPARAM) arg1), ((LPARAM) arg2));
		{
			/* INLINED CODE (ANY.default_pointer) */
			tp1 = (EIF_POINTER)  0;
			/* END INLINED CODE */
		}
		if ((EIF_BOOLEAN)(loc2 != tp1)) {
			loc1 = F1898_22150(Current, loc2);
			loc1 = RTRV(eif_new_type(1933, 0x00), loc1);
			if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_62_18_6_7_) != F2001_25034(Current))) {
				if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current) != NULL)) {
					ti4_1 = F2001_25034(Current);
					*(EIF_INTEGER_32 *)(Current+ _LNGOFF_62_18_6_7_) = (EIF_INTEGER_32) ti4_1;
					tr1 = *(EIF_REFERENCE *)(Current);
					{
						static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,1475,1508,0xFFFF};
						EIF_TYPE typres0;
						static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
						
						typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
						tr2 = RTLNTS(typres0.id, 2, 1);
					}
					ti4_1 = F2001_25034(Current);
					((EIF_TYPED_VALUE *)tr2+1)->it_i4 = ti4_1;
					F977_14409(RTCW(tr1), tr2);
				}
			}
		}
	}
	RTLE;
}

/* {EV_SPIN_BUTTON_IMP}.on_erase_background */
void F2001_25098 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	
	
	F1912_22507(Current);
}

/* {EV_SPIN_BUTTON_IMP}.on_size */
void F2001_25099 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	RTCT0("internal_arrows_control /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_60_) != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_60_);
	F1912_22541(RTCW(tr1), (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 20L)), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 20L), arg3, (EIF_BOOLEAN) 1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_61_);
	F1723_19483(RTCW(tr1), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 20L)), arg3);
	RTLE;
}

/* {EV_SPIN_BUTTON_IMP}.ev_apply_new_size */
void F2001_25100 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_BOOLEAN arg5)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	F1922_22866(Current, arg1, arg2, arg3, arg4, arg5);
	RTCT0("internal_arrows_control /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_60_) != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_60_);
	F1912_22541(RTCW(tr1), (EIF_INTEGER_32) (arg3 - ((EIF_INTEGER_32) 20L)), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 20L), arg4, arg5);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_61_);
	F1723_19496(RTCW(tr1), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), (EIF_INTEGER_32) (arg3 - ((EIF_INTEGER_32) 20L)), arg4, arg5);
	RTLE;
}

/* {EV_SPIN_BUTTON_IMP}.tooltip_window */
EIF_REFERENCE F2001_25101 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_61_);
	tp1 = *(EIF_POINTER *)(RTCW(tr1)+ _PTROFF_56_20_6_9_0_0_);
	Result = F1898_22150(Current, tp1);
	RTLE;
	return Result;
}

void EIF_Minit1984 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
