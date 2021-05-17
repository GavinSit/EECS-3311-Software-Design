/*
 * Code for class WEL_IMAGELIST_TOOL_BAR
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1912.h"
#include <windows.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F67_9747
static EIF_INTEGER_32 inline_F67_9747 (EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3, EIF_POINTER arg4)
{
	return (EIF_INTEGER_32) (SendMessage ((HWND) arg1, (UINT) arg2, (WPARAM) arg3, (LPARAM) arg4))
	;
}
#define INLINE_F67_9747
#endif
#ifndef INLINE_F67_9746
static EIF_POINTER inline_F67_9746 (EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3, EIF_POINTER arg4)
{
	return (EIF_POINTER) (SendMessage ((HWND) arg1, (UINT) arg2, (WPARAM) arg3, (LPARAM) arg4))
	;
}
#define INLINE_F67_9746
#endif
#ifndef INLINE_F67_9749
static void inline_F67_9749 (EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3, EIF_POINTER arg4)
{
	SendMessage ((HWND) arg1, (UINT) arg2, (WPARAM) arg3, (LPARAM) arg4)
	;
}
#define INLINE_F67_9749
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_IMAGELIST_TOOL_BAR}.buttons_width */
EIF_INTEGER_32 F1929_23013 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) F1929_23019(Current);
}

/* {WEL_IMAGELIST_TOOL_BAR}.buttons_height */
EIF_INTEGER_32 F1929_23014 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) F1929_23020(Current);
}

/* {WEL_IMAGELIST_TOOL_BAR}.find_button */
EIF_INTEGER_32 F1929_23015 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	loc1 = RTLNS(eif_new_type(1905, 0x01).id, 1905, _OBJSIZ_0_1_0_0_0_1_0_0_);
	F1906_22334(RTCW(loc1), arg1, arg2);
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	tp2 = (EIF_POINTER) (WPARAM)((((EIF_INTEGER_32) 0L)));
	tp3 = *(EIF_POINTER *)(RTCW(loc1)+ _PTROFF_0_1_0_0_0_0_);
	Result = inline_F67_9747(tp1, ((EIF_INTEGER_32) 1093L), tp2, tp3);
	RTLE;
	return Result;
}

/* {WEL_IMAGELIST_TOOL_BAR}.get_max_width */
EIF_INTEGER_32 F1929_23016 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLIU(2);
	
	RTGC;
	for (;;) {
		if ((EIF_BOOLEAN) (loc2 >= F1928_22981(Current))) break;
		loc1 = F1928_22979(Current, loc2);
		ti4_1 = F1408_17330(RTCW(loc1));
		if ((EIF_BOOLEAN) (Result < ti4_1)) {
			Result = F1408_17330(RTCW(loc1));
		}
		loc2++;
	}
	RTLE;
	return Result;
}

/* {WEL_IMAGELIST_TOOL_BAR}.get_max_height */
EIF_INTEGER_32 F1929_23017 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLIU(2);
	
	RTGC;
	if ((EIF_BOOLEAN)(F1928_22981(Current) != ((EIF_INTEGER_32) 0L))) {
		ti4_1 = F1928_22981(Current);
		loc1 = F1928_22979(Current, (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L)));
		ti4_1 = F1408_17331(RTCW(loc1));
		RTLE;
		return (EIF_INTEGER_32) ti4_1;
	}
	RTLE;
	return (EIF_INTEGER_32) 0;
}

/* {WEL_IMAGELIST_TOOL_BAR}.get_max_size */
EIF_REFERENCE F1929_23018 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Result);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	Result = RTLNS(eif_new_type(1404, 0x01).id, 1404, _OBJSIZ_0_1_0_0_0_1_0_0_);
	F1405_17172(RTCW(Result));
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	tp2 = (EIF_POINTER) (WPARAM)((((EIF_INTEGER_32) 0L)));
	tp3 = *(EIF_POINTER *)(RTCW(Result)+ _PTROFF_0_1_0_0_0_0_);
	loc1 = inline_F67_9747(tp1, ((EIF_INTEGER_32) 1107L), tp2, tp3);
	RTLE;
	return Result;
}

/* {WEL_IMAGELIST_TOOL_BAR}.get_button_width */
EIF_INTEGER_32 F1929_23019 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	tp2 = (EIF_POINTER) (WPARAM)((((EIF_INTEGER_32) 0L)));
	tp3 = (EIF_POINTER) (LPARAM)((((EIF_INTEGER_32) 0L)));
	tp1 = inline_F67_9746(tp1, ((EIF_INTEGER_32) 1082L), tp2, tp3);
	Result = (EIF_INTEGER_32) LOWORD((tp1));
	RTLE;
	return Result;
}

/* {WEL_IMAGELIST_TOOL_BAR}.get_button_height */
EIF_INTEGER_32 F1929_23020 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	tp2 = (EIF_POINTER) (WPARAM)((((EIF_INTEGER_32) 0L)));
	tp3 = (EIF_POINTER) (LPARAM)((((EIF_INTEGER_32) 0L)));
	tp1 = inline_F67_9746(tp1, ((EIF_INTEGER_32) 1082L), tp2, tp3);
	Result = (EIF_INTEGER_32) HIWORD((tp1));
	RTLE;
	return Result;
}

/* {WEL_IMAGELIST_TOOL_BAR}.set_image_list */
void F1929_23021 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 == NULL)) {
		tp1 = *(EIF_POINTER *)(Current + O12527[dtype-1295]);
		tp2 = (EIF_POINTER) (WPARAM)((((EIF_INTEGER_32) 0L)));
		tp3 = (EIF_POINTER) (LPARAM)((((EIF_INTEGER_32) 0L)));
		inline_F67_9749(tp1, ((EIF_INTEGER_32) 1072L), tp2, tp3);
	} else {
		tp1 = *(EIF_POINTER *)(Current + O12527[dtype-1295]);
		tp2 = (EIF_POINTER) (WPARAM)((((EIF_INTEGER_32) 0L)));
		tp3 = *(EIF_POINTER *)(RTCW(arg1) + O12527[Dtype(arg1)-1295]);
		inline_F67_9749(tp1, ((EIF_INTEGER_32) 1072L), tp2, tp3);
	}
	RTLE;
}

/* {WEL_IMAGELIST_TOOL_BAR}.set_hot_image_list */
void F1929_23023 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 == NULL)) {
		tp1 = *(EIF_POINTER *)(Current + O12527[dtype-1295]);
		tp2 = (EIF_POINTER) (WPARAM)((((EIF_INTEGER_32) 0L)));
		tp3 = (EIF_POINTER) (LPARAM)((((EIF_INTEGER_32) 0L)));
		inline_F67_9749(tp1, ((EIF_INTEGER_32) 1076L), tp2, tp3);
	} else {
		tp1 = *(EIF_POINTER *)(Current + O12527[dtype-1295]);
		tp2 = (EIF_POINTER) (WPARAM)((((EIF_INTEGER_32) 0L)));
		tp3 = *(EIF_POINTER *)(RTCW(arg1) + O12527[Dtype(arg1)-1295]);
		inline_F67_9749(tp1, ((EIF_INTEGER_32) 1076L), tp2, tp3);
	}
	RTLE;
}

/* {WEL_IMAGELIST_TOOL_BAR}.default_style */
static EIF_INTEGER_32 F1929_23024_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 491)

	
	RTEV;
	RTOTP;
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (((EIF_INTEGER_32) 268435456L) + ((EIF_INTEGER_32) 1073741824L)) + ((EIF_INTEGER_32) 256L)) + ((EIF_INTEGER_32) 2048L));
	RTOTE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F1929_23024 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,491,F1929_23024_body,(Current));
}

void EIF_Minit1912 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
