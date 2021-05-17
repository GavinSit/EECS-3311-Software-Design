/*
 * Code for class WEL_GDIP_IMAGE_ATTRIBUTES
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1470.h"
#include "wel_gdi_plus.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F1331_15695
static EIF_POINTER inline_F1331_15695 (EIF_POINTER arg1, EIF_INTEGER_32* arg2)
{
	{
	static FARPROC GdipCreateImageAttributes = NULL;
	GpImageAttributes *l_result = NULL;
	*(EIF_INTEGER *) arg2 = 1;
	
	if (!GdipCreateImageAttributes) {
		GdipCreateImageAttributes = GetProcAddress ((HMODULE) arg1, "GdipCreateImageAttributes");
	}			
	if (GdipCreateImageAttributes) {			
		*(EIF_INTEGER *) arg2 = (FUNCTION_CAST_TYPE (GpStatus, WINGDIPAPI, (GpImageAttributes **)) GdipCreateImageAttributes)
					((GpImageAttributes **) &l_result);
	}					
	return (EIF_POINTER)l_result;
}
	;
}
#define INLINE_F1331_15695
#endif
#ifndef INLINE_F1331_15697
static void inline_F1331_15697 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32* arg4)
{
	{
	static FARPROC GdipSetImageAttributesColorKeys = NULL;
	*(EIF_INTEGER *) arg4 = 1;
	
	if (!GdipSetImageAttributesColorKeys) {
		GdipSetImageAttributesColorKeys = GetProcAddress ((HMODULE) arg1, "GdipSetImageAttributesColorKeys");				
	}				
	if (GdipSetImageAttributesColorKeys) {			
		*(EIF_INTEGER *) arg4 = (FUNCTION_CAST_TYPE (GpStatus, WINGDIPAPI, (GpImageAttributes *, ColorAdjustType, BOOL, ARGB, ARGB)) GdipSetImageAttributesColorKeys)
					((GpImageAttributes *) arg2,
					(ColorAdjustType) arg3,
					(BOOL) FALSE,
					(ARGB) 0,
					(ARGB) 0);
	}				
}
	;
}
#define INLINE_F1331_15697
#endif
#ifndef INLINE_F1331_15698
static void inline_F1331_15698 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3, EIF_INTEGER_32 arg4, EIF_INTEGER_32 arg5, EIF_INTEGER_32* arg6)
{
	{
	static FARPROC GdipSetImageAttributesColorMatrix = NULL;
	*(EIF_INTEGER *) arg6 = 1;
	
	if (!GdipSetImageAttributesColorMatrix) {
		GdipSetImageAttributesColorMatrix = GetProcAddress ((HMODULE) arg1, "GdipSetImageAttributesColorMatrix");			
	}						
	if (GdipSetImageAttributesColorMatrix) {			
		*(EIF_INTEGER *) arg6 = (FUNCTION_CAST_TYPE (GpStatus, WINGDIPAPI, (GpImageAttributes *, ColorAdjustType, BOOL, GDIPCONST ColorMatrix*, GDIPCONST ColorMatrix*, ColorMatrixFlags)) GdipSetImageAttributesColorMatrix)
					((GpImageAttributes *) arg2,
					(ColorAdjustType) arg4,
					(BOOL) TRUE,
					(ColorMatrix*) arg3,
					(ColorMatrix*) NULL,
					(ColorMatrixFlags) arg5);
	}				
}
	;
}
#define INLINE_F1331_15698
#endif
#ifndef INLINE_F1331_15696
static void inline_F1331_15696 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32* arg3)
{
	{
	static FARPROC GdipDisposeImageAttributes = NULL;
	*(EIF_INTEGER *) arg3 = 1;
	
	if (!GdipDisposeImageAttributes) {
		GdipDisposeImageAttributes = GetProcAddress ((HMODULE) arg1, "GdipDisposeImageAttributes");
	}		
	
	if (GdipDisposeImageAttributes) {			
		*(EIF_INTEGER *) arg3 = (FUNCTION_CAST_TYPE (GpStatus, WINGDIPAPI, (GpImageAttributes *)) GdipDisposeImageAttributes)
					((GpImageAttributes *) arg2);
	}				
}
	;
}
#define INLINE_F1331_15696
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_GDIP_IMAGE_ATTRIBUTES}.make */
void F1331_15689 (EIF_REFERENCE Current)
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
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_1_);
	tp1 = inline_F1331_15695(tp1, (EIF_INTEGER_32 *) &(loc1));
	*(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_) = (EIF_POINTER) tp1;
	RTLE;
}

/* {WEL_GDIP_IMAGE_ATTRIBUTES}.clear_color_key */
void F1331_15690 (EIF_REFERENCE Current)
{
	GTCX
	
	
	F1331_15691(Current, ((EIF_INTEGER_32) 0L));
}

/* {WEL_GDIP_IMAGE_ATTRIBUTES}.clear_color_key_with_type */
void F1331_15691 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_1_);
	tp2 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	inline_F1331_15697(tp1, tp2, arg1, (EIF_INTEGER_32 *) &(loc1));
	RTLE;
}

/* {WEL_GDIP_IMAGE_ATTRIBUTES}.set_color_matrix */
void F1331_15692 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	F1331_15693(Current, arg1, ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L));
}

/* {WEL_GDIP_IMAGE_ATTRIBUTES}.set_color_matrix_with_flag */
void F1331_15693 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
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
	tp3 = F41_9157(RTCW(arg1));
	inline_F1331_15698(tp1, tp2, tp3, arg2, arg3, (EIF_INTEGER_32 *) &(loc1));
	RTLE;
}

/* {WEL_GDIP_IMAGE_ATTRIBUTES}.destroy_item */
void F1331_15694 (EIF_REFERENCE Current)
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
		inline_F1331_15696(tp1, tp2, (EIF_INTEGER_32 *) &(loc1));
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

/* {WEL_GDIP_IMAGE_ATTRIBUTES}.c_gdip_create_image_attributes */
EIF_POINTER F1331_15695 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32* arg2)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = inline_F1331_15695 ((EIF_POINTER) arg1, (EIF_INTEGER_32*) arg2);
	return Result;
}

/* {WEL_GDIP_IMAGE_ATTRIBUTES}.c_gdip_dispose_image_attributes */
void F1331_15696 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32* arg3)
{
	GTCX
	
	
	inline_F1331_15696 ((EIF_POINTER) arg1, (EIF_POINTER) arg2, (EIF_INTEGER_32*) arg3);
}

/* {WEL_GDIP_IMAGE_ATTRIBUTES}.c_gdip_set_image_attributes_color_keys */
void F1331_15697 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32* arg4)
{
	GTCX
	
	
	inline_F1331_15697 ((EIF_POINTER) arg1, (EIF_POINTER) arg2, (EIF_INTEGER_32) arg3, (EIF_INTEGER_32*) arg4);
}

/* {WEL_GDIP_IMAGE_ATTRIBUTES}.c_gdip_set_image_attributes_color_matrix */
void F1331_15698 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3, EIF_INTEGER_32 arg4, EIF_INTEGER_32 arg5, EIF_INTEGER_32* arg6)
{
	GTCX
	
	
	inline_F1331_15698 ((EIF_POINTER) arg1, (EIF_POINTER) arg2, (EIF_POINTER) arg3, (EIF_INTEGER_32) arg4, (EIF_INTEGER_32) arg5, (EIF_INTEGER_32*) arg6);
}

void EIF_Minit1470 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
