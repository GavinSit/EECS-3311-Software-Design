/*
 * Code for class WEL_PAINT_DC
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1452.h"
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

/* {WEL_PAINT_DC}.make_by_pointer */
void F1313_15461 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_POINTER arg2)
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
	*(EIF_REFERENCE *)(Current + _REFACS_6_) = (EIF_REFERENCE) arg1;
	tp1 = *(EIF_POINTER *)(RTCW(arg1) + O12527[Dtype(arg1)-1295]);
	*(EIF_POINTER *)(Current+ _PTROFF_8_2_0_3_0_7_) = (EIF_POINTER) tp1;
	F1296_15096(Current, arg2);
	tr1 = RTLNSMART(eif_new_type(1382, 1).id);
	F1337_15830(RTCW(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_7_) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {WEL_PAINT_DC}.get */
void F1313_15464 (EIF_REFERENCE Current)
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
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_8_2_0_3_0_7_);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_7_);
	tp2 = *(EIF_POINTER *)(RTCW(tr1)+ _PTROFF_0_1_0_0_0_0_);
	tp1 = (EIF_POINTER) BeginPaint(((HWND) tp1), ((PAINTSTRUCT *) tp2));
	*(EIF_POINTER *)(Current+ _PTROFF_8_2_0_3_0_0_) = (EIF_POINTER) tp1;
	RTLE;
}

/* {WEL_PAINT_DC}.release */
void F1313_15465 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_8_2_0_3_0_7_);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_7_);
	tp2 = *(EIF_POINTER *)(RTCW(tr1)+ _PTROFF_0_1_0_0_0_0_);
	EndPaint(((HWND) tp1), ((PAINTSTRUCT *) tp2));
	*(EIF_POINTER *)(Current+ _PTROFF_8_2_0_3_0_0_) = (EIF_POINTER) loc1;
	RTLE;
}

/* {WEL_PAINT_DC}.destroy_item */
void F1313_15468 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_POINTER *)(Current+ _PTROFF_8_2_0_3_0_0_) != loc1)) {
		F1306_15272(Current);
		tp1 = *(EIF_POINTER *)(Current+ _PTROFF_8_2_0_3_0_7_);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_7_);
		tp2 = *(EIF_POINTER *)(RTCW(tr1)+ _PTROFF_0_1_0_0_0_0_);
		EndPaint(((HWND) tp1), ((PAINTSTRUCT *) tp2));
		*(EIF_POINTER *)(Current+ _PTROFF_8_2_0_3_0_0_) = (EIF_POINTER) loc1;
	}
	RTLE;
}

/* {WEL_PAINT_DC}.cwin_begin_paint */
EIF_POINTER F1313_15469 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = (EIF_POINTER) BeginPaint(((HWND) arg1), ((PAINTSTRUCT *) arg2));
	return Result;
}

/* {WEL_PAINT_DC}.cwin_end_paint */
void F1313_15470 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	
	EndPaint(((HWND) arg1), ((PAINTSTRUCT *) arg2));
}

void EIF_Minit1452 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
