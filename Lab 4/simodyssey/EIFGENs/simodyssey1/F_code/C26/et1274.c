/*
 * Code for class ETF_BOOL_ARG
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "et1274.h"
#include "eif_plug.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {ETF_BOOL_ARG}.make */
void F365_13141 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
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
	*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_) = (EIF_BOOLEAN) arg1;
	RTLE;
}

/* {ETF_BOOL_ARG}.out */
EIF_REFERENCE F365_13143 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTGC;
	tb1 = *(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_);
	Result = (tb1 ? makestr ("True", 4) : makestr ("False", 5));
	RTLE;
	return Result;
}

void EIF_Minit1274 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
