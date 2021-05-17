/*
 * Code for class EV_SIZEABLE_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1712.h"
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

/* {EV_SIZEABLE_IMP}.initialize_sizeable */
void F1723_19470 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNSMART(eif_new_type(24, 1).id);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + O16311[Dtype(Current)-1722]) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {EV_SIZEABLE_IMP}.minimum_width */
EIF_INTEGER_32 F1723_19471 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O16311[Dtype(Current)-1722]);
	Result = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_0_4_0_4_);
	RTLE;
	return Result;
}

/* {EV_SIZEABLE_IMP}.minimum_height */
EIF_INTEGER_32 F1723_19472 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O16311[Dtype(Current)-1722]);
	Result = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_0_4_0_5_);
	RTLE;
	return Result;
}

/* {EV_SIZEABLE_IMP}.set_size */
void F1723_19473 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16293[dtype-1972])(Current);
	ti4_1 = eif_max_int32 (arg1,ti4_1);
	ti4_2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16294[dtype-1972])(Current);
	ti4_2 = eif_max_int32 (arg2,ti4_2);
	F1723_19498(Current, ti4_1, ti4_2);
	RTLE;
}

/* {EV_SIZEABLE_IMP}.set_minimum_width */
void F1723_19476 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	tr1 = *(EIF_REFERENCE *)(Current + O16311[dtype-1722]);
	F25_8975(RTCW(tr1));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32, EIF_BOOLEAN)) R16301[dtype-1972])(Current, arg1, (EIF_BOOLEAN) 0);
	tr1 = *(EIF_REFERENCE *)(Current + O16311[dtype-1722]);
	F25_8970(RTCW(tr1), arg1);
	RTLE;
}

/* {EV_SIZEABLE_IMP}.set_minimum_height */
void F1723_19477 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	tr1 = *(EIF_REFERENCE *)(Current + O16311[dtype-1722]);
	F25_8976(RTCW(tr1));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32, EIF_BOOLEAN)) R16302[dtype-1972])(Current, arg1, (EIF_BOOLEAN) 0);
	tr1 = *(EIF_REFERENCE *)(Current + O16311[dtype-1722]);
	F25_8971(RTCW(tr1), arg1);
	RTLE;
}

/* {EV_SIZEABLE_IMP}.set_minimum_size */
void F1723_19478 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
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
	tr1 = *(EIF_REFERENCE *)(Current + O16311[dtype-1722]);
	F25_8975(RTCW(tr1));
	tr1 = *(EIF_REFERENCE *)(Current + O16311[dtype-1722]);
	F25_8976(RTCW(tr1));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32, EIF_BOOLEAN)) R16303[dtype-1972])(Current, arg1, arg2, (EIF_BOOLEAN) 0);
	tr1 = *(EIF_REFERENCE *)(Current + O16311[dtype-1722]);
	F25_8970(RTCW(tr1), arg1);
	tr1 = *(EIF_REFERENCE *)(Current + O16311[dtype-1722]);
	F25_8971(RTCW(tr1), arg2);
	RTLE;
}

/* {EV_SIZEABLE_IMP}.set_position */
void F1723_19482 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O16311[Dtype(Current)-1722]);
	F25_8974(RTCW(tr1));
	F1723_19495(Current, arg1, arg2);
	RTLE;
}

/* {EV_SIZEABLE_IMP}.set_move_and_size */
void F1723_19483 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16293[dtype-1972])(Current);
	ti4_1 = eif_max_int32 (ti4_1,arg3);
	ti4_2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16294[dtype-1972])(Current);
	ti4_2 = eif_max_int32 (ti4_2,arg4);
	F1723_19497(Current, arg1, arg2, ti4_1, ti4_2, (EIF_BOOLEAN) 1);
	RTLE;
}

/* {EV_SIZEABLE_IMP}.internal_set_size */
void F1723_19485 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
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
	if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R16329[dtype-1972])(Current)) {
		tr1 = *(EIF_REFERENCE *)(Current + O16311[dtype-1722]);
		F25_8968(RTCW(tr1), arg1);
		tr1 = *(EIF_REFERENCE *)(Current + O16311[dtype-1722]);
		F25_8969(RTCW(tr1), arg2);
	}
	RTLE;
}

/* {EV_SIZEABLE_IMP}.internal_set_minimum_width */
void F1723_19486 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O16311[Dtype(Current)-1722]);
	F25_8972(RTCW(tr1), arg1);
	RTLE;
}

/* {EV_SIZEABLE_IMP}.internal_set_minimum_height */
void F1723_19487 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O16311[Dtype(Current)-1722]);
	F25_8973(RTCW(tr1), arg1);
	RTLE;
}

/* {EV_SIZEABLE_IMP}.internal_set_minimum_size */
void F1723_19488 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
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
	tr1 = *(EIF_REFERENCE *)(Current + O16311[dtype-1722]);
	F25_8972(RTCW(tr1), arg1);
	tr1 = *(EIF_REFERENCE *)(Current + O16311[dtype-1722]);
	F25_8973(RTCW(tr1), arg2);
	RTLE;
}

/* {EV_SIZEABLE_IMP}.ev_move */
void F1723_19495 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
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
	tr1 = *(EIF_REFERENCE *)(Current + O16311[dtype-1722]);
	F25_8966(RTCW(tr1), arg1, arg2);
	if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R16328[dtype-1972])(Current)) {
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R16323[dtype-1972])(Current, arg1, arg2);
	}
	RTLE;
}

/* {EV_SIZEABLE_IMP}.ev_apply_new_size */
void F1723_19496 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_BOOLEAN arg5)
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
	tr1 = *(EIF_REFERENCE *)(Current + O16311[dtype-1722]);
	F25_8967(RTCW(tr1), arg1, arg2, arg3, arg4);
	if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R16328[dtype-1972])(Current)) {
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32, EIF_BOOLEAN)) R16324[dtype-1972])(Current, arg1, arg2, arg3, arg4, (EIF_BOOLEAN) 1);
	}
	RTLE;
}

/* {EV_SIZEABLE_IMP}.ev_move_and_resize */
void F1723_19497 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_BOOLEAN arg5)
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
	tr1 = *(EIF_REFERENCE *)(Current + O16311[dtype-1722]);
	F25_8967(RTCW(tr1), arg1, arg2, arg3, arg4);
	if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R16328[dtype-1972])(Current)) {
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32, EIF_BOOLEAN)) R16324[dtype-1972])(Current, arg1, arg2, arg3, arg4, (EIF_BOOLEAN) 1);
	}
	RTLE;
}

/* {EV_SIZEABLE_IMP}.ev_resize */
void F1723_19498 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
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
	tr1 = *(EIF_REFERENCE *)(Current + O16311[dtype-1722]);
	F25_8965(RTCW(tr1), arg1, arg2);
	if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R16328[dtype-1972])(Current)) {
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R16325[dtype-1972])(Current, arg1, arg2);
	}
	RTLE;
}

/* {EV_SIZEABLE_IMP}.ev_width */
EIF_INTEGER_32 F1723_19499 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R16328[dtype-1972])(Current)) {
		RTLE;
		return (EIF_INTEGER_32) F1912_22482(Current);
	} else {
		tr1 = *(EIF_REFERENCE *)(Current + O16311[dtype-1722]);
		Result = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_0_4_0_2_);
	}
	RTLE;
	return Result;
}

/* {EV_SIZEABLE_IMP}.ev_height */
EIF_INTEGER_32 F1723_19500 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R16328[dtype-1972])(Current)) {
		RTLE;
		return (EIF_INTEGER_32) F1912_22483(Current);
	} else {
		tr1 = *(EIF_REFERENCE *)(Current + O16311[dtype-1722]);
		Result = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_0_4_0_3_);
	}
	RTLE;
	return Result;
}

void EIF_Minit1712 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
