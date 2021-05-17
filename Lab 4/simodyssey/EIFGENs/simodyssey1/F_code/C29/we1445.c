/*
 * Code for class WEL_DC
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1445.h"
#include <windows.h>
#include "wel_drawstate.h"
#include <wingdi.h>
#include <Windows.h>
#include "eif_misc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F1306_15362
static void inline_F1306_15362 (EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_INTEGER_32 arg5, EIF_POINTER arg6, EIF_INTEGER_32 arg7, EIF_INTEGER_32 arg8, EIF_INTEGER_32 arg9, EIF_INTEGER_32 arg10, EIF_POINTER arg11, EIF_INTEGER_32* arg12)
{
	FARPROC alpha_blend = NULL;
HMODULE user32_module = LoadLibrary (L"Msimg32.dll");
if (user32_module) {
	alpha_blend = GetProcAddress (user32_module, "AlphaBlend");
	if (alpha_blend) {
		*(EIF_INTEGER *) arg12 =
			(FUNCTION_CAST_TYPE(BOOL, WINAPI, (HDC, int, int, int, int, HDC, int, int, int, int, BLENDFUNCTION)) alpha_blend)
					((HDC) arg1,
					(int) arg2,
					(int) arg3,
					(int) arg4,
					(int) arg5,
					(HDC) arg6,
					(int) arg7,
					(int) arg8,
					(int) arg9,
					(int) arg10,
					*(BLENDFUNCTION*) arg11);
	}else
	{
		// There is no alpha blend function in the Dll.
	}				
}else
{
	// User does not have Msimg32.dll
}
	;
}
#define INLINE_F1306_15362
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_DC}.pen_selected */
EIF_BOOLEAN F1306_15207 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current) != NULL);
}

/* {WEL_DC}.brush_selected */
EIF_BOOLEAN F1306_15208 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) != NULL);
}

/* {WEL_DC}.palette_selected */
EIF_BOOLEAN F1306_15209 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_2_) != NULL);
}

/* {WEL_DC}.region_selected */
EIF_BOOLEAN F1306_15210 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_3_) != NULL);
}

/* {WEL_DC}.font_selected */
EIF_BOOLEAN F1306_15211 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_4_) != NULL);
}

/* {WEL_DC}.bitmap_selected */
EIF_BOOLEAN F1306_15212 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_5_) != NULL);
}

/* {WEL_DC}.text_color */
EIF_REFERENCE F1306_15216 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTGC;
	Result = RTLNS(eif_new_type(1828, 0x01).id, 1828, _OBJSIZ_0_0_0_1_0_0_0_0_);
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	ti4_1 = (EIF_INTEGER_32) GetTextColor(((HDC) tp1));
	F1829_20491(RTCW(Result), ti4_1);
	RTLE;
	return Result;
}

/* {WEL_DC}.string_size */
EIF_REFERENCE F1306_15225 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLR(3,Result);
	RTLIU(4);
	
	RTGC;
	loc1 = F468_13506(Current, arg1);
	Result = RTLNS(eif_new_type(1404, 0x01).id, 1404, _OBJSIZ_0_1_0_0_0_1_0_0_);
	F1405_17171(RTCW(Result), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L));
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	tp2 = F944_3745(RTCW(loc1));
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_1_0_0_0_);
	tp3 = *(EIF_POINTER *)(RTCW(Result)+ _PTROFF_0_1_0_0_0_0_);
	GetTextExtentPoint32(((HDC) tp1), ((LPCTSTR) tp2), ((int) ti4_1), ((LPSIZE) tp3));
	RTLE;
	return Result;
}

/* {WEL_DC}.tabbed_text_size */
EIF_REFERENCE F1306_15229 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_POINTER loc3 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLR(3,Result);
	RTLIU(4);
	
	RTGC;
	loc1 = F468_13506(Current, arg1);
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	tp2 = F944_3745(RTCW(loc1));
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_1_0_0_0_);
	loc2 = (EIF_INTEGER_32) GetTabbedTextExtent(((HDC) tp1), ((LPCTSTR) tp2), ((int) ti4_1), ((int) ((EIF_INTEGER_32) 0L)), ((LPINT) loc3));
	Result = RTLNS(eif_new_type(1404, 0x01).id, 1404, _OBJSIZ_0_1_0_0_0_1_0_0_);
	ti4_1 = eif_bit_and(loc2,((EIF_INTEGER_32) 65535L));
	ti4_2 = eif_bit_shift_right(loc2,((EIF_INTEGER_32) 16L));
	ti4_2 = eif_bit_and((ti4_2),((EIF_INTEGER_32) 65535L));
	F1405_17171(RTCW(Result), ti4_1, ti4_2);
	RTLE;
	return Result;
}

/* {WEL_DC}.device_caps */
EIF_INTEGER_32 F1306_15234 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	return (EIF_INTEGER_32) (EIF_INTEGER_32) GetDeviceCaps(((HDC) tp1), ((int) arg1));
}

/* {WEL_DC}.width */
EIF_INTEGER_32 F1306_15240 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) F1306_15234(Current, ((EIF_INTEGER_32) 8L));
}

/* {WEL_DC}.height */
EIF_INTEGER_32 F1306_15241 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) F1306_15234(Current, ((EIF_INTEGER_32) 10L));
}

/* {WEL_DC}.set_viewport_origin */
void F1306_15251 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	SetViewportOrgEx(((HDC) tp1), ((int) arg1), ((int) arg2), ((LPPOINT) loc1));
}

/* {WEL_DC}.set_background_color */
void F1306_15252 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O17154[Dtype(arg1)-1828]);
	SetBkColor(((HDC) tp1), ((COLORREF) ti4_1));
	RTLE;
}

/* {WEL_DC}.set_text_color */
void F1306_15253 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O17154[Dtype(arg1)-1828]);
	SetTextColor(((HDC) tp1), ((COLORREF) ti4_1));
	RTLE;
}

/* {WEL_DC}.set_background_opaque */
void F1306_15254 (EIF_REFERENCE Current)
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
	ti4_1 = (EIF_INTEGER_32) OPAQUE;
	SetBkMode(((HDC) tp1), ((int) ti4_1));
	RTLE;
}

/* {WEL_DC}.set_background_transparent */
void F1306_15255 (EIF_REFERENCE Current)
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
	ti4_1 = (EIF_INTEGER_32) TRANSPARENT;
	SetBkMode(((HDC) tp1), ((int) ti4_1));
	RTLE;
}

/* {WEL_DC}.set_rop2 */
void F1306_15256 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	SetROP2(((HDC) tp1), ((int) arg1));
}

/* {WEL_DC}.set_stretch_blt_mode */
void F1306_15257 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	SetStretchBltMode(((HDC) tp1), ((int) arg1));
}

/* {WEL_DC}.select_palette */
void F1306_15260 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	if (F1306_15209(Current)) {
		tp1 = *(EIF_POINTER *)(Current + O12527[dtype-1295]);
		tp2 = *(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_0_2_0_3_0_0_);
		SelectPalette(((HDC) tp1), ((HPALETTE) tp2), ((BOOL) (EIF_BOOLEAN) 0));
	} else {
		tp1 = *(EIF_POINTER *)(Current + O12527[dtype-1295]);
		tp2 = *(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_0_2_0_3_0_0_);
		tp1 = (EIF_POINTER) SelectPalette(((HDC) tp1), ((HPALETTE) tp2), ((BOOL) (EIF_BOOLEAN) 0));
		*(EIF_POINTER *)(Current + O12751[dtype-1305]) = (EIF_POINTER) tp1;
	}
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) arg1;
	RTLE;
}

/* {WEL_DC}.select_pen */
void F1306_15261 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	if (F1306_15207(Current)) {
		tp1 = *(EIF_POINTER *)(Current + O12527[dtype-1295]);
		tp2 = *(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_0_2_0_3_0_0_);
		SelectObject(((HDC) tp1), ((HGDIOBJ) tp2));
	} else {
		tp1 = *(EIF_POINTER *)(Current + O12527[dtype-1295]);
		tp2 = *(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_0_2_0_3_0_0_);
		tp1 = (EIF_POINTER) SelectObject(((HDC) tp1), ((HGDIOBJ) tp2));
		*(EIF_POINTER *)(Current + O12748[dtype-1305]) = (EIF_POINTER) tp1;
	}
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
	RTLE;
}

/* {WEL_DC}.select_brush */
void F1306_15262 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	if (F1306_15208(Current)) {
		tp1 = *(EIF_POINTER *)(Current + O12527[dtype-1295]);
		tp2 = *(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_0_2_0_3_0_0_);
		SelectObject(((HDC) tp1), ((HGDIOBJ) tp2));
	} else {
		tp1 = *(EIF_POINTER *)(Current + O12527[dtype-1295]);
		tp2 = *(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_0_2_0_3_0_0_);
		tp1 = (EIF_POINTER) SelectObject(((HDC) tp1), ((HGDIOBJ) tp2));
		*(EIF_POINTER *)(Current + O12749[dtype-1305]) = (EIF_POINTER) tp1;
	}
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) arg1;
	RTLE;
}

/* {WEL_DC}.select_font */
void F1306_15264 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	if (F1306_15211(Current)) {
		tp1 = *(EIF_POINTER *)(Current + O12527[dtype-1295]);
		tp2 = *(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_0_2_0_3_0_0_);
		SelectObject(((HDC) tp1), ((HGDIOBJ) tp2));
	} else {
		tp1 = *(EIF_POINTER *)(Current + O12527[dtype-1295]);
		tp2 = *(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_0_2_0_3_0_0_);
		tp1 = (EIF_POINTER) SelectObject(((HDC) tp1), ((HGDIOBJ) tp2));
		*(EIF_POINTER *)(Current + O12752[dtype-1305]) = (EIF_POINTER) tp1;
	}
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_4_) = (EIF_REFERENCE) arg1;
	RTLE;
}

/* {WEL_DC}.select_bitmap */
void F1306_15265 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	if (F1306_15212(Current)) {
		tp1 = *(EIF_POINTER *)(Current + O12527[dtype-1295]);
		tp2 = *(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_0_3_0_3_0_0_);
		SelectObject(((HDC) tp1), ((HGDIOBJ) tp2));
	} else {
		tp1 = *(EIF_POINTER *)(Current + O12527[dtype-1295]);
		tp2 = *(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_0_3_0_3_0_0_);
		tp1 = (EIF_POINTER) SelectObject(((HDC) tp1), ((HGDIOBJ) tp2));
		*(EIF_POINTER *)(Current + O12753[dtype-1305]) = (EIF_POINTER) tp1;
	}
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_5_) = (EIF_REFERENCE) arg1;
	RTLE;
}

/* {WEL_DC}.unselect_pen */
void F1306_15266 (EIF_REFERENCE Current)
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
	tp2 = *(EIF_POINTER *)(Current + O12748[dtype-1305]);
	SelectObject(((HDC) tp1), ((HGDIOBJ) tp2));
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) NULL;
	RTLE;
}

/* {WEL_DC}.unselect_brush */
void F1306_15267 (EIF_REFERENCE Current)
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
	tp2 = *(EIF_POINTER *)(Current + O12749[dtype-1305]);
	SelectObject(((HDC) tp1), ((HGDIOBJ) tp2));
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) NULL;
	RTLE;
}

/* {WEL_DC}.unselect_region */
void F1306_15268 (EIF_REFERENCE Current)
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
	tp2 = *(EIF_POINTER *)(Current + O12750[dtype-1305]);
	SelectObject(((HDC) tp1), ((HGDIOBJ) tp2));
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) NULL;
	RTLE;
}

/* {WEL_DC}.unselect_palette */
void F1306_15269 (EIF_REFERENCE Current)
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
	tp2 = *(EIF_POINTER *)(Current + O12751[dtype-1305]);
	SelectPalette(((HDC) tp1), ((HPALETTE) tp2), ((BOOL) (EIF_BOOLEAN) 0));
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) NULL;
	RTLE;
}

/* {WEL_DC}.unselect_font */
void F1306_15270 (EIF_REFERENCE Current)
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
	tp2 = *(EIF_POINTER *)(Current + O12752[dtype-1305]);
	SelectObject(((HDC) tp1), ((HGDIOBJ) tp2));
	*(EIF_REFERENCE *)(Current + _REFACS_4_) = (EIF_REFERENCE) NULL;
	RTLE;
}

/* {WEL_DC}.unselect_bitmap */
void F1306_15271 (EIF_REFERENCE Current)
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
	tp2 = *(EIF_POINTER *)(Current + O12753[dtype-1305]);
	SelectObject(((HDC) tp1), ((HGDIOBJ) tp2));
	*(EIF_REFERENCE *)(Current + _REFACS_5_) = (EIF_REFERENCE) NULL;
	RTLE;
}

/* {WEL_DC}.unselect_all */
void F1306_15272 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if (F1306_15207(Current)) {
		F1306_15266(Current);
	}
	if (F1306_15208(Current)) {
		F1306_15267(Current);
	}
	if (F1306_15210(Current)) {
		F1306_15268(Current);
	}
	if (F1306_15209(Current)) {
		F1306_15269(Current);
	}
	if (F1306_15211(Current)) {
		F1306_15270(Current);
	}
	if (F1306_15212(Current)) {
		F1306_15271(Current);
	}
	RTLE;
}

/* {WEL_DC}.select_clip_region */
void F1306_15274 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
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
	SelectClipRgn(((HDC) tp1), ((HRGN) tp2));
	RTLE;
}

/* {WEL_DC}.remove_clip_region */
void F1306_15275 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	SelectClipRgn(((HDC) tp1), ((HRGN) loc1));
}

/* {WEL_DC}.draw_text */
void F1306_15278 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	
	
	loc1 = F1306_15279(Current, arg1, arg2, arg3);
}

/* {WEL_DC}.draw_text_with_result */
EIF_INTEGER_32 F1306_15279 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLR(3,arg2);
	RTLIU(4);
	
	RTGC;
	loc1 = F468_13506(Current, arg1);
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	tp2 = F944_3745(RTCW(loc1));
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_1_0_0_0_);
	tp3 = *(EIF_POINTER *)(RTCW(arg2)+ _PTROFF_0_1_0_0_0_0_);
	Result = (EIF_INTEGER_32) DrawText(((HDC) tp1), ((LPCTSTR) tp2), ((int) ti4_1), ((LPRECT) tp3), ((UINT) arg3));
	RTLE;
	return Result;
}

/* {WEL_DC}.draw_disabled_text */
void F1306_15280 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLR(3,arg2);
	RTLIU(4);
	
	RTGC;
	loc1 = F468_13506(Current, arg1);
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	tp2 = F944_3745(RTCW(loc1));
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_1_0_0_0_);
	tp3 = *(EIF_POINTER *)(RTCW(arg2)+ _PTROFF_0_1_0_0_0_0_);
	cwin_draw_disabled_text((HDC) tp1, (LPCTSTR) tp2, (int) ti4_1, (LPRECT) tp3, (UINT) arg3);
	RTLE;
}

/* {WEL_DC}.draw_state_bitmap */
void F1306_15283 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_INTEGER_32 arg5)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,arg2);
	RTLIU(3);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		loc1 = *(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_0_2_0_3_0_0_);
	}
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	tp2 = *(EIF_POINTER *)(RTCW(arg2)+ _PTROFF_0_3_0_3_0_0_);
	ti4_1 = eif_bit_or(arg5,((EIF_INTEGER_32) 4L));
	loc3 = (EIF_INTEGER_32) DrawState(((HDC) tp1), ((HBRUSH) loc1), ((DRAWSTATEPROC) loc2), ((LPARAM) tp2), ((WPARAM) ((EIF_INTEGER_32) 0L)), ((int) arg3), ((int) arg4), ((int) ((EIF_INTEGER_32) 0L)), ((int) ((EIF_INTEGER_32) 0L)), ((UINT) ti4_1));
	RTLE;
}

/* {WEL_DC}.draw_state_icon */
void F1306_15284 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_INTEGER_32 arg5)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,arg2);
	RTLIU(3);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		loc1 = *(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_0_2_0_3_0_0_);
	}
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	tp2 = *(EIF_POINTER *)(RTCW(arg2)+ _PTROFF_0_2_0_3_0_0_);
	ti4_1 = eif_bit_or(arg5,((EIF_INTEGER_32) 3L));
	loc3 = (EIF_INTEGER_32) DrawState(((HDC) tp1), ((HBRUSH) loc1), ((DRAWSTATEPROC) loc2), ((LPARAM) tp2), ((WPARAM) ((EIF_INTEGER_32) 0L)), ((int) arg3), ((int) arg4), ((int) ((EIF_INTEGER_32) 0L)), ((int) ((EIF_INTEGER_32) 0L)), ((UINT) ti4_1));
	RTLE;
}

/* {WEL_DC}.draw_icon_ex */
void F1306_15288 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_INTEGER_32 arg5, EIF_INTEGER_32 arg6, EIF_REFERENCE arg7, EIF_INTEGER_32 arg8)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg7);
	RTLR(1,Current);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg7 != NULL)) {
		loc1 = *(EIF_POINTER *)(RTCW(arg7)+ _PTROFF_0_2_0_3_0_0_);
	}
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	tp2 = *(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_0_2_0_3_0_0_);
	DrawIconEx(((HDC) tp1), ((int) arg2), ((int) arg3), ((HICON) tp2), ((int) arg4), ((int) arg5), ((UINT) arg6), ((HBRUSH) loc1), ((UINT) arg8));
	RTLE;
}

/* {WEL_DC}.draw_edge */
void F1306_15290 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	tp2 = *(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_0_1_0_0_0_0_);
	DrawEdge(((HDC) tp1), ((LPRECT) tp2), ((UINT) arg2), ((UINT) arg3));
	RTLE;
}

/* {WEL_DC}.draw_frame_control */
void F1306_15291 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	tp2 = *(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_0_1_0_0_0_0_);
	DrawFrameControl(((HDC) tp1), ((LPRECT) tp2), ((UINT) arg2), ((UINT) arg3));
	RTLE;
}

/* {WEL_DC}.set_pixel */
void F1306_15292 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_REFERENCE arg3)
{
	GTCX
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg3);
	RTLIU(2);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg3) + O17154[Dtype(arg3)-1828]);
	SetPixel(((HDC) tp1), ((int) arg1), ((int) arg2), ((COLORREF) ti4_1));
	RTLE;
}

/* {WEL_DC}.line */
void F1306_15293 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1306_15296(Current, arg1, arg2);
	F1306_15295(Current, arg3, arg4);
	RTLE;
}

/* {WEL_DC}.line_to */
void F1306_15295 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	LineTo(((HDC) tp1), ((int) arg1), ((int) arg2));
}

/* {WEL_DC}.move_to */
void F1306_15296 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	MoveToEx(((HDC) tp1), ((int) arg1), ((int) arg2), ((LPPOINT) loc1));
}

/* {WEL_DC}.fill_rect */
void F1306_15298 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,arg2);
	RTLIU(3);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	tp2 = *(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_0_1_0_0_0_0_);
	tp3 = *(EIF_POINTER *)(RTCW(arg2)+ _PTROFF_0_2_0_3_0_0_);
	FillRect(((HDC) tp1), ((RECT *) tp2), ((HBRUSH) tp3));
	RTLE;
}

/* {WEL_DC}.fill_region */
void F1306_15299 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,arg2);
	RTLIU(3);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	tp2 = *(EIF_POINTER *)(RTCW(arg1) + O12527[Dtype(arg1)-1295]);
	tp3 = *(EIF_POINTER *)(RTCW(arg2)+ _PTROFF_0_2_0_3_0_0_);
	FillRgn(((HDC) tp1), ((HRGN) tp2), ((HBRUSH) tp3));
	RTLE;
}

/* {WEL_DC}.bit_blt */
void F1306_15311 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_REFERENCE arg5, EIF_INTEGER_32 arg6, EIF_INTEGER_32 arg7, EIF_INTEGER_32 arg8)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg5);
	RTLIU(2);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	tp2 = *(EIF_POINTER *)(RTCW(arg5) + O12527[Dtype(arg5)-1295]);
	BitBlt(((HDC) tp1), ((int) arg1), ((int) arg2), ((int) arg3), ((int) arg4), ((HDC) tp2), ((int) arg6), ((int) arg7), ((DWORD) arg8));
	RTLE;
}

/* {WEL_DC}.alpha_blend */
EIF_BOOLEAN F1306_15312 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_REFERENCE arg5, EIF_INTEGER_32 arg6, EIF_INTEGER_32 arg7, EIF_INTEGER_32 arg8, EIF_INTEGER_32 arg9, EIF_REFERENCE arg10)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,arg5);
	RTLR(3,arg10);
	RTLIU(4);
	
	RTGC;
	loc2 = RTLNS(eif_new_type(53, 0x01).id, 53, _OBJSIZ_0_0_0_0_0_0_0_0_);
	F54_9291(RTCW(loc2));
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	tp2 = *(EIF_POINTER *)(RTCW(arg5) + O12527[Dtype(arg5)-1295]);
	tp3 = *(EIF_POINTER *)(RTCW(arg10)+ _PTROFF_0_1_0_0_0_0_);
	inline_F1306_15362(tp1, arg1, arg2, arg3, arg4, tp2, arg6, arg7, arg8, arg9, tp3, (EIF_INTEGER_32 *) &(loc1));
	tb1 = '\0';
	if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 0L))) {
		ti4_1 = F54_9288(RTCW(loc2));
		tb1 = (EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L));
	}
	if (tb1) {
		RTLE;
		return (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	} else {
		RTLE;
		return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}/* NOTREACHED */
	
}

/* {WEL_DC}.mask_blt */
void F1306_15313 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_REFERENCE arg5, EIF_INTEGER_32 arg6, EIF_INTEGER_32 arg7, EIF_REFERENCE arg8, EIF_INTEGER_32 arg9, EIF_INTEGER_32 arg10, EIF_INTEGER_32 arg11)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg5);
	RTLR(1,Current);
	RTLR(2,arg8);
	RTLIU(3);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg5 != NULL)) {
		loc1 = *(EIF_POINTER *)(RTCW(arg5) + O12527[Dtype(arg5)-1295]);
	}
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	tp2 = *(EIF_POINTER *)(RTCW(arg8)+ _PTROFF_0_3_0_3_0_0_);
	MaskBlt(((HDC) tp1), ((int) arg1), ((int) arg2), ((int) arg3), ((int) arg4), ((HDC) loc1), ((int) arg6), ((int) arg7), ((HBITMAP) tp2), ((int) arg9), ((int) arg10), ((DWORD) arg11));
	RTLE;
}

/* {WEL_DC}.stretch_blt */
void F1306_15315 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_REFERENCE arg5, EIF_INTEGER_32 arg6, EIF_INTEGER_32 arg7, EIF_INTEGER_32 arg8, EIF_INTEGER_32 arg9, EIF_INTEGER_32 arg10)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg5);
	RTLIU(2);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	tp2 = *(EIF_POINTER *)(RTCW(arg5) + O12527[Dtype(arg5)-1295]);
	StretchBlt(((HDC) tp1), ((int) arg1), ((int) arg2), ((int) arg3), ((int) arg4), ((HDC) tp2), ((int) arg6), ((int) arg7), ((int) arg8), ((int) arg9), ((DWORD) arg10));
	RTLE;
}

/* {WEL_DC}.pat_blt */
void F1306_15317 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_INTEGER_32 arg5)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	PatBlt(((HDC) tp1), ((int) arg1), ((int) arg2), ((int) arg3), ((int) arg4), ((DWORD) arg5));
}

/* {WEL_DC}.di_bits_pointer */
EIF_REFERENCE F1306_15321 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_REFERENCE arg4, EIF_INTEGER_32 arg5)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_POINTER tp4;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(5);
	RTLR(0,arg4);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,Current);
	RTLR(4,arg1);
	RTLIU(5);
	
	RTGC;
	Result = RTLNS(eif_new_type(1283, 0x01).id, 1283, _OBJSIZ_0_1_0_1_0_1_1_0_);
	tr1 = F1401_17040(RTCW(arg4));
	ti4_1 = F1403_17086(RTCW(tr1));
	F1284_4468(RTCW(Result), ti4_1);
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	tp2 = *(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_0_3_0_3_0_0_);
	tp3 = *(EIF_POINTER *)(RTCW(Result)+ _PTROFF_0_1_0_1_0_0_);
	tp4 = *(EIF_POINTER *)(RTCW(arg4)+ _PTROFF_0_1_0_1_0_0_);
	loc1 = (EIF_INTEGER_32) GetDIBits(((HDC) tp1), ((HBITMAP) tp2), ((UINT) arg2), ((UINT) arg3), ((VOID*) tp3), ((BITMAPINFO*) tp4), ((UINT) arg5));
	RTLE;
	return Result;
}

/* {WEL_DC}.destroy_item */
void F1306_15324 (EIF_REFERENCE Current)
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
	if ((EIF_BOOLEAN)(*(EIF_POINTER *)(Current + O12527[dtype-1295]) != loc1)) {
		F1306_15272(Current);
		tp1 = *(EIF_POINTER *)(Current + O12527[dtype-1295]);
		DeleteDC(((HDC) tp1));
		*(EIF_POINTER *)(Current + O12527[dtype-1295]) = (EIF_POINTER) loc1;
	}
	RTLE;
}

/* {WEL_DC}.cwin_draw_state */
EIF_INTEGER_32 F1306_15337 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3, EIF_POINTER arg4, EIF_INTEGER_32 arg5, EIF_INTEGER_32 arg6, EIF_INTEGER_32 arg7, EIF_INTEGER_32 arg8, EIF_INTEGER_32 arg9, EIF_INTEGER_32 arg10)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) DrawState(((HDC) arg1), ((HBRUSH) arg2), ((DRAWSTATEPROC) arg3), ((LPARAM) arg4), ((WPARAM) arg5), ((int) arg6), ((int) arg7), ((int) arg8), ((int) arg9), ((UINT) arg10));
	return Result;
}

/* {WEL_DC}.cwin_draw_icon_ex */
void F1306_15339 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_POINTER arg4, EIF_INTEGER_32 arg5, EIF_INTEGER_32 arg6, EIF_INTEGER_32 arg7, EIF_POINTER arg8, EIF_INTEGER_32 arg9)
{
	GTCX
	
	
	DrawIconEx(((HDC) arg1), ((int) arg2), ((int) arg3), ((HICON) arg4), ((int) arg5), ((int) arg6), ((UINT) arg7), ((HBRUSH) arg8), ((UINT) arg9));
}

/* {WEL_DC}.cwin_draw_edge */
void F1306_15340 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	
	
	DrawEdge(((HDC) arg1), ((LPRECT) arg2), ((UINT) arg3), ((UINT) arg4));
}

/* {WEL_DC}.cwin_draw_frame_control */
void F1306_15341 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	
	
	DrawFrameControl(((HDC) arg1), ((LPRECT) arg2), ((UINT) arg3), ((UINT) arg4));
}

/* {WEL_DC}.cwin_set_pixel */
void F1306_15342 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	
	
	SetPixel(((HDC) arg1), ((int) arg2), ((int) arg3), ((COLORREF) arg4));
}

/* {WEL_DC}.cwin_move_to_ex */
void F1306_15344 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_POINTER arg4)
{
	GTCX
	
	
	MoveToEx(((HDC) arg1), ((int) arg2), ((int) arg3), ((LPPOINT) arg4));
}

/* {WEL_DC}.cwin_line_to */
void F1306_15345 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	
	
	LineTo(((HDC) arg1), ((int) arg2), ((int) arg3));
}

/* {WEL_DC}.cwin_fill_rect */
void F1306_15350 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3)
{
	GTCX
	
	
	FillRect(((HDC) arg1), ((RECT *) arg2), ((HBRUSH) arg3));
}

/* {WEL_DC}.cwin_fill_region */
void F1306_15351 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3)
{
	GTCX
	
	
	FillRgn(((HDC) arg1), ((HRGN) arg2), ((HBRUSH) arg3));
}

/* {WEL_DC}.cwin_bit_blt */
void F1306_15361 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_INTEGER_32 arg5, EIF_POINTER arg6, EIF_INTEGER_32 arg7, EIF_INTEGER_32 arg8, EIF_INTEGER_32 arg9)
{
	GTCX
	
	
	BitBlt(((HDC) arg1), ((int) arg2), ((int) arg3), ((int) arg4), ((int) arg5), ((HDC) arg6), ((int) arg7), ((int) arg8), ((DWORD) arg9));
}

/* {WEL_DC}.cwin_alpha_blend */
void F1306_15362 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_INTEGER_32 arg5, EIF_POINTER arg6, EIF_INTEGER_32 arg7, EIF_INTEGER_32 arg8, EIF_INTEGER_32 arg9, EIF_INTEGER_32 arg10, EIF_POINTER arg11, EIF_INTEGER_32* arg12)
{
	GTCX
	
	
	inline_F1306_15362 ((EIF_POINTER) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3, (EIF_INTEGER_32) arg4, (EIF_INTEGER_32) arg5, (EIF_POINTER) arg6, (EIF_INTEGER_32) arg7, (EIF_INTEGER_32) arg8, (EIF_INTEGER_32) arg9, (EIF_INTEGER_32) arg10, (EIF_POINTER) arg11, (EIF_INTEGER_32*) arg12);
}

/* {WEL_DC}.cwin_stretch_blt */
void F1306_15364 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_INTEGER_32 arg5, EIF_POINTER arg6, EIF_INTEGER_32 arg7, EIF_INTEGER_32 arg8, EIF_INTEGER_32 arg9, EIF_INTEGER_32 arg10, EIF_INTEGER_32 arg11)
{
	GTCX
	
	
	StretchBlt(((HDC) arg1), ((int) arg2), ((int) arg3), ((int) arg4), ((int) arg5), ((HDC) arg6), ((int) arg7), ((int) arg8), ((int) arg9), ((int) arg10), ((DWORD) arg11));
}

/* {WEL_DC}.cwin_set_stretch_blt_mode */
void F1306_15365 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	SetStretchBltMode(((HDC) arg1), ((int) arg2));
}

/* {WEL_DC}.cwin_pat_blt */
void F1306_15366 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_INTEGER_32 arg5, EIF_INTEGER_32 arg6)
{
	GTCX
	
	
	PatBlt(((HDC) arg1), ((int) arg2), ((int) arg3), ((int) arg4), ((int) arg5), ((DWORD) arg6));
}

/* {WEL_DC}.cwin_select_palette */
void F1306_15368 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_BOOLEAN arg3)
{
	GTCX
	
	
	SelectPalette(((HDC) arg1), ((HPALETTE) arg2), ((BOOL) arg3));
}

/* {WEL_DC}.cwin_select_palette_result */
EIF_POINTER F1306_15369 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_BOOLEAN arg3)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = (EIF_POINTER) SelectPalette(((HDC) arg1), ((HPALETTE) arg2), ((BOOL) arg3));
	return Result;
}

/* {WEL_DC}.cwin_select_object_result */
EIF_POINTER F1306_15370 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = (EIF_POINTER) SelectObject(((HDC) arg1), ((HGDIOBJ) arg2));
	return Result;
}

/* {WEL_DC}.cwin_select_object */
void F1306_15371 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	
	SelectObject(((HDC) arg1), ((HGDIOBJ) arg2));
}

/* {WEL_DC}.cwin_select_clip_rgn */
void F1306_15372 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	
	SelectClipRgn(((HDC) arg1), ((HRGN) arg2));
}

/* {WEL_DC}.cwin_delete_dc */
void F1306_15374 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	
	DeleteDC(((HDC) arg1));
}

/* {WEL_DC}.cwin_set_viewport_org_ex */
void F1306_15385 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_POINTER arg4)
{
	GTCX
	
	
	SetViewportOrgEx(((HDC) arg1), ((int) arg2), ((int) arg3), ((LPPOINT) arg4));
}

/* {WEL_DC}.cwin_set_bk_mode */
void F1306_15386 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	SetBkMode(((HDC) arg1), ((int) arg2));
}

/* {WEL_DC}.cwin_set_bk_color */
void F1306_15388 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	SetBkColor(((HDC) arg1), ((COLORREF) arg2));
}

/* {WEL_DC}.cwin_set_text_color */
void F1306_15390 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	SetTextColor(((HDC) arg1), ((COLORREF) arg2));
}

/* {WEL_DC}.cwin_get_text_color */
EIF_INTEGER_32 F1306_15391 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) GetTextColor(((HDC) arg1));
	return Result;
}

/* {WEL_DC}.cwin_set_rop2 */
void F1306_15392 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	SetROP2(((HDC) arg1), ((int) arg2));
}

/* {WEL_DC}.cwin_get_tabbed_text_extent */
EIF_INTEGER_32 F1306_15395 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_POINTER arg5)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) GetTabbedTextExtent(((HDC) arg1), ((LPCTSTR) arg2), ((int) arg3), ((int) arg4), ((LPINT) arg5));
	return Result;
}

/* {WEL_DC}.cwin_get_text_extend_point */
void F1306_15396 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3, EIF_POINTER arg4)
{
	GTCX
	
	
	GetTextExtentPoint32(((HDC) arg1), ((LPCTSTR) arg2), ((int) arg3), ((LPSIZE) arg4));
}

/* {WEL_DC}.cwin_device_caps */
EIF_INTEGER_32 F1306_15397 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) GetDeviceCaps(((HDC) arg1), ((int) arg2));
	return Result;
}

/* {WEL_DC}.cwin_get_di_bits */
EIF_INTEGER_32 F1306_15404 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_POINTER arg5, EIF_POINTER arg6, EIF_INTEGER_32 arg7)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) GetDIBits(((HDC) arg1), ((HBITMAP) arg2), ((UINT) arg3), ((UINT) arg4), ((VOID*) arg5), ((BITMAPINFO*) arg6), ((UINT) arg7));
	return Result;
}

/* {WEL_DC}.opaque */
EIF_INTEGER_32 F1306_15406 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) OPAQUE;
	return Result;
}

/* {WEL_DC}.transparent */
EIF_INTEGER_32 F1306_15407 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) TRANSPARENT;
	return Result;
}

/* {WEL_DC}.cwin_draw_disabled_text */
void F1306_15409 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3, EIF_POINTER arg4, EIF_INTEGER_32 arg5)
{
	GTCX
	
	cwin_draw_disabled_text((HDC) arg1, (LPCTSTR) arg2, (int) arg3, (LPRECT) arg4, (UINT) arg5);
	
}

/* {WEL_DC}.cwin_mask_blt */
void F1306_15410 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_INTEGER_32 arg5, EIF_POINTER arg6, EIF_INTEGER_32 arg7, EIF_INTEGER_32 arg8, EIF_POINTER arg9, EIF_INTEGER_32 arg10, EIF_INTEGER_32 arg11, EIF_INTEGER_32 arg12)
{
	GTCX
	
	
	MaskBlt(((HDC) arg1), ((int) arg2), ((int) arg3), ((int) arg4), ((int) arg5), ((HDC) arg6), ((int) arg7), ((int) arg8), ((HBITMAP) arg9), ((int) arg10), ((int) arg11), ((DWORD) arg12));
}

/* {WEL_DC}.cwin_draw_text */
EIF_INTEGER_32 F1306_15411 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3, EIF_POINTER arg4, EIF_INTEGER_32 arg5)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) DrawText(((HDC) arg1), ((LPCTSTR) arg2), ((int) arg3), ((LPRECT) arg4), ((UINT) arg5));
	return Result;
}

/* {WEL_DC}.cwel_get_char_abc_widths */
void F1306_15412 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_NATURAL_32 arg2, EIF_NATURAL_32 arg3, EIF_POINTER arg4)
{
	GTCX
	
	
	GetCharABCWidths(((HDC) arg1), ((UINT) arg2), ((UINT) arg3), ((LPABC) arg4));
}

void EIF_Minit1445 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
