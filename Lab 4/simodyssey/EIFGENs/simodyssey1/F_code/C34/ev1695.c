/*
 * Code for class EV_CHARACTER_FORMAT_I
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1695.h"
#include "eif_plug.h"
#include "eif_misc.h"
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

/* {EV_CHARACTER_FORMAT_I}.out */
EIF_REFERENCE F1702_19085 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_8 ti1_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	Result = c_outi(F1889_21867(Current));
	tr1 = F1558_6566(RTCV(F1889_21866(Current)));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, tr1);
	tr1 = c_outi(F1889_21874(Current));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, tr1);
	tr1 = c_outi(F1888_21836(Current));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, tr1);
	tr1 = c_outi(F1889_21872(Current));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, tr1);
	loc2 = F1889_21875(Current);
	loc1 = eif_bit_shift_right(loc2,((EIF_INTEGER_32) 16L));
	ti1_1 = (EIF_INTEGER_8) loc1;
	tr1 = c_outi(ti1_1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, tr1);
	loc1 = eif_bit_shift_right(loc2,((EIF_INTEGER_32) 8L));
	ti1_1 = (EIF_INTEGER_8) loc1;
	tr1 = c_outi(ti1_1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, tr1);
	ti1_1 = (EIF_INTEGER_8) loc2;
	tr1 = c_outi(ti1_1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, tr1);
	loc2 = F1889_21876(Current);
	loc1 = eif_bit_shift_right(loc2,((EIF_INTEGER_32) 16L));
	ti1_1 = (EIF_INTEGER_8) loc1;
	tr1 = c_outi(ti1_1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, tr1);
	loc1 = eif_bit_shift_right(loc2,((EIF_INTEGER_32) 8L));
	ti1_1 = (EIF_INTEGER_8) loc1;
	tr1 = c_outi(ti1_1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, tr1);
	ti1_1 = (EIF_INTEGER_8) loc2;
	tr1 = c_outi(ti1_1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, tr1);
	tr1 = (F1889_21879(Current) ? makestr ("True", 4) : makestr ("False", 5));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, tr1);
	tr1 = (F1889_21878(Current) ? makestr ("True", 4) : makestr ("False", 5));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, tr1);
	tr1 = c_outi(F1889_21873(Current));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, tr1);
	RTLE;
	return Result;
}

void EIF_Minit1695 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
