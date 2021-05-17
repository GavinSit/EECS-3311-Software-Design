/*
 * Code for class WEL_COMPOSITE_WINDOW
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1896.h"
#include <windows.h>
#include <winx.h>
#include <wel.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F1913_22783
static EIF_POINTER inline_F1913_22783 (EIF_POINTER arg1, EIF_POINTER arg2)
{
	return (EIF_POINTER) (ChildWindowFromPoint ((HWND) arg1, *(POINT *) arg2))
	;
}
#define INLINE_F1913_22783
#endif
#ifndef INLINE_F67_9735
static EIF_INTEGER_32 inline_F67_9735 (EIF_POINTER arg1, EIF_POINTER arg2)
{
	return (EIF_INTEGER_32) (SetMenu ((HWND) arg1, (HMENU) arg2))
	;
}
#define INLINE_F67_9735
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

/* {WEL_COMPOSITE_WINDOW}.children */
EIF_REFERENCE F1913_22701 (EIF_REFERENCE Current)
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
	loc1 = RTLNS(eif_new_type(1900, 0x01).id, 1900, _OBJSIZ_2_0_0_0_0_0_0_0_);
	tr1 = F1901_22218(RTCW(loc1), Current);
	RTLE;
	return (EIF_REFERENCE) tr1;
}

/* {WEL_COMPOSITE_WINDOW}.closeable */
EIF_BOOLEAN F1913_22705 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
}

/* {WEL_COMPOSITE_WINDOW}.has_menu */
EIF_BOOLEAN F1913_22706 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	tp1 = (EIF_POINTER) GetMenu(((HWND) tp1));
	{
		/* INLINED CODE (ANY.default_pointer) */
		tp2 = (EIF_POINTER)  0;
		/* END INLINED CODE */
	}
	tp3 = tp2;
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tp1 != tp3);
	RTLE;
	return Result;
}

/* {WEL_COMPOSITE_WINDOW}.child_window_from_point */
EIF_POINTER F1913_22716 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	tp2 = *(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_0_1_0_0_0_0_);
	Result = inline_F1913_22783(tp1, tp2);
	RTLE;
	return Result;
}

/* {WEL_COMPOSITE_WINDOW}.set_menu */
void F1913_22717 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	tp2 = *(EIF_POINTER *)(RTCW(arg1) + O12527[Dtype(arg1)-1295]);
	loc1 = inline_F67_9735(tp1, tp2);
	RTLE;
}

/* {WEL_COMPOSITE_WINDOW}.unset_menu */
void F1913_22718 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	{
		/* INLINED CODE (ANY.default_pointer) */
		tp2 = (EIF_POINTER)  0;
		/* END INLINED CODE */
	}
	tp3 = tp2;
	loc1 = inline_F67_9735(tp1, tp3);
	RTLE;
}

/* {WEL_COMPOSITE_WINDOW}.set_icon */
void F1913_22719 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,arg2);
	RTLIU(3);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		tp1 = *(EIF_POINTER *)(Current + O12527[dtype-1295]);
		tp2 = (EIF_POINTER) (WPARAM)((((EIF_INTEGER_32) 0L)));
		tp3 = *(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_0_2_0_3_0_0_);
		inline_F67_9749(tp1, ((EIF_INTEGER_32) 128L), tp2, tp3);
	} else {
		tp1 = *(EIF_POINTER *)(Current + O12527[dtype-1295]);
		tp2 = (EIF_POINTER) (WPARAM)((((EIF_INTEGER_32) 0L)));
		tp3 = (EIF_POINTER) (LPARAM)((((EIF_INTEGER_32) 0L)));
		inline_F67_9749(tp1, ((EIF_INTEGER_32) 128L), tp2, tp3);
	}
	if ((EIF_BOOLEAN)(arg2 != NULL)) {
		tp1 = *(EIF_POINTER *)(Current + O12527[dtype-1295]);
		tp2 = (EIF_POINTER) (WPARAM)((((EIF_INTEGER_32) 1L)));
		tp3 = *(EIF_POINTER *)(RTCW(arg2)+ _PTROFF_0_2_0_3_0_0_);
		inline_F67_9749(tp1, ((EIF_INTEGER_32) 128L), tp2, tp3);
	} else {
		tp1 = *(EIF_POINTER *)(Current + O12527[dtype-1295]);
		tp2 = (EIF_POINTER) (WPARAM)((((EIF_INTEGER_32) 1L)));
		tp3 = (EIF_POINTER) (LPARAM)((((EIF_INTEGER_32) 0L)));
		inline_F67_9749(tp1, ((EIF_INTEGER_32) 128L), tp2, tp3);
	}
	RTLE;
}

/* {WEL_COMPOSITE_WINDOW}.set_horizontal_position */
void F1913_22720 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O18874[Dtype(Current)-1912]);
	loc2 = tr1;
	if (EIF_TEST(loc2)) {
		F1864_21069(loc2, arg1);
	}
	RTLE;
}

/* {WEL_COMPOSITE_WINDOW}.set_vertical_position */
void F1913_22721 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O18874[Dtype(Current)-1912]);
	loc2 = tr1;
	if (EIF_TEST(loc2)) {
		F1864_21070(loc2, arg1);
	}
	RTLE;
}

/* {WEL_COMPOSITE_WINDOW}.set_horizontal_range */
void F1913_22722 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
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
	tr1 = *(EIF_REFERENCE *)(Current + O18874[Dtype(Current)-1912]);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		F1864_21071(loc1, arg1, arg2);
	}
	RTLE;
}

/* {WEL_COMPOSITE_WINDOW}.set_vertical_range */
void F1913_22723 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
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
	tr1 = *(EIF_REFERENCE *)(Current + O18874[Dtype(Current)-1912]);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		F1864_21072(loc1, arg1, arg2);
	}
	RTLE;
}

/* {WEL_COMPOSITE_WINDOW}.horizontal_update */
void F1913_22724 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1912_22571(Current, arg1, ((EIF_INTEGER_32) 0L));
	F1913_22720(Current, arg2);
	F1912_22562(Current);
	RTLE;
}

/* {WEL_COMPOSITE_WINDOW}.vertical_update */
void F1913_22725 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1912_22571(Current, ((EIF_INTEGER_32) 0L), arg1);
	F1913_22721(Current, arg2);
	F1912_22562(Current);
	RTLE;
}

/* {WEL_COMPOSITE_WINDOW}.destroy */
void F1913_22726 (EIF_REFERENCE Current)
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
	F1912_22576(Current);
	tr1 = RTOUCR(421,F1913_22764, (Current));
	tb1 = F180_10627(RTCW(tr1), Current);
	if (tb1) {
		PostQuitMessage(((int) ((EIF_INTEGER_32) 0L)));
	}
	RTLE;
}

/* {WEL_COMPOSITE_WINDOW}.draw_menu */
void F1913_22727 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	DrawMenuBar(((HWND) tp1));
}

/* {WEL_COMPOSITE_WINDOW}.move_absolute */
void F1913_22728 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLIU(3);
	
	RTGC;
	loc2 = *(EIF_REFERENCE *)(Current + O18635[Dtype(Current)-1911]);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		loc1 = RTLNS(eif_new_type(1905, 0x01).id, 1905, _OBJSIZ_0_1_0_0_0_1_0_0_);
		F1906_22334(RTCW(loc1), arg1, arg2);
		F1906_22345(RTCW(loc1), loc2);
		ti4_1 = F1906_22336(RTCW(loc1));
		ti4_2 = F1906_22337(RTCW(loc1));
		F1912_22542(Current, ti4_1, ti4_2);
	} else {
		F1912_22542(Current, arg1, arg2);
	}
	RTLE;
}

/* {WEL_COMPOSITE_WINDOW}.move_and_resize */
void F1913_22729 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_BOOLEAN arg5)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLIU(3);
	
	RTGC;
	loc2 = *(EIF_REFERENCE *)(Current + O18635[dtype-1911]);
	if ((EIF_BOOLEAN)(loc2 == NULL)) {
		F1913_22728(Current, arg1, arg2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R18715[dtype-1914])(Current, arg3, arg4);
		if (arg5) {
			F1912_22563(Current);
		}
	} else {
		loc1 = RTLNS(eif_new_type(1905, 0x01).id, 1905, _OBJSIZ_0_1_0_0_0_1_0_0_);
		F1906_22334(RTCW(loc1), arg1, arg2);
		F1906_22344(RTCW(loc1), loc2);
		ti4_1 = F1906_22336(RTCW(loc1));
		ti4_2 = F1906_22337(RTCW(loc1));
		F1912_22541(Current, ti4_1, ti4_2, arg3, arg4, arg5);
	}
	RTLE;
}

/* {WEL_COMPOSITE_WINDOW}.notify */
void F1913_22730 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_COMPOSITE_WINDOW}.on_control_command */
void F1913_22731 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_COMPOSITE_WINDOW}.on_control_id_command */
void F1913_22732 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_COMPOSITE_WINDOW}.on_sys_command */
void F1913_22733 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_COMPOSITE_WINDOW}.on_accelerator_command */
void F1913_22734 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_COMPOSITE_WINDOW}.on_menu_select */
void F1913_22735 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_REFERENCE arg3)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_COMPOSITE_WINDOW}.on_paint */
void F1913_22736 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_COMPOSITE_WINDOW}.on_vertical_scroll_control */
void F1913_22737 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_REFERENCE arg3)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_COMPOSITE_WINDOW}.on_horizontal_scroll_control */
void F1913_22738 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_REFERENCE arg3)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_COMPOSITE_WINDOW}.on_vertical_scroll */
void F1913_22739 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current + O18874[Dtype(Current)-1912]);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		F1864_21078(RTCW(loc1), arg1, arg2);
	}
	RTLE;
}

/* {WEL_COMPOSITE_WINDOW}.on_horizontal_scroll */
void F1913_22740 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current + O18874[Dtype(Current)-1912]);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		F1864_21077(RTCW(loc1), arg1, arg2);
	}
	RTLE;
}

/* {WEL_COMPOSITE_WINDOW}.on_draw_item */
void F1913_22741 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_REFERENCE arg2)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_COMPOSITE_WINDOW}.on_color_control */
void F1913_22742 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_COMPOSITE_WINDOW}.on_get_min_max_info */
void F1913_22743 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_COMPOSITE_WINDOW}.on_palette_is_changing */
void F1913_22744 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_COMPOSITE_WINDOW}.on_palette_changed */
void F1913_22745 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_COMPOSITE_WINDOW}.on_query_new_palette */
void F1913_22746 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_COMPOSITE_WINDOW}.on_getdlgcode */
void F1913_22747 (EIF_REFERENCE Current)
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

/* {WEL_COMPOSITE_WINDOW}.on_menu_command */
void F1913_22748 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_COMPOSITE_WINDOW}.on_wm_notify */
void F1913_22749 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,loc2);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTGC;
	loc1 = RTLNS(eif_new_type(1902, 0x01).id, 1902, _OBJSIZ_0_1_0_0_0_1_0_0_);
	F1296_15096(RTCW(loc1), arg2);
	ti4_1 = (EIF_INTEGER_32) (rt_int_ptr) arg1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32, EIF_REFERENCE)) R18778[Dtype(Current)-1914])(Current, ti4_1, loc1);
	tb1 = '\0';
	tr1 = F1903_22266(RTCW(loc1));
	loc2 = tr1;
	loc2 = RTRV(eif_new_type(1925, 0x01),loc2);
	if (EIF_TEST(loc2)) {
		tb2 = F1296_15099(loc2);
		tb1 = tb2;
	}
	if (tb1) {
		F214_11246(loc2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R19037[Dtype(loc2)-1926])(loc2, loc1);
		tb1 = F214_11241(loc2);
		if (tb1) {
			tp1 = F214_11242(loc2);
			F214_11244(Current, tp1);
		}
		F214_11247(loc2);
	}
	RTLE;
}

/* {WEL_COMPOSITE_WINDOW}.on_wm_command */
void F1913_22750 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc4);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	loc1 = (EIF_INTEGER_32) GET_WM_COMMAND_ID(((WPARAM) arg1), ((LPARAM) arg2));
	loc2 = (EIF_POINTER) GET_WM_COMMAND_HWND(((WPARAM) arg1), ((LPARAM) arg2));
	loc3 = (EIF_INTEGER_32) GET_WM_COMMAND_CMD(((WPARAM) arg1), ((LPARAM) arg2));
	{
		/* INLINED CODE (ANY.default_pointer) */
		tp1 = (EIF_POINTER)  0;
		/* END INLINED CODE */
	}
	if ((EIF_BOOLEAN)(loc2 != tp1)) {
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R18915[dtype-1914])(Current, loc1);
		if ((EIF_BOOLEAN) EIF_TEST(IsWindow(((HWND) loc2)))) {
			tr1 = F1898_22150(Current, loc2);
			loc4 = tr1;
			loc4 = RTRV(eif_new_type(1925, 0x01),loc4);
			if (EIF_TEST(loc4)) {
				tb1 = '\0';
				if (F1296_15099(Current)) {
					tb2 = F1296_15099(loc4);
					tb1 = tb2;
				}
				if (tb1) {
					{
						/* INLINED CODE (WEL_COMPOSITE_WINDOW.on_control_command) */
						/* END INLINED CODE */
					}
					;
				}
				tb1 = '\0';
				if (F1296_15099(Current)) {
					tb2 = F1296_15099(loc4);
					tb1 = tb2;
				}
				if (tb1) {
					{
						/* INLINED CODE (WEL_COMPOSITE_WINDOW.notify) */
						/* END INLINED CODE */
					}
					;
				}
				tb1 = F1296_15099(loc4);
				if (tb1) {
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R19036[Dtype(loc4)-1926])(loc4, loc3);
				}
			}
		}
	} else {
		if ((EIF_BOOLEAN)(loc3 == ((EIF_INTEGER_32) 0L))) {
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R18916[dtype-1914])(Current, loc1);
		} else {
			if ((EIF_BOOLEAN)(loc3 == ((EIF_INTEGER_32) 1L))) {
				{
					/* INLINED CODE (WEL_COMPOSITE_WINDOW.on_accelerator_command) */
					/* END INLINED CODE */
				}
				;
			}
		}
	}
	RTLE;
}

/* {WEL_COMPOSITE_WINDOW}.on_wm_control_id_command */
void F1913_22751 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R18898[Dtype(Current)-1914])(Current, arg1);
}

/* {WEL_COMPOSITE_WINDOW}.on_wm_menu_command */
void F1913_22752 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R18913[Dtype(Current)-1914])(Current, arg1);
}

/* {WEL_COMPOSITE_WINDOW}.on_wm_menu_select */
void F1913_22753 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc2);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	loc1 = (EIF_POINTER) GET_WM_MENUSELECT_HMENU(((WPARAM) arg1), ((LPARAM) arg2));
	{
		/* INLINED CODE (ANY.default_pointer) */
		tp1 = (EIF_POINTER)  0;
		/* END INLINED CODE */
	}
	if ((EIF_BOOLEAN)(loc1 != tp1)) {
		loc2 = RTLNS(eif_new_type(1315, 0x01).id, 1315, _OBJSIZ_0_1_0_0_0_1_0_0_);
		F1296_15096(RTCW(loc2), loc1);
		ti4_1 = (EIF_INTEGER_32) GET_WM_MENUSELECT_CMD(((WPARAM) arg1), ((LPARAM) arg2));
		ti4_2 = (EIF_INTEGER_32) GET_WM_MENUSELECT_FLAGS(((WPARAM) arg1), ((LPARAM) arg2));
		{
			/* INLINED CODE (WEL_COMPOSITE_WINDOW.on_menu_select) */
			/* END INLINED CODE */
		}
		;
	} else {
		ti4_1 = (EIF_INTEGER_32) GET_WM_MENUSELECT_CMD(((WPARAM) arg1), ((LPARAM) arg2));
		ti4_2 = (EIF_INTEGER_32) GET_WM_MENUSELECT_FLAGS(((WPARAM) arg1), ((LPARAM) arg2));
		{
			/* INLINED CODE (WEL_COMPOSITE_WINDOW.on_menu_select) */
			tr1 = NULL;
			/* END INLINED CODE */
		}
		;
	}
	RTLE;
}

/* {WEL_COMPOSITE_WINDOW}.on_wm_paint */
void F1913_22754 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,loc2);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTGC;
	loc1 = RTLNS(eif_new_type(1312, 0x01).id, 1312, _OBJSIZ_8_2_0_3_0_8_0_0_);
	F1313_15461(RTCW(loc1), Current, arg1);
	F1313_15464(RTCW(loc1));
	loc2 = *(EIF_REFERENCE *)(Current + O18874[dtype-1912]);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		ti4_1 = F1864_21059(RTCW(loc2));
		ti4_2 = F1864_21060(RTCW(loc2));
		F1306_15251(RTCW(loc1), (EIF_INTEGER_32) -ti4_1, (EIF_INTEGER_32) -ti4_2);
	}
	tr1 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_7_);
	tr1 = F1383_16657(RTCW(tr1));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R18902[dtype-1914])(Current, loc1, tr1);
	F1313_15465(RTCW(loc1));
	RTLE;
}

/* {WEL_COMPOSITE_WINDOW}.on_wm_vscroll */
void F1913_22755 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc2);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	loc1 = (EIF_POINTER) GET_WM_VSCROLL_HWND(((WPARAM) arg1), ((LPARAM) arg2));
	{
		/* INLINED CODE (ANY.default_pointer) */
		tp1 = (EIF_POINTER)  0;
		/* END INLINED CODE */
	}
	if ((EIF_BOOLEAN)(loc1 != tp1)) {
		tb1 = '\0';
		tr1 = F1898_22150(Current, loc1);
		loc2 = tr1;
		loc2 = RTRV(eif_new_type(1931, 0x01),loc2);
		if (EIF_TEST(loc2)) {
			tb2 = F1296_15099(loc2);
			tb1 = tb2;
		}
		if (tb1) {
			ti4_1 = (EIF_INTEGER_32) GET_WM_VSCROLL_CODE(((WPARAM) arg1), ((LPARAM) arg2));
			ti4_2 = (EIF_INTEGER_32) cwin_get_wm_vscroll_pos(((WPARAM) arg1), ((LPARAM) arg2));
			{
				/* INLINED CODE (WEL_COMPOSITE_WINDOW.on_vertical_scroll_control) */
				/* END INLINED CODE */
			}
			;
		}
	} else {
		ti4_1 = (EIF_INTEGER_32) GET_WM_VSCROLL_CODE(((WPARAM) arg1), ((LPARAM) arg2));
		ti4_2 = (EIF_INTEGER_32) cwin_get_wm_vscroll_pos(((WPARAM) arg1), ((LPARAM) arg2));
		F1913_22739(Current, ti4_1, ti4_2);
	}
	RTLE;
}

/* {WEL_COMPOSITE_WINDOW}.on_wm_hscroll */
void F1913_22756 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc2);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	loc1 = (EIF_POINTER) GET_WM_HSCROLL_HWND(((WPARAM) arg1), ((LPARAM) arg2));
	{
		/* INLINED CODE (ANY.default_pointer) */
		tp1 = (EIF_POINTER)  0;
		/* END INLINED CODE */
	}
	if ((EIF_BOOLEAN)(loc1 != tp1)) {
		tb1 = '\0';
		tr1 = F1898_22150(Current, loc1);
		loc2 = tr1;
		loc2 = RTRV(eif_new_type(1931, 0x01),loc2);
		if (EIF_TEST(loc2)) {
			tb2 = F1296_15099(loc2);
			tb1 = tb2;
		}
		if (tb1) {
			ti4_1 = (EIF_INTEGER_32) GET_WM_HSCROLL_CODE(((WPARAM) arg1), ((LPARAM) arg2));
			ti4_2 = (EIF_INTEGER_32) cwin_get_wm_hscroll_pos(((WPARAM) arg1), ((LPARAM) arg2));
			{
				/* INLINED CODE (WEL_COMPOSITE_WINDOW.on_horizontal_scroll_control) */
				/* END INLINED CODE */
			}
			;
		}
	} else {
		ti4_1 = (EIF_INTEGER_32) GET_WM_HSCROLL_CODE(((WPARAM) arg1), ((LPARAM) arg2));
		ti4_2 = (EIF_INTEGER_32) cwin_get_wm_hscroll_pos(((WPARAM) arg1), ((LPARAM) arg2));
		F1913_22740(Current, ti4_1, ti4_2);
	}
	RTLE;
}

/* {WEL_COMPOSITE_WINDOW}.on_wm_draw_item */
void F1913_22757 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	loc1 = RTLNS(eif_new_type(1903, 0x01).id, 1903, _OBJSIZ_1_1_0_0_0_1_0_0_);
	F1904_22274(RTCW(loc1), arg2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_POINTER, EIF_REFERENCE)) R18907[Dtype(Current)-1914])(Current, arg1, loc1);
	RTLE;
}

/* {WEL_COMPOSITE_WINDOW}.on_wm_get_min_max_info */
void F1913_22758 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	loc1 = RTLNS(eif_new_type(1408, 0x01).id, 1408, _OBJSIZ_0_1_0_0_0_1_0_0_);
	F1296_15096(RTCW(loc1), arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R18909[Dtype(Current)-1914])(Current, loc1);
	RTLE;
}

/* {WEL_COMPOSITE_WINDOW}.on_wm_ctlcolor */
void F1913_22759 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc3);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLIU(4);
	
	RTGC;
	loc1 = (EIF_POINTER) GET_WM_COMMAND_HWND(((WPARAM) arg1), ((LPARAM) arg2));
	tb1 = '\0';
	tb2 = '\0';
	{
		/* INLINED CODE (ANY.default_pointer) */
		tp1 = (EIF_POINTER)  0;
		/* END INLINED CODE */
	}
	if ((EIF_BOOLEAN)(loc1 != tp1)) {
		tr1 = F1898_22150(Current, loc1);
		loc3 = tr1;
		loc3 = RTRV(eif_new_type(1009, 0x01),loc3);
		tb2 = EIF_TEST(loc3);
	}
	if (tb2) {
		tb2 = F1296_15099(loc3);
		tb1 = tb2;
	}
	if (tb1) {
		loc2 = RTLNS(eif_new_type(1312, 0x01).id, 1312, _OBJSIZ_8_2_0_3_0_8_0_0_);
		F1313_15461(RTCW(loc2), Current, arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R18908[Dtype(Current)-1914])(Current, loc3, loc2);
	}
	RTLE;
}

/* {WEL_COMPOSITE_WINDOW}.on_wm_close */
void F1913_22760 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tb1 = F1913_22705(Current);
	F214_11245(Current, tb1);
	RTLE;
}

/* {WEL_COMPOSITE_WINDOW}.on_wm_destroy */
void F1913_22761 (EIF_REFERENCE Current)
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
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R18776[Dtype(Current)-1914])(Current);
	tr1 = RTOUCR(421,F1913_22764, (Current));
	tb1 = F180_10627(RTCW(tr1), Current);
	if (tb1) {
		PostQuitMessage(((int) ((EIF_INTEGER_32) 0L)));
	}
	RTLE;
}

/* {WEL_COMPOSITE_WINDOW}.on_wm_setting_change */
void F1913_22762 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = RTOUCR(352,F502_14145, (Current));
	F489_1934(RTCW(tr1), NULL);
	tr1 = RTOUCR(351,F502_14144, (Current));
	F489_1934(RTCW(tr1), NULL);
	tr1 = RTOUCR(353,F502_14146, (Current));
	F489_1934(RTCW(tr1), NULL);
	tr1 = RTOUCR(354,F502_14147, (Current));
	F489_1934(RTCW(tr1), NULL);
	tr1 = RTOUCR(355,F502_14148, (Current));
	F489_1934(RTCW(tr1), NULL);
	RTLE;
}

/* {WEL_COMPOSITE_WINDOW}.on_wm_syscolor_change */
void F1913_22763 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLR(3,loc2);
	RTLIU(4);
	
	RTGC;
	tr1 = RTOUCR(384,F1836_20749, (Current));
	F489_1934(RTCW(tr1), NULL);
	tr1 = RTOUCR(385,F1836_20750, (Current));
	F489_1934(RTCW(tr1), NULL);
	tr1 = RTOUCR(386,F1836_20751, (Current));
	F489_1934(RTCW(tr1), NULL);
	tr1 = RTOUCR(387,F1836_20752, (Current));
	F489_1934(RTCW(tr1), NULL);
	tr1 = RTOUCR(375,F1836_20753, (Current));
	F489_1934(RTCW(tr1), NULL);
	tr1 = RTOUCR(388,F1836_20754, (Current));
	F489_1934(RTCW(tr1), NULL);
	tr1 = RTOUCR(389,F1836_20755, (Current));
	F489_1934(RTCW(tr1), NULL);
	tr1 = RTOUCR(376,F1836_20756, (Current));
	F489_1934(RTCW(tr1), NULL);
	tr1 = RTOUCR(390,F1836_20757, (Current));
	F489_1934(RTCW(tr1), NULL);
	tr1 = RTOUCR(391,F1836_20758, (Current));
	F489_1934(RTCW(tr1), NULL);
	tr1 = RTOUCR(392,F1836_20759, (Current));
	F489_1934(RTCW(tr1), NULL);
	tr1 = RTOUCR(393,F1836_20760, (Current));
	F489_1934(RTCW(tr1), NULL);
	tr1 = RTOUCR(394,F1836_20761, (Current));
	F489_1934(RTCW(tr1), NULL);
	tr1 = RTOUCR(377,F1836_20762, (Current));
	F489_1934(RTCW(tr1), NULL);
	tr1 = RTOUCR(378,F1836_20763, (Current));
	F489_1934(RTCW(tr1), NULL);
	tr1 = RTOUCR(379,F1836_20764, (Current));
	F489_1934(RTCW(tr1), NULL);
	tr1 = RTOUCR(380,F1836_20765, (Current));
	F489_1934(RTCW(tr1), NULL);
	tr1 = RTOUCR(395,F1836_20766, (Current));
	F489_1934(RTCW(tr1), NULL);
	tr1 = RTOUCR(396,F1836_20767, (Current));
	F489_1934(RTCW(tr1), NULL);
	tr1 = RTOUCR(397,F1836_20768, (Current));
	F489_1934(RTCW(tr1), NULL);
	tr1 = RTOUCR(381,F1836_20769, (Current));
	F489_1934(RTCW(tr1), NULL);
	loc1 = F1913_22701(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R2292[Dtype(RTCW(loc1))-911])(loc1);
	for (;;) {
		tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2306[Dtype(RTCW(loc1))-911])(loc1);
		if (tb1) break;
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2258[Dtype(RTCW(loc1))-818])(loc1);
		loc2 = tr1;
		loc2 = RTRV(eif_new_type(1925, 0x01),loc2);
		if (EIF_TEST(loc2)) {
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2258[Dtype(RTCW(loc1))-818])(loc1);
			tp1 = *(EIF_POINTER *)(RTCW(tr1) + O12527[Dtype(tr1)-1295]);
			tp2 = (EIF_POINTER) (WPARAM)((((EIF_INTEGER_32) 0L)));
			tp3 = (EIF_POINTER) (LPARAM)((((EIF_INTEGER_32) 0L)));
			inline_F67_9749(tp1, ((EIF_INTEGER_32) 21L), tp2, tp3);
		}
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R2308[Dtype(RTCW(loc1))-911])(loc1);
	}
	RTLE;
}

/* {WEL_COMPOSITE_WINDOW}.application_main_window */
static EIF_REFERENCE F1913_22764_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(421)

	RTLI(1);
	RTLR(0,tr1);
	RTLIU(1);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(eif_new_type(179, 0x01).id, 179, _OBJSIZ_0_0_0_0_0_0_0_0_);
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1913_22764 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(421,F1913_22764_body,(Current));
}

/* {WEL_COMPOSITE_WINDOW}.composite_process_message */
EIF_POINTER F1913_22765 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3, EIF_POINTER arg4)
{
	GTCX
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc3);
	RTLR(3,loc2);
	RTLIU(4);
	
	RTGC;
	switch (arg2) {
		case 15L:
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_POINTER)) R18918[dtype-1914])(Current, arg3);
			break;
		case 312L:
			F1913_22759(Current, arg3, arg4);
			break;
		case 307L:
			F1913_22759(Current, arg3, arg4);
			break;
		case 308L:
			F1913_22759(Current, arg3, arg4);
			break;
		case 311L:
			F1913_22759(Current, arg3, arg4);
			break;
		case 309L:
			F1913_22759(Current, arg3, arg4);
			break;
		case 273L:
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_POINTER, EIF_POINTER)) R18914[dtype-1914])(Current, arg3, arg4);
			break;
		case 274L:
			ti4_1 = (EIF_INTEGER_32) (rt_int_ptr) arg3;
			ti4_2 = (EIF_INTEGER_32) LOWORD((arg4));
			ti4_3 = (EIF_INTEGER_32) HIWORD((arg4));
			{
				/* INLINED CODE (WEL_COMPOSITE_WINDOW.on_sys_command) */
				/* END INLINED CODE */
			}
			;
			break;
		case 287L:
			F1913_22753(Current, arg3, arg4);
			break;
		case 277L:
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_POINTER, EIF_POINTER)) R18919[dtype-1914])(Current, arg3, arg4);
			break;
		case 276L:
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_POINTER, EIF_POINTER)) R18920[dtype-1914])(Current, arg3, arg4);
			break;
		case 43L:
			F1913_22757(Current, arg3, arg4);
			break;
		case 36L:
			F1913_22758(Current, arg4);
			break;
		case 784L:
			tr1 = F1898_22150(Current, arg3);
			{
				/* INLINED CODE (WEL_COMPOSITE_WINDOW.on_palette_is_changing) */
				/* END INLINED CODE */
			}
			;
			break;
		case 785L:
			tr1 = F1898_22150(Current, arg3);
			{
				/* INLINED CODE (WEL_COMPOSITE_WINDOW.on_palette_changed) */
				/* END INLINED CODE */
			}
			;
			break;
		case 783L:
			{
				/* INLINED CODE (WEL_COMPOSITE_WINDOW.on_query_new_palette) */
				/* END INLINED CODE */
			}
			;
			break;
		case 26L:
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R18925[dtype-1914])(Current);
			break;
		case 21L:
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R18926[dtype-1914])(Current);
			break;
		case 16L:
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R18924[dtype-1914])(Current);
			break;
		default:
			loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			Result = (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE, EIF_POINTER, EIF_INTEGER_32, EIF_POINTER, EIF_POINTER)) R18806[dtype-1914])(Current, arg1, arg2, arg3, arg4);
			break;
	}
	if ((EIF_BOOLEAN) !loc1) {
		loc3 = *(EIF_REFERENCE *)(Current + O18636[dtype-1911]);
		tb1 = '\0';
		tb2 = '\0';
		if ((EIF_BOOLEAN)(loc3 != NULL)) {
			tb2 = F1912_22500(Current);
		}
		if (tb2) {
			tb2 = F1000_3931(RTCW(loc3), arg2);
			tb1 = tb2;
		}
		if (tb1) {
			loc2 = F1000_3929(RTCW(loc3), arg2);
			RTCT0("l_message_attached", EX_CHECK);
			if ((EIF_BOOLEAN)(loc2 != NULL)) {
				RTCK0;
			} else {
				RTCF0;
			}
			F44_9188(RTCW(loc2), Current, arg2, arg3, arg4);
		}
	}
	RTLE;
	return Result;
}

/* {WEL_COMPOSITE_WINDOW}.process_message */
EIF_POINTER F1913_22766 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3, EIF_POINTER arg4)
{
	GTCX
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc3);
	RTLR(3,loc2);
	RTLIU(4);
	
	RTGC;
	switch (arg2) {
		case 15L:
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_POINTER)) R18918[dtype-1914])(Current, arg3);
			break;
		case 312L:
			F1913_22759(Current, arg3, arg4);
			break;
		case 307L:
			F1913_22759(Current, arg3, arg4);
			break;
		case 308L:
			F1913_22759(Current, arg3, arg4);
			break;
		case 311L:
			F1913_22759(Current, arg3, arg4);
			break;
		case 309L:
			F1913_22759(Current, arg3, arg4);
			break;
		case 273L:
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_POINTER, EIF_POINTER)) R18914[dtype-1914])(Current, arg3, arg4);
			break;
		case 274L:
			ti4_1 = (EIF_INTEGER_32) (rt_int_ptr) arg3;
			ti4_2 = (EIF_INTEGER_32) LOWORD((arg4));
			ti4_3 = (EIF_INTEGER_32) HIWORD((arg4));
			{
				/* INLINED CODE (WEL_COMPOSITE_WINDOW.on_sys_command) */
				/* END INLINED CODE */
			}
			;
			break;
		case 287L:
			F1913_22753(Current, arg3, arg4);
			break;
		case 277L:
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_POINTER, EIF_POINTER)) R18919[dtype-1914])(Current, arg3, arg4);
			break;
		case 276L:
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_POINTER, EIF_POINTER)) R18920[dtype-1914])(Current, arg3, arg4);
			break;
		case 43L:
			F1913_22757(Current, arg3, arg4);
			break;
		case 36L:
			F1913_22758(Current, arg4);
			break;
		case 784L:
			tr1 = F1898_22150(Current, arg3);
			{
				/* INLINED CODE (WEL_COMPOSITE_WINDOW.on_palette_is_changing) */
				/* END INLINED CODE */
			}
			;
			break;
		case 785L:
			tr1 = F1898_22150(Current, arg3);
			{
				/* INLINED CODE (WEL_COMPOSITE_WINDOW.on_palette_changed) */
				/* END INLINED CODE */
			}
			;
			break;
		case 783L:
			{
				/* INLINED CODE (WEL_COMPOSITE_WINDOW.on_query_new_palette) */
				/* END INLINED CODE */
			}
			;
			break;
		case 26L:
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R18925[dtype-1914])(Current);
			break;
		case 21L:
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R18926[dtype-1914])(Current);
			break;
		case 16L:
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R18924[dtype-1914])(Current);
			break;
		default:
			loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			Result = (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE, EIF_POINTER, EIF_INTEGER_32, EIF_POINTER, EIF_POINTER)) R18806[dtype-1914])(Current, arg1, arg2, arg3, arg4);
			break;
	}
	if ((EIF_BOOLEAN) !loc1) {
		loc3 = *(EIF_REFERENCE *)(Current + O18636[dtype-1911]);
		tb1 = '\0';
		tb2 = '\0';
		if ((EIF_BOOLEAN)(loc3 != NULL)) {
			tb2 = F1912_22500(Current);
		}
		if (tb2) {
			tb2 = F1000_3931(RTCW(loc3), arg2);
			tb1 = tb2;
		}
		if (tb1) {
			loc2 = F1000_3929(RTCW(loc3), arg2);
			RTCT0("l_message_attached", EX_CHECK);
			if ((EIF_BOOLEAN)(loc2 != NULL)) {
				RTCK0;
			} else {
				RTCF0;
			}
			F44_9188(RTCW(loc2), Current, arg2, arg3, arg4);
		}
	}
	RTLE;
	return Result;
}

/* {WEL_COMPOSITE_WINDOW}.cwin_draw_menu_bar */
void F1913_22767 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	
	DrawMenuBar(((HWND) arg1));
}

/* {WEL_COMPOSITE_WINDOW}.cwin_get_menu */
EIF_POINTER F1913_22768 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = (EIF_POINTER) GetMenu(((HWND) arg1));
	return Result;
}

/* {WEL_COMPOSITE_WINDOW}.cwin_post_quit_message */
void F1913_22770 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	PostQuitMessage(((int) arg1));
}

/* {WEL_COMPOSITE_WINDOW}.cwin_get_wm_command_id */
EIF_INTEGER_32 F1913_22771 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) GET_WM_COMMAND_ID(((WPARAM) arg1), ((LPARAM) arg2));
	return Result;
}

/* {WEL_COMPOSITE_WINDOW}.cwin_get_wm_command_hwnd */
EIF_POINTER F1913_22772 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = (EIF_POINTER) GET_WM_COMMAND_HWND(((WPARAM) arg1), ((LPARAM) arg2));
	return Result;
}

/* {WEL_COMPOSITE_WINDOW}.cwin_get_wm_command_cmd */
EIF_INTEGER_32 F1913_22773 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) GET_WM_COMMAND_CMD(((WPARAM) arg1), ((LPARAM) arg2));
	return Result;
}

/* {WEL_COMPOSITE_WINDOW}.cwin_get_wm_menuselect_cmd */
EIF_INTEGER_32 F1913_22774 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) GET_WM_MENUSELECT_CMD(((WPARAM) arg1), ((LPARAM) arg2));
	return Result;
}

/* {WEL_COMPOSITE_WINDOW}.cwin_get_wm_menuselect_flags */
EIF_INTEGER_32 F1913_22775 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) GET_WM_MENUSELECT_FLAGS(((WPARAM) arg1), ((LPARAM) arg2));
	return Result;
}

/* {WEL_COMPOSITE_WINDOW}.cwin_get_wm_menuselect_hmenu */
EIF_POINTER F1913_22776 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = (EIF_POINTER) GET_WM_MENUSELECT_HMENU(((WPARAM) arg1), ((LPARAM) arg2));
	return Result;
}

/* {WEL_COMPOSITE_WINDOW}.cwin_get_wm_vscroll_code */
EIF_INTEGER_32 F1913_22777 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) GET_WM_VSCROLL_CODE(((WPARAM) arg1), ((LPARAM) arg2));
	return Result;
}

/* {WEL_COMPOSITE_WINDOW}.cwin_get_wm_vscroll_pos */
EIF_INTEGER_32 F1913_22778 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) cwin_get_wm_vscroll_pos(((WPARAM) arg1), ((LPARAM) arg2));
	return Result;
}

/* {WEL_COMPOSITE_WINDOW}.cwin_get_wm_vscroll_hwnd */
EIF_POINTER F1913_22779 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = (EIF_POINTER) GET_WM_VSCROLL_HWND(((WPARAM) arg1), ((LPARAM) arg2));
	return Result;
}

/* {WEL_COMPOSITE_WINDOW}.cwin_get_wm_hscroll_code */
EIF_INTEGER_32 F1913_22780 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) GET_WM_HSCROLL_CODE(((WPARAM) arg1), ((LPARAM) arg2));
	return Result;
}

/* {WEL_COMPOSITE_WINDOW}.cwin_get_wm_hscroll_pos */
EIF_INTEGER_32 F1913_22781 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) cwin_get_wm_hscroll_pos(((WPARAM) arg1), ((LPARAM) arg2));
	return Result;
}

/* {WEL_COMPOSITE_WINDOW}.cwin_get_wm_hscroll_hwnd */
EIF_POINTER F1913_22782 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = (EIF_POINTER) GET_WM_HSCROLL_HWND(((WPARAM) arg1), ((LPARAM) arg2));
	return Result;
}

/* {WEL_COMPOSITE_WINDOW}.cwin_child_window_from_point */
EIF_POINTER F1913_22783 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = inline_F1913_22783 ((EIF_POINTER) arg1, (EIF_POINTER) arg2);
	return Result;
}

void EIF_Minit1896 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
