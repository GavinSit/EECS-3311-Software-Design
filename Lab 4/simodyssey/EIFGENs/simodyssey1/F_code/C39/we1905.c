/*
 * Code for class WEL_CONTROL_WINDOW
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1905.h"
#include <windows.h>
#include "eif_misc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F67_9746
static EIF_POINTER inline_F67_9746 (EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3, EIF_POINTER arg4)
{
	return (EIF_POINTER) (SendMessage ((HWND) arg1, (UINT) arg2, (WPARAM) arg3, (LPARAM) arg4))
	;
}
#define INLINE_F67_9746
#endif
#ifndef INLINE_F470_13514
static EIF_POINTER inline_F470_13514 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	return (EIF_POINTER) (rt_uint_ptr) MAKELONG(arg1, arg2);
	;
}
#define INLINE_F470_13514
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

/* {WEL_CONTROL_WINDOW}.font */
EIF_REFERENCE F1922_22859 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	
	RTGC;
	if (F1922_22861(Current)) {
		tr1 = RTLNS(eif_new_type(501, 0x01).id, 501, _OBJSIZ_0_0_0_0_0_0_0_0_);
		Result = F502_14138(RTCW(tr1));
	} else {
		Result = RTLNS(eif_new_type(1884, 0x01).id, 1884, _OBJSIZ_0_2_0_3_0_1_0_0_);
		tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
		tp2 = F1_33(Current);
		tp3 = F1_33(Current);
		tp1 = inline_F67_9746(tp1, ((EIF_INTEGER_32) 49L), tp2, tp3);
		F1317_15540(RTCW(Result), tp1);
	}
	RTLE;
	return Result;
}

/* {WEL_CONTROL_WINDOW}.set_font */
void F1922_22860 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	tp2 = *(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_0_2_0_3_0_0_);
	tp3 = inline_F470_13514(((EIF_INTEGER_32) 1L), ((EIF_INTEGER_32) 0L));
	inline_F67_9749(tp1, ((EIF_INTEGER_32) 48L), tp2, tp3);
	RTLE;
}

/* {WEL_CONTROL_WINDOW}.has_system_font */
EIF_BOOLEAN F1922_22861 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_POINTER tp4;
	EIF_POINTER tp5;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	{
		/* INLINED CODE (ANY.default_pointer) */
		tp2 = (EIF_POINTER)  0;
		/* END INLINED CODE */
	}
	tp3 = tp2;
	{
		/* INLINED CODE (ANY.default_pointer) */
		tp4 = (EIF_POINTER)  0;
		/* END INLINED CODE */
	}
	tp5 = tp4;
	tp1 = inline_F67_9746(tp1, ((EIF_INTEGER_32) 49L), tp3, tp5);
	{
		/* INLINED CODE (ANY.default_pointer) */
		tp2 = (EIF_POINTER)  0;
		/* END INLINED CODE */
	}
	tp3 = tp2;
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tp1 == tp3);
	RTLE;
	return Result;
}

/* {WEL_CONTROL_WINDOW}.move_and_resize */
void F1922_22866 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_BOOLEAN arg5)
{
	GTCX
	
	
	F1912_22645(Current, arg1, arg2, arg3, arg4, arg5, ((EIF_INTEGER_32) 0L));
}

/* {WEL_CONTROL_WINDOW}.default_style */
static EIF_INTEGER_32 F1922_22867_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 334)

	
	RTEV;
	RTGC;
	RTOTP;
	Result = eif_bit_or(((EIF_INTEGER_32) 1073741824L),((EIF_INTEGER_32) 268435456L));
	RTOTE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F1922_22867 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,334,F1922_22867_body,(Current));
}

/* {WEL_CONTROL_WINDOW}.class_requires_icon */
EIF_BOOLEAN F1922_22868 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
}

void EIF_Minit1905 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
