/*
 * Code for class PRIMES
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "pr164.h"
#include <math.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {PRIMES}.higher_prime */
EIF_INTEGER_32 F1030_4274 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if ((EIF_BOOLEAN) (arg1 <= ((EIF_INTEGER_32) 2L))) {
		RTLE;
		return (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	} else {
		if ((EIF_BOOLEAN)((EIF_INTEGER_32) (arg1 % ((EIF_INTEGER_32) 2L)) == ((EIF_INTEGER_32) 0L))) {
			Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L));
		} else {
			Result = (EIF_INTEGER_32) arg1;
		}
		for (;;) {
			if (F1030_4277(Current, Result)) break;
			Result += ((EIF_INTEGER_32) 2L);
		}
	}
	RTLE;
	return Result;
}

/* {PRIMES}.all_lower_primes */
EIF_REFERENCE F1030_4276 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTGC;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,930,1493,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		Result = RTLNS(typres0.id, 930, _OBJSIZ_1_1_0_2_0_0_0_0_);
	}
	F931_3186(RTCW(Result), (EIF_BOOLEAN) 0, ((EIF_INTEGER_32) 1L), arg1);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	for (;;) {
		if ((EIF_BOOLEAN) (loc1 > arg1)) break;
		F931_3210(RTCW(Result), (EIF_BOOLEAN) 1, loc1);
		loc1 += ((EIF_INTEGER_32) 2L);
	}
	if ((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 2L))) {
		F931_3210(RTCW(Result), (EIF_BOOLEAN) 1, ((EIF_INTEGER_32) 2L));
	}
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	for (;;) {
		if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc1 * loc1) > arg1)) break;
		tb1 = F931_3191(RTCW(Result), loc1);
		if (tb1) {
			loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 * loc1);
			for (;;) {
				if ((EIF_BOOLEAN) (loc2 > arg1)) break;
				F931_3210(RTCW(Result), (EIF_BOOLEAN) 0, loc2);
				loc2 += (EIF_INTEGER_32) (((EIF_INTEGER_32) 2L) * loc1);
			}
		}
		loc1 += ((EIF_INTEGER_32) 2L);
	}
	RTLE;
	return Result;
}

/* {PRIMES}.is_prime */
EIF_BOOLEAN F1030_4277 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	
	RTGC;
	if ((EIF_BOOLEAN) (arg1 <= ((EIF_INTEGER_32) 1L))) {
		return (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	} else {
		if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 2L))) {
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		} else {
			if ((EIF_BOOLEAN)((EIF_INTEGER_32) (arg1 % ((EIF_INTEGER_32) 2L)) != ((EIF_INTEGER_32) 0L))) {
				loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
				for (;;) {
					if ((EIF_BOOLEAN) ((EIF_BOOLEAN)((EIF_INTEGER_32) (arg1 % loc1) == ((EIF_INTEGER_32) 0L)) || (EIF_BOOLEAN) ((EIF_INTEGER_32) (loc1 * loc1) >= arg1))) break;
					loc1 += ((EIF_INTEGER_32) 2L);
				}
				if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc1 * loc1) > arg1)) {
					return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				}
			}
		}
	}
	return Result;
}

/* {PRIMES}.i_th */
EIF_INTEGER_32 F1030_4278 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,loc3);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLIU(3);
	
	RTGC;
	loc3 = RTOUCR(130,F1030_4281, (Current));
	tb1 = '\0';
	if ((EIF_BOOLEAN)(loc3 != NULL)) {
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc3)+ _LNGOFF_1_1_0_0_);
		tb1 = (EIF_BOOLEAN) (arg1 <= ti4_1);
	}
	if (tb1) {
		ti4_1 = F925_3191(RTCW(loc3), arg1);
		RTLE;
		return (EIF_INTEGER_32) ti4_1;
	} else {
		ti4_1 = F1030_4282(Current, arg1);
		loc1 = F1030_4276(Current, ti4_1);
		Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
		loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			if ((EIF_BOOLEAN)(loc2 == arg1)) break;
			Result++;
			tb1 = F931_3191(RTCW(loc1), Result);
			if (tb1) {
				loc2++;
			}
		}
	}
	RTLE;
	return Result;
}

/* {PRIMES}.internal_precomputed_primes */
static EIF_REFERENCE F1030_4281_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(130)

	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEV;
	RTGC;
	RTOTP;
	ti4_1 = F1030_4282(Current, ((EIF_INTEGER_32) 200L));
	loc1 = F1030_4276(Current, ti4_1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,924,1508,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0.id, 924, _OBJSIZ_1_1_0_2_0_0_0_0_);
	}
	F925_3186(RTCW(tr1), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 1L), ((EIF_INTEGER_32) 200L));
	Result = (EIF_REFERENCE) tr1;
	loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		if ((EIF_BOOLEAN) (loc3 > ((EIF_INTEGER_32) 200L))) break;
		tb1 = F931_3191(RTCW(loc1), loc2);
		if (tb1) {
			F925_3210(RTCW(Result), loc2, loc3);
			loc3++;
		}
		loc2++;
	}
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1030_4281 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(130,F1030_4281_body,(Current));
}

/* {PRIMES}.approximated_i_th */
EIF_INTEGER_32 F1030_4282 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REAL_64 loc2 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc3 = (EIF_REAL_64) 0;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,loc1);
	RTLIU(1);
	
	RTGC;
	if ((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 13L))) {
		loc1 = RTLNS(eif_new_type(392, 0x01).id, 392, _OBJSIZ_0_0_0_0_0_0_0_0_);
		tr8_1 = (EIF_REAL_64) (arg1);
		loc2 = (EIF_REAL_64) log((double) tr8_1);
		loc3 = (EIF_REAL_64) log((double) loc2);
		tr8_1 = (EIF_REAL_64) (arg1);
		tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 1L));
		Result = (EIF_INTEGER_32) ((EIF_REAL_64) (tr8_1 * (EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) (loc2 + loc3) - tr8_2) + (EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) 1.8 * loc3)) /  (EIF_REAL_64) (loc2)))));
	} else {
		RTLE;
		return (EIF_INTEGER_32) (EIF_INTEGER_32) (arg1 * arg1);
	}
	RTLE;
	return Result;
}

void EIF_Minit164 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
