/*
 * Code for class WEL_GDIP_GRAPHICS_PATH
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1465.h"
#include "wel_gdi_plus.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F1326_15663
static void inline_F1326_15663 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32* arg3)
{
	{
	static FARPROC GdipDeletePath = NULL;
	*(EIF_INTEGER *) arg3 = 1;
	
	if (!GdipDeletePath) {
		GdipDeletePath = GetProcAddress ((HMODULE) arg1, "GdipDeletePath");
	}
	
	if (GdipDeletePath) {			
		*(EIF_INTEGER *) arg3 = (FUNCTION_CAST_TYPE (GpStatus, WINGDIPAPI, (GpPath *)) GdipDeletePath)
					((GpPath *) arg2);
	}					
}
	;
}
#define INLINE_F1326_15663
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_GDIP_GRAPHICS_PATH}.destroy_item */
void F1326_15660 (EIF_REFERENCE Current)
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
		inline_F1326_15663(tp1, tp2, (EIF_INTEGER_32 *) &(loc1));
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

/* {WEL_GDIP_GRAPHICS_PATH}.c_gdip_delete_path */
void F1326_15663 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32* arg3)
{
	GTCX
	
	
	inline_F1326_15663 ((EIF_POINTER) arg1, (EIF_POINTER) arg2, (EIF_INTEGER_32*) arg3);
}

void EIF_Minit1465 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
