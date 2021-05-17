/*
 * Code for class CONTROLLER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "co1043.h"
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

void F91_2 (EIF_REFERENCE Current, EIF_REFERENCE parent)
{
	GTCX
	uint32 offset_position = 0;
	RTLD;
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,parent);
	RTLIU(2);
	
	HEADER(Current)->ov_flags |= EO_COMP;
	offset_position = + _OBJSIZ_9_1_0_0_0_0_0_0_ + OVERHEAD;
	*(EIF_REFERENCE *) (Current + _REFACS_8_) = Current + offset_position;
	HEADER(Current + offset_position)->ov_flags = EO_EXP;
	
	RT_DFS(HEADER(Current + offset_position), eif_new_type(103, 0x00).id);
	HEADER(Current + offset_position)->ov_size = offset_position + (Current - parent);
	RTLE;
}

/* {CONTROLLER}.make */
void F91_9991 (EIF_REFERENCE Current)
{
	GTCX
	struct eif_ex_1040 sloc1;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) sloc1.data;
	struct eif_ex_1047 sloc2;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) sloc2.data;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCFDT;
	RTLD;
	
	memset (&sloc1.overhead, 0, OVERHEAD + _OBJSIZ_0_0_0_0_0_0_0_0_);
	sloc1.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc1.overhead, eif_new_type(89, 0x00).id);
	memset (&sloc2.overhead, 0, OVERHEAD + _OBJSIZ_0_0_0_0_0_0_0_0_);
	sloc2.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc2.overhead, eif_new_type(96, 0x00).id);
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLR(4,tr2);
	RTLR(5,tr3);
	RTLIU(6);
	
	RTGC;
	tr1 = RTOUCR(170,F90_9990, (RTCW(loc1)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	tr1 = RTOUCR(169,F97_10064, (RTCW(loc2)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_new_type(84, 1).id);
	F85_9932(RTCW(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_new_type(416, 1).id);
	F417_13429(RTCW(tr1), (EIF_CHARACTER_8) 'E', ((EIF_INTEGER_32) 0L));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_4_) = (EIF_REFERENCE) tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,950,0xFF01,417,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSMART(typres0.id);
	}
	F951_4073(RTCW(tr1), ((EIF_INTEGER_32) 0L));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_5_) = (EIF_REFERENCE) tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,918,0xFF01,1560,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSMART(typres0.id);
	}
	F919_3185(RTCW(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_6_) = (EIF_REFERENCE) tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,918,0xFF01,1560,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSMART(typres0.id);
	}
	F919_3185(RTCW(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_7_) = (EIF_REFERENCE) tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,939,0xFF01,85,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSMART(typres0.id);
	}
	tr2 = RTLNS(eif_new_type(85, 0x01).id, 85, _OBJSIZ_4_0_0_2_0_0_0_0_ + OVERHEAD +_OBJSIZ_0_0_0_0_0_0_0_0_ + OVERHEAD +_OBJSIZ_0_0_0_0_0_0_0_0_);
	F86_9944(RTCW(tr2));
	tr3 = *(EIF_REFERENCE *)(Current);
	ti4_1 = ((EIF_INTEGER_32) 5L);
	tr3 = *(EIF_REFERENCE *)(Current);
	ti4_2 = ((EIF_INTEGER_32) 5L);
	F940_3245(RTCW(tr1), tr2, ti4_1, ti4_2);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_9_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTLE;
}

/* {CONTROLLER}.get_ingame */
EIF_BOOLEAN F91_10002 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) *(EIF_BOOLEAN *)(Current+ _CHROFF_9_0_);
}

/* {CONTROLLER}.get_explorer */
EIF_REFERENCE F91_10003 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_REFERENCE) *(EIF_REFERENCE *)(Current + _REFACS_4_);
}

/* {CONTROLLER}.get_potential_location */
EIF_REFERENCE F91_10004 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_INTEGER_32 ti4_6;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLR(4,arg1);
	RTLIU(5);
	
	RTGC;
	tr1 = (Current+ _OBJSIZ_9_1_0_0_0_0_0_0_ + OVERHEAD);
	loc1 = F104_10107(RTCW(tr1), arg2);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,1475,1508,1508,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		loc2 = RTLNTS(typres0.id, 3, 1);
	}
	ti4_1 = eif_integer_32_item(RTCW(arg1),1);
	ti4_2 = eif_integer_32_item(RTCW(loc1),1);
	tr1 = *(EIF_REFERENCE *)(Current);
	ti4_3 = ((EIF_INTEGER_32) 5L);
	if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (ti4_1 + ti4_2) > ti4_3)) {
		
		eif_put_integer_32_item(RTCW(loc2),1,((EIF_INTEGER_32) 1L));
	} else {
		ti4_1 = eif_integer_32_item(RTCW(arg1),1);
		ti4_2 = eif_integer_32_item(RTCW(loc1),1);
		if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (ti4_1 + ti4_2) < ((EIF_INTEGER_32) 1L))) {
			tr1 = *(EIF_REFERENCE *)(Current);
			ti4_1 = ((EIF_INTEGER_32) 5L);
			
			eif_put_integer_32_item(RTCW(loc2),1,ti4_1);
		} else {
			ti4_2 = eif_integer_32_item(RTCW(arg1),1);
			ti4_3 = eif_integer_32_item(RTCW(loc1),1);
			
			eif_put_integer_32_item(RTCW(loc2),1,(EIF_INTEGER_32) (ti4_2 + ti4_3));
		}
	}
	ti4_4 = eif_integer_32_item(RTCW(arg1),2);
	ti4_5 = eif_integer_32_item(RTCW(loc1),2);
	tr1 = *(EIF_REFERENCE *)(Current);
	ti4_6 = ((EIF_INTEGER_32) 5L);
	if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (ti4_4 + ti4_5) > ti4_6)) {
		
		eif_put_integer_32_item(RTCW(loc2),2,((EIF_INTEGER_32) 1L));
	} else {
		ti4_4 = eif_integer_32_item(RTCW(arg1),2);
		ti4_5 = eif_integer_32_item(RTCW(loc1),2);
		if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (ti4_4 + ti4_5) < ((EIF_INTEGER_32) 1L))) {
			tr1 = *(EIF_REFERENCE *)(Current);
			ti4_4 = ((EIF_INTEGER_32) 5L);
			
			eif_put_integer_32_item(RTCW(loc2),2,ti4_4);
		} else {
			ti4_5 = eif_integer_32_item(RTCW(arg1),2);
			ti4_6 = eif_integer_32_item(RTCW(loc1),2);
			
			eif_put_integer_32_item(RTCW(loc2),2,(EIF_INTEGER_32) (ti4_5 + ti4_6));
		}
	}
	RTLE;
	return (EIF_REFERENCE) loc2;
}

/* {CONTROLLER}.get_entities */
EIF_REFERENCE F91_10005 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(7);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,loc2);
	RTLR(6,loc3);
	RTLIU(7);
	
	RTGC;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,950,0xFF01,415,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		Result = RTLNS(typres0.id, 950, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	F951_4073(RTCW(Result), ((EIF_INTEGER_32) 0L));
	F575_2465(RTCW(Result));
	tr2 = *(EIF_REFERENCE *)(Current);
	ti4_1 = ((EIF_INTEGER_32) 5L);
	tr1 = RTLNS(eif_new_type(1508, 0x00).id, 1508, _OBJSIZ_0_0_0_1_0_0_0_0_);
	*(EIF_INTEGER_32 *)tr1 = ((EIF_INTEGER_32) 1L);
	tr1 = F1507_6172(RTCW(tr1), ti4_1);
	loc1 = F828_3077(RTCW(tr1));
	for (;;) {
		tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3146[Dtype(loc1)-1026])(loc1);
		if (tb1) break;
		tr2 = *(EIF_REFERENCE *)(Current);
		ti4_1 = ((EIF_INTEGER_32) 5L);
		tr1 = RTLNS(eif_new_type(1508, 0x00).id, 1508, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)tr1 = ((EIF_INTEGER_32) 1L);
		tr1 = F1507_6172(RTCW(tr1), ti4_1);
		loc2 = F828_3077(RTCW(tr1));
		for (;;) {
			tb2 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3146[Dtype(loc2)-1026])(loc2);
			if (tb2) break;
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
			ti4_1 = (eif_optimize_return = 1, *(EIF_INTEGER_32 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3145[Dtype(loc1)-1026])(loc1));
			ti4_2 = (eif_optimize_return = 1, *(EIF_INTEGER_32 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3145[Dtype(loc2)-1026])(loc2));
			tr1 = F940_3247(RTCW(tr1), ti4_1, ti4_2);
			tr1 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_1_);
			loc3 = F951_4087(RTCW(tr1));
			for (;;) {
				tb3 = F1081_4373(loc3);
				if (tb3) break;
				tr1 = F1081_4364(loc3);
				F951_4113(RTCW(Result), tr1);
				F1081_4379(loc3);
			}
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R3147[Dtype(loc2)-1026])(loc2);
		}
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R3147[Dtype(loc1)-1026])(loc1);
	}
	RTLE;
	return (EIF_REFERENCE) F91_10030(Current, Result);
}

/* {CONTROLLER}.get_planets */
EIF_REFERENCE F91_10006 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,loc1);
	RTLR(3,loc2);
	RTLR(4,tr1);
	RTLIU(5);
	
	RTGC;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,950,0xFF01,415,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		Result = RTLNS(typres0.id, 950, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	F951_4073(RTCW(Result), ((EIF_INTEGER_32) 0L));
	loc1 = F91_10005(Current);
	tr1 = F951_4087(RTCW(loc1));
	loc2 = (EIF_REFERENCE) tr1;
	for (;;) {
		tb1 = F1081_4373(loc2);
		if (tb1) break;
		tr1 = F1081_4364(loc2);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1) + O11109[Dtype(tr1)-415]);
		if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
			tr1 = F1081_4364(loc2);
			F951_4113(RTCW(Result), tr1);
		}
		F1081_4379(loc2);
	}
	RTLE;
	return Result;
}

/* {CONTROLLER}.game_board */
EIF_REFERENCE F91_10007 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	Result = F85_9936(RTCW(tr1));
	RTLE;
	return Result;
}

/* {CONTROLLER}.game_board_array */
EIF_REFERENCE F91_10008 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_REFERENCE) *(EIF_REFERENCE *)(Current + _REFACS_3_);
}

/* {CONTROLLER}.in_blackhole */
EIF_BOOLEAN F91_10009 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	tr1 = F417_13437(RTCW(tr1));
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,1475,1508,1508,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 1);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_i4 = ((EIF_INTEGER_32) 3L);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 3L);
	Result = (EIF_BOOLEAN) RTEQ(tr1, tr2);
	RTLE;
	return Result;
}

/* {CONTROLLER}.has_yellow_dwarf */
EIF_BOOLEAN F91_10010 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	loc1 = F417_13437(RTCW(tr1));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	ti4_1 = eif_integer_32_item(RTCW(loc1),1);
	ti4_2 = eif_integer_32_item(RTCW(loc1),2);
	tr1 = F940_3247(RTCW(tr1), ti4_1, ti4_2);
	Result = F86_9952(RTCW(tr1), (EIF_CHARACTER_8) 'Y');
	RTLE;
	return Result;
}

/* {CONTROLLER}.has_planet */
EIF_BOOLEAN F91_10011 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	loc1 = F417_13437(RTCW(tr1));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	ti4_1 = eif_integer_32_item(RTCW(loc1),1);
	ti4_2 = eif_integer_32_item(RTCW(loc1),2);
	tr1 = F940_3247(RTCW(tr1), ti4_1, ti4_2);
	Result = F86_9952(RTCW(tr1), (EIF_CHARACTER_8) 'P');
	RTLE;
	return Result;
}

/* {CONTROLLER}.entities_index_of */
EIF_REFERENCE F91_10012 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTGC;
	loc2 = F91_10005(Current);
	Result = RTLNS(eif_new_type(415, 0x01).id, 415, _OBJSIZ_0_1_0_2_0_0_0_0_);
	F416_13421(RTCW(Result), (EIF_CHARACTER_8) 'E', ((EIF_INTEGER_32) 0L));
	F951_4104(RTCW(loc2));
	loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	for (;;) {
		tb1 = '\01';
		tb2 = F882_3332(RTCW(loc2));
		if (!tb2) {
			tb1 = loc1;
		}
		if (tb1) break;
		tr1 = F951_4078(RTCW(loc2));
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1) + O11109[Dtype(tr1)-415]);
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
			Result = F951_4078(RTCW(loc2));
			loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
		F951_4106(RTCW(loc2));
	}
	RTLE;
	return Result;
}

/* {CONTROLLER}.get_movement_as_string */
EIF_REFERENCE F91_10013 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(5);
	RTLR(0,Result);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLR(4,tr2);
	RTLIU(5);
	
	RTGC;
	Result = RTLNS(eif_new_type(1560, 0x01).id, 1560, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F1558_6510(RTCW(Result));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_6_);
	ti4_1 = F919_3198(RTCW(tr1));
	if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
		tr1 = RTMS_EX_H("none",4,1852796517);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, tr1);
	} else {
		tr1 = RTMS_EX_H("\012",1,10);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, tr1);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_6_);
		loc1 = F919_3195(RTCW(tr1));
		for (;;) {
			tb1 = F1081_4373(loc1);
			if (tb1) break;
			tr1 = RTMS_EX_H("    ",4,538976288);
			tr2 = F1081_4364(loc1);
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(tr1)-1560])(tr1, tr2);
			tr2 = RTMS_EX_H("\012",1,10);
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, tr1);
			F1081_4379(loc1);
		}
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_1_1_0_2_);
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4722[Dtype(RTCW(Result))-1560])(Result, ((EIF_INTEGER_32) 1L), (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L)));
		Result = (EIF_REFERENCE) tr1;
	}
	RTLE;
	return Result;
}

/* {CONTROLLER}.get_deaths_as_string */
EIF_REFERENCE F91_10014 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(5);
	RTLR(0,Result);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLR(4,tr2);
	RTLIU(5);
	
	RTGC;
	Result = RTLNS(eif_new_type(1560, 0x01).id, 1560, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F1558_6510(RTCW(Result));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_7_);
	ti4_1 = F919_3198(RTCW(tr1));
	if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
		Result = RTMS_EX_H("none",4,1852796517);
	} else {
		tr1 = RTMS_EX_H("\012",1,10);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, tr1);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_7_);
		loc1 = F919_3195(RTCW(tr1));
		for (;;) {
			tb1 = F1081_4373(loc1);
			if (tb1) break;
			tr1 = RTMS_EX_H("    ",4,538976288);
			tr2 = F1081_4364(loc1);
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(tr1)-1560])(tr1, tr2);
			tr2 = RTMS_EX_H("\012",1,10);
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, tr1);
			F1081_4379(loc1);
		}
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_1_1_0_2_);
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4722[Dtype(RTCW(Result))-1560])(Result, ((EIF_INTEGER_32) 1L), (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L)));
		Result = (EIF_REFERENCE) tr1;
	}
	RTLE;
	return Result;
}

/* {CONTROLLER}.set_ingame */
void F91_10015 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	
	
	*(EIF_BOOLEAN *)(Current+ _CHROFF_9_0_) = (EIF_BOOLEAN) arg1;
}

/* {CONTROLLER}.galaxy_update */
void F91_10016 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,loc3);
	RTLR(3,tr1);
	RTLR(4,loc2);
	RTLIU(5);
	
	RTGC;
	loc1 = F91_10006(Current);
	F951_4104(RTCW(loc1));
	for (;;) {
		tb1 = F882_3332(RTCW(loc1));
		if (tb1) break;
		RTCT0("attached {ENTITY_MOVABLE} entities.item as planet", EX_CHECK);
		tr1 = F951_4078(RTCW(loc1));
		loc3 = tr1;
		loc3 = RTRV(eif_new_type(417, 0x01),loc3);
		if (EIF_TEST(loc3)) {
			RTCK0;
		} else {
			RTCF0;
		}
		ti4_1 = F418_13464(loc3);
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
			loc2 = F418_13465(loc3);
			tr1 = F91_10008(Current);
			ti4_1 = eif_integer_32_item(RTCW(loc2),1);
			ti4_2 = eif_integer_32_item(RTCW(loc2),2);
			tr1 = F940_3247(RTCW(tr1), ti4_1, ti4_2);
			tb2 = F86_9953(RTCW(tr1));
			if (tb2) {
				F418_13471(loc3, (EIF_BOOLEAN) 1);
				F418_13467(loc3, ((EIF_INTEGER_32) -1L));
				tr1 = F91_10008(Current);
				ti4_1 = eif_integer_32_item(RTCW(loc2),1);
				ti4_2 = eif_integer_32_item(RTCW(loc2),2);
				tr1 = F940_3247(RTCW(tr1), ti4_1, ti4_2);
				tb2 = F86_9952(RTCW(tr1), (EIF_CHARACTER_8) 'Y');
				if (tb2) {
					F418_13469(loc3);
				}
			} else {
				F91_10019(Current, loc3);
			}
		} else {
			F418_13466(loc3);
		}
		F951_4106(RTCW(loc1));
	}
	RTLE;
}

/* {CONTROLLER}.reset_movements */
void F91_10017 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_6_);
	F919_3185(RTCW(tr1));
	RTLE;
}

/* {CONTROLLER}.reset_deaths */
void F91_10018 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_7_);
	F919_3185(RTCW(tr1));
	RTLE;
}

/* {CONTROLLER}.move_adjacent */
void F91_10019 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	struct eif_ex_1035 sloc1;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) sloc1.data;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	RTLD;
	
	memset (&sloc1.overhead, 0, OVERHEAD + _OBJSIZ_0_0_0_0_0_0_0_0_);
	sloc1.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc1.overhead, eif_new_type(83, 0x00).id);
	RTLI(7);
	RTLR(0,loc3);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,tr2);
	RTLR(4,loc2);
	RTLR(5,loc1);
	RTLR(6,Current);
	RTLIU(7);
	
	RTGC;
	tr1 = RTMS_EX_H("[",1,91);
	tr2 = F418_13465(RTCW(arg1));
	ti4_1 = eif_integer_32_item(RTCW(tr2),1);
	tr2 = c_outi(ti4_1);
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(tr1)-1560])(tr1, tr2);
	tr2 = RTMS_EX_H(",",1,44);
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
	tr2 = F418_13465(RTCW(arg1));
	ti4_1 = eif_integer_32_item(RTCW(tr2),2);
	tr2 = c_outi(ti4_1);
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
	tr2 = RTMS_EX_H(",",1,44);
	loc3 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_4_0_1_);
	tr1 = c_outi(ti4_1);
	tr2 = RTMS_EX_H("]",1,93);
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(loc3))-1560])(loc3, tr1);
	tr1 = F418_13465(RTCW(arg1));
	ti4_1 = F84_9927(RTCW(loc1), ((EIF_INTEGER_32) 1L), ((EIF_INTEGER_32) 8L));
	loc2 = F91_10004(Current, tr1, ti4_1);
	tr1 = F91_10008(Current);
	ti4_1 = eif_integer_32_item(RTCW(loc2),1);
	ti4_2 = eif_integer_32_item(RTCW(loc2),2);
	tr1 = F940_3247(RTCW(tr1), ti4_1, ti4_2);
	tb1 = F86_9950(RTCW(tr1));
	if ((EIF_BOOLEAN) !tb1) {
		tr1 = F91_10008(Current);
		tr2 = F418_13465(RTCW(arg1));
		ti4_1 = eif_integer_32_item(RTCW(tr2),1);
		tr2 = F418_13465(RTCW(arg1));
		ti4_2 = eif_integer_32_item(RTCW(tr2),2);
		tr1 = F940_3247(RTCW(tr1), ti4_1, ti4_2);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_4_0_0_);
		F86_9946(RTCW(tr1), ti4_1);
		tr1 = F91_10008(Current);
		ti4_1 = eif_integer_32_item(RTCW(loc2),1);
		ti4_2 = eif_integer_32_item(RTCW(loc2),2);
		tr1 = F940_3247(RTCW(tr1), ti4_1, ti4_2);
		F86_9947(RTCW(tr1), arg1);
	}
	F91_10033(Current, arg1, loc3);
	tb1 = '\0';
	ti4_1 = eif_integer_32_item(RTCW(loc2),1);
	if ((ti4_1 == ((EIF_INTEGER_32) 3L))) {
		ti4_1 = eif_integer_32_item(RTCW(loc2),2);
		tb1 = (ti4_1 == ((EIF_INTEGER_32) 3L));
	}
	if ((EIF_BOOLEAN) !tb1) {
		F91_10020(Current, arg1);
	} else {
		tr1 = F91_10008(Current);
		tr1 = F940_3247(RTCW(tr1), ((EIF_INTEGER_32) 3L), ((EIF_INTEGER_32) 3L));
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_4_0_0_);
		F86_9946(RTCW(tr1), ti4_1);
		F91_10034(Current, arg1);
	}
	RTLE;
}

/* {CONTROLLER}.check_for_star */
void F91_10020 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	struct eif_ex_1035 sloc1;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) sloc1.data;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	RTLD;
	
	memset (&sloc1.overhead, 0, OVERHEAD + _OBJSIZ_0_0_0_0_0_0_0_0_);
	sloc1.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc1.overhead, eif_new_type(83, 0x00).id);
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,tr2);
	RTLR(4,loc1);
	RTLIU(5);
	
	RTGC;
	tr1 = F91_10008(Current);
	tr2 = F418_13465(RTCW(arg1));
	ti4_1 = eif_integer_32_item(RTCW(tr2),1);
	tr2 = F418_13465(RTCW(arg1));
	ti4_2 = eif_integer_32_item(RTCW(tr2),2);
	tr1 = F940_3247(RTCW(tr1), ti4_1, ti4_2);
	tb1 = F86_9953(RTCW(tr1));
	if (tb1) {
		F418_13471(RTCW(arg1), (EIF_BOOLEAN) 1);
		F418_13467(RTCW(arg1), ((EIF_INTEGER_32) -1L));
		tr1 = F91_10008(Current);
		tr2 = F418_13465(RTCW(arg1));
		ti4_1 = eif_integer_32_item(RTCW(tr2),1);
		tr2 = F418_13465(RTCW(arg1));
		ti4_2 = eif_integer_32_item(RTCW(tr2),2);
		tr1 = F940_3247(RTCW(tr1), ti4_1, ti4_2);
		tb1 = F86_9952(RTCW(tr1), (EIF_CHARACTER_8) 'Y');
		if (tb1) {
			F418_13469(RTCW(arg1));
		}
	} else {
		ti4_1 = F84_9927(RTCW(loc1), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 2L));
		F418_13467(RTCW(arg1), ti4_1);
	}
	RTLE;
}

/* {CONTROLLER}.new_game */
void F91_10021 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLR(3,arg1);
	RTLIU(4);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	F93_10060(RTCW(tr1));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	F85_9933(RTCW(tr1));
	RTCT0("attached {ENTITY_EXPLORER} g.grid[1, 1].contents[1] as e", EX_CHECK);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	tr1 = *(EIF_REFERENCE *)(RTCW(tr1));
	tr1 = F940_3247(RTCW(tr1), ((EIF_INTEGER_32) 1L), ((EIF_INTEGER_32) 1L));
	tr1 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_1_);
	tr1 = F951_4079(RTCW(tr1), ((EIF_INTEGER_32) 1L));
	loc1 = tr1;
	loc1 = RTRV(eif_new_type(416, 0x01),loc1);
	if (EIF_TEST(loc1)) {
		RTCK0;
	} else {
		RTCF0;
	}
	RTAR(Current, loc1);
	*(EIF_REFERENCE *)(Current + _REFACS_4_) = (EIF_REFERENCE) loc1;
	F91_10015(Current, (EIF_BOOLEAN) 1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	tr1 = *(EIF_REFERENCE *)(RTCW(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	F258_11818(RTCW(tr1), arg1);
	RTLE;
}

/* {CONTROLLER}.end_game */
void F91_10022 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLIU(4);
	
	RTGC;
	F91_10015(Current, (EIF_BOOLEAN) 0);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,939,0xFF01,85,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNSMART(typres0.id);
	}
	tr2 = RTLNS(eif_new_type(85, 0x01).id, 85, _OBJSIZ_4_0_0_2_0_0_0_0_ + OVERHEAD +_OBJSIZ_0_0_0_0_0_0_0_0_ + OVERHEAD +_OBJSIZ_0_0_0_0_0_0_0_0_);
	F86_9944(RTCW(tr2));
	tr3 = *(EIF_REFERENCE *)(Current);
	ti4_1 = ((EIF_INTEGER_32) 5L);
	tr3 = *(EIF_REFERENCE *)(Current);
	ti4_2 = ((EIF_INTEGER_32) 5L);
	F940_3245(RTCW(tr1), tr2, ti4_1, ti4_2);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {CONTROLLER}.move */
void F91_10023 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLR(4,loc3);
	RTLR(5,tr2);
	RTLIU(6);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	loc1 = F417_13437(RTCW(tr1));
	loc2 = F91_10004(Current, loc1, arg1);
	tr1 = RTMS_EX_H("[",1,91);
	ti4_1 = eif_integer_32_item(RTCW(loc1),1);
	tr2 = c_outi(ti4_1);
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(tr1)-1560])(tr1, tr2);
	tr2 = RTMS_EX_H(",",1,44);
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
	ti4_1 = eif_integer_32_item(RTCW(loc1),2);
	tr2 = c_outi(ti4_1);
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
	tr2 = RTMS_EX_H(",",1,44);
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
	tr2 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr2)+ _LNGOFF_1_2_0_1_);
	tr2 = c_outi(ti4_1);
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
	tr2 = RTMS_EX_H("]",1,93);
	loc3 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
	tr1 = F91_10008(Current);
	ti4_1 = eif_integer_32_item(RTCW(loc1),1);
	ti4_2 = eif_integer_32_item(RTCW(loc1),2);
	tr1 = F940_3247(RTCW(tr1), ti4_1, ti4_2);
	tr2 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr2)+ _LNGOFF_1_2_0_0_);
	F86_9946(RTCW(tr1), ti4_1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	F417_13445(RTCW(tr1));
	tr1 = F91_10008(Current);
	ti4_1 = eif_integer_32_item(RTCW(loc2),1);
	ti4_2 = eif_integer_32_item(RTCW(loc2),2);
	tr1 = F940_3247(RTCW(tr1), ti4_1, ti4_2);
	F86_9947(RTCW(tr1), *(EIF_REFERENCE *)(Current + _REFACS_4_));
	F91_10033(Current, *(EIF_REFERENCE *)(Current + _REFACS_4_), loc3);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	ti4_1 = F417_13435(RTCW(tr1));
	if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
		tr1 = F91_10008(Current);
		ti4_1 = eif_integer_32_item(RTCW(loc2),1);
		ti4_2 = eif_integer_32_item(RTCW(loc2),2);
		tr1 = F940_3247(RTCW(tr1), ti4_1, ti4_2);
		tr2 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr2)+ _LNGOFF_1_2_0_0_);
		F86_9946(RTCW(tr1), ti4_1);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
		F417_13447(RTCW(tr1));
		F91_10034(Current, *(EIF_REFERENCE *)(Current + _REFACS_4_));
	} else {
		if (F91_10009(Current)) {
			tr1 = F91_10008(Current);
			tr1 = F940_3247(RTCW(tr1), ((EIF_INTEGER_32) 3L), ((EIF_INTEGER_32) 3L));
			tr2 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr2)+ _LNGOFF_1_2_0_0_);
			F86_9946(RTCW(tr1), ti4_1);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
			F417_13447(RTCW(tr1));
			F91_10034(Current, *(EIF_REFERENCE *)(Current + _REFACS_4_));
		}
	}
	F91_10016(Current);
	RTLE;
}

/* {CONTROLLER}.pass */
void F91_10024 (EIF_REFERENCE Current)
{
	GTCX
	
	
	F91_10016(Current);
}

/* {CONTROLLER}.enter_wormhole */
void F91_10025 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	struct eif_ex_1035 sloc4;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) sloc4.data;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	RTLD;
	
	memset (&sloc4.overhead, 0, OVERHEAD + _OBJSIZ_0_0_0_0_0_0_0_0_);
	sloc4.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc4.overhead, eif_new_type(83, 0x00).id);
	RTLI(5);
	RTLR(0,loc4);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc5);
	RTLR(4,tr2);
	RTLIU(5);
	
	RTGC;
	loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	for (;;) {
		if (loc1) break;
		loc2 = F84_9927(RTCW(loc4), ((EIF_INTEGER_32) 1L), ((EIF_INTEGER_32) 5L));
		loc3 = F84_9927(RTCW(loc4), ((EIF_INTEGER_32) 1L), ((EIF_INTEGER_32) 5L));
		tr1 = F91_10008(Current);
		tr1 = F940_3247(RTCW(tr1), loc2, loc3);
		tb1 = F86_9950(RTCW(tr1));
		if ((EIF_BOOLEAN) !tb1) {
			tr1 = RTMS_EX_H("[",1,91);
			tr2 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
			tr2 = F417_13437(RTCW(tr2));
			ti4_1 = eif_integer_32_item(RTCW(tr2),1);
			tr2 = c_outi(ti4_1);
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(tr1)-1560])(tr1, tr2);
			tr2 = RTMS_EX_H(",",1,44);
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
			tr2 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
			tr2 = F417_13437(RTCW(tr2));
			ti4_1 = eif_integer_32_item(RTCW(tr2),2);
			tr2 = c_outi(ti4_1);
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
			tr2 = RTMS_EX_H(",",1,44);
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
			tr2 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr2)+ _LNGOFF_1_2_0_1_);
			tr2 = c_outi(ti4_1);
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
			tr2 = RTMS_EX_H("]",1,93);
			loc5 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
			tr1 = F91_10008(Current);
			tr2 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
			tr2 = F417_13437(RTCW(tr2));
			ti4_1 = eif_integer_32_item(RTCW(tr2),1);
			tr2 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
			tr2 = F417_13437(RTCW(tr2));
			ti4_2 = eif_integer_32_item(RTCW(tr2),2);
			tr1 = F940_3247(RTCW(tr1), ti4_1, ti4_2);
			tr2 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr2)+ _LNGOFF_1_2_0_0_);
			F86_9946(RTCW(tr1), ti4_1);
			tr1 = F91_10008(Current);
			tr1 = F940_3247(RTCW(tr1), loc2, loc3);
			F86_9947(RTCW(tr1), *(EIF_REFERENCE *)(Current + _REFACS_4_));
			F91_10033(Current, *(EIF_REFERENCE *)(Current + _REFACS_4_), loc5);
			if (F91_10009(Current)) {
				tr1 = F91_10008(Current);
				tr1 = F940_3247(RTCW(tr1), loc2, loc3);
				tr2 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
				ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr2)+ _LNGOFF_1_2_0_0_);
				F86_9946(RTCW(tr1), ti4_1);
				F91_10034(Current, *(EIF_REFERENCE *)(Current + _REFACS_4_));
			}
			loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
	}
	F91_10016(Current);
	RTLE;
}

/* {CONTROLLER}.land */
void F91_10026 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc2 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc3);
	RTLR(4,loc4);
	RTLIU(5);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	loc1 = F417_13437(RTCW(tr1));
	tr1 = F91_10008(Current);
	ti4_1 = eif_integer_32_item(RTCW(loc1),1);
	ti4_2 = eif_integer_32_item(RTCW(loc1),2);
	tr1 = F940_3247(RTCW(tr1), ti4_1, ti4_2);
	loc3 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_1_);
	F951_4104(RTCW(loc3));
	loc2 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	for (;;) {
		tb1 = '\01';
		if (!loc2) {
			tb2 = F882_3332(RTCW(loc3));
			tb1 = tb2;
		}
		if (tb1) break;
		tr1 = F951_4078(RTCW(loc3));
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1) + O11109[Dtype(tr1)-415]);
		if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
			RTCT0("attached {ENTITY_MOVABLE} sector.item as planet", EX_CHECK);
			tr1 = F951_4078(RTCW(loc3));
			loc4 = tr1;
			loc4 = RTRV(eif_new_type(417, 0x01),loc4);
			if (EIF_TEST(loc4)) {
				RTCK0;
			} else {
				RTCF0;
			}
			tb2 = F418_13463(loc4);
			if ((EIF_BOOLEAN) !tb2) {
				F418_13468(loc4);
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
				F417_13448(RTCW(tr1), (EIF_BOOLEAN) 1);
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
				ti4_1 = *(EIF_INTEGER_32 *)(loc4+ _LNGOFF_1_4_0_0_);
				F417_13449(RTCW(tr1), ti4_1);
				loc2 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			}
		}
		F951_4106(RTCW(loc3));
	}
	F91_10016(Current);
	RTLE;
}

/* {CONTROLLER}.liftoff */
void F91_10027 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	F417_13448(RTCW(tr1), (EIF_BOOLEAN) 0);
	F91_10016(Current);
	RTLE;
}

/* {CONTROLLER}.entities_description */
EIF_REFERENCE F91_10028 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(9);
	RTLR(0,Result);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,loc3);
	RTLR(4,tr1);
	RTLR(5,loc2);
	RTLR(6,tr2);
	RTLR(7,loc4);
	RTLR(8,loc5);
	RTLIU(9);
	
	RTGC;
	Result = RTLNS(eif_new_type(1560, 0x01).id, 1560, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F1558_6510(RTCW(Result));
	loc1 = F91_10005(Current);
	tr1 = F951_4087(RTCW(loc1));
	loc3 = (EIF_REFERENCE) tr1;
	for (;;) {
		tb1 = F1081_4373(loc3);
		if (tb1) break;
		tr1 = RTMS_EX_H("    ",4,538976288);
		tr2 = F1081_4364(loc3);
		tr2 = F416_13425(RTCW(tr2));
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(tr1)-1560])(tr1, tr2);
		tr2 = RTMS_EX_H("->",2,11582);
		loc2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
		tr1 = F1081_4364(loc3);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1) + O11109[Dtype(tr1)-415]);
		if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
			tr1 = F1081_4364(loc3);
			loc4 = tr1;
			loc4 = RTRV(eif_new_type(417, 0x01),loc4);
			if (EIF_TEST(loc4)) {
				tr1 = F91_10032(Current, loc4);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(loc2))-1560])(loc2, tr1);
			}
		} else {
			tb2 = '\0';
			tr1 = F1081_4364(loc3);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1) + O11109[Dtype(tr1)-415]);
			if ((EIF_BOOLEAN) (ti4_1 < ((EIF_INTEGER_32) 0L))) {
				tb3 = '\01';
				tr1 = F1081_4364(loc3);
				tc1 = *(EIF_CHARACTER_8 *)(RTCW(tr1) + O11108[Dtype(tr1)-415]);
				if (!(tc1 == (EIF_CHARACTER_8) '*')) {
					tr1 = F1081_4364(loc3);
					tc1 = *(EIF_CHARACTER_8 *)(RTCW(tr1) + O11108[Dtype(tr1)-415]);
					tb3 = (tc1 == (EIF_CHARACTER_8) 'Y');
				}
				tb2 = tb3;
			}
			if (tb2) {
				tr1 = RTMS_EX_H("Luminosity:",11,1319805754);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(loc2))-1560])(loc2, tr1);
				tr1 = F1081_4364(loc3);
				loc5 = tr1;
				loc5 = RTRV(eif_new_type(418, 0x01),loc5);
				if (EIF_TEST(loc5)) {
					ti4_1 = F419_13476(loc5);
					tr1 = c_outi(ti4_1);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(loc2))-1560])(loc2, tr1);
				}
			} else {
				tr1 = F1081_4364(loc3);
				ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1) + O11109[Dtype(tr1)-415]);
				if ((ti4_1 == ((EIF_INTEGER_32) 0L))) {
					tr1 = F91_10031(Current);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(loc2))-1560])(loc2, tr1);
				}
			}
		}
		tr1 = RTMS_EX_H("\012",1,10);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(loc2))-1560])(loc2, tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, loc2);
		F1081_4379(loc3);
	}
	RTLE;
	return Result;
}

/* {CONTROLLER}.sectors_update */
EIF_REFERENCE F91_10029 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(8);
	RTLR(0,Result);
	RTLR(1,loc2);
	RTLR(2,tr1);
	RTLR(3,Current);
	RTLR(4,tr2);
	RTLR(5,loc3);
	RTLR(6,loc1);
	RTLR(7,loc4);
	RTLIU(8);
	
	RTGC;
	Result = RTLNS(eif_new_type(1560, 0x01).id, 1560, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F1558_6510(RTCW(Result));
	tr2 = *(EIF_REFERENCE *)(Current);
	ti4_1 = ((EIF_INTEGER_32) 5L);
	tr1 = RTLNS(eif_new_type(1508, 0x00).id, 1508, _OBJSIZ_0_0_0_1_0_0_0_0_);
	*(EIF_INTEGER_32 *)tr1 = ((EIF_INTEGER_32) 1L);
	tr1 = F1507_6172(RTCW(tr1), ti4_1);
	loc2 = F828_3077(RTCW(tr1));
	for (;;) {
		tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3146[Dtype(loc2)-1026])(loc2);
		if (tb1) break;
		tr2 = *(EIF_REFERENCE *)(Current);
		ti4_1 = ((EIF_INTEGER_32) 5L);
		tr1 = RTLNS(eif_new_type(1508, 0x00).id, 1508, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)tr1 = ((EIF_INTEGER_32) 1L);
		tr1 = F1507_6172(RTCW(tr1), ti4_1);
		loc3 = F828_3077(RTCW(tr1));
		for (;;) {
			tb2 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3146[Dtype(loc3)-1026])(loc3);
			if (tb2) break;
			tr1 = RTMS_EX_H("    [",5,539222107);
			ti4_1 = (eif_optimize_return = 1, *(EIF_INTEGER_32 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3145[Dtype(loc2)-1026])(loc2));
			tr2 = c_outi(ti4_1);
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(tr1)-1560])(tr1, tr2);
			tr2 = RTMS_EX_H(",",1,44);
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
			ti4_1 = (eif_optimize_return = 1, *(EIF_INTEGER_32 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3145[Dtype(loc3)-1026])(loc3));
			tr2 = c_outi(ti4_1);
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
			tr2 = RTMS_EX_H("]->",3,6106430);
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, tr1);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
			ti4_1 = (eif_optimize_return = 1, *(EIF_INTEGER_32 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3145[Dtype(loc2)-1026])(loc2));
			ti4_2 = (eif_optimize_return = 1, *(EIF_INTEGER_32 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3145[Dtype(loc3)-1026])(loc3));
			loc1 = F940_3247(RTCW(tr1), ti4_1, ti4_2);
			tr2 = *(EIF_REFERENCE *)(Current);
			ti4_1 = ((EIF_INTEGER_32) 4L);
			tr1 = RTLNS(eif_new_type(1508, 0x00).id, 1508, _OBJSIZ_0_0_0_1_0_0_0_0_);
			*(EIF_INTEGER_32 *)tr1 = ((EIF_INTEGER_32) 1L);
			tr1 = F1507_6172(RTCW(tr1), ti4_1);
			loc4 = F828_3077(RTCW(tr1));
			for (;;) {
				tb3 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3146[Dtype(loc4)-1026])(loc4);
				if (tb3) break;
				ti4_1 = (eif_optimize_return = 1, *(EIF_INTEGER_32 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3145[Dtype(loc4)-1026])(loc4));
				tr1 = F86_9956(RTCW(loc1), ti4_1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, tr1);
				ti4_1 = (eif_optimize_return = 1, *(EIF_INTEGER_32 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3145[Dtype(loc4)-1026])(loc4));
				if ((EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 4L))) {
					tr1 = RTMS_EX_H(",",1,44);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, tr1);
				}
				(FUNCTION_CAST(void, (EIF_REFERENCE)) R3147[Dtype(loc4)-1026])(loc4);
			}
			tr1 = RTMS_EX_H("\012",1,10);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, tr1);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R3147[Dtype(loc3)-1026])(loc3);
		}
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R3147[Dtype(loc2)-1026])(loc2);
	}
	RTLE;
	return Result;
}

/* {CONTROLLER}.sort */
EIF_REFERENCE F91_10030 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc2 = (EIF_BOOLEAN) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,loc4);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLIU(4);
	
	RTGC;
	loc2 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		tb1 = '\01';
		ti4_1 = F951_4094(RTCW(arg1));
		if (!(EIF_BOOLEAN) (loc3 > ti4_1)) {
			tb1 = (EIF_BOOLEAN) !loc2;
		}
		if (tb1) break;
		loc2 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		ti4_1 = F951_4094(RTCW(arg1));
		tr1 = RTLNS(eif_new_type(1508, 0x00).id, 1508, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)tr1 = ((EIF_INTEGER_32) 1L);
		tr1 = F1507_6172(RTCW(tr1), (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L)));
		loc4 = F828_3077(RTCW(tr1));
		for (;;) {
			tb2 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3146[Dtype(loc4)-1026])(loc4);
			if (tb2) break;
			ti4_1 = (eif_optimize_return = 1, *(EIF_INTEGER_32 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3145[Dtype(loc4)-1026])(loc4));
			tr1 = F951_4079(RTCW(arg1), ti4_1);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1) + O11109[Dtype(tr1)-415]);
			ti4_2 = (eif_optimize_return = 1, *(EIF_INTEGER_32 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3145[Dtype(loc4)-1026])(loc4));
			tr1 = F951_4079(RTCW(arg1), (EIF_INTEGER_32) (ti4_2 + ((EIF_INTEGER_32) 1L)));
			ti4_2 = *(EIF_INTEGER_32 *)(RTCW(tr1) + O11109[Dtype(tr1)-415]);
			if ((EIF_BOOLEAN) (ti4_1 > ti4_2)) {
				ti4_1 = (eif_optimize_return = 1, *(EIF_INTEGER_32 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3145[Dtype(loc4)-1026])(loc4));
				loc1 = F951_4079(RTCW(arg1), ti4_1);
				ti4_1 = (eif_optimize_return = 1, *(EIF_INTEGER_32 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3145[Dtype(loc4)-1026])(loc4));
				tr1 = F951_4079(RTCW(arg1), (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)));
				ti4_1 = (eif_optimize_return = 1, *(EIF_INTEGER_32 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3145[Dtype(loc4)-1026])(loc4));
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R2255[Dtype(RTCW(arg1))-918])(arg1, tr1, (EIF_REFERENCE) &ti4_1);
				ti4_1 = (eif_optimize_return = 1, *(EIF_INTEGER_32 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3145[Dtype(loc4)-1026])(loc4));
				ti4_2 = (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R2255[Dtype(RTCW(arg1))-918])(arg1, loc1, (EIF_REFERENCE) &ti4_2);
				loc2 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			}
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R3147[Dtype(loc4)-1026])(loc4);
		}
		loc3++;
	}
	RTLE;
	return (EIF_REFERENCE) arg1;
}

/* {CONTROLLER}.explorer_items */
EIF_REFERENCE F91_10031 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,Result);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTGC;
	Result = RTLNS(eif_new_type(1560, 0x01).id, 1560, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F1558_6510(RTCW(Result));
	tr1 = RTMS_EX_H("fuel:",5,1970364474);
	tr2 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	ti4_1 = F417_13435(RTCW(tr2));
	tr2 = c_outi(ti4_1);
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(tr1)-1560])(tr1, tr2);
	tr2 = RTMS_EX_H("/",1,47);
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
	tr2 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	ti4_1 = RTOUCB(EIF_INTEGER_32,177,F417_13450, (RTCW(tr2)));
	tr2 = c_outi(ti4_1);
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, tr1);
	tr1 = RTMS_EX_H(", life:",7,355709498);
	tr2 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	ti4_1 = F417_13436(RTCW(tr2));
	tr2 = c_outi(ti4_1);
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(tr1)-1560])(tr1, tr2);
	tr2 = RTMS_EX_H("/",1,47);
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
	tr2 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	ti4_1 = RTOUCB(EIF_INTEGER_32,178,F417_13451, (RTCW(tr2)));
	tr2 = c_outi(ti4_1);
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, tr1);
	tr1 = RTMS_EX_H(", landed\?:",10,1919101498);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, tr1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	tb1 = F417_13438(RTCW(tr1));
	if (tb1) {
		tr1 = RTMS_EX_H("T",1,84);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, tr1);
	} else {
		tr1 = RTMS_EX_H("F",1,70);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, tr1);
	}
	RTLE;
	return Result;
}

/* {CONTROLLER}.planet_items */
EIF_REFERENCE F91_10032 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,Result);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTGC;
	Result = RTLNS(eif_new_type(1560, 0x01).id, 1560, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F1558_6510(RTCW(Result));
	tr1 = RTMS_EX_H("attached\?:",10,1822145338);
	tr2 = F418_13458(RTCW(arg1));
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(tr1)-1560])(tr1, tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, tr1);
	tr1 = RTMS_EX_H(", support_life\?:",16,591235642);
	tr2 = F418_13459(RTCW(arg1));
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(tr1)-1560])(tr1, tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, tr1);
	tr1 = RTMS_EX_H(", visited\?:",11,507026234);
	tr2 = F418_13460(RTCW(arg1));
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(tr1)-1560])(tr1, tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, tr1);
	tr1 = RTMS_EX_H(", turns_left:",13,1375572794);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, tr1);
	tb1 = '\0';
	tb2 = '\0';
	tb3 = '\0';
	tr1 = F418_13465(RTCW(arg1));
	ti4_1 = eif_integer_32_item(RTCW(tr1),1);
	if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 3L))) {
		tr1 = F418_13465(RTCW(arg1));
		ti4_1 = eif_integer_32_item(RTCW(tr1),2);
		tb3 = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 3L));
	}
	if ((EIF_BOOLEAN) !tb3) {
		ti4_1 = F418_13464(RTCW(arg1));
		tb2 = (EIF_BOOLEAN) !(EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) -1L));
	}
	if (tb2) {
		tb2 = F418_13461(RTCW(arg1));
		tb1 = (EIF_BOOLEAN) !tb2;
	}
	if (tb1) {
		ti4_1 = F418_13464(RTCW(arg1));
		tr1 = c_outi(ti4_1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, tr1);
	} else {
		tr1 = RTMS_EX_H("N/A",3,5123905);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, tr1);
	}
	RTLE;
	return Result;
}

/* {CONTROLLER}.append_movement */
void F91_10033 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_8 tc1;
	RTLD;
	
	RTLI(8);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,arg2);
	RTLR(5,loc3);
	RTLR(6,loc2);
	RTLR(7,Current);
	RTLIU(8);
	
	RTGC;
	tr1 = F416_13425(RTCW(arg1));
	tr2 = RTMS_EX_H(":",1,58);
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
	loc1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, arg2);
	tc1 = *(EIF_CHARACTER_8 *)(RTCW(arg1) + O11108[Dtype(arg1)-415]);
	if ((tc1 == (EIF_CHARACTER_8) 'P')) {
		RTCT0("attached {ENTITY_MOVABLE} entity as planet", EX_CHECK);
		loc3 = arg1;
		loc3 = RTRV(eif_new_type(417, 0x01),loc3);
		if (EIF_TEST(loc3)) {
			RTCK0;
		} else {
			RTCF0;
		}
		tr1 = RTMS_EX_H("[",1,91);
		tr2 = F418_13465(loc3);
		ti4_1 = eif_integer_32_item(RTCW(tr2),1);
		tr2 = c_outi(ti4_1);
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(tr1)-1560])(tr1, tr2);
		tr2 = RTMS_EX_H(",",1,44);
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
		tr2 = F418_13465(loc3);
		ti4_1 = eif_integer_32_item(RTCW(tr2),2);
		tr2 = c_outi(ti4_1);
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
		tr2 = RTMS_EX_H(",",1,44);
		loc2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_1_1_0_2_);
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4722[Dtype(RTCW(arg2))-1560])(arg2, ((EIF_INTEGER_32) 1L), (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 2L)));
		if ((EIF_BOOLEAN) !RTEQ(tr1, loc2)) {
			tr1 = RTMS_EX_H("->",2,11582);
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(tr1)-1560])(tr1, loc2);
			ti4_1 = *(EIF_INTEGER_32 *)(loc3+ _LNGOFF_1_4_0_1_);
			tr2 = c_outi(ti4_1);
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
			tr2 = RTMS_EX_H("]",1,93);
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(loc1))-1560])(loc1, tr1);
		}
	} else {
		tc1 = *(EIF_CHARACTER_8 *)(RTCW(arg1) + O11108[Dtype(arg1)-415]);
		if ((tc1 == (EIF_CHARACTER_8) 'E')) {
			tr1 = RTMS_EX_H("->[",3,2965083);
			tr2 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
			tr2 = F417_13437(RTCW(tr2));
			ti4_1 = eif_integer_32_item(RTCW(tr2),1);
			tr2 = c_outi(ti4_1);
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(tr1)-1560])(tr1, tr2);
			tr2 = RTMS_EX_H(",",1,44);
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
			tr2 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
			tr2 = F417_13437(RTCW(tr2));
			ti4_1 = eif_integer_32_item(RTCW(tr2),2);
			tr2 = c_outi(ti4_1);
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
			tr2 = RTMS_EX_H(",",1,44);
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(loc1))-1560])(loc1, tr1);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_1_2_0_1_);
			tr1 = c_outi(ti4_1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(loc1))-1560])(loc1, tr1);
			tr1 = RTMS_EX_H("]",1,93);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(loc1))-1560])(loc1, tr1);
		}
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_6_);
	tr2 = *(EIF_REFERENCE *)(Current + _REFACS_6_);
	ti4_1 = F919_3198(RTCW(tr2));
	F919_3212(RTCW(tr1), loc1, (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)));
	RTLE;
}

/* {CONTROLLER}.append_death */
void F91_10034 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	RTLD;
	
	RTLI(7);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,loc2);
	RTLR(5,Current);
	RTLR(6,tr3);
	RTLIU(7);
	
	RTGC;
	tr1 = F416_13425(RTCW(arg1));
	tr2 = RTMS_EX_H("->",2,11582);
	loc1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
	tc1 = *(EIF_CHARACTER_8 *)(RTCW(arg1) + O11108[Dtype(arg1)-415]);
	if ((tc1 == (EIF_CHARACTER_8) 'P')) {
		RTCT0("attached {ENTITY_MOVABLE} entity as planet", EX_CHECK);
		loc2 = arg1;
		loc2 = RTRV(eif_new_type(417, 0x01),loc2);
		if (EIF_TEST(loc2)) {
			RTCK0;
		} else {
			RTCF0;
		}
		tr1 = F91_10032(Current, loc2);
		tr2 = RTMS_EX_H(",\012",2,11274);
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(loc1))-1560])(loc1, tr1);
		tr1 = RTMS_EX_H("    ",4,538976288);
		tr2 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tr2 = F257_11791(RTCW(tr2));
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(tr1)-1560])(tr1, tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(loc1))-1560])(loc1, tr1);
	} else {
		tc1 = *(EIF_CHARACTER_8 *)(RTCW(arg1) + O11108[Dtype(arg1)-415]);
		if ((tc1 == (EIF_CHARACTER_8) 'E')) {
			tr1 = F91_10031(Current);
			tr2 = RTMS_EX_H(",\012",2,11274);
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(loc1))-1560])(loc1, tr1);
			tb1 = '\0';
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
			tr1 = F417_13437(RTCW(tr1));
			ti4_1 = eif_integer_32_item(RTCW(tr1),1);
			if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 3L))) {
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
				tr1 = F417_13437(RTCW(tr1));
				ti4_1 = eif_integer_32_item(RTCW(tr1),2);
				tb1 = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 3L));
			}
			if (tb1) {
				tr1 = RTMS_EX_H("    ",4,538976288);
				tr2 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
				tr2 = F257_11795(RTCW(tr2));
				tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(tr1)-1560])(tr1, tr2);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(loc1))-1560])(loc1, tr1);
			} else {
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
				ti4_1 = F417_13435(RTCW(tr1));
				if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
					tr1 = RTMS_EX_H("    ",4,538976288);
					tr2 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
					tr3 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
					tr3 = F417_13441(RTCW(tr3));
					tr2 = F257_11792(RTCW(tr2), tr3);
					tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(tr1)-1560])(tr1, tr2);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(loc1))-1560])(loc1, tr1);
				}
			}
		}
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_7_);
	tr2 = *(EIF_REFERENCE *)(Current + _REFACS_7_);
	ti4_1 = F919_3198(RTCW(tr2));
	F919_3212(RTCW(tr1), loc1, (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)));
	RTLE;
}

void EIF_Minit1043 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
