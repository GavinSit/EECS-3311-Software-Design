/*
 * Code for class PROCEDURE [G#1]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "pr251.h"
#include "eif_rout_obj.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F1553_6498
static void inline_F1553_6498 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3, EIF_POINTER arg4, EIF_INTEGER_32 arg5, EIF_BOOLEAN arg6, EIF_INTEGER_32 arg7, EIF_INTEGER_32 arg8, EIF_INTEGER_32 arg9, EIF_POINTER arg10)
{
	#ifdef WORKBENCH
	if (arg1 != 0) {
		(FUNCTION_CAST(void, (EIF_POINTER, EIF_REFERENCE, EIF_REFERENCE)) arg1)(
			arg2, arg3, arg4);
	} else {
		rout_obj_call_procedure_dynamic (
			arg5,
			arg6,
			arg7,
			arg3,
			arg8,
			arg4,
			arg9,
			arg10);
	}
#else
	(FUNCTION_CAST(void, (EIF_POINTER, EIF_REFERENCE, EIF_REFERENCE)) arg1)(
		arg2, arg3, arg4);
#endif
	;
}
#define INLINE_F1553_6498
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {PROCEDURE}.apply */
void F1553_6496 (EIF_REFERENCE Current)
{
	GTCX
	
	
	(FUNCTION_CAST(void, (EIF_POINTER, EIF_REFERENCE, EIF_REFERENCE)) *(EIF_POINTER *)(Current+ _PTROFF_4_2_0_3_0_2_))(
		*(EIF_POINTER *)(Current+ _PTROFF_4_2_0_3_0_1_),
		*(EIF_REFERENCE *)(Current + _REFACS_1_), *(EIF_REFERENCE *)(Current));
}

/* {PROCEDURE}.call */
void F1553_6497 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_4_2_0_3_0_2_);
	tp2 = *(EIF_POINTER *)(Current+ _PTROFF_4_2_0_3_0_1_);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_2_0_1_);
	tb1 = *(EIF_BOOLEAN *)(Current+ _CHROFF_4_1_);
	ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_2_0_2_);
	ti4_3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_2_0_0_);
	inline_F1553_6498(tp1, tp2, *(EIF_REFERENCE *)(Current + _REFACS_1_), arg1, ti4_1, tb1, ti4_2, loc1, ti4_3, *(EIF_REFERENCE *)(Current + _REFACS_2_));
	if (uarg) {
		RTS_RD;
	}
	RTLE;
}

/* {PROCEDURE}.fast_call */
void F1553_6498 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3, EIF_POINTER arg4, EIF_INTEGER_32 arg5, EIF_BOOLEAN arg6, EIF_INTEGER_32 arg7, EIF_INTEGER_32 arg8, EIF_INTEGER_32 arg9, EIF_POINTER arg10)
{
	GTCX
	
	
	inline_F1553_6498 ((EIF_POINTER) arg1, (EIF_POINTER) arg2, (EIF_POINTER) arg3, (EIF_POINTER) arg4, (EIF_INTEGER_32) arg5, (EIF_BOOLEAN) arg6, (EIF_INTEGER_32) arg7, (EIF_INTEGER_32) arg8, (EIF_INTEGER_32) arg9, (EIF_POINTER) arg10);
}

void EIF_Minit251 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
