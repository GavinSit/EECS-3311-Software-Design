/*
 * Code for class WEL_SCROLLER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1847.h"
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

/* {WEL_SCROLLER}.make */
void F1864_21054 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_INTEGER_32 arg5)
{
	GTCX
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
	tp1 = *(EIF_POINTER *)(RTCW(arg1) + O12527[Dtype(arg1)-1295]);
	*(EIF_POINTER *)(Current+ _PTROFF_2_0_0_2_0_0_) = (EIF_POINTER) tp1;
	tr1 = RTLNSMART(eif_new_type(1347, 1).id);
	F1348_15994(RTCW(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	F1864_21071(Current, ((EIF_INTEGER_32) 0L), arg2);
	F1864_21072(Current, ((EIF_INTEGER_32) 0L), arg3);
	F1864_21073(Current, arg4);
	F1864_21075(Current, arg5);
	F1864_21074(Current, arg4);
	F1864_21076(Current, arg5);
	RTLE;
}

/* {WEL_SCROLLER}.horizontal_position */
EIF_INTEGER_32 F1864_21059 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	F1348_16002(RTCW(tr1), ((EIF_INTEGER_32) 4L));
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_2_0_0_2_0_0_);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tp2 = *(EIF_POINTER *)(RTCW(tr1)+ _PTROFF_0_1_0_0_0_0_);
	GetScrollInfo(((HWND) tp1), ((int) ((EIF_INTEGER_32) 0L)), ((LPSCROLLINFO) tp2));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	Result = F1348_15997(RTCW(tr1));
	RTLE;
	return Result;
}

/* {WEL_SCROLLER}.vertical_position */
EIF_INTEGER_32 F1864_21060 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	F1348_16002(RTCW(tr1), ((EIF_INTEGER_32) 4L));
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_2_0_0_2_0_0_);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tp2 = *(EIF_POINTER *)(RTCW(tr1)+ _PTROFF_0_1_0_0_0_0_);
	GetScrollInfo(((HWND) tp1), ((int) ((EIF_INTEGER_32) 1L)), ((LPSCROLLINFO) tp2));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	Result = F1348_15997(RTCW(tr1));
	RTLE;
	return Result;
}

/* {WEL_SCROLLER}.horizontal_page */
EIF_INTEGER_32 F1864_21061 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	F1348_16002(RTCW(tr1), ((EIF_INTEGER_32) 2L));
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_2_0_0_2_0_0_);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tp2 = *(EIF_POINTER *)(RTCW(tr1)+ _PTROFF_0_1_0_0_0_0_);
	GetScrollInfo(((HWND) tp1), ((int) ((EIF_INTEGER_32) 0L)), ((LPSCROLLINFO) tp2));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	Result = F1348_16001(RTCW(tr1));
	RTLE;
	return Result;
}

/* {WEL_SCROLLER}.vertical_page */
EIF_INTEGER_32 F1864_21062 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	F1348_16002(RTCW(tr1), ((EIF_INTEGER_32) 2L));
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_2_0_0_2_0_0_);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tp2 = *(EIF_POINTER *)(RTCW(tr1)+ _PTROFF_0_1_0_0_0_0_);
	GetScrollInfo(((HWND) tp1), ((int) ((EIF_INTEGER_32) 1L)), ((LPSCROLLINFO) tp2));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	Result = F1348_16001(RTCW(tr1));
	RTLE;
	return Result;
}

/* {WEL_SCROLLER}.minimal_horizontal_position */
EIF_INTEGER_32 F1864_21063 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	F1348_16002(RTCW(tr1), ((EIF_INTEGER_32) 1L));
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_2_0_0_2_0_0_);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tp2 = *(EIF_POINTER *)(RTCW(tr1)+ _PTROFF_0_1_0_0_0_0_);
	GetScrollInfo(((HWND) tp1), ((int) ((EIF_INTEGER_32) 0L)), ((LPSCROLLINFO) tp2));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	Result = F1348_15999(RTCW(tr1));
	RTLE;
	return Result;
}

/* {WEL_SCROLLER}.minimal_vertical_position */
EIF_INTEGER_32 F1864_21064 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	F1348_16002(RTCW(tr1), ((EIF_INTEGER_32) 1L));
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_2_0_0_2_0_0_);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tp2 = *(EIF_POINTER *)(RTCW(tr1)+ _PTROFF_0_1_0_0_0_0_);
	GetScrollInfo(((HWND) tp1), ((int) ((EIF_INTEGER_32) 1L)), ((LPSCROLLINFO) tp2));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	Result = F1348_15999(RTCW(tr1));
	RTLE;
	return Result;
}

/* {WEL_SCROLLER}.maximal_horizontal_position */
EIF_INTEGER_32 F1864_21065 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	F1348_16002(RTCW(tr1), ((EIF_INTEGER_32) 1L));
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_2_0_0_2_0_0_);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tp2 = *(EIF_POINTER *)(RTCW(tr1)+ _PTROFF_0_1_0_0_0_0_);
	GetScrollInfo(((HWND) tp1), ((int) ((EIF_INTEGER_32) 0L)), ((LPSCROLLINFO) tp2));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	Result = F1348_16000(RTCW(tr1));
	RTLE;
	return Result;
}

/* {WEL_SCROLLER}.maximal_vertical_position */
EIF_INTEGER_32 F1864_21066 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	F1348_16002(RTCW(tr1), ((EIF_INTEGER_32) 1L));
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_2_0_0_2_0_0_);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tp2 = *(EIF_POINTER *)(RTCW(tr1)+ _PTROFF_0_1_0_0_0_0_);
	GetScrollInfo(((HWND) tp1), ((int) ((EIF_INTEGER_32) 1L)), ((LPSCROLLINFO) tp2));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	Result = F1348_16000(RTCW(tr1));
	RTLE;
	return Result;
}

/* {WEL_SCROLLER}.set_horizontal_position */
void F1864_21069 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	F1348_16002(RTCW(tr1), ((EIF_INTEGER_32) 4L));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	F1348_16003(RTCW(tr1), arg1);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_2_0_0_2_0_0_);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tp2 = *(EIF_POINTER *)(RTCW(tr1)+ _PTROFF_0_1_0_0_0_0_);
	SetScrollInfo(((HWND) tp1), ((int) ((EIF_INTEGER_32) 0L)), ((LPSCROLLINFO) tp2), ((BOOL) (EIF_BOOLEAN) 1));
	RTLE;
}

/* {WEL_SCROLLER}.set_vertical_position */
void F1864_21070 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	F1348_16002(RTCW(tr1), ((EIF_INTEGER_32) 4L));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	F1348_16003(RTCW(tr1), arg1);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_2_0_0_2_0_0_);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tp2 = *(EIF_POINTER *)(RTCW(tr1)+ _PTROFF_0_1_0_0_0_0_);
	SetScrollInfo(((HWND) tp1), ((int) ((EIF_INTEGER_32) 1L)), ((LPSCROLLINFO) tp2), ((BOOL) (EIF_BOOLEAN) 1));
	RTLE;
}

/* {WEL_SCROLLER}.set_horizontal_range */
void F1864_21071 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	F1348_16002(RTCW(tr1), ((EIF_INTEGER_32) 1L));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	F1348_16005(RTCW(tr1), arg1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	F1348_16006(RTCW(tr1), arg2);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_2_0_0_2_0_0_);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tp2 = *(EIF_POINTER *)(RTCW(tr1)+ _PTROFF_0_1_0_0_0_0_);
	SetScrollInfo(((HWND) tp1), ((int) ((EIF_INTEGER_32) 0L)), ((LPSCROLLINFO) tp2), ((BOOL) (EIF_BOOLEAN) 1));
	RTLE;
}

/* {WEL_SCROLLER}.set_vertical_range */
void F1864_21072 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	F1348_16002(RTCW(tr1), ((EIF_INTEGER_32) 1L));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	F1348_16005(RTCW(tr1), arg1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	F1348_16006(RTCW(tr1), arg2);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_2_0_0_2_0_0_);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tp2 = *(EIF_POINTER *)(RTCW(tr1)+ _PTROFF_0_1_0_0_0_0_);
	SetScrollInfo(((HWND) tp1), ((int) ((EIF_INTEGER_32) 1L)), ((LPSCROLLINFO) tp2), ((BOOL) (EIF_BOOLEAN) 1));
	RTLE;
}

/* {WEL_SCROLLER}.set_horizontal_line */
void F1864_21073 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_0_) = (EIF_INTEGER_32) arg1;
}

/* {WEL_SCROLLER}.set_vertical_line */
void F1864_21074 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_1_) = (EIF_INTEGER_32) arg1;
}

/* {WEL_SCROLLER}.set_horizontal_page */
void F1864_21075 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	F1348_16002(RTCW(tr1), ((EIF_INTEGER_32) 2L));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	F1348_16007(RTCW(tr1), arg1);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_2_0_0_2_0_0_);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tp2 = *(EIF_POINTER *)(RTCW(tr1)+ _PTROFF_0_1_0_0_0_0_);
	SetScrollInfo(((HWND) tp1), ((int) ((EIF_INTEGER_32) 0L)), ((LPSCROLLINFO) tp2), ((BOOL) (EIF_BOOLEAN) 1));
	RTLE;
}

/* {WEL_SCROLLER}.set_vertical_page */
void F1864_21076 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	F1348_16002(RTCW(tr1), ((EIF_INTEGER_32) 2L));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	F1348_16007(RTCW(tr1), arg1);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_2_0_0_2_0_0_);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tp2 = *(EIF_POINTER *)(RTCW(tr1)+ _PTROFF_0_1_0_0_0_0_);
	SetScrollInfo(((HWND) tp1), ((int) ((EIF_INTEGER_32) 1L)), ((LPSCROLLINFO) tp2), ((BOOL) (EIF_BOOLEAN) 1));
	RTLE;
}

/* {WEL_SCROLLER}.on_horizontal_scroll */
void F1864_21077 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	loc1 = F1864_21059(Current);
	loc5 = F1864_21061(Current);
	loc3 = F1864_21063(Current);
	loc4 = F1864_21065(Current);
	switch (arg1) {
		case 3L:
			loc6 = (EIF_INTEGER_32) loc5;
			loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + loc6);
			break;
		case 2L:
			loc6 = (EIF_INTEGER_32) (EIF_INTEGER_32) -loc5;
			loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + loc6);
			break;
		case 1L:
			loc6 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_0_);
			loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + loc6);
			break;
		case 0L:
			loc6 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_0_);
			loc6 = (EIF_INTEGER_32) (EIF_INTEGER_32) -loc6;
			loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + loc6);
			break;
		case 4L:
			loc6 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg2 - loc1);
			loc2 = (EIF_INTEGER_32) arg2;
			break;
		case 5L:
			loc6 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg2 - loc1);
			loc2 = (EIF_INTEGER_32) arg2;
			break;
		case 6L:
			loc2 = (EIF_INTEGER_32) loc3;
			break;
		case 7L:
			loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc4 - loc5) + ((EIF_INTEGER_32) 1L));
			break;
		default:
			loc2 = (EIF_INTEGER_32) loc1;
			break;
	}
	if ((EIF_BOOLEAN) (loc2 > (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc4 - loc5) + ((EIF_INTEGER_32) 1L)))) {
		loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc4 - loc5) + ((EIF_INTEGER_32) 1L));
		loc6 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 - loc1);
	} else {
		if ((EIF_BOOLEAN) (loc2 < loc3)) {
			loc2 = (EIF_INTEGER_32) loc3;
			loc6 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 - loc1);
		}
	}
	if ((EIF_BOOLEAN)(loc1 != loc2)) {
		F1864_21079(Current, (EIF_INTEGER_32) -loc6, loc2);
	}
	RTLE;
}

/* {WEL_SCROLLER}.on_vertical_scroll */
void F1864_21078 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	loc1 = F1864_21060(Current);
	loc5 = F1864_21062(Current);
	loc3 = F1864_21064(Current);
	loc4 = F1864_21066(Current);
	switch (arg1) {
		case 3L:
			loc6 = (EIF_INTEGER_32) loc5;
			loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + loc6);
			break;
		case 2L:
			loc6 = (EIF_INTEGER_32) (EIF_INTEGER_32) -loc5;
			loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + loc6);
			break;
		case 1L:
			loc6 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_1_);
			loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + loc6);
			break;
		case 0L:
			loc6 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_1_);
			loc6 = (EIF_INTEGER_32) (EIF_INTEGER_32) -loc6;
			loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + loc6);
			break;
		case 4L:
			loc6 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg2 - loc1);
			loc2 = (EIF_INTEGER_32) arg2;
			break;
		case 5L:
			loc6 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg2 - loc1);
			loc2 = (EIF_INTEGER_32) arg2;
			break;
		case 6L:
			loc2 = (EIF_INTEGER_32) loc3;
			break;
		case 7L:
			loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc4 - loc5) + ((EIF_INTEGER_32) 1L));
			break;
		default:
			loc2 = (EIF_INTEGER_32) loc1;
			break;
	}
	if ((EIF_BOOLEAN) (loc2 > (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc4 - loc5) + ((EIF_INTEGER_32) 1L)))) {
		loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc4 - loc5) + ((EIF_INTEGER_32) 1L));
		loc6 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 - loc1);
	} else {
		if ((EIF_BOOLEAN) (loc2 < loc3)) {
			loc2 = (EIF_INTEGER_32) loc3;
			loc6 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 - loc1);
		}
	}
	if ((EIF_BOOLEAN)(loc1 != loc2)) {
		F1864_21080(Current, (EIF_INTEGER_32) -loc6, loc2);
	}
	RTLE;
}

/* {WEL_SCROLLER}.horizontal_update */
void F1864_21079 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	F1913_22724(RTCW(tr1), arg1, arg2);
	RTLE;
}

/* {WEL_SCROLLER}.vertical_update */
void F1864_21080 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	F1913_22725(RTCW(tr1), arg1, arg2);
	RTLE;
}

/* {WEL_SCROLLER}.cwin_set_scroll_info */
void F1864_21083 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3, EIF_BOOLEAN arg4)
{
	GTCX
	
	
	SetScrollInfo(((HWND) arg1), ((int) arg2), ((LPSCROLLINFO) arg3), ((BOOL) arg4));
}

/* {WEL_SCROLLER}.cwin_get_scroll_info */
void F1864_21084 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3)
{
	GTCX
	
	
	GetScrollInfo(((HWND) arg1), ((int) arg2), ((LPSCROLLINFO) arg3));
}

void EIF_Minit1847 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
