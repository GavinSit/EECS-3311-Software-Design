/*
 * Code for class EV_BUTTON_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1985.h"
#include <windows.h>
#include "eif_helpers.h"
#include "eif_misc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F470_13514
static EIF_POINTER inline_F470_13514 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	return (EIF_POINTER) (rt_uint_ptr) MAKELONG(arg1, arg2);
	;
}
#define INLINE_F470_13514
#endif
#ifndef INLINE_F67_9749
static void inline_F67_9749 (EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3, EIF_POINTER arg4)
{
	SendMessage ((HWND) arg1, (UINT) arg2, (WPARAM) arg3, (LPARAM) arg4)
	;
}
#define INLINE_F67_9749
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_BUTTON_IMP}.make */
void F2002_25107 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTGC;
	tr1 = RTOUCR(249,F1970_24036, (Current));
	tr2 = RTMS_EX_H("",0,0);
	F1944_23319(Current, tr1, tr2, ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L));
	*(EIF_INTEGER_32 *)(Current + O20062[dtype-2001]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 20L);
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16477[dtype-1977])(Current);
	*(EIF_INTEGER_32 *)(Current + O16486[dtype-1747]) = (EIF_INTEGER_32) ti4_1;
	tr1 = *(EIF_REFERENCE *)(RTCV(F1956_23756(Current)) + _REFACS_41_);
	tp1 = *(EIF_POINTER *)(Current + O12527[dtype-1295]);
	tr2 = RTMS_EX_H("Button",6,2084447598);
	tp1 = (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE, EIF_POINTER, EIF_REFERENCE)) R10485[Dtype(RTCW(tr1))-409])(tr1, tp1, tr2);
	*(EIF_POINTER *)(Current + O20064[dtype-2001]) = (EIF_POINTER) tp1;
	F1970_24029(Current);
	F1750_19724(Current);
	RTLE;
}

/* {EV_BUTTON_IMP}.is_default_push_button */
EIF_BOOLEAN F2002_25109 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current + O20074[Dtype(Current)-2001]);
}


/* {EV_BUTTON_IMP}.set_default_minimum_size */
void F2002_25110 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc4);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,loc5);
	RTLR(5,loc6);
	RTLIU(6);
	
	RTGC;
	loc4 = F1912_22492(Current);
	tb1 = F737_2537(RTCW(loc4));
	if ((EIF_BOOLEAN) !tb1) {
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O16495[dtype-1749]) != NULL)) {
			tr1 = *(EIF_REFERENCE *)(Current + O16495[dtype-1749]);
			loc1 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_1_);
			loc1 = RTRV(eif_new_type(1885, 0x00), loc1);
			RTCT0("font_not_void", EX_CHECK);
			if ((EIF_BOOLEAN)(loc1 != NULL)) {
				RTCK0;
			} else {
				RTCF0;
			}
			loc2 = *(EIF_INTEGER_32 *)(Current + O20062[dtype-2001]);
			ti4_1 = F1886_21736(RTCW(loc1), loc4);
			loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ti4_1);
			ti4_1 = F1886_21722(RTCW(loc1));
			ti4_1 = eif_max_int32 (loc3,(EIF_INTEGER_32) ((EIF_INTEGER_32) (((EIF_INTEGER_32) 19L) * ti4_1) / ((EIF_INTEGER_32) 9L)));
			loc3 = (EIF_INTEGER_32) ti4_1;
		} else {
			tr1 = *(EIF_REFERENCE *)(Current + O16496[dtype-1749]);
			loc5 = tr1;
			if (EIF_TEST(loc5)) {
				loc2 = *(EIF_INTEGER_32 *)(Current + O20062[dtype-2001]);
				ti4_1 = F1885_21703(loc5, loc4);
				loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ti4_1);
				ti4_1 = F1885_21701(loc5);
				ti4_1 = eif_max_int32 (loc3,(EIF_INTEGER_32) ((EIF_INTEGER_32) (((EIF_INTEGER_32) 19L) * ti4_1) / ((EIF_INTEGER_32) 9L)));
				loc3 = (EIF_INTEGER_32) ti4_1;
			} else {
			}
		}
	}
	tb1 = '\0';
	if ((EIF_BOOLEAN)(F1743_19689(Current) != NULL)) {
		tr1 = *(EIF_REFERENCE *)(Current + O16470[dtype-1742]);
		loc6 = tr1;
		tb1 = EIF_TEST(loc6);
	}
	if (tb1) {
		tb1 = F737_2537(RTCW(loc4));
		if (tb1) {
			loc2 = F1614_18068(loc6);
			loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + (EIF_INTEGER_32) (((EIF_INTEGER_32) 4L) * ((EIF_INTEGER_32) 2L)));
		} else {
			ti4_1 = F1614_18068(loc6);
			loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc2 + ti4_1) + ((EIF_INTEGER_32) 4L));
		}
		ti4_1 = F1614_18069(loc6);
		ti4_1 = eif_max_int32 (loc3,(EIF_INTEGER_32) (ti4_1 + (EIF_INTEGER_32) (((EIF_INTEGER_32) 4L) * ((EIF_INTEGER_32) 2L))));
		loc3 = (EIF_INTEGER_32) ti4_1;
	}
	tb1 = '\0';
	tb2 = F737_2537(RTCW(loc4));
	if (tb2) {
		tb1 = (EIF_BOOLEAN)(F1743_19689(Current) == NULL);
	}
	if (tb1) {
		loc2 += *(EIF_INTEGER_32 *)(Current + O20062[dtype-2001]);
		loc3 += (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R20063[dtype-2001])(Current);
	}
	F1724_19513(Current, loc2, loc3, (EIF_BOOLEAN) 0);
	RTLE;
}

/* {EV_BUTTON_IMP}.align_text_left */
void F2002_25111 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	ti4_1 = F1912_22496(Current);
	loc1 = F1258_14780(Current, ti4_1, ((EIF_INTEGER_32) 768L));
	ti4_1 = F1258_14780(Current, loc1, ((EIF_INTEGER_32) 512L));
	loc1 = (EIF_INTEGER_32) ti4_1;
	ti4_1 = F1258_14779(Current, loc1, ((EIF_INTEGER_32) 256L));
	loc1 = (EIF_INTEGER_32) ti4_1;
	F1912_22522(Current, loc1);
	*(EIF_INTEGER_32 *)(Current + O16486[Dtype(Current)-1747]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	F1912_22563(Current);
	RTLE;
}

/* {EV_BUTTON_IMP}.align_text_center */
void F2002_25113 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	ti4_1 = F1912_22496(Current);
	loc1 = F1258_14780(Current, ti4_1, ((EIF_INTEGER_32) 512L));
	ti4_1 = F1258_14780(Current, loc1, ((EIF_INTEGER_32) 256L));
	loc1 = (EIF_INTEGER_32) ti4_1;
	ti4_1 = F1258_14779(Current, loc1, ((EIF_INTEGER_32) 768L));
	loc1 = (EIF_INTEGER_32) ti4_1;
	F1912_22522(Current, loc1);
	*(EIF_INTEGER_32 *)(Current + O16486[Dtype(Current)-1747]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	F1912_22563(Current);
	RTLE;
}

/* {EV_BUTTON_IMP}.enable_default_push_button */
void F2002_25114 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	*(EIF_BOOLEAN *)(Current + O20074[dtype-2001]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O19366[dtype-1943]) != NULL)) {
		F1912_22563(Current);
	} else {
		tp1 = *(EIF_POINTER *)(Current + O12527[dtype-1295]);
		ti4_1 = F1912_22496(Current);
		ti4_1 = eif_bit_or(ti4_1,((EIF_INTEGER_32) 1L));
		tp2 = (EIF_POINTER) (WPARAM)((ti4_1));
		tp3 = inline_F470_13514(((EIF_INTEGER_32) 1L), ((EIF_INTEGER_32) 0L));
		inline_F67_9749(tp1, ((EIF_INTEGER_32) 244L), tp2, tp3);
	}
	RTLE;
}

/* {EV_BUTTON_IMP}.disable_default_push_button */
void F2002_25115 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	*(EIF_BOOLEAN *)(Current + O20074[dtype-2001]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	ti4_1 = F1912_22496(Current);
	if (F1258_14781(Current, ti4_1, ((EIF_INTEGER_32) 11L))) {
		F1912_22563(Current);
	} else {
		tp1 = *(EIF_POINTER *)(Current + O12527[dtype-1295]);
		ti4_1 = F1912_22496(Current);
		ti4_2 = eif_bit_not(((EIF_INTEGER_32) 1L));
		ti4_1 = eif_bit_and(ti4_1,ti4_2);
		tp2 = (EIF_POINTER) (WPARAM)((ti4_1));
		tp3 = inline_F470_13514(((EIF_INTEGER_32) 1L), ((EIF_INTEGER_32) 0L));
		inline_F67_9749(tp1, ((EIF_INTEGER_32) 244L), tp2, tp3);
	}
	RTLE;
}

/* {EV_BUTTON_IMP}.set_pixmap */
void F2002_25117 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTLD;
	
	RTLI(9);
	RTLR(0,loc5);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLR(3,loc6);
	RTLR(4,tr1);
	RTLR(5,loc3);
	RTLR(6,loc7);
	RTLR(7,loc1);
	RTLR(8,loc2);
	RTLIU(9);
	
	RTGC;
	loc5 = F1_14(arg1);
	RTAR(Current, loc5);
	*(EIF_REFERENCE *)(Current + O16470[dtype-1742]) = (EIF_REFERENCE) loc5;
	tb1 = F737_2537(RTCV(F1747_19708(Current)));
	if ((EIF_BOOLEAN) !tb1) {
		tr1 = *(EIF_REFERENCE *)(Current + O16495[dtype-1749]);
		loc6 = tr1;
		if (EIF_TEST(loc6)) {
			loc3 = *(EIF_REFERENCE *)(loc6 + _REFACS_1_);
			loc3 = RTRV(eif_new_type(1885, 0x00), loc3);
			RTCT0("font_not_void", EX_CHECK);
			if ((EIF_BOOLEAN)(loc3 != NULL)) {
				RTCK0;
			} else {
				RTCF0;
			}
			tr1 = F1912_22492(Current);
			loc4 = F1886_21736(RTCW(loc3), tr1);
		} else {
			tr1 = *(EIF_REFERENCE *)(Current + O16496[dtype-1749]);
			loc7 = tr1;
			if (EIF_TEST(loc7)) {
				tr1 = F1912_22492(Current);
				loc4 = F1885_21703(loc7, tr1);
			} else {
			}
		}
	}
	loc1 = *(EIF_REFERENCE *)(RTCW(loc5) + _REFACS_3_);
	loc1 = RTRV(eif_new_type(413, 0x00), loc1);
	RTCT0("internal_pixmap_state /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	loc2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R11078[Dtype(RTCW(loc1))-1871])(loc1);
	RTAR(Current, loc2);
	*(EIF_REFERENCE *)(Current + O19366[dtype-1943]) = (EIF_REFERENCE) loc2;
	F519_14210(RTCW(loc2));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R19680[dtype-1972])(Current);
	F1912_22563(Current);
	RTLE;
}

/* {EV_BUTTON_IMP}.set_font */
void F2002_25118 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	F1750_19723(Current, arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R19680[Dtype(Current)-1972])(Current);
	RTLE;
}

/* {EV_BUTTON_IMP}.wel_set_text */
void F2002_25120 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	F1912_22526(Current, arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R19680[Dtype(Current)-1972])(Current);
	RTLE;
}

/* {EV_BUTTON_IMP}.internal_default_height */
EIF_INTEGER_32 F2002_25121 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) ((EIF_INTEGER_32) 7L);
}

/* {EV_BUTTON_IMP}.update_current_push_button */
void F2002_25122 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(RTCV(F1956_23756(Current)) + _REFACS_40_);
	loc1 = RTRV(eif_new_type(1765, 0x00), loc1);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		F1766_19981(RTCW(loc1), *(EIF_REFERENCE *)(Current + _REFACS_32_));
	} else {
		F2002_25115(Current);
	}
	RTLE;
}

/* {EV_BUTTON_IMP}.fire_select_actions_on_enter */
void F2002_25123 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	if (F1912_22467(Current)) {
		tb1 = '\0';
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_5_) != NULL)) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
			tb2 = F736_2537(RTCW(tr1));
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if (tb1) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
			F977_14409(RTCW(tr1), NULL);
		}
	}
	RTLE;
}

/* {EV_BUTTON_IMP}.default_style */
EIF_INTEGER_32 F2002_25124 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	RTGC;
	ti4_1 = eif_bit_or(((EIF_INTEGER_32) 268435456L),((EIF_INTEGER_32) 1073741824L));
	ti4_1 = eif_bit_or(ti4_1,((EIF_INTEGER_32) 131072L));
	ti4_1 = eif_bit_or(ti4_1,((EIF_INTEGER_32) 65536L));
	ti4_1 = eif_bit_or(ti4_1,((EIF_INTEGER_32) 33554432L));
	ti4_1 = eif_bit_or(ti4_1,((EIF_INTEGER_32) 67108864L));
	Result = eif_bit_or(ti4_1,((EIF_INTEGER_32) 11L));
	return Result;
}

/* {EV_BUTTON_IMP}.on_bn_clicked */
void F2002_25125 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_5_) != NULL)) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
		F977_14409(RTCW(tr1), NULL);
	}
	RTLE;
}

/* {EV_BUTTON_IMP}.on_key_down */
void F2002_25126 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R19713[Dtype(Current)-1972])(Current, arg1);
	F1970_24106(Current, arg1, arg2);
	RTLE;
}

/* {EV_BUTTON_IMP}.on_wm_theme_changed */
void F2002_25127 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(RTCV(F1956_23756(Current)) + _REFACS_41_);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_POINTER)) R10486[Dtype(RTCW(tr1))-409])(tr1, *(EIF_POINTER *)(Current + O20064[dtype-2001]));
	F1910_22406(RTCV(F1956_23756(Current)));
	tr1 = *(EIF_REFERENCE *)(RTCV(F1956_23756(Current)) + _REFACS_41_);
	tp1 = *(EIF_POINTER *)(Current + O12527[dtype-1295]);
	tr2 = RTMS_EX_H("Button",6,2084447598);
	tp1 = (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE, EIF_POINTER, EIF_REFERENCE)) R10485[Dtype(RTCW(tr1))-409])(tr1, tp1, tr2);
	*(EIF_POINTER *)(Current + O20064[dtype-2001]) = (EIF_POINTER) tp1;
	RTLE;
}

/* {EV_BUTTON_IMP}.has_pushed_appearence */
EIF_BOOLEAN F2002_25129 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	return (EIF_BOOLEAN) F1258_14781(Current, arg1, ((EIF_INTEGER_32) 1L));
}

/* {EV_BUTTON_IMP}.internal_background_brush */
EIF_REFERENCE F2002_25132 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,loc2);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current + O19682[Dtype(Current)-1969]);
	if ((EIF_BOOLEAN)(loc1 == NULL)) {
		loc2 = RTLNS(eif_new_type(1602, 0x01).id, 1602, _OBJSIZ_2_0_0_0_0_0_0_0_);
		F1596_17742(RTCW(loc2));
		loc1 = *(EIF_REFERENCE *)(RTCW(loc2) + _REFACS_1_);
		loc1 = RTRV(eif_new_type(1829, 0x00), loc1);
		RTCT0("color_imp /= Void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		F1830_20518(RTCW(loc1), ((EIF_INTEGER_32) 15L));
	}
	tr1 = RTLNS(eif_new_type(1320, 0x01).id, 1320, _OBJSIZ_0_2_0_3_0_1_0_0_);
	F1321_15590(RTCW(tr1), loc1);
	RTLE;
	return (EIF_REFERENCE) tr1;
}

/* {EV_BUTTON_IMP}.on_draw_item */
void F2002_25133 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc10 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc12 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc13 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc14 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc15 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc16 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc17 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc18 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc19 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc20 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc21 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc22 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc23 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc24 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc25 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc26 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc27 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc28 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc29 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc30 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc31 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc32 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc33 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTCDT;
	RTLD;
	
	RTLI(24);
	RTLR(0,loc25);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,arg1);
	RTLR(4,loc5);
	RTLR(5,loc8);
	RTLR(6,loc4);
	RTLR(7,loc11);
	RTLR(8,loc9);
	RTLR(9,tr1);
	RTLR(10,loc29);
	RTLR(11,loc30);
	RTLR(12,loc31);
	RTLR(13,loc22);
	RTLR(14,loc26);
	RTLR(15,loc6);
	RTLR(16,loc2);
	RTLR(17,loc32);
	RTLR(18,loc3);
	RTLR(19,loc20);
	RTLR(20,loc23);
	RTLR(21,loc33);
	RTLR(22,loc28);
	RTLR(23,loc21);
	RTLIU(24);
	
	RTGC;
	loc25 = *(EIF_REFERENCE *)(RTCV(F1956_23756(Current)) + _REFACS_41_);
	loc27 = F1849_20946(RTCV(RTOUCR(250,F476_13915, (Current))));
	loc1 = *(EIF_REFERENCE *)(RTCW(arg1));
	loc5 = F1904_22283(RTCW(arg1));
	loc7 = F1904_22279(RTCW(arg1));
	if (loc27) {
		loc8 = (EIF_REFERENCE) loc1;
	} else {
		loc8 = RTLNS(eif_new_type(1306, 0x01).id, 1306, _OBJSIZ_6_2_0_3_0_7_0_0_);
		F1307_15414(RTCW(loc8), loc1);
		loc4 = RTLNS(eif_new_type(1319, 0x01).id, 1319, _OBJSIZ_0_3_0_3_0_2_0_0_);
		ti4_1 = F1408_17332(RTCW(loc5));
		ti4_2 = F1408_17333(RTCW(loc5));
		F1320_15566(RTCW(loc4), loc1, ti4_1, ti4_2);
		F1306_15265(RTCW(loc8), loc4);
		F519_14212(RTCW(loc4));
	}
	loc11 = *(EIF_REFERENCE *)(RTCV(F1715_19380(Current)) + _REFACS_1_);
	loc11 = RTRV(eif_new_type(1829, 0x00), loc11);
	RTCT0("color_imp_not_void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc11 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	F1306_15252(RTCW(loc8), loc11);
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O16495[dtype-1749]) != NULL)) {
		tr1 = *(EIF_REFERENCE *)(Current + O16495[dtype-1749]);
		loc9 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_1_);
		loc9 = RTRV(eif_new_type(1885, 0x00), loc9);
		RTCT0("font_not_void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc9 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		tr1 = *(EIF_REFERENCE *)(RTCW(loc9) + _REFACS_2_);
		F1306_15264(RTCW(loc8), tr1);
	} else {
		tr1 = *(EIF_REFERENCE *)(Current + O16496[dtype-1749]);
		loc29 = tr1;
		if (EIF_TEST(loc29)) {
			F1306_15264(RTCW(loc8), loc29);
		} else {
		}
	}
	if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_INTEGER_32)) R20065[dtype-2001])(Current, loc7)) {
		loc24 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	} else {
		if ((EIF_BOOLEAN) !F1912_22467(Current)) {
			loc24 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
		} else {
			tb1 = '\01';
			if (!F1258_14781(Current, loc7, ((EIF_INTEGER_32) 64L))) {
				tb1 = *(EIF_BOOLEAN *)(Current + O20073[dtype-2001]);
			}
			if (tb1) {
				loc24 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
			} else {
				tb1 = '\01';
				if (!F1258_14781(Current, loc7, ((EIF_INTEGER_32) 16L))) {
					tb2 = '\0';
					tr1 = *(EIF_REFERENCE *)(Current + O19941[dtype-1988]);
					loc30 = tr1;
					if ((EIF_BOOLEAN) (*(EIF_BOOLEAN *)(Current + O20074[dtype-2001]) && EIF_TEST(loc30))) {
						tb3 = F1982_24466(loc30);
						tb2 = tb3;
					}
					tb1 = tb2;
				}
				if (tb1) {
					loc24 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 5L);
				} else {
					loc24 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				}
			}
		}
	}
	tr1 = F1970_24073(Current);
	loc31 = tr1;
	loc31 = RTRV(eif_new_type(1924, 0x01),loc31);
	if (EIF_TEST(loc31)) {
		F1925_22900(loc31, (EIF_BOOLEAN) 1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_POINTER, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R10492[Dtype(RTCW(loc25))-409])(loc25, *(EIF_POINTER *)(Current + O12527[dtype-1295]), loc8, loc5, NULL);
		F1925_22900(loc31, (EIF_BOOLEAN) 0);
	}
	loc22 = F1306_15216(RTCW(loc8));
	tr1 = RTOUCR(252,F2002_25136, (Current));
	F1306_15253(RTCW(loc8), tr1);
	loc26 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R20068[dtype-2001])(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_POINTER, EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R10488[Dtype(RTCW(loc25))-409])(loc25, *(EIF_POINTER *)(Current + O20064[dtype-2001]), loc8, ((EIF_INTEGER_32) 1L), loc24, loc5, NULL, loc26);
	F519_14213(RTCW(loc26));
	F1306_15253(RTCW(loc8), loc22);
	loc6 = RTLNS(eif_new_type(1407, 0x01).id, 1407, _OBJSIZ_0_1_0_0_0_1_0_0_);
	ti4_1 = F1408_17326(RTCW(loc5));
	ti4_2 = F1408_17328(RTCW(loc5));
	ti4_3 = F1408_17330(RTCW(loc5));
	ti4_4 = F1408_17331(RTCW(loc5));
	F1408_17321(RTCW(loc6), ti4_1, ti4_2, ti4_3, ti4_4);
	loc2 = RTLNS(eif_new_type(1407, 0x01).id, 1407, _OBJSIZ_0_1_0_0_0_1_0_0_);
	ti4_1 = F1408_17326(RTCW(loc5));
	ti4_2 = F1408_17328(RTCW(loc5));
	ti4_3 = F1408_17330(RTCW(loc5));
	ti4_4 = F1408_17331(RTCW(loc5));
	F1408_17321(RTCW(loc2), ti4_1, ti4_2, ti4_3, ti4_4);
	F1408_17340(RTCW(loc6), (EIF_INTEGER_32) -((EIF_INTEGER_32) 3L), (EIF_INTEGER_32) -((EIF_INTEGER_32) 3L));
	if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_INTEGER_32)) R20065[dtype-2001])(Current, loc7)) {
		loc24 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	} else {
		if (*(EIF_BOOLEAN *)(Current + O20074[dtype-2001])) {
			loc24 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 32L);
		} else {
			loc24 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
		}
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32, EIF_REFERENCE)) R10493[Dtype(RTCW(loc25))-409])(loc25, loc8, loc24, loc2);
	tr1 = *(EIF_REFERENCE *)(Current + O16470[dtype-1742]);
	loc32 = tr1;
	if (EIF_TEST(loc32)) {
		loc3 = *(EIF_REFERENCE *)(loc32 + _REFACS_3_);
		loc3 = RTRV(eif_new_type(413, 0x00), loc3);
		RTCT0("internal_pixmap_state /= Void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc3 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		loc12 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R11093[Dtype(RTCW(loc3))-1871])(loc3);
		loc13 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R11094[Dtype(RTCW(loc3))-1871])(loc3);
	}
	tr1 = F1747_19708(Current);
	tr1 = F1306_15229(RTCW(loc8), tr1);
	loc14 = F1405_17173(RTCW(tr1));
	loc15 = *(EIF_INTEGER_32 *)(Current + O20062[dtype-2001]);
	loc15 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc15 / ((EIF_INTEGER_32) 2L));
	tb1 = F737_2537(RTCV(F1747_19708(Current)));
	if (tb1) {
		loc16 = (EIF_INTEGER_32) loc12;
		loc18 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
		loc19 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
	} else {
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O16470[dtype-1742]) == NULL)) {
			loc16 = (EIF_INTEGER_32) loc14;
			loc18 = (EIF_INTEGER_32) loc15;
			loc19 = (EIF_INTEGER_32) loc15;
		} else {
			loc15 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
			loc16 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc12 + loc14) + loc15);
			loc19 = F1970_24041(Current);
			loc19 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc19 - loc16) / ((EIF_INTEGER_32) 2L));
			loc18 = (EIF_INTEGER_32) loc19;
		}
	}
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O16486[dtype-1747]) == ((EIF_INTEGER_32) 1L))) {
		loc17 = (EIF_INTEGER_32) loc19;
	} else {
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O16486[dtype-1747]) == ((EIF_INTEGER_32) 2L))) {
			loc17 = F1970_24041(Current);
			loc17 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc17 - loc16) / ((EIF_INTEGER_32) 2L)) - ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc18 - loc19) / ((EIF_INTEGER_32) 2L))));
		} else {
			if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O16486[dtype-1747]) == ((EIF_INTEGER_32) 3L))) {
				loc17 = F1970_24041(Current);
				loc17 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc17 - loc16) - loc18);
			}
		}
	}
	tr1 = *(EIF_REFERENCE *)(Current + O16470[dtype-1742]);
	ti4_1 = (EIF_INTEGER_32) (EIF_BOOLEAN)(tr1 != NULL);
	F1408_17335(RTCW(loc2), (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc17 + loc12) + (EIF_INTEGER_32) (ti4_1 * loc15)));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_POINTER, EIF_INTEGER_32, EIF_REFERENCE)) R10494[Dtype(RTCW(loc25))-409])(loc25, *(EIF_POINTER *)(Current + O20064[dtype-2001]), loc7, loc2);
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O19683[dtype-1969]) != NULL)) {
		loc11 = *(EIF_REFERENCE *)(Current + O19683[dtype-1969]);
	} else {
		loc11 = RTOUCR(253,F2002_25137, (Current));
		loc11 = RTRV(eif_new_type(1829, 0x00), loc11);
	}
	RTCT0("color_imp /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc11 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	tp1 = *(EIF_POINTER *)(Current + O20064[dtype-2001]);
	tr1 = F1912_22492(Current);
	ti4_1 = eif_bit_or(((EIF_INTEGER_32) 0L),((EIF_INTEGER_32) 4L));
	ti4_1 = eif_bit_or(ti4_1,((EIF_INTEGER_32) 32L));
	tb1 = F1912_22467(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_POINTER, EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32, EIF_REFERENCE, EIF_INTEGER_32, EIF_BOOLEAN, EIF_REFERENCE, EIF_REFERENCE)) R10496[Dtype(RTCW(loc25))-409])(loc25, tp1, loc8, ((EIF_INTEGER_32) 1L), ((EIF_INTEGER_32) 1L), tr1, ti4_1, tb1, loc2, loc11);
	if ((EIF_BOOLEAN)(loc3 != NULL)) {
		loc10 = F1970_24043(Current);
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R11094[Dtype(RTCW(loc3))-1871])(loc3);
		loc10 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc10 - ti4_1) - (EIF_INTEGER_32) (((EIF_INTEGER_32) 4L) * ((EIF_INTEGER_32) 2L))) / ((EIF_INTEGER_32) 2L));
		loc4 = *(EIF_REFERENCE *)(Current + O19366[dtype-1943]);
		RTCT0("wel_bitmap /= Void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc4 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R11082[Dtype(RTCW(loc3))-1871])(loc3);
		if (tb1) {
			loc20 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R11079[Dtype(RTCW(loc3))-1871])(loc3);
		}
		loc23 = RTLNS(eif_new_type(1168, 0x01).id, 1168, _OBJSIZ_0_0_0_0_0_0_0_2_);
		F1169_14629(RTCW(loc23), loc17, (EIF_INTEGER_32) (((EIF_INTEGER_32) 4L) + loc10));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_POINTER, EIF_INTEGER_32, EIF_REFERENCE)) R10495[Dtype(RTCW(loc25))-409])(loc25, *(EIF_POINTER *)(Current + O20064[dtype-2001]), loc7, loc23);
		tr1 = RTOUCR(254,F2002_25134, (Current));
		loc33 = tr1;
		if (EIF_TEST(loc33)) {
			loc28 = F414_13404(RTCW(loc3));
			loc11 = *(EIF_REFERENCE *)(RTCV(F1715_19380(Current)) + _REFACS_1_);
			loc11 = RTRV(eif_new_type(1829, 0x00), loc11);
			RTCT0("color_imp_not_void", EX_CHECK);
			if ((EIF_BOOLEAN)(loc11 != NULL)) {
				RTCK0;
			} else {
				RTCF0;
			}
			if ((EIF_BOOLEAN) !F1912_22467(Current)) {
				ti4_1 = F1169_14635(RTCW(loc23));
				ti4_2 = F1169_14637(RTCW(loc23));
				tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R11082[Dtype(RTCW(loc3))-1871])(loc3);
				F62_9668(loc33, loc4, loc28, loc8, ti4_1, ti4_2, loc11, tb1);
			} else {
				ti4_1 = F1169_14635(RTCW(loc23));
				ti4_2 = F1169_14637(RTCW(loc23));
				F1306_15288(RTCW(loc8), loc28, ti4_1, ti4_2, loc12, loc13, ((EIF_INTEGER_32) 0L), NULL, ((EIF_INTEGER_32) 3L));
			}
			F519_14212(RTCW(loc28));
		} else {
			ti4_1 = F1169_14635(RTCW(loc23));
			ti4_2 = F1169_14637(RTCW(loc23));
			tb1 = F1912_22467(Current);
			F314_12733(RTCW(loc25), loc8, loc4, loc20, ti4_1, ti4_2, tb1);
		}
	}
	if (F1258_14781(Current, loc7, ((EIF_INTEGER_32) 16L))) {
		if (*(EIF_BOOLEAN *)(Current + O20074[dtype-2001])) {
			F1408_17340(RTCW(loc6), ((EIF_INTEGER_32) -1L), ((EIF_INTEGER_32) -1L));
		}
		F504_14167(Current, loc8, loc6);
	}
	if ((EIF_BOOLEAN) !loc27) {
		ti4_1 = F1408_17326(RTCW(loc5));
		ti4_2 = F1408_17328(RTCW(loc5));
		ti4_3 = F1408_17332(RTCW(loc5));
		ti4_4 = F1408_17333(RTCW(loc5));
		F1306_15311(RTCW(loc1), ti4_1, ti4_2, ti4_3, ti4_4, loc8, ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 13369376L));
	}
	F1306_15272(RTCW(loc8));
	F519_14213(RTCW(loc8));
	if ((EIF_BOOLEAN)(loc21 != NULL)) {
		F519_14213(RTCW(loc21));
	}
	if ((EIF_BOOLEAN)(loc20 != NULL)) {
		F519_14210(RTCW(loc20));
	}
	RTLE;
}

/* {EV_BUTTON_IMP}.disabled_image */
static EIF_REFERENCE F2002_25134_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(254)

	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEV;
	RTGC;
	RTOTP;
	loc1 = RTLNS(eif_new_type(62, 0x01).id, 62, _OBJSIZ_0_0_0_0_0_0_0_0_);
	tb1 = F63_9679(RTCW(loc1));
	if (tb1) {
		tr1 = RTLNS(eif_new_type(61, 0x01).id, 61, _OBJSIZ_0_0_0_0_0_0_0_0_);
		Result = (EIF_REFERENCE) tr1;
	}
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F2002_25134 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(254,F2002_25134_body,(Current));
}

/* {EV_BUTTON_IMP}.on_erase_background */
void F2002_25135 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1912_22507(Current);
	tp1 = (EIF_POINTER) (LRESULT)((((EIF_INTEGER_32) 1L)));
	F214_11244(Current, tp1);
	RTLE;
}

/* {EV_BUTTON_IMP}.white */
static EIF_REFERENCE F2002_25136_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(252)

	RTLI(1);
	RTLR(0,tr1);
	RTLIU(1);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(eif_new_type(1828, 0x01).id, 1828, _OBJSIZ_0_0_0_1_0_0_0_0_);
	F1829_20489(RTCW(tr1), ((EIF_INTEGER_32) 255L), ((EIF_INTEGER_32) 255L), ((EIF_INTEGER_32) 255L));
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F2002_25136 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(252,F2002_25136_body,(Current));
}

/* {EV_BUTTON_IMP}.default_foreground_color_imp */
static EIF_REFERENCE F2002_25137_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(253)

	RTLI(1);
	RTLR(0,loc1);
	RTLIU(1);
	
	RTEV;
	RTGC;
	RTOTP;
	loc1 = RTLNS(eif_new_type(72, 0x01).id, 72, _OBJSIZ_0_0_0_0_0_0_0_0_);
	loc1 = F73_9890(RTCW(loc1));
	loc1 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_1_);
	loc1 = RTRV(eif_new_type(1829, 0x00), loc1);
	RTCT0("l_result /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	Result = (EIF_REFERENCE) loc1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F2002_25137 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(253,F2002_25137_body,(Current));
}

/* {EV_BUTTON_IMP}.on_mouse_enter */
void F2002_25139 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1970_24095(Current);
	*(EIF_BOOLEAN *)(Current + O20073[Dtype(Current)-2001]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	F1912_22563(Current);
	RTLE;
}

/* {EV_BUTTON_IMP}.on_mouse_leave */
void F2002_25140 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1970_24096(Current);
	*(EIF_BOOLEAN *)(Current + O20073[Dtype(Current)-2001]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	F1912_22563(Current);
	RTLE;
}

void EIF_Minit1985 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
