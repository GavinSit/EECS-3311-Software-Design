/*
 * Code for class ETF_STATUS_INTERFACE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "et1393.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {ETF_STATUS_INTERFACE}.make */
void F1175_14700 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTCFDT;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,arg3);
	RTLR(3,Current);
	RTLR(4,tr1);
	RTLR(5,tr2);
	RTLIU(6);
	
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
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1552,0xFF01,0xFFF9,0,1475,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2= RTLNRF(typres0.id, (EIF_POINTER) __A1393_60, (EIF_POINTER) _A1393_60, (EIF_POINTER)(F1176_14702),tr1, 1, 0);
	}
	RTAR(Current, tr2);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr2;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	F1552_6470(RTCW(tr1), arg2);
	tr1 = RTMS_EX_H("status",6,1862012275);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_4_) = (EIF_REFERENCE) tr1;
	RTLE;
}

void EIF_Minit1393 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
