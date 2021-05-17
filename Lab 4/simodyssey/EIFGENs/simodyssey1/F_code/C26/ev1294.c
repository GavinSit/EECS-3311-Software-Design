/*
 * Code for class EV_XP_THEME_DRAWER_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1294.h"
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

/* {EV_XP_THEME_DRAWER_IMP}.open_theme_data */
EIF_POINTER F410_13300 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,arg2);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	tr1 = F410_13315(Current, arg2);
	tp1 = F944_3745(RTCW(tr1));
	Result = F410_13316(Current, arg1, tp1);
	RTLE;
	return Result;
}

/* {EV_XP_THEME_DRAWER_IMP}.close_theme_data */
void F410_13301 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	
	F410_13317(Current, arg1);
}

/* {EV_XP_THEME_DRAWER_IMP}.draw_theme_background */
void F410_13303 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_REFERENCE arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_REFERENCE arg5, EIF_REFERENCE arg6, EIF_REFERENCE arg7)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg6);
	RTLR(1,arg2);
	RTLR(2,arg5);
	RTLR(3,Current);
	RTLIU(4);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg6 != NULL)) {
		loc1 = *(EIF_POINTER *)(RTCW(arg6)+ _PTROFF_0_1_0_0_0_0_);
	}
	tp1 = *(EIF_POINTER *)(RTCW(arg2) + O12527[Dtype(arg2)-1295]);
	tp2 = *(EIF_POINTER *)(RTCW(arg5)+ _PTROFF_0_1_0_0_0_0_);
	F410_13319(Current, arg1, tp1, arg3, arg4, tp2, loc1);
	RTLE;
}

/* {EV_XP_THEME_DRAWER_IMP}.get_notebook_parent */
EIF_REFERENCE F410_13304 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc2 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLR(3,Result);
	RTLIU(4);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + O19682[Dtype(arg1)-1969]);
	if ((EIF_BOOLEAN)(tr1 == NULL)) {
		loc1 = arg1;
		loc1 = RTRV(eif_new_type(1970, 0x00), loc1);
		tb1 = '\01';
		if (!(EIF_BOOLEAN)(loc1 == NULL)) {
			tb2 = '\0';
			if ((EIF_BOOLEAN)(loc1 != NULL)) {
				tr1 = *(EIF_REFERENCE *)(RTCW(loc1) + O19772[Dtype(loc1)-1970]);
				tb2 = (EIF_BOOLEAN)(tr1 == NULL);
			}
			tb1 = tb2;
		}
		if (tb1) {
			loc1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R16312[Dtype(RTCW(arg1))-1972])(arg1);
			for (;;) {
				if ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc1 == NULL) || (EIF_BOOLEAN)(Result != NULL)) || loc2)) break;
				Result = loc1;
				Result = RTRV(eif_new_type(1972, 0x00), Result);
				tb1 = '\0';
				if ((EIF_BOOLEAN)(Result == NULL)) {
					tb2 = '\01';
					tr1 = *(EIF_REFERENCE *)(RTCW(loc1) + O19682[Dtype(loc1)-1969]);
					if (!(EIF_BOOLEAN)(tr1 != NULL)) {
						tr1 = *(EIF_REFERENCE *)(RTCW(loc1) + O19772[Dtype(loc1)-1970]);
						tb2 = (EIF_BOOLEAN)(tr1 != NULL);
					}
					tb1 = tb2;
				}
				if (tb1) {
					loc2 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				}
				tr1 = F1970_24073(RTCW(loc1));
				loc1 = (EIF_REFERENCE) tr1;
			}
		}
	}
	RTLE;
	return Result;
}

/* {EV_XP_THEME_DRAWER_IMP}.draw_widget_background_gdip */
EIF_BOOLEAN F410_13305 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3, EIF_REFERENCE arg4, EIF_REFERENCE arg5)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(11);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLR(3,loc2);
	RTLR(4,tr1);
	RTLR(5,arg3);
	RTLR(6,loc7);
	RTLR(7,arg2);
	RTLR(8,loc8);
	RTLR(9,arg5);
	RTLR(10,arg4);
	RTLIU(11);
	
	RTGC;
	loc1 = F410_13304(Current, arg1);
	loc1 = RTRV(eif_new_type(1972, 0x00), loc1);
	if ((EIF_BOOLEAN)(loc1 == NULL)) {
		loc2 = arg1;
		loc2 = RTRV(eif_new_type(1970, 0x00), loc2);
		tb1 = '\0';
		if ((EIF_BOOLEAN)(loc2 != NULL)) {
			tr1 = *(EIF_REFERENCE *)(RTCW(loc2) + O19772[Dtype(loc2)-1970]);
			tb1 = (EIF_BOOLEAN)(tr1 != NULL);
		}
		if (tb1) {
			loc3 = F1408_17327(RTCW(arg3));
			loc4 = F1408_17329(RTCW(arg3));
			loc5 = F1408_17332(RTCW(arg3));
			loc6 = F1408_17333(RTCW(arg3));
			loc7 = RTLNS(eif_new_type(1331, 0x01).id, 1331, _OBJSIZ_0_1_0_0_0_2_0_0_);
			F1332_15700(RTCW(loc7), arg2);
			loc8 = RTLNS(eif_new_type(30, 0x01).id, 30, _OBJSIZ_0_0_0_0_0_0_1_0_);
			ti4_1 = F1829_20494(RTCW(arg5));
			ti4_2 = F1829_20495(RTCW(arg5));
			ti4_3 = F1829_20496(RTCW(arg5));
			F31_9005(RTCW(loc8), ((EIF_INTEGER_32) 255L), ti4_1, ti4_2, ti4_3);
			F1332_15718(RTCW(loc7), loc8);
			tr1 = RTLNS(eif_new_type(36, 0x01).id, 36, _OBJSIZ_1_0_0_0_0_0_0_0_);
			F37_9087(RTCW(tr1), loc3, loc4, loc5, loc6);
			F1332_15714(RTCW(loc7), arg4, tr1);
			F1332_15726(RTCW(loc7));
			RTLE;
			return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
	}
	RTLE;
	return (EIF_BOOLEAN) 0;
}

/* {EV_XP_THEME_DRAWER_IMP}.draw_widget_background */
void F410_13306 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3, EIF_REFERENCE arg4)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_INTEGER_32 ti4_6;
	EIF_INTEGER_32 ti4_7;
	EIF_INTEGER_32 ti4_8;
	EIF_INTEGER_32 ti4_9;
	EIF_INTEGER_32 ti4_10;
	RTLD;
	
	RTLI(8);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLR(3,loc3);
	RTLR(4,arg2);
	RTLR(5,arg3);
	RTLR(6,arg4);
	RTLR(7,loc2);
	RTLIU(8);
	
	RTGC;
	loc1 = F410_13304(Current, arg1);
	loc1 = RTRV(eif_new_type(1972, 0x00), loc1);
	if ((EIF_BOOLEAN)(loc1 == NULL)) {
		loc3 = arg1;
		loc3 = RTRV(eif_new_type(1970, 0x00), loc3);
		F1306_15298(RTCW(arg2), arg3, arg4);
	} else {
		loc2 = RTLNS(eif_new_type(1407, 0x01).id, 1407, _OBJSIZ_0_1_0_0_0_1_0_0_);
		ti4_1 = F1912_22484(RTCW(loc1));
		ti4_2 = F1912_22484(RTCW(arg1));
		ti4_3 = F1912_22485(RTCW(loc1));
		ti4_4 = F1912_22485(RTCW(arg1));
		ti4_5 = F1970_24041(RTCW(loc1));
		ti4_6 = F1912_22484(RTCW(loc1));
		ti4_7 = F1912_22484(RTCW(arg1));
		ti4_8 = F1970_24043(RTCW(loc1));
		ti4_9 = F1912_22485(RTCW(loc1));
		ti4_10 = F1912_22485(RTCW(arg1));
		F1408_17321(RTCW(loc2), (EIF_INTEGER_32) (ti4_1 - ti4_2), (EIF_INTEGER_32) (ti4_3 - ti4_4), (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_5 + ti4_6) - ti4_7), (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_8 + ti4_9) - ti4_10));
		tp1 = *(EIF_POINTER *)(RTCW(loc1)+ _PTROFF_63_23_6_12_0_2_);
		F410_13303(Current, tp1, arg2, ((EIF_INTEGER_32) 10L), ((EIF_INTEGER_32) 0L), loc2, arg3, arg4);
	}
	RTLE;
}

/* {EV_XP_THEME_DRAWER_IMP}.draw_theme_parent_background */
void F410_13308 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3, EIF_REFERENCE arg4)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg2);
	RTLR(1,arg3);
	RTLR(2,Current);
	RTLIU(3);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(RTCW(arg2) + O12527[Dtype(arg2)-1295]);
	tp2 = *(EIF_POINTER *)(RTCW(arg3)+ _PTROFF_0_1_0_0_0_0_);
	F410_13318(Current, arg1, tp1, tp2);
	RTLE;
}

/* {EV_XP_THEME_DRAWER_IMP}.draw_button_edge */
void F410_13309 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_REFERENCE arg3)
{
	GTCX
	
	
	RTGC;
}

/* {EV_XP_THEME_DRAWER_IMP}.update_button_text_rect_for_state */
void F410_13310 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_REFERENCE arg3)
{
	GTCX
	
	
	RTGC;
}

/* {EV_XP_THEME_DRAWER_IMP}.update_button_pixmap_coordinates_for_state */
void F410_13311 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_REFERENCE arg3)
{
	GTCX
	
	
	RTGC;
}

/* {EV_XP_THEME_DRAWER_IMP}.draw_text */
void F410_13312 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_REFERENCE arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_REFERENCE arg5, EIF_INTEGER_32 arg6, EIF_BOOLEAN arg7, EIF_REFERENCE arg8, EIF_REFERENCE arg9)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(8);
	RTLR(0,loc1);
	RTLR(1,arg5);
	RTLR(2,Current);
	RTLR(3,arg9);
	RTLR(4,tr1);
	RTLR(5,tr2);
	RTLR(6,arg2);
	RTLR(7,arg8);
	RTLIU(8);
	
	RTGC;
	loc1 = F410_13315(Current, arg5);
	tb1 = '\0';
	tr1 = F1696_18976(RTCW(arg9));
	tr2 = RTLNS(eif_new_type(72, 0x01).id, 72, _OBJSIZ_0_0_0_0_0_0_0_0_);
	tr2 = F73_9890(RTCW(tr2));
	tb2 = F1603_17919(RTCW(tr1), tr2);
	if (tb2) {
		tb1 = arg7;
	}
	if (tb1) {
		tp1 = *(EIF_POINTER *)(RTCW(arg2) + O12527[Dtype(arg2)-1295]);
		tp2 = F944_3745(RTCW(loc1));
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_1_0_0_0_);
		tp3 = *(EIF_POINTER *)(RTCW(arg8)+ _PTROFF_0_1_0_0_0_0_);
		F410_13320(Current, arg1, tp1, arg3, arg4, tp2, ti4_1, arg6, ((EIF_INTEGER_32) 0L), tp3);
	} else {
		tr1 = RTOUCR(368,F410_13314, (Current));
		F1260_14806(RTCW(tr1), arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
	}
	RTLE;
}

/* {EV_XP_THEME_DRAWER_IMP}.classic_drawer */
static EIF_REFERENCE F410_13314_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(368)

	RTLI(1);
	RTLR(0,tr1);
	RTLIU(1);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(eif_new_type(1259, 0x01).id, 1259, _OBJSIZ_0_0_0_0_0_0_0_0_);
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F410_13314 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(368,F410_13314_body,(Current));
}

/* {EV_XP_THEME_DRAWER_IMP}.unicode_string */
EIF_REFERENCE F410_13315 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(944, 0x01).id, 944, _OBJSIZ_1_0_0_1_0_0_0_0_);
	F944_3738(RTCW(tr1), arg1);
	RTLE;
	return (EIF_REFERENCE) tr1;
}

/* {EV_XP_THEME_DRAWER_IMP}.cwin_open_theme_data */
EIF_POINTER F410_13316 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	{
	static char done = 0;
		static EIF_POINTER fp = NULL;
		if (!done) {
			HMODULE a_result;
			a_result = eif_load_dll("uxtheme.dll");
			if (a_result == NULL) eraise("Cannot load library",EN_PROG);
			fp = (EIF_POINTER) GetProcAddress(a_result,"OpenThemeData");
			if (fp == NULL) eraise("Cannot find entry point of OpenThemeData",EN_PROG);
			done = (char) 1;
			}
		Result = (EIF_POINTER) ((FUNCTION_CAST_TYPE(EIF_POINTER,__stdcall, (HWND, LPCWSTR)) fp )((HWND) arg1, (LPCWSTR) arg2));
	}
	
	return Result;
}

/* {EV_XP_THEME_DRAWER_IMP}.cwin_close_theme_data */
void F410_13317 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	{
	static char done = 0;
		static EIF_POINTER fp = NULL;
		if (!done) {
			HMODULE a_result;
			a_result = eif_load_dll("uxtheme.dll");
			if (a_result == NULL) eraise("Cannot load library",EN_PROG);
			fp = (EIF_POINTER) GetProcAddress(a_result,"CloseThemeData");
			if (fp == NULL) eraise("Cannot find entry point of CloseThemeData",EN_PROG);
			done = (char) 1;
			}
		((FUNCTION_CAST_TYPE(void,__stdcall, (HWND)) fp )((HWND) arg1));
	}
	
}

/* {EV_XP_THEME_DRAWER_IMP}.cwin_draw_theme_parent_background */
void F410_13318 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3)
{
	GTCX
	
	{
	static char done = 0;
		static EIF_POINTER fp = NULL;
		if (!done) {
			HMODULE a_result;
			a_result = eif_load_dll("uxtheme.dll");
			if (a_result == NULL) eraise("Cannot load library",EN_PROG);
			fp = (EIF_POINTER) GetProcAddress(a_result,"DrawThemeParentBackground");
			if (fp == NULL) eraise("Cannot find entry point of DrawThemeParentBackground",EN_PROG);
			done = (char) 1;
			}
		((FUNCTION_CAST_TYPE(void,__stdcall, (HWND, HDC, RECT*)) fp )((HWND) arg1, (HDC) arg2, (RECT*) arg3));
	}
	
}

/* {EV_XP_THEME_DRAWER_IMP}.cwin_draw_theme_background */
void F410_13319 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_POINTER arg5, EIF_POINTER arg6)
{
	GTCX
	
	{
	static char done = 0;
		static EIF_POINTER fp = NULL;
		if (!done) {
			HMODULE a_result;
			a_result = eif_load_dll("uxtheme.dll");
			if (a_result == NULL) eraise("Cannot load library",EN_PROG);
			fp = (EIF_POINTER) GetProcAddress(a_result,"DrawThemeBackground");
			if (fp == NULL) eraise("Cannot find entry point of DrawThemeBackground",EN_PROG);
			done = (char) 1;
			}
		((FUNCTION_CAST_TYPE(void,__stdcall, (EIF_POINTER, HDC, int, int, RECT*, RECT*)) fp )((EIF_POINTER) arg1, (HDC) arg2, (int) arg3, (int) arg4, (RECT*) arg5, (RECT*) arg6));
	}
	
}

/* {EV_XP_THEME_DRAWER_IMP}.cwin_draw_theme_text */
void F410_13320 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_POINTER arg5, EIF_INTEGER_32 arg6, EIF_INTEGER_32 arg7, EIF_INTEGER_32 arg8, EIF_POINTER arg9)
{
	GTCX
	
	{
	static char done = 0;
		static EIF_POINTER fp = NULL;
		if (!done) {
			HMODULE a_result;
			a_result = eif_load_dll("uxtheme.dll");
			if (a_result == NULL) eraise("Cannot load library",EN_PROG);
			fp = (EIF_POINTER) GetProcAddress(a_result,"DrawThemeText");
			if (fp == NULL) eraise("Cannot find entry point of DrawThemeText",EN_PROG);
			done = (char) 1;
			}
		((FUNCTION_CAST_TYPE(void,__stdcall, (EIF_POINTER, HDC, int, int, LPCWSTR, int, DWORD, DWORD, RECT*)) fp )((EIF_POINTER) arg1, (HDC) arg2, (int) arg3, (int) arg4, (LPCWSTR) arg5, (int) arg6, (DWORD) arg7, (DWORD) arg8, (RECT*) arg9));
	}
	
}

void EIF_Minit1294 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
