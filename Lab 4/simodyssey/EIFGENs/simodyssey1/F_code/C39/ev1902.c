/*
 * Code for class EV_INTERNAL_SILLY_WINDOW_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1902.h"
#include <windows.h>
#include <winx.h>
#include <wel.h>
#include "wel.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_INTERNAL_SILLY_WINDOW_IMP}.default_style */
EIF_INTEGER_32 F1919_22842 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) ((EIF_INTEGER_32) 0x80000000L);
}

/* {EV_INTERNAL_SILLY_WINDOW_IMP}.on_wm_vscroll */
void F1919_22843 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLIU(5);
	
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
			loc1 = RTRV(eif_new_type(1999, 0x00), loc1);
			if ((EIF_BOOLEAN)(loc1 != NULL)) {
				tr1 = *(EIF_REFERENCE *)(RTCW(loc1));
				if ((EIF_BOOLEAN)(tr1 != NULL)) {
					tr1 = (RTNA((RTCW(loc1))), ((EIF_REFERENCE) 0));
					{
						static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,1475,1508,0xFFFF};
						EIF_TYPE typres0;
						static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
						
						typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
						tr2 = RTLNTS(typres0.id, 2, 1);
					}
					tr3 = (RTNA((RTCW(loc1))), ((EIF_REFERENCE) 0));
					ti4_1 = (RTNA((RTCW(tr3))), ((EIF_INTEGER_32) 0));
					((EIF_TYPED_VALUE *)tr2+1)->it_i4 = ti4_1;
					F977_14409(RTCW(tr1), tr2);
				}
			}
		} else {
			ti4_1 = (EIF_INTEGER_32) GET_WM_VSCROLL_CODE(((WPARAM) arg1), ((LPARAM) arg2));
			ti4_2 = (EIF_INTEGER_32) cwin_get_wm_vscroll_pos(((WPARAM) arg1), ((LPARAM) arg2));
			F1913_22739(Current, ti4_1, ti4_2);
		}
	}
	RTLE;
}

/* {EV_INTERNAL_SILLY_WINDOW_IMP}.on_wm_hscroll */
void F1919_22844 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLIU(5);
	
	RTGC;
	if ((EIF_BOOLEAN)((EIF_INTEGER_32) LOWORD((arg1)) != ((EIF_INTEGER_32) 8L))) {
		loc2 = (EIF_POINTER) GET_WM_HSCROLL_HWND(((WPARAM) arg1), ((LPARAM) arg2));
		{
			/* INLINED CODE (ANY.default_pointer) */
			tp1 = (EIF_POINTER)  0;
			/* END INLINED CODE */
		}
		if ((EIF_BOOLEAN)(loc2 != tp1)) {
			loc1 = F1898_22150(Current, loc2);
			loc1 = RTRV(eif_new_type(1999, 0x00), loc1);
			if ((EIF_BOOLEAN)(loc1 != NULL)) {
				tr1 = *(EIF_REFERENCE *)(RTCW(loc1));
				if ((EIF_BOOLEAN)(tr1 != NULL)) {
					tr1 = (RTNA((RTCW(loc1))), ((EIF_REFERENCE) 0));
					{
						static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,1475,1508,0xFFFF};
						EIF_TYPE typres0;
						static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
						
						typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
						tr2 = RTLNTS(typres0.id, 2, 1);
					}
					tr3 = (RTNA((RTCW(loc1))), ((EIF_REFERENCE) 0));
					ti4_1 = (RTNA((RTCW(tr3))), ((EIF_INTEGER_32) 0));
					((EIF_TYPED_VALUE *)tr2+1)->it_i4 = ti4_1;
					F977_14409(RTCW(tr1), tr2);
				}
			}
		} else {
			ti4_1 = (EIF_INTEGER_32) GET_WM_HSCROLL_CODE(((WPARAM) arg1), ((LPARAM) arg2));
			ti4_2 = (EIF_INTEGER_32) cwin_get_wm_hscroll_pos(((WPARAM) arg1), ((LPARAM) arg2));
			F1913_22740(Current, ti4_1, ti4_2);
		}
	}
	RTLE;
}

/* {EV_INTERNAL_SILLY_WINDOW_IMP}.on_wm_notify */
void F1919_22845 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,loc3);
	RTLR(2,tr1);
	RTLR(3,Current);
	RTLR(4,loc4);
	RTLR(5,loc2);
	RTLIU(6);
	
	RTGC;
	loc1 = RTLNS(eif_new_type(1902, 0x01).id, 1902, _OBJSIZ_0_1_0_0_0_1_0_0_);
	F1296_15096(RTCW(loc1), arg2);
	tb1 = '\0';
	tr1 = F1903_22266(RTCW(loc1));
	loc3 = tr1;
	if (EIF_TEST(loc3)) {
		tb1 = F1919_22846(Current, loc3);
	}
	if (tb1) {
		F1913_22749(Current, arg1, arg2);
	} else {
		tr1 = F1903_22266(RTCW(loc1));
		loc4 = tr1;
		if (EIF_TEST(loc4)) {
			loc2 = *(EIF_REFERENCE *)(loc4 + O18635[Dtype(loc4)-1911]);
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc2 != NULL) && (EIF_BOOLEAN)(loc2 != Current))) {
				F214_11246(RTCW(loc2));
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_POINTER, EIF_POINTER)) R18797[Dtype(RTCW(loc2))-1914])(loc2, arg1, arg2);
				tb1 = F214_11241(RTCW(loc2));
				if (tb1) {
					tp1 = F214_11242(RTCW(loc2));
					F214_11244(Current, tp1);
				}
				F214_11247(RTCW(loc2));
			}
		}
	}
	RTLE;
}

/* {EV_INTERNAL_SILLY_WINDOW_IMP}.has_child */
EIF_BOOLEAN F1919_22846 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
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
		tp1 = *(EIF_POINTER *)(Current+ _PTROFF_7_2_0_2_0_0_);
		ti4_1 = (EIF_INTEGER_32) GW_CHILD;
		loc1 = (EIF_POINTER) GetWindow(((HWND) tp1), ((UINT) ti4_1));
		loc2 = *(EIF_POINTER *)(RTCW(arg1) + O12527[Dtype(arg1)-1295]);
		for (;;) {
			tb1 = '\01';
			{
				/* INLINED CODE (ANY.default_pointer) */
				tp1 = (EIF_POINTER)  0;
				/* END INLINED CODE */
			}
			if (!(EIF_BOOLEAN)(loc1 == tp1)) {
				tb1 = Result;
			}
			if (tb1) break;
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(loc2 == loc1);
			ti4_1 = (EIF_INTEGER_32) GW_HWNDNEXT;
			tp1 = (EIF_POINTER) GetWindow(((HWND) loc1), ((UINT) ti4_1));
			loc1 = (EIF_POINTER) tp1;
		}
	}
	RTLE;
	return Result;
}

/* {EV_INTERNAL_SILLY_WINDOW_IMP}.class_requires_icon */
EIF_BOOLEAN F1919_22847 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
}

void EIF_Minit1902 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
