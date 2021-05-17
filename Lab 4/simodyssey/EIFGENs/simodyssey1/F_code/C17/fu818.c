/*
 * Code for class FUNCTION [G#1, G#2]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "fu818.h"
#include "eif_rout_obj.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F1554_6508
static EIF_REFERENCE inline_F1554_6508 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3, EIF_POINTER arg4, EIF_INTEGER_32 arg5, EIF_BOOLEAN arg6, EIF_INTEGER_32 arg7, EIF_INTEGER_32 arg8, EIF_INTEGER_32 arg9, EIF_POINTER arg10)
{
	#ifdef WORKBENCH
	EIF_REFERENCE result;
	if (arg1 != 0) {
		return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_POINTER, EIF_REFERENCE, EIF_REFERENCE)) arg1)(
			arg2, arg3, arg4).it_r;
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
	return (FUNCTION_CAST(EIF_REFERENCE, (EIF_POINTER, EIF_REFERENCE, EIF_REFERENCE)) arg1)(
		arg2, arg3, arg4);
#endif
	;
}
#define INLINE_F1554_6508
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {FUNCTION}.last_result */
EIF_REFERENCE F1554_6499 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O4635[Dtype(Current)-1553]);
}


/* {FUNCTION}.call */
void F1554_6500 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_BOOLEAN uarg1;
	EIF_BOOLEAN uarg;
	RTS_SD;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	uarg1 = (EIF_BOOLEAN) RTS_OU (arg1);
	uarg = uarg1;
	if (uarg) {
		RTS_RC;
		RTS_RS (arg1);
		RTS_RW;
	}
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4636[dtype-1553])(Current, arg1);
	tr1 = RTCCL(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + O4635[dtype-1553]) = (EIF_REFERENCE) tr1;
	if (uarg) {
		RTS_RD;
	}
	RTLE;
}

/* {FUNCTION}.item */
EIF_REFERENCE F1554_6501 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN uarg1;
	EIF_BOOLEAN uarg;
	RTS_SD;
	RTCDT;
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
	if (uarg) {
		RTS_RD;
	}
	RTLE;
	return (EIF_REFERENCE) (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_POINTER, EIF_POINTER, EIF_POINTER, EIF_POINTER, EIF_INTEGER_32, EIF_BOOLEAN, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32, EIF_POINTER)) R4640[dtype-1553])(Current, *(EIF_POINTER *)(Current + O4619[dtype-1551]), *(EIF_POINTER *)(Current + O4617[dtype-1551]), *(EIF_REFERENCE *)(Current + _REFACS_1_), arg1, *(EIF_INTEGER_32 *)(Current + O4620[dtype-1551]), *(EIF_BOOLEAN *)(Current + O4621[dtype-1551]), *(EIF_INTEGER_32 *)(Current + O4622[dtype-1551]), loc1, *(EIF_INTEGER_32 *)(Current + O4608[dtype-1551]), *(EIF_REFERENCE *)(Current + _REFACS_2_));
}

/* {FUNCTION}.apply */
void F1554_6502 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4636[dtype-1553])(Current, *(EIF_REFERENCE *)(Current));
	tr1 = RTCCL(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + O4635[dtype-1553]) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {FUNCTION}.is_equal */
EIF_BOOLEAN F1554_6503 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTGC;
	Result = '\0';
	if (F1552_6465(Current, arg1)) {
		tr1 = *(EIF_REFERENCE *)(Current + O4635[Dtype(Current)-1553]);
		tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4635[Dtype(RTCW(arg1))-1553])(arg1);
		Result = RTEQ(tr1, tr2);
	}
	RTLE;
	return Result;
}

/* {FUNCTION}.copy */
void F1554_6504 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 != Current)) {
		F1552_6472(Current, arg1);
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4635[Dtype(RTCW(arg1))-1553])(arg1);
		tr1 = RTCCL(tr1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + O4635[Dtype(Current)-1553]) = (EIF_REFERENCE) tr1;
	}
	RTLE;
}

/* {FUNCTION}.flexible_item */
EIF_REFERENCE F1554_6507 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN uarg1;
	EIF_BOOLEAN uarg;
	RTS_SD;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTCDT;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,loc1);
	RTLR(3,loc2);
	RTLR(4,tr1);
	RTLR(5,Result);
	RTLIU(6);
	
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
		return (EIF_REFERENCE) (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4636[dtype-1553])(Current, loc1);
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
		Result = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4636[dtype-1553])(Current, loc2);
	}
	if (uarg) {
		RTS_RD;
	}
	RTLE;
	return Result;
}

/* {FUNCTION}.fast_item */
EIF_REFERENCE F1554_6508 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3, EIF_POINTER arg4, EIF_INTEGER_32 arg5, EIF_BOOLEAN arg6, EIF_INTEGER_32 arg7, EIF_INTEGER_32 arg8, EIF_INTEGER_32 arg9, EIF_POINTER arg10)
{
	GTCX
	RTEX;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Result);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("fast_item", 1553, Current, 0, 10, 12961);
	Result = inline_F1554_6508 ((EIF_POINTER) arg1, (EIF_POINTER) arg2, (EIF_POINTER) arg3, (EIF_POINTER) arg4, (EIF_INTEGER_32) arg5, (EIF_BOOLEAN) arg6, (EIF_INTEGER_32) arg7, (EIF_INTEGER_32) arg8, (EIF_INTEGER_32) arg9, (EIF_POINTER) arg10);
	if (!Result) {
		if (RTAT(eif_final_id(Y4641,Y4641_gen_type,Dftype(Current),1553))) {RTEC(EN_FAIL);}
	}
	RTLE;
	RTEE;
	return Result;
}

void EIF_Minit818 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
