/*
 * Code for class ERROR_CHECKER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "er1044.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

void F92_2 (EIF_REFERENCE Current, EIF_REFERENCE parent)
{
	GTCX
	uint32 offset_position = 0;
	RTLD;
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,parent);
	RTLIU(2);
	
	HEADER(Current)->ov_flags |= EO_COMP;
	offset_position = + _OBJSIZ_4_0_0_0_0_0_0_0_ + OVERHEAD;
	*(EIF_REFERENCE *) (Current + _REFACS_3_) = Current + offset_position;
	HEADER(Current + offset_position)->ov_flags = EO_EXP;
	
	RT_DFS(HEADER(Current + offset_position), eif_new_type(103, 0x00).id);
	HEADER(Current + offset_position)->ov_size = offset_position + (Current - parent);
	RTLE;
}

/* {ERROR_CHECKER}.make */
void F92_10035 (EIF_REFERENCE Current)
{
	GTCX
	struct eif_ex_1047 sloc1;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) sloc1.data;
	struct eif_ex_1045 sloc2;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) sloc2.data;
	struct eif_ex_1040 sloc3;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) sloc3.data;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	memset (&sloc1.overhead, 0, OVERHEAD + _OBJSIZ_0_0_0_0_0_0_0_0_);
	sloc1.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc1.overhead, eif_new_type(96, 0x00).id);
	memset (&sloc2.overhead, 0, OVERHEAD + _OBJSIZ_0_0_0_0_0_0_0_0_);
	sloc2.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc2.overhead, eif_new_type(94, 0x00).id);
	memset (&sloc3.overhead, 0, OVERHEAD + _OBJSIZ_0_0_0_0_0_0_0_0_);
	sloc3.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc3.overhead, eif_new_type(89, 0x00).id);
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLR(4,loc3);
	RTLIU(5);
	
	RTGC;
	tr1 = RTOUCR(169,F97_10064, (RTCW(loc1)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	tr1 = RTOUCR(171,F95_10063, (RTCW(loc2)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	tr1 = RTOUCR(170,F90_9990, (RTCW(loc3)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {ERROR_CHECKER}.valid_start_game */
EIF_BOOLEAN F92_10040 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	Result = F91_10002(RTCW(tr1));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) !Result;
	RTLE;
	return Result;
}

/* {ERROR_CHECKER}.valid_move */
EIF_BOOLEAN F92_10041 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,loc2);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	loc1 = F91_10003(RTCW(loc1));
	loc1 = F417_13437(RTCW(loc1));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	loc2 = F91_10004(RTCW(tr1), loc1, arg1);
	Result = '\0';
	tb1 = '\0';
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tb2 = F91_10002(RTCW(tr1));
	if (tb2) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tr1 = F91_10003(RTCW(tr1));
		tb2 = F417_13438(RTCW(tr1));
		tb1 = (EIF_BOOLEAN) !tb2;
	}
	if (tb1) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tr1 = F91_10008(RTCW(tr1));
		ti4_1 = eif_integer_32_item(RTCW(loc2),1);
		ti4_2 = eif_integer_32_item(RTCW(loc2),2);
		tr1 = F940_3247(RTCW(tr1), ti4_1, ti4_2);
		tb1 = F86_9950(RTCW(tr1));
		Result = (EIF_BOOLEAN) !tb1;
	}
	RTLE;
	return Result;
}

/* {ERROR_CHECKER}.valid_in_game */
EIF_BOOLEAN F92_10043 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	Result = F91_10002(RTCW(tr1));
	RTLE;
	return Result;
}

/* {ERROR_CHECKER}.valid_wormhole */
EIF_BOOLEAN F92_10044 (EIF_REFERENCE Current)
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
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	loc1 = F91_10003(RTCW(loc1));
	loc1 = F417_13437(RTCW(loc1));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr1 = F91_10008(RTCW(tr1));
	ti4_1 = eif_integer_32_item(RTCW(loc1),1);
	ti4_2 = eif_integer_32_item(RTCW(loc1),2);
	tr1 = F940_3247(RTCW(tr1), ti4_1, ti4_2);
	Result = F86_9952(RTCW(tr1), (EIF_CHARACTER_8) 'W');
	RTLE;
	return Result;
}

/* {ERROR_CHECKER}.valid_land */
EIF_BOOLEAN F92_10045 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	Result = '\0';
	tb1 = '\0';
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tb2 = F91_10011(RTCW(tr1));
	if (tb2) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tb2 = F91_10010(RTCW(tr1));
		tb1 = tb2;
	}
	if (tb1) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tr1 = F91_10003(RTCW(tr1));
		tb1 = F417_13438(RTCW(tr1));
		Result = (EIF_BOOLEAN) !tb1;
	}
	RTLE;
	return Result;
}

/* {ERROR_CHECKER}.valid_unvisited */
EIF_BOOLEAN F92_10046 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,loc2);
	RTLR(3,tr1);
	RTLR(4,loc3);
	RTLR(5,loc4);
	RTLIU(6);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	loc1 = F91_10003(RTCW(loc1));
	loc1 = F417_13437(RTCW(loc1));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr1 = F91_10008(RTCW(tr1));
	ti4_1 = eif_integer_32_item(RTCW(loc1),1);
	ti4_2 = eif_integer_32_item(RTCW(loc1),2);
	tr1 = F940_3247(RTCW(tr1), ti4_1, ti4_2);
	loc2 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_1_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	loc3 = F951_4087(RTCW(loc2));
	for (;;) {
		tb1 = F1081_4373(loc3);
		if (tb1) break;
		tr1 = F1081_4364(loc3);
		tc1 = *(EIF_CHARACTER_8 *)(RTCW(tr1) + O11108[Dtype(tr1)-415]);
		if ((tc1 == (EIF_CHARACTER_8) 'P')) {
			RTCT0("attached {ENTITY_MOVABLE} entity as planet", EX_CHECK);
			tr1 = F1081_4364(loc3);
			loc4 = tr1;
			loc4 = RTRV(eif_new_type(417, 0x01),loc4);
			if (EIF_TEST(loc4)) {
				RTCK0;
			} else {
				RTCF0;
			}
			Result = F418_13463(loc4);
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) !Result;
		}
		F1081_4379(loc3);
	}
	RTLE;
	return Result;
}

void EIF_Minit1044 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
