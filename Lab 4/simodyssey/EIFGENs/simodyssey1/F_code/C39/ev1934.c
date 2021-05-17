/*
 * Code for class EV_INTERNAL_COMBO_FIELD_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1934.h"
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

/* {EV_INTERNAL_COMBO_FIELD_IMP}.make_with_combo */
void F1951_23463 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_5_) = (EIF_REFERENCE) arg1;
	tp1 = F1940_23306(RTCW(arg1));
	F1296_15096(Current, tp1);
	{
		/* INLINED CODE (ANY.default_pointer) */
		tp1 = (EIF_POINTER)  0;
		/* END INLINED CODE */
	}
	if ((EIF_BOOLEAN)(*(EIF_POINTER *)(Current+ _PTROFF_7_3_0_4_0_0_) != tp1)) {
		F1912_22637(Current);
		F1926_22919(Current);
	}
	F1951_23468(Current);
	RTLE;
}

/* {EV_INTERNAL_COMBO_FIELD_IMP}.parent */
EIF_REFERENCE F1951_23464 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
	loc1 = RTRV(eif_new_type(2006, 0x00), loc1);
	RTCT0("l_parent /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	RTLE;
	return (EIF_REFERENCE) loc1;
}

/* {EV_INTERNAL_COMBO_FIELD_IMP}.align_text_center */
void F1951_23466 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	ti4_1 = F1912_22496(Current);
	ti4_2 = eif_bit_or(((EIF_INTEGER_32) 0L),((EIF_INTEGER_32) 2L));
	loc1 = F1258_14780(Current, ti4_1, ti4_2);
	ti4_1 = eif_bit_or(loc1,((EIF_INTEGER_32) 1L));
	loc1 = (EIF_INTEGER_32) ti4_1;
	F1912_22522(Current, loc1);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_3_0_3_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	RTLE;
}

/* {EV_INTERNAL_COMBO_FIELD_IMP}.align_text_right */
void F1951_23467 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	ti4_1 = F1912_22496(Current);
	ti4_2 = eif_bit_or(((EIF_INTEGER_32) 0L),((EIF_INTEGER_32) 1L));
	loc1 = F1258_14780(Current, ti4_1, ti4_2);
	ti4_1 = eif_bit_or(loc1,((EIF_INTEGER_32) 2L));
	loc1 = (EIF_INTEGER_32) ti4_1;
	F1912_22522(Current, loc1);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_3_0_3_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	RTLE;
}

/* {EV_INTERNAL_COMBO_FIELD_IMP}.align_text_left */
void F1951_23468 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	ti4_1 = F1912_22496(Current);
	ti4_2 = eif_bit_or(((EIF_INTEGER_32) 1L),((EIF_INTEGER_32) 2L));
	loc1 = F1258_14780(Current, ti4_1, ti4_2);
	ti4_1 = eif_bit_or(loc1,((EIF_INTEGER_32) 0L));
	loc1 = (EIF_INTEGER_32) ti4_1;
	F1912_22522(Current, loc1);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_3_0_3_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTLE;
}

/* {EV_INTERNAL_COMBO_FIELD_IMP}.on_left_button_down */
void F1951_23469 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	F214_11246(RTCV(F1951_23464(Current)));
	tr1 = F1951_23464(Current);
	F1969_23992(RTCW(tr1), arg1, arg2, arg3);
	tb1 = F214_11241(RTCV(F1951_23464(Current)));
	if (tb1) {
		tp1 = F214_11242(RTCV(F1951_23464(Current)));
		F214_11244(Current, tp1);
	}
	tb1 = F214_11243(RTCV(F1951_23464(Current)));
	if ((EIF_BOOLEAN) !tb1) {
		F1912_22507(Current);
	}
	F214_11247(RTCV(F1951_23464(Current)));
	RTLE;
}

/* {EV_INTERNAL_COMBO_FIELD_IMP}.on_middle_button_down */
void F1951_23470 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	F214_11246(RTCV(F1951_23464(Current)));
	tr1 = F1951_23464(Current);
	F1969_23987(RTCW(tr1), arg1, arg2, arg3);
	tb1 = F214_11241(RTCV(F1951_23464(Current)));
	if (tb1) {
		tp1 = F214_11242(RTCV(F1951_23464(Current)));
		F214_11244(Current, tp1);
	}
	tb1 = F214_11243(RTCV(F1951_23464(Current)));
	if ((EIF_BOOLEAN) !tb1) {
		F1912_22507(Current);
	}
	F214_11247(RTCV(F1951_23464(Current)));
	RTLE;
}

/* {EV_INTERNAL_COMBO_FIELD_IMP}.on_right_button_down */
void F1951_23471 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	F214_11246(RTCV(F1951_23464(Current)));
	tr1 = F1951_23464(Current);
	F1969_23991(RTCW(tr1), arg1, arg2, arg3);
	tb1 = F214_11241(RTCV(F1951_23464(Current)));
	if (tb1) {
		tp1 = F214_11242(RTCV(F1951_23464(Current)));
		F214_11244(Current, tp1);
	}
	tb1 = F214_11243(RTCV(F1951_23464(Current)));
	if ((EIF_BOOLEAN) !tb1) {
		F1912_22507(Current);
	}
	F214_11247(RTCV(F1951_23464(Current)));
	RTLE;
}

/* {EV_INTERNAL_COMBO_FIELD_IMP}.on_left_button_up */
void F1951_23472 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	F214_11246(RTCV(F1951_23464(Current)));
	tr1 = F1951_23464(Current);
	F1969_23993(RTCW(tr1), arg1, arg2, arg3);
	tb1 = F214_11241(RTCV(F1951_23464(Current)));
	if (tb1) {
		tp1 = F214_11242(RTCV(F1951_23464(Current)));
		F214_11244(Current, tp1);
	}
	tb1 = F214_11243(RTCV(F1951_23464(Current)));
	if ((EIF_BOOLEAN) !tb1) {
		F1912_22507(Current);
	}
	F214_11247(RTCV(F1951_23464(Current)));
	RTLE;
}

/* {EV_INTERNAL_COMBO_FIELD_IMP}.on_middle_button_up */
void F1951_23473 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	F214_11246(RTCV(F1951_23464(Current)));
	tr1 = F1951_23464(Current);
	F1970_24082(RTCW(tr1), arg1, arg2, arg3);
	tb1 = F214_11241(RTCV(F1951_23464(Current)));
	if (tb1) {
		tp1 = F214_11242(RTCV(F1951_23464(Current)));
		F214_11244(Current, tp1);
	}
	tb1 = F214_11243(RTCV(F1951_23464(Current)));
	if ((EIF_BOOLEAN) !tb1) {
		F1912_22507(Current);
	}
	F214_11247(RTCV(F1951_23464(Current)));
	RTLE;
}

/* {EV_INTERNAL_COMBO_FIELD_IMP}.on_right_button_up */
void F1951_23474 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	F214_11246(RTCV(F1951_23464(Current)));
	tr1 = F1951_23464(Current);
	F1970_24083(RTCW(tr1), arg1, arg2, arg3);
	tb1 = F214_11241(RTCV(F1951_23464(Current)));
	if (tb1) {
		tp1 = F214_11242(RTCV(F1951_23464(Current)));
		F214_11244(Current, tp1);
	}
	tb1 = F214_11243(RTCV(F1951_23464(Current)));
	if ((EIF_BOOLEAN) !tb1) {
		F1912_22507(Current);
	}
	F214_11247(RTCV(F1951_23464(Current)));
	RTLE;
}

/* {EV_INTERNAL_COMBO_FIELD_IMP}.on_left_button_double_click */
void F1951_23475 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	F214_11246(RTCV(F1951_23464(Current)));
	tr1 = F1951_23464(Current);
	F1969_23994(RTCW(tr1), arg1, arg2, arg3);
	tb1 = F214_11241(RTCV(F1951_23464(Current)));
	if (tb1) {
		tp1 = F214_11242(RTCV(F1951_23464(Current)));
		F214_11244(Current, tp1);
	}
	tb1 = F214_11243(RTCV(F1951_23464(Current)));
	if ((EIF_BOOLEAN) !tb1) {
		F1912_22507(Current);
	}
	F214_11247(RTCV(F1951_23464(Current)));
	RTLE;
}

/* {EV_INTERNAL_COMBO_FIELD_IMP}.on_middle_button_double_click */
void F1951_23476 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	F214_11246(RTCV(F1951_23464(Current)));
	tr1 = F1951_23464(Current);
	F1969_23995(RTCW(tr1), arg1, arg2, arg3);
	tb1 = F214_11241(RTCV(F1951_23464(Current)));
	if (tb1) {
		tp1 = F214_11242(RTCV(F1951_23464(Current)));
		F214_11244(Current, tp1);
	}
	tb1 = F214_11243(RTCV(F1951_23464(Current)));
	if ((EIF_BOOLEAN) !tb1) {
		F1912_22507(Current);
	}
	F214_11247(RTCV(F1951_23464(Current)));
	RTLE;
}

/* {EV_INTERNAL_COMBO_FIELD_IMP}.on_right_button_double_click */
void F1951_23477 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	F214_11246(RTCV(F1951_23464(Current)));
	tr1 = F1951_23464(Current);
	F1969_23996(RTCW(tr1), arg1, arg2, arg3);
	tb1 = F214_11241(RTCV(F1951_23464(Current)));
	if (tb1) {
		tp1 = F214_11242(RTCV(F1951_23464(Current)));
		F214_11244(Current, tp1);
	}
	tb1 = F214_11243(RTCV(F1951_23464(Current)));
	if ((EIF_BOOLEAN) !tb1) {
		F1912_22507(Current);
	}
	F214_11247(RTCV(F1951_23464(Current)));
	RTLE;
}

/* {EV_INTERNAL_COMBO_FIELD_IMP}.on_mouse_move */
void F1951_23478 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	F214_11246(RTCV(F1951_23464(Current)));
	tr1 = F1951_23464(Current);
	F1970_24092(RTCW(tr1), arg1, arg2, arg3);
	tb1 = F214_11241(RTCV(F1951_23464(Current)));
	if (tb1) {
		tp1 = F214_11242(RTCV(F1951_23464(Current)));
		F214_11244(Current, tp1);
	}
	tb1 = F214_11243(RTCV(F1951_23464(Current)));
	if ((EIF_BOOLEAN) !tb1) {
		F1912_22507(Current);
	}
	F214_11247(RTCV(F1951_23464(Current)));
	RTLE;
}

/* {EV_INTERNAL_COMBO_FIELD_IMP}.on_key_down */
void F1951_23479 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	if ((EIF_BOOLEAN) !(EIF_BOOLEAN) ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 40L)) || (EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 38L)))) {
		F214_11246(RTCV(F1951_23464(Current)));
		tr1 = F1951_23464(Current);
		F2007_25289(RTCW(tr1), arg1, arg2);
		tb1 = F214_11241(RTCV(F1951_23464(Current)));
		if (tb1) {
			tp1 = F214_11242(RTCV(F1951_23464(Current)));
			F214_11244(Current, tp1);
		}
		tb1 = F214_11243(RTCV(F1951_23464(Current)));
		if ((EIF_BOOLEAN) !tb1) {
			F1912_22507(Current);
		}
		F214_11247(RTCV(F1951_23464(Current)));
	}
	RTLE;
}

/* {EV_INTERNAL_COMBO_FIELD_IMP}.on_char */
void F1951_23480 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	F214_11246(RTCV(F1951_23464(Current)));
	tr1 = F1951_23464(Current);
	F1970_24110(RTCW(tr1), arg1, arg2);
	tb1 = F214_11241(RTCV(F1951_23464(Current)));
	if (tb1) {
		tp1 = F214_11242(RTCV(F1951_23464(Current)));
		F214_11244(Current, tp1);
	}
	tb1 = F214_11243(RTCV(F1951_23464(Current)));
	if ((EIF_BOOLEAN) !tb1) {
		F1912_22507(Current);
	}
	F214_11247(RTCV(F1951_23464(Current)));
	RTLE;
}

/* {EV_INTERNAL_COMBO_FIELD_IMP}.on_key_up */
void F1951_23481 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	F214_11246(RTCV(F1951_23464(Current)));
	tr1 = F1951_23464(Current);
	F1970_24109(RTCW(tr1), arg1, arg2);
	tb1 = F214_11241(RTCV(F1951_23464(Current)));
	if (tb1) {
		tp1 = F214_11242(RTCV(F1951_23464(Current)));
		F214_11244(Current, tp1);
	}
	tb1 = F214_11243(RTCV(F1951_23464(Current)));
	if ((EIF_BOOLEAN) !tb1) {
		F1912_22507(Current);
	}
	F214_11247(RTCV(F1951_23464(Current)));
	RTLE;
}

/* {EV_INTERNAL_COMBO_FIELD_IMP}.on_set_focus */
void F1951_23482 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F214_11246(RTCV(F1951_23464(Current)));
	F2007_25271(RTCV(F1951_23464(Current)));
	tb1 = F214_11241(RTCV(F1951_23464(Current)));
	if (tb1) {
		tp1 = F214_11242(RTCV(F1951_23464(Current)));
		F214_11244(Current, tp1);
	}
	tb1 = F214_11243(RTCV(F1951_23464(Current)));
	if ((EIF_BOOLEAN) !tb1) {
		F1912_22507(Current);
	}
	F214_11247(RTCV(F1951_23464(Current)));
	RTLE;
}

/* {EV_INTERNAL_COMBO_FIELD_IMP}.on_kill_focus */
void F1951_23483 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F214_11246(RTCV(F1951_23464(Current)));
	F2007_25272(RTCV(F1951_23464(Current)));
	tb1 = F214_11241(RTCV(F1951_23464(Current)));
	if (tb1) {
		tp1 = F214_11242(RTCV(F1951_23464(Current)));
		F214_11244(Current, tp1);
	}
	tb1 = F214_11243(RTCV(F1951_23464(Current)));
	if ((EIF_BOOLEAN) !tb1) {
		F1912_22507(Current);
	}
	F214_11247(RTCV(F1951_23464(Current)));
	RTLE;
}

/* {EV_INTERNAL_COMBO_FIELD_IMP}.on_set_cursor */
void F1951_23484 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tb1 = '\0';
	if (((EIF_BOOLEAN) ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 0L)) || (EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 1L))))) {
		tr1 = *(EIF_REFERENCE *)(RTCV(F1951_23464(Current)) + _REFACS_12_);
		tb1 = (EIF_BOOLEAN)(tr1 != NULL);
	}
	if (tb1) {
		F1970_24119(RTCV(F1951_23464(Current)));
	}
	RTLE;
}

/* {EV_INTERNAL_COMBO_FIELD_IMP}.on_erase_background */
void F1951_23485 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
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

/* {EV_INTERNAL_COMBO_FIELD_IMP}.default_process_message */
void F1951_23486 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2, EIF_POINTER arg3)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 123L))) {
		F1951_23487(Current);
	} else {
		{
			/* INLINED CODE (WEL_WINDOW.default_process_message) */
			/* END INLINED CODE */
		}
		;
	}
	RTLE;
}

/* {EV_INTERNAL_COMBO_FIELD_IMP}.allow_pick_and_drop */
void F1951_23487 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = F1956_23756(RTCV(F1951_23464(Current)));
	tr1 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_47_);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		F1912_22507(Current);
	} else {
		tr1 = *(EIF_REFERENCE *)(RTCV(F1951_23464(Current)) + _REFACS_47_);
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			F1912_22507(Current);
		} else {
			tb1 = *(EIF_BOOLEAN *)(RTCV(F1951_23464(Current))+ _CHROFF_69_19_);
			if (tb1) {
				F1912_22507(Current);
			}
		}
	}
	F2006_25224(RTCV(F1951_23464(Current)));
	RTLE;
}

/* {EV_INTERNAL_COMBO_FIELD_IMP}.on_getdlgcode */
void F1951_23488 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tp1 = (EIF_POINTER) (LRESULT)((((EIF_INTEGER_32) 4L)));
	F214_11244(Current, tp1);
	RTLE;
}

/* {EV_INTERNAL_COMBO_FIELD_IMP}.tooltip_window */
EIF_REFERENCE F1951_23489 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_REFERENCE) Current;
}

void EIF_Minit1934 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
