/*
 * Code for class ES_BOOLEAN_TEST_CASE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "es1306.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {ES_BOOLEAN_TEST_CASE}.make */
void F466_13495 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
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
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) arg2;
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
	tr1 = RTMS_EX_H("",0,0);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
	tr1 = RTMS_EX_H("",0,0);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {ES_BOOLEAN_TEST_CASE}.run */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
void F466_13496 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTED;
	EIF_BOOLEAN EIF_VOLATILE loc1 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE EIF_VOLATILE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE saved_except = (EIF_REFERENCE) 0;
	RTS_SDX;
	EIF_REFERENCE  EIF_VOLATILE tr1 = NULL;
	EIF_INTEGER_32  EIF_VOLATILE ti4_1;
	EIF_BOOLEAN  EIF_VOLATILE tb1;
	RTCFDT;
	RTLD;
	RTXD;
	
	RTLI(5);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc3);
	RTLR(4,saved_except);
	RTLIU(5);
	RTXSLS;
	
	RTEV;
	RTGC;
	RTE_T
	if ((EIF_BOOLEAN) !loc1) {
		RTCT0("attached case as c", EX_CHECK);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
		loc2 = tr1;
		if ((EIF_TRUE)) {
			RTCK0;
		} else {
			RTCF0;
		}
		tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_POINTER, EIF_REFERENCE)) *(EIF_POINTER *)(loc2+ _PTROFF_4_3_0_3_0_0_))(
			*(EIF_POINTER *)(loc2+ _PTROFF_4_3_0_3_0_1_),
			*(EIF_REFERENCE *)(loc2 + _REFACS_1_));
		tb1 = tb1;
		if (tb1) {
			*(EIF_BOOLEAN *)(Current+ _CHROFF_4_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
	}
	RTE_E
	RTXSC;
	RTS_SRR
	*(EIF_BOOLEAN *)(Current+ _CHROFF_4_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTCT0("attached exception_trace as et", EX_CHECK);
	tr1 = F463_1393(Current);
	loc3 = tr1;
	if (EIF_TEST(loc3)) {
		RTCK0;
	} else {
		RTCF0;
	}
	tr1 = F1_14(loc3);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
	ti4_1 = F463_1392(Current);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_2_0_0_) = (EIF_INTEGER_32) ti4_1;
	loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTER;
	/* NOTREACHED */
	RTE_EE
	RTEOK;
	RTLE;
}
#undef EIF_VOLATILE
#define EIF_VOLATILE

/* {ES_BOOLEAN_TEST_CASE}.is_violation_case */
EIF_BOOLEAN F466_13497 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
}

void EIF_Minit1306 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
