/*
 * Code for class WEL_PEN
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1458.h"
#include <windows.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_PEN}.make */
void F1319_15553 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_REFERENCE arg3)
{
	GTCX
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg3);
	RTLIU(2);
	
	RTGC;
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg3) + O17154[Dtype(arg3)-1828]);
	tp1 = (EIF_POINTER) CreatePen(((int) arg1), ((int) arg2), ((COLORREF) ti4_1));
	*(EIF_POINTER *)(Current+ _PTROFF_0_2_0_3_0_0_) = (EIF_POINTER) tp1;
	if ((EIF_BOOLEAN)(*(EIF_POINTER *)(Current+ _PTROFF_0_2_0_3_0_0_) == loc2)) {
	}
	{
		/* INLINED CODE (WEL_GDI_ANY.gdi_make) */
		/* END INLINED CODE */
	}
	;
	RTLE;
}

/* {WEL_PEN}.make_solid */
void F1319_15554 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg2);
	RTLIU(2);
	
	RTGC;
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg2) + O17154[Dtype(arg2)-1828]);
	tp1 = (EIF_POINTER) CreatePen(((int) ((EIF_INTEGER_32) 0L)), ((int) arg1), ((COLORREF) ti4_1));
	*(EIF_POINTER *)(Current+ _PTROFF_0_2_0_3_0_0_) = (EIF_POINTER) tp1;
	{
		/* INLINED CODE (WEL_GDI_ANY.gdi_make) */
		/* END INLINED CODE */
	}
	;
	RTLE;
}

/* {WEL_PEN}.make_from_brush */
void F1319_15556 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_REFERENCE arg3)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg3);
	RTLIU(2);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(RTCW(arg3)+ _PTROFF_0_1_0_0_0_0_);
	{
		/* INLINED CODE (ANY.default_pointer) */
		tp2 = (EIF_POINTER)  0;
		/* END INLINED CODE */
	}
	tp3 = tp2;
	tp1 = (EIF_POINTER) ExtCreatePen(((DWORD) arg1), ((DWORD) arg2), ((const LOGBRUSH*) tp1), ((DWORD) ((EIF_INTEGER_32) 0L)), ((const DWORD*) tp3));
	*(EIF_POINTER *)(Current+ _PTROFF_0_2_0_3_0_0_) = (EIF_POINTER) tp1;
	{
		/* INLINED CODE (WEL_GDI_ANY.gdi_make) */
		/* END INLINED CODE */
	}
	;
	RTLE;
}

/* {WEL_PEN}.cwin_create_pen */
EIF_POINTER F1319_15561 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = (EIF_POINTER) CreatePen(((int) arg1), ((int) arg2), ((COLORREF) arg3));
	return Result;
}

/* {WEL_PEN}.cwin_ext_create_pen */
EIF_POINTER F1319_15562 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3, EIF_INTEGER_32 arg4, EIF_POINTER arg5)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = (EIF_POINTER) ExtCreatePen(((DWORD) arg1), ((DWORD) arg2), ((const LOGBRUSH*) arg3), ((DWORD) arg4), ((const DWORD*) arg5));
	return Result;
}

void EIF_Minit1458 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
