/*
 * Code for class WEL_GDIP_STRING_FORMAT
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1466.h"
#include "wel_gdi_plus.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F1327_15667
static EIF_INTEGER_32 inline_F1327_15667 (EIF_POINTER arg1, EIF_POINTER arg2)
{
	{
	static FARPROC GdipDeleteStringFormat = NULL;
	EIF_INTEGER Result = 1;
	
	if (!GdipDeleteStringFormat) {
		GdipDeleteStringFormat = GetProcAddress ((HMODULE) arg1, "GdipDeleteStringFormat");
	}
	if (GdipDeleteStringFormat) {
		Result = (EIF_INTEGER) (FUNCTION_CAST_TYPE (GpStatus, WINGDIPAPI, (GpStringFormat  *)) GdipDeleteStringFormat)
					((GpStringFormat  *) arg2);
	}
	return Result;
}
	;
}
#define INLINE_F1327_15667
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_GDIP_STRING_FORMAT}.destroy_item */
void F1327_15665 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_1_) != loc1)) {
		tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_1_);
		tp2 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
		loc2 = inline_F1327_15667(tp1, tp2);
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

/* {WEL_GDIP_STRING_FORMAT}.c_gdip_delete_string_format */
EIF_INTEGER_32 F1327_15667 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = inline_F1327_15667 ((EIF_POINTER) arg1, (EIF_POINTER) arg2);
	return Result;
}

void EIF_Minit1466 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
