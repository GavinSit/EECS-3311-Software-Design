/*
 * Code for class EV_ANY_I
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1689.h"
#include "eif_misc.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_ANY_I}.assign_interface */
void F1696_18970 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	F1696_18985(Current, ((EIF_INTEGER_8) 0L), (EIF_BOOLEAN) 1);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + O15892[Dtype(Current)-1695]) = (EIF_REFERENCE) arg1;
	RTLE;
}

/* {EV_ANY_I}.safe_destroy */
void F1696_18973 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if ((EIF_BOOLEAN) !F1696_18989(Current)) {
		F1696_18992(Current, (EIF_BOOLEAN) 1);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R15889[Dtype(Current)-1697])(Current);
	}
	RTLE;
}

/* {EV_ANY_I}.is_destroyed */
EIF_BOOLEAN F1696_18975 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) F1696_18986(Current, ((EIF_INTEGER_8) 2L));
}

/* {EV_ANY_I}.attached_interface */
EIF_REFERENCE F1696_18976 (EIF_REFERENCE Current)
{
	GTCX
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O15892[dtype-1695]) != NULL)) {
		RTLE;
		return (EIF_REFERENCE) *(EIF_REFERENCE *)(Current + O15892[dtype-1695]);
	} else {
		RTCT0("False", EX_CHECK);
			RTCF0;
	}
	RTLE;
	return (EIF_REFERENCE) 0;
}

/* {EV_ANY_I}.set_state_flag */
void F1696_18985 (EIF_REFERENCE Current, EIF_INTEGER_8 arg1, EIF_BOOLEAN arg2)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_8 ti1_1;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	ti1_1 = *(EIF_INTEGER_8 *)(Current + O15893[dtype-1695]);
	ti4_1 = (EIF_INTEGER_32) arg1;
	ti1_1 = eif_set_bit(EIF_INTEGER_8,ti1_1,arg2,ti4_1);
	*(EIF_INTEGER_8 *)(Current + O15893[dtype-1695]) = (EIF_INTEGER_8) ti1_1;
	RTLE;
}

/* {EV_ANY_I}.get_state_flag */
EIF_BOOLEAN F1696_18986 (EIF_REFERENCE Current, EIF_INTEGER_8 arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_8 ti1_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	ti1_1 = *(EIF_INTEGER_8 *)(Current + O15893[Dtype(Current)-1695]);
	ti4_1 = (EIF_INTEGER_32) arg1;
	Result = eif_bit_test(EIF_INTEGER_8,ti1_1,ti4_1);
	RTLE;
	return Result;
}

/* {EV_ANY_I}.base_make_called */
EIF_BOOLEAN F1696_18987 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) F1696_18986(Current, ((EIF_INTEGER_8) 0L));
}

/* {EV_ANY_I}.is_initialized */
EIF_BOOLEAN F1696_18988 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) F1696_18986(Current, ((EIF_INTEGER_8) 1L));
}

/* {EV_ANY_I}.is_in_destroy */
EIF_BOOLEAN F1696_18989 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) F1696_18986(Current, ((EIF_INTEGER_8) 3L));
}

/* {EV_ANY_I}.set_is_initialized */
void F1696_18990 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	
	
	F1696_18985(Current, ((EIF_INTEGER_8) 1L), arg1);
}

/* {EV_ANY_I}.set_is_destroyed */
void F1696_18991 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	
	
	F1696_18985(Current, ((EIF_INTEGER_8) 2L), arg1);
}

/* {EV_ANY_I}.set_is_in_destroy */
void F1696_18992 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	
	
	F1696_18985(Current, ((EIF_INTEGER_8) 3L), arg1);
}

/* {EV_ANY_I}.set_interface */
void F1696_18993 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + O15892[Dtype(Current)-1695]) = (EIF_REFERENCE) arg1;
	RTLE;
}

/* {EV_ANY_I}.enable_initialized */
void F1696_18994 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1696_18990(Current, (EIF_BOOLEAN) 1);
	RTLE;
}

/* {EV_ANY_I}.disable_initialized */
void F1696_18995 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1696_18990(Current, (EIF_BOOLEAN) 0);
	RTLE;
}

void EIF_Minit1689 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
