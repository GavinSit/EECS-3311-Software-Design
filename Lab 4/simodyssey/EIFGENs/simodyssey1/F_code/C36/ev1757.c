/*
 * Code for class EV_MULTI_COLUMN_LIST_I
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1757.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_MULTI_COLUMN_LIST_I}.make */
void F1768_19984 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTCFDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	F1733_19652(Current);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,911,1564,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSMART(typres0.id);
	}
	F912_3515(RTCW(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_52_) = (EIF_REFERENCE) tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,912,1508,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSMART(typres0.id);
	}
	F913_3515(RTCW(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_53_) = (EIF_REFERENCE) tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,912,1508,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSMART(typres0.id);
	}
	F913_3515(RTCW(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_54_) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {EV_MULTI_COLUMN_LIST_I}.column_width */
EIF_INTEGER_32 F1768_19992 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_53_);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_2_3_0_0_);
	if ((EIF_BOOLEAN) (arg1 <= ti4_1)) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_53_);
		Result = F858_3260(RTCW(tr1), arg1);
	} else {
		RTLE;
		return (EIF_INTEGER_32) ((EIF_INTEGER_32) 80L);
	}
	RTLE;
	return Result;
}

/* {EV_MULTI_COLUMN_LIST_I}.update_column_width */
void F1768_20013 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_53_);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_2_3_0_0_);
	if ((EIF_BOOLEAN) (arg2 <= ti4_1)) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_53_);
		F913_3539(RTCW(tr1), arg2);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_53_);
		F913_3545(RTCW(tr1), arg1);
	} else {
		for (;;) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_53_);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_2_3_0_0_);
			if ((EIF_BOOLEAN)(ti4_1 == (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L)))) break;
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_53_);
			ti4_2 = ((EIF_INTEGER_32) 80L);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2222[Dtype(RTCW(tr1))-818])(tr1, (EIF_REFERENCE) &ti4_2);
		}
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_53_);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2222[Dtype(RTCW(tr1))-818])(tr1, (EIF_REFERENCE) &arg1);
	}
	RTLE;
}

/* {EV_MULTI_COLUMN_LIST_I}.ev_children */
EIF_REFERENCE F1768_20020 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_51_);
}


void EIF_Minit1757 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
