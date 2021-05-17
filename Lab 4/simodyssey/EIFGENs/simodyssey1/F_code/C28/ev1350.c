/*
 * Code for class EV_ACCELERATOR_LIST
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1350.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_ACCELERATOR_LIST}.default_create */
void F975_14405 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	RTCFDT;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,tr4);
	RTLR(5,tr5);
	RTLIU(6);
	
	RTGC;
	F973_14399(Current);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,1475,0xFF01,0,0xFFFF};
		EIF_TYPE typres0;
		typarr0[4] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = Current;
	RTAR(tr2,Current);
	
	{
		EIF_TYPE_INDEX typarr0[] = {0xFF01,1552,0xFF01,0xFFF9,1,1475,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = eif_final_id(Y2258,Y2258_gen_type,dftype,684);
			typarr0[6] = l_type.annotations | 0xFF00;
			typarr0[7] = l_type.id;
		}
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr5= RTLNRF(typres0.id, (EIF_POINTER) __A1350_152_2, (EIF_POINTER) _A1350_152_2, (EIF_POINTER)(F975_14406),tr2, 1, 1);
	}
	F969_4172(RTCW(tr1), tr5);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,1475,0xFF01,0,0xFFFF};
		EIF_TYPE typres0;
		typarr0[4] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = Current;
	RTAR(tr2,Current);
	
	{
		EIF_TYPE_INDEX typarr0[] = {0xFF01,1552,0xFF01,0xFFF9,1,1475,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = eif_final_id(Y2258,Y2258_gen_type,dftype,684);
			typarr0[6] = l_type.annotations | 0xFF00;
			typarr0[7] = l_type.id;
		}
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr5= RTLNRF(typres0.id, (EIF_POINTER) __A1350_153_2, (EIF_POINTER) _A1350_153_2, (EIF_POINTER)(F975_14407),tr2, 1, 1);
	}
	F969_4172(RTCW(tr1), tr5);
	RTLE;
}

/* {EV_ACCELERATOR_LIST}.enable_item_parented */
void F975_14406 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLIU(2);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		loc1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_1_);
		loc1 = RTRV(eif_new_type(1711, 0x00), loc1);
		RTCT0("accelerator_imp /= Void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		F1711_19227(RTCW(loc1));
	}
	RTLE;
}

/* {EV_ACCELERATOR_LIST}.disable_item_parented */
void F975_14407 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLIU(2);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		loc1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_1_);
		loc1 = RTRV(eif_new_type(1711, 0x00), loc1);
		RTCT0("accelerator_imp /= Void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		F1711_19228(RTCW(loc1));
	}
	RTLE;
}

void EIF_Minit1350 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
