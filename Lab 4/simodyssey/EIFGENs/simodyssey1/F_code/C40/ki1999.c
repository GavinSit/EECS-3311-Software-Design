/*
 * Code for class KI_PATHNAME
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ki1999.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {KI_PATHNAME}.same_pathname */
EIF_BOOLEAN F2016_25579 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
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
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_4_1_0_0_);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_1_0_0_) == ti4_1)) {
			RTLE;
			return (EIF_BOOLEAN) F2016_25581(Current, arg1);
		}
	}
	RTLE;
	return (EIF_BOOLEAN) 0;
}

/* {KI_PATHNAME}.is_subpathname */
EIF_BOOLEAN F2016_25581 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN tb5;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLIU(5);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 == Current)) {
		RTLE;
		return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	} else {
		loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_1_0_0_);
		tb1 = '\0';
		tb2 = '\0';
		tb3 = '\0';
		tb4 = '\0';
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_4_1_0_0_);
		if ((EIF_BOOLEAN) (loc2 <= ti4_1)) {
			tb5 = *(EIF_BOOLEAN *)(RTCW(arg1)+ _CHROFF_4_0_);
			tb4 = (EIF_BOOLEAN)(*(EIF_BOOLEAN *)(Current+ _CHROFF_4_0_) == tb5);
		}
		if (tb4) {
			tr1 = RTOUCR(494,F149_10270, (Current));
			tr2 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_3_);
			tb4 = F1157_14542(RTCW(tr1), *(EIF_REFERENCE *)(Current + _REFACS_3_), tr2);
			tb3 = tb4;
		}
		if (tb3) {
			tr1 = RTOUCR(494,F149_10270, (Current));
			tr2 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_2_);
			tb3 = F1157_14542(RTCW(tr1), *(EIF_REFERENCE *)(Current + _REFACS_2_), tr2);
			tb2 = tb3;
		}
		if (tb2) {
			tr1 = RTOUCR(494,F149_10270, (Current));
			tr2 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_1_);
			tb2 = F1157_14542(RTCW(tr1), *(EIF_REFERENCE *)(Current + _REFACS_1_), tr2);
			tb1 = tb2;
		}
		if (tb1) {
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			for (;;) {
				if ((EIF_BOOLEAN) (loc1 > loc2)) break;
				tr1 = RTOUCR(244,F1156_14541, (Current));
				tr2 = F2017_25588(Current, loc1);
				tr3 = F2017_25588(RTCW(arg1), loc1);
				tb1 = F1266_14931(RTCW(tr1), tr2, tr3);
				if ((EIF_BOOLEAN) !tb1) {
					Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
					loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
				}
				loc1++;
			}
		}
	}
	RTLE;
	return Result;
}

/* {KI_PATHNAME}.is_equal */
EIF_BOOLEAN F2016_25583 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTGC;
	tr1 = RTOUCR(218,F1261_14810, (Current));
	tb1 = F65_9687(RTCW(tr1), Current, arg1);
	if (tb1) {
		RTLE;
		return (EIF_BOOLEAN) F2016_25579(Current, arg1);
	}
	RTLE;
	return (EIF_BOOLEAN) 0;
}

void EIF_Minit1999 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
