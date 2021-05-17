/*
 * Code for class WEL_UP_DOWN_CONTROL
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1917.h"
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

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_UP_DOWN_CONTROL}.make */
void F1934_23140 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_INTEGER_32 arg5, EIF_INTEGER_32 arg6)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R18790[dtype-1916])(Current);
	{
		/* INLINED CODE (ANY.default_pointer) */
		tp1 = (EIF_POINTER)  0;
		/* END INLINED CODE */
	}
	tp2 = tp1;
	F1912_22614(Current, arg1, NULL, ti4_1, arg2, arg3, arg4, arg5, arg6, tp2);
	*(EIF_INTEGER_32 *)(Current + O19029[dtype-1925]) = (EIF_INTEGER_32) arg6;
	RTLE;
}

/* {WEL_UP_DOWN_CONTROL}.position */
EIF_INTEGER_32 F1934_23141 (EIF_REFERENCE Current)
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
	Result = inline_F67_9747(tp1, ((EIF_INTEGER_32) 1138L), tp2, tp3);
	RTLE;
	return Result;
}

/* {WEL_UP_DOWN_CONTROL}.minimum */
EIF_INTEGER_32 F1934_23142 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	RTAOMS(23141,1);
	RTCOMS(tr1,23141,0,"lower should be an INTEGER_32",29,343216178);
	{
		/* INLINED CODE (REFACTORING_HELPER.fixme) */
		/* END INLINED CODE */
	}
	;
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	ti4_1 = (EIF_INTEGER_32) UDM_GETRANGE32;
	tp2 = (EIF_POINTER) (LPARAM)((((EIF_INTEGER_32) 0L)));
	inline_F67_9749(tp1, ti4_1, (EIF_INTEGER_32 *) &(loc1), tp2);
	RTLE;
	return (EIF_INTEGER_32) loc1;
}

/* {WEL_UP_DOWN_CONTROL}.maximum */
EIF_INTEGER_32 F1934_23143 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	RTAOMS(23142,1);
	RTCOMS(tr1,23142,0,"upper should be an INTEGER_32",29,1905436466);
	{
		/* INLINED CODE (REFACTORING_HELPER.fixme) */
		/* END INLINED CODE */
	}
	;
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	ti4_1 = (EIF_INTEGER_32) UDM_GETRANGE32;
	tp2 = (EIF_POINTER) (WPARAM)((((EIF_INTEGER_32) 0L)));
	inline_F67_9749(tp1, ti4_1, tp2, (EIF_INTEGER_32 *) &(loc1));
	RTLE;
	return (EIF_INTEGER_32) loc1;
}

/* {WEL_UP_DOWN_CONTROL}.set_position */
void F1934_23145 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	tp2 = (EIF_POINTER) (WPARAM)((((EIF_INTEGER_32) 0L)));
	tp3 = (EIF_POINTER) (LPARAM)((arg1));
	inline_F67_9749(tp1, ((EIF_INTEGER_32) 1137L), tp2, tp3);
	RTLE;
}

/* {WEL_UP_DOWN_CONTROL}.set_range */
void F1934_23146 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	tp2 = (EIF_POINTER) (WPARAM)((arg1));
	tp3 = (EIF_POINTER) (LPARAM)((arg2));
	inline_F67_9749(tp1, ((EIF_INTEGER_32) 1135L), tp2, tp3);
	RTLE;
}

/* {WEL_UP_DOWN_CONTROL}.set_buddy_window */
void F1934_23147 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	ti4_1 = (EIF_INTEGER_32) UDM_SETBUDDY;
	tp2 = *(EIF_POINTER *)(RTCW(arg1) + O12527[Dtype(arg1)-1295]);
	tp3 = (EIF_POINTER) (LPARAM)((((EIF_INTEGER_32) 0L)));
	inline_F67_9749(tp1, ti4_1, tp2, tp3);
	RTLE;
}

/* {WEL_UP_DOWN_CONTROL}.class_name */
static EIF_REFERENCE F1934_23152_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(443)

	RTLI(1);
	RTLR(0,tr1);
	RTLIU(1);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(eif_new_type(944, 0x01).id, 944, _OBJSIZ_1_0_0_1_0_0_0_0_);
	tp1 = (EIF_POINTER) UPDOWN_CLASS;
	F945_14351(RTCW(tr1), tp1);
	Result = F944_3743(RTCW(tr1));
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1934_23152 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(443,F1934_23152_body,(Current));
}

/* {WEL_UP_DOWN_CONTROL}.default_style */
static EIF_INTEGER_32 F1934_23153_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 444)

	
	RTEV;
	RTOTP;
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (((EIF_INTEGER_32) 268435456L) + ((EIF_INTEGER_32) 1073741824L)) + ((EIF_INTEGER_32) 131072L)) + ((EIF_INTEGER_32) 65536L)) + ((EIF_INTEGER_32) 2L)) + ((EIF_INTEGER_32) 4L));
	RTOTE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F1934_23153 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,444,F1934_23153_body,(Current));
}

/* {WEL_UP_DOWN_CONTROL}.cwin_updown_class */
EIF_POINTER F1934_23154 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = (EIF_POINTER) UPDOWN_CLASS;
	return Result;
}

void EIF_Minit1917 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
