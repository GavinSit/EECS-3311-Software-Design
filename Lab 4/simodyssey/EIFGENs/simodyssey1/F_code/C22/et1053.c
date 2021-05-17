/*
 * Code for class ETF_SIMODYSSEY
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "et1053.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {ETF_SIMODYSSEY}.make */
void F101_10070 (EIF_REFERENCE Current)
{
	GTCX
	struct eif_ex_1040 sloc1;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) sloc1.data;
	struct eif_ex_1047 sloc2;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) sloc2.data;
	struct eif_ex_1045 sloc3;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) sloc3.data;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	memset (&sloc1.overhead, 0, OVERHEAD + _OBJSIZ_0_0_0_0_0_0_0_0_);
	sloc1.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc1.overhead, eif_new_type(89, 0x00).id);
	memset (&sloc2.overhead, 0, OVERHEAD + _OBJSIZ_0_0_0_0_0_0_0_0_);
	sloc2.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc2.overhead, eif_new_type(96, 0x00).id);
	memset (&sloc3.overhead, 0, OVERHEAD + _OBJSIZ_0_0_0_0_0_0_0_0_);
	sloc3.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc3.overhead, eif_new_type(94, 0x00).id);
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,loc2);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLR(4,loc3);
	RTLIU(5);
	
	RTGC;
	tr1 = RTOUCR(169,F97_10064, (RTCW(loc2)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	tr1 = RTOUCR(170,F90_9990, (RTCW(loc1)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	tr1 = RTOUCR(171,F95_10063, (RTCW(loc3)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_new_type(91, 1).id);
	F92_10035(RTCW(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_new_type(1560, 1).id);
	F1558_6510(RTCW(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_5_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_new_type(1560, 1).id);
	F1558_6510(RTCW(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_4_) = (EIF_REFERENCE) tr1;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_6_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTLE;
}

/* {ETF_SIMODYSSEY}.reset */
void F101_10080 (EIF_REFERENCE Current)
{
	GTCX
	
	
	F101_10070(Current);
}

/* {ETF_SIMODYSSEY}.abort */
void F101_10081 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	F258_11821(RTCW(tr1));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	tb1 = F92_10043(RTCW(tr1));
	if (tb1) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
		F91_10022(RTCW(tr1));
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tr1 = F257_11793(RTCW(tr1));
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_5_) = (EIF_REFERENCE) tr1;
	} else {
		F101_10091(Current, (EIF_BOOLEAN) 0);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tr1 = F257_11785(RTCW(tr1));
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_5_) = (EIF_REFERENCE) tr1;
	}
	RTLE;
}

/* {ETF_SIMODYSSEY}.land */
void F101_10082 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	tb1 = F92_10043(RTCW(tr1));
	if (tb1) {
		tb1 = '\0';
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		tb2 = F92_10045(RTCW(tr1));
		if (tb2) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
			tb2 = F92_10046(RTCW(tr1));
			tb1 = tb2;
		}
		if (tb1) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			F258_11820(RTCW(tr1));
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			F258_11822(RTCW(tr1));
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
			F91_10026(RTCW(tr1));
			RTCT0("attached {ENTITY_MOVABLE}c.entities_index_of (c.get_explorer.get_land_location) as planet", EX_CHECK);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
			tr2 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
			tr2 = F91_10003(RTCW(tr2));
			ti4_1 = F417_13439(RTCW(tr2));
			tr1 = F91_10012(RTCW(tr1), ti4_1);
			loc1 = tr1;
			loc1 = RTRV(eif_new_type(417, 0x01),loc1);
			if (EIF_TEST(loc1)) {
				RTCK0;
			} else {
				RTCF0;
			}
			tb1 = F418_13462(loc1);
			if (tb1) {
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
				tr1 = F257_11789(RTCW(tr1));
				RTAR(Current, tr1);
				*(EIF_REFERENCE *)(Current + _REFACS_5_) = (EIF_REFERENCE) tr1;
				*(EIF_BOOLEAN *)(Current+ _CHROFF_6_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			} else {
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
				tr2 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
				tr2 = F91_10003(RTCW(tr2));
				tr2 = F417_13441(RTCW(tr2));
				tr1 = F257_11788(RTCW(tr1), tr2);
				RTAR(Current, tr1);
				*(EIF_REFERENCE *)(Current + _REFACS_5_) = (EIF_REFERENCE) tr1;
			}
		} else {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			F258_11821(RTCW(tr1));
			F101_10091(Current, (EIF_BOOLEAN) 0);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
			tr1 = F91_10003(RTCW(tr1));
			tb1 = F417_13438(RTCW(tr1));
			if (tb1) {
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
				tr2 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
				tr2 = F91_10003(RTCW(tr2));
				tr2 = F417_13441(RTCW(tr2));
				tr1 = F257_11802(RTCW(tr1), tr2);
				RTAR(Current, tr1);
				*(EIF_REFERENCE *)(Current + _REFACS_5_) = (EIF_REFERENCE) tr1;
			} else {
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
				tb1 = F91_10010(RTCW(tr1));
				if ((EIF_BOOLEAN) !tb1) {
					tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
					tr2 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
					tr2 = F91_10003(RTCW(tr2));
					tr2 = F417_13441(RTCW(tr2));
					tr1 = F257_11800(RTCW(tr1), tr2);
					RTAR(Current, tr1);
					*(EIF_REFERENCE *)(Current + _REFACS_5_) = (EIF_REFERENCE) tr1;
				} else {
					tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
					tb1 = F91_10011(RTCW(tr1));
					if ((EIF_BOOLEAN) !tb1) {
						tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
						tr2 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
						tr2 = F91_10003(RTCW(tr2));
						tr2 = F417_13441(RTCW(tr2));
						tr1 = F257_11801(RTCW(tr1), tr2);
						RTAR(Current, tr1);
						*(EIF_REFERENCE *)(Current + _REFACS_5_) = (EIF_REFERENCE) tr1;
					} else {
						tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
						tr2 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
						tr2 = F91_10003(RTCW(tr2));
						tr2 = F417_13441(RTCW(tr2));
						tr1 = F257_11799(RTCW(tr1), tr2);
						RTAR(Current, tr1);
						*(EIF_REFERENCE *)(Current + _REFACS_5_) = (EIF_REFERENCE) tr1;
					}
				}
			}
			*(EIF_BOOLEAN *)(Current+ _CHROFF_6_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
	} else {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		F258_11821(RTCW(tr1));
		F101_10091(Current, (EIF_BOOLEAN) 0);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tr1 = F257_11785(RTCW(tr1));
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_5_) = (EIF_REFERENCE) tr1;
	}
	RTLE;
}

/* {ETF_SIMODYSSEY}.lift_off */
void F101_10083 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	tb1 = F92_10043(RTCW(tr1));
	if (tb1) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
		tr1 = F91_10003(RTCW(tr1));
		tb1 = F417_13438(RTCW(tr1));
		if (tb1) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			F258_11820(RTCW(tr1));
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			F258_11822(RTCW(tr1));
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
			F91_10027(RTCW(tr1));
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			tr2 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
			tr2 = F91_10003(RTCW(tr2));
			tr2 = F417_13441(RTCW(tr2));
			tr1 = F257_11804(RTCW(tr1), tr2);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + _REFACS_5_) = (EIF_REFERENCE) tr1;
		} else {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			F258_11821(RTCW(tr1));
			F101_10091(Current, (EIF_BOOLEAN) 0);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			tr2 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
			tr2 = F91_10003(RTCW(tr2));
			tr2 = F417_13441(RTCW(tr2));
			tr1 = F257_11803(RTCW(tr1), tr2);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + _REFACS_5_) = (EIF_REFERENCE) tr1;
			*(EIF_BOOLEAN *)(Current+ _CHROFF_6_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
	} else {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		F258_11821(RTCW(tr1));
		F101_10091(Current, (EIF_BOOLEAN) 0);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tr1 = F257_11785(RTCW(tr1));
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_5_) = (EIF_REFERENCE) tr1;
	}
	RTLE;
}

/* {ETF_SIMODYSSEY}.move */
void F101_10084 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	EIF_CHARACTER_8 tc1;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLR(3,tr2);
	RTLR(4,loc2);
	RTLR(5,loc3);
	RTLIU(6);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	tb1 = F92_10043(RTCW(tr1));
	if (tb1) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		tb1 = F92_10041(RTCW(tr1), arg1);
		if (tb1) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			F258_11820(RTCW(tr1));
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			F258_11822(RTCW(tr1));
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
			F91_10023(RTCW(tr1), arg1);
			loc1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
			loc1 = F91_10003(RTCW(loc1));
			loc1 = F417_13437(RTCW(loc1));
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
			tr1 = F91_10003(RTCW(tr1));
			ti4_1 = F417_13435(RTCW(tr1));
			if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
				*(EIF_BOOLEAN *)(Current+ _CHROFF_6_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
				tr2 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
				tr2 = F91_10003(RTCW(tr2));
				tr2 = F417_13441(RTCW(tr2));
				tr1 = F257_11792(RTCW(tr1), tr2);
				tr2 = RTMS_EX_H("\012",1,10);
				tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
				tr2 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
				tr2 = F257_11794(RTCW(tr2));
				tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
				RTAR(Current, tr1);
				*(EIF_REFERENCE *)(Current + _REFACS_5_) = (EIF_REFERENCE) tr1;
			} else {
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
				tb1 = F91_10009(RTCW(tr1));
				if (tb1) {
					*(EIF_BOOLEAN *)(Current+ _CHROFF_6_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
					tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
					tr1 = F257_11795(RTCW(tr1));
					tr2 = RTMS_EX_H("\012",1,10);
					tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
					tr2 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
					tr2 = F257_11794(RTCW(tr2));
					tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
					RTAR(Current, tr1);
					*(EIF_REFERENCE *)(Current + _REFACS_5_) = (EIF_REFERENCE) tr1;
				} else {
					tb1 = '\01';
					tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
					tr1 = F91_10008(RTCW(tr1));
					ti4_1 = eif_integer_32_item(RTCW(loc1),1);
					ti4_2 = eif_integer_32_item(RTCW(loc1),2);
					tr1 = F940_3247(RTCW(tr1), ti4_1, ti4_2);
					tb2 = F86_9952(RTCW(tr1), (EIF_CHARACTER_8) '*');
					if (!tb2) {
						tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
						tr1 = F91_10008(RTCW(tr1));
						ti4_1 = eif_integer_32_item(RTCW(loc1),1);
						ti4_2 = eif_integer_32_item(RTCW(loc1),2);
						tr1 = F940_3247(RTCW(tr1), ti4_1, ti4_2);
						tb2 = F86_9952(RTCW(tr1), (EIF_CHARACTER_8) 'Y');
						tb1 = tb2;
					}
					if (tb1) {
						tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
						tr1 = F91_10008(RTCW(tr1));
						ti4_1 = eif_integer_32_item(RTCW(loc1),1);
						ti4_2 = eif_integer_32_item(RTCW(loc1),2);
						tr1 = F940_3247(RTCW(tr1), ti4_1, ti4_2);
						loc2 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_1_);
						F951_4104(RTCW(loc2));
						for (;;) {
							tb1 = F882_3332(RTCW(loc2));
							if (tb1) break;
							tb2 = '\01';
							tr1 = F951_4078(RTCW(loc2));
							tc1 = *(EIF_CHARACTER_8 *)(RTCW(tr1) + O11108[Dtype(tr1)-415]);
							if (!(tc1 == (EIF_CHARACTER_8) '*')) {
								tr1 = F951_4078(RTCW(loc2));
								tc1 = *(EIF_CHARACTER_8 *)(RTCW(tr1) + O11108[Dtype(tr1)-415]);
								tb2 = (tc1 == (EIF_CHARACTER_8) 'Y');
							}
							if (tb2) {
								RTCT0("attached {ENTITY_STAR} sector.item as star", EX_CHECK);
								tr1 = F951_4078(RTCW(loc2));
								loc3 = tr1;
								loc3 = RTRV(eif_new_type(418, 0x01),loc3);
								if (EIF_TEST(loc3)) {
									RTCK0;
								} else {
									RTCF0;
								}
								tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
								tr1 = F91_10003(RTCW(tr1));
								ti4_1 = F419_13476(loc3);
								F417_13444(RTCW(tr1), ti4_1);
								F951_4105(RTCW(loc2));
							}
							F951_4106(RTCW(loc2));
						}
					}
				}
			}
		} else {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			F258_11821(RTCW(tr1));
			F101_10091(Current, (EIF_BOOLEAN) 0);
			*(EIF_BOOLEAN *)(Current+ _CHROFF_6_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			tb2 = '\0';
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
			tr1 = F91_10003(RTCW(tr1));
			tb3 = F417_13438(RTCW(tr1));
			if ((EIF_BOOLEAN) !tb3) {
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
				tb3 = F91_10002(RTCW(tr1));
				tb2 = tb3;
			}
			if (tb2) {
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
				tr1 = F257_11797(RTCW(tr1));
				RTAR(Current, tr1);
				*(EIF_REFERENCE *)(Current + _REFACS_5_) = (EIF_REFERENCE) tr1;
			} else {
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
				tr1 = F91_10003(RTCW(tr1));
				tb2 = F417_13438(RTCW(tr1));
				if (tb2) {
					tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
					tr2 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
					tr2 = F91_10003(RTCW(tr2));
					tr2 = F417_13441(RTCW(tr2));
					tr1 = F257_11798(RTCW(tr1), tr2);
					RTAR(Current, tr1);
					*(EIF_REFERENCE *)(Current + _REFACS_5_) = (EIF_REFERENCE) tr1;
				}
			}
		}
	} else {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		F258_11821(RTCW(tr1));
		F101_10091(Current, (EIF_BOOLEAN) 0);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tr1 = F257_11785(RTCW(tr1));
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_5_) = (EIF_REFERENCE) tr1;
	}
	RTLE;
}

/* {ETF_SIMODYSSEY}.pass */
void F101_10085 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	tb1 = F92_10043(RTCW(tr1));
	if (tb1) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		F258_11820(RTCW(tr1));
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		F258_11822(RTCW(tr1));
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
		F91_10024(RTCW(tr1));
	} else {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		F258_11821(RTCW(tr1));
		F101_10091(Current, (EIF_BOOLEAN) 0);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tr1 = F257_11785(RTCW(tr1));
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_5_) = (EIF_REFERENCE) tr1;
	}
	RTLE;
}

/* {ETF_SIMODYSSEY}.play */
void F101_10086 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	tb1 = F92_10040(RTCW(tr1));
	if (tb1) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		F258_11820(RTCW(tr1));
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		F258_11822(RTCW(tr1));
		tr1 = *(EIF_REFERENCE *)(Current);
		F93_10057(RTCW(tr1), ((EIF_INTEGER_32) 30L));
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
		tr2 = RTMS_EX_H("play",4,1886151033);
		F91_10021(RTCW(tr1), tr2);
	} else {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		F258_11821(RTCW(tr1));
		F101_10091(Current, (EIF_BOOLEAN) 0);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tr1 = F257_11786(RTCW(tr1));
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_5_) = (EIF_REFERENCE) tr1;
	}
	RTLE;
}

/* {ETF_SIMODYSSEY}.status */
void F101_10087 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLIU(5);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	F258_11821(RTCW(tr1));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	tb1 = F92_10043(RTCW(tr1));
	if (tb1) {
		loc1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
		loc1 = F91_10003(RTCW(loc1));
		loc1 = F417_13437(RTCW(loc1));
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tr2 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
		tr2 = F91_10003(RTCW(tr2));
		tr2 = F417_13442(RTCW(tr2));
		tr3 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
		tr3 = F91_10003(RTCW(tr3));
		ti4_1 = F417_13435(RTCW(tr3));
		tr3 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
		tr3 = F91_10003(RTCW(tr3));
		ti4_2 = F417_13436(RTCW(tr3));
		tr3 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
		tr3 = F91_10003(RTCW(tr3));
		tb1 = F417_13438(RTCW(tr3));
		tr1 = F257_11796(RTCW(tr1), tr2, ti4_1, ti4_2, tb1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_5_) = (EIF_REFERENCE) tr1;
		*(EIF_BOOLEAN *)(Current+ _CHROFF_6_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	} else {
		F101_10091(Current, (EIF_BOOLEAN) 0);
		F101_10091(Current, (EIF_BOOLEAN) 0);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tr1 = F257_11785(RTCW(tr1));
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_5_) = (EIF_REFERENCE) tr1;
	}
	RTLE;
}

/* {ETF_SIMODYSSEY}.test */
void F101_10088 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	tb1 = F92_10040(RTCW(tr1));
	if (tb1) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		F258_11820(RTCW(tr1));
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		F258_11822(RTCW(tr1));
		tr1 = *(EIF_REFERENCE *)(Current);
		F93_10057(RTCW(tr1), arg1);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
		tr2 = RTMS_EX_H("test",4,1952805748);
		F91_10021(RTCW(tr1), tr2);
	} else {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		F258_11821(RTCW(tr1));
		F101_10091(Current, (EIF_BOOLEAN) 0);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tr1 = F257_11786(RTCW(tr1));
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_5_) = (EIF_REFERENCE) tr1;
		*(EIF_BOOLEAN *)(Current+ _CHROFF_6_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	RTLE;
}

/* {ETF_SIMODYSSEY}.wormhole */
void F101_10089 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	tb1 = F92_10043(RTCW(tr1));
	if (tb1) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		tb1 = F92_10044(RTCW(tr1));
		if (tb1) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			F258_11820(RTCW(tr1));
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			F258_11822(RTCW(tr1));
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
			F91_10025(RTCW(tr1));
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
			tb1 = F91_10009(RTCW(tr1));
			if (tb1) {
				*(EIF_BOOLEAN *)(Current+ _CHROFF_6_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
				tr1 = F257_11795(RTCW(tr1));
				tr2 = RTMS_EX_H("\012",1,10);
				tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
				tr2 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
				tr2 = F257_11794(RTCW(tr2));
				tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
				RTAR(Current, tr1);
				*(EIF_REFERENCE *)(Current + _REFACS_5_) = (EIF_REFERENCE) tr1;
			}
		} else {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			F258_11821(RTCW(tr1));
			F101_10091(Current, (EIF_BOOLEAN) 0);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			tr2 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
			tr2 = F91_10003(RTCW(tr2));
			tr2 = F417_13441(RTCW(tr2));
			tr1 = F257_11790(RTCW(tr1), tr2);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + _REFACS_5_) = (EIF_REFERENCE) tr1;
		}
	} else {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		F258_11821(RTCW(tr1));
		F101_10091(Current, (EIF_BOOLEAN) 0);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tr1 = F257_11785(RTCW(tr1));
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_5_) = (EIF_REFERENCE) tr1;
	}
	RTLE;
}

/* {ETF_SIMODYSSEY}.out */
EIF_REFERENCE F101_10090 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(5);
	RTLR(0,Result);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLIU(5);
	
	RTGC;
	Result = RTLNS(eif_new_type(1560, 0x01).id, 1560, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F1558_6510(RTCW(Result));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr2 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	tb1 = F91_10002(RTCW(tr2));
	tr1 = F258_11816(RTCW(tr1), tb1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, tr1);
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_6_1_)) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
		F91_10022(RTCW(tr1));
	}
	tb1 = '\0';
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	ti4_1 = F258_11813(RTCW(tr1));
	if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		ti4_1 = F258_11814(RTCW(tr1));
		tb1 = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L));
	}
	if ((EIF_BOOLEAN) !tb1) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
		tb1 = F743_2537(RTCW(tr1));
		if ((EIF_BOOLEAN) !tb1) {
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, *(EIF_REFERENCE *)(Current + _REFACS_5_));
		}
		tb1 = '\0';
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
		tb2 = F91_10002(RTCW(tr1));
		if (tb2) {
			tb1 = (EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_6_0_);
		}
		if (tb1) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
			tb1 = F743_2537(RTCW(tr1));
			if ((EIF_BOOLEAN) !tb1) {
				tr1 = RTMS_EX_H("\012",1,10);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, tr1);
			}
			tr1 = RTMS_EX_H("  Movement:",11,1657366330);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, tr1);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
			tr1 = F91_10013(RTCW(tr1));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, tr1);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			tr1 = F258_11812(RTCW(tr1));
			if (RTEQ(tr1, RTMS_EX_H("test",4,1952805748))) {
				tr1 = RTMS_EX_H("\012",1,10);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, tr1);
				tr1 = RTMS_EX_H("  Sectors:\012",11,1283785994);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, tr1);
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
				tr1 = F91_10029(RTCW(tr1));
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, tr1);
				tr1 = RTMS_EX_H("  Descriptions:\012",16,759187978);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, tr1);
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
				tr1 = F91_10028(RTCW(tr1));
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, tr1);
				tr1 = RTMS_EX_H("  Deaths This Turn:",19,1908474938);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, tr1);
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
				tr1 = F91_10014(RTCW(tr1));
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, tr1);
			}
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
			tr1 = F91_10007(RTCW(tr1));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, tr1);
			tb1 = '\0';
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			tr1 = F258_11812(RTCW(tr1));
			if (RTEQ(tr1, RTMS_EX_H("test",4,1952805748))) {
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
				tr2 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
				tr3 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
				tr3 = F91_10003(RTCW(tr3));
				tr3 = F417_13441(RTCW(tr3));
				tr2 = F257_11792(RTCW(tr2), tr3);
				tr3 = RTMS_EX_H("\012",1,10);
				tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr2))-1560])(tr2, tr3);
				tr3 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
				tr3 = F257_11794(RTCW(tr3));
				tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr2))-1560])(tr2, tr3);
				tb1 = RTEQ(tr1, tr2);
			}
			if (tb1) {
				tr1 = RTMS_EX_H("\012",1,10);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, tr1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, *(EIF_REFERENCE *)(Current + _REFACS_5_));
			}
		}
	} else {
		tb1 = '\0';
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		ti4_1 = F258_11813(RTCW(tr1));
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			ti4_1 = F258_11814(RTCW(tr1));
			tb1 = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L));
		}
		if (tb1) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			tr1 = F257_11787(RTCW(tr1));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, tr1);
		}
	}
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_6_2_)) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
		F91_10022(RTCW(tr1));
	}
	*(EIF_BOOLEAN *)(Current+ _CHROFF_6_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R4801[Dtype(RTCW(tr1))-1560])(tr1);
	F101_10091(Current, (EIF_BOOLEAN) 1);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_6_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_6_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	F91_10017(RTCW(tr1));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	F91_10018(RTCW(tr1));
	RTLE;
	return Result;
}

/* {ETF_SIMODYSSEY}.set_valid_selection */
void F101_10091 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	F258_11819(RTCW(tr1), arg1);
	RTLE;
}

void EIF_Minit1053 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
