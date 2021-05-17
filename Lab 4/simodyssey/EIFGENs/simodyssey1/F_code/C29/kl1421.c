/*
 * Code for class KL_STRING_ROUTINES
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "kl1421.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {KL_STRING_ROUTINES}.elks_same_string */
EIF_BOOLEAN F1266_14930 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg2);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLIU(5);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg2 == arg1)) {
		RTLE;
		return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	} else {
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_1_1_0_2_);
		ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
			tr1 = RTOUCR(218,F1261_14810, (Current));
			tr2 = RTOUCR(313,F1266_14953, (Current));
			tb1 = F65_9687(RTCW(tr1), arg2, tr2);
			if (tb1) {
				tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R4754[Dtype(RTCW(arg1))-1560])(arg1, arg2);
				RTLE;
				return (EIF_BOOLEAN) tb1;
			} else {
				tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R4754[Dtype(RTCW(arg2))-1560])(arg2, arg1);
				RTLE;
				return (EIF_BOOLEAN) tb1;
			}
		}
	}
	RTLE;
	return (EIF_BOOLEAN) 0;
}

/* {KL_STRING_ROUTINES}.same_string */
EIF_BOOLEAN F1266_14931 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(7);
	RTLR(0,arg2);
	RTLR(1,arg1);
	RTLR(2,loc3);
	RTLR(3,loc4);
	RTLR(4,Current);
	RTLR(5,tr1);
	RTLR(6,tr2);
	RTLIU(7);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg2 == arg1)) {
		RTLE;
		return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	} else {
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_1_1_0_2_);
		ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
			loc3 = arg1;
			loc3 = RTRV(eif_new_type(2017, 0x01),loc3);
			if (EIF_TEST(loc3)) {
				tb1 = F2018_25652(loc3, arg2);
				RTLE;
				return (EIF_BOOLEAN) tb1;
			} else {
				loc4 = arg2;
				loc4 = RTRV(eif_new_type(2017, 0x01),loc4);
				if (EIF_TEST(loc4)) {
					Result = F2018_25652(loc4, arg1);
				} else {
					tb1 = '\0';
					tr1 = RTOUCR(218,F1261_14810, (Current));
					tr2 = RTOUCR(313,F1266_14953, (Current));
					tb2 = F65_9687(RTCW(tr1), arg1, tr2);
					if (tb2) {
						tr1 = RTOUCR(218,F1261_14810, (Current));
						tr2 = RTOUCR(313,F1266_14953, (Current));
						tb2 = F65_9687(RTCW(tr1), arg2, tr2);
						tb1 = tb2;
					}
					if (tb1) {
						Result = F1266_14930(Current, arg1, arg2);
						RTLE;
						return (EIF_BOOLEAN) Result;
					} else {
						Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
						loc2 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
						loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
						for (;;) {
							if ((EIF_BOOLEAN) (loc1 > loc2)) break;
							ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4745[Dtype(RTCW(arg1))-1560])(arg1, loc1);
							ti4_2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4745[Dtype(RTCW(arg2))-1560])(arg2, loc1);
							if ((EIF_BOOLEAN)(ti4_1 != ti4_2)) {
								Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
								loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
							} else {
								loc1++;
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

/* {KL_STRING_ROUTINES}.as_string */
EIF_REFERENCE F1266_14945 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,tr2);
	RTLR(4,loc1);
	RTLIU(5);
	
	RTGC;
	tr1 = RTOUCR(218,F1261_14810, (Current));
	tr2 = RTOUCR(313,F1266_14953, (Current));
	tb1 = F65_9687(RTCW(tr1), arg1, tr2);
	if (tb1) {
		RTLE;
		return (EIF_REFERENCE) arg1;
	} else {
		loc1 = arg1;
		loc1 = RTRV(eif_new_type(2017, 0x01),loc1);
		if (EIF_TEST(loc1)) {
			tr1 = F2018_25704(loc1);
			RTLE;
			return (EIF_REFERENCE) tr1;
		} else {
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4749[Dtype(RTCW(arg1))-1560])(arg1);
			RTLE;
			return (EIF_REFERENCE) tr1;
		}
	}/* NOTREACHED */
	
}

/* {KL_STRING_ROUTINES}.dummy_string */

EIF_REFERENCE F1266_14953 (EIF_REFERENCE Current)
{
	GTCX
	RTOUC (313,RTMS_EX_H("",0,0));
}

void EIF_Minit1421 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
