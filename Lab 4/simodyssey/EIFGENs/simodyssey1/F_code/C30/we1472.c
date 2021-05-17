/*
 * Code for class WEL_GDIP_IMAGE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1472.h"
#include "wel_gdi_plus.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F1333_15789
static EIF_NATURAL_32 inline_F1333_15789 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32* arg3)
{
	static FARPROC GdipGetImageWidth = NULL;
EIF_NATURAL_32 l_result;

*(EIF_NATURAL_32 *) arg3 = 1;

if (!GdipGetImageWidth) {
	GdipGetImageWidth = GetProcAddress ((HMODULE) arg1, "GdipGetImageWidth");
}
if (GdipGetImageWidth) {
	*(EIF_INTEGER *)arg3 = (FUNCTION_CAST_TYPE (GpStatus, WINGDIPAPI, (GpImage *, UINT *)) GdipGetImageWidth)
				((GpImage *) arg2,
				(UINT *) &l_result);
}

return l_result;
	;
}
#define INLINE_F1333_15789
#endif
#ifndef INLINE_F1333_15790
static EIF_NATURAL_32 inline_F1333_15790 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32* arg3)
{
	{
	static FARPROC GdipGetImageHeight = NULL;
	EIF_NATURAL_32 l_result;
	
	*(EIF_NATURAL_32 *) arg3 = 1;
	
	if (!GdipGetImageHeight) {
		GdipGetImageHeight = GetProcAddress ((HMODULE) arg1, "GdipGetImageHeight");
	}			
	
	if (GdipGetImageHeight) {
		*(EIF_INTEGER *)arg3 = (FUNCTION_CAST_TYPE (GpStatus, WINGDIPAPI, (GpImage *, UINT *)) GdipGetImageHeight)
					((GpImage *) arg2,
					(UINT *) &l_result);
	}
	return l_result;
}
	;
}
#define INLINE_F1333_15790
#endif
#ifndef INLINE_F1333_15792
static void inline_F1333_15792 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32* arg3)
{
	{
	static FARPROC GdipDisposeImage = NULL;
	*(EIF_INTEGER *) arg3 = 1;
	
	if (!GdipDisposeImage) {
		GdipDisposeImage = GetProcAddress ((HMODULE) arg1, "GdipDisposeImage");
	}			
	if (GdipDisposeImage) {
		*(EIF_INTEGER *)arg3 = (FUNCTION_CAST_TYPE (GpStatus, WINGDIPAPI, (GpImage *)) GdipDisposeImage)
					((GpImage *) arg2);
	}
}
	;
}
#define INLINE_F1333_15792
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_GDIP_IMAGE}.width */
EIF_INTEGER_32 F1333_15774 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_NATURAL_32 tu4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current + O13039[dtype-1324]);
	tp2 = *(EIF_POINTER *)(Current + O12527[dtype-1295]);
	tu4_1 = inline_F1333_15789(tp1, tp2, (EIF_INTEGER_32 *) &(loc1));
	Result = (EIF_INTEGER_32) tu4_1;
	RTLE;
	return Result;
}

/* {WEL_GDIP_IMAGE}.height */
EIF_INTEGER_32 F1333_15775 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_NATURAL_32 tu4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current + O13039[dtype-1324]);
	tp2 = *(EIF_POINTER *)(Current + O12527[dtype-1295]);
	tu4_1 = inline_F1333_15790(tp1, tp2, (EIF_INTEGER_32 *) &(loc1));
	Result = (EIF_INTEGER_32) tu4_1;
	RTLE;
	return Result;
}

/* {WEL_GDIP_IMAGE}.destroy_item */
void F1333_15780 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTCDT;
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
	if ((EIF_BOOLEAN)(*(EIF_POINTER *)(Current + O12527[dtype-1295]) != tp1)) {
		tp1 = *(EIF_POINTER *)(Current + O13039[dtype-1324]);
		tp2 = *(EIF_POINTER *)(Current + O12527[dtype-1295]);
		inline_F1333_15792(tp1, tp2, (EIF_INTEGER_32 *) &(loc1));
		{
			/* INLINED CODE (ANY.default_pointer) */
			tp1 = (EIF_POINTER)  0;
			/* END INLINED CODE */
		}
		tp2 = tp1;
		*(EIF_POINTER *)(Current + O12527[dtype-1295]) = (EIF_POINTER) tp2;
	}
	RTLE;
}

/* {WEL_GDIP_IMAGE}.c_gdip_get_image_width */
EIF_NATURAL_32 F1333_15789 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32* arg3)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = inline_F1333_15789 ((EIF_POINTER) arg1, (EIF_POINTER) arg2, (EIF_INTEGER_32*) arg3);
	return Result;
}

/* {WEL_GDIP_IMAGE}.c_gdip_get_image_height */
EIF_NATURAL_32 F1333_15790 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32* arg3)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = inline_F1333_15790 ((EIF_POINTER) arg1, (EIF_POINTER) arg2, (EIF_INTEGER_32*) arg3);
	return Result;
}

/* {WEL_GDIP_IMAGE}.c_gdip_dispose_image */
void F1333_15792 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32* arg3)
{
	GTCX
	
	
	inline_F1333_15792 ((EIF_POINTER) arg1, (EIF_POINTER) arg2, (EIF_INTEGER_32*) arg3);
}

void EIF_Minit1472 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
