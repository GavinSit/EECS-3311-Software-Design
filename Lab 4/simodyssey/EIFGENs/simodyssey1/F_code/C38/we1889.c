/*
 * Code for class WEL_POINT
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1889.h"
#include <point.h>
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

/* {WEL_POINT}.make */
void F1906_22334 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1337_15830(Current);
	F1906_22339(Current, arg1);
	F1906_22340(Current, arg2);
	RTLE;
}

/* {WEL_POINT}.x */
EIF_INTEGER_32 F1906_22336 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	return (EIF_INTEGER_32) (EIF_INTEGER_32) (((POINT *)tp1)->x);
}

/* {WEL_POINT}.y */
EIF_INTEGER_32 F1906_22337 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	return (EIF_INTEGER_32) (EIF_INTEGER_32) (((POINT *)tp1)->y);
}

/* {WEL_POINT}.set_x_y */
void F1906_22338 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	(((POINT *)tp1)->x = (LONG)(arg1));
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	(((POINT *)tp1)->y = (LONG)(arg2));
	RTLE;
}

/* {WEL_POINT}.set_x */
void F1906_22339 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	(((POINT *)tp1)->x = (LONG)(arg1));
}

/* {WEL_POINT}.set_y */
void F1906_22340 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	(((POINT *)tp1)->y = (LONG)(arg1));
}

/* {WEL_POINT}.set_cursor_position */
void F1906_22341 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	GetCursorPos(((POINT *) tp1));
}

/* {WEL_POINT}.window_at */
EIF_REFERENCE F1906_22342 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	loc1 = (EIF_POINTER) cwin_window_from_point(((POINT*) tp1));
	if ((EIF_BOOLEAN)(loc1 != loc2)) {
		RTLE;
		return (EIF_REFERENCE) F1898_22150(Current, loc1);
	}
	RTLE;
	return (EIF_REFERENCE) 0;
}

/* {WEL_POINT}.is_equal */
EIF_BOOLEAN F1906_22343 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	Result = '\0';
	ti4_1 = F1906_22336(RTCW(arg1));
	if ((EIF_BOOLEAN)(F1906_22336(Current) == ti4_1)) {
		ti4_1 = F1906_22337(RTCW(arg1));
		Result = (EIF_BOOLEAN)(F1906_22337(Current) == ti4_1);
	}
	RTLE;
	return Result;
}

/* {WEL_POINT}.client_to_screen */
void F1906_22344 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(RTCW(arg1) + O12527[Dtype(arg1)-1295]);
	tp2 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	ClientToScreen(((HWND) tp1), ((POINT *) tp2));
	RTLE;
}

/* {WEL_POINT}.screen_to_client */
void F1906_22345 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(RTCW(arg1) + O12527[Dtype(arg1)-1295]);
	tp2 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	ScreenToClient(((HWND) tp1), ((POINT *) tp2));
	RTLE;
}

/* {WEL_POINT}.structure_size */
static EIF_INTEGER_32 F1906_22346_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 290)

	
	RTEV;
	RTOTP;
	Result = (EIF_INTEGER_32) sizeof (POINT);
	RTOTE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F1906_22346 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,290,F1906_22346_body,(Current));
}

/* {WEL_POINT}.c_size_of_point */
EIF_INTEGER_32 F1906_22347 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) sizeof (POINT);
	return Result;
}

/* {WEL_POINT}.cwel_point_set_x */
void F1906_22348 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	(((POINT *)arg1)->x = (LONG)(arg2));
	
}

/* {WEL_POINT}.cwel_point_set_y */
void F1906_22349 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	(((POINT *)arg1)->y = (LONG)(arg2));
	
}

/* {WEL_POINT}.cwel_point_get_x */
EIF_INTEGER_32 F1906_22350 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) (((POINT *)arg1)->x);
	
	return Result;
}

/* {WEL_POINT}.cwel_point_get_y */
EIF_INTEGER_32 F1906_22351 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) (((POINT *)arg1)->y);
	
	return Result;
}

/* {WEL_POINT}.cwin_window_from_point */
EIF_POINTER F1906_22352 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = (EIF_POINTER) cwin_window_from_point(((POINT*) arg1));
	return Result;
}

/* {WEL_POINT}.cwin_client_to_screen */
void F1906_22353 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	
	ClientToScreen(((HWND) arg1), ((POINT *) arg2));
}

/* {WEL_POINT}.cwin_screen_to_client */
void F1906_22354 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	
	ScreenToClient(((HWND) arg1), ((POINT *) arg2));
}

/* {WEL_POINT}.cwin_get_cursor_position */
void F1906_22355 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	
	GetCursorPos(((POINT *) arg1));
}

void EIF_Minit1889 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
