/*
 * Code for class KL_STDIN_FILE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "kl1426.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {KL_STDIN_FILE}.make */
void F1276_14997 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNSMART(eif_new_type(1560, 1).id);
	F1558_6510(RTCW(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTLE;
}

/* {KL_STDIN_FILE}.last_character */
EIF_CHARACTER_8 F1276_14999 (EIF_REFERENCE Current)
{
	return *(EIF_CHARACTER_8 *)(Current+ _CHROFF_2_0_);
}


/* {KL_STDIN_FILE}.last_string */
EIF_REFERENCE F1276_15000 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {KL_STDIN_FILE}.end_of_file */
EIF_BOOLEAN F1276_15003 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_);
}


/* {KL_STDIN_FILE}.read_character */
void F1276_15004 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		tc1 = *(EIF_CHARACTER_8 *)(RTCW(loc1)+ _CHROFF_1_0_);
		*(EIF_CHARACTER_8 *)(Current+ _CHROFF_2_0_) = (EIF_CHARACTER_8) tc1;
		tr1 = *(EIF_REFERENCE *)(RTCW(loc1));
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	} else {
		tr1 = RTOUCR(315,F1276_15013, (Current));
		tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3656[Dtype(RTCW(tr1))-1291])(tr1);
		if (tb1) {
			*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		} else {
			tr1 = RTOUCR(315,F1276_15013, (Current));
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R3588[Dtype(RTCW(tr1))-1291])(tr1);
			tr1 = RTOUCR(315,F1276_15013, (Current));
			tc1 = *(EIF_CHARACTER_8 *)(RTCW(tr1) + O3534[Dtype(tr1)-1289]);
			*(EIF_CHARACTER_8 *)(Current+ _CHROFF_2_0_) = (EIF_CHARACTER_8) tc1;
			tr1 = RTOUCR(315,F1276_15013, (Current));
			tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3656[Dtype(RTCW(tr1))-1291])(tr1);
			*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) tb1;
		}
	}
	RTLE;
}

/* {KL_STDIN_FILE}.read_to_string */
EIF_INTEGER_32 F1276_15009 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(7);
	RTLR(0,loc7);
	RTLR(1,Current);
	RTLR(2,arg1);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,loc5);
	RTLR(6,loc6);
	RTLIU(7);
	
	RTGC;
	loc2 = (EIF_INTEGER_32) arg2;
	loc7 = *(EIF_REFERENCE *)(Current);
	for (;;) {
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc1 == arg3) || (EIF_BOOLEAN)(loc7 == NULL))) break;
		loc1++;
		tc1 = *(EIF_CHARACTER_8 *)(RTCW(loc7)+ _CHROFF_1_0_);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R2255[Dtype(RTCW(arg1))-918])(arg1, (EIF_REFERENCE) &tc1, (EIF_REFERENCE) &loc2);
		tr1 = *(EIF_REFERENCE *)(RTCW(loc7));
		loc7 = (EIF_REFERENCE) tr1;
		loc2++;
	}
	RTAR(Current, loc7);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) loc7;
	if ((EIF_BOOLEAN) (loc1 < arg3)) {
		tr1 = RTOUCR(315,F1276_15013, (Current));
		tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3656[Dtype(RTCW(tr1))-1291])(tr1);
		if ((EIF_BOOLEAN) !tb1) {
			tr1 = RTOUCR(218,F1261_14810, (Current));
			tr2 = RTOUCR(316,F1276_15012, (Current));
			tb1 = F65_9687(RTCW(tr1), arg1, tr2);
			if (tb1) {
				tr1 = RTOUCR(315,F1276_15013, (Current));
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R3601[Dtype(RTCW(tr1))-1291])(tr1, (EIF_INTEGER_32) (arg3 - loc1));
				tr1 = RTOUCR(315,F1276_15013, (Current));
				loc5 = *(EIF_REFERENCE *)(RTCW(tr1) + O3535[Dtype(tr1)-1289]);
				tb1 = F743_2537(RTCW(loc5));
				if ((EIF_BOOLEAN) !tb1) {
					ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc5)+ _LNGOFF_1_1_0_2_);
					F1561_6706(RTCW(arg1), loc5, ((EIF_INTEGER_32) 1L), ti4_1, loc2);
					F1560_6659(RTCW(arg1));
				}
				Result = *(EIF_INTEGER_32 *)(RTCW(loc5)+ _LNGOFF_1_1_0_2_);
				Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + Result);
			} else {
				loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg3 - loc1);
				loc6 = RTLNS(eif_new_type(1560, 0x01).id, 1560, _OBJSIZ_1_1_0_3_0_0_0_0_);
				F1559_6605(RTCW(loc6), loc4);
				F1561_6779(RTCW(loc6), loc4);
				tr1 = RTOUCR(315,F1276_15013, (Current));
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R3601[Dtype(RTCW(tr1))-1291])(tr1, loc4);
				tr1 = RTOUCR(315,F1276_15013, (Current));
				loc5 = *(EIF_REFERENCE *)(RTCW(tr1) + O3535[Dtype(tr1)-1289]);
				tb1 = F743_2537(RTCW(loc5));
				if ((EIF_BOOLEAN) !tb1) {
					ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc5)+ _LNGOFF_1_1_0_2_);
					F1561_6706(RTCW(loc6), loc5, ((EIF_INTEGER_32) 1L), ti4_1, ((EIF_INTEGER_32) 1L));
					F1560_6659(RTCW(loc6));
				}
				loc4 = *(EIF_INTEGER_32 *)(RTCW(loc5)+ _LNGOFF_1_1_0_2_);
				loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				for (;;) {
					if ((EIF_BOOLEAN) (loc3 > loc4)) break;
					tc1 = (eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2556[Dtype(RTCW(loc6))-849])(loc6, loc3));
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R2255[Dtype(RTCW(arg1))-918])(arg1, (EIF_REFERENCE) &tc1, (EIF_REFERENCE) &loc2);
					loc2++;
					loc3++;
				}
				Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + loc4);
			}
		} else {
			Result = (EIF_INTEGER_32) loc1;
		}
		tr1 = RTOUCR(315,F1276_15013, (Current));
		tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3656[Dtype(RTCW(tr1))-1291])(tr1);
		*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) tb1;
	} else {
		RTLE;
		return (EIF_INTEGER_32) loc1;
	}
	RTLE;
	return Result;
}

/* {KL_STDIN_FILE}.dummy_string */

EIF_REFERENCE F1276_15012 (EIF_REFERENCE Current)
{
	GTCX
	RTOUC (316,RTMS_EX_H("",0,0));
}

/* {KL_STDIN_FILE}.console */
static EIF_REFERENCE F1276_15013_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(315)

	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEV;
	RTGC;
	RTOTP;
	Result = RTOUCR(126,F125_116, (RTCV(RTOUCR(0,F1_24, (Current)))));
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1276_15013 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(315,F1276_15013_body,(Current));
}

void EIF_Minit1426 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
