/*
 * Code for class WEL_GDIP_FONT
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1469.h"
#include "wel_gdi_plus.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F1330_15688
static void inline_F1330_15688 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32* arg3)
{
	{
	static FARPROC GdipDeleteFont = NULL;
	*(EIF_INTEGER *) arg3 = 1;
	
	if (!GdipDeleteFont) {
		GdipDeleteFont = GetProcAddress ((HMODULE) arg1, "GdipDeleteFont");
	}
	if (GdipDeleteFont) {
		*(EIF_INTEGER *) arg3 = (FUNCTION_CAST_TYPE (GpStatus, WINGDIPAPI, (GpFont *)) GdipDeleteFont)
					((GpFont *) arg2);
	}
}
	;
}
#define INLINE_F1330_15688
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_GDIP_FONT}.destroy_item */
void F1330_15686 (EIF_REFERENCE Current)
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
		inline_F1330_15688(tp1, tp2, (EIF_INTEGER_32 *) &(loc1));
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

/* {WEL_GDIP_FONT}.c_gdip_delete_font */
void F1330_15688 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32* arg3)
{
	GTCX
	
	
	inline_F1330_15688 ((EIF_POINTER) arg1, (EIF_POINTER) arg2, (EIF_INTEGER_32*) arg3);
}

void EIF_Minit1469 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
