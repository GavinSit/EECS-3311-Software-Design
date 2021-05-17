/*
 * Code for class WEL_TOOLTIP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1910.h"
#include <windows.h>
#include "cctrl.h"
#include <cctrl.h>

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
#ifndef INLINE_F67_9749
static void inline_F67_9749 (EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3, EIF_POINTER arg4)
{
	SendMessage ((HWND) arg1, (UINT) arg2, (WPARAM) arg3, (LPARAM) arg4)
	;
}
#define INLINE_F67_9749
#endif
#ifndef INLINE_F470_13514
static EIF_POINTER inline_F470_13514 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	return (EIF_POINTER) (rt_uint_ptr) MAKELONG(arg1, arg2);
	;
}
#define INLINE_F470_13514
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_TOOLTIP}.make */
void F1927_22925 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	ti4_1 = RTOUCB(EIF_INTEGER_32,370,F1927_22948, (Current));
	ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_5_2_0_2_);
	{
		/* INLINED CODE (ANY.default_pointer) */
		tp1 = (EIF_POINTER)  0;
		/* END INLINED CODE */
	}
	tp2 = tp1;
	F1912_22614(Current, arg1, NULL, ti4_1, ((EIF_INTEGER_32) 0x80000000L), ((EIF_INTEGER_32) 0x80000000L), ((EIF_INTEGER_32) 0x80000000L), ((EIF_INTEGER_32) 0x80000000L), ti4_2, tp2);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_5_2_0_2_) = (EIF_INTEGER_32) arg2;
	RTLE;
}

/* {WEL_TOOLTIP}.initial_delay_time */
EIF_INTEGER_32 F1927_22929 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_5_2_0_3_0_0_);
	ti4_1 = (EIF_INTEGER_32) TTM_GETDELAYTIME;
	ti4_2 = (EIF_INTEGER_32) TTDT_INITIAL;
	tp2 = (EIF_POINTER) (WPARAM)((ti4_2));
	tp3 = (EIF_POINTER) (LPARAM)((((EIF_INTEGER_32) 0L)));
	Result = inline_F67_9747(tp1, ti4_1, tp2, tp3);
	RTLE;
	return Result;
}

/* {WEL_TOOLTIP}.activate */
void F1927_22934 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_POINTER tp4;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_5_2_0_3_0_0_);
	ti4_1 = (EIF_INTEGER_32) TTM_ACTIVATE;
	tp2 = (EIF_POINTER) (WPARAM)((((EIF_INTEGER_32) 1L)));
	{
		/* INLINED CODE (ANY.default_pointer) */
		tp3 = (EIF_POINTER)  0;
		/* END INLINED CODE */
	}
	tp4 = tp3;
	inline_F67_9749(tp1, ti4_1, tp2, tp4);
	RTLE;
}

/* {WEL_TOOLTIP}.set_max_tip_width */
void F1927_22938 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_5_2_0_3_0_0_);
	ti4_1 = (EIF_INTEGER_32) TTM_SETMAXTIPWIDTH;
	tp2 = (EIF_POINTER) (WPARAM)((((EIF_INTEGER_32) 0L)));
	tp3 = (EIF_POINTER) (LPARAM)((arg1));
	inline_F67_9749(tp1, ti4_1, tp2, tp3);
	RTLE;
}

/* {WEL_TOOLTIP}.set_initial_delay_time */
void F1927_22939 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_5_2_0_3_0_0_);
	ti4_1 = (EIF_INTEGER_32) TTM_SETDELAYTIME;
	ti4_2 = (EIF_INTEGER_32) TTDT_INITIAL;
	tp2 = (EIF_POINTER) (WPARAM)((ti4_2));
	tp3 = inline_F470_13514(arg1, ((EIF_INTEGER_32) 0L));
	inline_F67_9749(tp1, ti4_1, tp2, tp3);
	RTLE;
}

/* {WEL_TOOLTIP}.add_tool */
void F1927_22943 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_5_2_0_3_0_0_);
	ti4_1 = (EIF_INTEGER_32) TTM_ADDTOOL;
	tp2 = (EIF_POINTER) (WPARAM)((((EIF_INTEGER_32) 0L)));
	tp3 = *(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_1_1_0_0_0_0_);
	inline_F67_9749(tp1, ti4_1, tp2, tp3);
	RTLE;
}

/* {WEL_TOOLTIP}.remove_tool */
void F1927_22945 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_5_2_0_3_0_0_);
	ti4_1 = (EIF_INTEGER_32) TTM_DELTOOL;
	tp2 = (EIF_POINTER) (WPARAM)((((EIF_INTEGER_32) 0L)));
	tp3 = *(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_1_1_0_0_0_0_);
	inline_F67_9749(tp1, ti4_1, tp2, tp3);
	RTLE;
}

/* {WEL_TOOLTIP}.update_text */
void F1927_22946 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_5_2_0_3_0_0_);
	ti4_1 = (EIF_INTEGER_32) TTM_UPDATETIPTEXT;
	tp2 = (EIF_POINTER) (WPARAM)((((EIF_INTEGER_32) 0L)));
	tp3 = *(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_1_1_0_0_0_0_);
	inline_F67_9749(tp1, ti4_1, tp2, tp3);
	RTLE;
}

/* {WEL_TOOLTIP}.class_name */
static EIF_REFERENCE F1927_22947_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(371)

	RTLI(1);
	RTLR(0,tr1);
	RTLIU(1);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(eif_new_type(944, 0x01).id, 944, _OBJSIZ_1_0_0_1_0_0_0_0_);
	tp1 = (EIF_POINTER) TOOLTIPS_CLASS;
	F945_14351(RTCW(tr1), tp1);
	Result = F944_3743(RTCW(tr1));
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1927_22947 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(371,F1927_22947_body,(Current));
}

/* {WEL_TOOLTIP}.default_style */
static EIF_INTEGER_32 F1927_22948_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 370)

	
	RTEV;
	RTOTP;
	Result = (EIF_INTEGER_32) TTS_ALWAYSTIP;
	RTOTE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F1927_22948 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,370,F1927_22948_body,(Current));
}

/* {WEL_TOOLTIP}.default_ex_style */
static EIF_INTEGER_32 F1927_22949_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 372)

	
	RTEV;
	RTOTP;
	Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 8L);
	RTOTE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F1927_22949 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,372,F1927_22949_body,(Current));
}

/* {WEL_TOOLTIP}.cwin_tooltips_class */
EIF_POINTER F1927_22950 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = (EIF_POINTER) TOOLTIPS_CLASS;
	return Result;
}

void EIF_Minit1910 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
