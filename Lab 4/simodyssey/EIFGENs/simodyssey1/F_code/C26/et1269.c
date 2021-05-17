/*
 * Code for class ETF_REAL_ARG
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "et1269.h"
#include "eif_out.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {ETF_REAL_ARG}.make */
void F360_13126 (EIF_REFERENCE Current, EIF_REAL_64 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNSMART(eif_new_type(1560, 1).id);
	F1558_6510(RTCW(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	*(EIF_REAL_64 *)(Current+ _R64OFF_1_0_0_0_0_0_0_0_) = (EIF_REAL_64) arg1;
	RTLE;
}

/* {ETF_REAL_ARG}.out */
EIF_REFERENCE F360_13128 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REAL_64 tr8_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTGC;
	tr8_1 = *(EIF_REAL_64 *)(Current+ _R64OFF_1_0_0_0_0_0_0_0_);
	Result = c_outr64(tr8_1);
	RTLE;
	return Result;
}

void EIF_Minit1269 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
