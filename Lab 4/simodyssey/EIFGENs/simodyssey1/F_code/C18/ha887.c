/*
 * Code for class HASH_TABLE [NATURAL_32, POINTER]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ha887.h"
#include "eif_built_in.h"
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

/* {HASH_TABLE}.make */
void F1004_3924 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_NATURAL_32 loc2 = (EIF_NATURAL_32) 0;
	EIF_POINTER loc3 = (EIF_POINTER) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCFDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	loc1 = RTLNS(eif_new_type(1029, 0x01).id, 1029, _OBJSIZ_0_1_0_1_0_0_0_0_);
	loc4 = eif_max_int32 (arg1,((EIF_INTEGER_32) 2L));
	loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc4 + (EIF_INTEGER_32) (loc4 / ((EIF_INTEGER_32) 2L))) + ((EIF_INTEGER_32) 1L));
	ti4_1 = F1030_4274(RTCW(loc1), loc4);
	loc4 = (EIF_INTEGER_32) ti4_1;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_2_) = (EIF_INTEGER_32) loc4;
	tr1 = RTLNSP2(eif_final_id(Y3010,Y3010_gen_type,dftype,998).id,0,(EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L)),sizeof(EIF_NATURAL_32), EIF_TRUE);
	RT_SPECIAL_COUNT(tr1) = 0;
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSP2(eif_final_id(Y3011,Y3011_gen_type,dftype,998).id,0,(EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L)),sizeof(EIF_POINTER), EIF_TRUE);
	RT_SPECIAL_COUNT(tr1) = 0;
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1205,1493,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSP2(typres0.id,0,(EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L)),sizeof(EIF_BOOLEAN), EIF_TRUE);
	}
	F1206_3083(RTCW(tr1), (EIF_BOOLEAN) 0, (EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1199,1508,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSP2(typres0.id,0,(EIF_INTEGER_32) (loc4 + ((EIF_INTEGER_32) 1L)),sizeof(EIF_INTEGER_32), EIF_TRUE);
	}
	F1200_3083(RTCW(tr1), ((EIF_INTEGER_32) -1L), (EIF_INTEGER_32) (loc4 + ((EIF_INTEGER_32) 1L)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_4_) = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L));
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_8_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_6_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_5_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*(EIF_NATURAL_32 *)(Current+ _LNGOFF_4_3_0_0_) = (EIF_NATURAL_32) loc2;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_4_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_3_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_7_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2147483645L);
	*(EIF_NATURAL_32 *)(Current+ _LNGOFF_4_3_0_1_) = (EIF_NATURAL_32) loc2;
	*(EIF_POINTER *)(Current+ _PTROFF_4_3_0_9_0_0_) = (EIF_POINTER) loc3;
	RTLE;
}

/* {HASH_TABLE}.accommodate */
void F1004_3926 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc3);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc4);
	RTLR(4,loc5);
	RTLIU(5);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	ti4_1 = (EIF_INTEGER_32) eif_builtin_SPECIAL_count (tr1);
	ti4_1 = eif_max_int32 (ti4_1,arg1);
	loc3 = F1004_3982(Current, ti4_1);
	loc4 = *(EIF_REFERENCE *)(Current);
	loc5 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	loc2 = (EIF_INTEGER_32) eif_builtin_SPECIAL_count (loc5);
	for (;;) {
		if ((EIF_BOOLEAN)(loc1 == loc2)) break;
		if (F1004_4003(Current, loc1)) {
			/* INLINED CODE (SPECIAL.item) */
			tu4_2 = *((EIF_NATURAL_32 *)RTCW(loc4) + (loc1));
			/* END INLINED CODE */
			tu4_1 = tu4_2;
			/* INLINED CODE (SPECIAL.item) */
			tp2 = *((EIF_POINTER *)RTCW(loc5) + (loc1));
			/* END INLINED CODE */
			tp1 = tp2;
			F1004_3970(RTCW(loc3), tu4_1, tp1);
		}
		loc1++;
	}
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_4_2_)) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		/* INLINED CODE (SPECIAL.item) */
		ti4_3 = *((EIF_INTEGER_32 *)RTCW(tr1) + (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_2_)));
		/* END INLINED CODE */
		loc1 = ti4_3;
		/* INLINED CODE (SPECIAL.item) */
		tu4_2 = *((EIF_NATURAL_32 *)RTCW(loc4) + (loc1));
		/* END INLINED CODE */
		tu4_1 = tu4_2;
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		/* INLINED CODE (SPECIAL.item) */
		tp2 = *((EIF_POINTER *)RTCW(tr1) + (loc1));
		/* END INLINED CODE */
		tp1 = tp2;
		F1004_3970(RTCW(loc3), tu4_1, tp1);
	}
	tr1 = *(EIF_REFERENCE *)(RTCW(loc3));
	F1004_4006(Current, tr1);
	tr1 = *(EIF_REFERENCE *)(RTCW(loc3) + _REFACS_1_);
	F1004_4008(Current, tr1);
	tr1 = *(EIF_REFERENCE *)(RTCW(loc3) + _REFACS_3_);
	F1004_4009(Current, tr1);
	tr1 = *(EIF_REFERENCE *)(RTCW(loc3) + _REFACS_2_);
	F1004_4010(Current, tr1);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc3)+ _LNGOFF_4_3_0_2_);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_2_) = (EIF_INTEGER_32) ti4_1;
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc3)+ _LNGOFF_4_3_0_4_);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_4_) = (EIF_INTEGER_32) ti4_1;
	RTLE;
}

/* {HASH_TABLE}.found_item */
EIF_NATURAL_32 F1004_3927 (EIF_REFERENCE Current)
{
	return *(EIF_NATURAL_32 *)(Current+ _LNGOFF_4_3_0_0_);
}


/* {HASH_TABLE}.item */
EIF_NATURAL_32 F1004_3929 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_POINTER loc12 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,loc9);
	RTLR(4,loc10);
	RTLR(5,loc11);
	RTLIU(6);
	
	RTGC;
	loc7 = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(arg1 == loc1) || EIF_FALSE)) {
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_4_2_)) {
			tr1 = *(EIF_REFERENCE *)(Current);
			tr2 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
			/* INLINED CODE (SPECIAL.item) */
			ti4_3 = *((EIF_INTEGER_32 *)RTCW(tr2) + (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_2_)));
			/* END INLINED CODE */
			ti4_1 = ti4_3;
			/* INLINED CODE (SPECIAL.item) */
			tu4_2 = *((EIF_NATURAL_32 *)RTCW(tr1) + (ti4_1));
			/* END INLINED CODE */
			Result = tu4_2;
		}
	} else {
		loc9 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		loc10 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		loc11 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
		loc6 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_2_);
		loc8 = (EIF_INTEGER_32) loc6;
		loc2 = F1004_3940(Current, arg1);
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (((EIF_INTEGER_32) 1L) + (EIF_INTEGER_32) (loc2 % (EIF_INTEGER_32) (loc6 - ((EIF_INTEGER_32) 1L))));
		loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc2 % loc6) - loc3);
		for (;;) {
			if ((EIF_BOOLEAN)(loc8 == ((EIF_INTEGER_32) 0L))) break;
			loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc5 + loc3) % loc6);
			/* INLINED CODE (SPECIAL.item) */
			ti4_2 = *((EIF_INTEGER_32 *)RTCW(loc10) + (loc5));
			/* END INLINED CODE */
			loc4 = ti4_2;
			if ((EIF_BOOLEAN) (loc4 >= ((EIF_INTEGER_32) 0L))) {
				/* INLINED CODE (SPECIAL.item) */
				tp2 = *((EIF_POINTER *)RTCW(loc9) + (loc4));
				/* END INLINED CODE */
				loc12 = tp2;
				if (F1004_3947(Current, loc12, arg1)) {
					loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
					tr1 = *(EIF_REFERENCE *)(Current);
					/* INLINED CODE (SPECIAL.item) */
					tu4_2 = *((EIF_NATURAL_32 *)RTCW(tr1) + (loc4));
					/* END INLINED CODE */
					Result = tu4_2;
				}
			} else {
				if ((EIF_BOOLEAN)(loc4 == ((EIF_INTEGER_32) -1L))) {
					loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				} else {
					if ((EIF_BOOLEAN)(loc7 == ((EIF_INTEGER_32) -1L))) {
						loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) -loc4 + ((EIF_INTEGER_32) -2L));
						/* INLINED CODE (SPECIAL.item) */
						tb2 = *((EIF_BOOLEAN *)RTCW(loc11) + (loc4));
						/* END INLINED CODE */
						tb1 = tb2;
						if ((EIF_BOOLEAN) !tb1) {
							loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
						} else {
							loc7 = (EIF_INTEGER_32) loc5;
						}
					}
				}
			}
			loc8--;
		}
	}
	RTLE;
	return Result;
}

/* {HASH_TABLE}.at */
EIF_NATURAL_32 F1004_3930 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_POINTER loc12 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,loc9);
	RTLR(4,loc10);
	RTLR(5,loc11);
	RTLIU(6);
	
	RTGC;
	loc7 = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(arg1 == loc1) || EIF_FALSE)) {
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_4_2_)) {
			tr1 = *(EIF_REFERENCE *)(Current);
			tr2 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
			/* INLINED CODE (SPECIAL.item) */
			ti4_3 = *((EIF_INTEGER_32 *)RTCW(tr2) + (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_2_)));
			/* END INLINED CODE */
			ti4_1 = ti4_3;
			/* INLINED CODE (SPECIAL.item) */
			tu4_2 = *((EIF_NATURAL_32 *)RTCW(tr1) + (ti4_1));
			/* END INLINED CODE */
			Result = tu4_2;
		}
	} else {
		loc9 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		loc10 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		loc11 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
		loc6 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_2_);
		loc8 = (EIF_INTEGER_32) loc6;
		loc2 = F1004_3940(Current, arg1);
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (((EIF_INTEGER_32) 1L) + (EIF_INTEGER_32) (loc2 % (EIF_INTEGER_32) (loc6 - ((EIF_INTEGER_32) 1L))));
		loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc2 % loc6) - loc3);
		for (;;) {
			if ((EIF_BOOLEAN)(loc8 == ((EIF_INTEGER_32) 0L))) break;
			loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc5 + loc3) % loc6);
			/* INLINED CODE (SPECIAL.item) */
			ti4_2 = *((EIF_INTEGER_32 *)RTCW(loc10) + (loc5));
			/* END INLINED CODE */
			loc4 = ti4_2;
			if ((EIF_BOOLEAN) (loc4 >= ((EIF_INTEGER_32) 0L))) {
				/* INLINED CODE (SPECIAL.item) */
				tp2 = *((EIF_POINTER *)RTCW(loc9) + (loc4));
				/* END INLINED CODE */
				loc12 = tp2;
				if (F1004_3947(Current, loc12, arg1)) {
					loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
					tr1 = *(EIF_REFERENCE *)(Current);
					/* INLINED CODE (SPECIAL.item) */
					tu4_2 = *((EIF_NATURAL_32 *)RTCW(tr1) + (loc4));
					/* END INLINED CODE */
					Result = tu4_2;
				}
			} else {
				if ((EIF_BOOLEAN)(loc4 == ((EIF_INTEGER_32) -1L))) {
					loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				} else {
					if ((EIF_BOOLEAN)(loc7 == ((EIF_INTEGER_32) -1L))) {
						loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) -loc4 + ((EIF_INTEGER_32) -2L));
						/* INLINED CODE (SPECIAL.item) */
						tb2 = *((EIF_BOOLEAN *)RTCW(loc11) + (loc4));
						/* END INLINED CODE */
						tb1 = tb2;
						if ((EIF_BOOLEAN) !tb1) {
							loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
						} else {
							loc7 = (EIF_INTEGER_32) loc5;
						}
					}
				}
			}
			loc8--;
		}
	}
	RTLE;
	return Result;
}

/* {HASH_TABLE}.has */
EIF_BOOLEAN F1004_3931 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_POINTER loc12 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc9);
	RTLR(2,loc10);
	RTLR(3,loc11);
	RTLIU(4);
	
	RTGC;
	loc7 = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(arg1 == loc1) || EIF_FALSE)) {
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_4_2_)) {
			RTLE;
			return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
	} else {
		loc9 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		loc10 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		loc11 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
		loc6 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_2_);
		loc8 = (EIF_INTEGER_32) loc6;
		loc2 = F1004_3940(Current, arg1);
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (((EIF_INTEGER_32) 1L) + (EIF_INTEGER_32) (loc2 % (EIF_INTEGER_32) (loc6 - ((EIF_INTEGER_32) 1L))));
		loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc2 % loc6) - loc3);
		for (;;) {
			if ((EIF_BOOLEAN)(loc8 == ((EIF_INTEGER_32) 0L))) break;
			loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc5 + loc3) % loc6);
			/* INLINED CODE (SPECIAL.item) */
			ti4_2 = *((EIF_INTEGER_32 *)RTCW(loc10) + (loc5));
			/* END INLINED CODE */
			loc4 = ti4_2;
			if ((EIF_BOOLEAN) (loc4 >= ((EIF_INTEGER_32) 0L))) {
				/* INLINED CODE (SPECIAL.item) */
				tp2 = *((EIF_POINTER *)RTCW(loc9) + (loc4));
				/* END INLINED CODE */
				loc12 = tp2;
				if (F1004_3947(Current, loc12, arg1)) {
					loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
					Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				}
			} else {
				if ((EIF_BOOLEAN)(loc4 == ((EIF_INTEGER_32) -1L))) {
					loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				} else {
					if ((EIF_BOOLEAN)(loc7 == ((EIF_INTEGER_32) -1L))) {
						loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) -loc4 + ((EIF_INTEGER_32) -2L));
						/* INLINED CODE (SPECIAL.item) */
						tb2 = *((EIF_BOOLEAN *)RTCW(loc11) + (loc4));
						/* END INLINED CODE */
						tb1 = tb2;
						if ((EIF_BOOLEAN) !tb1) {
							loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
						} else {
							loc7 = (EIF_INTEGER_32) loc5;
						}
					}
				}
			}
			loc8--;
		}
	}
	RTLE;
	return Result;
}

/* {HASH_TABLE}.has_key */
EIF_BOOLEAN F1004_3932 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc2 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_3_);
	F1004_4014(Current, arg1);
	Result = F1004_3956(Current);
	if (Result) {
		tr1 = *(EIF_REFERENCE *)(Current);
		ti4_1 = F1004_3992(Current);
		/* INLINED CODE (SPECIAL.item) */
		tu4_2 = *((EIF_NATURAL_32 *)RTCW(tr1) + (ti4_1));
		/* END INLINED CODE */
		tu4_1 = tu4_2;
		*(EIF_NATURAL_32 *)(Current+ _LNGOFF_4_3_0_0_) = (EIF_NATURAL_32) tu4_1;
	} else {
		*(EIF_NATURAL_32 *)(Current+ _LNGOFF_4_3_0_0_) = (EIF_NATURAL_32) loc2;
	}
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_3_) = (EIF_INTEGER_32) loc1;
	RTLE;
	return Result;
}

/* {HASH_TABLE}.item_for_iteration */
EIF_NATURAL_32 F1004_3935 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	/* INLINED CODE (SPECIAL.item) */
	tu4_2 = *((EIF_NATURAL_32 *)RTCW(tr1) + (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_4_)));
	/* END INLINED CODE */
	Result = tu4_2;
	RTLE;
	return Result;
}

/* {HASH_TABLE}.key_for_iteration */
EIF_POINTER F1004_3936 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	/* INLINED CODE (SPECIAL.item) */
	tp2 = *((EIF_POINTER *)RTCW(tr1) + (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_4_)));
	/* END INLINED CODE */
	Result = tp2;
	RTLE;
	return Result;
}

/* {HASH_TABLE}.cursor */
EIF_REFERENCE F1004_3937 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(541, 0x01).id, 541, _OBJSIZ_0_0_0_1_0_0_0_0_);
	F542_2388(RTCW(tr1), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_4_));
	RTLE;
	return (EIF_REFERENCE) tr1;
}

/* {HASH_TABLE}.new_cursor */
EIF_REFERENCE F1004_3938 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTGC;
	{
		EIF_TYPE_INDEX typarr0[] = {0xFF01,1153,0,0,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = eif_final_id(Y2164,Y2164_gen_type,Dftype(Current),548);
			typarr0[2] = l_type.annotations | 0xFF00;
			typarr0[3] = l_type.id;
		}
		{
			EIF_TYPE l_type;
			l_type = eif_final_id(Y2257,Y2257_gen_type,Dftype(Current),665);
			typarr0[4] = l_type.annotations | 0xFF00;
			typarr0[5] = l_type.id;
		}
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		Result = RTLNS(typres0.id, 1153, _OBJSIZ_1_1_0_5_0_0_0_0_);
	}
	F1067_4330(RTCW(Result), Current);
	F1067_4349(RTCW(Result));
	RTLE;
	return Result;
}

/* {HASH_TABLE}.iteration_item */
EIF_NATURAL_32 F1004_3939 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	/* INLINED CODE (SPECIAL.item) */
	tu4_2 = *((EIF_NATURAL_32 *)RTCW(tr1) + (arg1));
	/* END INLINED CODE */
	Result = tu4_2;
	RTLE;
	return Result;
}

/* {HASH_TABLE}.hash_code_of */
EIF_INTEGER_32 F1004_3940 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	
	
	ti4_1 = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (arg1)));
	return (EIF_INTEGER_32) ti4_1;
}

/* {HASH_TABLE}.count */
EIF_INTEGER_32 F1004_3941 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_8_);
}


/* {HASH_TABLE}.iteration_lower */
EIF_INTEGER_32 F1004_3944 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) F1004_3968(Current, ((EIF_INTEGER_32) -1L));
}

/* {HASH_TABLE}.iteration_upper */
EIF_INTEGER_32 F1004_3945 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	ti4_1 = (EIF_INTEGER_32) eif_builtin_SPECIAL_count (tr1);
	Result = F1004_3969(Current, ti4_1);
	RTLE;
	return Result;
}

/* {HASH_TABLE}.is_equal */
EIF_BOOLEAN F1004_3946 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,loc1);
	RTLIU(3);
	
	RTGC;
	tb1 = '\0';
	tb2 = '\0';
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_4_3_0_8_);
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_8_) == ti4_1)) {
		tb3 = *(EIF_BOOLEAN *)(RTCW(arg1)+ _CHROFF_4_0_);
		tb2 = (EIF_BOOLEAN)(*(EIF_BOOLEAN *)(Current+ _CHROFF_4_0_) == tb3);
	}
	if (tb2) {
		tb2 = *(EIF_BOOLEAN *)(RTCW(arg1)+ _CHROFF_4_2_);
		tb1 = (EIF_BOOLEAN)(*(EIF_BOOLEAN *)(Current+ _CHROFF_4_2_) == tb2);
	}
	if (tb1) {
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		loc1 = F1004_3938(Current);
		for (;;) {
			tb1 = F1154_4416(loc1);
			if (tb1) break;
			if ((EIF_BOOLEAN) !Result) break;
			tp1 = F1154_4414(loc1);
			F1004_3966(RTCW(arg1), tp1);
			tb2 = F1004_3956(RTCW(arg1));
			if (tb2) {
				if (*(EIF_BOOLEAN *)(Current+ _CHROFF_4_0_)) {
					tu4_1 = F1154_4413(loc1);
					tu4_2 = *(EIF_NATURAL_32 *)(RTCW(arg1)+ _LNGOFF_4_3_0_0_);
					Result = (EIF_BOOLEAN) (tu4_1 == tu4_2);
				} else {
					tu4_1 = F1154_4413(loc1);
					tu4_2 = *(EIF_NATURAL_32 *)(RTCW(arg1)+ _LNGOFF_4_3_0_0_);
					Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu4_1 == tu4_2);
				}
			} else {
				Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			}
			F1154_4417(loc1);
		}
	}
	RTLE;
	return Result;
}

/* {HASH_TABLE}.same_keys */
EIF_BOOLEAN F1004_3947 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (arg1 == arg2);
}

/* {HASH_TABLE}.extendible */
EIF_BOOLEAN F1004_3950 (EIF_REFERENCE Current)
{
	return (EIF_BOOLEAN) EIF_FALSE;
}

/* {HASH_TABLE}.found */
EIF_BOOLEAN F1004_3956 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_5_) == ((EIF_INTEGER_32) 2L));
}

/* {HASH_TABLE}.not_found */
EIF_BOOLEAN F1004_3957 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_5_) == ((EIF_INTEGER_32) 8L));
}

/* {HASH_TABLE}.after */
EIF_BOOLEAN F1004_3958 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) F1004_4005(Current, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_4_));
}

/* {HASH_TABLE}.off */
EIF_BOOLEAN F1004_3959 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) F1004_4005(Current, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_4_));
}

/* {HASH_TABLE}.valid_cursor */
EIF_BOOLEAN F1004_3960 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,loc2);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTGC;
	loc2 = arg1;
	loc2 = RTRV(eif_new_type(541, 0x01),loc2);
	if (EIF_TEST(loc2)) {
		loc1 = *(EIF_INTEGER_32 *)(loc2+ _LNGOFF_0_0_0_0_);
		Result = '\01';
		if (!F1004_4005(Current, loc1)) {
			Result = F1004_4004(Current, loc1);
		}
	}
	RTLE;
	return Result;
}

/* {HASH_TABLE}.valid_iteration_index */
EIF_BOOLEAN F1004_3962 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	return (EIF_BOOLEAN) F1004_4004(Current, arg1);
}

/* {HASH_TABLE}.start */
void F1004_3963 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	ti4_1 = F1004_3968(Current, ((EIF_INTEGER_32) -1L));
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_4_) = (EIF_INTEGER_32) ti4_1;
	RTLE;
}

/* {HASH_TABLE}.forth */
void F1004_3964 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	ti4_1 = F1004_3968(Current, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_4_));
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_4_) = (EIF_INTEGER_32) ti4_1;
	RTLE;
}

/* {HASH_TABLE}.go_to */
void F1004_3965 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTGC;
	loc1 = arg1;
	loc1 = RTRV(eif_new_type(541, 0x01),loc1);
	if (EIF_TEST(loc1)) {
		ti4_1 = *(EIF_INTEGER_32 *)(loc1+ _LNGOFF_0_0_0_0_);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_4_) = (EIF_INTEGER_32) ti4_1;
	}
	RTLE;
}

/* {HASH_TABLE}.search */
void F1004_3966 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc2 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_3_);
	F1004_4014(Current, arg1);
	if (F1004_3956(Current)) {
		tr1 = *(EIF_REFERENCE *)(Current);
		ti4_1 = F1004_3992(Current);
		/* INLINED CODE (SPECIAL.item) */
		tu4_2 = *((EIF_NATURAL_32 *)RTCW(tr1) + (ti4_1));
		/* END INLINED CODE */
		tu4_1 = tu4_2;
		*(EIF_NATURAL_32 *)(Current+ _LNGOFF_4_3_0_0_) = (EIF_NATURAL_32) tu4_1;
	} else {
		*(EIF_NATURAL_32 *)(Current+ _LNGOFF_4_3_0_0_) = (EIF_NATURAL_32) loc2;
	}
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_3_) = (EIF_INTEGER_32) loc1;
	RTLE;
}

/* {HASH_TABLE}.next_iteration_position */
EIF_INTEGER_32 F1004_3968 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	tr1 = *(EIF_REFERENCE *)(Current);
	loc2 = (EIF_INTEGER_32) eif_builtin_SPECIAL_count (tr1);
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L));
	for (;;) {
		tb1 = '\01';
		if (!(EIF_BOOLEAN) (Result >= loc2)) {
			/* INLINED CODE (SPECIAL.item) */
			tb3 = *((EIF_BOOLEAN *)RTCW(loc1) + (Result));
			/* END INLINED CODE */
			tb2 = tb3;
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if (tb1) break;
		Result++;
	}
	RTLE;
	return Result;
}

/* {HASH_TABLE}.previous_iteration_position */
EIF_INTEGER_32 F1004_3969 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg1 - ((EIF_INTEGER_32) 1L));
	for (;;) {
		tb1 = '\01';
		if (!(EIF_BOOLEAN) (Result <= ((EIF_INTEGER_32) -1L))) {
			/* INLINED CODE (SPECIAL.item) */
			tb3 = *((EIF_BOOLEAN *)RTCW(loc1) + (Result));
			/* END INLINED CODE */
			tb2 = tb3;
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if (tb1) break;
		Result--;
	}
	RTLE;
	return Result;
}

/* {HASH_TABLE}.put */
void F1004_3970 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1, EIF_POINTER arg2)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	F1004_4014(Current, arg2);
	if (F1004_3956(Current)) {
		F1004_4020(Current);
		tr1 = *(EIF_REFERENCE *)(Current);
		ti4_1 = F1004_3992(Current);
		/* INLINED CODE (SPECIAL.item) */
		tu4_2 = *((EIF_NATURAL_32 *)RTCW(tr1) + (ti4_1));
		/* END INLINED CODE */
		tu4_1 = tu4_2;
		*(EIF_NATURAL_32 *)(Current+ _LNGOFF_4_3_0_0_) = (EIF_NATURAL_32) tu4_1;
	} else {
		if (F1004_3993(Current)) {
			F1004_4033(Current);
			F1004_4014(Current, arg2);
		}
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_6_) == ((EIF_INTEGER_32) -1L))) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			loc2 = (EIF_INTEGER_32) eif_builtin_SPECIAL_count (tr1);
			loc3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_3_);
		} else {
			loc2 = F1004_4002(Current, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_6_));
			loc3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_6_);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
			F1206_3101(RTCW(tr1), (EIF_BOOLEAN) 0, loc2);
		}
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		/* INLINED CODE (SPECIAL.put) */
		*((EIF_INTEGER_32 *)RTCW(tr1) + (loc3)) = loc2;
		/* END INLINED CODE */
		;
		tr1 = *(EIF_REFERENCE *)(Current);
		F1204_3101(RTCW(tr1), arg1, loc2);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		F1196_3101(RTCW(tr1), arg2, loc2);
		if ((EIF_BOOLEAN)(arg2 == loc1)) {
			*(EIF_BOOLEAN *)(Current+ _CHROFF_4_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
		(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_8_))++;
		*(EIF_NATURAL_32 *)(Current+ _LNGOFF_4_3_0_0_) = (EIF_NATURAL_32) arg1;
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_5_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
	}
	RTLE;
}

/* {HASH_TABLE}.force */
void F1004_3971 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1, EIF_POINTER arg2)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_NATURAL_32 loc2 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	F1004_4014(Current, arg2);
	if (F1004_3957(Current)) {
		if (F1004_3993(Current)) {
			F1004_4033(Current);
			F1004_4014(Current, arg2);
		}
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_6_) == ((EIF_INTEGER_32) -1L))) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			loc3 = (EIF_INTEGER_32) eif_builtin_SPECIAL_count (tr1);
			loc4 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_3_);
		} else {
			loc3 = F1004_4002(Current, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_6_));
			loc4 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_6_);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
			F1206_3101(RTCW(tr1), (EIF_BOOLEAN) 0, loc3);
		}
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		/* INLINED CODE (SPECIAL.put) */
		*((EIF_INTEGER_32 *)RTCW(tr1) + (loc4)) = loc3;
		/* END INLINED CODE */
		;
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		F1196_3101(RTCW(tr1), arg2, loc3);
		if ((EIF_BOOLEAN)(arg2 == loc1)) {
			*(EIF_BOOLEAN *)(Current+ _CHROFF_4_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
		(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_8_))++;
		*(EIF_NATURAL_32 *)(Current+ _LNGOFF_4_3_0_0_) = (EIF_NATURAL_32) loc2;
	} else {
		loc3 = F1004_3992(Current);
		tr1 = *(EIF_REFERENCE *)(Current);
		/* INLINED CODE (SPECIAL.item) */
		tu4_2 = *((EIF_NATURAL_32 *)RTCW(tr1) + (loc3));
		/* END INLINED CODE */
		tu4_1 = tu4_2;
		*(EIF_NATURAL_32 *)(Current+ _LNGOFF_4_3_0_0_) = (EIF_NATURAL_32) tu4_1;
	}
	tr1 = *(EIF_REFERENCE *)(Current);
	F1204_3101(RTCW(tr1), arg1, loc3);
	RTLE;
}

/* {HASH_TABLE}.extend */
void F1004_3972 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1, EIF_POINTER arg2)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	F1004_4015(Current, arg2);
	if (F1004_3993(Current)) {
		F1004_4033(Current);
		F1004_4015(Current, arg2);
	}
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_6_) == ((EIF_INTEGER_32) -1L))) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		loc2 = (EIF_INTEGER_32) eif_builtin_SPECIAL_count (tr1);
		loc3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_3_);
	} else {
		loc2 = F1004_4002(Current, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_6_));
		loc3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_6_);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
		F1206_3101(RTCW(tr1), (EIF_BOOLEAN) 0, loc2);
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	/* INLINED CODE (SPECIAL.put) */
	*((EIF_INTEGER_32 *)RTCW(tr1) + (loc3)) = loc2;
	/* END INLINED CODE */
	;
	tr1 = *(EIF_REFERENCE *)(Current);
	F1204_3101(RTCW(tr1), arg1, loc2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	F1196_3101(RTCW(tr1), arg2, loc2);
	if ((EIF_BOOLEAN)(arg2 == loc1)) {
		*(EIF_BOOLEAN *)(Current+ _CHROFF_4_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_8_))++;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_5_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
	RTLE;
}

/* {HASH_TABLE}.remove */
void F1004_3976 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_NATURAL_32 loc2 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc5 = (EIF_NATURAL_32) 0;
	EIF_POINTER loc6 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_BOOLEAN tb1;
	RTCFDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTGC;
	F1004_4014(Current, arg1);
	if (F1004_3956(Current)) {
		loc3 = F1004_3992(Current);
		if ((EIF_BOOLEAN)(arg1 == loc1)) {
			*(EIF_BOOLEAN *)(Current+ _CHROFF_4_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		}
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
		/* INLINED CODE (SPECIAL.put) */
		*((EIF_BOOLEAN *)RTCW(tr1) + (loc3)) = (EIF_BOOLEAN) 1;
		/* END INLINED CODE */
		;
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		/* INLINED CODE (SPECIAL.put) */
		*((EIF_INTEGER_32 *)RTCW(tr1) + (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_3_))) = (EIF_INTEGER_32) ((EIF_INTEGER_32) -loc3 + ((EIF_INTEGER_32) -2L));
		/* END INLINED CODE */
		;
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_4_) == loc3)) {
			F1004_3964(Current);
		}
		(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_8_))--;
		ti4_1 = eif_min_int32 (loc3,*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_7_));
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_7_) = (EIF_INTEGER_32) ti4_1;
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_7_) == *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_8_))) {
			tr1 = *(EIF_REFERENCE *)(Current);
			loc4 = (EIF_INTEGER_32) eif_builtin_SPECIAL_count (tr1);
			ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_7_);
			loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc4 - ti4_1);
			tr1 = *(EIF_REFERENCE *)(Current);
			F1204_3114(RTCW(tr1), loc4);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			F1196_3114(RTCW(tr1), loc4);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
			ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_7_);
			tr2 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
			ti4_2 = (EIF_INTEGER_32) eif_builtin_SPECIAL_count (tr2);
			F1206_3104(RTCW(tr1), (EIF_BOOLEAN) 0, ti4_1, (EIF_INTEGER_32) (ti4_2 - ((EIF_INTEGER_32) 1L)));
			*(EIF_NATURAL_32 *)(Current+ _LNGOFF_4_3_0_1_) = (EIF_NATURAL_32) loc2;
			*(EIF_POINTER *)(Current+ _PTROFF_4_3_0_9_0_0_) = (EIF_POINTER) loc1;
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_7_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2147483645L);
		} else {
			loc5 = *(EIF_NATURAL_32 *)(Current+ _LNGOFF_4_3_0_1_);
			loc6 = *(EIF_POINTER *)(Current+ _PTROFF_4_3_0_9_0_0_);
			if ((EIF_BOOLEAN) ((EIF_TRUE) && (EIF_TRUE))) {
				tr1 = *(EIF_REFERENCE *)(Current);
				/* INLINED CODE (SPECIAL.put) */
				*((EIF_NATURAL_32 *)RTCW(tr1) + (loc3)) = loc5;
				/* END INLINED CODE */
				;
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
				/* INLINED CODE (SPECIAL.put) */
				*((EIF_POINTER *)RTCW(tr1) + (loc3)) = loc6;
				/* END INLINED CODE */
				;
			} else {
				tr1 = *(EIF_REFERENCE *)(Current);
				/* INLINED CODE (SPECIAL.item) */
				tu4_2 = *((EIF_NATURAL_32 *)RTCW(tr1) + (loc3));
				/* END INLINED CODE */
				tu4_1 = tu4_2;
				*(EIF_NATURAL_32 *)(Current+ _LNGOFF_4_3_0_1_) = (EIF_NATURAL_32) tu4_1;
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
				/* INLINED CODE (SPECIAL.item) */
				tp2 = *((EIF_POINTER *)RTCW(tr1) + (loc3));
				/* END INLINED CODE */
				tp1 = tp2;
				*(EIF_POINTER *)(Current+ _PTROFF_4_3_0_9_0_0_) = (EIF_POINTER) tp1;
			}
		}
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_5_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 16L);
		*(EIF_NATURAL_32 *)(Current+ _LNGOFF_4_3_0_0_) = (EIF_NATURAL_32) loc2;
	}
	RTLE;
}

/* {HASH_TABLE}.wipe_out */
void F1004_3978 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 loc1 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	F1204_3120(RTCW(tr1));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	F1196_3120(RTCW(tr1));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	tr2 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	ti4_1 = F1206_3094(RTCW(tr2));
	F1206_3104(RTCW(tr1), (EIF_BOOLEAN) 0, ((EIF_INTEGER_32) 0L), ti4_1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	F1200_3104(RTCW(tr1), ((EIF_INTEGER_32) -1L), ((EIF_INTEGER_32) 0L), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_2_));
	*(EIF_NATURAL_32 *)(Current+ _LNGOFF_4_3_0_0_) = (EIF_NATURAL_32) loc1;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_8_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_3_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	ti4_1 = (EIF_INTEGER_32) eif_builtin_SPECIAL_count (tr1);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_4_) = (EIF_INTEGER_32) ti4_1;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_5_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_4_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTLE;
}

/* {HASH_TABLE}.linear_representation */
EIF_REFERENCE F1004_3980 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 tu4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTGC;
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_4_);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFF01,960,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = eif_final_id(Y2164,Y2164_gen_type,Dftype(Current),548);
			typarr0[2] = l_type.annotations | 0xFF00;
			typarr0[3] = l_type.id;
		}
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		Result = RTLNS(typres0.id, 960, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	F961_4073(RTCW(Result), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_8_));
	F1004_3963(Current);
	for (;;) {
		if (F1004_3959(Current)) break;
		tu4_1 = F1004_3935(Current);
		F961_4114(RTCW(Result), tu4_1);
		F1004_3964(Current);
	}
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_4_) = (EIF_INTEGER_32) loc1;
	RTLE;
	return Result;
}

/* {HASH_TABLE}.copy */
void F1004_3981 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 != Current)) {
		eif_builtin_ANY_standard_copy (Current, arg1);
		tr1 = *(EIF_REFERENCE *)(RTCW(arg1));
		tr1 = F1_14(tr1);
		F1004_4006(Current, tr1);
		tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_1_);
		tr1 = F1_14(tr1);
		F1004_4008(Current, tr1);
		tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_3_);
		tr1 = F1_14(tr1);
		F1004_4009(Current, tr1);
		tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_2_);
		tr1 = F1_14(tr1);
		F1004_4010(Current, tr1);
	}
	RTLE;
}

/* {HASH_TABLE}.empty_duplicate */
EIF_REFERENCE F1004_3982 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTGC;
	Result = RTLNSMART(Dftype(Current));
	F1004_3924(RTCW(Result), arg1);
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_4_0_)) {
		F579_2465(RTCW(Result));
	}
	RTLE;
	return Result;
}

/* {HASH_TABLE}.correct_mismatch */
void F1004_3983 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_NATURAL_32 loc6 = (EIF_NATURAL_32) 0;
	EIF_POINTER loc7 = (EIF_POINTER) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc11 = (EIF_INTEGER_32) 0;
	EIF_POINTER loc12 = (EIF_POINTER) 0;
	EIF_BOOLEAN loc13 = (EIF_BOOLEAN) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_INTEGER_32 ti4_6;
	EIF_INTEGER_32 ti4_7;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTCFDT;
	RTLD;
	
	RTLI(9);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,loc8);
	RTLR(4,loc9);
	RTLR(5,loc10);
	RTLR(6,loc1);
	RTLR(7,tr3);
	RTLR(8,loc5);
	RTLIU(9);
	
	RTGC;
	tr1 = RTOUCR(2,F948_3857, (Current));
	tr2 = RTMS_EX_H("hash_table_version_64",21,855604276);
	tb1 = F999_3931(RTCW(tr1), tr2);
	if ((EIF_BOOLEAN) !tb1) {
		tr1 = RTOUCR(2,F948_3857, (Current));
		tr2 = RTMS_EX_H("content",7,460700276);
		tr1 = F999_3929(RTCW(tr1), tr2);
		loc8 = RTCCL(tr1);
		{
			EIF_TYPE_INDEX typarr0[] = {0xFF01,928,0,0,0xFFFF};
			EIF_TYPE typres0;
			{
				EIF_TYPE l_type;
				l_type = eif_final_id(Y2164,Y2164_gen_type,dftype,548);
				typarr0[2] = l_type.annotations | 0xFF00;
				typarr0[3] = l_type.id;
			}
			
			typres0 = eif_compound_id(dftype, typarr0);
			loc8 = RTRV(typres0,loc8);
		}
		if (EIF_TEST(loc8)) {
			tr1 = *(EIF_REFERENCE *)(loc8);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
		}
		tr1 = RTOUCR(2,F948_3857, (Current));
		tr2 = RTMS_EX_H("keys",4,1801812339);
		tr1 = F999_3929(RTCW(tr1), tr2);
		loc9 = RTCCL(tr1);
		{
			EIF_TYPE_INDEX typarr0[] = {0xFF01,920,0,0,0xFFFF};
			EIF_TYPE typres0;
			{
				EIF_TYPE l_type;
				l_type = eif_final_id(Y2257,Y2257_gen_type,dftype,665);
				typarr0[2] = l_type.annotations | 0xFF00;
				typarr0[3] = l_type.id;
			}
			
			typres0 = eif_compound_id(dftype, typarr0);
			loc9 = RTRV(typres0,loc9);
		}
		if (EIF_TEST(loc9)) {
			tr1 = *(EIF_REFERENCE *)(loc9);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
		}
		tr1 = RTOUCR(2,F948_3857, (Current));
		tr2 = RTMS_EX_H("deleted_marks",13,2142169971);
		tr1 = F999_3929(RTCW(tr1), tr2);
		loc10 = RTCCL(tr1);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,930,1493,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			loc10 = RTRV(typres0,loc10);
		}
		if (EIF_TEST(loc10)) {
			tr1 = *(EIF_REFERENCE *)(loc10);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
		}
		tb1 = '\0';
		tb2 = '\0';
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_3_) != NULL) && (EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) != NULL))) {
			tr1 = RTOUCR(2,F948_3857, (Current));
			tr2 = RTMS_EX_H("hash_table_version_57",21,855604023);
			tb3 = F999_3931(RTCW(tr1), tr2);
			tb2 = (EIF_BOOLEAN) !tb3;
		}
		if (tb2) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
			ti4_1 = (EIF_INTEGER_32) eif_builtin_SPECIAL_count (tr1);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			ti4_2 = (EIF_INTEGER_32) eif_builtin_SPECIAL_count (tr1);
			tb1 = (EIF_BOOLEAN)(ti4_1 != ti4_2);
		}
		if (tb1) {
			loc1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
			tr2 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			ti4_1 = (EIF_INTEGER_32) eif_builtin_SPECIAL_count (tr2);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,1205,1493,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLNSP2(typres0.id,0,ti4_1,sizeof(EIF_BOOLEAN), EIF_TRUE);
				RT_SPECIAL_COUNT(tr1) = 0;
			}
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
			ti4_2 = (EIF_INTEGER_32) eif_builtin_SPECIAL_count (loc1);
			/* INLINED CODE (SPECIAL.copy_data) */
			memmove((EIF_BOOLEAN *)RTCW(tr1) + (((EIF_INTEGER_32) 0L)),(EIF_BOOLEAN *)loc1 + ((EIF_INTEGER_32) 0L), (rt_uint_ptr)sizeof(EIF_BOOLEAN) * (rt_uint_ptr)ti4_2);
			RT_SPECIAL_COUNT(tr1) = eif_max_int32(RT_SPECIAL_COUNT(tr1), ((EIF_INTEGER_32) 0L) + ti4_2);
			/* END INLINED CODE */
			;
		}
		tr2 = RTOUCR(2,F948_3857, (Current));
		tr3 = RTMS_EX_H("count",5,1870727284);
		tr2 = F999_3929(RTCW(tr2), tr3);
		tr1 = RTCCL(tr2);
		RTOB(*(EIF_INTEGER_32 *), eif_new_type(1508, 0x00), tr1, loc11, tb1);
		if (tb1) {
			loc4 = (EIF_INTEGER_32) loc11;
		}
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current) == NULL) || (EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) == NULL)) || (EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_3_) == NULL))) {
			F948_3856(Current);
		} else {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			loc3 = (EIF_INTEGER_32) eif_builtin_SPECIAL_count (tr1);
			loc5 = F1004_3982(Current, loc4);
			for (;;) {
				if ((EIF_BOOLEAN)(loc2 == loc3)) break;
				tb1 = '\0';
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
				/* INLINED CODE (SPECIAL.item) */
				tp2 = *((EIF_POINTER *)RTCW(tr1) + (loc2));
				/* END INLINED CODE */
				tp1 = tp2;
				loc12 = tp1;
				if ((EIF_TRUE)) {
					tb1 = (EIF_BOOLEAN)(loc12 != loc7);
				}
				if (tb1) {
					tr1 = *(EIF_REFERENCE *)(Current);
					/* INLINED CODE (SPECIAL.item) */
					tu4_2 = *((EIF_NATURAL_32 *)RTCW(tr1) + (loc2));
					/* END INLINED CODE */
					tu4_1 = tu4_2;
					F1004_3970(RTCW(loc5), tu4_1, loc12);
				}
				loc2++;
			}
			tb1 = '\0';
			tr2 = RTOUCR(2,F948_3857, (Current));
			tr3 = RTMS_EX_H("has_default",11,1777575796);
			tr2 = F999_3929(RTCW(tr2), tr3);
			tr1 = RTCCL(tr2);
			RTOB(*(EIF_BOOLEAN *), eif_new_type(1493, 0x00), tr1, loc13, tb2);
			if (tb2) {
				tb1 = loc13;
			}
			if (tb1) {
				tr1 = *(EIF_REFERENCE *)(Current);
				tr2 = *(EIF_REFERENCE *)(Current);
				ti4_2 = (EIF_INTEGER_32) eif_builtin_SPECIAL_capacity (tr2);
				/* INLINED CODE (SPECIAL.item) */
				tu4_2 = *((EIF_NATURAL_32 *)RTCW(tr1) + ((EIF_INTEGER_32) (ti4_2 - ((EIF_INTEGER_32) 1L))));
				/* END INLINED CODE */
				tu4_1 = tu4_2;
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
				/* INLINED CODE (SPECIAL.item) */
				tp2 = *((EIF_POINTER *)RTCW(tr1) + ((EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L))));
				/* END INLINED CODE */
				tp1 = tp2;
				F1004_3970(RTCW(loc5), tu4_1, tp1);
			}
			tr1 = *(EIF_REFERENCE *)(RTCW(loc5));
			F1004_4006(Current, tr1);
			tr1 = *(EIF_REFERENCE *)(RTCW(loc5) + _REFACS_1_);
			F1004_4008(Current, tr1);
			tr1 = *(EIF_REFERENCE *)(RTCW(loc5) + _REFACS_3_);
			F1004_4009(Current, tr1);
			tr1 = *(EIF_REFERENCE *)(RTCW(loc5) + _REFACS_2_);
			F1004_4010(Current, tr1);
			ti4_2 = *(EIF_INTEGER_32 *)(RTCW(loc5)+ _LNGOFF_4_3_0_2_);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_2_) = (EIF_INTEGER_32) ti4_2;
			ti4_2 = *(EIF_INTEGER_32 *)(RTCW(loc5)+ _LNGOFF_4_3_0_4_);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_4_) = (EIF_INTEGER_32) ti4_2;
			ti4_2 = *(EIF_INTEGER_32 *)(RTCW(loc5)+ _LNGOFF_4_3_0_6_);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_6_) = (EIF_INTEGER_32) ti4_2;
			ti4_2 = *(EIF_INTEGER_32 *)(RTCW(loc5)+ _LNGOFF_4_3_0_3_);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_3_) = (EIF_INTEGER_32) ti4_2;
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_7_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2147483645L);
			*(EIF_NATURAL_32 *)(Current+ _LNGOFF_4_3_0_1_) = (EIF_NATURAL_32) loc6;
			*(EIF_POINTER *)(Current+ _PTROFF_4_3_0_9_0_0_) = (EIF_POINTER) loc7;
		}
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_5_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	}
	RTLE;
}

/* {HASH_TABLE}.position */
EIF_INTEGER_32 F1004_3992 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	/* INLINED CODE (SPECIAL.item) */
	ti4_3 = *((EIF_INTEGER_32 *)RTCW(tr1) + (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_3_)));
	/* END INLINED CODE */
	Result = ti4_3;
	RTLE;
	return Result;
}

/* {HASH_TABLE}.soon_full */
EIF_BOOLEAN F1004_3993 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	ti4_1 = (EIF_INTEGER_32) eif_builtin_SPECIAL_count (tr1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	ti4_2 = (EIF_INTEGER_32) eif_builtin_SPECIAL_capacity (tr1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
	RTLE;
	return Result;
}

/* {HASH_TABLE}.ht_deleted_item */
EIF_NATURAL_32 F1004_4000 (EIF_REFERENCE Current)
{
	return *(EIF_NATURAL_32 *)(Current+ _LNGOFF_4_3_0_1_);
}


/* {HASH_TABLE}.ht_deleted_key */
EIF_POINTER F1004_4001 (EIF_REFERENCE Current)
{
	return *(EIF_POINTER *)(Current+ _PTROFF_4_3_0_9_0_0_);
}


/* {HASH_TABLE}.deleted_position */
EIF_INTEGER_32 F1004_4002 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	/* INLINED CODE (SPECIAL.item) */
	ti4_2 = *((EIF_INTEGER_32 *)RTCW(tr1) + (arg1));
	/* END INLINED CODE */
	Result = ti4_2;
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) -Result + ((EIF_INTEGER_32) -2L));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	ti4_1 = (EIF_INTEGER_32) eif_builtin_SPECIAL_count (tr1);
	ti4_1 = eif_min_int32 (Result,ti4_1);
	Result = (EIF_INTEGER_32) ti4_1;
	RTLE;
	return Result;
}

/* {HASH_TABLE}.occupied */
EIF_BOOLEAN F1004_4003 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_4_2_)) {
		Result = '\0';
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		/* INLINED CODE (SPECIAL.item) */
		ti4_3 = *((EIF_INTEGER_32 *)RTCW(tr1) + (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_2_)));
		/* END INLINED CODE */
		ti4_1 = ti4_3;
		if ((EIF_BOOLEAN)(arg1 != ti4_1)) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
			/* INLINED CODE (SPECIAL.item) */
			tb2 = *((EIF_BOOLEAN *)RTCW(tr1) + (arg1));
			/* END INLINED CODE */
			tb1 = tb2;
			Result = (EIF_BOOLEAN) !tb1;
		}
	} else {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
		/* INLINED CODE (SPECIAL.item) */
		tb2 = *((EIF_BOOLEAN *)RTCW(tr1) + (arg1));
		/* END INLINED CODE */
		Result = tb2;
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) !Result;
	}
	RTLE;
	return Result;
}

/* {HASH_TABLE}.truly_occupied */
EIF_BOOLEAN F1004_4004 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tb1 = '\0';
	if ((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L))) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		ti4_1 = (EIF_INTEGER_32) eif_builtin_SPECIAL_count (tr1);
		tb1 = (EIF_BOOLEAN) (arg1 < ti4_1);
	}
	if (tb1) {
		Result = '\01';
		tb1 = '\0';
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_4_2_)) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
			/* INLINED CODE (SPECIAL.item) */
			ti4_3 = *((EIF_INTEGER_32 *)RTCW(tr1) + (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_2_)));
			/* END INLINED CODE */
			ti4_1 = ti4_3;
			tb1 = (EIF_BOOLEAN)(arg1 == ti4_1);
		}
		if (!(tb1)) {
			Result = F1004_4003(Current, arg1);
		}
	}
	RTLE;
	return Result;
}

/* {HASH_TABLE}.is_off_position */
EIF_BOOLEAN F1004_4005 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	Result = '\01';
	if (!(EIF_BOOLEAN) (arg1 < ((EIF_INTEGER_32) 0L))) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		ti4_1 = (EIF_INTEGER_32) eif_builtin_SPECIAL_count (tr1);
		Result = (EIF_BOOLEAN) (arg1 >= ti4_1);
	}
	RTLE;
	return Result;
}

/* {HASH_TABLE}.set_content */
void F1004_4006 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
}

/* {HASH_TABLE}.set_keys */
void F1004_4008 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) arg1;
}

/* {HASH_TABLE}.set_deleted_marks */
void F1004_4009 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) arg1;
}

/* {HASH_TABLE}.set_indexes_map */
void F1004_4010 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) arg1;
}

/* {HASH_TABLE}.internal_search */
void F1004_4014 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_POINTER loc12 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc9);
	RTLR(2,loc10);
	RTLR(3,loc11);
	RTLIU(4);
	
	RTGC;
	loc7 = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(arg1 == loc1) || EIF_FALSE)) {
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_3_) = (EIF_INTEGER_32) *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_2_);
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_4_2_)) {
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_5_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
		} else {
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_5_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 8L);
		}
	} else {
		loc9 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		loc10 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		loc11 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
		loc6 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_2_);
		loc8 = (EIF_INTEGER_32) loc6;
		loc2 = F1004_3940(Current, arg1);
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (((EIF_INTEGER_32) 1L) + (EIF_INTEGER_32) (loc2 % (EIF_INTEGER_32) (loc6 - ((EIF_INTEGER_32) 1L))));
		loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc2 % loc6) - loc3);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_5_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 8L);
		for (;;) {
			if ((EIF_BOOLEAN)(loc8 == ((EIF_INTEGER_32) 0L))) break;
			loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc5 + loc3) % loc6);
			/* INLINED CODE (SPECIAL.item) */
			ti4_2 = *((EIF_INTEGER_32 *)RTCW(loc10) + (loc5));
			/* END INLINED CODE */
			loc4 = ti4_2;
			if ((EIF_BOOLEAN) (loc4 >= ((EIF_INTEGER_32) 0L))) {
				/* INLINED CODE (SPECIAL.item) */
				tp2 = *((EIF_POINTER *)RTCW(loc9) + (loc4));
				/* END INLINED CODE */
				loc12 = tp2;
				if (F1004_3947(Current, loc12, arg1)) {
					loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
					*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_5_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
				}
			} else {
				if ((EIF_BOOLEAN)(loc4 == ((EIF_INTEGER_32) -1L))) {
					loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				} else {
					if ((EIF_BOOLEAN)(loc7 == ((EIF_INTEGER_32) -1L))) {
						loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) -loc4 + ((EIF_INTEGER_32) -2L));
						/* INLINED CODE (SPECIAL.item) */
						tb2 = *((EIF_BOOLEAN *)RTCW(loc11) + (loc4));
						/* END INLINED CODE */
						tb1 = tb2;
						if ((EIF_BOOLEAN) !tb1) {
							loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
						} else {
							loc7 = (EIF_INTEGER_32) loc5;
						}
					}
				}
			}
			loc8--;
		}
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_3_) = (EIF_INTEGER_32) loc5;
	}
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_6_) = (EIF_INTEGER_32) loc7;
	RTLE;
}

/* {HASH_TABLE}.search_for_insertion */
void F1004_4015 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc9);
	RTLR(2,loc10);
	RTLIU(3);
	
	RTGC;
	loc7 = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(arg1 == loc1) || EIF_FALSE)) {
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_3_) = (EIF_INTEGER_32) *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_2_);
	} else {
		loc9 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		loc10 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
		loc6 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_2_);
		loc8 = (EIF_INTEGER_32) loc6;
		loc2 = F1004_3940(Current, arg1);
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (((EIF_INTEGER_32) 1L) + (EIF_INTEGER_32) (loc2 % (EIF_INTEGER_32) (loc6 - ((EIF_INTEGER_32) 1L))));
		loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc2 % loc6) - loc3);
		for (;;) {
			if ((EIF_BOOLEAN)(loc8 == ((EIF_INTEGER_32) 0L))) break;
			loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc5 + loc3) % loc6);
			/* INLINED CODE (SPECIAL.item) */
			ti4_2 = *((EIF_INTEGER_32 *)RTCW(loc9) + (loc5));
			/* END INLINED CODE */
			loc4 = ti4_2;
			if ((EIF_BOOLEAN) (loc4 >= ((EIF_INTEGER_32) 0L))) {
			} else {
				if ((EIF_BOOLEAN)(loc4 == ((EIF_INTEGER_32) -1L))) {
					loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				} else {
					if ((EIF_BOOLEAN)(loc7 == ((EIF_INTEGER_32) -1L))) {
						loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) -loc4 + ((EIF_INTEGER_32) -2L));
						/* INLINED CODE (SPECIAL.item) */
						tb2 = *((EIF_BOOLEAN *)RTCW(loc10) + (loc4));
						/* END INLINED CODE */
						tb1 = tb2;
						if ((EIF_BOOLEAN) !tb1) {
							loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
						} else {
							loc7 = (EIF_INTEGER_32) loc5;
						}
					}
				}
			}
			loc8--;
		}
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_3_) = (EIF_INTEGER_32) loc5;
	}
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_6_) = (EIF_INTEGER_32) loc7;
	RTLE;
}

/* {HASH_TABLE}.set_conflict */
void F1004_4020 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_5_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
}

/* {HASH_TABLE}.add_space */
void F1004_4033 (EIF_REFERENCE Current)
{
	GTCX
	
	
	F1004_3926(Current, (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_8_) + (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_8_) / ((EIF_INTEGER_32) 2L))));
}

/* {HASH_TABLE}.collection_extend */
void F1004_4035 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
{
	GTCX
	
	
	RTGC;
}

void EIF_Minit887 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
