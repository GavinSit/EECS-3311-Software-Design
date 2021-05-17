/*
 * Code for class WEL_CONTROL
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1909.h"
#include <windows.h>
#include <disptchr.h>
#include <wel.h>
#include "wel.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F67_9746
static EIF_POINTER inline_F67_9746 (EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3, EIF_POINTER arg4)
{
	return (EIF_POINTER) (SendMessage ((HWND) arg1, (UINT) arg2, (WPARAM) arg3, (LPARAM) arg4))
	;
}
#define INLINE_F67_9746
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

/* {WEL_CONTROL}.font */
EIF_REFERENCE F1926_22911 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	
	RTGC;
	if (F1926_22913(Current)) {
		tr1 = RTLNS(eif_new_type(501, 0x01).id, 501, _OBJSIZ_0_0_0_0_0_0_0_0_);
		Result = F502_14138(RTCW(tr1));
	} else {
		Result = RTLNS(eif_new_type(1884, 0x01).id, 1884, _OBJSIZ_0_2_0_3_0_1_0_0_);
		tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
		tp2 = F1_33(Current);
		tp3 = F1_33(Current);
		tp1 = inline_F67_9746(tp1, ((EIF_INTEGER_32) 49L), tp2, tp3);
		F1317_15540(RTCW(Result), tp1);
	}
	RTLE;
	return Result;
}

/* {WEL_CONTROL}.set_font */
void F1926_22912 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	tp2 = *(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_0_2_0_3_0_0_);
	tp3 = inline_F470_13514(((EIF_INTEGER_32) 1L), ((EIF_INTEGER_32) 0L));
	inline_F67_9749(tp1, ((EIF_INTEGER_32) 48L), tp2, tp3);
	RTLE;
}

/* {WEL_CONTROL}.has_system_font */
EIF_BOOLEAN F1926_22913 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_POINTER tp4;
	EIF_POINTER tp5;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
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
	tp1 = inline_F67_9746(tp1, ((EIF_INTEGER_32) 49L), tp3, tp5);
	{
		/* INLINED CODE (ANY.default_pointer) */
		tp2 = (EIF_POINTER)  0;
		/* END INLINED CODE */
	}
	tp3 = tp2;
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tp1 == tp3);
	RTLE;
	return Result;
}

/* {WEL_CONTROL}.default_process_notification */
void F1926_22914 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_CONTROL}.process_notification */
void F1926_22917 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	{
		/* INLINED CODE (WEL_CONTROL.default_process_notification) */
		/* END INLINED CODE */
	}
	;
	RTLE;
}

/* {WEL_CONTROL}.process_notification_info */
void F1926_22918 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_CONTROL}.set_default_window_procedure */
void F1926_22919 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current + O12527[dtype-1295]);
	tp1 = (EIF_POINTER) GetWindowLongPtr(((HWND) tp1), ((int) ((EIF_INTEGER_32) -4L)));
	*(EIF_POINTER *)(Current + O18785[dtype-1911]) = (EIF_POINTER) tp1;
	tp1 = *(EIF_POINTER *)(Current + O12527[dtype-1295]);
	tp2 = (EIF_POINTER) cwel_window_procedure_address;
	SetWindowLongPtr(((HWND) tp1), ((int) ((EIF_INTEGER_32) -4L)), ((LONG_PTR) tp2));
	RTLE;
}

/* {WEL_CONTROL}.call_default_window_procedure */
EIF_POINTER F1926_22920 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3, EIF_POINTER arg4)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current + O18785[Dtype(Current)-1911]);
	return (EIF_POINTER) (EIF_POINTER) CallWindowProc(((WNDPROC) tp1), ((HWND) arg1), ((UINT) arg2), ((WPARAM) arg3), ((LPARAM) arg4));
}

/* {WEL_CONTROL}.cwin_call_window_proc */
EIF_POINTER F1926_22921 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3, EIF_POINTER arg4, EIF_POINTER arg5)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = (EIF_POINTER) CallWindowProc(((WNDPROC) arg1), ((HWND) arg2), ((UINT) arg3), ((WPARAM) arg4), ((LPARAM) arg5));
	return Result;
}

/* {WEL_CONTROL}.cwin_get_next_dlggroupitem */
EIF_POINTER F1926_22922 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_BOOLEAN arg3)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = (EIF_POINTER) GetNextDlgGroupItem(((HWND) arg1), ((HWND) arg2), ((BOOL) arg3));
	return Result;
}

void EIF_Minit1909 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
