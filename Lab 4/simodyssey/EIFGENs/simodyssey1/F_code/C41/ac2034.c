/*
 * Code for class ACTIVE_LIST [INTEGER_32]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ac2034.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {ACTIVE_LIST}.default_create */
void F972_4189 (EIF_REFERENCE Current)
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
	tr1 = RTLNSMART(eif_final_id(Y3110,Y3110_gen_type,dftype,970).id);
	F976_4196(RTCW(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_final_id(Y3111,Y3111_gen_type,dftype,970).id);
	F976_4196(RTCW(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
	F970_4167(Current);
	RTLE;
}

/* {ACTIVE_LIST}.on_item_added_at */
void F972_4193 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTGC;
	loc1 = *(EIF_INTEGER_32 *)(Current + O3095[Dtype(Current)-950]);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,1475,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = eif_final_id(Y2258,Y2258_gen_type,Dftype(Current),684);
			typarr0[4] = l_type.annotations | 0xFF00;
			typarr0[5] = l_type.id;
		}
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_i4 = arg1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3112[Dtype(RTCW(tr1))-975])(tr1, tr2);
	F957_4108(Current, loc1);
	RTLE;
}

/* {ACTIVE_LIST}.on_item_removed_at */
void F972_4194 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTGC;
	loc1 = *(EIF_INTEGER_32 *)(Current + O3095[Dtype(Current)-950]);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,1475,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = eif_final_id(Y2258,Y2258_gen_type,Dftype(Current),684);
			typarr0[4] = l_type.annotations | 0xFF00;
			typarr0[5] = l_type.id;
		}
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_i4 = arg1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3112[Dtype(RTCW(tr1))-975])(tr1, tr2);
	F957_4108(Current, loc1);
	RTLE;
}

void EIF_Minit2034 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
