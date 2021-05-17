/*
 * Code for class YY_COMPRESSED_SCANNER_SKELETON
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "yy1816.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {YY_COMPRESSED_SCANNER_SKELETON}.yy_initialize */
void F1833_20649 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	F1832_20586(Current);
	tr1 = RTOUCR(194,F336_13034, (Current));
	tr1 = F80_9916(RTCW(tr1), ((EIF_INTEGER_32) 0L));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_12_) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {YY_COMPRESSED_SCANNER_SKELETON}.reset */
void F1833_20650 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1832_20587(Current);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_52_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_14_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_15_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_16_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_17_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_18_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_19_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTLE;
}

/* {YY_COMPRESSED_SCANNER_SKELETON}.read_token */
void F1833_20651 (EIF_REFERENCE Current)
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
	EIF_INTEGER_32 loc11 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc12 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc13 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc14 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc15 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc16 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc17 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	RTCFDT;
	RTLD;
	
	RTLI(7);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc14);
	RTLR(3,loc15);
	RTLR(4,tr2);
	RTLR(5,loc16);
	RTLR(6,loc17);
	RTLIU(7);
	
	RTGC;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) -2L);
	loc7 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_0_) != ((EIF_INTEGER_32) -2L))) break;
		switch (loc7) {
			case 1L:
				if (*(EIF_BOOLEAN *)(Current+ _CHROFF_52_1_)) {
					*(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_7_) = (EIF_INTEGER_32) (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_2_) - *(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_3_));
					*(EIF_BOOLEAN *)(Current+ _CHROFF_52_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
				} else {
					*(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_7_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
					*(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_13_) = (EIF_INTEGER_32) *(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_4_);
					*(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_12_) = (EIF_INTEGER_32) *(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_5_);
					*(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_11_) = (EIF_INTEGER_32) *(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_6_);
				}
				loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_2_);
				loc2 = (EIF_INTEGER_32) loc1;
				tr1 = *(EIF_REFERENCE *)(Current);
				tb1 = *(EIF_BOOLEAN *)(RTCW(tr1) + O9531[Dtype(tr1)-254]);
				if (tb1) {
					loc3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_1_);
					loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
				} else {
					loc3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_1_);
				}
				loc7 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
				break;
			case 2L:
				loc14 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
				loc13 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
				for (;;) {
					if (loc13) break;
					tr1 = *(EIF_REFERENCE *)(Current + _REFACS_8_);
					loc15 = tr1;
					if (EIF_TEST(loc15)) {
						if ((EIF_BOOLEAN)(loc14 != NULL)) {
							/* INLINED CODE (SPECIAL.item) */
							tc2 = *((EIF_CHARACTER_8 *)RTCW(loc14) + (loc1));
							/* END INLINED CODE */
							tc1 = tc2;
							ti4_1 = (EIF_INTEGER_32) (tc1);
							/* INLINED CODE (SPECIAL.item) */
							ti4_3 = *((EIF_INTEGER_32 *)loc15 + (ti4_1));
							/* END INLINED CODE */
							loc8 = ti4_3;
						} else {
							tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
							tc1 = F1280_15020(RTCW(tr1), loc1);
							ti4_1 = (EIF_INTEGER_32) (tc1);
							/* INLINED CODE (SPECIAL.item) */
							ti4_3 = *((EIF_INTEGER_32 *)loc15 + (ti4_1));
							/* END INLINED CODE */
							loc8 = ti4_3;
						}
					} else {
						if ((EIF_BOOLEAN)(loc14 != NULL)) {
							/* INLINED CODE (SPECIAL.item) */
							tc2 = *((EIF_CHARACTER_8 *)RTCW(loc14) + (loc1));
							/* END INLINED CODE */
							tc1 = tc2;
							loc8 = (EIF_INTEGER_32) (tc1);
						} else {
							tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
							tc1 = F1280_15020(RTCW(tr1), loc1);
							loc8 = (EIF_INTEGER_32) (tc1);
						}
					}
					tr1 = *(EIF_REFERENCE *)(Current + _REFACS_10_);
					/* INLINED CODE (SPECIAL.item) */
					ti4_2 = *((EIF_INTEGER_32 *)RTCW(tr1) + (loc3));
					/* END INLINED CODE */
					ti4_1 = ti4_2;
					if ((EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L))) {
						*(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_8_) = (EIF_INTEGER_32) loc3;
						*(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_9_) = (EIF_INTEGER_32) loc1;
					}
					for (;;) {
						tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
						tr2 = *(EIF_REFERENCE *)(Current + _REFACS_6_);
						/* INLINED CODE (SPECIAL.item) */
						ti4_2 = *((EIF_INTEGER_32 *)RTCW(tr2) + (loc3));
						/* END INLINED CODE */
						ti4_1 = ti4_2;
						/* INLINED CODE (SPECIAL.item) */
						ti4_3 = *((EIF_INTEGER_32 *)RTCW(tr1) + ((EIF_INTEGER_32) (ti4_1 + loc8)));
						/* END INLINED CODE */
						ti4_1 = ti4_3;
						if ((EIF_BOOLEAN)(ti4_1 == loc3)) break;
						tr1 = *(EIF_REFERENCE *)(Current + _REFACS_7_);
						/* INLINED CODE (SPECIAL.item) */
						ti4_3 = *((EIF_INTEGER_32 *)RTCW(tr1) + (loc3));
						/* END INLINED CODE */
						ti4_2 = ti4_3;
						loc3 = (EIF_INTEGER_32) ti4_2;
						tr1 = *(EIF_REFERENCE *)(Current + _REFACS_9_);
						loc16 = tr1;
						if ((EIF_BOOLEAN) (EIF_TEST(loc16) && (EIF_BOOLEAN) (loc3 >= ((EIF_INTEGER_32) 110L)))) {
							/* INLINED CODE (SPECIAL.item) */
							ti4_3 = *((EIF_INTEGER_32 *)loc16 + (loc8));
							/* END INLINED CODE */
							ti4_2 = ti4_3;
							loc8 = (EIF_INTEGER_32) ti4_2;
						}
					}
					tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
					tr2 = *(EIF_REFERENCE *)(Current + _REFACS_6_);
					/* INLINED CODE (SPECIAL.item) */
					ti4_3 = *((EIF_INTEGER_32 *)RTCW(tr2) + (loc3));
					/* END INLINED CODE */
					ti4_2 = ti4_3;
					/* INLINED CODE (SPECIAL.item) */
					ti4_4 = *((EIF_INTEGER_32 *)RTCW(tr1) + ((EIF_INTEGER_32) (ti4_2 + loc8)));
					/* END INLINED CODE */
					ti4_2 = ti4_4;
					loc3 = (EIF_INTEGER_32) ti4_2;
					loc1++;
					loc13 = (EIF_BOOLEAN) (EIF_BOOLEAN)(loc3 == ((EIF_INTEGER_32) 109L));
				}
				loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_9_);
				loc3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_8_);
				loc7 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
				break;
			case 3L:
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_10_);
				/* INLINED CODE (SPECIAL.item) */
				ti4_3 = *((EIF_INTEGER_32 *)RTCW(tr1) + (loc3));
				/* END INLINED CODE */
				loc6 = ti4_3;
				loc7 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
				break;
			case 5L:
				RTCT0("reject_used", EX_CHECK);
				if (EIF_FALSE) {
					RTCK0;
				} else {
					RTCF0;
				}
				RTCT0("yy_acclist_not_void", EX_CHECK);
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_11_);
				loc17 = tr1;
				if (EIF_TEST(loc17)) {
					RTCK0;
				} else {
					RTCF0;
				}
				loc9 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
				for (;;) {
					if (loc9) break;
					tb1 = '\0';
					if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_16_) != ((EIF_INTEGER_32) 0L))) {
						tr1 = *(EIF_REFERENCE *)(Current + _REFACS_10_);
						/* INLINED CODE (SPECIAL.item) */
						ti4_4 = *((EIF_INTEGER_32 *)RTCW(tr1) + ((EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L))));
						/* END INLINED CODE */
						ti4_2 = ti4_4;
						tb1 = (EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_16_) < ti4_2);
					}
					if (tb1) {
						/* INLINED CODE (SPECIAL.item) */
						ti4_4 = *((EIF_INTEGER_32 *)loc17 + (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_16_)));
						/* END INLINED CODE */
						loc6 = ti4_4;
						*(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_15_) = (EIF_INTEGER_32) loc1;
						loc9 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
					} else {
						loc1--;
						(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_14_))--;
						tr1 = *(EIF_REFERENCE *)(Current + _REFACS_12_);
						/* INLINED CODE (SPECIAL.item) */
						ti4_4 = *((EIF_INTEGER_32 *)RTCW(tr1) + (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_14_)));
						/* END INLINED CODE */
						loc3 = ti4_4;
						tr1 = *(EIF_REFERENCE *)(Current + _REFACS_10_);
						/* INLINED CODE (SPECIAL.item) */
						ti4_3 = *((EIF_INTEGER_32 *)RTCW(tr1) + (loc3));
						/* END INLINED CODE */
						ti4_2 = ti4_3;
						*(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_16_) = (EIF_INTEGER_32) ti4_2;
					}
				}
				loc10 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_4_);
				loc11 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_5_);
				loc12 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_6_);
				loc7 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
				break;
			case 4L:
				loc2 -= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_7_);
				*(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_3_) = (EIF_INTEGER_32) loc2;
				*(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_2_) = (EIF_INTEGER_32) loc1;
				loc7 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				if ((EIF_BOOLEAN)(loc6 == ((EIF_INTEGER_32) 0L))) {
					loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_9_);
					loc2 += *(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_7_);
					loc3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_8_);
					loc7 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
				} else {
					if ((EIF_BOOLEAN)(loc6 == ((EIF_INTEGER_32) 41L))) {
						loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 - loc2) - ((EIF_INTEGER_32) 1L));
						tr1 = *(EIF_REFERENCE *)(Current);
						ti4_2 = *(EIF_INTEGER_32 *)(RTCW(tr1) + O9525[Dtype(tr1)-254]);
						if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_2_) <= (EIF_INTEGER_32) (ti4_2 + ((EIF_INTEGER_32) 1L)))) {
							*(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_2_) = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + loc5);
							loc3 = F1833_20663(Current);
							loc4 = F1833_20664(Current, loc3);
							loc2 += *(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_7_);
							if ((EIF_BOOLEAN)(loc4 != ((EIF_INTEGER_32) 0L))) {
								loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_2_);
								loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L));
								*(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_2_) = (EIF_INTEGER_32) loc1;
								loc3 = (EIF_INTEGER_32) loc4;
								loc7 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
							} else {
								loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_9_);
								loc3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_8_);
								loc7 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
							}
						} else {
							(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_2_))--;
							F1832_20611(Current);
							tr1 = *(EIF_REFERENCE *)(Current);
							tb1 = *(EIF_BOOLEAN *)(RTCW(tr1) + O9536[Dtype(tr1)-254]);
							if (tb1) {
								loc3 = F1833_20663(Current);
								loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_2_);
								loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_3_);
								ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_7_);
								loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ti4_2);
								loc7 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
							} else {
								if ((EIF_BOOLEAN)((EIF_INTEGER_32) ((EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_2_) - *(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_3_)) - *(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_7_)) != ((EIF_INTEGER_32) 0L))) {
									loc3 = F1833_20663(Current);
									loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_2_);
									loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_3_);
									ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_7_);
									loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ti4_2);
									loc7 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
								} else {
									if (F1831_20561(Current)) {
										loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_3_);
										loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_2_);
										F1893_21932(Current, (EIF_INTEGER_32) ((EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_1_) - ((EIF_INTEGER_32) 1L)) / ((EIF_INTEGER_32) 2L)));
									}
								}
							}
						}
					} else {
						F1893_21931(Current, loc6);
						if (*(EIF_BOOLEAN *)(Current+ _CHROFF_52_2_)) {
							*(EIF_BOOLEAN *)(Current+ _CHROFF_52_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
							*(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_4_) = (EIF_INTEGER_32) loc10;
							*(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_5_) = (EIF_INTEGER_32) loc11;
							*(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_6_) = (EIF_INTEGER_32) loc12;
							loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_15_);
							(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_16_))++;
							loc7 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 5L);
						}
					}
				}
				break;
			default:
				RTEC(EN_WHEN);
		}
	}
	RTLE;
}

/* {YY_COMPRESSED_SCANNER_SKELETON}.yy_set_content */
void F1833_20661 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) arg1;
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_1_);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {YY_COMPRESSED_SCANNER_SKELETON}.yy_previous_state */
EIF_INTEGER_32 F1833_20663 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCFDT;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc4);
	RTLR(3,loc5);
	RTLR(4,tr2);
	RTLR(5,loc6);
	RTLIU(6);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	tb1 = *(EIF_BOOLEAN *)(RTCW(tr1) + O9531[Dtype(tr1)-254]);
	if (tb1) {
		Result = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_1_);
		Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result + ((EIF_INTEGER_32) 1L));
	} else {
		Result = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_1_);
	}
	loc4 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_3_);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_7_);
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + ti4_1);
	loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_2_);
	for (;;) {
		if ((EIF_BOOLEAN) (loc1 >= loc2)) break;
		if ((EIF_BOOLEAN)(loc4 != NULL)) {
			/* INLINED CODE (SPECIAL.item) */
			tc2 = *((EIF_CHARACTER_8 *)RTCW(loc4) + (loc1));
			/* END INLINED CODE */
			tc1 = tc2;
			loc3 = (EIF_INTEGER_32) (tc1);
		} else {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			tc1 = F1280_15020(RTCW(tr1), loc1);
			loc3 = (EIF_INTEGER_32) (tc1);
		}
		if ((EIF_BOOLEAN)(loc3 == ((EIF_INTEGER_32) 0L))) {
			loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		} else {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_8_);
			loc5 = tr1;
			if (EIF_TEST(loc5)) {
				/* INLINED CODE (SPECIAL.item) */
				ti4_2 = *((EIF_INTEGER_32 *)loc5 + (loc3));
				/* END INLINED CODE */
				ti4_1 = ti4_2;
				loc3 = (EIF_INTEGER_32) ti4_1;
			}
		}
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_10_);
		/* INLINED CODE (SPECIAL.item) */
		ti4_2 = *((EIF_INTEGER_32 *)RTCW(tr1) + (Result));
		/* END INLINED CODE */
		ti4_1 = ti4_2;
		if ((EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L))) {
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_8_) = (EIF_INTEGER_32) Result;
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_9_) = (EIF_INTEGER_32) loc1;
		}
		for (;;) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
			tr2 = *(EIF_REFERENCE *)(Current + _REFACS_6_);
			/* INLINED CODE (SPECIAL.item) */
			ti4_2 = *((EIF_INTEGER_32 *)RTCW(tr2) + (Result));
			/* END INLINED CODE */
			ti4_1 = ti4_2;
			/* INLINED CODE (SPECIAL.item) */
			ti4_3 = *((EIF_INTEGER_32 *)RTCW(tr1) + ((EIF_INTEGER_32) (ti4_1 + loc3)));
			/* END INLINED CODE */
			ti4_1 = ti4_3;
			if ((EIF_BOOLEAN)(ti4_1 == Result)) break;
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_7_);
			/* INLINED CODE (SPECIAL.item) */
			ti4_3 = *((EIF_INTEGER_32 *)RTCW(tr1) + (Result));
			/* END INLINED CODE */
			ti4_2 = ti4_3;
			Result = (EIF_INTEGER_32) ti4_2;
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_9_);
			loc6 = tr1;
			if ((EIF_BOOLEAN) (EIF_TEST(loc6) && (EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 110L)))) {
				/* INLINED CODE (SPECIAL.item) */
				ti4_3 = *((EIF_INTEGER_32 *)loc6 + (loc3));
				/* END INLINED CODE */
				ti4_2 = ti4_3;
				loc3 = (EIF_INTEGER_32) ti4_2;
			}
		}
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
		tr2 = *(EIF_REFERENCE *)(Current + _REFACS_6_);
		/* INLINED CODE (SPECIAL.item) */
		ti4_3 = *((EIF_INTEGER_32 *)RTCW(tr2) + (Result));
		/* END INLINED CODE */
		ti4_2 = ti4_3;
		/* INLINED CODE (SPECIAL.item) */
		ti4_4 = *((EIF_INTEGER_32 *)RTCW(tr1) + ((EIF_INTEGER_32) (ti4_2 + loc3)));
		/* END INLINED CODE */
		ti4_2 = ti4_4;
		Result = (EIF_INTEGER_32) ti4_2;
		loc1++;
	}
	RTLE;
	return Result;
}

/* {YY_COMPRESSED_SCANNER_SKELETON}.yy_null_trans_state */
EIF_INTEGER_32 F1833_20664 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc2 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCFDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,loc3);
	RTLIU(4);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_10_);
	/* INLINED CODE (SPECIAL.item) */
	ti4_2 = *((EIF_INTEGER_32 *)RTCW(tr1) + (arg1));
	/* END INLINED CODE */
	ti4_1 = ti4_2;
	if ((EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L))) {
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_8_) = (EIF_INTEGER_32) arg1;
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_9_) = (EIF_INTEGER_32) *(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_2_);
	}
	Result = (EIF_INTEGER_32) arg1;
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
		tr2 = *(EIF_REFERENCE *)(Current + _REFACS_6_);
		/* INLINED CODE (SPECIAL.item) */
		ti4_2 = *((EIF_INTEGER_32 *)RTCW(tr2) + (Result));
		/* END INLINED CODE */
		ti4_1 = ti4_2;
		/* INLINED CODE (SPECIAL.item) */
		ti4_3 = *((EIF_INTEGER_32 *)RTCW(tr1) + ((EIF_INTEGER_32) (ti4_1 + loc1)));
		/* END INLINED CODE */
		ti4_1 = ti4_3;
		if ((EIF_BOOLEAN)(ti4_1 == Result)) break;
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_7_);
		/* INLINED CODE (SPECIAL.item) */
		ti4_3 = *((EIF_INTEGER_32 *)RTCW(tr1) + (Result));
		/* END INLINED CODE */
		ti4_2 = ti4_3;
		Result = (EIF_INTEGER_32) ti4_2;
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_9_);
		loc3 = tr1;
		if ((EIF_BOOLEAN) (EIF_TEST(loc3) && (EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 110L)))) {
			/* INLINED CODE (SPECIAL.item) */
			ti4_3 = *((EIF_INTEGER_32 *)loc3 + (loc1));
			/* END INLINED CODE */
			ti4_2 = ti4_3;
			loc1 = (EIF_INTEGER_32) ti4_2;
		}
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	tr2 = *(EIF_REFERENCE *)(Current + _REFACS_6_);
	/* INLINED CODE (SPECIAL.item) */
	ti4_3 = *((EIF_INTEGER_32 *)RTCW(tr2) + (Result));
	/* END INLINED CODE */
	ti4_2 = ti4_3;
	/* INLINED CODE (SPECIAL.item) */
	ti4_4 = *((EIF_INTEGER_32 *)RTCW(tr1) + ((EIF_INTEGER_32) (ti4_2 + loc1)));
	/* END INLINED CODE */
	ti4_2 = ti4_4;
	Result = (EIF_INTEGER_32) ti4_2;
	loc2 = (EIF_BOOLEAN) (EIF_BOOLEAN)(Result == ((EIF_INTEGER_32) 109L));
	if (loc2) {
		RTLE;
		return (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	}
	RTLE;
	return Result;
}

void EIF_Minit1816 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
