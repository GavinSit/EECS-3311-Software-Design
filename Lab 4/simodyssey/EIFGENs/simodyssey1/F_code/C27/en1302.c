/*
 * Code for class ENTITY_MOVABLE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "en1302.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {ENTITY_MOVABLE}.make */
void F418_13452 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	F416_13421(Current, arg1, arg2);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_1_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_1_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_1_3_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_4_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,1475,1508,1508,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNTS(typres0.id, 3, 1);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_i4 = ((EIF_INTEGER_32) -1L);
	((EIF_TYPED_VALUE *)tr1+2)->it_i4 = ((EIF_INTEGER_32) -1L);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {ENTITY_MOVABLE}.get_attached_string */
EIF_REFERENCE F418_13458 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_REFERENCE) F418_13473(Current, *(EIF_BOOLEAN *)(Current+ _CHROFF_1_1_));
}

/* {ENTITY_MOVABLE}.get_support_life_string */
EIF_REFERENCE F418_13459 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_REFERENCE) F418_13473(Current, *(EIF_BOOLEAN *)(Current+ _CHROFF_1_2_));
}

/* {ENTITY_MOVABLE}.get_visited_string */
EIF_REFERENCE F418_13460 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_REFERENCE) F418_13473(Current, *(EIF_BOOLEAN *)(Current+ _CHROFF_1_3_));
}

/* {ENTITY_MOVABLE}.get_attached */
EIF_BOOLEAN F418_13461 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) *(EIF_BOOLEAN *)(Current+ _CHROFF_1_1_);
}

/* {ENTITY_MOVABLE}.get_support_life */
EIF_BOOLEAN F418_13462 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) *(EIF_BOOLEAN *)(Current+ _CHROFF_1_2_);
}

/* {ENTITY_MOVABLE}.get_visited */
EIF_BOOLEAN F418_13463 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) *(EIF_BOOLEAN *)(Current+ _CHROFF_1_3_);
}

/* {ENTITY_MOVABLE}.get_turns_left */
EIF_INTEGER_32 F418_13464 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_4_0_2_);
}

/* {ENTITY_MOVABLE}.get_location */
EIF_REFERENCE F418_13465 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_REFERENCE) *(EIF_REFERENCE *)(Current);
}

/* {ENTITY_MOVABLE}.decrement_turns */
void F418_13466 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_4_0_2_) > ((EIF_INTEGER_32) 0L))) {
		(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_4_0_2_))--;
	}
	RTLE;
}

/* {ENTITY_MOVABLE}.set_turns */
void F418_13467 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_4_0_2_) = (EIF_INTEGER_32) arg1;
}

/* {ENTITY_MOVABLE}.set_visited */
void F418_13468 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_BOOLEAN *)(Current+ _CHROFF_1_3_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
}

/* {ENTITY_MOVABLE}.support_life_generate */
void F418_13469 (EIF_REFERENCE Current)
{
	GTCX
	struct eif_ex_1035 sloc1;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) sloc1.data;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	RTLD;
	
	memset (&sloc1.overhead, 0, OVERHEAD + _OBJSIZ_0_0_0_0_0_0_0_0_);
	sloc1.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc1.overhead, eif_new_type(83, 0x00).id);
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLIU(2);
	
	RTGC;
	if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_1_2_)) {
		loc2 = F84_9927(RTCW(loc1), ((EIF_INTEGER_32) 1L), ((EIF_INTEGER_32) 2L));
		if ((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 2L))) {
			*(EIF_BOOLEAN *)(Current+ _CHROFF_1_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
	}
	RTLE;
}

/* {ENTITY_MOVABLE}.set_location */
void F418_13470 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
}

/* {ENTITY_MOVABLE}.set_attached */
void F418_13471 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	
	
	*(EIF_BOOLEAN *)(Current+ _CHROFF_1_1_) = (EIF_BOOLEAN) arg1;
}

/* {ENTITY_MOVABLE}.is_equal */
EIF_BOOLEAN F418_13472 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	tc1 = *(EIF_CHARACTER_8 *)(Current+ _CHROFF_1_0_);
	tc2 = *(EIF_CHARACTER_8 *)(RTCW(arg1)+ _CHROFF_1_0_);
	Result = tc1 == tc2;
	RTLE;
	return Result;
}

/* {ENTITY_MOVABLE}.bool_to_string */
EIF_REFERENCE F418_13473 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Result);
	RTLIU(1);
	
	RTGC;
	if (arg1) {
		Result = RTMS_EX_H("T",1,84);
	} else {
		Result = RTMS_EX_H("F",1,70);
	}
	RTLE;
	return Result;
}

void EIF_Minit1302 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
