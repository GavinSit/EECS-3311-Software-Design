/*
 * Code for class FUNCTION [G#1, BOOLEAN]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "fu265.h"
#include "eif_rout_obj.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F1555_6508
static int inline_F1555_6508 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3, EIF_POINTER arg4, EIF_INTEGER_32 arg5, EIF_BOOLEAN arg6, EIF_INTEGER_32 arg7, EIF_INTEGER_32 arg8, EIF_INTEGER_32 arg9, EIF_POINTER arg10)
{
	#ifdef WORKBENCH
	EIF_BOOLEAN result;
	if (arg1 != 0) {
		return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_POINTER, EIF_REFERENCE, EIF_REFERENCE)) arg1)(
			arg2, arg3, arg4).it_b;
	} else {
		rout_obj_call_function_dynamic (
			arg5,
			arg6,
			arg7,
			arg3,
			arg8,
			arg4,
			arg9,
			arg10, 
			&result);
		return result;
	}
#else
	return (FUNCTION_CAST(EIF_BOOLEAN, (EIF_POINTER, EIF_REFERENCE, EIF_REFERENCE)) arg1)(
		arg2, arg3, arg4);
#endif
	;
}
#define INLINE_F1555_6508
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {FUNCTION}.last_result */
EIF_BOOLEAN F1555_6499 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_4_2_);
}


/* {FUNCTION}.call */
void F1555_6500 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_BOOLEAN uarg1;
	EIF_BOOLEAN uarg;
	RTS_SD;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	uarg1 = (EIF_BOOLEAN) RTS_OU (arg1);
	uarg = uarg1;
	if (uarg) {
		RTS_RC;
		RTS_RS (arg1);
		RTS_RW;
	}
	tb1 = tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_POINTER, EIF_REFERENCE, EIF_REFERENCE)) *(EIF_POINTER *)(Current+ _PTROFF_4_3_0_3_0_2_))(
		*(EIF_POINTER *)(Current+ _PTROFF_4_3_0_3_0_1_),
		*(EIF_REFERENCE *)(Current + _REFACS_1_), arg1);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_4_2_) = (EIF_BOOLEAN) tb1;
	if (uarg) {
		RTS_RD;
	}
	RTLE;
}

/* {FUNCTION}.item */
EIF_BOOLEAN F1555_6501 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN uarg1;
	EIF_BOOLEAN uarg;
	RTS_SD;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	uarg1 = (EIF_BOOLEAN) RTS_OU (arg1);
	uarg = uarg1;
	if (uarg) {
		RTS_RC;
		RTS_RS (arg1);
		RTS_RW;
	}
	loc1 = F1552_6478(Current);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_4_3_0_3_0_2_);
	tp2 = *(EIF_POINTER *)(Current+ _PTROFF_4_3_0_3_0_1_);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_1_);
	tb1 = *(EIF_BOOLEAN *)(Current+ _CHROFF_4_1_);
	ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_2_);
	ti4_3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_0_);
	if (uarg) {
		RTS_RD;
	}
	RTLE;
	return (EIF_BOOLEAN) EIF_TEST (inline_F1555_6508(tp1, tp2, *(EIF_REFERENCE *)(Current + _REFACS_1_), arg1, ti4_1, tb1, ti4_2, loc1, ti4_3, *(EIF_REFERENCE *)(Current + _REFACS_2_)));
}

/* {FUNCTION}.apply */
void F1555_6502 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tb1 = tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_POINTER, EIF_REFERENCE, EIF_REFERENCE)) *(EIF_POINTER *)(Current+ _PTROFF_4_3_0_3_0_2_))(
		*(EIF_POINTER *)(Current+ _PTROFF_4_3_0_3_0_1_),
		*(EIF_REFERENCE *)(Current + _REFACS_1_), *(EIF_REFERENCE *)(Current));
	*(EIF_BOOLEAN *)(Current+ _CHROFF_4_2_) = (EIF_BOOLEAN) tb1;
	RTLE;
}

/* {FUNCTION}.is_equal */
EIF_BOOLEAN F1555_6503 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	Result = '\0';
	if (F1552_6465(Current, arg1)) {
		tb1 = *(EIF_BOOLEAN *)(RTCW(arg1)+ _CHROFF_4_2_);
		Result = (*(EIF_BOOLEAN *)(Current+ _CHROFF_4_2_) == tb1);
	}
	RTLE;
	return Result;
}

/* {FUNCTION}.copy */
void F1555_6504 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 != Current)) {
		F1552_6472(Current, arg1);
		tb1 = *(EIF_BOOLEAN *)(RTCW(arg1)+ _CHROFF_4_2_);
		*(EIF_BOOLEAN *)(Current+ _CHROFF_4_2_) = (EIF_BOOLEAN) tb1;
	}
	RTLE;
}

/* {FUNCTION}.flexible_item */
EIF_BOOLEAN F1555_6507 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN uarg1;
	EIF_BOOLEAN uarg;
	RTS_SD;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCFDT;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,loc1);
	RTLR(3,loc2);
	RTLR(4,tr1);
	RTLIU(5);
	
	RTGC;
	uarg1 = (EIF_BOOLEAN) RTS_OU (arg1);
	uarg = uarg1;
	if (uarg) {
		RTS_RC;
		RTS_RS (arg1);
		RTS_RW;
	}
	if ((EIF_BOOLEAN) !(EIF_BOOLEAN)(arg1 != NULL)) {
		if (uarg) {
			RTS_RD;
		}
		RTLE;
		return (EIF_BOOLEAN) (FUNCTION_CAST(EIF_BOOLEAN, (EIF_POINTER, EIF_REFERENCE, EIF_REFERENCE)) *(EIF_POINTER *)(Current+ _PTROFF_4_3_0_3_0_2_))(
			*(EIF_POINTER *)(Current+ _PTROFF_4_3_0_3_0_1_),
			*(EIF_REFERENCE *)(Current + _REFACS_1_), loc1);
	} else {
		RTCT0("from_precondition", EX_CHECK);
		tr1 = RTLNTY2(eif_gen_param(dftype, 1), 0x00);
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3877[Dtype(tr1)-1422])(tr1);
		tr1 = F507_1979(Current, ti4_1, arg1);
		loc2 = tr1;
		loc2 = RTRV(eif_gen_param(dftype, 1),loc2);
		if (EIF_TEST(loc2)) {
			RTCK0;
		} else {
			RTCF0;
		}
		Result = Result = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_POINTER, EIF_REFERENCE, EIF_REFERENCE)) *(EIF_POINTER *)(Current+ _PTROFF_4_3_0_3_0_2_))(
			*(EIF_POINTER *)(Current+ _PTROFF_4_3_0_3_0_1_),
			*(EIF_REFERENCE *)(Current + _REFACS_1_), loc2);
	}
	if (uarg) {
		RTS_RD;
	}
	RTLE;
	return Result;
}

/* {FUNCTION}.fast_item */
EIF_BOOLEAN F1555_6508 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3, EIF_POINTER arg4, EIF_INTEGER_32 arg5, EIF_BOOLEAN arg6, EIF_INTEGER_32 arg7, EIF_INTEGER_32 arg8, EIF_INTEGER_32 arg9, EIF_POINTER arg10)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	
	Result = EIF_TEST(inline_F1555_6508 ((EIF_POINTER) arg1, (EIF_POINTER) arg2, (EIF_POINTER) arg3, (EIF_POINTER) arg4, (EIF_INTEGER_32) arg5, (EIF_BOOLEAN) arg6, (EIF_INTEGER_32) arg7, (EIF_INTEGER_32) arg8, (EIF_INTEGER_32) arg9, (EIF_POINTER) arg10));
	return Result;
}

void EIF_Minit265 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
