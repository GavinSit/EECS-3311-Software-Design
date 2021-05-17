/*
 * Code for class EV_COORDINATE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1388.h"
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

/* {EV_COORDINATE}.make */
void F1169_14629 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REAL_64 tr8_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tr8_1 = (EIF_REAL_64) (arg1);
	*(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_0_0_0_0_0_) = (EIF_REAL_64) tr8_1;
	tr8_1 = (EIF_REAL_64) (arg2);
	*(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_0_0_0_0_1_) = (EIF_REAL_64) tr8_1;
	RTLE;
}

/* {EV_COORDINATE}.set */
void F1169_14630 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REAL_64 tr8_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tr8_1 = (EIF_REAL_64) (arg1);
	*(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_0_0_0_0_0_) = (EIF_REAL_64) tr8_1;
	tr8_1 = (EIF_REAL_64) (arg2);
	*(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_0_0_0_0_1_) = (EIF_REAL_64) tr8_1;
	RTLE;
}

/* {EV_COORDINATE}.x */
EIF_INTEGER_32 F1169_14635 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if ((EIF_BOOLEAN) eif_is_greater_real_64 (*(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_0_0_0_0_0_), (EIF_REAL_64) 0.0)) {
		tr8_1 = *(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_0_0_0_0_0_);
		Result = (EIF_INTEGER_32) (EIF_REAL_64) (tr8_1 + (EIF_REAL_64) 0.5);
	} else {
		tr8_1 = *(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_0_0_0_0_0_);
		Result = (EIF_INTEGER_32) (EIF_REAL_64) (tr8_1 - (EIF_REAL_64) 0.5);
	}
	RTLE;
	return Result;
}

/* {EV_COORDINATE}.y */
EIF_INTEGER_32 F1169_14637 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if ((EIF_BOOLEAN) eif_is_greater_real_64 (*(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_0_0_0_0_1_), (EIF_REAL_64) 0.0)) {
		tr8_1 = *(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_0_0_0_0_1_);
		Result = (EIF_INTEGER_32) (EIF_REAL_64) (tr8_1 + (EIF_REAL_64) 0.5);
	} else {
		tr8_1 = *(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_0_0_0_0_1_);
		Result = (EIF_INTEGER_32) (EIF_REAL_64) (tr8_1 - (EIF_REAL_64) 0.5);
	}
	RTLE;
	return Result;
}

void EIF_Minit1388 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
