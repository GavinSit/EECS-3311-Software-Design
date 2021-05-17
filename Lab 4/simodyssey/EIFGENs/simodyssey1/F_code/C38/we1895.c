/*
 * Code for class WEL_WINDOW
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1895.h"
#include "disptchr.h"
#include <windows.h>
#include "eif_built_in.h"
#include <disptchr.h>
#include "winx.h"
#include <wel.h>
#include "wel_capture.h"
#include "wel.h"
#include "eif_object_id.h"
#include "eif_misc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F67_9716
static EIF_POINTER inline_F67_9716 (void)
{
	return (EIF_POINTER) GetFocus();
	;
}
#define INLINE_F67_9716
#endif
#ifndef INLINE_F1912_22664
static EIF_POINTER inline_F1912_22664 (void)
{
	return (EIF_POINTER) cwel_captured_window();
	;
}
#define INLINE_F1912_22664
#endif
#ifndef INLINE_F67_9747
static EIF_INTEGER_32 inline_F67_9747 (EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3, EIF_POINTER arg4)
{
	return (EIF_INTEGER_32) (SendMessage ((HWND) arg1, (UINT) arg2, (WPARAM) arg3, (LPARAM) arg4))
	;
}
#define INLINE_F67_9747
#endif
#ifndef INLINE_F1912_22652
static void inline_F1912_22652 (EIF_POINTER arg1, EIF_BOOLEAN arg2)
{
	DragAcceptFiles ((HWND) arg1, (BOOL) arg2)
	;
}
#define INLINE_F1912_22652
#endif
#ifndef INLINE_F1912_22662
static void inline_F1912_22662 (EIF_POINTER arg1)
{
	cwel_capture ((HWND) arg1);
	;
}
#define INLINE_F1912_22662
#endif
#ifndef INLINE_F1912_22663
static void inline_F1912_22663 (void)
{
	cwel_release_capture ();
	;
}
#define INLINE_F1912_22663
#endif
#ifndef INLINE_F1912_22691
static EIF_INTEGER_32 inline_F1912_22691 (EIF_POINTER arg1)
{
	return (EIF_INTEGER_32) (((short)HIWORD(arg1)))
	;
}
#define INLINE_F1912_22691
#endif
#ifndef INLINE_F67_9719
static int inline_F67_9719 (EIF_POINTER arg1)
{
	return EIF_TEST(DestroyWindow((HWND) arg1));
	;
}
#define INLINE_F67_9719
#endif
#ifndef INLINE_F292_12247
static EIF_INTEGER_32 inline_F292_12247 (void)
{
	return (EIF_INTEGER_32) (DWLP_DLGPROC)
	;
}
#define INLINE_F292_12247
#endif
#ifndef INLINE_F67_9734
static int inline_F67_9734 (EIF_POINTER arg1, EIF_POINTER arg2)
{
	return EIF_TEST(EndDialog((HWND) arg1, (INT_PTR) arg2));
	;
}
#define INLINE_F67_9734
#endif
#ifndef INLINE_F67_9743
static void inline_F67_9743 (EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3, EIF_POINTER arg4)
{
	PostMessage ((HWND) arg1, (UINT) arg2, (WPARAM) arg3, (LPARAM) arg4)
	;
}
#define INLINE_F67_9743
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_WINDOW}.parent */
EIF_REFERENCE F1912_22463 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O18635[Dtype(Current)-1911]);
}


/* {WEL_WINDOW}.enabled */
EIF_BOOLEAN F1912_22467 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	return (EIF_BOOLEAN) (EIF_BOOLEAN) EIF_TEST(IsWindowEnabled(((HWND) tp1)));
}

/* {WEL_WINDOW}.shown */
EIF_BOOLEAN F1912_22468 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	return (EIF_BOOLEAN) (EIF_BOOLEAN) EIF_TEST(IsWindowVisible(((HWND) tp1)));
}

/* {WEL_WINDOW}.focused_window */
EIF_REFERENCE F1912_22471 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	loc1 = inline_F67_9716();
	if ((EIF_BOOLEAN)(loc1 != loc2)) {
		RTLE;
		return (EIF_REFERENCE) F1898_22150(Current, loc1);
	}
	RTLE;
	return (EIF_REFERENCE) 0;
}

/* {WEL_WINDOW}.captured_window */
EIF_REFERENCE F1912_22472 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	loc1 = inline_F1912_22664();
	if ((EIF_BOOLEAN)(loc1 != loc2)) {
		RTLE;
		return (EIF_REFERENCE) F1898_22150(Current, loc1);
	}
	RTLE;
	return (EIF_REFERENCE) 0;
}

/* {WEL_WINDOW}.window_captured */
EIF_BOOLEAN F1912_22473 (EIF_REFERENCE Current)
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
	tp1 = inline_F1912_22664();
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

/* {WEL_WINDOW}.has_focus */
EIF_BOOLEAN F1912_22474 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = F1912_22471(Current);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tr1 == Current);
	RTLE;
	return Result;
}

/* {WEL_WINDOW}.has_capture */
EIF_BOOLEAN F1912_22475 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	Result = '\0';
	if (F1912_22473(Current)) {
		Result = (EIF_BOOLEAN)(F1912_22472(Current) == Current);
	}
	RTLE;
	return Result;
}

/* {WEL_WINDOW}.has_heavy_capture */
EIF_BOOLEAN F1912_22476 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) F1912_22475(Current);
}

/* {WEL_WINDOW}.width */
EIF_INTEGER_32 F1912_22482 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	Result = F1408_17332(RTCV(F1912_22491(Current)));
	RTLE;
	return Result;
}

/* {WEL_WINDOW}.height */
EIF_INTEGER_32 F1912_22483 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	Result = F1408_17333(RTCV(F1912_22491(Current)));
	RTLE;
	return Result;
}

/* {WEL_WINDOW}.absolute_x */
EIF_INTEGER_32 F1912_22484 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	Result = F1408_17327(RTCV(F1912_22491(Current)));
	RTLE;
	return Result;
}

/* {WEL_WINDOW}.absolute_y */
EIF_INTEGER_32 F1912_22485 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	Result = F1408_17329(RTCV(F1912_22491(Current)));
	RTLE;
	return Result;
}

/* {WEL_WINDOW}.minimal_width */
EIF_INTEGER_32 F1912_22486 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_INTEGER_32) 0;
}

/* {WEL_WINDOW}.client_rect */
EIF_REFERENCE F1912_22490 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(1407, 0x01).id, 1407, _OBJSIZ_0_1_0_0_0_1_0_0_);
	F1408_17324(RTCW(tr1), *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]));
	RTLE;
	return (EIF_REFERENCE) tr1;
}

/* {WEL_WINDOW}.window_rect */
EIF_REFERENCE F1912_22491 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(1407, 0x01).id, 1407, _OBJSIZ_0_1_0_0_0_1_0_0_);
	F1408_17325(RTCW(tr1), *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]));
	RTLE;
	return (EIF_REFERENCE) tr1;
}

/* {WEL_WINDOW}.text */
EIF_REFERENCE F1912_22492 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc2);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	loc1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R18666[dtype-1914])(Current);
	if ((EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 0L))) {
		loc1++;
		loc2 = RTLNS(eif_new_type(944, 0x01).id, 944, _OBJSIZ_1_0_0_1_0_0_0_0_);
		F944_3739(RTCW(loc2), loc1);
		tp1 = *(EIF_POINTER *)(Current + O12527[dtype-1295]);
		tp2 = F944_3745(RTCW(loc2));
		loc3 = (EIF_INTEGER_32) GetWindowText(((HWND) tp1), ((LPTSTR) tp2), ((int) loc1));
		tr1 = F944_3744(RTCW(loc2), ((EIF_INTEGER_32) 1L), loc3);
		RTLE;
		return (EIF_REFERENCE) tr1;
	} else {
		tr1 = RTLNS(eif_new_type(1564, 0x01).id, 1564, _OBJSIZ_1_1_0_3_0_0_0_0_);
		F1564_6847(RTCW(tr1), ((EIF_INTEGER_32) 0L));
		RTLE;
		return (EIF_REFERENCE) tr1;
	}/* NOTREACHED */
	
}

/* {WEL_WINDOW}.text_substring */
EIF_REFERENCE F1912_22493 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Result);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	Result = RTLNS(eif_new_type(944, 0x01).id, 944, _OBJSIZ_1_0_0_1_0_0_0_0_);
	F944_3739(RTCW(Result), (EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L)));
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	tp2 = (EIF_POINTER) (WPARAM)(((EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L))));
	tp3 = F944_3745(RTCW(Result));
	loc1 = inline_F67_9747(tp1, ((EIF_INTEGER_32) 13L), tp2, tp3);
	F945_14367(RTCW(Result), loc1);
	RTLE;
	return Result;
}

/* {WEL_WINDOW}.text_length */
EIF_INTEGER_32 F1912_22494 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	return (EIF_INTEGER_32) (EIF_INTEGER_32) GetWindowTextLength(((HWND) tp1));
}

/* {WEL_WINDOW}.style */
EIF_INTEGER_32 F1912_22496 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	tp1 = (EIF_POINTER) GetWindowLongPtr(((HWND) tp1), ((int) ((EIF_INTEGER_32) -16L)));
	Result = (EIF_INTEGER_32) (rt_int_ptr) tp1;
	RTLE;
	return Result;
}

/* {WEL_WINDOW}.ex_style */
EIF_INTEGER_32 F1912_22497 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	tp1 = (EIF_POINTER) GetWindowLongPtr(((HWND) tp1), ((int) ((EIF_INTEGER_32) -20L)));
	Result = (EIF_INTEGER_32) (rt_int_ptr) tp1;
	RTLE;
	return Result;
}

/* {WEL_WINDOW}.background_brush */
EIF_REFERENCE F1912_22498 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

/* {WEL_WINDOW}.commands_enabled */
EIF_BOOLEAN F1912_22500 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = RTOUCR(286,F1912_22621, (Current));
	Result = *(EIF_BOOLEAN *)(RTCW(tr1) + O1718[Dtype(tr1)-488]);
	RTLE;
	return Result;
}

/* {WEL_WINDOW}.disable_default_processing */
void F1912_22507 (EIF_REFERENCE Current)
{
	GTCX
	
	
	F214_11245(Current, (EIF_BOOLEAN) 0);
}

/* {WEL_WINDOW}.enable */
void F1912_22508 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	EnableWindow(((HWND) tp1), ((BOOL) (EIF_BOOLEAN) 1));
}

/* {WEL_WINDOW}.disable */
void F1912_22509 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	EnableWindow(((HWND) tp1), ((BOOL) (EIF_BOOLEAN) 0));
}

/* {WEL_WINDOW}.enable_drag_accept_files */
void F1912_22510 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	inline_F1912_22652(tp1, (EIF_BOOLEAN) 1);
}

/* {WEL_WINDOW}.disable_drag_accept_files */
void F1912_22511 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	inline_F1912_22652(tp1, (EIF_BOOLEAN) 0);
}

/* {WEL_WINDOW}.show */
void F1912_22512 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	ShowWindow(((HWND) tp1), ((int) ((EIF_INTEGER_32) 5L)));
}

/* {WEL_WINDOW}.hide */
void F1912_22513 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	ShowWindow(((HWND) tp1), ((int) ((EIF_INTEGER_32) 0L)));
}

/* {WEL_WINDOW}.minimize */
void F1912_22514 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	ShowWindow(((HWND) tp1), ((int) ((EIF_INTEGER_32) 2L)));
}

/* {WEL_WINDOW}.maximize */
void F1912_22515 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	ShowWindow(((HWND) tp1), ((int) ((EIF_INTEGER_32) 3L)));
}

/* {WEL_WINDOW}.restore */
void F1912_22516 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	ShowWindow(((HWND) tp1), ((int) ((EIF_INTEGER_32) 9L)));
}

/* {WEL_WINDOW}.set_focus */
void F1912_22517 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	SetFocus(((HWND) tp1));
}

/* {WEL_WINDOW}.set_capture */
void F1912_22518 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	inline_F1912_22662(tp1);
}

/* {WEL_WINDOW}.release_capture */
void F1912_22520 (EIF_REFERENCE Current)
{
	GTCX
	
	
	inline_F1912_22663();
}

/* {WEL_WINDOW}.set_style */
void F1912_22522 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	tp2 = (EIF_POINTER) cwel_integer_to_pointer(((EIF_INTEGER) arg1));
	SetWindowLongPtr(((HWND) tp1), ((int) ((EIF_INTEGER_32) -16L)), ((LONG_PTR) tp2));
	loc1 = F1912_22497(Current);
	F1912_22524(Current, loc1, loc1);
	RTLE;
}

/* {WEL_WINDOW}.set_ex_style */
void F1912_22523 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	loc1 = F1912_22497(Current);
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	tp2 = (EIF_POINTER) cwel_integer_to_pointer(((EIF_INTEGER) arg1));
	SetWindowLongPtr(((HWND) tp1), ((int) ((EIF_INTEGER_32) -20L)), ((LONG_PTR) tp2));
	F1912_22524(Current, arg1, loc1);
	RTLE;
}

/* {WEL_WINDOW}.update_cached_style */
void F1912_22524 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc3 = (EIF_BOOLEAN) 0;
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if (F1258_14781(Current, arg1, ((EIF_INTEGER_32) 8L))) {
		loc1 = (EIF_POINTER) HWND_TOPMOST;
	} else {
		if (F1258_14781(Current, arg2, ((EIF_INTEGER_32) 8L))) {
			loc1 = (EIF_POINTER) HWND_NOTOPMOST;
		} else {
			loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
		}
	}
	ti4_1 = eif_bit_or(loc2,((EIF_INTEGER_32) 2L));
	ti4_1 = eif_bit_or(ti4_1,((EIF_INTEGER_32) 1L));
	ti4_1 = eif_bit_or(ti4_1,((EIF_INTEGER_32) 32L));
	ti4_1 = eif_bit_or(ti4_1,((EIF_INTEGER_32) 16L));
	loc2 = (EIF_INTEGER_32) ti4_1;
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	loc3 = (EIF_BOOLEAN) EIF_TEST(SetWindowPos(((HWND) tp1), ((HWND) loc1), ((int) ((EIF_INTEGER_32) 0L)), ((int) ((EIF_INTEGER_32) 0L)), ((int) ((EIF_INTEGER_32) 0L)), ((int) ((EIF_INTEGER_32) 0L)), ((UINT) loc2)));
	RTLE;
}

/* {WEL_WINDOW}.set_parent */
void F1912_22525 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	tb1 = '\0';
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		tb2 = F1296_15099(RTCW(arg1));
		tb1 = tb2;
	}
	if (tb1) {
		RTAR(Current, arg1);
		*(EIF_REFERENCE *)(Current + O18635[dtype-1911]) = (EIF_REFERENCE) arg1;
		tp1 = *(EIF_POINTER *)(Current + O12527[dtype-1295]);
		tp2 = *(EIF_POINTER *)(RTCW(arg1) + O12527[Dtype(arg1)-1295]);
		loc1 = (EIF_POINTER) SetParent(((HWND) tp1), ((HWND) tp2));
	} else {
		*(EIF_REFERENCE *)(Current + O18635[dtype-1911]) = (EIF_REFERENCE) NULL;
		tp1 = *(EIF_POINTER *)(Current + O12527[dtype-1295]);
		{
			/* INLINED CODE (ANY.default_pointer) */
			tp2 = (EIF_POINTER)  0;
			/* END INLINED CODE */
		}
		tp3 = tp2;
		loc1 = (EIF_POINTER) SetParent(((HWND) tp1), ((HWND) tp3));
	}
	tb1 = '\0';
	{
		/* INLINED CODE (ANY.default_pointer) */
		tp1 = (EIF_POINTER)  0;
		/* END INLINED CODE */
	}
	if ((EIF_BOOLEAN)(loc1 == tp1)) {
		tb1 = (EIF_BOOLEAN)(arg1 != NULL);
	}
	if (tb1) {
		loc1 = F1912_22632(Current, arg1);
	}
	RTLE;
}

/* {WEL_WINDOW}.set_text */
void F1912_22526 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		loc1 = RTLNS(eif_new_type(944, 0x01).id, 944, _OBJSIZ_1_0_0_1_0_0_0_0_);
		F944_3738(RTCW(loc1), arg1);
	} else {
		loc1 = RTLNS(eif_new_type(944, 0x01).id, 944, _OBJSIZ_1_0_0_1_0_0_0_0_);
		F944_3739(RTCW(loc1), ((EIF_INTEGER_32) 0L));
	}
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	tp2 = F944_3745(RTCW(loc1));
	SetWindowText(((HWND) tp1), ((LPCTSTR) tp2));
	RTLE;
}

/* {WEL_WINDOW}.lock_window_update */
void F1912_22534 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	loc1 = (EIF_BOOLEAN) EIF_TEST(LockWindowUpdate(((HWND) tp1)));
}

/* {WEL_WINDOW}.unlock_window_update */
void F1912_22535 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	{
		/* INLINED CODE (ANY.default_pointer) */
		tp1 = (EIF_POINTER)  0;
		/* END INLINED CODE */
	}
	tp2 = tp1;
	loc1 = (EIF_BOOLEAN) EIF_TEST(LockWindowUpdate(((HWND) tp2)));
	RTLE;
}

/* {WEL_WINDOW}.move_and_resize */
void F1912_22541 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_BOOLEAN arg5)
{
	GTCX
	
	
	F1912_22645(Current, arg1, arg2, arg3, arg4, arg5, ((EIF_INTEGER_32) 0L));
}

/* {WEL_WINDOW}.move */
void F1912_22542 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	F1912_22645(Current, arg1, arg2, ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), (EIF_BOOLEAN) 1, ((EIF_INTEGER_32) 1L));
}

/* {WEL_WINDOW}.resize */
void F1912_22543 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	F1912_22645(Current, ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), arg1, arg2, (EIF_BOOLEAN) 1, ((EIF_INTEGER_32) 2L));
}

/* {WEL_WINDOW}.set_z_order */
void F1912_22544 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	loc1 = (EIF_BOOLEAN) EIF_TEST(SetWindowPos(((HWND) tp1), ((HWND) arg1), ((int) ((EIF_INTEGER_32) 0L)), ((int) ((EIF_INTEGER_32) 0L)), ((int) ((EIF_INTEGER_32) 0L)), ((int) ((EIF_INTEGER_32) 0L)), ((UINT) (EIF_INTEGER_32) ((EIF_INTEGER_32) (((EIF_INTEGER_32) 1L) + ((EIF_INTEGER_32) 2L)) + ((EIF_INTEGER_32) 16L)))));
}

/* {WEL_WINDOW}.show_scroll_bars */
void F1912_22547 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	ShowScrollBar(((HWND) tp1), ((int) ((EIF_INTEGER_32) 3L)), ((BOOL) (EIF_BOOLEAN) 1));
}

/* {WEL_WINDOW}.show_vertical_scroll_bar */
void F1912_22548 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	ShowScrollBar(((HWND) tp1), ((int) ((EIF_INTEGER_32) 1L)), ((BOOL) (EIF_BOOLEAN) 1));
}

/* {WEL_WINDOW}.show_horizontal_scroll_bar */
void F1912_22549 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	ShowScrollBar(((HWND) tp1), ((int) ((EIF_INTEGER_32) 0L)), ((BOOL) (EIF_BOOLEAN) 1));
}

/* {WEL_WINDOW}.hide_vertical_scroll_bar */
void F1912_22551 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	ShowScrollBar(((HWND) tp1), ((int) ((EIF_INTEGER_32) 1L)), ((BOOL) (EIF_BOOLEAN) 0));
}

/* {WEL_WINDOW}.hide_horizontal_scroll_bar */
void F1912_22552 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	ShowScrollBar(((HWND) tp1), ((int) ((EIF_INTEGER_32) 0L)), ((BOOL) (EIF_BOOLEAN) 0));
}

/* {WEL_WINDOW}.enable_horizontal_scroll_bar */
void F1912_22554 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	EnableScrollBar(((HWND) tp1), ((int) ((EIF_INTEGER_32) 0L)), ((int) ((EIF_INTEGER_32) 0L)));
}

/* {WEL_WINDOW}.enable_vertical_scroll_bar */
void F1912_22556 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	EnableScrollBar(((HWND) tp1), ((int) ((EIF_INTEGER_32) 1L)), ((int) ((EIF_INTEGER_32) 0L)));
}

/* {WEL_WINDOW}.update */
void F1912_22562 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	UpdateWindow(((HWND) tp1));
}

/* {WEL_WINDOW}.invalidate */
void F1912_22563 (EIF_REFERENCE Current)
{
	GTCX
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
	InvalidateRect(((HWND) tp1), ((RECT *) tp3), ((BOOL) (EIF_BOOLEAN) 1));
	RTLE;
}

/* {WEL_WINDOW}.invalidate_without_background */
void F1912_22564 (EIF_REFERENCE Current)
{
	GTCX
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
	InvalidateRect(((HWND) tp1), ((RECT *) tp3), ((BOOL) (EIF_BOOLEAN) 0));
	RTLE;
}

/* {WEL_WINDOW}.scroll */
void F1912_22571 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_POINTER tp4;
	EIF_POINTER tp5;
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
	{
		/* INLINED CODE (ANY.default_pointer) */
		tp4 = (EIF_POINTER)  0;
		/* END INLINED CODE */
	}
	tp5 = tp4;
	ScrollWindow(((HWND) tp1), ((int) arg1), ((int) arg2), ((RECT *) tp3), ((RECT *) tp5));
	RTLE;
}

/* {WEL_WINDOW}.destroy */
void F1912_22576 (EIF_REFERENCE Current)
{
	GTCX
	
	
	F1912_22643(Current, (EIF_BOOLEAN) 0);
}

/* {WEL_WINDOW}.on_size */
void F1912_22577 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_WINDOW}.on_move */
void F1912_22578 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_WINDOW}.on_dpi_changed */
void F1912_22579 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_WINDOW}.on_window_pos_changed */
void F1912_22580 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_WINDOW}.on_window_pos_changing */
void F1912_22581 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_WINDOW}.on_left_button_down */
void F1912_22582 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_WINDOW}.on_left_button_up */
void F1912_22583 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_WINDOW}.on_left_button_double_click */
void F1912_22584 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_WINDOW}.on_middle_button_down */
void F1912_22585 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_WINDOW}.on_middle_button_up */
void F1912_22586 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_WINDOW}.on_middle_button_double_click */
void F1912_22587 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_WINDOW}.on_right_button_down */
void F1912_22588 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_WINDOW}.on_right_button_up */
void F1912_22589 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_WINDOW}.on_right_button_double_click */
void F1912_22590 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_WINDOW}.on_mouse_move */
void F1912_22591 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_WINDOW}.on_mouse_wheel */
void F1912_22592 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_WINDOW}.on_char */
void F1912_22593 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_WINDOW}.on_sys_char */
void F1912_22594 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_WINDOW}.on_key_down */
void F1912_22595 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_WINDOW}.on_key_up */
void F1912_22596 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_WINDOW}.on_sys_key_down */
void F1912_22597 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_WINDOW}.on_sys_key_up */
void F1912_22598 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_WINDOW}.on_set_focus */
void F1912_22599 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_WINDOW}.on_kill_focus */
void F1912_22600 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_WINDOW}.on_set_cursor */
void F1912_22601 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_WINDOW}.on_show */
void F1912_22602 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_WINDOW}.on_hide */
void F1912_22603 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_WINDOW}.on_destroy */
void F1912_22604 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_WINDOW}.on_timer */
void F1912_22605 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_WINDOW}.on_notify */
void F1912_22606 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_WINDOW}.on_erase_background */
void F1912_22607 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,arg1);
	RTLR(3,arg2);
	RTLIU(4);
	
	RTGC;
	loc1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R18670[Dtype(Current)-1914])(Current);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		F1306_15298(RTCW(arg1), arg2, loc1);
		F519_14213(RTCW(loc1));
		F1912_22507(Current);
		tp1 = (EIF_POINTER) (LRESULT)((((EIF_INTEGER_32) 1L)));
		F214_11244(Current, tp1);
	}
	RTLE;
}

/* {WEL_WINDOW}.on_desactivate */
void F1912_22608 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_WINDOW}.on_activate */
void F1912_22609 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_WINDOW}.on_getdlgcode */
void F1912_22610 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_WINDOW}.on_wm_theme_changed */
void F1912_22611 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_WINDOW}.on_wm_dpi_changed */
void F1912_22612 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	loc2 = (EIF_INTEGER_32) HIWORD((arg1));
	loc1 = RTLNS(eif_new_type(1407, 0x01).id, 1407, _OBJSIZ_0_1_0_0_0_1_0_0_);
	F1296_15096(RTCW(loc1), arg2);
	ti4_1 = F1408_17326(RTCW(loc1));
	ti4_2 = F1408_17328(RTCW(loc1));
	ti4_3 = F1408_17332(RTCW(loc1));
	ti4_4 = F1408_17333(RTCW(loc1));
	F1912_22645(Current, ti4_1, ti4_2, ti4_3, ti4_4, (EIF_BOOLEAN) 1, ((EIF_INTEGER_32) 0L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R18751[Dtype(Current)-1914])(Current, loc2);
	RTLE;
}

/* {WEL_WINDOW}.internal_window_make */
void F1912_22614 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_INTEGER_32 arg5, EIF_INTEGER_32 arg6, EIF_INTEGER_32 arg7, EIF_INTEGER_32 arg8, EIF_POINTER arg9)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_POINTER tp4;
	EIF_POINTER tp5;
	EIF_POINTER tp6;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTLD;
	
	RTLI(7);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,arg2);
	RTLR(5,loc2);
	RTLR(6,loc3);
	RTLIU(7);
	
	RTGC;
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + O18635[dtype-1911]) = (EIF_REFERENCE) arg1;
	loc1 = RTLNS(eif_new_type(944, 0x01).id, 944, _OBJSIZ_1_0_0_1_0_0_0_0_);
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R18787[dtype-1914])(Current);
	F944_3738(RTCW(loc1), tr1);
	tb1 = '\0';
	if ((EIF_BOOLEAN)(arg2 != NULL)) {
		tb2 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4659[Dtype(RTCW(arg2))-1560])(arg2);
		tb1 = (EIF_BOOLEAN) !tb2;
	}
	if (tb1) {
		loc2 = RTLNS(eif_new_type(944, 0x01).id, 944, _OBJSIZ_1_0_0_1_0_0_0_0_);
		F944_3738(RTCW(loc2), arg2);
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R18791[dtype-1914])(Current);
		tp1 = F944_3745(RTCW(loc1));
		tp2 = F944_3745(RTCW(loc2));
		tp3 = F1912_22616(Current);
		tp4 = (EIF_POINTER) cwel_integer_to_pointer(((EIF_INTEGER) arg8));
		tr1 = RTOUCR(281,F217_11264, (RTCV(RTOUCR(282,F1912_22620, (Current)))));
		tp5 = *(EIF_POINTER *)(RTCW(tr1)+ _PTROFF_0_1_0_0_0_0_);
		tp1 = (EIF_POINTER) CreateWindowEx(((DWORD) ti4_1), ((LPCTSTR) tp1), ((LPCTSTR) tp2), ((DWORD) arg3), ((int) arg4), ((int) arg5), ((int) arg6), ((int) arg7), ((HWND) tp3), ((HMENU) tp4), ((HINSTANCE) tp5), ((LPVOID) arg9));
		*(EIF_POINTER *)(Current + O12527[dtype-1295]) = (EIF_POINTER) tp1;
	} else {
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R18791[dtype-1914])(Current);
		tp1 = F944_3745(RTCW(loc1));
		{
			/* INLINED CODE (ANY.default_pointer) */
			tp2 = (EIF_POINTER)  0;
			/* END INLINED CODE */
		}
		tp3 = tp2;
		tp4 = F1912_22616(Current);
		tp5 = (EIF_POINTER) cwel_integer_to_pointer(((EIF_INTEGER) arg8));
		tr1 = RTOUCR(281,F217_11264, (RTCV(RTOUCR(282,F1912_22620, (Current)))));
		tp6 = *(EIF_POINTER *)(RTCW(tr1)+ _PTROFF_0_1_0_0_0_0_);
		tp1 = (EIF_POINTER) CreateWindowEx(((DWORD) ti4_1), ((LPCTSTR) tp1), ((LPCTSTR) tp3), ((DWORD) arg3), ((int) arg4), ((int) arg5), ((int) arg6), ((int) arg7), ((HWND) tp4), ((HMENU) tp5), ((HINSTANCE) tp6), ((LPVOID) arg9));
		*(EIF_POINTER *)(Current + O12527[dtype-1295]) = (EIF_POINTER) tp1;
	}
	{
		/* INLINED CODE (ANY.default_pointer) */
		tp1 = (EIF_POINTER)  0;
		/* END INLINED CODE */
	}
	if ((EIF_BOOLEAN)(*(EIF_POINTER *)(Current + O12527[dtype-1295]) != tp1)) {
		F1912_22637(Current);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R18789[dtype-1914])(Current);
	} else {
		loc3 = RTLNS(eif_new_type(53, 0x01).id, 53, _OBJSIZ_0_0_0_0_0_0_0_0_);
		F54_9289(RTCW(loc3));
	}
	RTLE;
}

/* {WEL_WINDOW}.parent_item */
EIF_POINTER F1912_22616 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current + O18635[Dtype(Current)-1911]);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		tp1 = *(EIF_POINTER *)(RTCW(loc1) + O12527[Dtype(loc1)-1295]);
		RTLE;
		return (EIF_POINTER) tp1;
	}
	RTLE;
	return (EIF_POINTER) 0;
}

/* {WEL_WINDOW}.set_default_window_procedure */
void F1912_22617 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_WINDOW}.default_ex_style */
EIF_INTEGER_32 F1912_22619 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
}

/* {WEL_WINDOW}.main_args */
static EIF_REFERENCE F1912_22620_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(282)

	RTLI(1);
	RTLR(0,tr1);
	RTLIU(1);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(eif_new_type(216, 0x01).id, 216, _OBJSIZ_0_0_0_0_0_0_0_0_);
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1912_22620 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(282,F1912_22620_body,(Current));
}

/* {WEL_WINDOW}.commands_enabled_ref */
static EIF_REFERENCE F1912_22621_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(286)

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEV;
	RTGC;
	RTOTP;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,491,1493,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0.id, 491, _OBJSIZ_0_1_0_0_0_0_0_0_);
	}
	F492_1934(RTCW(tr1), (EIF_BOOLEAN) 0);
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1912_22621 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(286,F1912_22621_body,(Current));
}

/* {WEL_WINDOW}.on_wm_show_window */
void F1912_22622 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 0L))) {
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R18775[dtype-1914])(Current);
	} else {
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R18774[dtype-1914])(Current);
	}
	RTLE;
}

/* {WEL_WINDOW}.on_wm_destroy */
void F1912_22623 (EIF_REFERENCE Current)
{
	GTCX
	
	
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R18776[Dtype(Current)-1914])(Current);
}

/* {WEL_WINDOW}.on_wm_nc_destroy */
void F1912_22624 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_WINDOW}.on_wm_notify */
void F1912_22625 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	loc1 = RTLNS(eif_new_type(1902, 0x01).id, 1902, _OBJSIZ_0_1_0_0_0_1_0_0_);
	F1296_15096(RTCW(loc1), arg2);
	ti4_1 = (EIF_INTEGER_32) (rt_int_ptr) arg1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32, EIF_REFERENCE)) R18778[Dtype(Current)-1914])(Current, ti4_1, loc1);
	RTLE;
}

/* {WEL_WINDOW}.on_wm_erase_background */
void F1912_22626 (EIF_REFERENCE Current, EIF_POINTER arg1)
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
	loc1 = RTLNS(eif_new_type(1312, 0x01).id, 1312, _OBJSIZ_8_2_0_3_0_8_0_0_);
	F1313_15461(RTCW(loc1), Current, arg1);
	tr1 = F1912_22490(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R18779[Dtype(Current)-1914])(Current, loc1, tr1);
	RTLE;
}

/* {WEL_WINDOW}.on_wm_activate */
void F1912_22627 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 0L))) {
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R18780[Dtype(Current)-1914])(Current);
	} else {
		{
			/* INLINED CODE (WEL_WINDOW.on_activate) */
			/* END INLINED CODE */
		}
		;
	}
	RTLE;
}

/* {WEL_WINDOW}.on_wm_window_pos_changing */
void F1912_22628 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	loc1 = RTOUCR(287,F1912_22648, (Current));
	tp1 = *(EIF_POINTER *)(RTCW(loc1)+ _PTROFF_0_1_0_0_0_0_);
	{
		/* INLINED CODE (ANY.default_pointer) */
		tp2 = (EIF_POINTER)  0;
		/* END INLINED CODE */
	}
	if ((EIF_BOOLEAN)(tp1 != tp2)) {
		loc1 = RTLNS(eif_new_type(1904, 0x01).id, 1904, _OBJSIZ_0_1_0_0_0_1_0_0_);
		F1296_15096(RTCW(loc1), arg1);
	} else {
		F1296_15100(RTCW(loc1), arg1);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R18753[Dtype(Current)-1914])(Current, loc1);
	{
		/* INLINED CODE (ANY.default_pointer) */
		tp1 = (EIF_POINTER)  0;
		/* END INLINED CODE */
	}
	tp2 = tp1;
	F1296_15100(RTCW(loc1), tp2);
	RTLE;
}

/* {WEL_WINDOW}.on_wm_window_pos_changed */
void F1912_22629 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	loc1 = RTOUCR(287,F1912_22648, (Current));
	tp1 = *(EIF_POINTER *)(RTCW(loc1)+ _PTROFF_0_1_0_0_0_0_);
	{
		/* INLINED CODE (ANY.default_pointer) */
		tp2 = (EIF_POINTER)  0;
		/* END INLINED CODE */
	}
	if ((EIF_BOOLEAN)(tp1 != tp2)) {
		loc1 = RTLNS(eif_new_type(1904, 0x01).id, 1904, _OBJSIZ_0_1_0_0_0_1_0_0_);
		F1296_15096(RTCW(loc1), arg1);
	} else {
		F1296_15100(RTCW(loc1), arg1);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R18752[Dtype(Current)-1914])(Current, loc1);
	{
		/* INLINED CODE (ANY.default_pointer) */
		tp1 = (EIF_POINTER)  0;
		/* END INLINED CODE */
	}
	tp2 = tp1;
	F1296_15100(RTCW(loc1), tp2);
	RTLE;
}

/* {WEL_WINDOW}.on_wm_dropfiles */
void F1912_22630 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_WINDOW}.default_process_message */
void F1912_22631 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2, EIF_POINTER arg3)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_WINDOW}.recursive_set_parent */
EIF_POINTER F1912_22632 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_BOOLEAN loc3 = (EIF_BOOLEAN) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(RTCW(arg1) + O18635[Dtype(arg1)-1911]);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		tp1 = *(EIF_POINTER *)(RTCW(arg1) + O12527[Dtype(arg1)-1295]);
		tr1 = RTOUCR(288,F1912_22633, (Current));
		tp2 = *(EIF_POINTER *)(RTCW(tr1) + O12527[Dtype(tr1)-1295]);
		Result = (EIF_POINTER) SetParent(((HWND) tp1), ((HWND) tp2));
		tp1 = *(EIF_POINTER *)(Current + O12527[dtype-1295]);
		tp2 = *(EIF_POINTER *)(RTCW(arg1) + O12527[Dtype(arg1)-1295]);
		loc2 = (EIF_POINTER) SetParent(((HWND) tp1), ((HWND) tp2));
		{
			/* INLINED CODE (ANY.default_pointer) */
			tp1 = (EIF_POINTER)  0;
			/* END INLINED CODE */
		}
		tp2 = tp1;
		loc3 = (EIF_BOOLEAN) (EIF_BOOLEAN)(loc2 == tp2);
		tp1 = *(EIF_POINTER *)(RTCW(arg1) + O12527[Dtype(arg1)-1295]);
		tp2 = *(EIF_POINTER *)(RTCW(loc1) + O12527[Dtype(loc1)-1295]);
		Result = (EIF_POINTER) SetParent(((HWND) tp1), ((HWND) tp2));
		if (loc3) {
			{
				/* INLINED CODE (ANY.default_pointer) */
				tp1 = (EIF_POINTER)  0;
				/* END INLINED CODE */
			}
			Result = tp1;
			RTLE;
			return (EIF_POINTER) Result;
		} else {
			{
				/* INLINED CODE (ANY.default_pointer) */
				tp1 = (EIF_POINTER)  0;
				/* END INLINED CODE */
			}
			if ((EIF_BOOLEAN)(Result == tp1)) {
				Result = F1912_22632(RTCW(arg1), loc1);
				{
					/* INLINED CODE (ANY.default_pointer) */
					tp1 = (EIF_POINTER)  0;
					/* END INLINED CODE */
				}
				if ((EIF_BOOLEAN)(Result == tp1)) {
					tp1 = *(EIF_POINTER *)(Current + O12527[dtype-1295]);
					Result = (EIF_POINTER) SetParent(((HWND) tp1), ((HWND) loc2));
					tp1 = *(EIF_POINTER *)(RTCW(arg1) + O12527[Dtype(arg1)-1295]);
					tp2 = *(EIF_POINTER *)(RTCW(loc1) + O12527[Dtype(loc1)-1295]);
					Result = (EIF_POINTER) SetParent(((HWND) tp1), ((HWND) tp2));
					{
						/* INLINED CODE (ANY.default_pointer) */
						tp1 = (EIF_POINTER)  0;
						/* END INLINED CODE */
					}
					Result = tp1;
					RTLE;
					return (EIF_POINTER) Result;
				}
			}
		}
	}
	RTLE;
	return Result;
}

/* {WEL_WINDOW}.set_parent_window */
static EIF_REFERENCE F1912_22633_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(288)

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,tr2);
	RTLIU(2);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(eif_new_type(1916, 0x01).id, 1916, _OBJSIZ_7_2_0_2_0_2_0_0_);
	tr2 = RTMS_EX_H("Window used for fixing bug in SetParent",39,862007668);
	F1917_22823(RTCW(tr1), tr2);
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1912_22633 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(288,F1912_22633_body,(Current));
}

/* {WEL_WINDOW}.window_process_message */
EIF_POINTER F1912_22634 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3, EIF_POINTER arg4)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc2);
	RTLR(2,loc1);
	RTLIU(3);
	
	RTGC;
	switch (arg2) {
		case 512L:
			ti4_1 = (EIF_INTEGER_32) (rt_int_ptr) arg3;
			ti4_2 = (EIF_INTEGER_32) GET_X_LPARAM((arg4));
			ti4_3 = (EIF_INTEGER_32) GET_Y_LPARAM((arg4));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32)) R18763[dtype-1914])(Current, ti4_1, ti4_2, ti4_3);
			break;
		case 32L:
			ti4_1 = (EIF_INTEGER_32) LOWORD((arg4));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R18773[dtype-1914])(Current, ti4_1);
			break;
		case 70L:
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_POINTER)) R18800[dtype-1914])(Current, arg4);
			break;
		case 71L:
			F1912_22629(Current, arg4);
			break;
		case 3L:
			ti4_1 = (EIF_INTEGER_32) GET_X_LPARAM((arg4));
			ti4_2 = (EIF_INTEGER_32) GET_Y_LPARAM((arg4));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R18750[dtype-1914])(Current, ti4_1, ti4_2);
			*(EIF_BOOLEAN *)(Current + O18816[dtype-1911]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			break;
		case 5L:
			ti4_1 = (EIF_INTEGER_32) (rt_int_ptr) arg3;
			ti4_2 = (EIF_INTEGER_32) LOWORD((arg4));
			ti4_3 = (EIF_INTEGER_32) HIWORD((arg4));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32)) R18749[dtype-1914])(Current, ti4_1, ti4_2, ti4_3);
			*(EIF_BOOLEAN *)(Current + O18816[dtype-1911]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			break;
		case 131L:
			break;
		case 513L:
			ti4_1 = (EIF_INTEGER_32) (rt_int_ptr) arg3;
			ti4_2 = (EIF_INTEGER_32) GET_X_LPARAM((arg4));
			ti4_3 = (EIF_INTEGER_32) GET_Y_LPARAM((arg4));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32)) R18754[dtype-1914])(Current, ti4_1, ti4_2, ti4_3);
			break;
		case 514L:
			ti4_1 = (EIF_INTEGER_32) (rt_int_ptr) arg3;
			ti4_2 = (EIF_INTEGER_32) GET_X_LPARAM((arg4));
			ti4_3 = (EIF_INTEGER_32) GET_Y_LPARAM((arg4));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32)) R18755[dtype-1914])(Current, ti4_1, ti4_2, ti4_3);
			break;
		case 515L:
			ti4_1 = (EIF_INTEGER_32) (rt_int_ptr) arg3;
			ti4_2 = (EIF_INTEGER_32) GET_X_LPARAM((arg4));
			ti4_3 = (EIF_INTEGER_32) GET_Y_LPARAM((arg4));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32)) R18756[dtype-1914])(Current, ti4_1, ti4_2, ti4_3);
			break;
		case 519L:
			ti4_1 = (EIF_INTEGER_32) (rt_int_ptr) arg3;
			ti4_2 = (EIF_INTEGER_32) GET_X_LPARAM((arg4));
			ti4_3 = (EIF_INTEGER_32) GET_Y_LPARAM((arg4));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32)) R18757[dtype-1914])(Current, ti4_1, ti4_2, ti4_3);
			break;
		case 520L:
			ti4_1 = (EIF_INTEGER_32) (rt_int_ptr) arg3;
			ti4_2 = (EIF_INTEGER_32) GET_X_LPARAM((arg4));
			ti4_3 = (EIF_INTEGER_32) GET_Y_LPARAM((arg4));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32)) R18758[dtype-1914])(Current, ti4_1, ti4_2, ti4_3);
			break;
		case 521L:
			ti4_1 = (EIF_INTEGER_32) (rt_int_ptr) arg3;
			ti4_2 = (EIF_INTEGER_32) GET_X_LPARAM((arg4));
			ti4_3 = (EIF_INTEGER_32) GET_Y_LPARAM((arg4));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32)) R18759[dtype-1914])(Current, ti4_1, ti4_2, ti4_3);
			break;
		case 516L:
			ti4_1 = (EIF_INTEGER_32) (rt_int_ptr) arg3;
			ti4_2 = (EIF_INTEGER_32) GET_X_LPARAM((arg4));
			ti4_3 = (EIF_INTEGER_32) GET_Y_LPARAM((arg4));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32)) R18760[dtype-1914])(Current, ti4_1, ti4_2, ti4_3);
			break;
		case 517L:
			ti4_1 = (EIF_INTEGER_32) (rt_int_ptr) arg3;
			ti4_2 = (EIF_INTEGER_32) GET_X_LPARAM((arg4));
			ti4_3 = (EIF_INTEGER_32) GET_Y_LPARAM((arg4));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32)) R18761[dtype-1914])(Current, ti4_1, ti4_2, ti4_3);
			break;
		case 518L:
			ti4_1 = (EIF_INTEGER_32) (rt_int_ptr) arg3;
			ti4_2 = (EIF_INTEGER_32) GET_X_LPARAM((arg4));
			ti4_3 = (EIF_INTEGER_32) GET_Y_LPARAM((arg4));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32)) R18762[dtype-1914])(Current, ti4_1, ti4_2, ti4_3);
			break;
		case 522L:
			ti4_1 = inline_F1912_22691(arg3);
			ti4_2 = (EIF_INTEGER_32) LOWORD((arg3));
			ti4_3 = (EIF_INTEGER_32) GET_X_LPARAM((arg4));
			ti4_4 = (EIF_INTEGER_32) GET_Y_LPARAM((arg4));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32)) R18764[dtype-1914])(Current, ti4_1, ti4_2, ti4_3, ti4_4);
			break;
		case 275L:
			ti4_1 = (EIF_INTEGER_32) (rt_int_ptr) arg3;
			{
				/* INLINED CODE (WEL_WINDOW.on_timer) */
				/* END INLINED CODE */
			}
			;
			break;
		case 7L:
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R18771[dtype-1914])(Current);
			break;
		case 8L:
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R18772[dtype-1914])(Current);
			break;
		case 258L:
			ti4_1 = (EIF_INTEGER_32) (rt_int_ptr) arg3;
			ti4_2 = (EIF_INTEGER_32) (rt_int_ptr) arg4;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R18765[dtype-1914])(Current, ti4_1, ti4_2);
			break;
		case 256L:
			ti4_1 = (EIF_INTEGER_32) (rt_int_ptr) arg3;
			ti4_2 = (EIF_INTEGER_32) (rt_int_ptr) arg4;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R18767[dtype-1914])(Current, ti4_1, ti4_2);
			break;
		case 257L:
			ti4_1 = (EIF_INTEGER_32) (rt_int_ptr) arg3;
			ti4_2 = (EIF_INTEGER_32) (rt_int_ptr) arg4;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R18768[dtype-1914])(Current, ti4_1, ti4_2);
			break;
		case 262L:
			ti4_1 = (EIF_INTEGER_32) (rt_int_ptr) arg3;
			ti4_2 = (EIF_INTEGER_32) (rt_int_ptr) arg4;
			{
				/* INLINED CODE (WEL_WINDOW.on_sys_char) */
				/* END INLINED CODE */
			}
			;
			break;
		case 260L:
			ti4_1 = (EIF_INTEGER_32) (rt_int_ptr) arg3;
			ti4_2 = (EIF_INTEGER_32) (rt_int_ptr) arg4;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R18769[dtype-1914])(Current, ti4_1, ti4_2);
			break;
		case 261L:
			ti4_1 = (EIF_INTEGER_32) (rt_int_ptr) arg3;
			ti4_2 = (EIF_INTEGER_32) (rt_int_ptr) arg4;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R18770[dtype-1914])(Current, ti4_1, ti4_2);
			break;
		case 24L:
			ti4_1 = (EIF_INTEGER_32) (rt_int_ptr) arg3;
			ti4_2 = (EIF_INTEGER_32) (rt_int_ptr) arg4;
			F1912_22622(Current, ti4_1, ti4_2);
			break;
		case 78L:
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_POINTER, EIF_POINTER)) R18797[dtype-1914])(Current, arg3, arg4);
			break;
		case 2L:
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R18795[dtype-1914])(Current);
			break;
		case 130L:
			{
				/* INLINED CODE (WEL_WINDOW.on_wm_nc_destroy) */
				/* END INLINED CODE */
			}
			;
			{
				/* INLINED CODE (ANY.default_pointer) */
				tp1 = (EIF_POINTER)  0;
				/* END INLINED CODE */
			}
			tp2 = tp1;
			*(EIF_POINTER *)(Current + O12527[dtype-1295]) = (EIF_POINTER) tp2;
			break;
		case 20L:
			F1912_22626(Current, arg3);
			break;
		case 6L:
			ti4_1 = (EIF_INTEGER_32) (rt_int_ptr) arg3;
			F1912_22627(Current, ti4_1);
			break;
		case 135L:
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R18782[dtype-1914])(Current);
			break;
		case 563L:
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_POINTER)) R18802[dtype-1914])(Current, arg3);
			break;
		case 794L:
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R18783[dtype-1914])(Current);
			break;
		case 295L:
		case 296L:
		case 297L:
			F1912_22507(Current);
			break;
		case 736L:
			F1912_22612(Current, arg3, arg4);
			break;
		default:
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32, EIF_POINTER, EIF_POINTER)) R18803[dtype-1914])(Current, arg2, arg3, arg4);
			break;
	}
	loc2 = *(EIF_REFERENCE *)(Current + O18636[dtype-1911]);
	tb1 = '\0';
	tb2 = '\0';
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		tb2 = F1912_22500(Current);
	}
	if (tb2) {
		tb2 = F1000_3931(RTCW(loc2), arg2);
		tb1 = tb2;
	}
	if (tb1) {
		loc1 = F1000_3929(RTCW(loc2), arg2);
		RTCT0("l_message_attached", EX_CHECK);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		F44_9188(RTCW(loc1), Current, arg2, arg3, arg4);
	}
	RTLE;
	return (EIF_POINTER) 0;
}

/* {WEL_WINDOW}.process_message */
EIF_POINTER F1912_22635 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3, EIF_POINTER arg4)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc2);
	RTLR(2,loc1);
	RTLIU(3);
	
	RTGC;
	switch (arg2) {
		case 512L:
			ti4_1 = (EIF_INTEGER_32) (rt_int_ptr) arg3;
			ti4_2 = (EIF_INTEGER_32) GET_X_LPARAM((arg4));
			ti4_3 = (EIF_INTEGER_32) GET_Y_LPARAM((arg4));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32)) R18763[dtype-1914])(Current, ti4_1, ti4_2, ti4_3);
			break;
		case 32L:
			ti4_1 = (EIF_INTEGER_32) LOWORD((arg4));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R18773[dtype-1914])(Current, ti4_1);
			break;
		case 70L:
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_POINTER)) R18800[dtype-1914])(Current, arg4);
			break;
		case 71L:
			F1912_22629(Current, arg4);
			break;
		case 3L:
			ti4_1 = (EIF_INTEGER_32) GET_X_LPARAM((arg4));
			ti4_2 = (EIF_INTEGER_32) GET_Y_LPARAM((arg4));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R18750[dtype-1914])(Current, ti4_1, ti4_2);
			*(EIF_BOOLEAN *)(Current + O18816[dtype-1911]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			break;
		case 5L:
			ti4_1 = (EIF_INTEGER_32) (rt_int_ptr) arg3;
			ti4_2 = (EIF_INTEGER_32) LOWORD((arg4));
			ti4_3 = (EIF_INTEGER_32) HIWORD((arg4));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32)) R18749[dtype-1914])(Current, ti4_1, ti4_2, ti4_3);
			*(EIF_BOOLEAN *)(Current + O18816[dtype-1911]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			break;
		case 131L:
			break;
		case 513L:
			ti4_1 = (EIF_INTEGER_32) (rt_int_ptr) arg3;
			ti4_2 = (EIF_INTEGER_32) GET_X_LPARAM((arg4));
			ti4_3 = (EIF_INTEGER_32) GET_Y_LPARAM((arg4));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32)) R18754[dtype-1914])(Current, ti4_1, ti4_2, ti4_3);
			break;
		case 514L:
			ti4_1 = (EIF_INTEGER_32) (rt_int_ptr) arg3;
			ti4_2 = (EIF_INTEGER_32) GET_X_LPARAM((arg4));
			ti4_3 = (EIF_INTEGER_32) GET_Y_LPARAM((arg4));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32)) R18755[dtype-1914])(Current, ti4_1, ti4_2, ti4_3);
			break;
		case 515L:
			ti4_1 = (EIF_INTEGER_32) (rt_int_ptr) arg3;
			ti4_2 = (EIF_INTEGER_32) GET_X_LPARAM((arg4));
			ti4_3 = (EIF_INTEGER_32) GET_Y_LPARAM((arg4));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32)) R18756[dtype-1914])(Current, ti4_1, ti4_2, ti4_3);
			break;
		case 519L:
			ti4_1 = (EIF_INTEGER_32) (rt_int_ptr) arg3;
			ti4_2 = (EIF_INTEGER_32) GET_X_LPARAM((arg4));
			ti4_3 = (EIF_INTEGER_32) GET_Y_LPARAM((arg4));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32)) R18757[dtype-1914])(Current, ti4_1, ti4_2, ti4_3);
			break;
		case 520L:
			ti4_1 = (EIF_INTEGER_32) (rt_int_ptr) arg3;
			ti4_2 = (EIF_INTEGER_32) GET_X_LPARAM((arg4));
			ti4_3 = (EIF_INTEGER_32) GET_Y_LPARAM((arg4));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32)) R18758[dtype-1914])(Current, ti4_1, ti4_2, ti4_3);
			break;
		case 521L:
			ti4_1 = (EIF_INTEGER_32) (rt_int_ptr) arg3;
			ti4_2 = (EIF_INTEGER_32) GET_X_LPARAM((arg4));
			ti4_3 = (EIF_INTEGER_32) GET_Y_LPARAM((arg4));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32)) R18759[dtype-1914])(Current, ti4_1, ti4_2, ti4_3);
			break;
		case 516L:
			ti4_1 = (EIF_INTEGER_32) (rt_int_ptr) arg3;
			ti4_2 = (EIF_INTEGER_32) GET_X_LPARAM((arg4));
			ti4_3 = (EIF_INTEGER_32) GET_Y_LPARAM((arg4));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32)) R18760[dtype-1914])(Current, ti4_1, ti4_2, ti4_3);
			break;
		case 517L:
			ti4_1 = (EIF_INTEGER_32) (rt_int_ptr) arg3;
			ti4_2 = (EIF_INTEGER_32) GET_X_LPARAM((arg4));
			ti4_3 = (EIF_INTEGER_32) GET_Y_LPARAM((arg4));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32)) R18761[dtype-1914])(Current, ti4_1, ti4_2, ti4_3);
			break;
		case 518L:
			ti4_1 = (EIF_INTEGER_32) (rt_int_ptr) arg3;
			ti4_2 = (EIF_INTEGER_32) GET_X_LPARAM((arg4));
			ti4_3 = (EIF_INTEGER_32) GET_Y_LPARAM((arg4));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32)) R18762[dtype-1914])(Current, ti4_1, ti4_2, ti4_3);
			break;
		case 522L:
			ti4_1 = inline_F1912_22691(arg3);
			ti4_2 = (EIF_INTEGER_32) LOWORD((arg3));
			ti4_3 = (EIF_INTEGER_32) GET_X_LPARAM((arg4));
			ti4_4 = (EIF_INTEGER_32) GET_Y_LPARAM((arg4));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32)) R18764[dtype-1914])(Current, ti4_1, ti4_2, ti4_3, ti4_4);
			break;
		case 275L:
			ti4_1 = (EIF_INTEGER_32) (rt_int_ptr) arg3;
			{
				/* INLINED CODE (WEL_WINDOW.on_timer) */
				/* END INLINED CODE */
			}
			;
			break;
		case 7L:
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R18771[dtype-1914])(Current);
			break;
		case 8L:
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R18772[dtype-1914])(Current);
			break;
		case 258L:
			ti4_1 = (EIF_INTEGER_32) (rt_int_ptr) arg3;
			ti4_2 = (EIF_INTEGER_32) (rt_int_ptr) arg4;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R18765[dtype-1914])(Current, ti4_1, ti4_2);
			break;
		case 256L:
			ti4_1 = (EIF_INTEGER_32) (rt_int_ptr) arg3;
			ti4_2 = (EIF_INTEGER_32) (rt_int_ptr) arg4;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R18767[dtype-1914])(Current, ti4_1, ti4_2);
			break;
		case 257L:
			ti4_1 = (EIF_INTEGER_32) (rt_int_ptr) arg3;
			ti4_2 = (EIF_INTEGER_32) (rt_int_ptr) arg4;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R18768[dtype-1914])(Current, ti4_1, ti4_2);
			break;
		case 262L:
			ti4_1 = (EIF_INTEGER_32) (rt_int_ptr) arg3;
			ti4_2 = (EIF_INTEGER_32) (rt_int_ptr) arg4;
			{
				/* INLINED CODE (WEL_WINDOW.on_sys_char) */
				/* END INLINED CODE */
			}
			;
			break;
		case 260L:
			ti4_1 = (EIF_INTEGER_32) (rt_int_ptr) arg3;
			ti4_2 = (EIF_INTEGER_32) (rt_int_ptr) arg4;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R18769[dtype-1914])(Current, ti4_1, ti4_2);
			break;
		case 261L:
			ti4_1 = (EIF_INTEGER_32) (rt_int_ptr) arg3;
			ti4_2 = (EIF_INTEGER_32) (rt_int_ptr) arg4;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R18770[dtype-1914])(Current, ti4_1, ti4_2);
			break;
		case 24L:
			ti4_1 = (EIF_INTEGER_32) (rt_int_ptr) arg3;
			ti4_2 = (EIF_INTEGER_32) (rt_int_ptr) arg4;
			F1912_22622(Current, ti4_1, ti4_2);
			break;
		case 78L:
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_POINTER, EIF_POINTER)) R18797[dtype-1914])(Current, arg3, arg4);
			break;
		case 2L:
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R18795[dtype-1914])(Current);
			break;
		case 130L:
			{
				/* INLINED CODE (WEL_WINDOW.on_wm_nc_destroy) */
				/* END INLINED CODE */
			}
			;
			{
				/* INLINED CODE (ANY.default_pointer) */
				tp1 = (EIF_POINTER)  0;
				/* END INLINED CODE */
			}
			tp2 = tp1;
			*(EIF_POINTER *)(Current + O12527[dtype-1295]) = (EIF_POINTER) tp2;
			break;
		case 20L:
			F1912_22626(Current, arg3);
			break;
		case 6L:
			ti4_1 = (EIF_INTEGER_32) (rt_int_ptr) arg3;
			F1912_22627(Current, ti4_1);
			break;
		case 135L:
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R18782[dtype-1914])(Current);
			break;
		case 563L:
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_POINTER)) R18802[dtype-1914])(Current, arg3);
			break;
		case 794L:
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R18783[dtype-1914])(Current);
			break;
		case 295L:
		case 296L:
		case 297L:
			F1912_22507(Current);
			break;
		case 736L:
			F1912_22612(Current, arg3, arg4);
			break;
		default:
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32, EIF_POINTER, EIF_POINTER)) R18803[dtype-1914])(Current, arg2, arg3, arg4);
			break;
	}
	loc2 = *(EIF_REFERENCE *)(Current + O18636[dtype-1911]);
	tb1 = '\0';
	tb2 = '\0';
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		tb2 = F1912_22500(Current);
	}
	if (tb2) {
		tb2 = F1000_3931(RTCW(loc2), arg2);
		tb1 = tb2;
	}
	if (tb1) {
		loc1 = F1000_3929(RTCW(loc2), arg2);
		RTCT0("l_message_attached", EX_CHECK);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		F44_9188(RTCW(loc1), Current, arg2, arg3, arg4);
	}
	RTLE;
	return (EIF_POINTER) 0;
}

/* {WEL_WINDOW}.call_default_window_procedure */
EIF_POINTER F1912_22636 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3, EIF_POINTER arg4)
{
	GTCX
	
	
	return (EIF_POINTER) (EIF_POINTER) DefWindowProc(((HWND) arg1), ((UINT) arg2), ((WPARAM) arg3), ((LPARAM) arg4));
}

/* {WEL_WINDOW}.register_current_window */
void F1912_22637 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	loc2 = *(EIF_INTEGER_32 *)(Current + O18811[dtype-1911]);
	if ((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 0L))) {
		loc2 = (EIF_INTEGER_32) eif_builtin_WEL_IDENTIFIED_eif_current_object_id (Current);
		*(EIF_INTEGER_32 *)(Current + O18811[dtype-1911]) = (EIF_INTEGER_32) loc2;
	}
	tp1 = *(EIF_POINTER *)(Current + O12527[dtype-1295]);
	tp2 = (EIF_POINTER) cwel_integer_to_pointer(((EIF_INTEGER) loc2));
	loc1 = (EIF_POINTER) SetWindowLongPtr(((HWND) tp1), ((int) ((EIF_INTEGER_32) -21L)), ((LONG_PTR) tp2));
	RTLE;
}

/* {WEL_WINDOW}.dispose */
void F1912_22641 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	loc1 = *(EIF_INTEGER_32 *)(Current + O18811[dtype-1911]);
	if ((EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 0L))) {
		eif_object_id_free(loc1);
		*(EIF_INTEGER_32 *)(Current + O18811[dtype-1911]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
	}
	F1296_15104(Current);
	RTLE;
}

/* {WEL_WINDOW}.destroy_item */
void F1912_22642 (EIF_REFERENCE Current)
{
	GTCX
	
	
	F1912_22643(Current, (EIF_BOOLEAN) 1);
}

/* {WEL_WINDOW}.destroy_item_from_context */
void F1912_22643 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_POINTER loc3 = (EIF_POINTER) 0;
	EIF_BOOLEAN loc4 = (EIF_BOOLEAN) 0;
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	loc3 = *(EIF_POINTER *)(Current + O12527[dtype-1295]);
	tb1 = '\0';
	if ((EIF_BOOLEAN)(loc3 != loc1)) {
		tb1 = (EIF_BOOLEAN) EIF_TEST(IsWindow(((HWND) loc3)));
	}
	if (tb1) {
		tb1 = '\0';
		if (arg1) {
			tb1 = (EIF_BOOLEAN) !(EIF_BOOLEAN) eif_builtin_PLATFORM_is_dotnet;
		}
		if (tb1) {
			loc2 = (EIF_POINTER) cwel_dispatcher_pointer;
			cwel_set_dispatcher_pointer((loc1));
		}
		loc4 = EIF_TEST (inline_F67_9719(loc3));
		if ((EIF_BOOLEAN) !loc4) {
			ti4_1 = inline_F292_12247();
			if ((EIF_BOOLEAN)((EIF_POINTER) GetWindowLongPtr(((HWND) loc3), ((int) ti4_1)) != loc1)) {
				tp1 = (EIF_POINTER) cwel_integer_to_pointer(((EIF_INTEGER) ((EIF_INTEGER_32) 0L)));
				loc4 = EIF_TEST (inline_F67_9734(loc3, tp1));
			} else {
				inline_F67_9743(loc3, ((EIF_INTEGER_32) 16L), loc1, loc1);
			}
		}
		tb1 = '\0';
		if (arg1) {
			tb1 = (EIF_BOOLEAN) !(EIF_BOOLEAN) eif_builtin_PLATFORM_is_dotnet;
		}
		if (tb1) {
			cwel_set_dispatcher_pointer((loc2));
		}
	}
	*(EIF_POINTER *)(Current + O12527[dtype-1295]) = (EIF_POINTER) loc1;
	RTLE;
}

/* {WEL_WINDOW}.track_mouse_event */
EIF_BOOLEAN F1912_22644 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,arg1);
	RTLIU(1);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_0_1_0_0_0_0_);
	Result = (EIF_BOOLEAN) EIF_TEST(_TrackMouseEvent(((TRACKMOUSEEVENT*) tp1)));
	RTLE;
	return Result;
}

/* {WEL_WINDOW}.move_and_resize_internal */
void F1912_22645 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_BOOLEAN arg5, EIF_INTEGER_32 arg6)
{
	GTCX
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc3);
	RTLIU(2);
	
	RTGC;
	*(EIF_BOOLEAN *)(Current + O18816[dtype-1911]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	ti4_1 = eif_bit_or(arg6,((EIF_INTEGER_32) 4L));
	loc2 = eif_bit_or(ti4_1,((EIF_INTEGER_32) 16L));
	if ((EIF_BOOLEAN) !arg5) {
		ti4_1 = eif_bit_or(loc2,((EIF_INTEGER_32) 8L));
		loc2 = (EIF_INTEGER_32) ti4_1;
	}
	loc1 = '\0';
	ti4_1 = eif_bit_and(loc2,((EIF_INTEGER_32) 1L));
	if (((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L)))) {
		tb1 = '\01';
		if (!(EIF_BOOLEAN)(arg3 != F1912_22482(Current))) {
			tb1 = (EIF_BOOLEAN)(arg4 != F1912_22483(Current));
		}
		loc1 = tb1;
	}
	tp1 = *(EIF_POINTER *)(Current + O12527[dtype-1295]);
	{
		/* INLINED CODE (ANY.default_pointer) */
		tp2 = (EIF_POINTER)  0;
		/* END INLINED CODE */
	}
	tp3 = tp2;
	if ((EIF_BOOLEAN) !(EIF_BOOLEAN) EIF_TEST(SetWindowPos(((HWND) tp1), ((HWND) tp3), ((int) arg1), ((int) arg2), ((int) arg3), ((int) arg4), ((UINT) loc2)))) {
		{
			/* INLINED CODE (ANY.do_nothing) */
			/* END INLINED CODE */
		}
		;
	}
	if ((EIF_BOOLEAN) (loc1 && (EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current + O18816[dtype-1911]))) {
		loc3 = RTLNS(eif_new_type(1904, 0x01).id, 1904, _OBJSIZ_0_1_0_0_0_1_0_0_);
		F1337_15830(RTCW(loc3));
		F1905_22310(RTCW(loc3), *(EIF_POINTER *)(Current + O12527[dtype-1295]));
		F1905_22305(RTCW(loc3), arg1);
		F1905_22306(RTCW(loc3), arg2);
		F1905_22307(RTCW(loc3), arg3);
		F1905_22308(RTCW(loc3), arg4);
		F1905_22309(RTCW(loc3), loc2);
		F1296_15101(RTCW(loc3));
		tp1 = *(EIF_POINTER *)(RTCV(F304_12407(Current))+ _PTROFF_7_2_0_2_0_0_);
		tp2 = *(EIF_POINTER *)(RTCW(loc3)+ _PTROFF_0_1_0_0_0_0_);
		tp3 = (EIF_POINTER) (LPARAM)((((EIF_INTEGER_32) 0L)));
		inline_F67_9743(tp1, ((EIF_INTEGER_32) 1025L), tp2, tp3);
	}
	RTLE;
}

/* {WEL_WINDOW}.window_pos_internal */
static EIF_REFERENCE F1912_22648_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(287)

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(eif_new_type(1904, 0x01).id, 1904, _OBJSIZ_0_1_0_0_0_1_0_0_);
	tp1 = F1_33(Current);
	F1296_15096(RTCW(tr1), tp1);
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1912_22648 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(287,F1912_22648_body,(Current));
}

/* {WEL_WINDOW}.cwin_create_window_ex */
EIF_POINTER F1912_22649 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2, EIF_POINTER arg3, EIF_INTEGER_32 arg4, EIF_INTEGER_32 arg5, EIF_INTEGER_32 arg6, EIF_INTEGER_32 arg7, EIF_INTEGER_32 arg8, EIF_POINTER arg9, EIF_POINTER arg10, EIF_POINTER arg11, EIF_POINTER arg12)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = (EIF_POINTER) CreateWindowEx(((DWORD) arg1), ((LPCTSTR) arg2), ((LPCTSTR) arg3), ((DWORD) arg4), ((int) arg5), ((int) arg6), ((int) arg7), ((int) arg8), ((HWND) arg9), ((HMENU) arg10), ((HINSTANCE) arg11), ((LPVOID) arg12));
	return Result;
}

/* {WEL_WINDOW}.cwin_destroy_window */
EIF_INTEGER_32 F1912_22651 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) DestroyWindow(((HWND) arg1));
	return Result;
}

/* {WEL_WINDOW}.cwin_drag_accept_files */
void F1912_22652 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_BOOLEAN arg2)
{
	GTCX
	
	
	inline_F1912_22652 ((EIF_POINTER) arg1, (EIF_BOOLEAN) arg2);
}

/* {WEL_WINDOW}.cwin_enable_window */
void F1912_22656 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_BOOLEAN arg2)
{
	GTCX
	
	
	EnableWindow(((HWND) arg1), ((BOOL) arg2));
}

/* {WEL_WINDOW}.cwin_is_window_enabled */
EIF_BOOLEAN F1912_22657 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	
	Result = (EIF_BOOLEAN) EIF_TEST(IsWindowEnabled(((HWND) arg1)));
	return Result;
}

/* {WEL_WINDOW}.cwin_set_focus */
void F1912_22658 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	
	SetFocus(((HWND) arg1));
}

/* {WEL_WINDOW}.cwin_set_capture */
void F1912_22662 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	
	inline_F1912_22662 ((EIF_POINTER) arg1);
}

/* {WEL_WINDOW}.cwin_release_capture */
void F1912_22663 (EIF_REFERENCE Current)
{
	GTCX
	
	
	inline_F1912_22663 ();
}

/* {WEL_WINDOW}.cwin_get_capture */
EIF_POINTER F1912_22664 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = inline_F1912_22664 ();
	return Result;
}

/* {WEL_WINDOW}.cwin_show_window */
void F1912_22665 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	ShowWindow(((HWND) arg1), ((int) arg2));
}

/* {WEL_WINDOW}.cwin_is_window_visible */
EIF_BOOLEAN F1912_22666 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	
	Result = (EIF_BOOLEAN) EIF_TEST(IsWindowVisible(((HWND) arg1)));
	return Result;
}

/* {WEL_WINDOW}.cwin_get_window_text_length */
EIF_INTEGER_32 F1912_22668 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) GetWindowTextLength(((HWND) arg1));
	return Result;
}

/* {WEL_WINDOW}.cwin_get_window_text */
EIF_INTEGER_32 F1912_22669 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) GetWindowText(((HWND) arg1), ((LPTSTR) arg2), ((int) arg3));
	return Result;
}

/* {WEL_WINDOW}.cwin_def_window_proc */
EIF_POINTER F1912_22672 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3, EIF_POINTER arg4)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = (EIF_POINTER) DefWindowProc(((HWND) arg1), ((UINT) arg2), ((WPARAM) arg3), ((LPARAM) arg4));
	return Result;
}

/* {WEL_WINDOW}.cwin_update_window */
void F1912_22673 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	
	UpdateWindow(((HWND) arg1));
}

/* {WEL_WINDOW}.cwin_track_mouse_event */
EIF_BOOLEAN F1912_22674 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	
	Result = (EIF_BOOLEAN) EIF_TEST(_TrackMouseEvent(((TRACKMOUSEEVENT*) arg1)));
	return Result;
}

/* {WEL_WINDOW}.cwin_show_scroll_bar */
void F1912_22687 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_BOOLEAN arg3)
{
	GTCX
	
	
	ShowScrollBar(((HWND) arg1), ((int) arg2), ((BOOL) arg3));
}

/* {WEL_WINDOW}.cwin_enable_scroll_bar */
void F1912_22688 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	
	
	EnableScrollBar(((HWND) arg1), ((int) arg2), ((int) arg3));
}

/* {WEL_WINDOW}.cwin_scroll_window */
void F1912_22689 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_POINTER arg4, EIF_POINTER arg5)
{
	GTCX
	
	
	ScrollWindow(((HWND) arg1), ((int) arg2), ((int) arg3), ((RECT *) arg4), ((RECT *) arg5));
}

/* {WEL_WINDOW}.c_mouse_wheel_delta */
EIF_INTEGER_32 F1912_22691 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = inline_F1912_22691 ((EIF_POINTER) arg1);
	return Result;
}

/* {WEL_WINDOW}.x_position_from_lparam */
EIF_INTEGER_32 F1912_22692 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) GET_X_LPARAM((arg1));
	return Result;
}

/* {WEL_WINDOW}.y_position_from_lparam */
EIF_INTEGER_32 F1912_22693 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) GET_Y_LPARAM((arg1));
	return Result;
}

/* {WEL_WINDOW}.cwel_window_procedure_address */
EIF_POINTER F1912_22694 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = (EIF_POINTER) cwel_window_procedure_address;
	return Result;
}

/* {WEL_WINDOW}.c_lock_window_update */
EIF_BOOLEAN F1912_22695 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	
	Result = (EIF_BOOLEAN) EIF_TEST(LockWindowUpdate(((HWND) arg1)));
	return Result;
}

/* {WEL_WINDOW}.cwel_set_dispatcher_pointer */
void F1912_22697 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	
	cwel_set_dispatcher_pointer((arg1));
}

/* {WEL_WINDOW}.cwel_dispatcher_pointer */
EIF_POINTER F1912_22698 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = (EIF_POINTER) cwel_dispatcher_pointer;
	return Result;
}

/* {WEL_WINDOW}.cwel_get_message_pos */
EIF_INTEGER_32 F1912_22699 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) GetMessagePos();
	
	return Result;
}

/* {WEL_WINDOW}.cwin_invalidate_rect */
void F1912_22700 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_BOOLEAN arg3)
{
	GTCX
	
	
	InvalidateRect(((HWND) arg1), ((RECT *) arg2), ((BOOL) arg3));
}

void EIF_Minit1895 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
