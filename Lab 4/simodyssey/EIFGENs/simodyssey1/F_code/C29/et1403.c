/*
 * Code for class ETF_TEST_INTERFACE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "et1403.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {ETF_TEST_INTERFACE}.make */
void F1185_14715 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_BOOLEAN tb1;
	RTCFDT;
	RTLD;
	
	RTLI(8);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,arg3);
	RTLR(3,Current);
	RTLR(4,tr1);
	RTLR(5,tr2);
	RTLR(6,tr3);
	RTLR(7,tr4);
	RTLIU(8);
	
	RTGC;
	F1173_14696(Current, arg1, arg2, arg3);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,1475,0xFF01,0,0xFFFF};
		EIF_TYPE typres0;
		typarr0[4] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr1 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = Current;
	RTAR(tr1,Current);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1552,0xFF01,0xFFF9,1,1475,1508,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr4= RTLNRF(typres0.id, (EIF_POINTER) __A1403_61_2, (EIF_POINTER) _A1403_61_2, (EIF_POINTER)(F1186_14718),tr1, 1, 1);
	}
	RTAR(Current, tr4);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr4;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	F1552_6470(RTCW(tr1), arg2);
	tr2 = F1476_5317(RTCW(arg2), ((EIF_INTEGER_32) 1L));
	tr1 = RTCCL(tr2);
	RTOB(*(EIF_INTEGER_32 *), eif_new_type(1508, 0x00), tr1, loc1, tb1);
	if (tb1) {
		tr1 = RTMS_EX_H("test(",5,1702956072);
		tr2 = RTMS_EX_H("test",4,1952805748);
		tr3 = RTMS_EX_H("p_threshold",11,333314916);
		tr4 = RTLNS(eif_new_type(1508, 0x00).id, 1508, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)tr4 = loc1;
		tr2 = F1172_14691(Current, tr2, tr3, tr4);
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(tr1)-1560])(tr1, tr2);
		tr2 = RTMS_EX_H(")",1,41);
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_4_) = (EIF_REFERENCE) tr1;
	} else {
		*(EIF_BOOLEAN *)(Current+ _CHROFF_6_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	RTLE;
}

void EIF_Minit1403 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
