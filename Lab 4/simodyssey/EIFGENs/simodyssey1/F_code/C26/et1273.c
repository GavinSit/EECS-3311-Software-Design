/*
 * Code for class ETF_CHAR_ARG
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "et1273.h"
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

/* {ETF_CHAR_ARG}.make */
void F364_13138 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1)
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
	*(EIF_CHARACTER_8 *)(Current+ _CHROFF_1_0_) = (EIF_CHARACTER_8) arg1;
	RTLE;
}

/* {ETF_CHAR_ARG}.out */
EIF_REFERENCE F364_13140 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,tr2);
	RTLR(3,Result);
	RTLIU(4);
	
	RTGC;
	tr1 = RTMS_EX_H("\'",1,39);
	tc1 = *(EIF_CHARACTER_8 *)(Current+ _CHROFF_1_0_);
	tr2 = c_outc(tc1);
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(tr1)-1560])(tr1, tr2);
	tr2 = RTMS_EX_H("\'",1,39);
	Result = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
	RTLE;
	return Result;
}

void EIF_Minit1273 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
