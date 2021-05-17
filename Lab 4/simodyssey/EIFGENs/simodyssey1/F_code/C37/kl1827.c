/*
 * Code for class KL_INPUT_FILE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "kl1827.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {KL_INPUT_FILE}.end_of_file */
EIF_BOOLEAN F1844_20866 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current + O17438[Dtype(Current)-1843]);
}


/* {KL_INPUT_FILE}.read_character */
void F1844_20867 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current + O17428[dtype-1843]);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		tc1 = *(EIF_CHARACTER_8 *)(RTCW(loc1)+ _CHROFF_1_0_);
		*(EIF_CHARACTER_8 *)(Current + O17440[dtype-1843]) = (EIF_CHARACTER_8) tc1;
		tr1 = *(EIF_REFERENCE *)(RTCW(loc1));
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + O17428[dtype-1843]) = (EIF_REFERENCE) tr1;
	} else {
		if (F1291_4935(Current)) {
			*(EIF_BOOLEAN *)(Current + O17438[dtype-1843]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		} else {
			F1291_5041(Current);
			tb1 = F1291_4935(Current);
			*(EIF_BOOLEAN *)(Current + O17438[dtype-1843]) = (EIF_BOOLEAN) tb1;
		}
	}
	RTLE;
}

/* {KL_INPUT_FILE}.read_to_string */
EIF_INTEGER_32 F1844_20870 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	RTCDT;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc6);
	RTLR(1,Current);
	RTLR(2,arg1);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,loc2);
	RTLIU(6);
	
	RTGC;
	loc1 = (EIF_INTEGER_32) arg2;
	loc6 = *(EIF_REFERENCE *)(Current + O17428[dtype-1843]);
	for (;;) {
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc5 == arg3) || (EIF_BOOLEAN)(loc6 == NULL))) break;
		loc5++;
		tc1 = *(EIF_CHARACTER_8 *)(RTCW(loc6)+ _CHROFF_1_0_);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R2255[Dtype(RTCW(arg1))-918])(arg1, (EIF_REFERENCE) &tc1, (EIF_REFERENCE) &loc1);
		tr1 = *(EIF_REFERENCE *)(RTCW(loc6));
		loc6 = (EIF_REFERENCE) tr1;
		loc1++;
	}
	RTAR(Current, loc6);
	*(EIF_REFERENCE *)(Current + O17428[dtype-1843]) = (EIF_REFERENCE) loc6;
	if ((EIF_BOOLEAN) (loc5 < arg3)) {
		if ((EIF_BOOLEAN) !F1291_4935(Current)) {
			tr1 = RTOUCR(218,F1261_14810, (Current));
			tr2 = RTOUCR(219,F1844_20877, (Current));
			tb1 = F65_9687(RTCW(tr1), arg1, tr2);
			if (tb1) {
				loc5 += (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R17430[dtype-1844])(Current, arg1, loc1, (EIF_INTEGER_32) (arg3 - loc5));
				F1560_6659(RTCW(arg1));
			} else {
				tr1 = RTOUCR(218,F1261_14810, (Current));
				tr2 = RTOUCR(220,F1844_20878, (Current));
				tb1 = F65_9687(RTCW(tr1), arg1, tr2);
				if (tb1) {
					loc5 += (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R17430[dtype-1844])(Current, arg1, loc1, (EIF_INTEGER_32) (arg3 - loc5));
					F1560_6659(RTCW(arg1));
				} else {
					loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg3 - loc5);
					loc2 = RTLNS(eif_new_type(1560, 0x01).id, 1560, _OBJSIZ_1_1_0_3_0_0_0_0_);
					F1559_6605(RTCW(loc2), loc4);
					F1561_6779(RTCW(loc2), loc4);
					ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R17430[dtype-1844])(Current, loc2, ((EIF_INTEGER_32) 1L), loc4);
					loc4 = (EIF_INTEGER_32) ti4_1;
					F1560_6659(RTCW(loc2));
					loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
					for (;;) {
						if ((EIF_BOOLEAN) (loc3 > loc4)) break;
						tc1 = (eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2556[Dtype(RTCW(loc2))-849])(loc2, loc3));
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R2255[Dtype(RTCW(arg1))-918])(arg1, (EIF_REFERENCE) &tc1, (EIF_REFERENCE) &loc1);
						loc1++;
						loc3++;
					}
					loc5 += loc4;
				}
			}
		}
		tb1 = F1291_4935(Current);
		*(EIF_BOOLEAN *)(Current + O17438[dtype-1843]) = (EIF_BOOLEAN) tb1;
	}
	RTLE;
	return (EIF_INTEGER_32) loc5;
}

/* {KL_INPUT_FILE}.dummy_string */

EIF_REFERENCE F1844_20877 (EIF_REFERENCE Current)
{
	GTCX
	RTOUC (219,RTMS_EX_H("",0,0));
}

/* {KL_INPUT_FILE}.dummy_kl_character_buffer */
static EIF_REFERENCE F1844_20878_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(220)

	RTLI(1);
	RTLR(0,tr1);
	RTLIU(1);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(eif_new_type(1279, 0x01).id, 1279, _OBJSIZ_2_0_0_0_0_0_0_0_);
	F1280_15019(RTCW(tr1), ((EIF_INTEGER_32) 0L));
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1844_20878 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(220,F1844_20878_body,(Current));
}

void EIF_Minit1827 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
