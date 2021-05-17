/*
 * Code for class UC_CHARACTER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "uc1558.h"
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

/* {UC_CHARACTER}.hash_code */
EIF_INTEGER_32 F1421_17590 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_);
}

/* {UC_CHARACTER}.is_less */
EIF_BOOLEAN F1421_17592 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_);
	ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_0_0_0_0_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (ti4_1 < ti4_2);
	RTLE;
	return Result;
}

/* {UC_CHARACTER}.out */
EIF_REFERENCE F1421_17598 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLIU(4);
	
	RTGC;
	loc1 = ((EIF_INTEGER_32) 127L);
	if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_) <= loc1)) {
		Result = RTLNS(eif_new_type(1560, 0x01).id, 1560, _OBJSIZ_1_1_0_3_0_0_0_0_);
		F1559_6605(RTCW(Result), ((EIF_INTEGER_32) 1L));
		tr1 = RTOUCR(246,F1011_14519, (Current));
		tc1 = F1265_14896(RTCW(tr1), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R4825[Dtype(RTCW(Result))-1560])(Result, tc1);
	} else {
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_);
		loc2 = c_outi(ti4_1);
		Result = RTLNS(eif_new_type(1560, 0x01).id, 1560, _OBJSIZ_1_1_0_3_0_0_0_0_);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc2)+ _LNGOFF_1_1_0_2_);
		F1559_6605(RTCW(Result), (EIF_INTEGER_32) (((EIF_INTEGER_32) 3L) + ti4_1));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R4825[Dtype(RTCW(Result))-1560])(Result, (EIF_CHARACTER_8) '%');
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R4825[Dtype(RTCW(Result))-1560])(Result, (EIF_CHARACTER_8) '/');
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4823[Dtype(RTCW(Result))-1560])(Result, loc2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R4825[Dtype(RTCW(Result))-1560])(Result, (EIF_CHARACTER_8) '/');
	}
	RTLE;
	return Result;
}

void EIF_Minit1558 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
