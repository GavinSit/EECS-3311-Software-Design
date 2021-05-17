/*
 * Code for class WEL_RECT
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1546.h"
#include <rect.h>
#include <wel.h>
#include "eif_helpers.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_RECT}.make */
void F1408_17321 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1337_15830(Current);
	F1408_17334(Current, arg1, arg2, arg3, arg4);
	RTLE;
}

/* {WEL_RECT}.make_client_from_pointer */
void F1408_17324 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1337_15830(Current);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	GetClientRect(((HWND) arg1), ((RECT *) tp1));
	RTLE;
}

/* {WEL_RECT}.make_window_from_pointer */
void F1408_17325 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1337_15830(Current);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	GetWindowRect(((HWND) arg1), ((RECT *) tp1));
	RTLE;
}

/* {WEL_RECT}.left */
EIF_INTEGER_32 F1408_17326 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	return (EIF_INTEGER_32) (EIF_INTEGER_32) (((RECT *)tp1)->left);
}

/* {WEL_RECT}.x */
EIF_INTEGER_32 F1408_17327 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	return (EIF_INTEGER_32) (EIF_INTEGER_32) (((RECT *)tp1)->left);
}

/* {WEL_RECT}.top */
EIF_INTEGER_32 F1408_17328 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	return (EIF_INTEGER_32) (EIF_INTEGER_32) (((RECT *)tp1)->top);
}

/* {WEL_RECT}.y */
EIF_INTEGER_32 F1408_17329 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	return (EIF_INTEGER_32) (EIF_INTEGER_32) (((RECT *)tp1)->top);
}

/* {WEL_RECT}.right */
EIF_INTEGER_32 F1408_17330 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	return (EIF_INTEGER_32) (EIF_INTEGER_32) (((RECT *)tp1)->right);
}

/* {WEL_RECT}.bottom */
EIF_INTEGER_32 F1408_17331 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	return (EIF_INTEGER_32) (EIF_INTEGER_32) (((RECT *)tp1)->bottom);
}

/* {WEL_RECT}.width */
EIF_INTEGER_32 F1408_17332 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	ti4_1 = F1408_17330(Current);
	ti4_2 = F1408_17326(Current);
	Result = eif_abs_int32 ((EIF_INTEGER_32) (ti4_1 - ti4_2));
	RTLE;
	return Result;
}

/* {WEL_RECT}.height */
EIF_INTEGER_32 F1408_17333 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	ti4_1 = F1408_17331(Current);
	ti4_2 = F1408_17328(Current);
	Result = eif_abs_int32 ((EIF_INTEGER_32) (ti4_1 - ti4_2));
	RTLE;
	return Result;
}

/* {WEL_RECT}.set_rect */
void F1408_17334 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	SetRect(((RECT *) tp1), ((int) arg1), ((int) arg2), ((int) arg3), ((int) arg4));
}

/* {WEL_RECT}.set_left */
void F1408_17335 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	(((RECT *)tp1)->left = (LONG)(arg1));
}

/* {WEL_RECT}.set_top */
void F1408_17336 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	(((RECT *)tp1)->top = (LONG)(arg1));
}

/* {WEL_RECT}.set_right */
void F1408_17337 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	(((RECT *)tp1)->right = (LONG)(arg1));
}

/* {WEL_RECT}.set_bottom */
void F1408_17338 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	(((RECT *)tp1)->bottom = (LONG)(arg1));
}

/* {WEL_RECT}.offset */
void F1408_17339 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	OffsetRect(((RECT *) tp1), ((int) arg1), ((int) arg2));
}

/* {WEL_RECT}.inflate */
void F1408_17340 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	InflateRect(((RECT *) tp1), ((int) arg1), ((int) arg2));
}

/* {WEL_RECT}.is_equal */
EIF_BOOLEAN F1408_17346 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	tp2 = *(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_0_1_0_0_0_0_);
	Result = (EIF_BOOLEAN) EIF_TEST(EqualRect(((RECT *) tp1), ((RECT *) tp2)));
	RTLE;
	return Result;
}

/* {WEL_RECT}.structure_size */
static EIF_INTEGER_32 F1408_17347_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 292)

	
	RTEV;
	RTOTP;
	Result = (EIF_INTEGER_32) sizeof (RECT);
	RTOTE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F1408_17347 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,292,F1408_17347_body,(Current));
}

/* {WEL_RECT}.c_size_of_rect */
EIF_INTEGER_32 F1408_17348 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) sizeof (RECT);
	return Result;
}

/* {WEL_RECT}.cwel_rect_set_left */
void F1408_17349 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	(((RECT *)arg1)->left = (LONG)(arg2));
	
}

/* {WEL_RECT}.cwel_rect_set_top */
void F1408_17350 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	(((RECT *)arg1)->top = (LONG)(arg2));
	
}

/* {WEL_RECT}.cwel_rect_set_right */
void F1408_17351 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	(((RECT *)arg1)->right = (LONG)(arg2));
	
}

/* {WEL_RECT}.cwel_rect_set_bottom */
void F1408_17352 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	(((RECT *)arg1)->bottom = (LONG)(arg2));
	
}

/* {WEL_RECT}.cwel_rect_get_left */
EIF_INTEGER_32 F1408_17353 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) (((RECT *)arg1)->left);
	
	return Result;
}

/* {WEL_RECT}.cwel_rect_get_top */
EIF_INTEGER_32 F1408_17354 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) (((RECT *)arg1)->top);
	
	return Result;
}

/* {WEL_RECT}.cwel_rect_get_right */
EIF_INTEGER_32 F1408_17355 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) (((RECT *)arg1)->right);
	
	return Result;
}

/* {WEL_RECT}.cwel_rect_get_bottom */
EIF_INTEGER_32 F1408_17356 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) (((RECT *)arg1)->bottom);
	
	return Result;
}

/* {WEL_RECT}.cwin_set_rect */
void F1408_17357 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_INTEGER_32 arg5)
{
	GTCX
	
	
	SetRect(((RECT *) arg1), ((int) arg2), ((int) arg3), ((int) arg4), ((int) arg5));
}

/* {WEL_RECT}.cwin_get_window_rect */
void F1408_17358 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	
	GetWindowRect(((HWND) arg1), ((RECT *) arg2));
}

/* {WEL_RECT}.cwin_get_client_rect */
void F1408_17359 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	
	GetClientRect(((HWND) arg1), ((RECT *) arg2));
}

/* {WEL_RECT}.cwin_offset_rect */
void F1408_17362 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	
	
	OffsetRect(((RECT *) arg1), ((int) arg2), ((int) arg3));
}

/* {WEL_RECT}.cwin_inflate_rect */
void F1408_17363 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	
	
	InflateRect(((RECT *) arg1), ((int) arg2), ((int) arg3));
}

/* {WEL_RECT}.cwin_equal_rect */
EIF_BOOLEAN F1408_17367 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	
	Result = (EIF_BOOLEAN) EIF_TEST(EqualRect(((RECT *) arg1), ((RECT *) arg2)));
	return Result;
}

void EIF_Minit1546 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
