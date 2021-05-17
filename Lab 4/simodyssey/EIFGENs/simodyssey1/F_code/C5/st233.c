/*
 * Code for class STRING_8
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "st233.h"
#include "eif_built_in.h"
#include <ctype.h>
#include "eif_helpers.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {STRING_8}.item */
EIF_CHARACTER_8 F1561_6696 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	/* INLINED CODE (SPECIAL.item) */
	tc2 = *((EIF_CHARACTER_8 *)RTCW(tr1) + ((EIF_INTEGER_32) (arg1 - ((EIF_INTEGER_32) 1L))));
	/* END INLINED CODE */
	Result = tc2;
	RTLE;
	return Result;
}

/* {STRING_8}.at */
EIF_CHARACTER_8 F1561_6697 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	/* INLINED CODE (SPECIAL.item) */
	tc2 = *((EIF_CHARACTER_8 *)RTCW(tr1) + ((EIF_INTEGER_32) (arg1 - ((EIF_INTEGER_32) 1L))));
	/* END INLINED CODE */
	Result = tc2;
	RTLE;
	return Result;
}

/* {STRING_8}.character_32_item */
EIF_CHARACTER_32 F1561_6698 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_NATURAL_32 tu4_1;
	EIF_CHARACTER_32 Result = ((EIF_CHARACTER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tu4_1 = (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4644[Dtype(Current)-1560])(Current, arg1);
	Result = (EIF_CHARACTER_32) tu4_1;
	RTLE;
	return Result;
}

/* {STRING_8}.code */
EIF_NATURAL_32 F1561_6699 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	/* INLINED CODE (SPECIAL.item) */
	tc2 = *((EIF_CHARACTER_8 *)RTCW(tr1) + ((EIF_INTEGER_32) (arg1 - ((EIF_INTEGER_32) 1L))));
	/* END INLINED CODE */
	tc1 = tc2;
	ti4_1 = (EIF_INTEGER_32) (tc1);
	Result = (EIF_NATURAL_32) ti4_1;
	RTLE;
	return Result;
}

/* {STRING_8}.item_code */
EIF_INTEGER_32 F1561_6700 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	/* INLINED CODE (SPECIAL.item) */
	tc2 = *((EIF_CHARACTER_8 *)RTCW(tr1) + ((EIF_INTEGER_32) (arg1 - ((EIF_INTEGER_32) 1L))));
	/* END INLINED CODE */
	tc1 = tc2;
	Result = (EIF_INTEGER_32) (tc1);
	RTLE;
	return Result;
}

/* {STRING_8}.extendible */
EIF_BOOLEAN F1561_6702 (EIF_REFERENCE Current)
{
	return (EIF_BOOLEAN) EIF_TRUE;
}

/* {STRING_8}.subcopy */
void F1561_6706 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_INTEGER_32 ti4_6;
	EIF_INTEGER_32 ti4_7;
	EIF_CHARACTER_8 tc1;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,loc2);
	RTLR(3,Current);
	RTLIU(4);
	
	RTGC;
	if ((EIF_BOOLEAN) (arg3 >= arg2)) {
		loc1 = *(EIF_REFERENCE *)(RTCW(arg1));
		loc2 = *(EIF_REFERENCE *)(Current);
		if ((EIF_BOOLEAN)(loc2 == loc1)) {
			/* INLINED CODE (SPECIAL.overlapping_move) */
			memmove((EIF_CHARACTER_8 *)RTCW(loc2) + ((EIF_INTEGER_32) (arg4 - ((EIF_INTEGER_32) 1L))),(EIF_CHARACTER_8 *)RTCW(loc2) + (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L)), (rt_uint_ptr)sizeof(EIF_CHARACTER_8) * (rt_uint_ptr)(EIF_INTEGER_32) ((EIF_INTEGER_32) (arg3 - arg2) + ((EIF_INTEGER_32) 1L)));
			RT_SPECIAL_COUNT(loc2) = eif_max_int32(RT_SPECIAL_COUNT(loc2), (EIF_INTEGER_32) (arg4 - ((EIF_INTEGER_32) 1L)) + (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg3 - arg2) + ((EIF_INTEGER_32) 1L)));
			/* END INLINED CODE */
			;
		} else {
			/* INLINED CODE (SPECIAL.copy_data) */
			memmove((EIF_CHARACTER_8 *)RTCW(loc2) + ((EIF_INTEGER_32) (arg4 - ((EIF_INTEGER_32) 1L))),(EIF_CHARACTER_8 *)loc1 + (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L)), (rt_uint_ptr)sizeof(EIF_CHARACTER_8) * (rt_uint_ptr)(EIF_INTEGER_32) ((EIF_INTEGER_32) (arg3 - arg2) + ((EIF_INTEGER_32) 1L)));
			RT_SPECIAL_COUNT(loc2) = eif_max_int32(RT_SPECIAL_COUNT(loc2), (EIF_INTEGER_32) (arg4 - ((EIF_INTEGER_32) 1L)) + (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg3 - arg2) + ((EIF_INTEGER_32) 1L)));
			/* END INLINED CODE */
			;
		}
		F1560_6659(Current);
	}
	RTLE;
}

/* {STRING_8}.replace_substring_all */
void F1561_6708 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc9 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc10 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc11 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc12 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc13 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc14 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc15 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc16 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc17 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc18 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_INTEGER_32 ti4_6;
	EIF_INTEGER_32 ti4_7;
	EIF_CHARACTER_8 tc1;
	RTCFDT;
	RTLD;
	
	RTLI(9);
	RTLR(0,Current);
	RTLR(1,loc16);
	RTLR(2,arg1);
	RTLR(3,arg2);
	RTLR(4,loc13);
	RTLR(5,loc14);
	RTLR(6,loc18);
	RTLR(7,tr1);
	RTLR(8,loc17);
	RTLIU(9);
	
	RTGC;
	if ((EIF_BOOLEAN) !F743_2537(Current)) {
		loc6 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		loc16 = RTOUCR(4,F1559_6649, (Current));
		F388_1538(RTCW(loc16), arg1);
		loc3 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O4768[Dtype(arg1)-1558]);
		loc4 = *(EIF_INTEGER_32 *)(RTCW(arg2) + O4768[Dtype(arg2)-1558]);
		if ((EIF_BOOLEAN) (loc3 >= loc4)) {
			loc1 = F389_1551(RTCW(loc16), Current, arg1, ((EIF_INTEGER_32) 1L), loc6);
			if ((EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 0L))) {
				if ((EIF_BOOLEAN)(loc3 == loc4)) {
					loc13 = *(EIF_REFERENCE *)(Current);
					loc14 = *(EIF_REFERENCE *)(RTCW(arg2));
					loc5 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4766[Dtype(RTCW(arg2))-1560])(arg2);
					for (;;) {
						if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 0L))) break;
						/* INLINED CODE (SPECIAL.copy_data) */
						memmove((EIF_CHARACTER_8 *)RTCW(loc13) + ((EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L))),(EIF_CHARACTER_8 *)loc14 + loc5, (rt_uint_ptr)sizeof(EIF_CHARACTER_8) * (rt_uint_ptr)loc4);
						RT_SPECIAL_COUNT(loc13) = eif_max_int32(RT_SPECIAL_COUNT(loc13), (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L)) + loc4);
						/* END INLINED CODE */
						;
						if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc1 + loc4) <= loc6)) {
							ti4_1 = F389_1551(RTCW(loc16), Current, arg1, (EIF_INTEGER_32) (loc1 + loc4), loc6);
							loc1 = (EIF_INTEGER_32) ti4_1;
						} else {
							loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
						}
					}
				} else {
					if ((EIF_BOOLEAN) (loc3 > loc4)) {
						loc2 = F389_1551(RTCW(loc16), Current, arg1, (EIF_INTEGER_32) (loc1 + loc3), loc6);
						loc13 = *(EIF_REFERENCE *)(Current);
						loc14 = *(EIF_REFERENCE *)(RTCW(arg2));
						loc5 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4766[Dtype(RTCW(arg2))-1560])(arg2);
						for (;;) {
							if ((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 0L))) break;
							/* INLINED CODE (SPECIAL.copy_data) */
							memmove((EIF_CHARACTER_8 *)RTCW(loc13) + ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L)) - loc15)),(EIF_CHARACTER_8 *)loc14 + loc5, (rt_uint_ptr)sizeof(EIF_CHARACTER_8) * (rt_uint_ptr)loc4);
							RT_SPECIAL_COUNT(loc13) = eif_max_int32(RT_SPECIAL_COUNT(loc13), (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L)) - loc15) + loc4);
							/* END INLINED CODE */
							;
							/* INLINED CODE (SPECIAL.overlapping_move) */
							memmove((EIF_CHARACTER_8 *)RTCW(loc13) + ((EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 + loc4) - ((EIF_INTEGER_32) 1L)) - loc15)),(EIF_CHARACTER_8 *)RTCW(loc13) + (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 + loc3) - ((EIF_INTEGER_32) 1L)), (rt_uint_ptr)sizeof(EIF_CHARACTER_8) * (rt_uint_ptr)(EIF_INTEGER_32) ((EIF_INTEGER_32) (loc2 - loc1) - loc3));
							RT_SPECIAL_COUNT(loc13) = eif_max_int32(RT_SPECIAL_COUNT(loc13), (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 + loc4) - ((EIF_INTEGER_32) 1L)) - loc15) + (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc2 - loc1) - loc3));
							/* END INLINED CODE */
							;
							loc1 = (EIF_INTEGER_32) loc2;
							loc15 += (EIF_INTEGER_32) (loc3 - loc4);
							if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc1 + loc4) <= loc6)) {
								loc2 = F389_1551(RTCW(loc16), Current, arg1, (EIF_INTEGER_32) (loc1 + loc3), loc6);
							} else {
								loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
							}
						}
						/* INLINED CODE (SPECIAL.copy_data) */
						memmove((EIF_CHARACTER_8 *)RTCW(loc13) + ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L)) - loc15)),(EIF_CHARACTER_8 *)loc14 + loc5, (rt_uint_ptr)sizeof(EIF_CHARACTER_8) * (rt_uint_ptr)loc4);
						RT_SPECIAL_COUNT(loc13) = eif_max_int32(RT_SPECIAL_COUNT(loc13), (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L)) - loc15) + loc4);
						/* END INLINED CODE */
						;
						/* INLINED CODE (SPECIAL.overlapping_move) */
						memmove((EIF_CHARACTER_8 *)RTCW(loc13) + ((EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 + loc4) - ((EIF_INTEGER_32) 1L)) - loc15)),(EIF_CHARACTER_8 *)RTCW(loc13) + (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 + loc3) - ((EIF_INTEGER_32) 1L)), (rt_uint_ptr)sizeof(EIF_CHARACTER_8) * (rt_uint_ptr)(EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc6 + ((EIF_INTEGER_32) 1L)) - loc1) - loc3));
						RT_SPECIAL_COUNT(loc13) = eif_max_int32(RT_SPECIAL_COUNT(loc13), (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 + loc4) - ((EIF_INTEGER_32) 1L)) - loc15) + (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc6 + ((EIF_INTEGER_32) 1L)) - loc1) - loc3));
						/* END INLINED CODE */
						;
						loc15 += (EIF_INTEGER_32) (loc3 - loc4);
						F1561_6779(Current, (EIF_INTEGER_32) (loc6 - loc15));
					}
				}
				F1560_6659(Current);
			}
		} else {
			tr1 = F388_1543(RTCW(loc16), Current, arg1, ((EIF_INTEGER_32) 1L), loc6);
			loc18 = tr1;
			if (EIF_TEST(loc18)) {
				loc17 = F957_4077(loc18);
				loc8 = (EIF_INTEGER_32) eif_builtin_SPECIAL_count (loc17);
				loc11 = (EIF_INTEGER_32) loc6;
				loc12 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc4 - loc3);
				loc6 += (EIF_INTEGER_32) (loc8 * loc12);
				tr1 = *(EIF_REFERENCE *)(Current);
				loc13 = F1199_3116(RTCW(tr1), (EIF_CHARACTER_8) '\000', (EIF_INTEGER_32) (loc6 + ((EIF_INTEGER_32) 1L)));
				RTAR(Current, loc13);
				*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) loc13;
				loc7 = (EIF_INTEGER_32) loc8;
				loc5 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4766[Dtype(RTCW(arg2))-1560])(arg2);
				loc14 = *(EIF_REFERENCE *)(RTCW(arg2));
				for (;;) {
					if ((EIF_BOOLEAN)(loc7 == ((EIF_INTEGER_32) 0L))) break;
					loc7--;
					/* INLINED CODE (SPECIAL.item) */
					ti4_2 = *((EIF_INTEGER_32 *)RTCW(loc17) + (loc7));
					/* END INLINED CODE */
					loc9 = ti4_2;
					loc10 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc9 + (EIF_INTEGER_32) (loc7 * loc12));
					/* INLINED CODE (SPECIAL.overlapping_move) */
					memmove((EIF_CHARACTER_8 *)RTCW(loc13) + ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc10 + loc4) - ((EIF_INTEGER_32) 1L))),(EIF_CHARACTER_8 *)RTCW(loc13) + (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc9 + loc3) - ((EIF_INTEGER_32) 1L)), (rt_uint_ptr)sizeof(EIF_CHARACTER_8) * (rt_uint_ptr)(EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc11 - loc9) - loc3) + ((EIF_INTEGER_32) 1L)));
					RT_SPECIAL_COUNT(loc13) = eif_max_int32(RT_SPECIAL_COUNT(loc13), (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc10 + loc4) - ((EIF_INTEGER_32) 1L)) + (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc11 - loc9) - loc3) + ((EIF_INTEGER_32) 1L)));
					/* END INLINED CODE */
					;
					loc11 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc9 - ((EIF_INTEGER_32) 1L));
					/* INLINED CODE (SPECIAL.copy_data) */
					memmove((EIF_CHARACTER_8 *)RTCW(loc13) + ((EIF_INTEGER_32) (loc10 - ((EIF_INTEGER_32) 1L))),(EIF_CHARACTER_8 *)loc14 + loc5, (rt_uint_ptr)sizeof(EIF_CHARACTER_8) * (rt_uint_ptr)loc4);
					RT_SPECIAL_COUNT(loc13) = eif_max_int32(RT_SPECIAL_COUNT(loc13), (EIF_INTEGER_32) (loc10 - ((EIF_INTEGER_32) 1L)) + loc4);
					/* END INLINED CODE */
					;
				}
				F1561_6779(Current, loc6);
			}
		}
	}
	RTLE;
}

/* {STRING_8}.fill_blank */
void F1561_6710 (EIF_REFERENCE Current)
{
	GTCX
	
	
	F1559_6645(Current, (EIF_CHARACTER_8) ' ');
}

/* {STRING_8}.keep_head */
void F1561_6713 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if ((EIF_BOOLEAN) (arg1 < *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_))) {
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) = (EIF_INTEGER_32) arg1;
		F1560_6659(Current);
	}
	RTLE;
}

/* {STRING_8}.keep_tail */
void F1561_6714 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_INTEGER_32 ti4_6;
	EIF_CHARACTER_8 tc1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
	if ((EIF_BOOLEAN) (arg1 < loc1)) {
		tr1 = *(EIF_REFERENCE *)(Current);
		/* INLINED CODE (SPECIAL.overlapping_move) */
		memmove((EIF_CHARACTER_8 *)RTCW(tr1) + (((EIF_INTEGER_32) 0L)),(EIF_CHARACTER_8 *)RTCW(tr1) + (EIF_INTEGER_32) (loc1 - arg1), (rt_uint_ptr)sizeof(EIF_CHARACTER_8) * (rt_uint_ptr)arg1);
		RT_SPECIAL_COUNT(tr1) = eif_max_int32(RT_SPECIAL_COUNT(tr1), ((EIF_INTEGER_32) 0L) + arg1);
		/* END INLINED CODE */
		;
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) = (EIF_INTEGER_32) arg1;
		F1560_6659(Current);
	}
	RTLE;
}

/* {STRING_8}.left_adjust */
void F1561_6715 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc3);
	RTLIU(2);
	
	RTGC;
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L));
	loc3 = *(EIF_REFERENCE *)(Current);
	for (;;) {
		tb1 = '\01';
		if (!(EIF_BOOLEAN) (loc2 > loc1)) {
			/* INLINED CODE (SPECIAL.item) */
			tc2 = *((EIF_CHARACTER_8 *)RTCW(loc3) + (loc2));
			/* END INLINED CODE */
			tc1 = tc2;
			tb2 = EIF_TEST(isspace(tc1));
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if (tb1) break;
		loc2++;
	}
	if ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L))) {
		loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)) - loc2);
		/* INLINED CODE (SPECIAL.overlapping_move) */
		memmove((EIF_CHARACTER_8 *)RTCW(loc3) + (((EIF_INTEGER_32) 0L)),(EIF_CHARACTER_8 *)RTCW(loc3) + loc2, (rt_uint_ptr)sizeof(EIF_CHARACTER_8) * (rt_uint_ptr)loc1);
		RT_SPECIAL_COUNT(loc3) = eif_max_int32(RT_SPECIAL_COUNT(loc3), ((EIF_INTEGER_32) 0L) + loc1);
		/* END INLINED CODE */
		;
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) = (EIF_INTEGER_32) loc1;
		F1560_6659(Current);
	}
	RTLE;
}

/* {STRING_8}.put */
void F1561_6718 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	/* INLINED CODE (SPECIAL.put) */
	*((EIF_CHARACTER_8 *)RTCW(tr1) + ((EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L)))) = arg1;
	/* END INLINED CODE */
	;
	F1560_6659(Current);
	RTLE;
}

/* {STRING_8}.put_code */
void F1561_6719 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_8 tc1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	tc1 = (EIF_CHARACTER_8) arg1;
	/* INLINED CODE (SPECIAL.put) */
	*((EIF_CHARACTER_8 *)RTCW(tr1) + ((EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L)))) = tc1;
	/* END INLINED CODE */
	;
	F1560_6659(Current);
	RTLE;
}

/* {STRING_8}.precede */
void F1561_6720 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_INTEGER_32 ti4_6;
	EIF_INTEGER_32 ti4_7;
	EIF_CHARACTER_8 tc1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLIU(2);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4682[Dtype(Current)-1560])(Current))) {
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		ti4_2 = F809_2556(Current);
		F1561_6762(Current, (EIF_INTEGER_32) (ti4_1 + ti4_2));
	}
	loc1 = *(EIF_REFERENCE *)(Current);
	/* INLINED CODE (SPECIAL.overlapping_move) */
	memmove((EIF_CHARACTER_8 *)RTCW(loc1) + (((EIF_INTEGER_32) 1L)),(EIF_CHARACTER_8 *)RTCW(loc1) + ((EIF_INTEGER_32) 0L), (rt_uint_ptr)sizeof(EIF_CHARACTER_8) * (rt_uint_ptr)*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_));
	RT_SPECIAL_COUNT(loc1) = eif_max_int32(RT_SPECIAL_COUNT(loc1), ((EIF_INTEGER_32) 1L) + *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_));
	/* END INLINED CODE */
	;
	/* INLINED CODE (SPECIAL.put) */
	*((EIF_CHARACTER_8 *)RTCW(loc1) + (((EIF_INTEGER_32) 0L))) = arg1;
	/* END INLINED CODE */
	;
	(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_))++;
	F1560_6659(Current);
	RTLE;
}

/* {STRING_8}.prepend */
void F1561_6723 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R4827[Dtype(Current)-1560])(Current, arg1, ((EIF_INTEGER_32) 1L));
}

/* {STRING_8}.append_string_general */
void F1561_6730 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTGC;
	loc1 = arg1;
	loc1 = RTRV(eif_new_type(1558, 0x01),loc1);
	if (EIF_TEST(loc1)) {
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(Current)-1560])(Current, loc1);
	} else {
		F1560_6672(Current, arg1);
	}
	RTLE;
}

/* {STRING_8}.append */
void F1561_6731 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_CHARACTER_8 tc1;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTGC;
	loc2 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O4768[Dtype(arg1)-1558]);
	if ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L))) {
		loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + loc1);
		if ((EIF_BOOLEAN) (loc3 > (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4682[Dtype(Current)-1560])(Current))) {
			ti4_1 = F809_2556(Current);
			F1561_6762(Current, (EIF_INTEGER_32) (loc3 + ti4_1));
		}
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = *(EIF_REFERENCE *)(RTCW(arg1));
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4766[Dtype(RTCW(arg1))-1560])(arg1);
		/* INLINED CODE (SPECIAL.copy_data) */
		memmove((EIF_CHARACTER_8 *)RTCW(tr1) + (loc1),(EIF_CHARACTER_8 *)tr2 + ti4_1, (rt_uint_ptr)sizeof(EIF_CHARACTER_8) * (rt_uint_ptr)loc2);
		RT_SPECIAL_COUNT(tr1) = eif_max_int32(RT_SPECIAL_COUNT(tr1), loc1 + loc2);
		/* END INLINED CODE */
		;
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) = (EIF_INTEGER_32) loc3;
		F1560_6659(Current);
	}
	RTLE;
}

/* {STRING_8}.plus */
EIF_REFERENCE F1561_6733 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,Result);
	RTLIU(3);
	
	RTGC;
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
	ti4_2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4681[Dtype(RTCW(arg1))-1560])(arg1);
	Result = F1561_6781(Current, (EIF_INTEGER_32) (ti4_1 + ti4_2));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4784[Dtype(RTCW(Result))-1560])(Result, arg1);
	RTLE;
	return Result;
}

/* {STRING_8}.append_string */
void F1561_6734 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(Current)-1560])(Current, arg1);
	}
	RTLE;
}

/* {STRING_8}.append_integer */
void F1561_6735 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 loc4 = (EIF_CHARACTER_8) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc5);
	RTLIU(2);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 0L))) {
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R4825[dtype-1560])(Current, (EIF_CHARACTER_8) '0');
	} else {
		loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		if ((EIF_BOOLEAN) (arg1 < ((EIF_INTEGER_32) 0L))) {
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R4825[dtype-1560])(Current, (EIF_CHARACTER_8) '-');
			loc2++;
			if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 0x80000000L))) {
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R4825[dtype-1560])(Current, (EIF_CHARACTER_8) '8');
				loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) -(EIF_INTEGER_32) (arg1 / ((EIF_INTEGER_32) 10L));
			} else {
				loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) -arg1;
			}
		} else {
			loc1 = (EIF_INTEGER_32) arg1;
		}
		for (;;) {
			if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 0L))) break;
			tc1 = (EIF_CHARACTER_8) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 % ((EIF_INTEGER_32) 10L)) + ((EIF_INTEGER_32) 48L)));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R4825[dtype-1560])(Current, tc1);
			loc1 /= ((EIF_INTEGER_32) 10L);
		}
		loc3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L));
		loc5 = *(EIF_REFERENCE *)(Current);
		for (;;) {
			if ((EIF_BOOLEAN) (loc2 >= loc3)) break;
			/* INLINED CODE (SPECIAL.item) */
			tc2 = *((EIF_CHARACTER_8 *)RTCW(loc5) + (loc2));
			/* END INLINED CODE */
			loc4 = tc2;
			/* INLINED CODE (SPECIAL.item) */
			tc2 = *((EIF_CHARACTER_8 *)RTCW(loc5) + (loc3));
			/* END INLINED CODE */
			tc1 = tc2;
			/* INLINED CODE (SPECIAL.put) */
			*((EIF_CHARACTER_8 *)RTCW(loc5) + (loc2)) = tc1;
			/* END INLINED CODE */
			;
			/* INLINED CODE (SPECIAL.put) */
			*((EIF_CHARACTER_8 *)RTCW(loc5) + (loc3)) = loc4;
			/* END INLINED CODE */
			;
			loc3--;
			loc2++;
		}
	}
	RTLE;
}

/* {STRING_8}.append_integer_8 */
void F1561_6736 (EIF_REFERENCE Current, EIF_INTEGER_8 arg1)
{
	GTCX
	EIF_INTEGER_8 loc1 = (EIF_INTEGER_8) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 loc4 = (EIF_CHARACTER_8) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc5);
	RTLIU(2);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 == (EIF_INTEGER_8) ((EIF_INTEGER_32) 0L))) {
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R4825[dtype-1560])(Current, (EIF_CHARACTER_8) '0');
	} else {
		loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		if ((EIF_BOOLEAN) (arg1 < (EIF_INTEGER_8) ((EIF_INTEGER_32) 0L))) {
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R4825[dtype-1560])(Current, (EIF_CHARACTER_8) '-');
			loc2++;
			if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_8) -128L))) {
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R4825[dtype-1560])(Current, (EIF_CHARACTER_8) '8');
				loc1 = (EIF_INTEGER_8) (EIF_INTEGER_8) -((EIF_INTEGER_8) (arg1 / (EIF_INTEGER_8) ((EIF_INTEGER_32) 10L)));
			} else {
				loc1 = (EIF_INTEGER_8) (EIF_INTEGER_8) -arg1;
			}
		} else {
			loc1 = (EIF_INTEGER_8) arg1;
		}
		for (;;) {
			if ((EIF_BOOLEAN)(loc1 == (EIF_INTEGER_8) ((EIF_INTEGER_32) 0L))) break;
			tc1 = (EIF_CHARACTER_8) ((EIF_INTEGER_8) (((EIF_INTEGER_8) (loc1 % (EIF_INTEGER_8) ((EIF_INTEGER_32) 10L))) + (EIF_INTEGER_8) ((EIF_INTEGER_32) 48L)));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R4825[dtype-1560])(Current, tc1);
			loc1 /= (EIF_INTEGER_8) ((EIF_INTEGER_32) 10L);
		}
		loc3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L));
		loc5 = *(EIF_REFERENCE *)(Current);
		for (;;) {
			if ((EIF_BOOLEAN) (loc2 >= loc3)) break;
			/* INLINED CODE (SPECIAL.item) */
			tc2 = *((EIF_CHARACTER_8 *)RTCW(loc5) + (loc2));
			/* END INLINED CODE */
			loc4 = tc2;
			/* INLINED CODE (SPECIAL.item) */
			tc2 = *((EIF_CHARACTER_8 *)RTCW(loc5) + (loc3));
			/* END INLINED CODE */
			tc1 = tc2;
			/* INLINED CODE (SPECIAL.put) */
			*((EIF_CHARACTER_8 *)RTCW(loc5) + (loc2)) = tc1;
			/* END INLINED CODE */
			;
			/* INLINED CODE (SPECIAL.put) */
			*((EIF_CHARACTER_8 *)RTCW(loc5) + (loc3)) = loc4;
			/* END INLINED CODE */
			;
			loc3--;
			loc2++;
		}
	}
	RTLE;
}

/* {STRING_8}.append_integer_16 */
void F1561_6737 (EIF_REFERENCE Current, EIF_INTEGER_16 arg1)
{
	GTCX
	EIF_INTEGER_16 loc1 = (EIF_INTEGER_16) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 loc4 = (EIF_CHARACTER_8) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc5);
	RTLIU(2);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 == (EIF_INTEGER_16) ((EIF_INTEGER_32) 0L))) {
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R4825[dtype-1560])(Current, (EIF_CHARACTER_8) '0');
	} else {
		loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		if ((EIF_BOOLEAN) (arg1 < (EIF_INTEGER_16) ((EIF_INTEGER_32) 0L))) {
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R4825[dtype-1560])(Current, (EIF_CHARACTER_8) '-');
			loc2++;
			if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_16) -32768L))) {
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R4825[dtype-1560])(Current, (EIF_CHARACTER_8) '8');
				loc1 = (EIF_INTEGER_16) (EIF_INTEGER_16) -((EIF_INTEGER_16) (arg1 / (EIF_INTEGER_16) ((EIF_INTEGER_32) 10L)));
			} else {
				loc1 = (EIF_INTEGER_16) (EIF_INTEGER_16) -arg1;
			}
		} else {
			loc1 = (EIF_INTEGER_16) arg1;
		}
		for (;;) {
			if ((EIF_BOOLEAN)(loc1 == (EIF_INTEGER_16) ((EIF_INTEGER_32) 0L))) break;
			tc1 = (EIF_CHARACTER_8) ((EIF_INTEGER_16) (((EIF_INTEGER_16) (loc1 % (EIF_INTEGER_16) ((EIF_INTEGER_32) 10L))) + (EIF_INTEGER_16) ((EIF_INTEGER_32) 48L)));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R4825[dtype-1560])(Current, tc1);
			loc1 /= (EIF_INTEGER_16) ((EIF_INTEGER_32) 10L);
		}
		loc3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L));
		loc5 = *(EIF_REFERENCE *)(Current);
		for (;;) {
			if ((EIF_BOOLEAN) (loc2 >= loc3)) break;
			/* INLINED CODE (SPECIAL.item) */
			tc2 = *((EIF_CHARACTER_8 *)RTCW(loc5) + (loc2));
			/* END INLINED CODE */
			loc4 = tc2;
			/* INLINED CODE (SPECIAL.item) */
			tc2 = *((EIF_CHARACTER_8 *)RTCW(loc5) + (loc3));
			/* END INLINED CODE */
			tc1 = tc2;
			/* INLINED CODE (SPECIAL.put) */
			*((EIF_CHARACTER_8 *)RTCW(loc5) + (loc2)) = tc1;
			/* END INLINED CODE */
			;
			/* INLINED CODE (SPECIAL.put) */
			*((EIF_CHARACTER_8 *)RTCW(loc5) + (loc3)) = loc4;
			/* END INLINED CODE */
			;
			loc3--;
			loc2++;
		}
	}
	RTLE;
}

/* {STRING_8}.append_integer_64 */
void F1561_6738 (EIF_REFERENCE Current, EIF_INTEGER_64 arg1)
{
	GTCX
	EIF_INTEGER_64 loc1 = (EIF_INTEGER_64) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 loc4 = (EIF_CHARACTER_8) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc5);
	RTLIU(2);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 == (EIF_INTEGER_64) ((EIF_INTEGER_32) 0L))) {
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R4825[dtype-1560])(Current, (EIF_CHARACTER_8) '0');
	} else {
		loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		if ((EIF_BOOLEAN) (arg1 < (EIF_INTEGER_64) ((EIF_INTEGER_32) 0L))) {
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R4825[dtype-1560])(Current, (EIF_CHARACTER_8) '-');
			loc2++;
			if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_64) RTI64C(0x8000000000000000)))) {
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R4825[dtype-1560])(Current, (EIF_CHARACTER_8) '8');
				loc1 = (EIF_INTEGER_64) (EIF_INTEGER_64) -((EIF_INTEGER_64) (arg1 / (EIF_INTEGER_64) ((EIF_INTEGER_32) 10L)));
			} else {
				loc1 = (EIF_INTEGER_64) (EIF_INTEGER_64) -arg1;
			}
		} else {
			loc1 = (EIF_INTEGER_64) arg1;
		}
		for (;;) {
			if ((EIF_BOOLEAN)(loc1 == (EIF_INTEGER_64) ((EIF_INTEGER_32) 0L))) break;
			tc1 = (EIF_CHARACTER_8) ((EIF_INTEGER_64) (((EIF_INTEGER_64) (loc1 % (EIF_INTEGER_64) ((EIF_INTEGER_32) 10L))) + (EIF_INTEGER_64) ((EIF_INTEGER_32) 48L)));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R4825[dtype-1560])(Current, tc1);
			loc1 /= (EIF_INTEGER_64) ((EIF_INTEGER_32) 10L);
		}
		loc3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L));
		loc5 = *(EIF_REFERENCE *)(Current);
		for (;;) {
			if ((EIF_BOOLEAN) (loc2 >= loc3)) break;
			/* INLINED CODE (SPECIAL.item) */
			tc2 = *((EIF_CHARACTER_8 *)RTCW(loc5) + (loc2));
			/* END INLINED CODE */
			loc4 = tc2;
			/* INLINED CODE (SPECIAL.item) */
			tc2 = *((EIF_CHARACTER_8 *)RTCW(loc5) + (loc3));
			/* END INLINED CODE */
			tc1 = tc2;
			/* INLINED CODE (SPECIAL.put) */
			*((EIF_CHARACTER_8 *)RTCW(loc5) + (loc2)) = tc1;
			/* END INLINED CODE */
			;
			/* INLINED CODE (SPECIAL.put) */
			*((EIF_CHARACTER_8 *)RTCW(loc5) + (loc3)) = loc4;
			/* END INLINED CODE */
			;
			loc3--;
			loc2++;
		}
	}
	RTLE;
}

/* {STRING_8}.append_natural_8 */
void F1561_6739 (EIF_REFERENCE Current, EIF_NATURAL_8 arg1)
{
	GTCX
	EIF_NATURAL_8 loc1 = (EIF_NATURAL_8) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 loc4 = (EIF_CHARACTER_8) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc5);
	RTLIU(2);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 == (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L))) {
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R4825[dtype-1560])(Current, (EIF_CHARACTER_8) '0');
	} else {
		loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		loc1 = (EIF_NATURAL_8) arg1;
		for (;;) {
			if ((EIF_BOOLEAN)(loc1 == (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L))) break;
			tc1 = (EIF_CHARACTER_8) ((EIF_NATURAL_8) (((EIF_NATURAL_8) (loc1 % (EIF_NATURAL_8) ((EIF_INTEGER_32) 10L))) + (EIF_NATURAL_8) ((EIF_INTEGER_32) 48L)));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R4825[dtype-1560])(Current, tc1);
			loc1 /= (EIF_NATURAL_8) ((EIF_INTEGER_32) 10L);
		}
		loc3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L));
		loc5 = *(EIF_REFERENCE *)(Current);
		for (;;) {
			if ((EIF_BOOLEAN) (loc2 >= loc3)) break;
			/* INLINED CODE (SPECIAL.item) */
			tc2 = *((EIF_CHARACTER_8 *)RTCW(loc5) + (loc2));
			/* END INLINED CODE */
			loc4 = tc2;
			/* INLINED CODE (SPECIAL.item) */
			tc2 = *((EIF_CHARACTER_8 *)RTCW(loc5) + (loc3));
			/* END INLINED CODE */
			tc1 = tc2;
			/* INLINED CODE (SPECIAL.put) */
			*((EIF_CHARACTER_8 *)RTCW(loc5) + (loc2)) = tc1;
			/* END INLINED CODE */
			;
			/* INLINED CODE (SPECIAL.put) */
			*((EIF_CHARACTER_8 *)RTCW(loc5) + (loc3)) = loc4;
			/* END INLINED CODE */
			;
			loc3--;
			loc2++;
		}
	}
	RTLE;
}

/* {STRING_8}.append_natural_16 */
void F1561_6740 (EIF_REFERENCE Current, EIF_NATURAL_16 arg1)
{
	GTCX
	EIF_NATURAL_16 loc1 = (EIF_NATURAL_16) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 loc4 = (EIF_CHARACTER_8) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc5);
	RTLIU(2);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 == (EIF_NATURAL_16) ((EIF_INTEGER_32) 0L))) {
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R4825[dtype-1560])(Current, (EIF_CHARACTER_8) '0');
	} else {
		loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		loc1 = (EIF_NATURAL_16) arg1;
		for (;;) {
			if ((EIF_BOOLEAN)(loc1 == (EIF_NATURAL_16) ((EIF_INTEGER_32) 0L))) break;
			tc1 = (EIF_CHARACTER_8) ((EIF_NATURAL_16) (((EIF_NATURAL_16) (loc1 % (EIF_NATURAL_16) ((EIF_INTEGER_32) 10L))) + (EIF_NATURAL_16) ((EIF_INTEGER_32) 48L)));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R4825[dtype-1560])(Current, tc1);
			loc1 /= (EIF_NATURAL_16) ((EIF_INTEGER_32) 10L);
		}
		loc3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L));
		loc5 = *(EIF_REFERENCE *)(Current);
		for (;;) {
			if ((EIF_BOOLEAN) (loc2 >= loc3)) break;
			/* INLINED CODE (SPECIAL.item) */
			tc2 = *((EIF_CHARACTER_8 *)RTCW(loc5) + (loc2));
			/* END INLINED CODE */
			loc4 = tc2;
			/* INLINED CODE (SPECIAL.item) */
			tc2 = *((EIF_CHARACTER_8 *)RTCW(loc5) + (loc3));
			/* END INLINED CODE */
			tc1 = tc2;
			/* INLINED CODE (SPECIAL.put) */
			*((EIF_CHARACTER_8 *)RTCW(loc5) + (loc2)) = tc1;
			/* END INLINED CODE */
			;
			/* INLINED CODE (SPECIAL.put) */
			*((EIF_CHARACTER_8 *)RTCW(loc5) + (loc3)) = loc4;
			/* END INLINED CODE */
			;
			loc3--;
			loc2++;
		}
	}
	RTLE;
}

/* {STRING_8}.append_natural_32 */
void F1561_6741 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
{
	GTCX
	EIF_NATURAL_32 loc1 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 loc4 = (EIF_CHARACTER_8) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc5);
	RTLIU(2);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 == (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) {
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R4825[dtype-1560])(Current, (EIF_CHARACTER_8) '0');
	} else {
		loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		loc1 = (EIF_NATURAL_32) arg1;
		for (;;) {
			if ((EIF_BOOLEAN)(loc1 == (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) break;
			tc1 = (EIF_CHARACTER_8) ((EIF_NATURAL_32) (((EIF_NATURAL_32) (loc1 % (EIF_NATURAL_32) ((EIF_INTEGER_32) 10L))) + (EIF_NATURAL_32) ((EIF_INTEGER_32) 48L)));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R4825[dtype-1560])(Current, tc1);
			loc1 /= (EIF_NATURAL_32) ((EIF_INTEGER_32) 10L);
		}
		loc3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L));
		loc5 = *(EIF_REFERENCE *)(Current);
		for (;;) {
			if ((EIF_BOOLEAN) (loc2 >= loc3)) break;
			/* INLINED CODE (SPECIAL.item) */
			tc2 = *((EIF_CHARACTER_8 *)RTCW(loc5) + (loc2));
			/* END INLINED CODE */
			loc4 = tc2;
			/* INLINED CODE (SPECIAL.item) */
			tc2 = *((EIF_CHARACTER_8 *)RTCW(loc5) + (loc3));
			/* END INLINED CODE */
			tc1 = tc2;
			/* INLINED CODE (SPECIAL.put) */
			*((EIF_CHARACTER_8 *)RTCW(loc5) + (loc2)) = tc1;
			/* END INLINED CODE */
			;
			/* INLINED CODE (SPECIAL.put) */
			*((EIF_CHARACTER_8 *)RTCW(loc5) + (loc3)) = loc4;
			/* END INLINED CODE */
			;
			loc3--;
			loc2++;
		}
	}
	RTLE;
}

/* {STRING_8}.append_natural_64 */
void F1561_6742 (EIF_REFERENCE Current, EIF_NATURAL_64 arg1)
{
	GTCX
	EIF_NATURAL_64 loc1 = (EIF_NATURAL_64) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 loc4 = (EIF_CHARACTER_8) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc5);
	RTLIU(2);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 == (EIF_NATURAL_64) ((EIF_INTEGER_32) 0L))) {
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R4825[dtype-1560])(Current, (EIF_CHARACTER_8) '0');
	} else {
		loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		loc1 = (EIF_NATURAL_64) arg1;
		for (;;) {
			if ((EIF_BOOLEAN)(loc1 == (EIF_NATURAL_64) ((EIF_INTEGER_32) 0L))) break;
			tc1 = (EIF_CHARACTER_8) ((EIF_NATURAL_64) (((EIF_NATURAL_64) (loc1 % (EIF_NATURAL_64) ((EIF_INTEGER_32) 10L))) + (EIF_NATURAL_64) ((EIF_INTEGER_32) 48L)));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R4825[dtype-1560])(Current, tc1);
			loc1 /= (EIF_NATURAL_64) ((EIF_INTEGER_32) 10L);
		}
		loc3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L));
		loc5 = *(EIF_REFERENCE *)(Current);
		for (;;) {
			if ((EIF_BOOLEAN) (loc2 >= loc3)) break;
			/* INLINED CODE (SPECIAL.item) */
			tc2 = *((EIF_CHARACTER_8 *)RTCW(loc5) + (loc2));
			/* END INLINED CODE */
			loc4 = tc2;
			/* INLINED CODE (SPECIAL.item) */
			tc2 = *((EIF_CHARACTER_8 *)RTCW(loc5) + (loc3));
			/* END INLINED CODE */
			tc1 = tc2;
			/* INLINED CODE (SPECIAL.put) */
			*((EIF_CHARACTER_8 *)RTCW(loc5) + (loc2)) = tc1;
			/* END INLINED CODE */
			;
			/* INLINED CODE (SPECIAL.put) */
			*((EIF_CHARACTER_8 *)RTCW(loc5) + (loc3)) = loc4;
			/* END INLINED CODE */
			;
			loc3--;
			loc2++;
		}
	}
	RTLE;
}

/* {STRING_8}.append_character */
void F1561_6745 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
	if ((EIF_BOOLEAN)(loc1 == (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4682[Dtype(Current)-1560])(Current))) {
		ti4_1 = F809_2556(Current);
		F1561_6762(Current, (EIF_INTEGER_32) (loc1 + ti4_1));
	}
	tr1 = *(EIF_REFERENCE *)(Current);
	/* INLINED CODE (SPECIAL.put) */
	*((EIF_CHARACTER_8 *)RTCW(tr1) + (loc1)) = arg1;
	/* END INLINED CODE */
	;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L));
	F1560_6659(Current);
	RTLE;
}

/* {STRING_8}.extend */
void F1561_6746 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
	if ((EIF_BOOLEAN)(loc1 == (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4682[Dtype(Current)-1560])(Current))) {
		ti4_1 = F809_2556(Current);
		F1561_6762(Current, (EIF_INTEGER_32) (loc1 + ti4_1));
	}
	tr1 = *(EIF_REFERENCE *)(Current);
	/* INLINED CODE (SPECIAL.put) */
	*((EIF_CHARACTER_8 *)RTCW(tr1) + (loc1)) = arg1;
	/* END INLINED CODE */
	;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L));
	F1560_6659(Current);
	RTLE;
}

/* {STRING_8}.insert_string */
void F1561_6749 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_INTEGER_32 ti4_6;
	EIF_CHARACTER_8 tc1;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc4);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTGC;
	loc3 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O4768[Dtype(arg1)-1558]);
	if ((EIF_BOOLEAN)(loc3 != ((EIF_INTEGER_32) 0L))) {
		loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 + loc2);
		if ((EIF_BOOLEAN) (loc2 > (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4682[Dtype(Current)-1560])(Current))) {
			ti4_1 = F809_2556(Current);
			F1561_6762(Current, (EIF_INTEGER_32) (loc2 + ti4_1));
		}
		loc4 = *(EIF_REFERENCE *)(Current);
		loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L));
		/* INLINED CODE (SPECIAL.overlapping_move) */
		memmove((EIF_CHARACTER_8 *)RTCW(loc4) + ((EIF_INTEGER_32) (loc1 + loc3)),(EIF_CHARACTER_8 *)RTCW(loc4) + loc1, (rt_uint_ptr)sizeof(EIF_CHARACTER_8) * (rt_uint_ptr)(EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) - loc1));
		RT_SPECIAL_COUNT(loc4) = eif_max_int32(RT_SPECIAL_COUNT(loc4), (EIF_INTEGER_32) (loc1 + loc3) + (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) - loc1));
		/* END INLINED CODE */
		;
		tr1 = *(EIF_REFERENCE *)(RTCW(arg1));
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4766[Dtype(RTCW(arg1))-1560])(arg1);
		/* INLINED CODE (SPECIAL.copy_data) */
		memmove((EIF_CHARACTER_8 *)RTCW(loc4) + (loc1),(EIF_CHARACTER_8 *)tr1 + ti4_1, (rt_uint_ptr)sizeof(EIF_CHARACTER_8) * (rt_uint_ptr)loc3);
		RT_SPECIAL_COUNT(loc4) = eif_max_int32(RT_SPECIAL_COUNT(loc4), loc1 + loc3);
		/* END INLINED CODE */
		;
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) = (EIF_INTEGER_32) loc2;
		F1560_6659(Current);
	}
	RTLE;
}

/* {STRING_8}.insert_character */
void F1561_6750 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_INTEGER_32 ti4_6;
	EIF_CHARACTER_8 tc1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc3);
	RTLIU(2);
	
	RTGC;
	loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
	loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (((EIF_INTEGER_32) 1L) + loc2);
	if ((EIF_BOOLEAN) (loc2 > (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4682[Dtype(Current)-1560])(Current))) {
		ti4_1 = F809_2556(Current);
		F1561_6762(Current, (EIF_INTEGER_32) (loc2 + ti4_1));
	}
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L));
	loc3 = *(EIF_REFERENCE *)(Current);
	/* INLINED CODE (SPECIAL.overlapping_move) */
	memmove((EIF_CHARACTER_8 *)RTCW(loc3) + ((EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L))),(EIF_CHARACTER_8 *)RTCW(loc3) + loc1, (rt_uint_ptr)sizeof(EIF_CHARACTER_8) * (rt_uint_ptr)(EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) - loc1));
	RT_SPECIAL_COUNT(loc3) = eif_max_int32(RT_SPECIAL_COUNT(loc3), (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)) + (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) - loc1));
	/* END INLINED CODE */
	;
	/* INLINED CODE (SPECIAL.put) */
	*((EIF_CHARACTER_8 *)RTCW(loc3) + (loc1)) = arg1;
	/* END INLINED CODE */
	;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) = (EIF_INTEGER_32) loc2;
	F1560_6659(Current);
	RTLE;
}

/* {STRING_8}.remove */
void F1561_6751 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_INTEGER_32 ti4_6;
	EIF_CHARACTER_8 tc1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
	tr1 = *(EIF_REFERENCE *)(Current);
	/* INLINED CODE (SPECIAL.overlapping_move) */
	memmove((EIF_CHARACTER_8 *)RTCW(tr1) + ((EIF_INTEGER_32) (arg1 - ((EIF_INTEGER_32) 1L))),(EIF_CHARACTER_8 *)RTCW(tr1) + arg1, (rt_uint_ptr)sizeof(EIF_CHARACTER_8) * (rt_uint_ptr)(EIF_INTEGER_32) (loc1 - arg1));
	RT_SPECIAL_COUNT(tr1) = eif_max_int32(RT_SPECIAL_COUNT(tr1), (EIF_INTEGER_32) (arg1 - ((EIF_INTEGER_32) 1L)) + (EIF_INTEGER_32) (loc1 - arg1));
	/* END INLINED CODE */
	;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L));
	F1560_6659(Current);
	RTLE;
}

/* {STRING_8}.remove_tail */
void F1561_6754 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
	if ((EIF_BOOLEAN) (arg1 > loc1)) {
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		F1560_6659(Current);
	} else {
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R4792[Dtype(Current)-1560])(Current, (EIF_INTEGER_32) (loc1 - arg1));
	}
	RTLE;
}

/* {STRING_8}.wipe_out */
void F1561_6759 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	F1560_6659(Current);
	RTLE;
}

/* {STRING_8}.resize */
void F1561_6762 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	tr1 = F1199_3118(RTCW(tr1), (EIF_CHARACTER_8) '\000', (EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {STRING_8}.grow */
void F1561_6763 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if ((EIF_BOOLEAN) (arg1 > (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4682[Dtype(Current)-1560])(Current))) {
		F1561_6762(Current, arg1);
	}
	RTLE;
}

/* {STRING_8}.as_upper */
EIF_REFERENCE F1561_6766 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTGC;
	Result = F1_14(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R4838[Dtype(RTCW(Result))-1560])(Result);
	RTLE;
	return Result;
}

/* {STRING_8}.to_lower */
void F1561_6771 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1559_6651(Current, *(EIF_REFERENCE *)(Current), ((EIF_INTEGER_32) 0L), (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) - ((EIF_INTEGER_32) 1L)));
	F1560_6659(Current);
	RTLE;
}

/* {STRING_8}.to_upper */
void F1561_6772 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1559_6652(Current, *(EIF_REFERENCE *)(Current), ((EIF_INTEGER_32) 0L), (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) - ((EIF_INTEGER_32) 1L)));
	F1560_6659(Current);
	RTLE;
}

/* {STRING_8}.linear_representation */
EIF_REFERENCE F1561_6773 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_8 tc1;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,955,1487,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		loc1 = RTLNS(typres0.id, 955, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4682[dtype-1560])(Current);
	F956_4073(RTCW(loc1), ti4_1);
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		if ((EIF_BOOLEAN) (loc2 > *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_))) break;
		tc1 = (eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2556[dtype-849])(Current, loc2));
		F956_4114(RTCW(loc1), tc1);
		loc2++;
	}
	RTLE;
	return (EIF_REFERENCE) loc1;
}

/* {STRING_8}.substring */
EIF_REFERENCE F1561_6777 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_INTEGER_32 ti4_6;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLIU(5);
	
	RTGC;
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) (((EIF_INTEGER_32) 1L) <= arg1) && (EIF_BOOLEAN) (arg1 <= arg2)) && (EIF_BOOLEAN) (arg2 <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_)))) {
		Result = F1561_6781(Current, (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 - arg1) + ((EIF_INTEGER_32) 1L)));
		tr1 = *(EIF_REFERENCE *)(RTCW(Result));
		/* INLINED CODE (SPECIAL.copy_data) */
		memmove((EIF_CHARACTER_8 *)RTCW(tr1) + (((EIF_INTEGER_32) 0L)),(EIF_CHARACTER_8 *)*(EIF_REFERENCE *)(Current) + (EIF_INTEGER_32) (arg1 - ((EIF_INTEGER_32) 1L)), (rt_uint_ptr)sizeof(EIF_CHARACTER_8) * (rt_uint_ptr)(EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 - arg1) + ((EIF_INTEGER_32) 1L)));
		RT_SPECIAL_COUNT(tr1) = eif_max_int32(RT_SPECIAL_COUNT(tr1), ((EIF_INTEGER_32) 0L) + (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 - arg1) + ((EIF_INTEGER_32) 1L)));
		/* END INLINED CODE */
		;
		F1561_6779(RTCW(Result), (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 - arg1) + ((EIF_INTEGER_32) 1L)));
	} else {
		Result = F1561_6781(Current, ((EIF_INTEGER_32) 0L));
		RTLE;
		return (EIF_REFERENCE) Result;
	}
	RTLE;
	return Result;
}

/* {STRING_8}.set_count */
void F1561_6779 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) = (EIF_INTEGER_32) arg1;
	F1560_6659(Current);
	RTLE;
}

/* {STRING_8}.correct_mismatch */
void F1561_6780 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {STRING_8}.new_string */
EIF_REFERENCE F1561_6781 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNSMART(Dftype(Current));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R4642[Dtype(RTCW(tr1))-1560])(tr1, arg1);
	RTLE;
	return (EIF_REFERENCE) tr1;
}

void EIF_Minit233 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
