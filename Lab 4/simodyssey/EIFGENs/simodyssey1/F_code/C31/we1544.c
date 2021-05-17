/*
 * Code for class WEL_CHARACTER_RANGE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1544.h"
#include <chrrange.h>
#include <windows.h>

#ifdef __cplusplus
extern "C" {
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

/* {WEL_CHARACTER_RANGE}.make */
void F1406_17183 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1337_15830(Current);
	F1406_17188(Current, arg1, arg2);
	RTLE;
}

/* {WEL_CHARACTER_RANGE}.make_empty */
void F1406_17184 (EIF_REFERENCE Current)
{
	GTCX
	
	
	F1337_15830(Current);
}

/* {WEL_CHARACTER_RANGE}.minimum */
EIF_INTEGER_32 F1406_17186 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	return (EIF_INTEGER_32) (EIF_INTEGER_32) cwel_charrange_get_cpmin((tp1));
}

/* {WEL_CHARACTER_RANGE}.maximum */
EIF_INTEGER_32 F1406_17187 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	return (EIF_INTEGER_32) (EIF_INTEGER_32) cwel_charrange_get_cpmax((tp1));
}

/* {WEL_CHARACTER_RANGE}.set_range */
void F1406_17188 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	cwel_charrange_set_cpmin((tp1), (arg1));
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	cwel_charrange_set_cpmax((tp1), (arg2));
	RTLE;
}

/* {WEL_CHARACTER_RANGE}.update_with_rich_edit */
void F1406_17189 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_POINTER tp4;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(RTCW(arg1) + O12527[Dtype(arg1)-1295]);
	{
		/* INLINED CODE (ANY.default_pointer) */
		tp2 = (EIF_POINTER)  0;
		/* END INLINED CODE */
	}
	tp3 = tp2;
	tp4 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	inline_F67_9749(tp1, ((EIF_INTEGER_32) 1076L), tp3, tp4);
	RTLE;
}

/* {WEL_CHARACTER_RANGE}.structure_size */
static EIF_INTEGER_32 F1406_17190_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 342)

	
	RTEV;
	RTOTP;
	Result = (EIF_INTEGER_32) sizeof (CHARRANGE);
	RTOTE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F1406_17190 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,342,F1406_17190_body,(Current));
}

/* {WEL_CHARACTER_RANGE}.cwel_size_of_charrange */
EIF_INTEGER_32 F1406_17191 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) sizeof (CHARRANGE);
	return Result;
}

/* {WEL_CHARACTER_RANGE}.cwel_charrange_set_cpmin */
void F1406_17192 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	cwel_charrange_set_cpmin((arg1), (arg2));
}

/* {WEL_CHARACTER_RANGE}.cwel_charrange_set_cpmax */
void F1406_17193 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	cwel_charrange_set_cpmax((arg1), (arg2));
}

/* {WEL_CHARACTER_RANGE}.cwel_charrange_get_cpmin */
EIF_INTEGER_32 F1406_17194 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) cwel_charrange_get_cpmin((arg1));
	return Result;
}

/* {WEL_CHARACTER_RANGE}.cwel_charrange_get_cpmax */
EIF_INTEGER_32 F1406_17195 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) cwel_charrange_get_cpmax((arg1));
	return Result;
}

void EIF_Minit1544 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
