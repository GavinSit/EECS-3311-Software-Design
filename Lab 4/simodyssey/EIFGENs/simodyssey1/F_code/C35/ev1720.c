/*
 * Code for class EV_MENU_BAR_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1720.h"
#include <windows.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F67_9738
static EIF_INTEGER_32 inline_F67_9738 (EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_POINTER arg4)
{
	return (EIF_INTEGER_32) (GetMenuBarInfo((HWND) arg1, (LONG) arg2, (LONG) arg3, (PMENUBARINFO) arg4))
	;
}
#define INLINE_F67_9738
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_MENU_BAR_IMP}.make */
void F1731_19606 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1316_15483(Current);
	F1722_19449(Current);
	RTLE;
}

/* {EV_MENU_BAR_IMP}.x_position */
EIF_INTEGER_32 F1731_19607 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	tr1 = F1731_19615(Current);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		Result = F1731_19609(Current);
		ti4_1 = F1614_18066(loc1);
		Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result - ti4_1);
	}
	RTLE;
	return Result;
}

/* {EV_MENU_BAR_IMP}.y_position */
EIF_INTEGER_32 F1731_19608 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	tr1 = F1731_19615(Current);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		Result = F1731_19610(Current);
		ti4_1 = F1614_18067(loc1);
		Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result - ti4_1);
	}
	RTLE;
	return Result;
}

/* {EV_MENU_BAR_IMP}.screen_x */
EIF_INTEGER_32 F1731_19609 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_6_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tp1 = *(EIF_POINTER *)(loc1 + O12527[Dtype(loc1)-1295]);
		tp2 = *(EIF_POINTER *)(RTCV(RTOUCR(280,F1731_19637, (Current)))+ _PTROFF_0_1_0_0_0_0_);
		if ((EIF_BOOLEAN)(inline_F67_9738(tp1, ((EIF_INTEGER_32) -3L), ((EIF_INTEGER_32) 0L), tp2) != ((EIF_INTEGER_32) 0L))) {
			tr1 = F1394_16885(RTCV(RTOUCR(280,F1731_19637, (Current))));
			Result = F1408_17326(RTCW(tr1));
		}
	}
	RTLE;
	return Result;
}

/* {EV_MENU_BAR_IMP}.screen_y */
EIF_INTEGER_32 F1731_19610 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_6_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tp1 = *(EIF_POINTER *)(loc1 + O12527[Dtype(loc1)-1295]);
		tp2 = *(EIF_POINTER *)(RTCV(RTOUCR(280,F1731_19637, (Current)))+ _PTROFF_0_1_0_0_0_0_);
		if ((EIF_BOOLEAN)(inline_F67_9738(tp1, ((EIF_INTEGER_32) -3L), ((EIF_INTEGER_32) 0L), tp2) != ((EIF_INTEGER_32) 0L))) {
			tr1 = F1394_16885(RTCV(RTOUCR(280,F1731_19637, (Current))));
			Result = F1408_17328(RTCW(tr1));
		}
	}
	RTLE;
	return Result;
}

/* {EV_MENU_BAR_IMP}.width */
EIF_INTEGER_32 F1731_19611 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_6_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tp1 = *(EIF_POINTER *)(loc1 + O12527[Dtype(loc1)-1295]);
		tp2 = *(EIF_POINTER *)(RTCV(RTOUCR(280,F1731_19637, (Current)))+ _PTROFF_0_1_0_0_0_0_);
		if ((EIF_BOOLEAN)(inline_F67_9738(tp1, ((EIF_INTEGER_32) -3L), ((EIF_INTEGER_32) 0L), tp2) != ((EIF_INTEGER_32) 0L))) {
			tr1 = F1394_16885(RTCV(RTOUCR(280,F1731_19637, (Current))));
			Result = F1408_17332(RTCW(tr1));
		}
	}
	RTLE;
	return Result;
}

/* {EV_MENU_BAR_IMP}.height */
EIF_INTEGER_32 F1731_19612 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_6_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tp1 = *(EIF_POINTER *)(loc1 + O12527[Dtype(loc1)-1295]);
		tp2 = *(EIF_POINTER *)(RTCV(RTOUCR(280,F1731_19637, (Current)))+ _PTROFF_0_1_0_0_0_0_);
		if ((EIF_BOOLEAN)(inline_F67_9738(tp1, ((EIF_INTEGER_32) -3L), ((EIF_INTEGER_32) 0L), tp2) != ((EIF_INTEGER_32) 0L))) {
			tr1 = F1394_16885(RTCV(RTOUCR(280,F1731_19637, (Current))));
			Result = F1408_17333(RTCW(tr1));
		}
	}
	RTLE;
	return Result;
}

/* {EV_MENU_BAR_IMP}.minimum_width */
EIF_INTEGER_32 F1731_19613 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) F1731_19611(Current);
}

/* {EV_MENU_BAR_IMP}.minimum_height */
EIF_INTEGER_32 F1731_19614 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) F1731_19612(Current);
}

/* {EV_MENU_BAR_IMP}.parent */
EIF_REFERENCE F1731_19615 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_6_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tr1 = *(EIF_REFERENCE *)(loc1 + O15892[Dtype(loc1)-1695]);
		RTLE;
		return (EIF_REFERENCE) tr1;
	}
	RTLE;
	return (EIF_REFERENCE) 0;
}

/* {EV_MENU_BAR_IMP}.is_sensitive */
EIF_BOOLEAN F1731_19616 (EIF_REFERENCE Current)
{
	return (EIF_BOOLEAN) EIF_TRUE;
}

/* {EV_MENU_BAR_IMP}.destroy */
void F1731_19617 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_6_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		F1982_24465(loc1);
	}
	F1696_18991(Current, (EIF_BOOLEAN) 1);
	RTLE;
}

/* {EV_MENU_BAR_IMP}.update_parent_size */
void F1731_19618 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_6_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		F1982_24478(loc1, (EIF_BOOLEAN) 0);
	}
	RTLE;
}

/* {EV_MENU_BAR_IMP}.find_item_at_position */
EIF_REFERENCE F1731_19622 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

/* {EV_MENU_BAR_IMP}.top_level_window_imp */
EIF_REFERENCE F1731_19632 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_REFERENCE) *(EIF_REFERENCE *)(Current + _REFACS_6_);
}

/* {EV_MENU_BAR_IMP}.set_parent_imp */
void F1731_19633 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		RTAR(Current, arg1);
		*(EIF_REFERENCE *)(Current + _REFACS_6_) = (EIF_REFERENCE) arg1;
	} else {
		*(EIF_REFERENCE *)(Current + _REFACS_6_) = (EIF_REFERENCE) NULL;
	}
	RTLE;
}

/* {EV_MENU_BAR_IMP}.info */
static EIF_REFERENCE F1731_19637_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(280)

	RTLI(1);
	RTLR(0,tr1);
	RTLIU(1);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(eif_new_type(1393, 0x01).id, 1393, _OBJSIZ_0_1_0_0_0_1_0_0_);
	F1394_16884(RTCW(tr1));
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1731_19637 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(280,F1731_19637_body,(Current));
}

void EIF_Minit1720 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
