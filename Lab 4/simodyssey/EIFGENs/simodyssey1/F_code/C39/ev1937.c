/*
 * Code for class EV_SCREEN_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1937.h"
#include <windows.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F67_9729
static EIF_POINTER inline_F67_9729 (EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	return (EIF_POINTER) (MonitorFromRect((LPCRECT) arg1, (DWORD) arg2))
	;
}
#define INLINE_F67_9729
#endif
#ifndef INLINE_F67_9731
static int inline_F67_9731 (EIF_POINTER arg1, EIF_POINTER arg2)
{
	return (int) (GetMonitorInfo ((HMONITOR) arg1, (LPMONITORINFO) arg2))
	;
}
#define INLINE_F67_9731
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_SCREEN_IMP}.make */
void F1954_23586 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNSMART(eif_new_type(1310, 1).id);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_10_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_10_);
	F1311_15448(RTCW(tr1));
	F1952_23490(Current);
	RTLE;
}

/* {EV_SCREEN_IMP}.dc */
EIF_REFERENCE F1954_23587 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_10_);
}


/* {EV_SCREEN_IMP}.pointer_position */
EIF_REFERENCE F1954_23589 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLIU(3);
	
	RTGC;
	loc1 = RTOUCR(278,F1954_23622, (Current));
	F1906_22341(RTCW(loc1));
	Result = RTLNS(eif_new_type(1168, 0x01).id, 1168, _OBJSIZ_0_0_0_0_0_0_0_2_);
	ti4_1 = F1906_22336(RTCW(loc1));
	ti4_2 = F1906_22337(RTCW(loc1));
	F1169_14630(RTCW(Result), ti4_1, ti4_2);
	RTLE;
	return Result;
}

/* {EV_SCREEN_IMP}.widget_at_mouse_pointer */
EIF_REFERENCE F1954_23590 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLIU(3);
	
	RTGC;
	loc1 = RTOUCR(278,F1954_23622, (Current));
	F1906_22341(RTCW(loc1));
	ti4_1 = F1906_22336(RTCW(loc1));
	ti4_2 = F1906_22337(RTCW(loc1));
	Result = F1954_23591(Current, ti4_1, ti4_2);
	RTLE;
	return Result;
}

/* {EV_SCREEN_IMP}.widget_at_position */
EIF_REFERENCE F1954_23591 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(8);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,loc3);
	RTLR(4,tr1);
	RTLR(5,loc4);
	RTLR(6,Result);
	RTLR(7,loc5);
	RTLIU(8);
	
	RTGC;
	loc2 = RTOUCR(278,F1954_23622, (Current));
	F1906_22338(RTCW(loc2), arg1, arg2);
	loc1 = F1906_22342(RTCW(loc2));
	loc3 = loc1;
	loc3 = RTRV(eif_new_type(1969, 0x00), loc3);
	if ((EIF_BOOLEAN)(loc3 != NULL)) {
		tr1 = *(EIF_REFERENCE *)(RTCW(loc3) + O15892[Dtype(loc3)-1695]);
		RTLE;
		return (EIF_REFERENCE) tr1;
	} else {
		loc4 = loc1;
		loc4 = RTRV(eif_new_type(1937, 0x00), loc4);
		if ((EIF_BOOLEAN)(loc4 != NULL)) {
			Result = F1938_23255(RTCW(loc4));
			Result = *(EIF_REFERENCE *)(RTCW(Result) + _REFACS_37_);
		} else {
			loc5 = loc1;
			loc5 = RTRV(eif_new_type(1950, 0x00), loc5);
			if ((EIF_BOOLEAN)(loc5 != NULL)) {
				Result = F1951_23464(RTCW(loc5));
				Result = *(EIF_REFERENCE *)(RTCW(Result) + _REFACS_37_);
			}
		}
	}
	RTLE;
	return Result;
}

/* {EV_SCREEN_IMP}.monitor_area_from_position */
EIF_REFERENCE F1954_23592 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc4 = (EIF_BOOLEAN) 0;
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,loc3);
	RTLR(1,loc2);
	RTLR(2,Result);
	RTLR(3,Current);
	RTLIU(4);
	
	RTGC;
	loc3 = RTLNS(eif_new_type(1407, 0x01).id, 1407, _OBJSIZ_0_1_0_0_0_1_0_0_);
	F1408_17321(RTCW(loc3), arg1, arg2, arg1, arg2);
	tp1 = *(EIF_POINTER *)(RTCW(loc3)+ _PTROFF_0_1_0_0_0_0_);
	loc1 = inline_F67_9729(tp1, ((EIF_INTEGER_32) 2L));
	loc2 = RTLNS(eif_new_type(1394, 0x01).id, 1394, _OBJSIZ_0_1_0_0_0_1_0_0_);
	F1395_16890(RTCW(loc2));
	tp1 = *(EIF_POINTER *)(RTCW(loc2)+ _PTROFF_0_1_0_0_0_0_);
	loc4 = EIF_TEST (inline_F67_9731(loc1, tp1));
	if (loc4) {
		loc3 = F1395_16891(RTCW(loc2));
		Result = RTLNS(eif_new_type(1167, 0x01).id, 1167, _OBJSIZ_0_0_0_4_0_0_0_0_);
		ti4_1 = F1408_17327(RTCW(loc3));
		ti4_2 = F1408_17329(RTCW(loc3));
		ti4_3 = F1408_17332(RTCW(loc3));
		ti4_4 = F1408_17333(RTCW(loc3));
		F1168_14589(RTCW(Result), ti4_1, ti4_2, ti4_3, ti4_4);
	} else {
		Result = F1807_20316(Current, arg1, arg2);
		RTLE;
		return (EIF_REFERENCE) Result;
	}
	RTLE;
	return Result;
}

/* {EV_SCREEN_IMP}.width */
EIF_INTEGER_32 F1954_23607 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_10_);
	Result = F1306_15240(RTCW(tr1));
	RTLE;
	return Result;
}

/* {EV_SCREEN_IMP}.height */
EIF_INTEGER_32 F1954_23608 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_10_);
	Result = F1306_15241(RTCW(tr1));
	RTLE;
	return Result;
}

/* {EV_SCREEN_IMP}.virtual_width */
EIF_INTEGER_32 F1954_23609 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	Result = F1849_20926(RTCV(RTOUCR(279,F1954_23620, (Current))));
	RTLE;
	return Result;
}

/* {EV_SCREEN_IMP}.virtual_height */
EIF_INTEGER_32 F1954_23610 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	Result = F1849_20927(RTCV(RTOUCR(279,F1954_23620, (Current))));
	RTLE;
	return Result;
}

/* {EV_SCREEN_IMP}.virtual_x */
EIF_INTEGER_32 F1954_23611 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	Result = F1849_20924(RTCV(RTOUCR(279,F1954_23620, (Current))));
	RTLE;
	return Result;
}

/* {EV_SCREEN_IMP}.virtual_y */
EIF_INTEGER_32 F1954_23612 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	Result = F1849_20925(RTCV(RTOUCR(279,F1954_23620, (Current))));
	RTLE;
	return Result;
}

/* {EV_SCREEN_IMP}.destroy */
void F1954_23617 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_10_);
	F1311_15449(RTCW(tr1));
	F1952_23552(Current);
	RTLE;
}

/* {EV_SCREEN_IMP}.refresh_graphics_context */
void F1954_23618 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_10_);
	F1311_15449(RTCW(tr1));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_10_);
	F1311_15448(RTCW(tr1));
	ti4_1 = F1952_23498(Current);
	F1952_23507(Current, ti4_1);
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_11_6_)) {
		F1952_23513(Current);
	} else {
		F1952_23514(Current);
	}
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_9_) != NULL)) {
		tr1 = F1715_19380(Current);
		F1952_23504(Current, tr1);
	}
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_8_) != NULL)) {
		tr1 = F1715_19379(Current);
		F1952_23505(Current, tr1);
	}
	RTLE;
}

/* {EV_SCREEN_IMP}.system_metrics_constants */
static EIF_REFERENCE F1954_23620_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(279)

	RTLI(1);
	RTLR(0,tr1);
	RTLIU(1);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(eif_new_type(1848, 0x01).id, 1848, _OBJSIZ_0_0_0_0_0_0_0_0_);
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1954_23620 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(279,F1954_23620_body,(Current));
}

/* {EV_SCREEN_IMP}.reusable_wel_point */
static EIF_REFERENCE F1954_23622_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(278)

	RTLI(1);
	RTLR(0,tr1);
	RTLIU(1);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(eif_new_type(1905, 0x01).id, 1905, _OBJSIZ_0_1_0_0_0_1_0_0_);
	F1906_22334(RTCW(tr1), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L));
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1954_23622 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(278,F1954_23622_body,(Current));
}

void EIF_Minit1937 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
