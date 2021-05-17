/*
 * Code for class EV_ANY
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1591.h"
#include "eif_copy.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_ANY}.default_create */
void F1596_17742 (EIF_REFERENCE Current)
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
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R15017[dtype-1596])(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R15016[dtype-1596])(Current);
	tr1 = *(EIF_REFERENCE *)(Current + O15014[dtype-1595]);
	F1696_18985(RTCW(tr1), ((EIF_INTEGER_8) 4L), (EIF_BOOLEAN) 1);
	tr1 = *(EIF_REFERENCE *)(Current + O15014[dtype-1595]);
	F1696_18970(RTCW(tr1), Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R15018[dtype-1596])(Current);
	RTLE;
}

/* {EV_ANY}.destroy */
void F1596_17745 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O15014[Dtype(Current)-1595]);
	F1696_18973(RTCW(tr1));
	RTLE;
}

/* {EV_ANY}.is_destroyed */
EIF_BOOLEAN F1596_17746 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O15014[Dtype(Current)-1595]);
	Result = F1696_18975(RTCW(tr1));
	RTLE;
	return Result;
}

/* {EV_ANY}.replace_implementation */
void F1596_17748 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTGC;
	loc1 = (EIF_BOOLEAN) EIF_TEST(c_check_assert((EIF_BOOLEAN) 0));
	tr1 = *(EIF_REFERENCE *)(Current + O15014[dtype-1595]);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R15910[Dtype(RTCW(tr1))-1697])(tr1);
	F1696_18993(RTCW(arg1), Current);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + O15014[dtype-1595]) = (EIF_REFERENCE) arg1;
	tr1 = *(EIF_REFERENCE *)(Current + O15014[dtype-1595]);
	F1696_18994(RTCW(tr1));
	tr1 = *(EIF_REFERENCE *)(Current + O15014[dtype-1595]);
	F1696_18985(RTCW(tr1), ((EIF_INTEGER_8) 4L), (EIF_BOOLEAN) 1);
	tr1 = *(EIF_REFERENCE *)(Current + O15014[dtype-1595]);
	F1696_18985(RTCW(tr1), ((EIF_INTEGER_8) 5L), (EIF_BOOLEAN) 1);
	tb1 = (EIF_BOOLEAN) EIF_TEST(c_check_assert(loc1));
	loc1 = (EIF_BOOLEAN) tb1;
	RTLE;
}

/* {EV_ANY}.initialize */
void F1596_17751 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O15014[Dtype(Current)-1595]);
	F1696_18985(RTCW(tr1), ((EIF_INTEGER_8) 5L), (EIF_BOOLEAN) 1);
	RTLE;
}

/* {EV_ANY}.copy */
void F1596_17752 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTGC;
}

/* {EV_ANY}.environment_i */
static EIF_REFERENCE F1596_17754_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(211)

	RTLI(1);
	RTLR(0,tr1);
	RTLIU(1);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(eif_new_type(1874, 0x01).id, 1874, _OBJSIZ_1_1_0_0_0_0_0_0_);
	F1875_21506(RTCW(tr1));
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1596_17754 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(211,F1596_17754_body,(Current));
}

void EIF_Minit1591 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
