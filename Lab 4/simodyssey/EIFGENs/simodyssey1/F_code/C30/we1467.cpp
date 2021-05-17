/*
 * Code for class WEL_GDIP_PEN
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1467.h"
#include "wel_gdi_plus.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F1328_15672
static EIF_POINTER inline_F1328_15672 (EIF_POINTER arg1, EIF_INTEGER_64 arg2, EIF_REAL_32 arg3, EIF_INTEGER_32 arg4, EIF_INTEGER_32* arg5)
{
	{
	static FARPROC GdipCreatePen1 = NULL;
	GpPen *l_result = NULL;
	*(EIF_INTEGER *) arg5 = 1;
	
	if (!GdipCreatePen1) {
		GdipCreatePen1 = GetProcAddress ((HMODULE) arg1, "GdipCreatePen1");				
	}									
	
	if (GdipCreatePen1) {			
		*(EIF_INTEGER *) arg5 = (FUNCTION_CAST_TYPE (GpStatus, WINGDIPAPI, (ARGB, REAL, GpUnit, GpPen **)) GdipCreatePen1)
					((ARGB) arg2,
					(REAL) arg3,
					(GpUnit) arg4,
					(GpPen **) &l_result);
	}				
	
	return (EIF_POINTER) l_result;
}
	;
}
#define INLINE_F1328_15672
#endif
#ifndef INLINE_F1328_15674
static void inline_F1328_15674 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32* arg4)
{
	{
				static FARPROC GdipSetPenDashStyle = NULL;
				*(EIF_INTEGER *) arg4 = 1;

				if (!GdipSetPenDashStyle) {
					GdipSetPenDashStyle = GetProcAddress ((HMODULE) arg1, "GdipSetPenDashStyle");
				}
				if (GdipSetPenDashStyle) {
					*(EIF_INTEGER *) arg4 = (FUNCTION_CAST_TYPE (GpStatus, WINGDIPAPI, (GpPen *, INT)) GdipSetPenDashStyle)
								((GpPen *) arg2,
								(INT) arg3);
				}
			}
	;
}
#define INLINE_F1328_15674
#endif
#ifndef INLINE_F1328_15675
static void inline_F1328_15675 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32* arg4)
{
	{
				static FARPROC GdipSetPenLineJoin = NULL;
				*(EIF_INTEGER *) arg4 = 1;

				if (!GdipSetPenLineJoin) {
					GdipSetPenLineJoin = GetProcAddress ((HMODULE) arg1, "GdipSetPenLineJoin");
				}
				if (GdipSetPenLineJoin) {
					*(EIF_INTEGER *) arg4 = (FUNCTION_CAST_TYPE (GpStatus, WINGDIPAPI, (GpPen *, INT)) GdipSetPenLineJoin)
								((GpPen *) arg2,
								(INT) arg3);
				}
			}
	;
}
#define INLINE_F1328_15675
#endif
#ifndef INLINE_F1328_15673
static void inline_F1328_15673 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32* arg3)
{
	{
	static FARPROC GdipDeletePen = NULL;
	*(EIF_INTEGER *) arg3 = 1;
	
	if (!GdipDeletePen) {
		GdipDeletePen = GetProcAddress ((HMODULE) arg1, "GdipDeletePen");				
	}							
	if (GdipDeletePen) {			
		*(EIF_INTEGER *) arg3 = (FUNCTION_CAST_TYPE (GpStatus, WINGDIPAPI, (GpPen *)) GdipDeletePen)
					((GpPen *) arg2);
	}				
}
	;
}
#define INLINE_F1328_15673
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_GDIP_PEN}.make */
void F1328_15668 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REAL_32 arg2)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	EIF_INTEGER_64 ti8_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	F1325_15650(Current);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_1_);
	ti8_1 = *(EIF_INTEGER_64 *)(RTCW(arg1)+ _I64OFF_0_0_0_0_0_0_0_);
	tp1 = inline_F1328_15672(tp1, ti8_1, arg2, ((EIF_INTEGER_32) 2L), (EIF_INTEGER_32 *) &(loc1));
	*(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_) = (EIF_POINTER) tp1;
	RTLE;
}

/* {WEL_GDIP_PEN}.set_dash_style */
void F1328_15669 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_1_);
	tp2 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	inline_F1328_15674(tp1, tp2, arg1, (EIF_INTEGER_32 *) &(loc1));
}

/* {WEL_GDIP_PEN}.set_line_join */
void F1328_15670 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_1_);
	tp2 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	inline_F1328_15675(tp1, tp2, arg1, (EIF_INTEGER_32 *) &(loc1));
}

/* {WEL_GDIP_PEN}.destroy_item */
void F1328_15671 (EIF_REFERENCE Current)
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
		inline_F1328_15673(tp1, tp2, (EIF_INTEGER_32 *) &(loc1));
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

/* {WEL_GDIP_PEN}.c_gdip_create_pen_l */
EIF_POINTER F1328_15672 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_64 arg2, EIF_REAL_32 arg3, EIF_INTEGER_32 arg4, EIF_INTEGER_32* arg5)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = inline_F1328_15672 ((EIF_POINTER) arg1, (EIF_INTEGER_64) arg2, (EIF_REAL_32) arg3, (EIF_INTEGER_32) arg4, (EIF_INTEGER_32*) arg5);
	return Result;
}

/* {WEL_GDIP_PEN}.c_gdip_delete_pen */
void F1328_15673 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32* arg3)
{
	GTCX
	
	
	inline_F1328_15673 ((EIF_POINTER) arg1, (EIF_POINTER) arg2, (EIF_INTEGER_32*) arg3);
}

/* {WEL_GDIP_PEN}.c_gdip_set_dash_style */
void F1328_15674 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32* arg4)
{
	GTCX
	
	
	inline_F1328_15674 ((EIF_POINTER) arg1, (EIF_POINTER) arg2, (EIF_INTEGER_32) arg3, (EIF_INTEGER_32*) arg4);
}

/* {WEL_GDIP_PEN}.c_gdip_set_line_join */
void F1328_15675 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32* arg4)
{
	GTCX
	
	
	inline_F1328_15675 ((EIF_POINTER) arg1, (EIF_POINTER) arg2, (EIF_INTEGER_32) arg3, (EIF_INTEGER_32*) arg4);
}

void EIF_Minit1467 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
