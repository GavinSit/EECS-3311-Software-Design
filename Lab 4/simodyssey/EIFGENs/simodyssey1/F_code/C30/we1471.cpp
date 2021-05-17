/*
 * Code for class WEL_GDIP_GRAPHICS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1471.h"
#include "wel_gdi_plus.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F1332_15728
static EIF_POINTER inline_F1332_15728 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32* arg3)
{
	{
	static FARPROC GdipCreateFromHDC = NULL;
	GpGraphics *l_result = NULL;
	*(EIF_INTEGER *) arg3 = 1;
	
	if (!GdipCreateFromHDC) {
		GdipCreateFromHDC = GetProcAddress ((HMODULE) arg1, "GdipCreateFromHDC");
	}
	if (GdipCreateFromHDC) {
		*(EIF_INTEGER *) arg3 = (FUNCTION_CAST_TYPE (GpStatus, WINGDIPAPI, (HDC, GpGraphics **)) GdipCreateFromHDC)
					((HDC) arg2,
					(GpGraphics **) &l_result);
	}
	return (EIF_POINTER) l_result;
}
	;
}
#define INLINE_F1332_15728
#endif
#ifndef INLINE_F1332_15736
static void inline_F1332_15736 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3, EIF_INTEGER_32 arg4, EIF_INTEGER_32 arg5, EIF_INTEGER_32 arg6, EIF_INTEGER_32 arg7, EIF_INTEGER_32* arg8)
{
	{
	static FARPROC GdipDrawLineI = NULL;
	*(EIF_INTEGER *) arg8 = 1;
	
	if (!GdipDrawLineI) {
		GdipDrawLineI = GetProcAddress ((HMODULE) arg1, "GdipDrawLineI");
	}
	
	if (GdipDrawLineI) {			
		*(EIF_INTEGER *) arg8 = (FUNCTION_CAST_TYPE (GpStatus, WINGDIPAPI, (GpGraphics *, GpPen *, INT, INT, INT, INT)) GdipDrawLineI)
					((GpGraphics *) arg2,
					(GpPen *) arg3,
					(INT) arg4,
					(INT) arg5,
					(INT) arg6,
					(INT) arg7);
	}
}
	;
}
#define INLINE_F1332_15736
#endif
#ifndef INLINE_F1332_15735
static void inline_F1332_15735 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3, EIF_INTEGER_32 arg4, EIF_INTEGER_32 arg5, EIF_INTEGER_32 arg6, EIF_INTEGER_32 arg7, EIF_INTEGER_32 arg8, EIF_INTEGER_32 arg9, EIF_INTEGER_32 arg10, EIF_INTEGER_32 arg11, EIF_INTEGER_32 arg12, EIF_POINTER arg13, EIF_POINTER arg14, EIF_POINTER arg15, EIF_INTEGER_32* arg16)
{
	{
	static FARPROC GdipDrawImageRectRectI = NULL;
	*(EIF_INTEGER *) arg16 = 1;
	
	if (!GdipDrawImageRectRectI) {
		GdipDrawImageRectRectI = GetProcAddress ((HMODULE) arg1, "GdipDrawImageRectRectI");
	}
	if (GdipDrawImageRectRectI) {
		*(EIF_INTEGER *) arg16 = (FUNCTION_CAST_TYPE (GpStatus, WINGDIPAPI, (GpGraphics *, GpImage *, INT, INT, INT, INT, INT, INT, INT, INT, GpUnit, GDIPCONST GpImageAttributes*, DrawImageAbort, VOID *)) GdipDrawImageRectRectI)
					((GpGraphics *) arg2,
					(GpImage *) arg3,
					(INT) arg4,
					(INT) arg5,
					(INT) arg6,
					(INT) arg7,
					(INT) arg8,
					(INT) arg9,
					(INT) arg10,
					(INT) arg11,
					(GpUnit) arg12,
					(GDIPCONST GpImageAttributes*) arg13,
					(DrawImageAbort) arg14,
					(VOID *) arg15);
	}
}
	;
}
#define INLINE_F1332_15735
#endif
#ifndef INLINE_F1332_15742
static void inline_F1332_15742 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3, EIF_INTEGER_32 arg4, EIF_INTEGER_32 arg5, EIF_INTEGER_32 arg6, EIF_INTEGER_32 arg7, EIF_INTEGER_32* arg8)
{
	{
				static FARPROC GdipFillRectangleI = NULL;
				*(EIF_INTEGER *) arg8 = 1;

				if (!GdipFillRectangleI) {
					GdipFillRectangleI = GetProcAddress ((HMODULE) arg1, "GdipFillRectangleI");
				}
				if (GdipFillRectangleI) {
					*(EIF_INTEGER *) arg8 = (FUNCTION_CAST_TYPE (GpStatus, WINGDIPAPI, (GpGraphics *, GpBrush *, INT, INT, INT, INT)) GdipFillRectangleI)
								((GpGraphics *) arg2,
								(GpBrush *) arg3,
								(INT) arg4,
								(INT) arg5,
								(INT) arg6,
								(INT) arg7);
				}
			}
	;
}
#define INLINE_F1332_15742
#endif
#ifndef INLINE_F1332_15746
static void inline_F1332_15746 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_64 arg3, EIF_INTEGER_32* arg4)
{
	{
				static FARPROC GdipGraphicsClear = NULL;
				*(EIF_INTEGER *) arg4 = 1;

				if (!GdipGraphicsClear) {
					GdipGraphicsClear = GetProcAddress ((HMODULE) arg1, "GdipGraphicsClear");
				}
				if (GdipGraphicsClear) {
					*(EIF_INTEGER *) arg4 = (FUNCTION_CAST_TYPE (GpStatus, WINGDIPAPI, (GpGraphics *, ARGB)) GdipGraphicsClear)
								((GpGraphics *) arg2,
								(ARGB) arg3);
				}
			}
	;
}
#define INLINE_F1332_15746
#endif
#ifndef INLINE_F1332_15750
static void inline_F1332_15750 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32* arg4)
{
	{
				static FARPROC GdipSetSmoothingMode = NULL;
				*(EIF_INTEGER *) arg4 = 1;

				if (!GdipSetSmoothingMode) {
					GdipSetSmoothingMode = GetProcAddress ((HMODULE) arg1, "GdipSetSmoothingMode");
				}
				if (GdipSetSmoothingMode) {
					*(EIF_INTEGER *) arg4 = (FUNCTION_CAST_TYPE (GpStatus, WINGDIPAPI, (GpGraphics *, INT)) GdipSetSmoothingMode)
								((GpGraphics *) arg2,
								(INT) arg3);
				}
			}
	;
}
#define INLINE_F1332_15750
#endif
#ifndef INLINE_F1332_15732
static void inline_F1332_15732 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32* arg3)
{
	{
	static FARPROC GdipDeleteGraphics = NULL;
	*(EIF_INTEGER *) arg3 = 1;
	
	if (!GdipDeleteGraphics) {
		GdipDeleteGraphics = GetProcAddress ((HMODULE) arg1, "GdipDeleteGraphics");
	}
	
	if (GdipDeleteGraphics) {			
		*(EIF_INTEGER *) arg3 = (FUNCTION_CAST_TYPE (GpStatus, WINGDIPAPI, (GpGraphics *)) GdipDeleteGraphics)
					((GpGraphics *) arg2);
	}					
}
	;
}
#define INLINE_F1332_15732
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_GDIP_GRAPHICS}.make_from_dc */
void F1332_15700 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	F1325_15650(Current);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_1_);
	tp2 = *(EIF_POINTER *)(RTCW(arg1) + O12527[Dtype(arg1)-1295]);
	tp1 = inline_F1332_15728(tp1, tp2, (EIF_INTEGER_32 *) &(loc1));
	*(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_) = (EIF_POINTER) tp1;
	RTLE;
}

/* {WEL_GDIP_GRAPHICS}.draw_line */
void F1332_15702 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_INTEGER_32 arg5)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_1_);
	tp2 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	tp3 = *(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_0_1_0_0_0_0_);
	inline_F1332_15736(tp1, tp2, tp3, arg2, arg3, arg4, arg5, (EIF_INTEGER_32 *) &(loc1));
	RTLE;
}

/* {WEL_GDIP_GRAPHICS}.draw_image_with_src_rect_dest_rect_unit_attributes */
void F1332_15706 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3, EIF_INTEGER_32 arg4, EIF_REFERENCE arg5)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_POINTER tp4;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_INTEGER_32 ti4_6;
	EIF_INTEGER_32 ti4_7;
	EIF_INTEGER_32 ti4_8;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg5);
	RTLR(1,Current);
	RTLR(2,arg1);
	RTLR(3,arg2);
	RTLR(4,arg3);
	RTLIU(5);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg5 == NULL)) {
		tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_1_);
		tp2 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
		tp3 = *(EIF_POINTER *)(RTCW(arg1) + O12527[Dtype(arg1)-1295]);
		ti4_1 = F1408_17327(RTCW(arg2));
		ti4_2 = F1408_17329(RTCW(arg2));
		ti4_3 = F1408_17332(RTCW(arg2));
		ti4_4 = F1408_17333(RTCW(arg2));
		ti4_5 = F1408_17327(RTCW(arg3));
		ti4_6 = F1408_17329(RTCW(arg3));
		ti4_7 = F1408_17332(RTCW(arg3));
		ti4_8 = F1408_17333(RTCW(arg3));
		inline_F1332_15735(tp1, tp2, tp3, ti4_1, ti4_2, ti4_3, ti4_4, ti4_5, ti4_6, ti4_7, ti4_8, arg4, loc2, loc2, loc2, (EIF_INTEGER_32 *) &(loc1));
	} else {
		tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_1_);
		tp2 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
		tp3 = *(EIF_POINTER *)(RTCW(arg1) + O12527[Dtype(arg1)-1295]);
		ti4_1 = F1408_17327(RTCW(arg2));
		ti4_2 = F1408_17329(RTCW(arg2));
		ti4_3 = F1408_17332(RTCW(arg2));
		ti4_4 = F1408_17333(RTCW(arg2));
		ti4_5 = F1408_17327(RTCW(arg3));
		ti4_6 = F1408_17329(RTCW(arg3));
		ti4_7 = F1408_17332(RTCW(arg3));
		ti4_8 = F1408_17333(RTCW(arg3));
		tp4 = *(EIF_POINTER *)(RTCW(arg5)+ _PTROFF_0_1_0_0_0_0_);
		inline_F1332_15735(tp1, tp2, tp3, ti4_1, ti4_2, ti4_3, ti4_4, ti4_5, ti4_6, ti4_7, ti4_8, arg4, tp4, loc2, loc2, (EIF_INTEGER_32 *) &(loc1));
	}
	RTLE;
}

/* {WEL_GDIP_GRAPHICS}.fill_rectangle */
void F1332_15714 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,arg2);
	RTLIU(3);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_1_);
	tp2 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	tp3 = *(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_0_1_0_0_0_0_);
	ti4_1 = F37_9093(RTCW(arg2));
	ti4_2 = F37_9094(RTCW(arg2));
	ti4_3 = F37_9095(RTCW(arg2));
	ti4_4 = F37_9096(RTCW(arg2));
	inline_F1332_15742(tp1, tp2, tp3, ti4_1, ti4_2, ti4_3, ti4_4, (EIF_INTEGER_32 *) &(loc1));
	RTLE;
}

/* {WEL_GDIP_GRAPHICS}.clear */
void F1332_15718 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_INTEGER_64 ti8_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_1_);
	tp2 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	ti8_1 = *(EIF_INTEGER_64 *)(RTCW(arg1)+ _I64OFF_0_0_0_0_0_0_0_);
	inline_F1332_15746(tp1, tp2, ti8_1, (EIF_INTEGER_32 *) &(loc1));
	RTLE;
}

/* {WEL_GDIP_GRAPHICS}.set_smoothing_mode */
void F1332_15722 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_1_);
	tp2 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	inline_F1332_15750(tp1, tp2, arg1, (EIF_INTEGER_32 *) &(loc1));
}

/* {WEL_GDIP_GRAPHICS}.destroy_item */
void F1332_15726 (EIF_REFERENCE Current)
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
	{
		/* INLINED CODE (ANY.default_pointer) */
		tp1 = (EIF_POINTER)  0;
		/* END INLINED CODE */
	}
	if ((EIF_BOOLEAN)(*(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_) != tp1)) {
		tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_1_);
		tp2 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
		inline_F1332_15732(tp1, tp2, (EIF_INTEGER_32 *) &(loc1));
		{
			/* INLINED CODE (ANY.default_pointer) */
			tp1 = (EIF_POINTER)  0;
			/* END INLINED CODE */
		}
		tp2 = tp1;
		*(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_) = (EIF_POINTER) tp2;
	}
	RTLE;
}

/* {WEL_GDIP_GRAPHICS}.c_gdip_create_from_hdc */
EIF_POINTER F1332_15728 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32* arg3)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = inline_F1332_15728 ((EIF_POINTER) arg1, (EIF_POINTER) arg2, (EIF_INTEGER_32*) arg3);
	return Result;
}

/* {WEL_GDIP_GRAPHICS}.c_gdip_delete_graphics */
void F1332_15732 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32* arg3)
{
	GTCX
	
	
	inline_F1332_15732 ((EIF_POINTER) arg1, (EIF_POINTER) arg2, (EIF_INTEGER_32*) arg3);
}

/* {WEL_GDIP_GRAPHICS}.c_gdip_draw_image_rect_rect_i */
void F1332_15735 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3, EIF_INTEGER_32 arg4, EIF_INTEGER_32 arg5, EIF_INTEGER_32 arg6, EIF_INTEGER_32 arg7, EIF_INTEGER_32 arg8, EIF_INTEGER_32 arg9, EIF_INTEGER_32 arg10, EIF_INTEGER_32 arg11, EIF_INTEGER_32 arg12, EIF_POINTER arg13, EIF_POINTER arg14, EIF_POINTER arg15, EIF_INTEGER_32* arg16)
{
	GTCX
	
	
	inline_F1332_15735 ((EIF_POINTER) arg1, (EIF_POINTER) arg2, (EIF_POINTER) arg3, (EIF_INTEGER_32) arg4, (EIF_INTEGER_32) arg5, (EIF_INTEGER_32) arg6, (EIF_INTEGER_32) arg7, (EIF_INTEGER_32) arg8, (EIF_INTEGER_32) arg9, (EIF_INTEGER_32) arg10, (EIF_INTEGER_32) arg11, (EIF_INTEGER_32) arg12, (EIF_POINTER) arg13, (EIF_POINTER) arg14, (EIF_POINTER) arg15, (EIF_INTEGER_32*) arg16);
}

/* {WEL_GDIP_GRAPHICS}.c_gdip_draw_line_i */
void F1332_15736 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3, EIF_INTEGER_32 arg4, EIF_INTEGER_32 arg5, EIF_INTEGER_32 arg6, EIF_INTEGER_32 arg7, EIF_INTEGER_32* arg8)
{
	GTCX
	
	
	inline_F1332_15736 ((EIF_POINTER) arg1, (EIF_POINTER) arg2, (EIF_POINTER) arg3, (EIF_INTEGER_32) arg4, (EIF_INTEGER_32) arg5, (EIF_INTEGER_32) arg6, (EIF_INTEGER_32) arg7, (EIF_INTEGER_32*) arg8);
}

/* {WEL_GDIP_GRAPHICS}.c_gdip_fill_rectangle_i */
void F1332_15742 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3, EIF_INTEGER_32 arg4, EIF_INTEGER_32 arg5, EIF_INTEGER_32 arg6, EIF_INTEGER_32 arg7, EIF_INTEGER_32* arg8)
{
	GTCX
	
	
	inline_F1332_15742 ((EIF_POINTER) arg1, (EIF_POINTER) arg2, (EIF_POINTER) arg3, (EIF_INTEGER_32) arg4, (EIF_INTEGER_32) arg5, (EIF_INTEGER_32) arg6, (EIF_INTEGER_32) arg7, (EIF_INTEGER_32*) arg8);
}

/* {WEL_GDIP_GRAPHICS}.c_gdip_clear */
void F1332_15746 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_64 arg3, EIF_INTEGER_32* arg4)
{
	GTCX
	
	
	inline_F1332_15746 ((EIF_POINTER) arg1, (EIF_POINTER) arg2, (EIF_INTEGER_64) arg3, (EIF_INTEGER_32*) arg4);
}

/* {WEL_GDIP_GRAPHICS}.c_gdip_set_smoothing_mode */
void F1332_15750 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32* arg4)
{
	GTCX
	
	
	inline_F1332_15750 ((EIF_POINTER) arg1, (EIF_POINTER) arg2, (EIF_INTEGER_32) arg3, (EIF_INTEGER_32*) arg4);
}

void EIF_Minit1471 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
