/*
 * Code for class ETF_SOFTWARE_OPERATION_INTERFACE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "et1176.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {ETF_SOFTWARE_OPERATION_INTERFACE}.make */
void F259_11823 (EIF_REFERENCE Current)
{
	GTCX
	
	
	F259_11824(Current);
}

/* {ETF_SOFTWARE_OPERATION_INTERFACE}.initialize_attributes */
void F259_11824 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLIU(4);
	
	RTGC;
	tr1 = RTLNSMART(eif_new_type(370, 1).id);
	F371_13165(RTCW(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_new_type(261, 1).id);
	F261_11832(RTCW(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_new_type(354, 1).id);
	tr2 = RTOUCR(172,F259_11828, (Current));
	tr3 = *(EIF_REFERENCE *)(Current);
	F354_13102(RTCW(tr1), tr2, tr3);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {ETF_SOFTWARE_OPERATION_INTERFACE}.dummy_command */

EIF_REFERENCE F259_11828 (EIF_REFERENCE Current)
{
	GTCX
	RTOUC (172,RTMS_EX_H("",0,0));
}

/* {ETF_SOFTWARE_OPERATION_INTERFACE}.execute */
void F259_11830 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_BOOLEAN arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_BOOLEAN tb1;
	RTCFDT;
	RTLD;
	
	RTLI(7);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,tr4);
	RTLR(5,tr5);
	RTLR(6,arg1);
	RTLIU(7);
	
	RTGC;
	F259_11824(Current);
	tr1 = *(EIF_REFERENCE *)(Current);
	tr1 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_1_);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,1475,0xFF01,370,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	tr3 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1552,0xFF01,0xFFF9,1,1475,0xFF01,1172,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr5= RTLNRF(typres0.id, (EIF_POINTER) __A1280_40_2, (EIF_POINTER) _A1280_40_2, (EIF_POINTER)(F371_13169),tr2, 1, 1);
	}
	F88_9987(RTCW(tr1), tr5);
	tr1 = RTLNSMART(eif_new_type(354, 1).id);
	F354_13102(RTCW(tr1), arg1, *(EIF_REFERENCE *)(Current));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr1 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_2_);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,1475,0xFF01,370,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	tr3 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1552,0xFF01,0xFFF9,1,1475,0xFF01,1560,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr5= RTLNRF(typres0.id, (EIF_POINTER) __A1280_35_2, (EIF_POINTER) _A1280_35_2, (EIF_POINTER)(F369_13159),tr2, 1, 1);
	}
	F88_9987(RTCW(tr1), tr5);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	F354_13111(RTCW(tr1));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tb1 = *(EIF_BOOLEAN *)(RTCW(tr1)+ _CHROFF_3_0_);
	if ((EIF_BOOLEAN) !tb1) {
		if (arg2) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
			F371_13168(RTCW(tr1));
		}
		tr1 = *(EIF_REFERENCE *)(Current);
		F261_11836(RTCW(tr1));
	} else {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tb1 = *(EIF_BOOLEAN *)(RTCW(tr1)+ _CHROFF_3_0_);
		*(EIF_BOOLEAN *)(Current+ _CHROFF_3_0_) = (EIF_BOOLEAN) tb1;
	}
	RTLE;
}

/* {ETF_SOFTWARE_OPERATION_INTERFACE}.execute_without_log */
void F259_11831 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_BOOLEAN tb1;
	RTCFDT;
	RTLD;
	
	RTLI(7);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,tr4);
	RTLR(5,tr5);
	RTLR(6,arg1);
	RTLIU(7);
	
	RTGC;
	F259_11824(Current);
	tr1 = *(EIF_REFERENCE *)(Current);
	tr1 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_1_);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,1475,0xFF01,370,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	tr3 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1552,0xFF01,0xFFF9,1,1475,0xFF01,1172,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr5= RTLNRF(typres0.id, (EIF_POINTER) __A1280_34_2, (EIF_POINTER) _A1280_34_2, (EIF_POINTER)(F369_13157),tr2, 1, 1);
	}
	F88_9987(RTCW(tr1), tr5);
	tr1 = RTLNSMART(eif_new_type(354, 1).id);
	F354_13102(RTCW(tr1), arg1, *(EIF_REFERENCE *)(Current));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr1 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_2_);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,1475,0xFF01,370,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	tr3 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1552,0xFF01,0xFFF9,1,1475,0xFF01,1560,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr5= RTLNRF(typres0.id, (EIF_POINTER) __A1280_35_2, (EIF_POINTER) _A1280_35_2, (EIF_POINTER)(F369_13159),tr2, 1, 1);
	}
	F88_9987(RTCW(tr1), tr5);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	F354_13111(RTCW(tr1));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tb1 = *(EIF_BOOLEAN *)(RTCW(tr1)+ _CHROFF_3_0_);
	if ((EIF_BOOLEAN) !tb1) {
		tr1 = *(EIF_REFERENCE *)(Current);
		F261_11836(RTCW(tr1));
	} else {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tb1 = *(EIF_BOOLEAN *)(RTCW(tr1)+ _CHROFF_3_0_);
		*(EIF_BOOLEAN *)(Current+ _CHROFF_3_0_) = (EIF_BOOLEAN) tb1;
	}
	RTLE;
}

void EIF_Minit1176 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
