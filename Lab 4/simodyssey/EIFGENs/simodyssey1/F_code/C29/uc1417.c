/*
 * Code for class UC_UTF8_ROUTINES
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "uc1417.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {UC_UTF8_ROUTINES}.encoded_first_value */
EIF_INTEGER_32 F1262_14817 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	RTGC;
	Result = (EIF_INTEGER_32) (arg1);
	if ((EIF_BOOLEAN) (arg1 <= (EIF_CHARACTER_8) '')) {
	} else {
		if ((EIF_BOOLEAN) (arg1 <= (EIF_CHARACTER_8) '\337')) {
			Result %= ((EIF_INTEGER_32) 32L);
		} else {
			if ((EIF_BOOLEAN) (arg1 <= (EIF_CHARACTER_8) '\357')) {
				Result %= ((EIF_INTEGER_32) 16L);
			} else {
				if ((EIF_BOOLEAN) (arg1 <= (EIF_CHARACTER_8) '\364')) {
					return (EIF_INTEGER_32) (EIF_INTEGER_32) (Result % ((EIF_INTEGER_32) 8L));
				}
			}
		}
	}
	return Result;
}

/* {UC_UTF8_ROUTINES}.encoded_next_value */
EIF_INTEGER_32 F1262_14818 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	RTGC;
	Result = (EIF_INTEGER_32) (arg1);
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result % ((EIF_INTEGER_32) 64L));
	return Result;
}

/* {UC_UTF8_ROUTINES}.encoded_byte_count */
EIF_INTEGER_32 F1262_14819 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	RTGC;
	if ((EIF_BOOLEAN) (arg1 <= (EIF_CHARACTER_8) '')) {
		return (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	} else {
		if ((EIF_BOOLEAN) (arg1 <= (EIF_CHARACTER_8) '\337')) {
			Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
		} else {
			if ((EIF_BOOLEAN) (arg1 <= (EIF_CHARACTER_8) '\357')) {
				return (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
			} else {
				return (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
			}
		}
	}
	return Result;
}

/* {UC_UTF8_ROUTINES}.substring_byte_count */
EIF_INTEGER_32 F1262_14820 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 loc5 = (EIF_CHARACTER_8) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_CHARACTER_8 tc1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(7);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,tr2);
	RTLR(4,loc6);
	RTLR(5,loc7);
	RTLR(6,loc8);
	RTLIU(7);
	
	RTGC;
	if ((EIF_BOOLEAN) (arg2 <= arg3)) {
		tb1 = '\0';
		tr1 = RTOUCR(218,F1261_14810, (Current));
		tr2 = RTOUCR(513,F1262_14854, (Current));
		tb2 = F65_9687(RTCW(tr1), arg1, tr2);
		if (tb2) {
			loc6 = arg1;
			loc6 = RTRV(eif_new_type(1560, 0x01),loc6);
			tb1 = EIF_TEST(loc6);
		}
		if (tb1) {
			if ((EIF_BOOLEAN)((EIF_INTEGER_32) (arg3 % ((EIF_INTEGER_32) 2L)) == ((EIF_INTEGER_32) 0L))) {
				loc4 = (EIF_INTEGER_32) arg3;
			} else {
				loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg3 - ((EIF_INTEGER_32) 1L));
			}
			loc3 = (EIF_INTEGER_32) arg2;
			for (;;) {
				if ((EIF_BOOLEAN) (loc3 > loc4)) break;
				loc5 = (eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2556[Dtype(loc6)-849])(loc6, loc3));
				if ((EIF_BOOLEAN) (loc5 <= (EIF_CHARACTER_8) '')) {
					Result++;
				} else {
					Result += F1262_14822(Current, loc5);
				}
				loc5 = (eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2556[Dtype(loc6)-849])(loc6, (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L))));
				if ((EIF_BOOLEAN) (loc5 <= (EIF_CHARACTER_8) '')) {
					Result++;
				} else {
					Result += F1262_14822(Current, loc5);
				}
				loc3 += ((EIF_INTEGER_32) 2L);
			}
			if ((EIF_BOOLEAN) (loc4 < arg3)) {
				tc1 = (eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2556[Dtype(loc6)-849])(loc6, arg3));
				ti4_1 = F1262_14822(Current, tc1);
				Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result + ti4_1);
			}
		} else {
			tb1 = '\0';
			tr1 = RTOUCR(218,F1261_14810, (Current));
			tr2 = RTOUCR(514,F1262_14855, (Current));
			tb2 = F65_9687(RTCW(tr1), arg1, tr2);
			if (tb2) {
				loc7 = arg1;
				loc7 = RTRV(eif_new_type(2017, 0x01),loc7);
				tb1 = EIF_TEST(loc7);
			}
			if (tb1) {
				tb1 = '\0';
				if ((EIF_BOOLEAN)(arg2 == ((EIF_INTEGER_32) 1L))) {
					ti4_1 = *(EIF_INTEGER_32 *)(loc7+ _LNGOFF_1_1_0_2_);
					tb1 = (EIF_BOOLEAN)(arg3 == ti4_1);
				}
				if (tb1) {
					Result = *(EIF_INTEGER_32 *)(loc7+ _LNGOFF_1_1_0_3_);
				} else {
					loc1 = F2018_25713(loc7, arg2);
					ti4_1 = *(EIF_INTEGER_32 *)(loc7+ _LNGOFF_1_1_0_2_);
					if ((EIF_BOOLEAN)(arg3 == ti4_1)) {
						Result = *(EIF_INTEGER_32 *)(loc7+ _LNGOFF_1_1_0_3_);
						Result = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (Result - loc1) + ((EIF_INTEGER_32) 1L));
					} else {
						loc2 = F2018_25712(loc7, loc1, (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg3 - arg2) + ((EIF_INTEGER_32) 1L)));
						Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 - loc1);
					}
				}
			} else {
				loc8 = arg1;
				loc8 = RTRV(eif_new_type(2018, 0x01),loc8);
				if (EIF_TEST(loc8)) {
					tb1 = '\0';
					if ((EIF_BOOLEAN)(arg2 == ((EIF_INTEGER_32) 1L))) {
						ti4_1 = *(EIF_INTEGER_32 *)(loc8+ _LNGOFF_1_1_0_2_);
						tb1 = (EIF_BOOLEAN)(arg3 == ti4_1);
					}
					if (tb1) {
						Result = *(EIF_INTEGER_32 *)(loc8+ _LNGOFF_1_1_0_3_);
						RTLE;
						return (EIF_INTEGER_32) Result;
					} else {
						loc1 = F2018_25713(loc8, arg2);
						ti4_1 = *(EIF_INTEGER_32 *)(loc8+ _LNGOFF_1_1_0_2_);
						if ((EIF_BOOLEAN)(arg3 == ti4_1)) {
							Result = *(EIF_INTEGER_32 *)(loc8+ _LNGOFF_1_1_0_3_);
							Result = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (Result - loc1) + ((EIF_INTEGER_32) 1L));
						} else {
							loc2 = F2018_25712(loc8, loc1, (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg3 - arg2) + ((EIF_INTEGER_32) 1L)));
							RTLE;
							return (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 - loc1);
						}
					}
				} else {
					loc3 = (EIF_INTEGER_32) arg2;
					for (;;) {
						if ((EIF_BOOLEAN) (loc3 > arg3)) break;
						tu4_1 = (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4644[Dtype(RTCW(arg1))-1560])(arg1, loc3);
						ti4_1 = (EIF_INTEGER_32) tu4_1;
						Result += F1262_14821(Current, ti4_1);
						loc3++;
					}
				}
			}
		}
	}
	RTLE;
	return Result;
}

/* {UC_UTF8_ROUTINES}.code_byte_count */
EIF_INTEGER_32 F1262_14821 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	RTGC;
	if ((EIF_BOOLEAN) (arg1 < ((EIF_INTEGER_32) 128L))) {
		return (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	} else {
		if ((EIF_BOOLEAN) (arg1 < ((EIF_INTEGER_32) 2048L))) {
			Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
		} else {
			if ((EIF_BOOLEAN) (arg1 < ((EIF_INTEGER_32) 65536L))) {
				return (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
			} else {
				return (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
			}
		}
	}
	return Result;
}

/* {UC_UTF8_ROUTINES}.character_byte_count */
EIF_INTEGER_32 F1262_14822 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	
	
	RTGC;
	if ((EIF_BOOLEAN) (arg1 <= (EIF_CHARACTER_8) '')) {
		return (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	} else {
		if ((EIF_BOOLEAN) (arg1 <= (EIF_CHARACTER_8) '\377')) {
			return (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
		} else {
			loc1 = (EIF_INTEGER_32) (arg1);
			if ((EIF_BOOLEAN) (loc1 < ((EIF_INTEGER_32) 2048L))) {
				return (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
			} else {
				if ((EIF_BOOLEAN) (loc1 < ((EIF_INTEGER_32) 65536L))) {
					return (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
				} else {
					return (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
				}
			}
		}
	}/* NOTREACHED */
	
}

/* {UC_UTF8_ROUTINES}.dummy_string */

EIF_REFERENCE F1262_14854 (EIF_REFERENCE Current)
{
	GTCX
	RTOUC (513,RTMS_EX_H("",0,0));
}

/* {UC_UTF8_ROUTINES}.dummy_uc_string */
static EIF_REFERENCE F1262_14855_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(514)

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

EIF_REFERENCE F1262_14855 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(514,F1262_14855_body,(Current));
}

void EIF_Minit1417 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
