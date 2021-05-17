/*
 * Code for class EV_INTERNAL_COMBO_BOX_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1921.h"
#include <windows.h>
#include <winx.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_INTERNAL_COMBO_BOX_IMP}.make_with_combo */
void F1938_23254 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	tp1 = F1939_23299(RTCW(arg1));
	F1296_15096(Current, tp1);
	{
		/* INLINED CODE (ANY.default_pointer) */
		tp1 = (EIF_POINTER)  0;
		/* END INLINED CODE */
	}
	if ((EIF_BOOLEAN)(*(EIF_POINTER *)(Current+ _PTROFF_7_2_0_3_0_0_) != tp1)) {
		F1912_22637(Current);
		F1926_22919(Current);
	}
	RTLE;
}

/* {EV_INTERNAL_COMBO_BOX_IMP}.parent */
EIF_REFERENCE F1938_23255 (EIF_REFERENCE Current)
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
	RTCT0("l_result /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	RTLE;
	return (EIF_REFERENCE) loc1;
}

/* {EV_INTERNAL_COMBO_BOX_IMP}.on_left_button_down */
void F1938_23256 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
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
	F214_11246(RTCV(F1938_23255(Current)));
	tr1 = F1938_23255(Current);
	F1969_23992(RTCW(tr1), arg1, arg2, arg3);
	tb1 = F214_11241(RTCV(F1938_23255(Current)));
	if (tb1) {
		tp1 = F214_11242(RTCV(F1938_23255(Current)));
		F214_11244(Current, tp1);
	}
	tb1 = F214_11243(RTCV(F1938_23255(Current)));
	if ((EIF_BOOLEAN) !tb1) {
		F1912_22507(Current);
	}
	F214_11247(RTCV(F1938_23255(Current)));
	RTLE;
}

/* {EV_INTERNAL_COMBO_BOX_IMP}.on_middle_button_down */
void F1938_23257 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
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
	F214_11246(RTCV(F1938_23255(Current)));
	tr1 = F1938_23255(Current);
	F1969_23987(RTCW(tr1), arg1, arg2, arg3);
	tb1 = F214_11241(RTCV(F1938_23255(Current)));
	if (tb1) {
		tp1 = F214_11242(RTCV(F1938_23255(Current)));
		F214_11244(Current, tp1);
	}
	tb1 = F214_11243(RTCV(F1938_23255(Current)));
	if ((EIF_BOOLEAN) !tb1) {
		F1912_22507(Current);
	}
	F214_11247(RTCV(F1938_23255(Current)));
	RTLE;
}

/* {EV_INTERNAL_COMBO_BOX_IMP}.on_right_button_down */
void F1938_23258 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
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
	F214_11246(RTCV(F1938_23255(Current)));
	tr1 = F1938_23255(Current);
	F1969_23991(RTCW(tr1), arg1, arg2, arg3);
	tb1 = F214_11241(RTCV(F1938_23255(Current)));
	if (tb1) {
		tp1 = F214_11242(RTCV(F1938_23255(Current)));
		F214_11244(Current, tp1);
	}
	tb1 = F214_11243(RTCV(F1938_23255(Current)));
	if ((EIF_BOOLEAN) !tb1) {
		F1912_22507(Current);
	}
	F214_11247(RTCV(F1938_23255(Current)));
	RTLE;
}

/* {EV_INTERNAL_COMBO_BOX_IMP}.on_left_button_up */
void F1938_23259 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
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
	F214_11246(RTCV(F1938_23255(Current)));
	tr1 = F1938_23255(Current);
	F1969_23993(RTCW(tr1), arg1, arg2, arg3);
	tb1 = F214_11241(RTCV(F1938_23255(Current)));
	if (tb1) {
		tp1 = F214_11242(RTCV(F1938_23255(Current)));
		F214_11244(Current, tp1);
	}
	tb1 = F214_11243(RTCV(F1938_23255(Current)));
	if ((EIF_BOOLEAN) !tb1) {
		F1912_22507(Current);
	}
	F214_11247(RTCV(F1938_23255(Current)));
	RTLE;
}

/* {EV_INTERNAL_COMBO_BOX_IMP}.on_middle_button_up */
void F1938_23260 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
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
	F214_11246(RTCV(F1938_23255(Current)));
	tr1 = F1938_23255(Current);
	F1970_24082(RTCW(tr1), arg1, arg2, arg3);
	tb1 = F214_11241(RTCV(F1938_23255(Current)));
	if (tb1) {
		tp1 = F214_11242(RTCV(F1938_23255(Current)));
		F214_11244(Current, tp1);
	}
	tb1 = F214_11243(RTCV(F1938_23255(Current)));
	if ((EIF_BOOLEAN) !tb1) {
		F1912_22507(Current);
	}
	F214_11247(RTCV(F1938_23255(Current)));
	RTLE;
}

/* {EV_INTERNAL_COMBO_BOX_IMP}.on_right_button_up */
void F1938_23261 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
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
	F214_11246(RTCV(F1938_23255(Current)));
	tr1 = F1938_23255(Current);
	F1970_24083(RTCW(tr1), arg1, arg2, arg3);
	tb1 = F214_11241(RTCV(F1938_23255(Current)));
	if (tb1) {
		tp1 = F214_11242(RTCV(F1938_23255(Current)));
		F214_11244(Current, tp1);
	}
	tb1 = F214_11243(RTCV(F1938_23255(Current)));
	if ((EIF_BOOLEAN) !tb1) {
		F1912_22507(Current);
	}
	F214_11247(RTCV(F1938_23255(Current)));
	RTLE;
}

/* {EV_INTERNAL_COMBO_BOX_IMP}.on_left_button_double_click */
void F1938_23262 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
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
	F214_11246(RTCV(F1938_23255(Current)));
	tr1 = F1938_23255(Current);
	F1969_23994(RTCW(tr1), arg1, arg2, arg3);
	tb1 = F214_11241(RTCV(F1938_23255(Current)));
	if (tb1) {
		tp1 = F214_11242(RTCV(F1938_23255(Current)));
		F214_11244(Current, tp1);
	}
	tb1 = F214_11243(RTCV(F1938_23255(Current)));
	if ((EIF_BOOLEAN) !tb1) {
		F1912_22507(Current);
	}
	F214_11247(RTCV(F1938_23255(Current)));
	RTLE;
}

/* {EV_INTERNAL_COMBO_BOX_IMP}.on_middle_button_double_click */
void F1938_23263 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
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
	F214_11246(RTCV(F1938_23255(Current)));
	tr1 = F1938_23255(Current);
	F1969_23995(RTCW(tr1), arg1, arg2, arg3);
	tb1 = F214_11241(RTCV(F1938_23255(Current)));
	if (tb1) {
		tp1 = F214_11242(RTCV(F1938_23255(Current)));
		F214_11244(Current, tp1);
	}
	tb1 = F214_11243(RTCV(F1938_23255(Current)));
	if ((EIF_BOOLEAN) !tb1) {
		F1912_22507(Current);
	}
	F214_11247(RTCV(F1938_23255(Current)));
	RTLE;
}

/* {EV_INTERNAL_COMBO_BOX_IMP}.on_right_button_double_click */
void F1938_23264 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
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
	F214_11246(RTCV(F1938_23255(Current)));
	tr1 = F1938_23255(Current);
	F1969_23996(RTCW(tr1), arg1, arg2, arg3);
	tb1 = F214_11241(RTCV(F1938_23255(Current)));
	if (tb1) {
		tp1 = F214_11242(RTCV(F1938_23255(Current)));
		F214_11244(Current, tp1);
	}
	tb1 = F214_11243(RTCV(F1938_23255(Current)));
	if ((EIF_BOOLEAN) !tb1) {
		F1912_22507(Current);
	}
	F214_11247(RTCV(F1938_23255(Current)));
	RTLE;
}

/* {EV_INTERNAL_COMBO_BOX_IMP}.on_mouse_move */
void F1938_23265 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
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
	F214_11246(RTCV(F1938_23255(Current)));
	tr1 = F1938_23255(Current);
	F1970_24092(RTCW(tr1), arg1, arg2, arg3);
	tb1 = F214_11241(RTCV(F1938_23255(Current)));
	if (tb1) {
		tp1 = F214_11242(RTCV(F1938_23255(Current)));
		F214_11244(Current, tp1);
	}
	tb1 = F214_11243(RTCV(F1938_23255(Current)));
	if ((EIF_BOOLEAN) !tb1) {
		F1912_22507(Current);
	}
	F214_11247(RTCV(F1938_23255(Current)));
	RTLE;
}

/* {EV_INTERNAL_COMBO_BOX_IMP}.on_key_down */
void F1938_23266 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
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
	F214_11246(RTCV(F1938_23255(Current)));
	tr1 = F1938_23255(Current);
	F2007_25289(RTCW(tr1), arg1, arg2);
	tb1 = F214_11241(RTCV(F1938_23255(Current)));
	if (tb1) {
		tp1 = F214_11242(RTCV(F1938_23255(Current)));
		F214_11244(Current, tp1);
	}
	tb1 = F214_11243(RTCV(F1938_23255(Current)));
	if ((EIF_BOOLEAN) !tb1) {
		F1912_22507(Current);
	}
	F214_11247(RTCV(F1938_23255(Current)));
	RTLE;
}

/* {EV_INTERNAL_COMBO_BOX_IMP}.on_char */
void F1938_23267 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
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
	F214_11246(RTCV(F1938_23255(Current)));
	tr1 = F1938_23255(Current);
	F1970_24110(RTCW(tr1), arg1, arg2);
	tb1 = F214_11241(RTCV(F1938_23255(Current)));
	if (tb1) {
		tp1 = F214_11242(RTCV(F1938_23255(Current)));
		F214_11244(Current, tp1);
	}
	tb1 = F214_11243(RTCV(F1938_23255(Current)));
	if ((EIF_BOOLEAN) !tb1) {
		F1912_22507(Current);
	}
	F214_11247(RTCV(F1938_23255(Current)));
	RTLE;
}

/* {EV_INTERNAL_COMBO_BOX_IMP}.on_key_up */
void F1938_23268 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
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
	F214_11246(RTCV(F1938_23255(Current)));
	tr1 = F1938_23255(Current);
	F1970_24109(RTCW(tr1), arg1, arg2);
	tb1 = F214_11241(RTCV(F1938_23255(Current)));
	if (tb1) {
		tp1 = F214_11242(RTCV(F1938_23255(Current)));
		F214_11244(Current, tp1);
	}
	tb1 = F214_11243(RTCV(F1938_23255(Current)));
	if ((EIF_BOOLEAN) !tb1) {
		F1912_22507(Current);
	}
	F214_11247(RTCV(F1938_23255(Current)));
	RTLE;
}

/* {EV_INTERNAL_COMBO_BOX_IMP}.on_set_focus */
void F1938_23269 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F214_11246(RTCV(F1938_23255(Current)));
	F2007_25271(RTCV(F1938_23255(Current)));
	tb1 = F214_11241(RTCV(F1938_23255(Current)));
	if (tb1) {
		tp1 = F214_11242(RTCV(F1938_23255(Current)));
		F214_11244(Current, tp1);
	}
	tb1 = F214_11243(RTCV(F1938_23255(Current)));
	if ((EIF_BOOLEAN) !tb1) {
		F1912_22507(Current);
	}
	F214_11247(RTCV(F1938_23255(Current)));
	RTLE;
}

/* {EV_INTERNAL_COMBO_BOX_IMP}.on_kill_focus */
void F1938_23270 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tb1 = F2006_25183(RTCV(F1938_23255(Current)));
	if ((EIF_BOOLEAN) !tb1) {
		F214_11246(RTCV(F1938_23255(Current)));
		F2007_25272(RTCV(F1938_23255(Current)));
		tb1 = F214_11241(RTCV(F1938_23255(Current)));
		if (tb1) {
			tp1 = F214_11242(RTCV(F1938_23255(Current)));
			F214_11244(Current, tp1);
		}
		tb1 = F214_11243(RTCV(F1938_23255(Current)));
		if ((EIF_BOOLEAN) !tb1) {
			F1912_22507(Current);
		}
		F214_11247(RTCV(F1938_23255(Current)));
	}
	RTLE;
}

/* {EV_INTERNAL_COMBO_BOX_IMP}.on_set_cursor */
void F1938_23271 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
		tr1 = *(EIF_REFERENCE *)(RTCV(F1938_23255(Current)) + _REFACS_12_);
		tb1 = (EIF_BOOLEAN)(tr1 != NULL);
	}
	if (tb1) {
		F1970_24119(RTCV(F1938_23255(Current)));
	}
	RTLE;
}

/* {EV_INTERNAL_COMBO_BOX_IMP}.on_erase_background */
void F1938_23272 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
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

/* {EV_INTERNAL_COMBO_BOX_IMP}.cwin_get_wm_command_hwnd */
EIF_POINTER F1938_23273 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = (EIF_POINTER) GET_WM_COMMAND_HWND(((WPARAM) arg1), ((LPARAM) arg2));
	return Result;
}

/* {EV_INTERNAL_COMBO_BOX_IMP}.on_wm_ctlcolor */
void F1938_23274 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,loc3);
	RTLIU(3);
	
	RTGC;
	loc2 = (EIF_POINTER) GET_WM_COMMAND_HWND(((WPARAM) arg1), ((LPARAM) arg2));
	{
		/* INLINED CODE (ANY.default_pointer) */
		tp1 = (EIF_POINTER)  0;
		/* END INLINED CODE */
	}
	if ((EIF_BOOLEAN)(loc2 != tp1)) {
		loc1 = F1898_22150(Current, loc2);
		loc1 = RTRV(eif_new_type(1009, 0x00), loc1);
		tb1 = '\0';
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			tb2 = F1296_15099(RTCW(loc1));
			tb1 = tb2;
		}
		if (tb1) {
			loc3 = RTLNS(eif_new_type(1312, 0x01).id, 1312, _OBJSIZ_8_2_0_3_0_8_0_0_);
			F1313_15461(RTCW(loc3), Current, arg1);
			F1938_23275(Current, loc1, loc3);
		}
	}
	RTLE;
}

/* {EV_INTERNAL_COMBO_BOX_IMP}.on_color_control */
void F1938_23275 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(9);
	RTLR(0,loc2);
	RTLR(1,arg1);
	RTLR(2,loc3);
	RTLR(3,tr1);
	RTLR(4,loc4);
	RTLR(5,loc5);
	RTLR(6,arg2);
	RTLR(7,loc1);
	RTLR(8,Current);
	RTLIU(9);
	
	RTGC;
	loc2 = arg1;
	loc2 = RTRV(eif_new_type(1950, 0x00), loc2);
	RTCT0("int /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	loc3 = F1951_23464(RTCW(loc2));
	loc3 = RTRV(eif_new_type(2006, 0x00), loc3);
	RTCT0("is_a_combo_box", EX_CHECK);
	if ((EIF_BOOLEAN)(loc3 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	tb1 = '\01';
	tr1 = *(EIF_REFERENCE *)(RTCW(loc3) + _REFACS_62_);
	if (!(EIF_BOOLEAN)(tr1 != NULL)) {
		tr1 = *(EIF_REFERENCE *)(RTCW(loc3) + _REFACS_63_);
		tb1 = (EIF_BOOLEAN)(tr1 != NULL);
	}
	if (tb1) {
		loc4 = F1715_19380(RTCW(loc3));
		loc4 = *(EIF_REFERENCE *)(RTCW(loc4) + _REFACS_1_);
		loc4 = RTRV(eif_new_type(1829, 0x00), loc4);
		loc5 = F1715_19379(RTCW(loc3));
		loc5 = *(EIF_REFERENCE *)(RTCW(loc5) + _REFACS_1_);
		loc5 = RTRV(eif_new_type(1829, 0x00), loc5);
		RTCT0("background_color /= Void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc4 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		RTCT0("foreground_color /= Void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc5 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		F1306_15253(RTCW(arg2), loc5);
		F1306_15252(RTCW(arg2), loc4);
		tr1 = RTOUCR(285,F403_13235, (Current));
		loc1 = F536_14238(RTCW(tr1), NULL, loc4);
		tp1 = *(EIF_POINTER *)(RTCW(loc1)+ _PTROFF_0_2_0_3_0_0_);
		F214_11244(Current, tp1);
		F1912_22507(Current);
	}
	RTLE;
}

/* {EV_INTERNAL_COMBO_BOX_IMP}.process_message */
EIF_POINTER F1938_23276 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3, EIF_POINTER arg4)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	switch (arg2) {
		case 307L:
			F1938_23274(Current, arg3, arg4);
			break;
		default:
			Result = F1912_22635(Current, arg1, arg2, arg3, arg4);
			break;
	}
	RTLE;
	return Result;
}

/* {EV_INTERNAL_COMBO_BOX_IMP}.on_getdlgcode */
void F1938_23277 (EIF_REFERENCE Current)
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

/* {EV_INTERNAL_COMBO_BOX_IMP}.tooltip_window */
EIF_REFERENCE F1938_23278 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_REFERENCE) Current;
}

void EIF_Minit1921 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
