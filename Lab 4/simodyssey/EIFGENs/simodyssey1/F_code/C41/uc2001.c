/*
 * Code for class UC_STRING
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "uc2001.h"
#include "eif_copy.h"
#include "eif_helpers.h"
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

/* {UC_STRING}.make */
void F2018_25607 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F2018_25717(Current);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 0L))) {
		F1559_6605(Current, ((EIF_INTEGER_32) 1L));
	} else {
		F1559_6605(Current, arg1);
	}
	ti4_1 = F2018_25640(Current);
	F2018_25725(Current, ti4_1);
	ti4_1 = F2018_25640(Current);
	F1561_6779(Current, ti4_1);
	F2018_25725(Current, ((EIF_INTEGER_32) 0L));
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTLE;
}

/* {UC_STRING}.make_from_string */
void F2018_25608 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	F2018_25610(Current, arg1);
}

/* {UC_STRING}.make_empty */
void F2018_25609 (EIF_REFERENCE Current)
{
	GTCX
	
	
	F2018_25607(Current, ((EIF_INTEGER_32) 0L));
}

/* {UC_STRING}.make_from_string_general */
void F2018_25610 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc2);
	RTLR(1,arg1);
	RTLR(2,loc1);
	RTLR(3,Current);
	RTLR(4,tr1);
	RTLIU(5);
	
	RTGC;
	loc2 = arg1;
	loc2 = RTRV(eif_new_type(2017, 0x01),loc2);
	if (EIF_TEST(loc2)) {
		loc1 = (EIF_REFERENCE) loc2;
		tr1 = *(EIF_REFERENCE *)(RTCW(loc1));
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
		if ((EIF_BOOLEAN)(arg1 != Current)) {
			loc1 = (EIF_REFERENCE) NULL;
		}
	}
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		tr1 = *(EIF_REFERENCE *)(RTCW(loc1));
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	} else {
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4681[Dtype(RTCW(arg1))-1560])(arg1);
		F2018_25612(Current, arg1, ((EIF_INTEGER_32) 1L), ti4_1);
	}
	RTLE;
}

/* {UC_STRING}.make_from_substring */
void F2018_25611 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	
	
	F2018_25612(Current, arg1, arg2, arg3);
}

/* {UC_STRING}.make_from_substring_general */
void F2018_25612 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc4);
	RTLR(1,arg1);
	RTLR(2,loc3);
	RTLR(3,Current);
	RTLR(4,tr1);
	RTLR(5,loc2);
	RTLIU(6);
	
	RTGC;
	loc4 = arg1;
	loc4 = RTRV(eif_new_type(2017, 0x01),loc4);
	if (EIF_TEST(loc4)) {
		loc3 = (EIF_REFERENCE) loc4;
		tr1 = *(EIF_REFERENCE *)(RTCW(loc3));
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
		if ((EIF_BOOLEAN)(arg1 != Current)) {
			loc3 = (EIF_REFERENCE) NULL;
		}
	}
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc3 != NULL) && (EIF_BOOLEAN)(arg2 == ((EIF_INTEGER_32) 1L))) && (EIF_BOOLEAN)(arg3 == *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_)))) {
		tr1 = *(EIF_REFERENCE *)(RTCW(loc3));
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	} else {
		if ((EIF_BOOLEAN) (arg3 < arg2)) {
			F2018_25607(Current, ((EIF_INTEGER_32) 0L));
		} else {
			if ((EIF_BOOLEAN)(loc3 != NULL)) {
				loc2 = F2018_25692(RTCW(loc3));
			} else {
				loc2 = (EIF_REFERENCE) arg1;
			}
			tr1 = RTOUCR(428,F169_10556, (Current));
			loc1 = F1262_14820(RTCW(tr1), loc2, arg2, arg3);
			F2018_25607(Current, loc1);
			F2018_25725(Current, (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg3 - arg2) + ((EIF_INTEGER_32) 1L)));
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_) = (EIF_INTEGER_32) loc1;
			F2018_25728(Current, loc2, arg2, arg3, loc1, ((EIF_INTEGER_32) 1L));
		}
	}
	RTLE;
}

/* {UC_STRING}.make_filled */
void F2018_25615 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = RTOUCR(428,F169_10556, (Current));
	loc2 = F1262_14822(RTCW(tr1), arg1);
	loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 * arg2);
	F2018_25607(Current, loc3);
	F2018_25725(Current, arg2);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_) = (EIF_INTEGER_32) loc3;
	if ((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 1L))) {
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			if ((EIF_BOOLEAN) (loc1 > loc3)) break;
			F2018_25720(Current, arg1, loc1);
			loc1++;
		}
	} else {
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			if ((EIF_BOOLEAN) (loc1 > loc3)) break;
			F2018_25727(Current, arg1, loc2, loc1);
			loc1 += loc2;
		}
	}
	RTLE;
}

/* {UC_STRING}.item_code */
EIF_INTEGER_32 F2018_25621 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 tc1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_))) {
		tc1 = F2018_25719(Current, arg1);
		Result = (EIF_INTEGER_32) (tc1);
	} else {
		loc1 = F2018_25713(Current, arg1);
		Result = F2018_25709(Current, loc1);
		RTLE;
		return (EIF_INTEGER_32) Result;
	}
	RTLE;
	return Result;
}

/* {UC_STRING}.item */
EIF_CHARACTER_8 F2018_25622 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_))) {
		RTLE;
		return (EIF_CHARACTER_8) F2018_25719(Current, arg1);
	} else {
		loc1 = F2018_25713(Current, arg1);
		RTLE;
		return (EIF_CHARACTER_8) F2018_25710(Current, loc1);
	}/* NOTREACHED */
	
}

/* {UC_STRING}.at */
EIF_CHARACTER_8 F2018_25623 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	return (EIF_CHARACTER_8) F2018_25622(Current, arg1);
}

/* {UC_STRING}.substring */
EIF_REFERENCE F2018_25624 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
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
	if ((EIF_BOOLEAN) (arg2 < arg1)) {
		tr1 = RTLNSMART(dftype);
		F2018_25607(RTCW(tr1), ((EIF_INTEGER_32) 0L));
		RTLE;
		return (EIF_REFERENCE) tr1;
	} else {
		tr1 = RTLNSMART(dftype);
		F2018_25611(RTCW(tr1), Current, arg1, arg2);
		RTLE;
		return (EIF_REFERENCE) tr1;
	}/* NOTREACHED */
	
}

/* {UC_STRING}.unicode_substring_index */
EIF_INTEGER_32 F2018_25625 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
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
	EIF_BOOLEAN loc9 = (EIF_BOOLEAN) 0;
	EIF_INTEGER_32 loc10 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_32 tu4_1;
	EIF_CHARACTER_8 tc1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc11);
	RTLR(3,loc12);
	RTLIU(4);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 == Current)) {
		if ((EIF_BOOLEAN)(arg2 == ((EIF_INTEGER_32) 1L))) {
			RTLE;
			return (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		}
	} else {
		loc10 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4681[Dtype(RTCW(arg1))-1560])(arg1);
		if ((EIF_BOOLEAN)(loc10 == ((EIF_INTEGER_32) 0L))) {
			RTLE;
			return (EIF_INTEGER_32) arg2;
		} else {
			loc8 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
			loc8 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc8 - loc10) + ((EIF_INTEGER_32) 1L));
			if ((EIF_BOOLEAN) (arg2 <= loc8)) {
				if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_))) {
					loc11 = arg1;
					loc11 = RTRV(eif_new_type(2017, 0x01),loc11);
					if (EIF_TEST(loc11)) {
						loc3 = *(EIF_INTEGER_32 *)(loc11+ _LNGOFF_1_1_0_3_);
						loc6 = (EIF_INTEGER_32) arg2;
						for (;;) {
							if ((EIF_BOOLEAN) (loc6 > loc8)) break;
							loc2 = (EIF_INTEGER_32) loc6;
							loc9 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
							loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
							for (;;) {
								if ((EIF_BOOLEAN) (loc1 > loc3)) break;
								loc4 = F2018_25709(loc11, loc1);
								tc1 = F2018_25719(Current, loc2);
								ti4_1 = (EIF_INTEGER_32) (tc1);
								if ((EIF_BOOLEAN)(ti4_1 != loc4)) {
									loc9 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
									loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
								} else {
									loc2++;
									ti4_1 = F2018_25711(loc11, loc1);
									loc1 = (EIF_INTEGER_32) ti4_1;
								}
							}
							if (loc9) {
								Result = (EIF_INTEGER_32) loc6;
								loc6 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc8 + ((EIF_INTEGER_32) 1L));
							} else {
								loc6++;
							}
						}
					} else {
						loc3 = (EIF_INTEGER_32) loc10;
						loc6 = (EIF_INTEGER_32) arg2;
						for (;;) {
							if ((EIF_BOOLEAN) (loc6 > loc8)) break;
							loc2 = (EIF_INTEGER_32) loc6;
							loc9 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
							loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
							for (;;) {
								if ((EIF_BOOLEAN) (loc1 > loc3)) break;
								tc1 = F2018_25719(Current, loc2);
								ti4_1 = (EIF_INTEGER_32) (tc1);
								tu4_1 = (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4644[Dtype(RTCW(arg1))-1560])(arg1, loc1);
								ti4_2 = (EIF_INTEGER_32) tu4_1;
								if ((EIF_BOOLEAN)(ti4_1 != ti4_2)) {
									loc9 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
									loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
								} else {
									loc2++;
									loc1++;
								}
							}
							if (loc9) {
								Result = (EIF_INTEGER_32) loc6;
								loc6 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc8 + ((EIF_INTEGER_32) 1L));
							} else {
								loc6++;
							}
						}
					}
				} else {
					loc7 = F2018_25713(Current, arg2);
					loc12 = arg1;
					loc12 = RTRV(eif_new_type(2017, 0x01),loc12);
					if (EIF_TEST(loc12)) {
						loc3 = *(EIF_INTEGER_32 *)(loc12+ _LNGOFF_1_1_0_3_);
						loc6 = (EIF_INTEGER_32) arg2;
						for (;;) {
							if ((EIF_BOOLEAN) (loc6 > loc8)) break;
							loc2 = (EIF_INTEGER_32) loc7;
							loc9 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
							loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
							for (;;) {
								if ((EIF_BOOLEAN) (loc1 > loc3)) break;
								loc4 = F2018_25709(Current, loc2);
								loc5 = F2018_25709(loc12, loc1);
								if ((EIF_BOOLEAN)(loc4 != loc5)) {
									loc9 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
									loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
								} else {
									ti4_1 = F2018_25711(Current, loc2);
									loc2 = (EIF_INTEGER_32) ti4_1;
									ti4_1 = F2018_25711(loc12, loc1);
									loc1 = (EIF_INTEGER_32) ti4_1;
								}
							}
							if (loc9) {
								Result = (EIF_INTEGER_32) loc6;
								loc6 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc8 + ((EIF_INTEGER_32) 1L));
							} else {
								ti4_1 = F2018_25711(Current, loc7);
								loc7 = (EIF_INTEGER_32) ti4_1;
								loc6++;
							}
						}
					} else {
						loc3 = (EIF_INTEGER_32) loc10;
						loc6 = (EIF_INTEGER_32) arg2;
						for (;;) {
							if ((EIF_BOOLEAN) (loc6 > loc8)) break;
							loc2 = (EIF_INTEGER_32) loc7;
							loc9 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
							loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
							for (;;) {
								if ((EIF_BOOLEAN) (loc1 > loc3)) break;
								loc4 = F2018_25709(Current, loc2);
								tu4_1 = (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4644[Dtype(RTCW(arg1))-1560])(arg1, loc1);
								ti4_1 = (EIF_INTEGER_32) tu4_1;
								if ((EIF_BOOLEAN)(loc4 != ti4_1)) {
									loc9 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
									loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
								} else {
									ti4_1 = F2018_25711(Current, loc2);
									loc2 = (EIF_INTEGER_32) ti4_1;
									loc1++;
								}
							}
							if (loc9) {
								Result = (EIF_INTEGER_32) loc6;
								loc6 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc8 + ((EIF_INTEGER_32) 1L));
							} else {
								ti4_1 = F2018_25711(Current, loc7);
								loc7 = (EIF_INTEGER_32) ti4_1;
								loc6++;
							}
						}
					}
				}
			}
		}
	}
	RTLE;
	return Result;
}

/* {UC_STRING}.substring_index */
EIF_INTEGER_32 F2018_25626 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
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
	EIF_BOOLEAN loc9 = (EIF_BOOLEAN) 0;
	EIF_INTEGER_32 loc10 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_8 tc1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc11);
	RTLR(3,loc12);
	RTLIU(4);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 == Current)) {
		if ((EIF_BOOLEAN)(arg2 == ((EIF_INTEGER_32) 1L))) {
			RTLE;
			return (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		}
	} else {
		loc10 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
		if ((EIF_BOOLEAN)(loc10 == ((EIF_INTEGER_32) 0L))) {
			RTLE;
			return (EIF_INTEGER_32) arg2;
		} else {
			loc8 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
			loc8 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc8 - loc10) + ((EIF_INTEGER_32) 1L));
			if ((EIF_BOOLEAN) (arg2 <= loc8)) {
				if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_))) {
					loc11 = arg1;
					loc11 = RTRV(eif_new_type(2017, 0x01),loc11);
					if (EIF_TEST(loc11)) {
						loc3 = *(EIF_INTEGER_32 *)(loc11+ _LNGOFF_1_1_0_3_);
						loc6 = (EIF_INTEGER_32) arg2;
						for (;;) {
							if ((EIF_BOOLEAN) (loc6 > loc8)) break;
							loc2 = (EIF_INTEGER_32) loc6;
							loc9 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
							loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
							for (;;) {
								if ((EIF_BOOLEAN) (loc1 > loc3)) break;
								loc4 = F2018_25709(loc11, loc1);
								ti4_1 = RTOUCB(EIF_INTEGER_32,314,F478_13929, (RTCV(RTOUCR(245,F237_11555, (Current)))));
								if ((EIF_BOOLEAN) (loc4 > ti4_1)) {
									loc4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
								}
								tc1 = F2018_25719(Current, loc2);
								ti4_1 = (EIF_INTEGER_32) (tc1);
								if ((EIF_BOOLEAN)(ti4_1 != loc4)) {
									loc9 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
									loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
								} else {
									loc2++;
									ti4_1 = F2018_25711(loc11, loc1);
									loc1 = (EIF_INTEGER_32) ti4_1;
								}
							}
							if (loc9) {
								Result = (EIF_INTEGER_32) loc6;
								loc6 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc8 + ((EIF_INTEGER_32) 1L));
							} else {
								loc6++;
							}
						}
					} else {
						loc3 = (EIF_INTEGER_32) loc10;
						loc6 = (EIF_INTEGER_32) arg2;
						for (;;) {
							if ((EIF_BOOLEAN) (loc6 > loc8)) break;
							loc2 = (EIF_INTEGER_32) loc6;
							loc9 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
							loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
							for (;;) {
								if ((EIF_BOOLEAN) (loc1 > loc3)) break;
								tc1 = (eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2556[Dtype(RTCW(arg1))-849])(arg1, loc1));
								if ((EIF_BOOLEAN)(F2018_25719(Current, loc2) != tc1)) {
									loc9 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
									loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
								} else {
									loc2++;
									loc1++;
								}
							}
							if (loc9) {
								Result = (EIF_INTEGER_32) loc6;
								loc6 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc8 + ((EIF_INTEGER_32) 1L));
							} else {
								loc6++;
							}
						}
					}
				} else {
					loc7 = F2018_25713(Current, arg2);
					loc12 = arg1;
					loc12 = RTRV(eif_new_type(2017, 0x01),loc12);
					if (EIF_TEST(loc12)) {
						loc3 = *(EIF_INTEGER_32 *)(loc12+ _LNGOFF_1_1_0_3_);
						loc6 = (EIF_INTEGER_32) arg2;
						for (;;) {
							if ((EIF_BOOLEAN) (loc6 > loc8)) break;
							loc2 = (EIF_INTEGER_32) loc7;
							loc9 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
							loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
							for (;;) {
								if ((EIF_BOOLEAN) (loc1 > loc3)) break;
								loc4 = F2018_25709(Current, loc2);
								ti4_1 = RTOUCB(EIF_INTEGER_32,314,F478_13929, (RTCV(RTOUCR(245,F237_11555, (Current)))));
								if ((EIF_BOOLEAN) (loc4 > ti4_1)) {
									loc4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
								}
								loc5 = F2018_25709(loc12, loc1);
								ti4_1 = RTOUCB(EIF_INTEGER_32,314,F478_13929, (RTCV(RTOUCR(245,F237_11555, (Current)))));
								if ((EIF_BOOLEAN) (loc5 > ti4_1)) {
									loc5 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
								}
								if ((EIF_BOOLEAN)(loc4 != loc5)) {
									loc9 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
									loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
								} else {
									ti4_1 = F2018_25711(Current, loc2);
									loc2 = (EIF_INTEGER_32) ti4_1;
									ti4_1 = F2018_25711(loc12, loc1);
									loc1 = (EIF_INTEGER_32) ti4_1;
								}
							}
							if (loc9) {
								Result = (EIF_INTEGER_32) loc6;
								loc6 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc8 + ((EIF_INTEGER_32) 1L));
							} else {
								ti4_1 = F2018_25711(Current, loc7);
								loc7 = (EIF_INTEGER_32) ti4_1;
								loc6++;
							}
						}
					} else {
						loc3 = (EIF_INTEGER_32) loc10;
						loc6 = (EIF_INTEGER_32) arg2;
						for (;;) {
							if ((EIF_BOOLEAN) (loc6 > loc8)) break;
							loc2 = (EIF_INTEGER_32) loc7;
							loc9 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
							loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
							for (;;) {
								if ((EIF_BOOLEAN) (loc1 > loc3)) break;
								loc4 = F2018_25709(Current, loc2);
								ti4_1 = RTOUCB(EIF_INTEGER_32,314,F478_13929, (RTCV(RTOUCR(245,F237_11555, (Current)))));
								if ((EIF_BOOLEAN) (loc4 > ti4_1)) {
									loc4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
								}
								tc1 = (eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2556[Dtype(RTCW(arg1))-849])(arg1, loc1));
								ti4_1 = (EIF_INTEGER_32) (tc1);
								if ((EIF_BOOLEAN)(loc4 != ti4_1)) {
									loc9 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
									loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
								} else {
									ti4_1 = F2018_25711(Current, loc2);
									loc2 = (EIF_INTEGER_32) ti4_1;
									loc1++;
								}
							}
							if (loc9) {
								Result = (EIF_INTEGER_32) loc6;
								loc6 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc8 + ((EIF_INTEGER_32) 1L));
							} else {
								ti4_1 = F2018_25711(Current, loc7);
								loc7 = (EIF_INTEGER_32) ti4_1;
								loc6++;
							}
						}
					}
				}
			}
		}
	}
	RTLE;
	return Result;
}

/* {UC_STRING}.string */
EIF_REFERENCE F2018_25627 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
	Result = RTLNS(eif_new_type(1560, 0x01).id, 1560, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F1559_6605(RTCW(Result), loc2);
	if ((EIF_BOOLEAN)(loc2 == *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_))) {
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			if ((EIF_BOOLEAN) (loc1 > loc2)) break;
			tc1 = F2018_25719(Current, loc1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R4825[Dtype(RTCW(Result))-1560])(Result, tc1);
			loc1++;
		}
	} else {
		loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_);
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			if ((EIF_BOOLEAN) (loc1 > loc2)) break;
			loc3 = F2018_25709(Current, loc1);
			ti4_1 = RTOUCB(EIF_INTEGER_32,314,F478_13929, (RTCV(RTOUCR(245,F237_11555, (Current)))));
			if ((EIF_BOOLEAN) (loc3 <= ti4_1)) {
				tr1 = RTOUCR(246,F1011_14519, (Current));
				tc1 = F1265_14896(RTCW(tr1), loc3);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R4825[Dtype(RTCW(Result))-1560])(Result, tc1);
			} else {
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R4825[Dtype(RTCW(Result))-1560])(Result, (EIF_CHARACTER_8) '\000');
			}
			ti4_1 = F2018_25711(Current, loc1);
			loc1 = (EIF_INTEGER_32) ti4_1;
		}
	}
	RTLE;
	return Result;
}

/* {UC_STRING}.plus */
EIF_REFERENCE F2018_25628 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,Result);
	RTLIU(4);
	
	RTGC;
	Result = RTLNSMART(Dftype(Current));
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_);
	tr1 = RTOUCR(428,F169_10556, (Current));
	ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O4768[Dtype(arg1)-1558]);
	ti4_2 = F1262_14820(RTCW(tr1), arg1, ((EIF_INTEGER_32) 1L), ti4_2);
	F2018_25607(RTCW(Result), (EIF_INTEGER_32) (ti4_1 + ti4_2));
	F2018_25664(RTCW(Result), Current);
	F2018_25664(RTCW(Result), arg1);
	RTLE;
	return Result;
}

/* {UC_STRING}.index_of_item_code */
EIF_INTEGER_32 F2018_25631 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_8 tc1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	loc3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
	if ((EIF_BOOLEAN)(loc3 == *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_))) {
		if ((EIF_BOOLEAN) (arg1 > ((EIF_INTEGER_32) 127L))) {
			RTLE;
			return (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		} else {
			loc1 = (EIF_INTEGER_32) arg2;
			for (;;) {
				if ((EIF_BOOLEAN) (loc1 > loc3)) break;
				tc1 = F2018_25719(Current, loc1);
				ti4_1 = (EIF_INTEGER_32) (tc1);
				if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
					Result = (EIF_INTEGER_32) loc1;
					loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
				} else {
					loc1++;
				}
			}
		}
	} else {
		if ((EIF_BOOLEAN) (arg2 <= loc3)) {
			loc2 = F2018_25713(Current, arg2);
			loc1 = (EIF_INTEGER_32) arg2;
			for (;;) {
				if ((EIF_BOOLEAN) (loc1 > loc3)) break;
				if ((EIF_BOOLEAN)(F2018_25709(Current, loc2) == arg1)) {
					Result = (EIF_INTEGER_32) loc1;
					loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
				} else {
					ti4_1 = F2018_25711(Current, loc2);
					loc2 = (EIF_INTEGER_32) ti4_1;
					loc1++;
				}
			}
		}
	}
	RTLE;
	return Result;
}

/* {UC_STRING}.index_of */
EIF_INTEGER_32 F2018_25632 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	loc3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
	if ((EIF_BOOLEAN)(loc3 == *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_))) {
		loc1 = (EIF_INTEGER_32) arg2;
		for (;;) {
			if ((EIF_BOOLEAN) (loc1 > loc3)) break;
			if ((EIF_BOOLEAN)(F2018_25719(Current, loc1) == arg1)) {
				Result = (EIF_INTEGER_32) loc1;
				loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
			} else {
				loc1++;
			}
		}
	} else {
		if ((EIF_BOOLEAN)(arg1 == (EIF_CHARACTER_8) '\000')) {
			if ((EIF_BOOLEAN) (arg2 <= loc3)) {
				loc4 = RTOUCB(EIF_INTEGER_32,314,F478_13929, (RTCV(RTOUCR(245,F237_11555, (Current)))));
				loc2 = F2018_25713(Current, arg2);
				loc1 = (EIF_INTEGER_32) arg2;
				for (;;) {
					if ((EIF_BOOLEAN) (loc1 > loc3)) break;
					loc5 = F2018_25709(Current, loc2);
					if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc5 == ((EIF_INTEGER_32) 0L)) || (EIF_BOOLEAN) (loc5 > loc4))) {
						Result = (EIF_INTEGER_32) loc1;
						loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
					} else {
						ti4_1 = F2018_25711(Current, loc2);
						loc2 = (EIF_INTEGER_32) ti4_1;
						loc1++;
					}
				}
			}
		} else {
			ti4_1 = (EIF_INTEGER_32) (arg1);
			Result = F2018_25631(Current, ti4_1, arg2);
		}
	}
	RTLE;
	return Result;
}

/* {UC_STRING}.hash_code */
EIF_INTEGER_32 F2018_25633 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc4 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
	if ((EIF_BOOLEAN)(loc2 == *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_))) {
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		Result = F1558_6519(Current);
	} else {
		loc4 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_);
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			if ((EIF_BOOLEAN) (loc1 > loc2)) break;
			loc3 = F2018_25709(Current, loc1);
			Result = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (((EIF_INTEGER_32) 5L) * Result) + loc3);
			ti4_1 = RTOUCB(EIF_INTEGER_32,314,F478_13929, (RTCV(RTOUCR(245,F237_11555, (Current)))));
			if ((EIF_BOOLEAN) (loc3 > ti4_1)) {
				loc4 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			}
			ti4_1 = F2018_25711(Current, loc1);
			loc1 = (EIF_INTEGER_32) ti4_1;
		}
		if (loc4) {
			tr1 = F2018_25627(Current);
			Result = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3816[Dtype(RTCW(tr1))-1420])(tr1);
		}
	}
	if ((EIF_BOOLEAN) (Result < ((EIF_INTEGER_32) 0L))) {
		Result = (EIF_INTEGER_32) (EIF_INTEGER_32) -(EIF_INTEGER_32) (Result + ((EIF_INTEGER_32) 1L));
	}
	RTLE;
	return Result;
}

/* {UC_STRING}.count */
EIF_INTEGER_32 F2018_25638 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
}


/* {UC_STRING}.byte_capacity */
EIF_INTEGER_32 F2018_25640 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) F1559_6625(Current);
}

/* {UC_STRING}.has_item_code */
EIF_BOOLEAN F2018_25642 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	ti4_1 = F2018_25631(Current, arg1, ((EIF_INTEGER_32) 1L));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L));
	RTLE;
	return Result;
}

/* {UC_STRING}.has */
EIF_BOOLEAN F2018_25643 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	ti4_1 = F2018_25632(Current, arg1, ((EIF_INTEGER_32) 1L));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L));
	RTLE;
	return Result;
}

/* {UC_STRING}.is_empty */
EIF_BOOLEAN F2018_25646 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L));
	return Result;
}

/* {UC_STRING}.is_equal */
EIF_BOOLEAN F2018_25648 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_CHARACTER_8 tc1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 == Current)) {
		RTLE;
		return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	} else {
		tb1 = '\0';
		tr1 = RTOUCR(218,F1261_14810, (Current));
		tb2 = F65_9687(RTCW(tr1), Current, arg1);
		if (tb2) {
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_3_);
			tb1 = (EIF_BOOLEAN)(ti4_1 == *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_));
		}
		if (tb1) {
			loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_);
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			for (;;) {
				if ((EIF_BOOLEAN) (loc1 > loc2)) break;
				tc1 = F2018_25719(RTCW(arg1), loc1);
				if ((EIF_BOOLEAN)(F2018_25719(Current, loc1) != tc1)) {
					Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
					loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
				} else {
					loc1++;
				}
			}
		}
	}
	RTLE;
	return Result;
}

/* {UC_STRING}.is_less */
EIF_BOOLEAN F2018_25649 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	ti4_1 = F2018_25653(Current, arg1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) -1L));
	RTLE;
	return Result;
}

/* {UC_STRING}.same_string */
EIF_BOOLEAN F2018_25650 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 == Current)) {
		RTLE;
		return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	} else {
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O4768[Dtype(arg1)-1558]);
		if ((EIF_BOOLEAN)(ti4_1 == *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_))) {
			tr1 = F1558_6566(RTCW(arg1));
			ti4_1 = F2018_25626(Current, tr1, ((EIF_INTEGER_32) 1L));
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L));
		}
	}
	RTLE;
	return Result;
}

/* {UC_STRING}.same_string_general */
EIF_BOOLEAN F2018_25651 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc3 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc4 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 == Current)) {
		RTLE;
		return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	} else {
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4681[Dtype(RTCW(arg1))-1560])(arg1);
		if ((EIF_BOOLEAN)(ti4_1 == *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_))) {
			loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			for (;;) {
				if ((EIF_BOOLEAN) (loc1 > loc2)) break;
				loc3 = F2018_25735(Current, loc1);
				ti4_1 = RTOUCB(EIF_INTEGER_32,314,F478_13929, (RTCV(RTOUCR(245,F237_11555, (Current)))));
				tu4_1 = (EIF_NATURAL_32) ti4_1;
				if ((EIF_BOOLEAN) (loc3 > tu4_1)) {
					loc3 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
				}
				loc4 = (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4644[Dtype(RTCW(arg1))-1560])(arg1, loc1);
				ti4_1 = RTOUCB(EIF_INTEGER_32,314,F478_13929, (RTCV(RTOUCR(245,F237_11555, (Current)))));
				tu4_1 = (EIF_NATURAL_32) ti4_1;
				if ((EIF_BOOLEAN) (loc4 > tu4_1)) {
					loc4 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
				}
				if ((EIF_BOOLEAN)(loc3 != loc4)) {
					Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
					loc1 = (EIF_INTEGER_32) loc2;
				}
				loc1++;
			}
		}
	}
	RTLE;
	return Result;
}

/* {UC_STRING}.same_unicode_string */
EIF_BOOLEAN F2018_25652 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 == Current)) {
		RTLE;
		return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	} else {
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4681[Dtype(RTCW(arg1))-1560])(arg1);
		if ((EIF_BOOLEAN)(ti4_1 == *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_))) {
			ti4_1 = F2018_25625(Current, arg1, ((EIF_INTEGER_32) 1L));
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L));
		}
	}
	RTLE;
	return Result;
}

/* {UC_STRING}.three_way_comparison */
EIF_INTEGER_32 F2018_25653 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 loc5 = (EIF_CHARACTER_8) 0;
	EIF_CHARACTER_8 loc6 = (EIF_CHARACTER_8) 0;
	EIF_BOOLEAN loc7 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	tb1 = '\0';
	if ((EIF_BOOLEAN)(arg1 != Current)) {
		tr1 = RTOUCR(218,F1261_14810, (Current));
		tb2 = F65_9687(RTCW(tr1), Current, arg1);
		tb1 = tb2;
	}
	if (tb1) {
		loc3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_);
		loc4 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_3_);
		if ((EIF_BOOLEAN) (loc3 < loc4)) {
			loc2 = (EIF_INTEGER_32) loc3;
		} else {
			loc2 = (EIF_INTEGER_32) loc4;
		}
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			if ((EIF_BOOLEAN) (loc1 > loc2)) break;
			loc5 = F2018_25719(Current, loc1);
			loc6 = F2018_25719(RTCW(arg1), loc1);
			if ((EIF_BOOLEAN)(loc5 == loc6)) {
				loc1++;
			} else {
				if ((EIF_BOOLEAN) (loc5 < loc6)) {
					loc7 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
					Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
					loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
				} else {
					loc7 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
					Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
					loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
				}
			}
		}
		if ((EIF_BOOLEAN) !loc7) {
			if ((EIF_BOOLEAN) (loc3 < loc4)) {
				RTLE;
				return (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
			} else {
				if ((EIF_BOOLEAN)(loc3 != loc4)) {
					RTLE;
					return (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				}
			}
		}
	}
	RTLE;
	return Result;
}

/* {UC_STRING}.put_item_code */
void F2018_25656 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 loc6 = (EIF_CHARACTER_8) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_))) {
		loc1 = (EIF_INTEGER_32) arg2;
		loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	} else {
		loc1 = F2018_25713(Current, arg2);
		loc6 = F2018_25719(Current, loc1);
		tr1 = RTOUCR(428,F169_10556, (Current));
		loc3 = F1262_14819(RTCW(tr1), loc6);
	}
	tr1 = RTOUCR(428,F169_10556, (Current));
	loc4 = F1262_14821(RTCW(tr1), arg1);
	if ((EIF_BOOLEAN)(loc4 == loc3)) {
	} else {
		if ((EIF_BOOLEAN) (loc4 < loc3)) {
			F2018_25723(Current, (EIF_INTEGER_32) (loc1 + loc3), (EIF_INTEGER_32) (loc3 - loc4));
		} else {
			loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc4 - loc3);
			loc5 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_);
			loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc5 + loc2);
			if ((EIF_BOOLEAN) (loc5 > F2018_25640(Current))) {
				F2018_25721(Current, loc5);
			}
			F2018_25722(Current, (EIF_INTEGER_32) (loc1 + loc3), loc2);
		}
	}
	F2018_25726(Current, arg1, loc4, loc1);
	RTLE;
}

/* {UC_STRING}.put */
void F2018_25657 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 loc3 = (EIF_CHARACTER_8) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_))) {
		loc1 = (EIF_INTEGER_32) arg2;
		loc4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	} else {
		loc1 = F2018_25713(Current, arg2);
		loc3 = F2018_25719(Current, loc1);
		tr1 = RTOUCR(428,F169_10556, (Current));
		loc4 = F1262_14819(RTCW(tr1), loc3);
	}
	tr1 = RTOUCR(428,F169_10556, (Current));
	loc5 = F1262_14822(RTCW(tr1), arg1);
	if ((EIF_BOOLEAN)(loc5 == loc4)) {
	} else {
		if ((EIF_BOOLEAN) (loc5 < loc4)) {
			F2018_25723(Current, (EIF_INTEGER_32) (loc1 + loc4), (EIF_INTEGER_32) (loc4 - loc5));
		} else {
			loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc5 - loc4);
			loc6 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_);
			loc6 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc6 + loc2);
			if ((EIF_BOOLEAN) (loc6 > F2018_25640(Current))) {
				F2018_25721(Current, loc6);
			}
			F2018_25722(Current, (EIF_INTEGER_32) (loc1 + loc4), loc2);
		}
	}
	F2018_25727(Current, arg1, loc5, loc1);
	RTLE;
}

/* {UC_STRING}.prepend */
void F2018_25658 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	F2018_25680(Current, arg1, ((EIF_INTEGER_32) 1L));
}

/* {UC_STRING}.append_string_general */
void F2018_25660 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	loc1 = RTRV(eif_new_type(1560, 0x01),loc1);
	if (EIF_TEST(loc1)) {
		F2018_25666(Current, loc1);
	} else {
		F1561_6730(Current, arg1);
	}
	RTLE;
}

/* {UC_STRING}.append_item_code */
void F2018_25662 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = RTOUCR(428,F169_10556, (Current));
	loc2 = F1262_14821(RTCW(tr1), arg1);
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_);
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L));
	loc3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_);
	loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 + loc2);
	if ((EIF_BOOLEAN) (loc3 > F2018_25640(Current))) {
		F2018_25721(Current, loc3);
	}
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_) = (EIF_INTEGER_32) loc3;
	F2018_25725(Current, (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) + ((EIF_INTEGER_32) 1L)));
	F2018_25726(Current, arg1, loc2, loc1);
	RTLE;
}

/* {UC_STRING}.append_character */
void F2018_25663 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	if ((EIF_BOOLEAN) (arg1 <= (EIF_CHARACTER_8) '')) {
		loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	} else {
		tr1 = RTOUCR(428,F169_10556, (Current));
		loc2 = F1262_14822(RTCW(tr1), arg1);
	}
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_);
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L));
	loc3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_);
	loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 + loc2);
	if ((EIF_BOOLEAN) (loc3 > F2018_25640(Current))) {
		F2018_25721(Current, loc3);
	}
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_) = (EIF_INTEGER_32) loc3;
	if ((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 1L))) {
		loc4 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc4 + ((EIF_INTEGER_32) 1L));
		F2018_25725(Current, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_));
		F1561_6718(Current, arg1, loc1);
		F2018_25725(Current, loc4);
	} else {
		F2018_25725(Current, (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) + ((EIF_INTEGER_32) 1L)));
		F2018_25727(Current, arg1, loc2, loc1);
	}
	RTLE;
}

/* {UC_STRING}.append_string */
void F2018_25664 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		F2018_25666(Current, arg1);
	}
	RTLE;
}

/* {UC_STRING}.put_string */
void F2018_25665 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	F2018_25666(Current, arg1);
}

/* {UC_STRING}.append */
void F2018_25666 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc6 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,tr2);
	RTLR(4,loc7);
	RTLR(5,loc8);
	RTLIU(6);
	
	RTGC;
	tr1 = RTOUCR(218,F1261_14810, (Current));
	tr2 = RTOUCR(429,F2018_25729, (Current));
	tb1 = F65_9687(RTCW(tr1), arg1, tr2);
	if (tb1) {
		tr1 = RTOUCR(428,F169_10556, (Current));
		tr2 = F1558_6566(RTCW(arg1));
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O4768[Dtype(arg1)-1558]);
		loc1 = F1262_14820(RTCW(tr1), tr2, ((EIF_INTEGER_32) 1L), ti4_1);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O4768[Dtype(arg1)-1558]);
		if ((EIF_BOOLEAN)(loc1 == ti4_1)) {
			loc4 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_);
			loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc4 + loc1);
			loc5 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
			loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc5 + loc1);
			F2018_25725(Current, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_));
			F1561_6779(Current, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_));
			loc6 = (EIF_BOOLEAN) EIF_TEST(c_check_assert((EIF_BOOLEAN) 0));
			F1561_6731(Current, arg1);
			tb1 = (EIF_BOOLEAN) EIF_TEST(c_check_assert(loc6));
			loc6 = (EIF_BOOLEAN) tb1;
			ti4_1 = F2018_25640(Current);
			F2018_25725(Current, ti4_1);
			ti4_1 = F2018_25640(Current);
			F1561_6779(Current, ti4_1);
			F2018_25725(Current, loc5);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_) = (EIF_INTEGER_32) loc4;
		} else {
			tr1 = F1558_6566(RTCW(arg1));
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O4768[Dtype(arg1)-1558]);
			F2018_25667(Current, tr1, ((EIF_INTEGER_32) 1L), ti4_1);
		}
	} else {
		loc7 = arg1;
		loc7 = RTRV(eif_new_type(2017, 0x01),loc7);
		if (EIF_TEST(loc7)) {
			tb1 = '\01';
			loc8 = arg1;
			loc8 = RTRV(eif_new_type(2018, 0x01),loc8);
			if (!(EIF_TEST(loc8))) {
				tr1 = RTOUCR(218,F1261_14810, (Current));
				tr2 = RTOUCR(430,F2018_25730, (Current));
				tb2 = F65_9687(RTCW(tr1), loc7, tr2);
				tb1 = tb2;
			}
			if (tb1) {
				if ((EIF_BOOLEAN)(loc7 == Current)) {
					loc4 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_);
					loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (((EIF_INTEGER_32) 2L) * loc4);
					loc5 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
					loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) (((EIF_INTEGER_32) 2L) * loc5);
					F2018_25725(Current, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_));
					F1561_6779(Current, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_));
					loc6 = (EIF_BOOLEAN) EIF_TEST(c_check_assert((EIF_BOOLEAN) 0));
					F1561_6731(Current, arg1);
					tb1 = (EIF_BOOLEAN) EIF_TEST(c_check_assert(loc6));
					loc6 = (EIF_BOOLEAN) tb1;
					ti4_1 = F2018_25640(Current);
					F2018_25725(Current, ti4_1);
					ti4_1 = F2018_25640(Current);
					F1561_6779(Current, ti4_1);
					F2018_25725(Current, loc5);
					*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_) = (EIF_INTEGER_32) loc4;
				} else {
					loc3 = *(EIF_INTEGER_32 *)(loc7+ _LNGOFF_1_1_0_2_);
					loc2 = *(EIF_INTEGER_32 *)(loc7+ _LNGOFF_1_1_0_3_);
					loc4 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_);
					loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc4 + loc2);
					loc5 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
					loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc5 + loc3);
					F2018_25725(loc7, loc2);
					F2018_25725(Current, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_));
					F1561_6779(Current, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_));
					loc6 = (EIF_BOOLEAN) EIF_TEST(c_check_assert((EIF_BOOLEAN) 0));
					F1561_6731(Current, arg1);
					tb1 = (EIF_BOOLEAN) EIF_TEST(c_check_assert(loc6));
					loc6 = (EIF_BOOLEAN) tb1;
					ti4_1 = F2018_25640(Current);
					F2018_25725(Current, ti4_1);
					ti4_1 = F2018_25640(Current);
					F1561_6779(Current, ti4_1);
					F2018_25725(Current, loc5);
					F2018_25725(loc7, loc3);
					*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_) = (EIF_INTEGER_32) loc4;
				}
			} else {
				tr1 = F1558_6566(RTCW(arg1));
				ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O4768[Dtype(arg1)-1558]);
				F2018_25667(Current, tr1, ((EIF_INTEGER_32) 1L), ti4_1);
			}
		} else {
			tr1 = F1558_6566(RTCW(arg1));
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O4768[Dtype(arg1)-1558]);
			F2018_25667(Current, tr1, ((EIF_INTEGER_32) 1L), ti4_1);
		}
	}
	RTLE;
}

/* {UC_STRING}.gobo_append_substring */
void F2018_25667 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc5);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTGC;
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg3 - arg2) + ((EIF_INTEGER_32) 1L));
	if ((EIF_BOOLEAN)(loc1 != ((EIF_INTEGER_32) 0L))) {
		if ((EIF_BOOLEAN)(arg1 == Current)) {
			loc5 = F2018_25692(Current);
		} else {
			loc5 = (EIF_REFERENCE) arg1;
		}
		tr1 = RTOUCR(428,F169_10556, (Current));
		loc3 = F1262_14820(RTCW(tr1), loc5, arg2, arg3);
		loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_);
		loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
		loc4 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_);
		loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc4 + loc3);
		if ((EIF_BOOLEAN) (loc4 > F2018_25640(Current))) {
			F2018_25721(Current, loc4);
		}
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_) = (EIF_INTEGER_32) loc4;
		F2018_25725(Current, (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) + loc1));
		F2018_25728(Current, loc5, arg2, arg3, loc3, loc2);
	}
	RTLE;
}

/* {UC_STRING}.insert_character */
void F2018_25678 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg2 == (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) + ((EIF_INTEGER_32) 1L)))) {
		F2018_25663(Current, arg1);
	} else {
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_))) {
			loc1 = (EIF_INTEGER_32) arg2;
		} else {
			loc1 = F2018_25713(Current, arg2);
		}
		tr1 = RTOUCR(428,F169_10556, (Current));
		loc2 = F1262_14822(RTCW(tr1), arg1);
		loc3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_);
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 + loc2);
		if ((EIF_BOOLEAN) (loc3 > F2018_25640(Current))) {
			F2018_25721(Current, loc3);
		}
		F2018_25725(Current, (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) + ((EIF_INTEGER_32) 1L)));
		F2018_25722(Current, loc1, loc2);
		F2018_25727(Current, arg1, loc2, loc1);
	}
	RTLE;
}

/* {UC_STRING}.insert_string */
void F2018_25680 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc5);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTGC;
	loc1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O4768[Dtype(arg1)-1558]);
	if ((EIF_BOOLEAN)(loc1 != ((EIF_INTEGER_32) 0L))) {
		if ((EIF_BOOLEAN)(arg2 == (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) + ((EIF_INTEGER_32) 1L)))) {
			F2018_25664(Current, arg1);
		} else {
			if ((EIF_BOOLEAN)(arg1 == Current)) {
				loc5 = F2018_25692(Current);
			} else {
				loc5 = F1558_6566(RTCW(arg1));
			}
			if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_))) {
				loc2 = (EIF_INTEGER_32) arg2;
			} else {
				loc2 = F2018_25713(Current, arg2);
			}
			tr1 = RTOUCR(428,F169_10556, (Current));
			loc3 = F1262_14820(RTCW(tr1), loc5, ((EIF_INTEGER_32) 1L), loc1);
			loc4 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_);
			loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc4 + loc3);
			if ((EIF_BOOLEAN) (loc4 > F2018_25640(Current))) {
				F2018_25721(Current, loc4);
			}
			F2018_25722(Current, loc2, loc3);
			F2018_25725(Current, (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) + loc1));
			F2018_25728(Current, loc5, ((EIF_INTEGER_32) 1L), loc1, loc3, loc2);
		}
	}
	RTLE;
}

/* {UC_STRING}.replace_substring_all */
void F2018_25683 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,arg2);
	RTLR(3,loc4);
	RTLR(4,loc5);
	RTLR(5,tr1);
	RTLIU(6);
	
	RTGC;
	if ((EIF_BOOLEAN) !F2018_25646(Current)) {
		loc6 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_);
		loc2 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_3_);
		loc3 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_1_1_0_3_);
		loc4 = *(EIF_REFERENCE *)(Current);
		loc5 = *(EIF_REFERENCE *)(RTCW(arg1));
		for (;;) {
			if ((EIF_BOOLEAN) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc6 + loc2) - ((EIF_INTEGER_32) 1L)) > loc1)) break;
			tb1 = F1199_3098(RTCW(loc4), loc5, ((EIF_INTEGER_32) 0L), (EIF_INTEGER_32) (loc6 - ((EIF_INTEGER_32) 1L)), loc2);
			if (tb1) {
				if ((EIF_BOOLEAN)(loc3 == loc2)) {
				} else {
					if ((EIF_BOOLEAN) (loc3 < loc2)) {
						F2018_25723(Current, (EIF_INTEGER_32) (loc6 + loc2), (EIF_INTEGER_32) (loc2 - loc3));
					} else {
						loc8 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 - loc2);
						loc7 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + loc8);
						if ((EIF_BOOLEAN) (loc7 > F2018_25640(Current))) {
							F2018_25721(Current, loc7);
							loc4 = *(EIF_REFERENCE *)(Current);
						}
						F2018_25722(Current, (EIF_INTEGER_32) (loc6 + loc2), loc8);
					}
				}
				loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_);
				tr1 = *(EIF_REFERENCE *)(RTCW(arg2));
				/* INLINED CODE (SPECIAL.copy_data) */
				memmove((EIF_CHARACTER_8 *)RTCW(loc4) + ((EIF_INTEGER_32) (loc6 - ((EIF_INTEGER_32) 1L))),(EIF_CHARACTER_8 *)tr1 + ((EIF_INTEGER_32) 0L), (rt_uint_ptr)sizeof(EIF_CHARACTER_8) * (rt_uint_ptr)loc3);
				RT_SPECIAL_COUNT(loc4) = eif_max_int32(RT_SPECIAL_COUNT(loc4), (EIF_INTEGER_32) (loc6 - ((EIF_INTEGER_32) 1L)) + loc3);
				/* END INLINED CODE */
				;
				ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
				ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_1_1_0_2_);
				F2018_25725(Current, (EIF_INTEGER_32) ((EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) - ti4_1) + ti4_2));
				loc6 += loc3;
			} else {
				ti4_1 = F2018_25711(Current, loc6);
				loc6 = (EIF_INTEGER_32) ti4_1;
			}
		}
	}
	RTLE;
}

/* {UC_STRING}.keep_head */
void F2018_25684 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 0L))) {
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		F2018_25725(Current, ((EIF_INTEGER_32) 0L));
	} else {
		if ((EIF_BOOLEAN) (arg1 < *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_))) {
			if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_))) {
				*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_) = (EIF_INTEGER_32) arg1;
			} else {
				ti4_1 = F2018_25713(Current, (EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L)));
				*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_) = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L));
			}
			F2018_25725(Current, arg1);
		}
	}
	RTLE;
}

/* {UC_STRING}.keep_tail */
void F2018_25685 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 0L))) {
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		F2018_25725(Current, ((EIF_INTEGER_32) 0L));
	} else {
		if ((EIF_BOOLEAN) (arg1 < *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_))) {
			if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_))) {
				loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_);
				loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 - arg1);
			} else {
				loc1 = F2018_25713(Current, (EIF_INTEGER_32) ((EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) - arg1) + ((EIF_INTEGER_32) 1L)));
				loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L));
			}
			F2018_25723(Current, (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)), loc1);
			F2018_25725(Current, arg1);
		}
	}
	RTLE;
}

/* {UC_STRING}.remove_head */
void F2018_25686 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if ((EIF_BOOLEAN) (arg1 >= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_))) {
		F2018_25690(Current);
	} else {
		if ((EIF_BOOLEAN)(arg1 != ((EIF_INTEGER_32) 0L))) {
			F2018_25685(Current, (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) - arg1));
		}
	}
	RTLE;
}

/* {UC_STRING}.remove_tail */
void F2018_25687 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if ((EIF_BOOLEAN) (arg1 >= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_))) {
		F2018_25690(Current);
	} else {
		if ((EIF_BOOLEAN)(arg1 != ((EIF_INTEGER_32) 0L))) {
			F2018_25684(Current, (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) - arg1));
		}
	}
	RTLE;
}

/* {UC_STRING}.remove */
void F2018_25688 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER_8 tc1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_))) {
		loc1 = (EIF_INTEGER_32) arg1;
		loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	} else {
		loc1 = F2018_25713(Current, arg1);
		tr1 = RTOUCR(428,F169_10556, (Current));
		tc1 = F2018_25719(Current, loc1);
		loc2 = F1262_14819(RTCW(tr1), tc1);
	}
	F2018_25723(Current, (EIF_INTEGER_32) (loc1 + loc2), loc2);
	F2018_25725(Current, (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) - ((EIF_INTEGER_32) 1L)));
	RTLE;
}

/* {UC_STRING}.wipe_out */
void F2018_25690 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	F2018_25725(Current, ((EIF_INTEGER_32) 0L));
	RTLE;
}

/* {UC_STRING}.copy */
void F2018_25691 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 != Current)) {
		loc1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_3_);
		F2018_25725(RTCW(arg1), ti4_1);
		F1559_6644(Current, arg1);
		F2018_25725(Current, loc1);
		F2018_25725(RTCW(arg1), loc1);
	}
	RTLE;
}

/* {UC_STRING}.cloned_string */
EIF_REFERENCE F2018_25692 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_REFERENCE) F1_14(Current);
}

/* {UC_STRING}.out */
EIF_REFERENCE F2018_25693 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 loc4 = (EIF_CHARACTER_8) 0;
	EIF_CHARACTER_8 loc5 = (EIF_CHARACTER_8) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
	Result = RTLNS(eif_new_type(1560, 0x01).id, 1560, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F1559_6605(RTCW(Result), loc2);
	if ((EIF_BOOLEAN)(loc2 == *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_))) {
		loc5 = (EIF_CHARACTER_8) '';
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			if ((EIF_BOOLEAN) (loc1 > loc2)) break;
			loc4 = F2018_25719(Current, loc1);
			if ((EIF_BOOLEAN) (loc4 <= loc5)) {
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R4825[Dtype(RTCW(Result))-1560])(Result, loc4);
			} else {
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R4825[Dtype(RTCW(Result))-1560])(Result, (EIF_CHARACTER_8) '%');
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R4825[Dtype(RTCW(Result))-1560])(Result, (EIF_CHARACTER_8) '/');
				ti4_1 = (EIF_INTEGER_32) (loc4);
				tr1 = c_outi(ti4_1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4823[Dtype(RTCW(Result))-1560])(Result, tr1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R4825[Dtype(RTCW(Result))-1560])(Result, (EIF_CHARACTER_8) '/');
			}
			loc1++;
		}
	} else {
		loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_);
		loc6 = ((EIF_INTEGER_32) 127L);
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			if ((EIF_BOOLEAN) (loc1 > loc2)) break;
			loc3 = F2018_25709(Current, loc1);
			if ((EIF_BOOLEAN) (loc3 <= loc6)) {
				tr1 = RTOUCR(246,F1011_14519, (Current));
				tc1 = F1265_14896(RTCW(tr1), loc3);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R4825[Dtype(RTCW(Result))-1560])(Result, tc1);
			} else {
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R4825[Dtype(RTCW(Result))-1560])(Result, (EIF_CHARACTER_8) '%');
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R4825[Dtype(RTCW(Result))-1560])(Result, (EIF_CHARACTER_8) '/');
				tr1 = c_outi(loc3);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4823[Dtype(RTCW(Result))-1560])(Result, tr1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R4825[Dtype(RTCW(Result))-1560])(Result, (EIF_CHARACTER_8) '/');
			}
			ti4_1 = F2018_25711(Current, loc1);
			loc1 = (EIF_INTEGER_32) ti4_1;
		}
	}
	RTLE;
	return Result;
}

/* {UC_STRING}.as_upper */
EIF_REFERENCE F2018_25696 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTGC;
	Result = F2018_25692(Current);
	F2018_25698(RTCW(Result));
	RTLE;
	return Result;
}

/* {UC_STRING}.to_lower */
void F2018_25697 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		if ((EIF_BOOLEAN) (loc1 > loc2)) break;
		loc6 = F2018_25709(Current, loc1);
		tr1 = RTOUCR(431,F497_14065, (Current));
		loc7 = F1824_20467(RTCW(tr1), loc6);
		if ((EIF_BOOLEAN)(loc7 != loc6)) {
			tr1 = RTOUCR(428,F169_10556, (Current));
			loc3 = F1262_14821(RTCW(tr1), loc6);
			tr1 = RTOUCR(428,F169_10556, (Current));
			loc4 = F1262_14821(RTCW(tr1), loc7);
			if ((EIF_BOOLEAN)(loc4 == loc3)) {
			} else {
				if ((EIF_BOOLEAN) (loc4 < loc3)) {
					F2018_25723(Current, (EIF_INTEGER_32) (loc1 + loc3), (EIF_INTEGER_32) (loc3 - loc4));
				} else {
					loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc4 - loc3);
					loc5 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_);
					loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc5 + loc2);
					if ((EIF_BOOLEAN) (loc5 > F2018_25640(Current))) {
						F2018_25721(Current, loc5);
					}
					F2018_25722(Current, (EIF_INTEGER_32) (loc1 + loc3), loc2);
				}
			}
			F2018_25726(Current, loc7, loc4, loc1);
		}
		ti4_1 = F2018_25711(Current, loc1);
		loc1 = (EIF_INTEGER_32) ti4_1;
	}
	RTLE;
}

/* {UC_STRING}.to_upper */
void F2018_25698 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		if ((EIF_BOOLEAN) (loc1 > loc2)) break;
		loc6 = F2018_25709(Current, loc1);
		tr1 = RTOUCR(431,F497_14065, (Current));
		loc7 = F1824_20468(RTCW(tr1), loc6);
		if ((EIF_BOOLEAN)(loc7 != loc6)) {
			tr1 = RTOUCR(428,F169_10556, (Current));
			loc3 = F1262_14821(RTCW(tr1), loc6);
			tr1 = RTOUCR(428,F169_10556, (Current));
			loc4 = F1262_14821(RTCW(tr1), loc7);
			if ((EIF_BOOLEAN)(loc4 == loc3)) {
			} else {
				if ((EIF_BOOLEAN) (loc4 < loc3)) {
					F2018_25723(Current, (EIF_INTEGER_32) (loc1 + loc3), (EIF_INTEGER_32) (loc3 - loc4));
				} else {
					loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc4 - loc3);
					loc5 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_);
					loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc5 + loc2);
					if ((EIF_BOOLEAN) (loc5 > F2018_25640(Current))) {
						F2018_25721(Current, loc5);
					}
					F2018_25722(Current, (EIF_INTEGER_32) (loc1 + loc3), loc2);
				}
			}
			F2018_25726(Current, loc7, loc4, loc1);
		}
		ti4_1 = F2018_25711(Current, loc1);
		loc1 = (EIF_INTEGER_32) ti4_1;
	}
	RTLE;
}

/* {UC_STRING}.to_utf8 */
EIF_REFERENCE F2018_25699 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTGC;
	loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_);
	Result = RTLNS(eif_new_type(1560, 0x01).id, 1560, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F1559_6605(RTCW(Result), loc2);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		if ((EIF_BOOLEAN) (loc1 > loc2)) break;
		tc1 = F2018_25719(Current, loc1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R4825[Dtype(RTCW(Result))-1560])(Result, tc1);
		loc1++;
	}
	RTLE;
	return Result;
}

/* {UC_STRING}.as_string */
EIF_REFERENCE F2018_25704 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_REFERENCE) F2018_25699(Current);
}

/* {UC_STRING}.eol */

EIF_REFERENCE F2018_25706 (EIF_REFERENCE Current)
{
	GTCX
	RTOUC (432,RTMS_EX_H("\012",1,10));
}

/* {UC_STRING}.item_code_at_byte_index */
EIF_INTEGER_32 F2018_25709 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 loc3 = (EIF_CHARACTER_8) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	loc1 = (EIF_INTEGER_32) arg1;
	loc3 = F2018_25719(Current, loc1);
	tr1 = RTOUCR(428,F169_10556, (Current));
	Result = F1262_14817(RTCW(tr1), loc3);
	tr1 = RTOUCR(428,F169_10556, (Current));
	loc2 = F1262_14819(RTCW(tr1), loc3);
	loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 + loc2) - ((EIF_INTEGER_32) 1L));
	loc1++;
	for (;;) {
		if ((EIF_BOOLEAN) (loc1 > loc2)) break;
		loc3 = F2018_25719(Current, loc1);
		tr1 = RTOUCR(428,F169_10556, (Current));
		ti4_1 = F1262_14818(RTCW(tr1), loc3);
		Result = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (Result * ((EIF_INTEGER_32) 64L)) + ti4_1);
		loc1++;
	}
	RTLE;
	return Result;
}

/* {UC_STRING}.character_item_at_byte_index */
EIF_CHARACTER_8 F2018_25710 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_CHARACTER_8 loc1 = (EIF_CHARACTER_8) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	loc1 = F2018_25719(Current, arg1);
	tr1 = RTOUCR(428,F169_10556, (Current));
	ti4_1 = F1262_14819(RTCW(tr1), loc1);
	switch (ti4_1) {
		case 1L:
			Result = (EIF_CHARACTER_8) loc1;
			break;
		case 2L:
			tr1 = RTOUCR(428,F169_10556, (Current));
			loc2 = F1262_14817(RTCW(tr1), loc1);
			loc1 = F2018_25719(Current, (EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L)));
			tr1 = RTOUCR(428,F169_10556, (Current));
			ti4_1 = F1262_14818(RTCW(tr1), loc1);
			loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc2 * ((EIF_INTEGER_32) 64L)) + ti4_1);
			ti4_1 = RTOUCB(EIF_INTEGER_32,314,F478_13929, (RTCV(RTOUCR(245,F237_11555, (Current)))));
			if ((EIF_BOOLEAN) (loc2 <= ti4_1)) {
				tr1 = RTOUCR(246,F1011_14519, (Current));
				Result = F1265_14896(RTCW(tr1), loc2);
			} else {
				Result = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '\000';
			}
			break;
		default:
			loc2 = F2018_25709(Current, arg1);
			ti4_1 = RTOUCB(EIF_INTEGER_32,314,F478_13929, (RTCV(RTOUCR(245,F237_11555, (Current)))));
			if ((EIF_BOOLEAN) (loc2 <= ti4_1)) {
				tr1 = RTOUCR(246,F1011_14519, (Current));
				Result = F1265_14896(RTCW(tr1), loc2);
			} else {
				Result = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '\000';
			}
			break;
	}
	RTLE;
	return Result;
}

/* {UC_STRING}.next_byte_index */
EIF_INTEGER_32 F2018_25711 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER_8 tc1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = RTOUCR(428,F169_10556, (Current));
	tc1 = F2018_25719(Current, arg1);
	Result = F1262_14819(RTCW(tr1), tc1);
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg1 + Result);
	RTLE;
	return Result;
}

/* {UC_STRING}.shifted_byte_index */
EIF_INTEGER_32 F2018_25712 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_8 tc1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	Result = (EIF_INTEGER_32) arg1;
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		if ((EIF_BOOLEAN) (loc1 > arg2)) break;
		tr1 = RTOUCR(428,F169_10556, (Current));
		tc1 = F2018_25719(Current, Result);
		ti4_1 = F1262_14819(RTCW(tr1), tc1);
		Result += ti4_1;
		if ((EIF_BOOLEAN) (Result > *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_))) {
			loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 1L));
		} else {
			loc1++;
		}
	}
	RTLE;
	return Result;
}

/* {UC_STRING}.byte_index */
EIF_INTEGER_32 F2018_25713 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 loc2 = (EIF_CHARACTER_8) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_) == *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_))) {
		Result = (EIF_INTEGER_32) arg1;
	} else {
		if ((EIF_BOOLEAN) (arg1 < *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_4_))) {
			loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		} else {
			loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_4_);
			Result = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_5_);
		}
		for (;;) {
			if ((EIF_BOOLEAN)(loc1 == arg1)) break;
			loc2 = F2018_25719(Current, Result);
			tr1 = RTOUCR(428,F169_10556, (Current));
			ti4_1 = F1262_14819(RTCW(tr1), loc2);
			Result += ti4_1;
			loc1++;
		}
	}
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_4_) = (EIF_INTEGER_32) arg1;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_5_) = (EIF_INTEGER_32) Result;
	RTLE;
	return Result;
}

/* {UC_STRING}.reset_byte_index_cache */
void F2018_25717 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_4_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_5_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTLE;
}

/* {UC_STRING}.byte_item */
EIF_CHARACTER_8 F2018_25719 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
	F2018_25725(Current, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_));
	Result = F1561_6696(Current, arg1);
	F2018_25725(Current, loc1);
	RTLE;
	return Result;
}

/* {UC_STRING}.put_byte */
void F2018_25720 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
	F2018_25725(Current, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_));
	F1561_6718(Current, arg1, arg2);
	F2018_25725(Current, loc1);
	RTLE;
}

/* {UC_STRING}.resize_byte_storage */
void F2018_25721 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if ((EIF_BOOLEAN) (arg1 > F2018_25640(Current))) {
		F1561_6762(Current, arg1);
		loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		F2018_25725(Current, arg1);
		F1561_6779(Current, arg1);
		F2018_25725(Current, loc1);
	}
	RTLE;
}

/* {UC_STRING}.move_bytes_right */
void F2018_25722 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 tc1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_5_) > arg1)) {
		F2018_25717(Current);
	}
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_);
	loc2 = (EIF_INTEGER_32) arg1;
	(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_)) += arg2;
	loc3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
	F2018_25725(Current, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_));
	for (;;) {
		if ((EIF_BOOLEAN) (loc1 < loc2)) break;
		tc1 = F1561_6696(Current, loc1);
		F1561_6718(Current, tc1, (EIF_INTEGER_32) (loc1 + arg2));
		loc1--;
	}
	F2018_25725(Current, loc3);
	RTLE;
}

/* {UC_STRING}.move_bytes_left */
void F2018_25723 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 tc1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_5_) > (EIF_INTEGER_32) (arg1 - arg2))) {
		F2018_25717(Current);
	}
	loc1 = (EIF_INTEGER_32) arg1;
	loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_);
	loc3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
	F2018_25725(Current, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_));
	for (;;) {
		if ((EIF_BOOLEAN) (loc1 > loc2)) break;
		tc1 = F1561_6696(Current, loc1);
		F1561_6718(Current, tc1, (EIF_INTEGER_32) (loc1 - arg2));
		loc1++;
	}
	F2018_25725(Current, loc3);
	(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_)) -= arg2;
	RTLE;
}

/* {UC_STRING}.set_count */
void F2018_25725 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_4_) > arg1)) {
		F2018_25717(Current);
	}
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) = (EIF_INTEGER_32) arg1;
	RTLE;
}

/* {UC_STRING}.put_code_at_byte_index */
void F2018_25726 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 loc2 = (EIF_CHARACTER_8) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	loc3 = (EIF_INTEGER_32) arg1;
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg3 + arg2) - ((EIF_INTEGER_32) 1L));
	for (;;) {
		if ((EIF_BOOLEAN)(loc1 == arg3)) break;
		tr1 = RTOUCR(246,F1011_14519, (Current));
		loc2 = F1265_14896(RTCW(tr1), (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc3 % ((EIF_INTEGER_32) 64L)) + ((EIF_INTEGER_32) 128L)));
		F2018_25720(Current, loc2, loc1);
		loc3 /= ((EIF_INTEGER_32) 64L);
		loc1--;
	}
	switch (arg2) {
		case 1L:
			tr1 = RTOUCR(246,F1011_14519, (Current));
			loc2 = F1265_14896(RTCW(tr1), loc3);
			break;
		case 2L:
			tr1 = RTOUCR(246,F1011_14519, (Current));
			loc2 = F1265_14896(RTCW(tr1), (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 192L)));
			break;
		case 3L:
			tr1 = RTOUCR(246,F1011_14519, (Current));
			loc2 = F1265_14896(RTCW(tr1), (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 224L)));
			break;
		case 4L:
			tr1 = RTOUCR(246,F1011_14519, (Current));
			loc2 = F1265_14896(RTCW(tr1), (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 240L)));
			break;
		case 5L:
			tr1 = RTOUCR(246,F1011_14519, (Current));
			loc2 = F1265_14896(RTCW(tr1), (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 248L)));
			break;
		case 6L:
			tr1 = RTOUCR(246,F1011_14519, (Current));
			loc2 = F1265_14896(RTCW(tr1), (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 252L)));
			break;
		default:
			RTEC(EN_WHEN);
	}
	F2018_25720(Current, loc2, arg3);
	RTLE;
}

/* {UC_STRING}.put_character_at_byte_index */
void F2018_25727 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_CHARACTER_8 loc1 = (EIF_CHARACTER_8) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	switch (arg2) {
		case 1L:
			F2018_25720(Current, arg1, arg3);
			break;
		case 2L:
			loc2 = (EIF_INTEGER_32) (arg1);
			tr1 = RTOUCR(246,F1011_14519, (Current));
			loc1 = F1265_14896(RTCW(tr1), (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc2 / ((EIF_INTEGER_32) 64L)) + ((EIF_INTEGER_32) 192L)));
			F2018_25720(Current, loc1, arg3);
			tr1 = RTOUCR(246,F1011_14519, (Current));
			loc1 = F1265_14896(RTCW(tr1), (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc2 % ((EIF_INTEGER_32) 64L)) + ((EIF_INTEGER_32) 128L)));
			F2018_25720(Current, loc1, (EIF_INTEGER_32) (arg3 + ((EIF_INTEGER_32) 1L)));
			break;
		default:
			ti4_1 = (EIF_INTEGER_32) (arg1);
			F2018_25726(Current, ti4_1, arg2, arg3);
			break;
	}
	RTLE;
}

/* {UC_STRING}.put_substring_at_byte_index */
void F2018_25728 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_INTEGER_32 arg5)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 loc5 = (EIF_CHARACTER_8) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_CHARACTER_8 tc1;
	RTLD;
	
	RTLI(8);
	RTLR(0,loc7);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,loc8);
	RTLR(6,loc9);
	RTLR(7,loc10);
	RTLIU(8);
	
	RTGC;
	if ((EIF_BOOLEAN) (arg4 > ((EIF_INTEGER_32) 0L))) {
		tb1 = '\0';
		loc7 = arg1;
		loc7 = RTRV(eif_new_type(1560, 0x01),loc7);
		if (EIF_TEST(loc7)) {
			tr1 = RTOUCR(218,F1261_14810, (Current));
			tr2 = RTOUCR(429,F2018_25729, (Current));
			tb2 = F65_9687(RTCW(tr1), arg1, tr2);
			tb1 = tb2;
		}
		if (tb1) {
			loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg3 - arg2) + ((EIF_INTEGER_32) 1L));
			if ((EIF_BOOLEAN)(loc2 == arg4)) {
				loc3 = (EIF_INTEGER_32) arg5;
				loc1 = (EIF_INTEGER_32) arg2;
				for (;;) {
					if ((EIF_BOOLEAN) (loc1 > arg3)) break;
					tc1 = (eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2556[Dtype(loc7)-849])(loc7, loc1));
					F2018_25720(Current, tc1, loc3);
					loc3++;
					loc1++;
				}
			} else {
				loc3 = (EIF_INTEGER_32) arg5;
				loc1 = (EIF_INTEGER_32) arg2;
				for (;;) {
					if ((EIF_BOOLEAN) (loc1 > arg3)) break;
					loc5 = (eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2556[Dtype(loc7)-849])(loc7, loc1));
					tr1 = RTOUCR(428,F169_10556, (Current));
					loc4 = F1262_14822(RTCW(tr1), loc5);
					F2018_25727(Current, loc5, loc4, loc3);
					loc3 += loc4;
					loc1++;
				}
			}
		} else {
			tb1 = '\0';
			tr1 = RTOUCR(218,F1261_14810, (Current));
			tb2 = F65_9687(RTCW(tr1), arg1, Current);
			if (tb2) {
				loc8 = arg1;
				loc8 = RTRV(eif_new_type(2017, 0x01),loc8);
				tb1 = EIF_TEST(loc8);
			}
			if (tb1) {
				loc3 = (EIF_INTEGER_32) arg5;
				loc1 = F2018_25713(loc8, arg2);
				loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 + arg4) - ((EIF_INTEGER_32) 1L));
				for (;;) {
					if ((EIF_BOOLEAN) (loc1 > loc2)) break;
					tc1 = F2018_25719(loc8, loc1);
					F2018_25720(Current, tc1, loc3);
					loc3++;
					loc1++;
				}
			} else {
				loc9 = arg1;
				loc9 = RTRV(eif_new_type(2018, 0x01),loc9);
				if (EIF_TEST(loc9)) {
					loc3 = (EIF_INTEGER_32) arg5;
					loc1 = F2018_25713(loc9, arg2);
					loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 + arg4) - ((EIF_INTEGER_32) 1L));
					for (;;) {
						if ((EIF_BOOLEAN) (loc1 > loc2)) break;
						tc1 = F2018_25719(loc9, loc1);
						F2018_25720(Current, tc1, loc3);
						loc3++;
						loc1++;
					}
				} else {
					loc10 = arg1;
					loc10 = RTRV(eif_new_type(2017, 0x01),loc10);
					if (EIF_TEST(loc10)) {
						loc3 = (EIF_INTEGER_32) arg5;
						loc1 = F2018_25713(loc10, arg2);
						loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 + arg4) - ((EIF_INTEGER_32) 1L));
						for (;;) {
							if ((EIF_BOOLEAN) (loc1 > loc2)) break;
							loc6 = F2018_25709(loc10, loc1);
							tr1 = RTOUCR(428,F169_10556, (Current));
							loc4 = F1262_14821(RTCW(tr1), loc6);
							F2018_25726(Current, loc6, loc4, loc3);
							loc3 += loc4;
							ti4_1 = F2018_25711(loc10, loc1);
							loc1 = (EIF_INTEGER_32) ti4_1;
						}
					} else {
						loc3 = (EIF_INTEGER_32) arg5;
						loc1 = (EIF_INTEGER_32) arg2;
						for (;;) {
							if ((EIF_BOOLEAN) (loc1 > arg3)) break;
							tu4_1 = (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4644[Dtype(RTCW(arg1))-1560])(arg1, loc1);
							loc6 = (EIF_INTEGER_32) tu4_1;
							tr1 = RTOUCR(428,F169_10556, (Current));
							loc4 = F1262_14821(RTCW(tr1), loc6);
							F2018_25726(Current, loc6, loc4, loc3);
							loc3 += loc4;
							loc1++;
						}
					}
				}
			}
		}
	}
	RTLE;
}

/* {UC_STRING}.dummy_string */

EIF_REFERENCE F2018_25729 (EIF_REFERENCE Current)
{
	GTCX
	RTOUC (429,RTMS_EX_H("",0,0));
}

/* {UC_STRING}.dummy_uc_string */
static EIF_REFERENCE F2018_25730_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(430)

	RTLI(1);
	RTLR(0,tr1);
	RTLIU(1);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(eif_new_type(2017, 0x01).id, 2017, _OBJSIZ_1_1_0_6_0_0_0_0_);
	F2018_25609(RTCW(tr1));
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F2018_25730 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(430,F2018_25730_body,(Current));
}

/* {UC_STRING}.old_wipe_out */
void F2018_25731 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	F1561_6759(Current);
	F2018_25690(Current);
	RTLE;
}

/* {UC_STRING}.old_left_adjust */
void F2018_25733 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		if ((EIF_BOOLEAN) (loc1 > loc2)) break;
		switch (F2018_25622(Current, loc1)) {
			case (EIF_CHARACTER_8) '\011':
			case (EIF_CHARACTER_8) '\012':
			case (EIF_CHARACTER_8) '\015':
			case (EIF_CHARACTER_8) ' ':
				loc1++;
				break;
			default:
				loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
				break;
		}
	}
	F2018_25686(Current, (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L)));
	RTLE;
}

/* {UC_STRING}.code */
EIF_NATURAL_32 F2018_25735 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	ti4_1 = F2018_25621(Current, arg1);
	Result = (EIF_NATURAL_32) ti4_1;
	RTLE;
	return Result;
}

/* {UC_STRING}.index_of_code */
EIF_INTEGER_32 F2018_25736 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	ti4_1 = (EIF_INTEGER_32) arg1;
	Result = F2018_25631(Current, ti4_1, arg2);
	RTLE;
	return Result;
}

/* {UC_STRING}.put_code */
void F2018_25737 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	ti4_1 = (EIF_INTEGER_32) arg1;
	F2018_25656(Current, ti4_1, arg2);
	RTLE;
}

/* {UC_STRING}.append_code */
void F2018_25738 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	ti4_1 = (EIF_INTEGER_32) arg1;
	F2018_25662(Current, ti4_1);
	RTLE;
}

/* {UC_STRING}.has_code */
EIF_BOOLEAN F2018_25739 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	ti4_1 = (EIF_INTEGER_32) arg1;
	Result = F2018_25642(Current, ti4_1);
	RTLE;
	return Result;
}

void EIF_Minit2001 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
