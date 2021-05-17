/*
 * Code for class EV_APPLICATION_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1893.h"
#include <windows.h>
#include <wel.h>
#include "cctrl.h"
#include "eif_misc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F1910_22450
static void inline_F1910_22450 (void)
{
	{
	FARPROC disable_ghosting = NULL;
	HMODULE user32_module = LoadLibrary (L"user32.dll");
	if (user32_module) {
		disable_ghosting = GetProcAddress (user32_module, "DisableProcessWindowsGhosting");
		if (disable_ghosting) {
			(FUNCTION_CAST_TYPE(void,WINAPI,(void)) disable_ghosting) ();
		}
	}
}
	;
}
#define INLINE_F1910_22450
#endif
#ifndef INLINE_F67_9758
static EIF_POINTER inline_F67_9758 (void)
{
	return (EIF_POINTER) GetCurrentProcess();
	;
}
#define INLINE_F67_9758
#endif
#ifndef INLINE_F67_9756
static EIF_INTEGER_32 inline_F67_9756 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3, EIF_POINTER* arg4, EIF_INTEGER_32 arg5, EIF_BOOLEAN arg6, EIF_INTEGER_32 arg7)
{
	return (EIF_INTEGER) DuplicateHandle (
	(HANDLE) arg1,
	(HANDLE) arg2,
	(HANDLE) arg3,
	(LPHANDLE) arg4,
	(DWORD) arg5,
	(BOOL) arg6,
	(DWORD) arg7);
	;
}
#define INLINE_F67_9756
#endif
#ifndef INLINE_F67_9757
static EIF_INTEGER_32 inline_F67_9757 (EIF_POINTER arg1)
{
	return (EIF_INTEGER) CloseHandle ((HANDLE) arg1);
	;
}
#define INLINE_F67_9757
#endif
#ifndef INLINE_F67_9742
static int inline_F67_9742 (EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3, EIF_POINTER arg4)
{
	return (int) (PostMessage ((HWND) arg1, (UINT) arg2, (WPARAM) arg3, (LPARAM) arg4))
	;
}
#define INLINE_F67_9742
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_APPLICATION_IMP}.make */
void F1910_22385 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_BOOLEAN tb1;
	RTCFDT;
	RTLD;
	
	RTLI(7);
	RTLR(0,loc3);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,tr4);
	RTLR(6,tr5);
	RTLIU(7);
	
	RTGC;
	loc3 = RTLNS(eif_new_type(56, 0x01).id, 56, _OBJSIZ_0_0_0_0_0_1_0_0_);
	F57_9618(RTCW(loc3));
	tb1 = F57_9624(RTCW(loc3));
	if (tb1) {
		F57_9628(RTCW(loc3));
	}
	tr1 = RTLNSMART(eif_new_type(1396, 1).id);
	F1337_15830(RTCW(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_46_) = (EIF_REFERENCE) tr1;
	{
		/* INLINED CODE (WEL_APPLICATION.init_instance) */
		/* END INLINED CODE */
	}
	;
	F1910_22435(Current);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,965,0xFF01,1981,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSMART(typres0.id);
	}
	F951_4073(RTCW(tr1), ((EIF_INTEGER_32) 5L));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_45_) = (EIF_REFERENCE) tr1;
	{
		/* INLINED CODE (ANY.do_nothing) */
		tr1 = RTOUCR(239,F1910_22395, (Current));
		/* END INLINED CODE */
	}
	;
	inline_F1910_22450();
	F1910_22406(Current);
	F1714_19277(Current);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_48_14_0_6_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
	tr1 = RTOUCR(266,F1909_22383, (Current));
	{
		EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,1475,0xFF01,0,0xFFFF};
		EIF_TYPE typres0;
		typarr0[4] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = Current;
	RTAR(tr2,Current);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1552,0xFF01,0xFFF9,1,1475,0xFF01,423,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr5= RTLNRF(typres0.id, (EIF_POINTER) __A1893_271_2, (EIF_POINTER) _A1893_271_2, (EIF_POINTER)(F1714_19358),tr2, 1, 1);
	}
	F1907_22357(RTCW(tr1), tr5);
	F1910_22430(Current, ((EIF_INTEGER_32) 1L));
	tr1 = RTOUCR(239,F1910_22395, (Current));
	F180_10628(Current, tr1);
	tp1 = *(EIF_POINTER *)(RTCV(RTOUCR(239,F1910_22395, (Current)))+ _PTROFF_7_2_0_2_0_0_);
	*(EIF_POINTER *)(Current+ _PTROFF_48_14_0_7_0_1_) = (EIF_POINTER) tp1;
	loc2 = inline_F67_9758();
	loc1 = inline_F67_9756(loc2, loc2, loc2, (EIF_POINTER *) &(loc2), ((EIF_INTEGER_32) 0L), (EIF_BOOLEAN) 0, ((EIF_INTEGER_32) 2L));
	*(EIF_POINTER *)(Current+ _PTROFF_48_14_0_7_0_0_) = (EIF_POINTER) loc2;
	F180_10629(Current, Current);
	RTLE;
}

/* {EV_APPLICATION_IMP}.key_pressed */
EIF_BOOLEAN F1910_22386 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_16 ti2_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	
	RTGC;
	ti2_1 = (EIF_INTEGER_16) GetKeyState(((int) arg1));
	ti2_1 = eif_bit_and(ti2_1,(EIF_INTEGER_16) ((EIF_INTEGER_32) 61440L));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti2_1 == (EIF_INTEGER_16) ((EIF_INTEGER_32) 61440L));
	return Result;
}

/* {EV_APPLICATION_IMP}.ctrl_pressed */
EIF_BOOLEAN F1910_22388 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) F1910_22386(Current, ((EIF_INTEGER_32) 17L));
}

/* {EV_APPLICATION_IMP}.alt_pressed */
EIF_BOOLEAN F1910_22389 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	Result = '\01';
	if (!F1910_22386(Current, ((EIF_INTEGER_32) 164L))) {
		Result = F1910_22386(Current, ((EIF_INTEGER_32) 165L));
	}
	RTLE;
	return Result;
}

/* {EV_APPLICATION_IMP}.shift_pressed */
EIF_BOOLEAN F1910_22390 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) F1910_22386(Current, ((EIF_INTEGER_32) 16L));
}

/* {EV_APPLICATION_IMP}.silly_main_window */
static EIF_REFERENCE F1910_22395_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(239)

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,tr2);
	RTLIU(2);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(eif_new_type(1918, 0x01).id, 1918, _OBJSIZ_7_2_0_2_0_2_0_0_);
	tr2 = RTMS_EX_H("Main Window",11,1328228471);
	F1917_22823(RTCW(tr1), tr2);
	Result = (EIF_REFERENCE) tr1;
	F1912_22542(RTCW(Result), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L));
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1910_22395 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(239,F1910_22395_body,(Current));
}

/* {EV_APPLICATION_IMP}.add_root_window */
void F1910_22396 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTGC;
	F1910_22406(Current);
	tr1 = RTOUCR(267,F1910_22400, (Current));
	tp1 = *(EIF_POINTER *)(RTCW(arg1) + O12527[Dtype(arg1)-1295]);
	F953_4114(RTCW(tr1), tp1);
	RTLE;
}

/* {EV_APPLICATION_IMP}.remove_root_window */
void F1910_22397 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTGC;
	tr1 = RTOUCR(267,F1910_22400, (Current));
	tp1 = *(EIF_POINTER *)(RTCW(arg1) + O12527[Dtype(arg1)-1295]);
	F953_4128(RTCW(tr1), tp1);
	RTLE;
}

/* {EV_APPLICATION_IMP}.set_window_with_focus */
void F1910_22399 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_40_) = (EIF_REFERENCE) arg1;
}

/* {EV_APPLICATION_IMP}.application_windows_id */
static EIF_REFERENCE F1910_22400_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(267)

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEV;
	RTGC;
	RTOTP;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,952,1550,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0.id, 952, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	F953_4073(RTCW(tr1), ((EIF_INTEGER_32) 5L));
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1910_22400 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(267,F1910_22400_body,(Current));
}

/* {EV_APPLICATION_IMP}.tooltip_delay */
EIF_INTEGER_32 F1910_22401 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_48_14_0_6_);
}


/* {EV_APPLICATION_IMP}.windows */
EIF_REFERENCE F1910_22403 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_REFERENCE) F1910_22404(Current, (EIF_BOOLEAN) 1);
}

/* {EV_APPLICATION_IMP}.windows_internal */
EIF_REFERENCE F1910_22404 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(5);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLR(3,loc1);
	RTLR(4,tr1);
	RTLIU(5);
	
	RTGC;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,950,0xFF01,1642,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		loc2 = RTLNS(typres0.id, 950, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	ti4_1 = F953_4094(RTCV(RTOUCR(267,F1910_22400, (Current))));
	F951_4073(RTCW(loc2), ti4_1);
	Result = (EIF_REFERENCE) loc2;
	F953_4104(RTCV(RTOUCR(267,F1910_22400, (Current))));
	for (;;) {
		tb1 = F884_3332(RTCV(RTOUCR(267,F1910_22400, (Current))));
		if (tb1) break;
		tp1 = F953_4078(RTCV(RTOUCR(267,F1910_22400, (Current))));
		if ((EIF_BOOLEAN) EIF_TEST(IsWindow(((HWND) tp1)))) {
			tp1 = F953_4078(RTCV(RTOUCR(267,F1910_22400, (Current))));
			loc1 = F1898_22150(Current, tp1);
			loc1 = RTRV(eif_new_type(1981, 0x00), loc1);
			if ((EIF_BOOLEAN)(loc1 != NULL)) {
				tb2 = '\01';
				if ((EIF_BOOLEAN) !arg1) {
					tb3 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R16563[Dtype(RTCW(loc1))-1871])(loc1);
					tb2 = tb3;
				}
				if (tb2) {
					tr1 = F1696_18976(RTCW(loc1));
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2222[Dtype(RTCW(loc2))-818])(loc2, tr1);
				}
				F953_4106(RTCV(RTOUCR(267,F1910_22400, (Current))));
			} else {
				F953_4127(RTCV(RTOUCR(267,F1910_22400, (Current))));
			}
		} else {
			F953_4127(RTCV(RTOUCR(267,F1910_22400, (Current))));
		}
	}
	RTLE;
	return Result;
}

/* {EV_APPLICATION_IMP}.update_theme_drawer */
void F1910_22406 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	if (F1910_22408(Current)) {
		tr1 = RTLNS(eif_new_type(409, 0x01).id, 409, _OBJSIZ_0_0_0_0_0_0_0_0_);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_41_) = (EIF_REFERENCE) tr1;
	} else {
		tr1 = RTLNS(eif_new_type(1259, 0x01).id, 1259, _OBJSIZ_0_0_0_0_0_0_0_0_);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_41_) = (EIF_REFERENCE) tr1;
	}
	RTLE;
}

/* {EV_APPLICATION_IMP}.themes_active */
EIF_BOOLEAN F1910_22408 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	Result = '\0';
	tb1 = '\0';
	tb2 = '\0';
	if (RTOUCB(EIF_BOOLEAN,268,F1910_22409, (Current))) {
		tb2 = F1910_22456(Current);
	}
	if (tb2) {
		tb1 = F1910_22457(Current);
	}
	if (tb1) {
		Result = (EIF_BOOLEAN) (RTOUCB(EIF_INTEGER_32,269,F500_14112, (Current)) >= ((EIF_INTEGER_32) 393216L));
	}
	RTLE;
	return Result;
}

/* {EV_APPLICATION_IMP}.uxtheme_dll_available */
static EIF_BOOLEAN F1910_22409_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRB(EIF_BOOLEAN)
	RTOUDB(EIF_BOOLEAN, 268)

	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEV;
	RTGC;
	RTOTP;
	loc1 = RTLNS(eif_new_type(1302, 0x01).id, 1302, _OBJSIZ_0_2_0_0_0_1_0_0_);
	tr1 = RTMS_EX_H("uxtheme.dll",11,987415404);
	F1303_15186(RTCW(loc1), tr1);
	Result = F1296_15099(RTCW(loc1));
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_BOOLEAN F1910_22409 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_BOOLEAN,268,F1910_22409_body,(Current));
}

/* {EV_APPLICATION_IMP}.pick_and_drop_source */
EIF_REFERENCE F1910_22410 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_47_);
}


/* {EV_APPLICATION_IMP}.enable_drop_actions_executing */
void F1910_22413 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_BOOLEAN *)(Current+ _CHROFF_48_8_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
}

/* {EV_APPLICATION_IMP}.disable_drop_actions_executing */
void F1910_22414 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_BOOLEAN *)(Current+ _CHROFF_48_8_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
}

/* {EV_APPLICATION_IMP}.dock_started */
void F1910_22415 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_42_) = (EIF_REFERENCE) arg1;
}

/* {EV_APPLICATION_IMP}.dock_ended */
void F1910_22416 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_REFERENCE *)(Current + _REFACS_42_) = (EIF_REFERENCE) NULL;
}

/* {EV_APPLICATION_IMP}.transport_started */
void F1910_22417 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_47_) = (EIF_REFERENCE) arg1;
}

/* {EV_APPLICATION_IMP}.transport_ended */
void F1910_22418 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_REFERENCE *)(Current + _REFACS_47_) = (EIF_REFERENCE) NULL;
}

/* {EV_APPLICATION_IMP}.start_awaiting_movement */
void F1910_22420 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(RTCV(RTOUCR(206,F1714_19338, (Current))) + _REFACS_1_);
	F1954_23618(RTCW(tr1));
	*(EIF_BOOLEAN *)(Current+ _CHROFF_48_9_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTLE;
}

/* {EV_APPLICATION_IMP}.end_awaiting_movement */
void F1910_22421 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_BOOLEAN *)(Current+ _CHROFF_48_9_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
}

/* {EV_APPLICATION_IMP}.set_transport_just_ended */
void F1910_22423 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_BOOLEAN *)(Current+ _CHROFF_48_10_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
}

/* {EV_APPLICATION_IMP}.clear_transport_just_ended */
void F1910_22424 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_BOOLEAN *)(Current+ _CHROFF_48_10_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
}

/* {EV_APPLICATION_IMP}.set_override_from_mouse_activate */
void F1910_22426 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_BOOLEAN *)(Current+ _CHROFF_48_11_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
}

/* {EV_APPLICATION_IMP}.clear_override_from_mouse_activate */
void F1910_22427 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_BOOLEAN *)(Current+ _CHROFF_48_11_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
}

/* {EV_APPLICATION_IMP}.set_tooltip_delay */
void F1910_22429 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_48_14_0_6_) = (EIF_INTEGER_32) arg1;
	tr1 = RTOUCR(270,F1910_22432, (Current));
	F1927_22939(RTCW(tr1), arg1);
	RTLE;
}

/* {EV_APPLICATION_IMP}.set_capture_type */
void F1910_22430 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = RTOUCR(271,F1910_22443, (Current));
	F490_1934(RTCW(tr1), arg1);
	RTLE;
}

/* {EV_APPLICATION_IMP}.destroy */
void F1910_22431 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	PostQuitMessage(((int) ((EIF_INTEGER_32) 0L)));
	F1696_18991(Current, (EIF_BOOLEAN) 1);
	*(EIF_REFERENCE *)(Current + _REFACS_40_) = (EIF_REFERENCE) NULL;
	tr1 = F251_11726(Current);
	F977_14409(RTCW(tr1), NULL);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_48_14_0_7_0_0_);
	loc1 = inline_F67_9757(tp1);
	{
		/* INLINED CODE (ANY.default_pointer) */
		tp1 = (EIF_POINTER)  0;
		/* END INLINED CODE */
	}
	tp2 = tp1;
	*(EIF_POINTER *)(Current+ _PTROFF_48_14_0_7_0_0_) = (EIF_POINTER) tp2;
	RTLE;
}

/* {EV_APPLICATION_IMP}.internal_tooltip */
static EIF_REFERENCE F1910_22432_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(270)

	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(eif_new_type(1926, 0x01).id, 1926, _OBJSIZ_5_2_0_3_0_2_0_0_);
	tr2 = RTOUCR(239,F1910_22395, (Current));
	F1927_22925(RTCW(tr1), tr2, ((EIF_INTEGER_32) -1L));
	Result = (EIF_REFERENCE) tr1;
	F1927_22938(RTCW(Result), ((EIF_INTEGER_32) 32000L));
	F1927_22934(RTCW(Result));
	F1927_22939(RTCW(Result), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_48_14_0_6_));
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1910_22432 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(270,F1910_22432_body,(Current));
}

/* {EV_APPLICATION_IMP}.init_application */
void F1910_22435 (EIF_REFERENCE Current)
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
	tr1 = RTLNSMART(eif_new_type(1395, 1).id);
	ti4_1 = (EIF_INTEGER_32) ICC_WIN95_CLASSES;
	ti4_2 = (EIF_INTEGER_32) ICC_DATE_CLASSES;
	ti4_1 = eif_bit_or(ti4_1,ti4_2);
	ti4_2 = (EIF_INTEGER_32) ICC_USEREX_CLASSES;
	ti4_1 = eif_bit_or(ti4_1,ti4_2);
	ti4_2 = (EIF_INTEGER_32) ICC_COOL_CLASSES;
	ti4_1 = eif_bit_or(ti4_1,ti4_2);
	F1396_16901(RTCW(tr1), ti4_1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_43_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_new_type(1304, 1).id);
	F1305_15197(RTCW(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_44_) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {EV_APPLICATION_IMP}.wake_up_gui_thread */
void F1910_22436 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_48_14_0_7_0_1_);
	tp2 = (EIF_POINTER) (WPARAM)((((EIF_INTEGER_32) 0L)));
	tp3 = (EIF_POINTER) (LPARAM)((((EIF_INTEGER_32) 0L)));
	loc1 = EIF_TEST (inline_F67_9742(tp1, ((EIF_INTEGER_32) 0L), tp2, tp3));
	RTLE;
}

/* {EV_APPLICATION_IMP}.process_underlying_toolkit_event_queue */
void F1910_22441 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc2 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc3 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_46_);
	F1397_16934(RTCW(loc1));
	for (;;) {
		tb1 = '\01';
		tb2 = *(EIF_BOOLEAN *)(RTCW(loc1)+ _CHROFF_0_1_);
		if (!(EIF_BOOLEAN) !tb2) {
			tb1 = F1696_18975(Current);
		}
		if (tb1) break;
		loc2 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		tb2 = '\01';
		if (!loc3) {
			tb3 = F1397_16921(RTCW(loc1));
			tb2 = tb3;
		}
		loc3 = (EIF_BOOLEAN) tb2;
		F1910_22442(Current, loc1);
		F1397_16934(RTCW(loc1));
	}
	*(EIF_BOOLEAN *)(Current+ _CHROFF_48_1_) = (EIF_BOOLEAN) loc2;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_48_2_) = (EIF_BOOLEAN) loc3;
	RTLE;
}

/* {EV_APPLICATION_IMP}.process_message */
void F1910_22442 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc2);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTGC;
	tb1 = *(EIF_BOOLEAN *)(RTCW(arg1)+ _CHROFF_0_1_);
	if (tb1) {
		tb1 = F1397_16924(RTCW(arg1));
		if (tb1) {
			F1696_18991(Current, (EIF_BOOLEAN) 1);
		} else {
			loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			tb1 = '\0';
			tb2 = '\0';
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_40_);
			loc2 = tr1;
			if (EIF_TEST(loc2)) {
				tb3 = F1296_15099(loc2);
				tb2 = tb3;
			}
			if (tb2) {
				tp1 = *(EIF_POINTER *)(loc2 + O12527[Dtype(loc2)-1295]);
				tb1 = F1909_22375(Current, tp1);
			}
			if (tb1) {
				tp1 = *(EIF_POINTER *)(loc2 + O12527[Dtype(loc2)-1295]);
				F1397_16942(RTCW(arg1), tp1);
				loc1 = *(EIF_BOOLEAN *)(RTCW(arg1)+ _CHROFF_0_1_);
				loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) !loc1;
			}
			if (loc1) {
				F1397_16937(RTCW(arg1));
				F1397_16936(RTCW(arg1));
			}
		}
	}
	RTLE;
}

/* {EV_APPLICATION_IMP}.internal_capture_type */
static EIF_REFERENCE F1910_22443_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(271)

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEV;
	RTGC;
	RTOTP;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,489,1508,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0.id, 489, _OBJSIZ_0_0_0_1_0_0_0_0_);
	}
	F490_1934(RTCW(tr1), ((EIF_INTEGER_32) 0L));
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1910_22443 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(271,F1910_22443_body,(Current));
}

/* {EV_APPLICATION_IMP}.wait_for_input */
void F1910_22445 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_POINTER loc3 = (EIF_POINTER) 0;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	loc2 = *(EIF_POINTER *)(Current+ _PTROFF_48_14_0_7_0_0_);
	if ((EIF_BOOLEAN)(loc2 != loc3)) {
		ti4_1 = eif_bit_or(((EIF_INTEGER_32) 1279L),((EIF_INTEGER_32) 256L));
		loc1 = F67_9762(Current, ((EIF_INTEGER_32) 1L), (EIF_POINTER *) &(loc2), arg1, ti4_1, ((EIF_INTEGER_32) 4L));
	}
	RTLE;
}

/* {EV_APPLICATION_IMP}.cwin_disable_xp_ghosting */
void F1910_22450 (EIF_REFERENCE Current)
{
	GTCX
	
	
	inline_F1910_22450 ();
}

/* {EV_APPLICATION_IMP}.cwin_post_quit_message */
void F1910_22453 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	PostQuitMessage(((int) arg1));
}

/* {EV_APPLICATION_IMP}.cwin_get_keyboard_state */
EIF_INTEGER_16 F1910_22454 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_16 Result = ((EIF_INTEGER_16) 0);
	
	
	
	Result = (EIF_INTEGER_16) GetKeyState(((int) arg1));
	return Result;
}

/* {EV_APPLICATION_IMP}.cwin_is_theme_active */
EIF_BOOLEAN F1910_22456 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	{
	static char done = 0;
		static EIF_POINTER fp = NULL;
		if (!done) {
			HMODULE a_result;
			a_result = eif_load_dll("uxtheme.dll");
			if (a_result == NULL) eraise("Cannot load library",EN_PROG);
			fp = (EIF_POINTER) GetProcAddress(a_result,"IsThemeActive");
			if (fp == NULL) eraise("Cannot find entry point of IsThemeActive",EN_PROG);
			done = (char) 1;
			}
		Result = (EIF_BOOLEAN) EIF_TEST((FUNCTION_CAST_TYPE(EIF_BOOLEAN,__stdcall, (void)) fp )());
	}
	
	return Result;
}

/* {EV_APPLICATION_IMP}.cwin_is_app_themed */
EIF_BOOLEAN F1910_22457 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	{
	static char done = 0;
		static EIF_POINTER fp = NULL;
		if (!done) {
			HMODULE a_result;
			a_result = eif_load_dll("uxtheme.dll");
			if (a_result == NULL) eraise("Cannot load library",EN_PROG);
			fp = (EIF_POINTER) GetProcAddress(a_result,"IsAppThemed");
			if (fp == NULL) eraise("Cannot find entry point of IsAppThemed",EN_PROG);
			done = (char) 1;
			}
		Result = (EIF_BOOLEAN) EIF_TEST((FUNCTION_CAST_TYPE(EIF_BOOLEAN,__stdcall, (void)) fp )());
	}
	
	return Result;
}

void EIF_Minit1893 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
