/*
 * Code for class ETF_ABSTRACT_UI_INTERFACE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "et1178.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {ETF_ABSTRACT_UI_INTERFACE}.make */
void F261_11832 (EIF_REFERENCE Current)
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
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,918,0xFF01,1171,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSMART(typres0.id);
	}
	F919_3185(RTCW(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,87,0xFF01,0xFFF9,1,1475,0xFF01,1171,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSMART(typres0.id);
	}
	F88_9984(RTCW(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {ETF_ABSTRACT_UI_INTERFACE}.put */
void F261_11835 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = *(EIF_REFERENCE *)(Current);
	ti4_1 = F919_3198(RTCW(tr2));
	F919_3212(RTCW(tr1), arg1, (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)));
	RTLE;
}

/* {ETF_ABSTRACT_UI_INTERFACE}.run_input_commands */
void F261_11836 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	loc1 = F919_3195(RTCW(tr1));
	for (;;) {
		tb1 = F1081_4373(loc1);
		if (tb1) break;
		tr1 = F1081_4364(loc1);
		tr1 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_2_);
		F1553_6496(RTCW(tr1));
		F1081_4379(loc1);
	}
	RTLE;
}

void EIF_Minit1178 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
