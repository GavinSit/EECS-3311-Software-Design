/*
 * Code for class ETF_MODEL_FACADE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "et1035.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {ETF_MODEL_FACADE}.make */
void F77_9912 (EIF_REFERENCE Current)
{
	GTCX
	struct eif_ex_1050 sloc1;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) sloc1.data;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	RTCFDT;
	RTLD;
	
	memset (&sloc1.overhead, 0, OVERHEAD + _OBJSIZ_0_0_0_0_0_0_0_0_);
	sloc1.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc1.overhead, eif_new_type(99, 0x00).id);
	RTLI(7);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,tr4);
	RTLR(6,tr5);
	RTLIU(7);
	
	RTGC;
	tr1 = RTOUCR(168,F100_10069, (RTCW(loc1)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_new_type(259, 1).id);
	F259_11823(RTCW(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_4_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_new_type(261, 1).id);
	F261_11832(RTCW(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_7_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_new_type(354, 1).id);
	tr2 = RTMS_EX_H("dummy",5,1970873721);
	tr3 = *(EIF_REFERENCE *)(Current + _REFACS_7_);
	F354_13102(RTCW(tr1), tr2, tr3);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_5_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_new_type(369, 1).id);
	F370_13160(RTCW(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_6_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_6_);
	tr1 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_2_);
	F101_10080(RTCW(tr1));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
	tr1 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_2_);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,1475,0xFF01,369,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	tr3 = *(EIF_REFERENCE *)(Current + _REFACS_6_);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1552,0xFF01,0xFFF9,1,1475,0xFF01,1560,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr5= RTLNRF(typres0.id, (EIF_POINTER) __A1279_35_2, (EIF_POINTER) _A1279_35_2, (EIF_POINTER)(F369_13159),tr2, 1, 1);
	}
	F88_9987(RTCW(tr1), tr5);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,911,0xFF01,1560,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNS(typres0.id, 911, _OBJSIZ_2_3_0_1_0_0_0_0_);
	}
	F912_3515(RTCW(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_8_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	tr1 = RTLNSMART(eif_new_type(1560, 1).id);
	tr2 = RTOUCR(190,F77_9915, (Current));
	F1559_6607(RTCW(tr1), tr2);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_new_type(1560, 1).id);
	F1558_6510(RTCW(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {ETF_MODEL_FACADE}.execute_cmd */
void F77_9913 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,tr4);
	RTLR(6,tr5);
	RTLIU(7);
	
	RTGC;
	if (RTEQ(arg1, RTMS_EX_H("man",3,7168366))) {
		*(EIF_BOOLEAN *)(Current+ _CHROFF_8_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		tr1 = RTLNSMART(eif_new_type(1560, 1).id);
		tr2 = RTOUCR(190,F77_9915, (Current));
		F1559_6607(RTCW(tr1), tr2);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
		tr1 = RTLNSMART(eif_new_type(1560, 1).id);
		F1558_6510(RTCW(tr1));
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
	} else {
		tr1 = RTLNSMART(eif_new_type(354, 1).id);
		F354_13102(RTCW(tr1), arg1, *(EIF_REFERENCE *)(Current + _REFACS_7_));
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_5_) = (EIF_REFERENCE) tr1;
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
		tr1 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_2_);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,1475,0xFF01,369,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr2 = RTLNTS(typres0.id, 2, 0);
		}
		tr3 = *(EIF_REFERENCE *)(Current + _REFACS_6_);
		((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
		RTAR(tr2,tr3);
		
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,1552,0xFF01,0xFFF9,1,1475,0xFF01,1560,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr5= RTLNRF(typres0.id, (EIF_POINTER) __A1279_35_2, (EIF_POINTER) _A1279_35_2, (EIF_POINTER)(F369_13159),tr2, 1, 1);
		}
		F88_9987(RTCW(tr1), tr5);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
		F354_13111(RTCW(tr1));
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
		tb1 = *(EIF_BOOLEAN *)(RTCW(tr1)+ _CHROFF_3_0_);
		if (tb1) {
			*(EIF_BOOLEAN *)(Current+ _CHROFF_8_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			tr1 = RTLNSMART(eif_new_type(1560, 1).id);
			tr2 = *(EIF_REFERENCE *)(Current + _REFACS_6_);
			tr2 = *(EIF_REFERENCE *)(RTCW(tr2) + _REFACS_1_);
			F1559_6607(RTCW(tr1), tr2);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			tr2 = RTMS_EX_H("Command entered: ",17,2007776544);
			tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(tr2)-1560])(tr2, arg1);
			tr3 = RTMS_EX_H("\012",1,10);
			tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr2))-1560])(tr2, tr3);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4818[Dtype(RTCW(tr1))-1560])(tr1, tr2);
		} else {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2222[Dtype(RTCW(tr1))-818])(tr1, arg1);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
			F259_11831(RTCW(tr1), arg1);
			*(EIF_BOOLEAN *)(Current+ _CHROFF_8_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			tr1 = RTLNSMART(eif_new_type(1560, 1).id);
			F1558_6510(RTCW(tr1));
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
			tr1 = RTLNSMART(eif_new_type(1560, 1).id);
			tr2 = *(EIF_REFERENCE *)(Current + _REFACS_6_);
			tr2 = F370_13162(RTCW(tr2));
			F1559_6607(RTCW(tr1), tr2);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
		}
	}
	RTLE;
}

/* {ETF_MODEL_FACADE}.reset */
void F77_9914 (EIF_REFERENCE Current)
{
	GTCX
	
	
	F77_9912(Current);
}

/* {ETF_MODEL_FACADE}.man_page */

EIF_REFERENCE F77_9915 (EIF_REFERENCE Current)
{
	GTCX
	RTOUC (190,RTMS_EX_H("test(\012    p_threshold: THRESHOLD = 1 .. 101\012)\012play\012abort\012move(\012    dir: DIRECTION = {N, NE, E, SE, S, SW, W, NW}\012)\012land\012liftoff\012pass\012wormhole\012status",148,244070515));
}

void EIF_Minit1035 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
