/*
 * Code for class EV_INTERNAL_TOOL_BAR_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1906.h"
#include <windows.h>
#include "cctrl.h"
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

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_INTERNAL_TOOL_BAR_IMP}.make_with_toolbar */
void F1923_22870 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,arg2);
	RTLR(2,arg1);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTGC;
	RTAR(Current, arg2);
	*(EIF_REFERENCE *)(Current + _REFACS_7_) = (EIF_REFERENCE) arg2;
	tr1 = RTMS_EX_H("EV_INTERNAL_TOOL_BAR_IMP",24,673025872);
	F1917_22822(Current, arg1, tr1);
	RTLE;
}

/* {EV_INTERNAL_TOOL_BAR_IMP}.on_control_id_command */
void F1923_22872 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_7_);
	F1990_24716(RTCW(tr1), arg1);
	RTLE;
}

/* {EV_INTERNAL_TOOL_BAR_IMP}.on_notify */
void F1923_22873 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_POINTER loc4 = (EIF_POINTER) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(7);
	RTLR(0,arg2);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,loc3);
	RTLR(5,loc5);
	RTLR(6,loc2);
	RTLIU(7);
	
	RTGC;
	ti4_1 = F1903_22268(RTCW(arg2));
	if ((EIF_BOOLEAN)(ti4_1 == (EIF_INTEGER_32) TTN_NEEDTEXT)) {
		loc1 = RTLNS(eif_new_type(1390, 0x01).id, 1390, _OBJSIZ_1_1_0_0_0_1_0_0_);
		F1391_16829(RTCW(loc1), arg2);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_7_);
		tp1 = *(EIF_POINTER *)(RTCW(tr1)+ _PTROFF_61_34_6_11_0_0_);
		tp2 = (EIF_POINTER) (WPARAM)((((EIF_INTEGER_32) 0L)));
		tp3 = (EIF_POINTER) (LPARAM)((((EIF_INTEGER_32) 0L)));
		loc4 = inline_F67_9746(tp1, ((EIF_INTEGER_32) 1059L), tp2, tp3);
		loc3 = RTLNS(eif_new_type(1926, 0x01).id, 1926, _OBJSIZ_5_2_0_3_0_2_0_0_);
		F1296_15096(RTCW(loc3), loc4);
		loc5 = *(EIF_REFERENCE *)(Current + _REFACS_7_);
		loc5 = F1956_23756(RTCW(loc5));
		loc5 = F1696_18976(RTCW(loc5));
		tb1 = '\0';
		ti4_1 = F1607_17990(RTCW(loc5));
		if ((EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 0L))) {
			ti4_1 = F1927_22929(RTCW(loc3));
			ti4_2 = F1607_17990(RTCW(loc5));
			tb1 = (EIF_BOOLEAN)(ti4_1 != ti4_2);
		}
		if (tb1) {
			ti4_1 = F1607_17990(RTCW(loc5));
			F1927_22939(RTCW(loc3), ti4_1);
		}
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_7_);
		loc2 = F1990_24717(RTCW(tr1), arg1);
		if ((EIF_BOOLEAN)(loc2 != NULL)) {
			F1391_16835(RTCW(loc1), loc2);
		}
	}
	RTLE;
}

/* {EV_INTERNAL_TOOL_BAR_IMP}.on_erase_background */
void F1923_22874 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLR(3,arg2);
	RTLR(4,loc3);
	RTLR(5,arg1);
	RTLIU(6);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_7_);
	tr1 = F1929_23018(RTCW(tr1));
	loc2 = F1405_17174(RTCW(tr1));
	if ((EIF_BOOLEAN) (loc2 < F1912_22483(Current))) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_7_);
		loc1 = F1990_24738(RTCW(tr1));
		ti4_1 = F1408_17328(RTCW(arg2));
		F1408_17336(RTCW(arg2), (EIF_INTEGER_32) (ti4_1 + loc2));
		loc3 = *(EIF_REFERENCE *)(Current + _REFACS_7_);
		loc3 = F1956_23756(RTCW(loc3));
		loc3 = *(EIF_REFERENCE *)(RTCW(loc3) + _REFACS_41_);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R10490[Dtype(RTCW(loc3))-409])(loc3, *(EIF_REFERENCE *)(Current + _REFACS_7_), arg1, arg2, loc1);
			F519_14213(RTCW(loc1));
		}
	}
	F1912_22507(Current);
	tp1 = (EIF_POINTER) (LRESULT)((((EIF_INTEGER_32) 1L)));
	F214_11244(Current, tp1);
	RTLE;
}

/* {EV_INTERNAL_TOOL_BAR_IMP}.on_size */
void F1923_22875 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_7_);
	F1970_24130(RTCW(tr1), arg1, arg2, arg3);
	RTLE;
}

/* {EV_INTERNAL_TOOL_BAR_IMP}.default_style */
EIF_INTEGER_32 F1923_22876 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	RTGC;
	Result = eif_bit_or(((EIF_INTEGER_32) 1073741824L),((EIF_INTEGER_32) 67108864L));
	return Result;
}

void EIF_Minit1906 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
