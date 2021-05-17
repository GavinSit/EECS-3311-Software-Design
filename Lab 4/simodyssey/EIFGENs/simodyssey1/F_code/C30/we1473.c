/*
 * Code for class WEL_GDIP_BITMAP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1473.h"
#include <string.h>
#include "wel_gdi_plus.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F1334_15816
static EIF_POINTER inline_F1334_15816 (EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_INTEGER_32* arg5)
{
	{
				static FARPROC GdipCreateBitmapFromScan0 = NULL;
				GpBitmap *l_result = NULL;
				*(EIF_INTEGER *) arg5 = 1;

				if (!GdipCreateBitmapFromScan0)	{
					GdipCreateBitmapFromScan0 = GetProcAddress ((HMODULE) arg1, "GdipCreateBitmapFromScan0");
				}
				if (GdipCreateBitmapFromScan0) {
					*(EIF_INTEGER *)arg5 = (FUNCTION_CAST_TYPE (GpStatus, WINGDIPAPI, (INT, INT, INT, PixelFormat, BYTE*, GpBitmap **)) GdipCreateBitmapFromScan0)
								((INT) arg2,
								(INT) arg3,
								(INT) 0,
								(PixelFormat) arg4,
								(BYTE*) NULL,
								(GpBitmap **) &l_result);
				}
				return (EIF_POINTER) l_result;
			}
	;
}
#define INLINE_F1334_15816
#endif
#ifndef INLINE_F1334_15820
static EIF_POINTER inline_F1334_15820 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32* arg3)
{
	{
				static FARPROC GdipCreateBitmapFromHICON = NULL;
				GpBitmap *l_result = NULL;
				*(EIF_INTEGER *) arg3 = 1;

				if (!GdipCreateBitmapFromHICON)	{
					GdipCreateBitmapFromHICON = GetProcAddress ((HMODULE) arg1, "GdipCreateBitmapFromHICON");
				}
				if (GdipCreateBitmapFromHICON) {
					*(EIF_INTEGER *)arg3 = (FUNCTION_CAST_TYPE (GpStatus, WINGDIPAPI, (HICON, GpBitmap **)) GdipCreateBitmapFromHICON)
								((HICON) arg2,
								(GpBitmap **) &l_result);
				}
				return (EIF_POINTER) l_result;
			}
	;
}
#define INLINE_F1334_15820
#endif
#ifndef INLINE_F1334_15823
static void inline_F1334_15823 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3, EIF_NATURAL_32 arg4, EIF_INTEGER_32 arg5, EIF_INTEGER_32* arg6, EIF_POINTER arg7)
{
	{
	static FARPROC GdipBitmapLockBits = NULL;
		
	*(EIF_INTEGER *) arg6 = 1;
	
	if (!GdipBitmapLockBits)	{
		GdipBitmapLockBits = GetProcAddress ((HMODULE) arg1, "GdipBitmapLockBits");
	}					
	if (GdipBitmapLockBits) {
		*(EIF_INTEGER *)arg6 = (FUNCTION_CAST_TYPE (GpStatus, WINGDIPAPI, (GpBitmap *, GDIPCONST GpRect*, UINT, PixelFormat, BitmapData*)) GdipBitmapLockBits)
					((GpBitmap *) arg2,
					(GDIPCONST GpRect *) arg3,
					(UINT) arg4,
					(PixelFormat) arg5,
					(BitmapData *) arg7);
	}
}
	;
}
#define INLINE_F1334_15823
#endif
#ifndef INLINE_F1334_15824
static void inline_F1334_15824 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3, EIF_INTEGER_32* arg4)
{
	{
	static FARPROC GdipBitmapUnlockBits = NULL;
	*(EIF_INTEGER *) arg4 = 1;
	
	if (!GdipBitmapUnlockBits) {
		GdipBitmapUnlockBits = GetProcAddress ((HMODULE) arg1, "GdipBitmapUnlockBits");
	}
	if (GdipBitmapUnlockBits) {
		*(EIF_INTEGER *)arg4 = (FUNCTION_CAST_TYPE (GpStatus, WINGDIPAPI, (GpBitmap*, BitmapData*)) GdipBitmapUnlockBits)
					((GpBitmap*) arg2,
					(BitmapData*) arg3);				
	}
}
	;
}
#define INLINE_F1334_15824
#endif
#ifndef INLINE_F1334_15821
static void inline_F1334_15821 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_NATURAL_32 arg3, EIF_NATURAL_32 arg4, EIF_NATURAL_32* arg5, EIF_INTEGER_32* arg6)
{
	{
	static FARPROC GdipGetPixel = NULL;
		
	*(EIF_INTEGER *) arg6 = 1;
	
	if (!GdipGetPixel)	{
		GdipGetPixel = GetProcAddress ((HMODULE) arg1, "GdipBitmapGetPixel");
	}					
	if (GdipGetPixel) {
		*(EIF_INTEGER *)arg6 = (FUNCTION_CAST_TYPE (GpStatus, WINGDIPAPI, (GpBitmap *, INT, INT, ARGB*)) GdipGetPixel)
					((GpBitmap *) arg2,
					(INT) arg3,
					(INT) arg4,
					(ARGB*) arg5);
	}
}
	;
}
#define INLINE_F1334_15821
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_GDIP_BITMAP}.make_with_size */
void F1334_15798 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	F1334_15799(Current, arg1, arg2, ((EIF_INTEGER_32) 2498570L));
}

/* {WEL_GDIP_BITMAP}.make_formatted */
void F1334_15799 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1325_15650(Current);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_1_1_0_0_0_1_);
	tp1 = inline_F1334_15816(tp1, arg1, arg2, arg3, (EIF_INTEGER_32 *) &(loc1));
	*(EIF_POINTER *)(Current+ _PTROFF_1_1_0_0_0_0_) = (EIF_POINTER) tp1;
	RTLE;
}

/* {WEL_GDIP_BITMAP}.make_from_icon */
void F1334_15801 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_1_1_0_0_0_1_);
	tp2 = *(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_0_2_0_3_0_0_);
	tp1 = inline_F1334_15820(tp1, tp2, (EIF_INTEGER_32 *) &(loc1));
	*(EIF_POINTER *)(Current+ _PTROFF_1_1_0_0_0_0_) = (EIF_POINTER) tp1;
	RTLE;
}

/* {WEL_GDIP_BITMAP}.make_from_bitmap_with_alpha */
void F1334_15805 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_POINTER loc3 = (EIF_POINTER) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc10 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(8);
	RTLR(0,arg1);
	RTLR(1,loc7);
	RTLR(2,loc8);
	RTLR(3,loc9);
	RTLR(4,loc6);
	RTLR(5,Current);
	RTLR(6,loc2);
	RTLR(7,loc1);
	RTLIU(8);
	
	RTGC;
	loc4 = F1320_15572(RTCW(arg1));
	loc5 = F1320_15573(RTCW(arg1));
	loc7 = RTLNS(eif_new_type(1306, 0x01).id, 1306, _OBJSIZ_6_2_0_3_0_7_0_0_);
	F1307_15413(RTCW(loc7));
	loc8 = RTLNS(eif_new_type(1400, 0x01).id, 1400, _OBJSIZ_0_1_0_1_0_1_0_0_);
	F1401_17039(RTCW(loc8), loc7, arg1, ((EIF_INTEGER_32) 0L));
	loc9 = F1401_17040(RTCW(loc8));
	F1403_17093(RTCW(loc9), (EIF_INTEGER_32) -loc5);
	loc6 = F1306_15321(RTCW(loc7), arg1, ((EIF_INTEGER_32) 0L), loc5, loc8, ((EIF_INTEGER_32) 0L));
	ti4_1 = F1403_17084(RTCW(loc9));
	switch (ti4_1) {
		case 1L:
			loc10 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 196865L);
			break;
		case 4L:
			loc10 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 197634L);
			break;
		case 8L:
			loc10 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 198659L);
			break;
		case 16L:
			ti4_1 = F1403_17085(RTCW(loc9));
			if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 3L))) {
				tb1 = '\0';
				tb2 = '\0';
				tu4_1 = F1401_17043(RTCW(loc8), ((EIF_INTEGER_32) 0L));
				if ((EIF_BOOLEAN)(tu4_1 == (EIF_NATURAL_32) ((EIF_INTEGER_32) 63488L))) {
					tu4_1 = F1401_17043(RTCW(loc8), ((EIF_INTEGER_32) 1L));
					tb2 = (EIF_BOOLEAN)(tu4_1 == (EIF_NATURAL_32) ((EIF_INTEGER_32) 2016L));
				}
				if (tb2) {
					tu4_1 = F1401_17043(RTCW(loc8), ((EIF_INTEGER_32) 2L));
					tb1 = (EIF_BOOLEAN)(tu4_1 == (EIF_NATURAL_32) ((EIF_INTEGER_32) 31L));
				}
				if (tb1) {
					loc10 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 135174L);
				} else {
					loc10 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 135173L);
				}
			} else {
				loc10 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 135173L);
			}
			break;
		case 24L:
			loc10 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 137224L);
			break;
		case 32L:
			loc10 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2498570L);
			break;
		default:
			break;
	}
	F1334_15799(Current, loc4, loc5, loc10);
	loc2 = RTLNS(eif_new_type(36, 0x01).id, 36, _OBJSIZ_1_0_0_0_0_0_0_0_);
	F37_9087(RTCW(loc2), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), loc4, loc5);
	loc1 = F1334_15808(Current, loc2, ((EIF_NATURAL_32) 2U), loc10);
	loc3 = F39_9126(RTCW(loc1));
	tp1 = *(EIF_POINTER *)(RTCW(loc6)+ _PTROFF_0_1_0_1_0_0_);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc6)+ _LNGOFF_0_1_0_0_);
	memcpy((void *)loc3, (const void *) tp1, (size_t) ti4_1);
	F1334_15809(Current, loc1);
	F1296_15104(RTCW(loc8));
	RTLE;
}

/* {WEL_GDIP_BITMAP}.lock_bits */
EIF_REFERENCE F1334_15808 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_NATURAL_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_POINTER tp4;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Result);
	RTLR(1,Current);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTGC;
	Result = RTLNS(eif_new_type(38, 0x01).id, 38, _OBJSIZ_1_0_0_0_0_0_0_0_);
	F39_9113(RTCW(Result));
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_1_1_0_0_0_1_);
	tp2 = *(EIF_POINTER *)(Current+ _PTROFF_1_1_0_0_0_0_);
	tp3 = F37_9097(RTCW(arg1));
	tp4 = F39_9128(RTCW(Result));
	inline_F1334_15823(tp1, tp2, tp3, arg2, arg3, (EIF_INTEGER_32 *) &(loc1), tp4);
	RTLE;
	return Result;
}

/* {WEL_GDIP_BITMAP}.unlock_bits */
void F1334_15809 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_1_1_0_0_0_1_);
	tp2 = *(EIF_POINTER *)(Current+ _PTROFF_1_1_0_0_0_0_);
	tp3 = F39_9128(RTCW(arg1));
	inline_F1334_15824(tp1, tp2, tp3, (EIF_INTEGER_32 *) &(loc1));
	RTLE;
}

/* {WEL_GDIP_BITMAP}.get_pixel */
EIF_NATURAL_32 F1334_15811 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1, EIF_NATURAL_32 arg2)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_1_1_0_0_0_1_);
	tp2 = *(EIF_POINTER *)(Current+ _PTROFF_1_1_0_0_0_0_);
	inline_F1334_15821(tp1, tp2, arg1, arg2, (EIF_NATURAL_32 *) &(Result), (EIF_INTEGER_32 *) &(loc1));
	RTLE;
	return Result;
}

/* {WEL_GDIP_BITMAP}.c_gdip_create_bitmap_from_scan0 */
EIF_POINTER F1334_15816 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_INTEGER_32* arg5)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = inline_F1334_15816 ((EIF_POINTER) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3, (EIF_INTEGER_32) arg4, (EIF_INTEGER_32*) arg5);
	return Result;
}

/* {WEL_GDIP_BITMAP}.c_gdip_create_bitmap_from_hicon */
EIF_POINTER F1334_15820 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32* arg3)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = inline_F1334_15820 ((EIF_POINTER) arg1, (EIF_POINTER) arg2, (EIF_INTEGER_32*) arg3);
	return Result;
}

/* {WEL_GDIP_BITMAP}.c_gdip_bitmap_get_pixel */
void F1334_15821 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_NATURAL_32 arg3, EIF_NATURAL_32 arg4, EIF_NATURAL_32* arg5, EIF_INTEGER_32* arg6)
{
	GTCX
	
	
	inline_F1334_15821 ((EIF_POINTER) arg1, (EIF_POINTER) arg2, (EIF_NATURAL_32) arg3, (EIF_NATURAL_32) arg4, (EIF_NATURAL_32*) arg5, (EIF_INTEGER_32*) arg6);
}

/* {WEL_GDIP_BITMAP}.c_gdip_bitmap_lock_bits */
void F1334_15823 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3, EIF_NATURAL_32 arg4, EIF_INTEGER_32 arg5, EIF_INTEGER_32* arg6, EIF_POINTER arg7)
{
	GTCX
	
	
	inline_F1334_15823 ((EIF_POINTER) arg1, (EIF_POINTER) arg2, (EIF_POINTER) arg3, (EIF_NATURAL_32) arg4, (EIF_INTEGER_32) arg5, (EIF_INTEGER_32*) arg6, (EIF_POINTER) arg7);
}

/* {WEL_GDIP_BITMAP}.c_gdip_bitmap_unlock_bits */
void F1334_15824 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3, EIF_INTEGER_32* arg4)
{
	GTCX
	
	
	inline_F1334_15824 ((EIF_POINTER) arg1, (EIF_POINTER) arg2, (EIF_POINTER) arg3, (EIF_INTEGER_32*) arg4);
}

void EIF_Minit1473 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
