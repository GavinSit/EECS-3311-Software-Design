/*
 * Code for class WEL_BRUSH
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1460.h"
#include <windows.h>
#include <wel.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_BRUSH}.make_by_sys_color */
void F1321_15589 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tp1 = (EIF_POINTER) cwel_integer_to_pointer(((EIF_INTEGER) arg1));
	*(EIF_POINTER *)(Current+ _PTROFF_0_2_0_3_0_0_) = (EIF_POINTER) tp1;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_0_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTLE;
}

/* {WEL_BRUSH}.make_solid */
void F1321_15590 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O17154[Dtype(arg1)-1828]);
	tp1 = (EIF_POINTER) CreateSolidBrush(((COLORREF) ti4_1));
	*(EIF_POINTER *)(Current+ _PTROFF_0_2_0_3_0_0_) = (EIF_POINTER) tp1;
	{
		/* INLINED CODE (WEL_GDI_ANY.gdi_make) */
		/* END INLINED CODE */
	}
	;
	RTLE;
}

/* {WEL_BRUSH}.make_by_pattern */
void F1321_15592 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_0_3_0_3_0_0_);
	tp1 = (EIF_POINTER) CreatePatternBrush(((HBITMAP) tp1));
	*(EIF_POINTER *)(Current+ _PTROFF_0_2_0_3_0_0_) = (EIF_POINTER) tp1;
	{
		/* INLINED CODE (WEL_GDI_ANY.gdi_make) */
		/* END INLINED CODE */
	}
	;
	RTLE;
}

/* {WEL_BRUSH}.cwin_create_solid_brush */
EIF_POINTER F1321_15598 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = (EIF_POINTER) CreateSolidBrush(((COLORREF) arg1));
	return Result;
}

/* {WEL_BRUSH}.cwin_create_pattern_brush */
EIF_POINTER F1321_15601 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = (EIF_POINTER) CreatePatternBrush(((HBITMAP) arg1));
	return Result;
}

void EIF_Minit1460 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
