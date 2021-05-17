/*
 * Code for class WEL_GDIP_TEXTURE_BRUSH
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1475.h"
#include "wel_gdi_plus.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F1336_15829
static EIF_POINTER inline_F1336_15829 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32* arg4)
{
	{
	static FARPROC GdipCreateTexture = NULL;
	GpTexture *l_result = NULL;
	*(EIF_INTEGER *) arg4 = 1;
	
	if (!GdipCreateTexture) {
		GdipCreateTexture = GetProcAddress ((HMODULE) arg1, "GdipCreateTexture");
	}
	if (GdipCreateTexture) {
		*(EIF_INTEGER *) arg4 = (FUNCTION_CAST_TYPE (GpStatus, WINGDIPAPI, (GpImage *, GpWrapMode, GpTexture **)) GdipCreateTexture)
					((GpImage *) arg2,
					(GpWrapMode) arg3,
					(GpTexture **) &l_result);
	}				
	return (EIF_POINTER) l_result;
}
	;
}
#define INLINE_F1336_15829
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_GDIP_TEXTURE_BRUSH}.make_with_image */
void F1336_15828 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	tp1 = inline_F1336_15829(tp1, tp2, ((EIF_INTEGER_32) 0L), (EIF_INTEGER_32 *) &(loc1));
	*(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_) = (EIF_POINTER) tp1;
	RTLE;
}

/* {WEL_GDIP_TEXTURE_BRUSH}.c_gdip_create_texture */
EIF_POINTER F1336_15829 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32* arg4)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = inline_F1336_15829 ((EIF_POINTER) arg1, (EIF_POINTER) arg2, (EIF_INTEGER_32) arg3, (EIF_INTEGER_32*) arg4);
	return Result;
}

void EIF_Minit1475 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
