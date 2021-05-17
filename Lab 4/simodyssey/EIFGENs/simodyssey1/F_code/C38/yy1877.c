/*
 * Code for class YY_PARSER_SKELETON
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "yy1877.h"
#include "eif_built_in.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {YY_PARSER_SKELETON}.make */
void F1894_21960 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = RTOUCR(194,F336_13034, (Current));
	tr1 = F80_9916(RTCW(tr1), ((EIF_INTEGER_32) 200L));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_25_) = (EIF_REFERENCE) tr1;
	F1895_22036(Current);
	F1895_22035(Current);
	RTLE;
}

/* {YY_PARSER_SKELETON}.parse */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
void F1894_21961 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTED;
	EIF_INTEGER_32 EIF_VOLATILE loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 EIF_VOLATILE loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 EIF_VOLATILE loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 EIF_VOLATILE loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 EIF_VOLATILE loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 EIF_VOLATILE loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 EIF_VOLATILE loc7 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE EIF_VOLATILE saved_except = (EIF_REFERENCE) 0;
	RTS_SDX;
	EIF_REFERENCE  EIF_VOLATILE tr1 = NULL;
	EIF_INTEGER_32  EIF_VOLATILE ti4_1;
	EIF_INTEGER_32  EIF_VOLATILE ti4_2;
	EIF_INTEGER_32  EIF_VOLATILE ti4_3;
	EIF_BOOLEAN  EIF_VOLATILE tb1;
	RTLD;
	RTXD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,saved_except);
	RTLIU(3);
	RTXSLS;
	
	RTEV;
	RTGC;
	RTE_T
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_30_) == ((EIF_INTEGER_32) 105L))) {
		loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_21_);
		loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_22_);
		loc3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_23_);
		loc4 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_24_);
		loc5 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_25_);
		loc6 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_26_);
		loc7 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_27_);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_30_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 104L);
		if ((EIF_BOOLEAN)(loc7 == ((EIF_INTEGER_32) 3L))) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_16_);
			/* INLINED CODE (SPECIAL.item) */
			ti4_2 = *((EIF_INTEGER_32 *)RTCW(tr1) + (loc3));
			/* END INLINED CODE */
			ti4_1 = ti4_2;
			loc3 = (EIF_INTEGER_32) ti4_1;
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_25_);
			/* INLINED CODE (SPECIAL.item) */
			ti4_3 = *((EIF_INTEGER_32 *)RTCW(tr1) + (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_28_)));
			/* END INLINED CODE */
			loc6 = ti4_3;
			loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 39L));
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_20_);
			/* INLINED CODE (SPECIAL.item) */
			ti4_2 = *((EIF_INTEGER_32 *)RTCW(tr1) + (loc5));
			/* END INLINED CODE */
			loc2 = ti4_2;
			loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + loc6);
			tb1 = '\0';
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc2 >= ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (loc2 <= ((EIF_INTEGER_32) 46L)))) {
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_22_);
				/* INLINED CODE (SPECIAL.item) */
				ti4_2 = *((EIF_INTEGER_32 *)RTCW(tr1) + (loc2));
				/* END INLINED CODE */
				ti4_1 = ti4_2;
				tb1 = (EIF_BOOLEAN)(ti4_1 == loc6);
			}
			if (tb1) {
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_21_);
				/* INLINED CODE (SPECIAL.item) */
				ti4_2 = *((EIF_INTEGER_32 *)RTCW(tr1) + (loc2));
				/* END INLINED CODE */
				ti4_1 = ti4_2;
				loc2 = (EIF_INTEGER_32) ti4_1;
			} else {
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_18_);
				/* INLINED CODE (SPECIAL.item) */
				ti4_2 = *((EIF_INTEGER_32 *)RTCW(tr1) + (loc5));
				/* END INLINED CODE */
				loc2 = ti4_2;
			}
			loc7 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		}
	} else {
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_31_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		*(EIF_BOOLEAN *)(Current+ _CHROFF_52_3_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_29_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		F1895_22037(Current);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_28_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_25_);
		loc1 = (EIF_INTEGER_32) eif_builtin_SPECIAL_count (tr1);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_30_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 104L);
		loc7 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	}
	for (;;) {
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_30_) != ((EIF_INTEGER_32) 104L))) break;
		switch (loc7) {
			case 1L:
				(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_28_))++;
				if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_28_) >= loc1)) {
					loc1 += ((EIF_INTEGER_32) 200L);
					tr1 = RTOUCR(194,F336_13034, (Current));
					tr1 = F80_9924(RTCW(tr1), *(EIF_REFERENCE *)(Current + _REFACS_25_), loc1);
					RTAR(Current, tr1);
					*(EIF_REFERENCE *)(Current + _REFACS_25_) = (EIF_REFERENCE) tr1;
				}
				tr1 = RTOUCR(194,F336_13034, (Current));
				F80_9921(RTCW(tr1), *(EIF_REFERENCE *)(Current + _REFACS_25_), loc2, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_28_));
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_19_);
				/* INLINED CODE (SPECIAL.item) */
				ti4_2 = *((EIF_INTEGER_32 *)RTCW(tr1) + (loc2));
				/* END INLINED CODE */
				loc3 = ti4_2;
				if ((EIF_BOOLEAN)(loc3 == ((EIF_INTEGER_32) -32768L))) {
					loc7 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
				} else {
					if (*(EIF_BOOLEAN *)(Current+ _CHROFF_52_3_)) {
						F1833_20651(Current);
						*(EIF_BOOLEAN *)(Current+ _CHROFF_52_3_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
					}
					if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_0_) > ((EIF_INTEGER_32) 0L))) {
						if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_0_) <= ((EIF_INTEGER_32) 293L))) {
							tr1 = *(EIF_REFERENCE *)(Current + _REFACS_15_);
							/* INLINED CODE (SPECIAL.item) */
							ti4_3 = *((EIF_INTEGER_32 *)RTCW(tr1) + (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_0_)));
							/* END INLINED CODE */
							loc4 = ti4_3;
						} else {
							loc4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 52L);
						}
						loc3 += loc4;
					} else {
						if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_0_) == ((EIF_INTEGER_32) 0L))) {
							loc4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
						} else {
							(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_31_))++;
							F1895_22044(Current, loc2);
							F1894_21966(Current);
							loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
						}
					}
					tb1 = '\01';
					if (!((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc3 < ((EIF_INTEGER_32) 0L)) || (EIF_BOOLEAN) (loc3 > ((EIF_INTEGER_32) 46L))))) {
						tr1 = *(EIF_REFERENCE *)(Current + _REFACS_22_);
						/* INLINED CODE (SPECIAL.item) */
						ti4_2 = *((EIF_INTEGER_32 *)RTCW(tr1) + (loc3));
						/* END INLINED CODE */
						ti4_1 = ti4_2;
						tb1 = (EIF_BOOLEAN)(ti4_1 != loc4);
					}
					if (tb1) {
						loc7 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
					} else {
						tr1 = *(EIF_REFERENCE *)(Current + _REFACS_21_);
						/* INLINED CODE (SPECIAL.item) */
						ti4_2 = *((EIF_INTEGER_32 *)RTCW(tr1) + (loc3));
						/* END INLINED CODE */
						ti4_1 = ti4_2;
						loc3 = (EIF_INTEGER_32) ti4_1;
						if ((EIF_BOOLEAN) (loc3 < ((EIF_INTEGER_32) 0L))) {
							if ((EIF_BOOLEAN)(loc3 == ((EIF_INTEGER_32) -32768L))) {
								loc7 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
							} else {
								loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) -loc3;
								loc7 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
							}
						} else {
							if ((EIF_BOOLEAN)(loc3 == ((EIF_INTEGER_32) 0L))) {
								loc7 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
							} else {
								if ((EIF_BOOLEAN)(loc3 == ((EIF_INTEGER_32) 42L))) {
									F1894_21965(Current);
								} else {
									if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_0_) > ((EIF_INTEGER_32) 0L))) {
										*(EIF_BOOLEAN *)(Current+ _CHROFF_52_3_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
									}
									F1895_22039(Current, loc4);
									if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_29_) != ((EIF_INTEGER_32) 0L))) {
										(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_29_))--;
									}
									loc2 = (EIF_INTEGER_32) loc3;
								}
							}
						}
					}
				}
				break;
			case 2L:
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_17_);
				/* INLINED CODE (SPECIAL.item) */
				ti4_2 = *((EIF_INTEGER_32 *)RTCW(tr1) + (loc2));
				/* END INLINED CODE */
				loc3 = ti4_2;
				if ((EIF_BOOLEAN)(loc3 == ((EIF_INTEGER_32) 0L))) {
					loc7 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
				} else {
					loc7 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
				}
				break;
			case 3L:
				F1895_22043(Current, loc3);
				switch (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_30_)) {
					case 104L:
						tr1 = *(EIF_REFERENCE *)(Current + _REFACS_16_);
						/* INLINED CODE (SPECIAL.item) */
						ti4_2 = *((EIF_INTEGER_32 *)RTCW(tr1) + (loc3));
						/* END INLINED CODE */
						ti4_1 = ti4_2;
						loc3 = (EIF_INTEGER_32) ti4_1;
						tr1 = *(EIF_REFERENCE *)(Current + _REFACS_25_);
						/* INLINED CODE (SPECIAL.item) */
						ti4_3 = *((EIF_INTEGER_32 *)RTCW(tr1) + (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_28_)));
						/* END INLINED CODE */
						loc6 = ti4_3;
						loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 39L));
						tr1 = *(EIF_REFERENCE *)(Current + _REFACS_20_);
						/* INLINED CODE (SPECIAL.item) */
						ti4_2 = *((EIF_INTEGER_32 *)RTCW(tr1) + (loc5));
						/* END INLINED CODE */
						loc2 = ti4_2;
						loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + loc6);
						tb1 = '\0';
						if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc2 >= ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (loc2 <= ((EIF_INTEGER_32) 46L)))) {
							tr1 = *(EIF_REFERENCE *)(Current + _REFACS_22_);
							/* INLINED CODE (SPECIAL.item) */
							ti4_2 = *((EIF_INTEGER_32 *)RTCW(tr1) + (loc2));
							/* END INLINED CODE */
							ti4_1 = ti4_2;
							tb1 = (EIF_BOOLEAN)(ti4_1 == loc6);
						}
						if (tb1) {
							tr1 = *(EIF_REFERENCE *)(Current + _REFACS_21_);
							/* INLINED CODE (SPECIAL.item) */
							ti4_2 = *((EIF_INTEGER_32 *)RTCW(tr1) + (loc2));
							/* END INLINED CODE */
							ti4_1 = ti4_2;
							loc2 = (EIF_INTEGER_32) ti4_1;
						} else {
							tr1 = *(EIF_REFERENCE *)(Current + _REFACS_18_);
							/* INLINED CODE (SPECIAL.item) */
							ti4_2 = *((EIF_INTEGER_32 *)RTCW(tr1) + (loc5));
							/* END INLINED CODE */
							loc2 = ti4_2;
						}
						loc7 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
						break;
					case 105L:
						*(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_21_) = (EIF_INTEGER_32) loc1;
						*(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_22_) = (EIF_INTEGER_32) loc2;
						*(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_23_) = (EIF_INTEGER_32) loc3;
						*(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_24_) = (EIF_INTEGER_32) loc4;
						*(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_25_) = (EIF_INTEGER_32) loc5;
						*(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_26_) = (EIF_INTEGER_32) loc6;
						*(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_27_) = (EIF_INTEGER_32) loc7;
						break;
					case 103L:
						*(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_30_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 104L);
						loc7 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
						break;
				}
				break;
			case 4L:
				if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_29_) == ((EIF_INTEGER_32) 3L))) {
					if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_0_) <= ((EIF_INTEGER_32) 0L))) {
						F1894_21966(Current);
					} else {
						*(EIF_BOOLEAN *)(Current+ _CHROFF_52_3_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
						loc7 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 5L);
					}
				} else {
					if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_29_) == ((EIF_INTEGER_32) 0L))) {
						(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_31_))++;
						F1895_22044(Current, loc2);
					}
					*(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_29_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
					loc7 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 5L);
				}
				break;
			case 5L:
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_19_);
				/* INLINED CODE (SPECIAL.item) */
				ti4_2 = *((EIF_INTEGER_32 *)RTCW(tr1) + (loc2));
				/* END INLINED CODE */
				loc3 = ti4_2;
				if ((EIF_BOOLEAN)(loc3 == ((EIF_INTEGER_32) -32768L))) {
					loc7 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 6L);
				} else {
					loc3 += ((EIF_INTEGER_32) 1L);
					tb1 = '\01';
					if (!((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc3 < ((EIF_INTEGER_32) 0L)) || (EIF_BOOLEAN) (loc3 > ((EIF_INTEGER_32) 46L))))) {
						tr1 = *(EIF_REFERENCE *)(Current + _REFACS_22_);
						/* INLINED CODE (SPECIAL.item) */
						ti4_2 = *((EIF_INTEGER_32 *)RTCW(tr1) + (loc3));
						/* END INLINED CODE */
						ti4_1 = ti4_2;
						tb1 = (EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 1L));
					}
					if (tb1) {
						loc7 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 6L);
					} else {
						tr1 = *(EIF_REFERENCE *)(Current + _REFACS_21_);
						/* INLINED CODE (SPECIAL.item) */
						ti4_2 = *((EIF_INTEGER_32 *)RTCW(tr1) + (loc3));
						/* END INLINED CODE */
						ti4_1 = ti4_2;
						loc3 = (EIF_INTEGER_32) ti4_1;
						if ((EIF_BOOLEAN) (loc3 < ((EIF_INTEGER_32) 0L))) {
							if ((EIF_BOOLEAN)(loc3 == ((EIF_INTEGER_32) -32768L))) {
								loc7 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 6L);
							} else {
								loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) -loc3;
								loc7 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
							}
						} else {
							if ((EIF_BOOLEAN)(loc3 == ((EIF_INTEGER_32) 0L))) {
								loc7 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 6L);
							} else {
								if ((EIF_BOOLEAN)(loc3 == ((EIF_INTEGER_32) 42L))) {
									F1894_21965(Current);
								} else {
									F1895_22040(Current);
									loc2 = (EIF_INTEGER_32) loc3;
									loc7 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
								}
							}
						}
					}
				}
				break;
			case 6L:
				if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_28_) == ((EIF_INTEGER_32) 0L))) {
					F1894_21966(Current);
				} else {
					F1895_22041(Current, loc2);
					(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_28_))--;
					tr1 = *(EIF_REFERENCE *)(Current + _REFACS_25_);
					/* INLINED CODE (SPECIAL.item) */
					ti4_3 = *((EIF_INTEGER_32 *)RTCW(tr1) + (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_28_)));
					/* END INLINED CODE */
					loc2 = ti4_3;
					loc7 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 5L);
				}
				break;
			default:
				RTEC(EN_WHEN);
		}
	}
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_30_) != ((EIF_INTEGER_32) 105L))) {
		F1894_22011(Current);
	}
	RTE_E
	RTXSC;
	RTS_SRR
	F1894_21966(Current);
	F1894_22011(Current);
	/* NOTREACHED */
	RTE_EE
	RTEOK;
	RTLE;
}
#undef EIF_VOLATILE
#define EIF_VOLATILE

/* {YY_PARSER_SKELETON}.error_count */
EIF_INTEGER_32 F1894_21964 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_31_);
}


/* {YY_PARSER_SKELETON}.accept */
void F1894_21965 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_30_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 101L);
}

/* {YY_PARSER_SKELETON}.abort */
void F1894_21966 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_30_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 102L);
}

/* {YY_PARSER_SKELETON}.clear_all */
void F1894_21967 (EIF_REFERENCE Current)
{
	GTCX
	
	
	F1894_21968(Current);
}

/* {YY_PARSER_SKELETON}.clear_stacks */
void F1894_21968 (EIF_REFERENCE Current)
{
	GTCX
	
	
	F1895_22038(Current);
}

/* {YY_PARSER_SKELETON}.report_eof_expected_error */
void F1894_21973 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	tr1 = RTMS_EX_H("parse error",11,283683698);
	F1895_22117(Current, tr1);
	RTLE;
}

/* {YY_PARSER_SKELETON}.yyfixed_array */
EIF_REFERENCE F1894_22004 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,Result);
	RTLIU(4);
	
	RTGC;
	tr1 = RTOUCR(194,F336_13034, (Current));
	Result = F80_9919(RTCW(tr1), arg1);
	RTLE;
	return Result;
}

/* {YY_PARSER_SKELETON}.yyarray_subcopy */
void F1894_22005 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_INTEGER_32 arg5)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,arg2);
	RTLIU(4);
	
	RTGC;
	tr1 = RTOUCR(195,F538_14243, (Current));
	F1269_14963(RTCW(tr1), arg1, arg2, arg3, arg4, arg5);
	RTLE;
}

/* {YY_PARSER_SKELETON}.yy_clear_all */
void F1894_22011 (EIF_REFERENCE Current)
{
	GTCX
	
	
	F1894_21967(Current);
}

void EIF_Minit1877 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
