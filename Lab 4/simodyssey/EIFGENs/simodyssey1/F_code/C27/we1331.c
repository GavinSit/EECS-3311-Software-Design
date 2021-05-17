/*
 * Code for class WEL_DRAWING_ROUTINES
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1331.h"
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

/* {WEL_DRAWING_ROUTINES}.draw_edge */
void F504_14166 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLIU(2);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(RTCW(arg1) + O12527[Dtype(arg1)-1295]);
	tp2 = *(EIF_POINTER *)(RTCW(arg2)+ _PTROFF_0_1_0_0_0_0_);
	DrawEdge(((HDC) tp1), ((LPRECT) tp2), ((UINT) arg3), ((UINT) arg4));
	RTLE;
}

/* {WEL_DRAWING_ROUTINES}.draw_focus_rect */
void F504_14167 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLIU(2);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(RTCW(arg1) + O12527[Dtype(arg1)-1295]);
	tp2 = *(EIF_POINTER *)(RTCW(arg2)+ _PTROFF_0_1_0_0_0_0_);
	DrawFocusRect(((HDC) tp1), ((CONST RECT *) tp2));
	RTLE;
}

/* {WEL_DRAWING_ROUTINES}.cwin_draw_edge */
void F504_14170 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	
	
	DrawEdge(((HDC) arg1), ((LPRECT) arg2), ((UINT) arg3), ((UINT) arg4));
}

/* {WEL_DRAWING_ROUTINES}.cwin_draw_focus_rect */
void F504_14171 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	
	DrawFocusRect(((HDC) arg1), ((CONST RECT *) arg2));
}

void EIF_Minit1331 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
