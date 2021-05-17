/*
 * Code for class STRING_8_SEARCHER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "st105.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {STRING_8_SEARCHER}.max_code_point_value */
EIF_INTEGER_32 F389_1550 (EIF_REFERENCE Current)
{
	return (EIF_INTEGER_32) ((EIF_INTEGER_32) 255L);
}

/* {STRING_8_SEARCHER}.substring_index_with_deltas */
EIF_INTEGER_32 F389_1551 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc5 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,loc7);
	RTLR(3,loc6);
	RTLR(4,Current);
	RTLIU(5);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 == arg2)) {
		if ((EIF_BOOLEAN)(arg3 == ((EIF_INTEGER_32) 1L))) {
			RTLE;
			return (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		}
	} else {
		loc4 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4681[Dtype(RTCW(arg2))-1560])(arg2);
		loc7 = *(EIF_REFERENCE *)(RTCW(arg1));
		loc8 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4766[Dtype(RTCW(arg1))-1560])(arg1);
		loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg3 + loc8);
		loc6 = *(EIF_REFERENCE *)(Current);
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg4 + ((EIF_INTEGER_32) 1L)) + loc8);
		for (;;) {
			if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc1 + loc4) > loc3)) break;
			loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
			loc5 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			for (;;) {
				if ((EIF_BOOLEAN)(loc2 == loc4)) break;
				/* INLINED CODE (SPECIAL.item) */
				tc2 = *((EIF_CHARACTER_8 *)RTCW(loc7) + ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 + loc2) - ((EIF_INTEGER_32) 1L))));
				/* END INLINED CODE */
				tc1 = tc2;
				tu4_1 = (EIF_NATURAL_32) tc1;
				tu4_2 = (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4644[Dtype(RTCW(arg2))-1560])(arg2, (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L)));
				if ((EIF_BOOLEAN)(tu4_1 != tu4_2)) {
					loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc4 - ((EIF_INTEGER_32) 1L));
					loc5 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
				}
				loc2++;
			}
			if (loc5) {
				Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 - loc8);
				loc1 = (EIF_INTEGER_32) loc3;
			} else {
				if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc1 + loc4) <= arg4)) {
					/* INLINED CODE (SPECIAL.item) */
					tc2 = *((EIF_CHARACTER_8 *)RTCW(loc7) + ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 + loc4) - ((EIF_INTEGER_32) 1L))));
					/* END INLINED CODE */
					tc1 = tc2;
					ti4_1 = (EIF_INTEGER_32) (tc1);
					/* INLINED CODE (SPECIAL.item) */
					ti4_3 = *((EIF_INTEGER_32 *)RTCW(loc6) + (ti4_1));
					/* END INLINED CODE */
					ti4_1 = ti4_3;
					loc1 += ti4_1;
				} else {
					loc1++;
				}
			}
		}
	}
	RTLE;
	return Result;
}

void EIF_Minit105 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
