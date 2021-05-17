/*
 * Code for class WEL_MENU
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1455.h"
#include <windows.h>
#include <wel.h>
#include "wel.h"
#include "eif_misc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F67_9707
static int inline_F67_9707 (EIF_POINTER arg1)
{
	return (int) (SetForegroundWindow ((HWND)arg1))
	;
}
#define INLINE_F67_9707
#endif
#ifndef INLINE_F67_9736
static EIF_INTEGER_32 inline_F67_9736 (EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_INTEGER_32 arg5, EIF_POINTER arg6, EIF_POINTER arg7)
{
	return (EIF_INTEGER) TrackPopupMenu((HMENU) arg1, (UINT) arg2, (int) arg3, (int) arg4, (int) arg5, (HWND) arg6, (RECT *) arg7);
	;
}
#define INLINE_F67_9736
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

/* {WEL_MENU}.make */
void F1316_15483 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tp1 = (EIF_POINTER) CreateMenu();
	*(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]) = (EIF_POINTER) tp1;
	RTLE;
}

/* {WEL_MENU}.make_track */
void F1316_15484 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tp1 = (EIF_POINTER) CreatePopupMenu();
	*(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]) = (EIF_POINTER) tp1;
	RTLE;
}

/* {WEL_MENU}.remove_position */
void F1316_15498 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	RemoveMenu(((HMENU) tp1), ((UINT) arg1), ((UINT) ((EIF_INTEGER_32) 1024L)));
}

/* {WEL_MENU}.show_track */
void F1316_15501 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_REFERENCE arg3)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg3);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	ti4_1 = RTOUCB(EIF_INTEGER_32,291,F1316_15517, (Current));
	F1316_15502(Current, arg1, arg2, arg3, ti4_1, NULL);
	RTLE;
}

/* {WEL_MENU}.show_track_with_option */
void F1316_15502 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_REFERENCE arg3, EIF_INTEGER_32 arg4, EIF_REFERENCE arg5)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg3);
	RTLR(1,arg5);
	RTLR(2,Current);
	RTLIU(3);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(RTCW(arg3) + O12527[Dtype(arg3)-1295]);
	tb1 = EIF_TEST (inline_F67_9707(tp1));
	eif_do_nothing_value.it_b = tb1;
	if ((EIF_BOOLEAN)(arg5 != NULL)) {
		tp1 = *(EIF_POINTER *)(Current + O12527[dtype-1295]);
		ti4_1 = (EIF_INTEGER_32) TPM_RETURNCMD;
		ti4_1 = eif_bit_or(arg4,ti4_1);
		tp2 = *(EIF_POINTER *)(RTCW(arg3) + O12527[Dtype(arg3)-1295]);
		tp3 = *(EIF_POINTER *)(RTCW(arg5)+ _PTROFF_0_1_0_0_0_0_);
		loc2 = inline_F67_9736(tp1, ti4_1, arg1, arg2, ((EIF_INTEGER_32) 0L), tp2, tp3);
	} else {
		tp1 = *(EIF_POINTER *)(Current + O12527[dtype-1295]);
		ti4_1 = (EIF_INTEGER_32) TPM_RETURNCMD;
		ti4_1 = eif_bit_or(arg4,ti4_1);
		tp2 = *(EIF_POINTER *)(RTCW(arg3) + O12527[Dtype(arg3)-1295]);
		loc2 = inline_F67_9736(tp1, ti4_1, arg1, arg2, ((EIF_INTEGER_32) 0L), tp2, loc1);
	}
	tp1 = *(EIF_POINTER *)(RTCW(arg3) + O12527[Dtype(arg3)-1295]);
	inline_F67_9743(tp1, ((EIF_INTEGER_32) 0L), loc1, loc1);
	if ((EIF_BOOLEAN)(loc2 != ((EIF_INTEGER_32) 0L))) {
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R18913[Dtype(RTCW(arg3))-1914])(arg3, loc2);
	}
	RTLE;
}

/* {WEL_MENU}.count */
EIF_INTEGER_32 F1316_15503 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	return (EIF_INTEGER_32) (EIF_INTEGER_32) GetMenuItemCount(((HMENU) tp1));
}

/* {WEL_MENU}.check_item */
void F1316_15504 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	ti4_1 = eif_bit_or(((EIF_INTEGER_32) 8L),((EIF_INTEGER_32) 0L));
	CheckMenuItem(((HMENU) tp1), ((UINT) arg1), ((UINT) ti4_1));
	RTLE;
}

/* {WEL_MENU}.uncheck_item */
void F1316_15505 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	ti4_1 = eif_bit_or(((EIF_INTEGER_32) 0L),((EIF_INTEGER_32) 0L));
	CheckMenuItem(((HMENU) tp1), ((UINT) arg1), ((UINT) ti4_1));
	RTLE;
}

/* {WEL_MENU}.enable_item */
void F1316_15506 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	ti4_1 = eif_bit_or(((EIF_INTEGER_32) 0L),((EIF_INTEGER_32) 0L));
	EnableMenuItem(((HMENU) tp1), ((UINT) arg1), ((UINT) ti4_1));
	RTLE;
}

/* {WEL_MENU}.enable_position */
void F1316_15507 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	ti4_1 = eif_bit_or(((EIF_INTEGER_32) 0L),((EIF_INTEGER_32) 1024L));
	EnableMenuItem(((HMENU) tp1), ((UINT) arg1), ((UINT) ti4_1));
	RTLE;
}

/* {WEL_MENU}.disable_item */
void F1316_15508 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	ti4_1 = eif_bit_or(((EIF_INTEGER_32) 1L),((EIF_INTEGER_32) 0L));
	EnableMenuItem(((HMENU) tp1), ((UINT) arg1), ((UINT) ti4_1));
	RTLE;
}

/* {WEL_MENU}.disable_position */
void F1316_15509 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	ti4_1 = eif_bit_or(((EIF_INTEGER_32) 1L),((EIF_INTEGER_32) 1024L));
	EnableMenuItem(((HMENU) tp1), ((UINT) arg1), ((UINT) ti4_1));
	RTLE;
}

/* {WEL_MENU}.item_exists */
EIF_BOOLEAN F1316_15510 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	ti4_1 = (EIF_INTEGER_32) GetMenuState(((HMENU) tp1), ((UINT) arg1), ((UINT) ((EIF_INTEGER_32) 0L)));
	ti4_2 = (EIF_INTEGER_32) cwel_menu_item_not_found;
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 != ti4_2);
	RTLE;
	return Result;
}

/* {WEL_MENU}.default_track_option */
static EIF_INTEGER_32 F1316_15517_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 291)

	
	RTEV;
	RTOTP;
	Result = (EIF_INTEGER_32) TPM_RIGHTBUTTON;
	RTOTE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F1316_15517 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,291,F1316_15517_body,(Current));
}

/* {WEL_MENU}.load_item */
void F1316_15518 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tp1 = (EIF_POINTER) LoadMenu(((HINSTANCE) arg1), ((LPCTSTR) arg2));
	*(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]) = (EIF_POINTER) tp1;
	RTLE;
}

/* {WEL_MENU}.destroy_item */
void F1316_15519 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current + O12527[dtype-1295]);
	DestroyMenu(((HMENU) tp1));
	*(EIF_POINTER *)(Current + O12527[dtype-1295]) = (EIF_POINTER) loc1;
	RTLE;
}

/* {WEL_MENU}.cwin_draw_menu_bar */
void F1316_15521 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	
	DrawMenuBar(((HWND) arg1));
}

/* {WEL_MENU}.cwin_create_menu */
EIF_POINTER F1316_15522 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = (EIF_POINTER) CreateMenu();
	return Result;
}

/* {WEL_MENU}.cwin_create_popup_menu */
EIF_POINTER F1316_15523 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = (EIF_POINTER) CreatePopupMenu();
	return Result;
}

/* {WEL_MENU}.cwin_insert_menu */
void F1316_15525 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_POINTER arg4, EIF_POINTER arg5)
{
	GTCX
	
	
	InsertMenu(((HMENU) arg1), ((UINT) arg2), ((UINT) arg3), ((UINT_PTR) arg4), ((LPCTSTR) arg5));
}

/* {WEL_MENU}.cwin_get_menu_item_count */
EIF_INTEGER_32 F1316_15526 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) GetMenuItemCount(((HMENU) arg1));
	return Result;
}

/* {WEL_MENU}.cwin_check_menu_item */
void F1316_15528 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	
	
	CheckMenuItem(((HMENU) arg1), ((UINT) arg2), ((UINT) arg3));
}

/* {WEL_MENU}.cwin_remove_menu */
void F1316_15530 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	
	
	RemoveMenu(((HMENU) arg1), ((UINT) arg2), ((UINT) arg3));
}

/* {WEL_MENU}.cwin_enable_menu_item */
void F1316_15531 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	
	
	EnableMenuItem(((HMENU) arg1), ((UINT) arg2), ((UINT) arg3));
}

/* {WEL_MENU}.cwin_get_menu_state */
EIF_INTEGER_32 F1316_15532 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) GetMenuState(((HMENU) arg1), ((UINT) arg2), ((UINT) arg3));
	return Result;
}

/* {WEL_MENU}.cwin_load_menu */
EIF_POINTER F1316_15534 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = (EIF_POINTER) LoadMenu(((HINSTANCE) arg1), ((LPCTSTR) arg2));
	return Result;
}

/* {WEL_MENU}.cwin_destroy_menu */
void F1316_15535 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	
	DestroyMenu(((HMENU) arg1));
}

/* {WEL_MENU}.cwin_modify_menu */
void F1316_15536 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_POINTER arg4, EIF_POINTER arg5)
{
	GTCX
	
	
	ModifyMenu(((HMENU) arg1), ((UINT) arg2), ((UINT) arg3), ((UINT_PTR) arg4), ((LPCTSTR) arg5));
}

/* {WEL_MENU}.cwel_menu_item_not_found */
EIF_INTEGER_32 F1316_15539 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) cwel_menu_item_not_found;
	return Result;
}

void EIF_Minit1455 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
