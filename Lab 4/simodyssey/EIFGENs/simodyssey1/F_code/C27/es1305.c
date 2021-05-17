/*
 * Code for class ES_VIOLATION_CASE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "es1305.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {ES_VIOLATION_CASE}.run */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
void F465_13492 (EIF_REFERENCE Current)
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
	EIF_REFERENCE  EIF_VOLATILE tr2 = NULL;
	EIF_INTEGER_32  EIF_VOLATILE ti4_1;
	EIF_BOOLEAN  EIF_VOLATILE tb1;
	RTCFDT;
	RTLD;
	RTXD;
	
	RTLI(6);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,loc3);
	RTLR(5,saved_except);
	RTLIU(6);
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
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R4612[Dtype(loc2)-1552])(loc2);
		*(EIF_BOOLEAN *)(Current+ _CHROFF_5_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	}
	RTE_E
	RTXSC;
	RTS_SRR
	tb1 = '\01';
	tr1 = F463_1389(Current);
	tr2 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	if (!F1_10(Current, tr1, tr2)) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
		tr2 = RTMS_EX_H("NONE",4,1313820229);
		tb1 = F1_10(Current, tr1, tr2);
	}
	if (tb1) {
		*(EIF_BOOLEAN *)(Current+ _CHROFF_5_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	} else {
		*(EIF_BOOLEAN *)(Current+ _CHROFF_5_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
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
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_5_2_0_0_) = (EIF_INTEGER_32) ti4_1;
	}
	loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTER;
	/* NOTREACHED */
	RTE_EE
	RTEOK;
	RTLE;
}
#undef EIF_VOLATILE
#define EIF_VOLATILE

/* {ES_VIOLATION_CASE}.is_violation_case */
EIF_BOOLEAN F465_13493 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
}

void EIF_Minit1305 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
