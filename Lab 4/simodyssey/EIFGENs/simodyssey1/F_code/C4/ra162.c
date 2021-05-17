/*
 * Code for class RANDOM
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ra162.h"
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

/* {RANDOM}.make */
void F1028_4236 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	ti4_1 = RTOUCB(EIF_INTEGER_32,141,F1028_4238, (Current));
	F1028_4237(Current, ti4_1);
	F735_2765(Current);
	RTLE;
}

/* {RANDOM}.set_seed */
void F1028_4237 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_1_) = (EIF_INTEGER_32) arg1;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_3_) = (EIF_INTEGER_32) *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_1_);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTLE;
}

/* {RANDOM}.default_seed */
static EIF_INTEGER_32 F1028_4238_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 141)

	
	RTEV;
	RTOTP;
	Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 123457L);
	RTOTE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F1028_4238 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,141,F1028_4238_body,(Current));
}

/* {RANDOM}.modulus */
static EIF_INTEGER_32 F1028_4239_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 142)

	
	RTEV;
	RTOTP;
	Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2147483647L);
	RTOTE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F1028_4239 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,142,F1028_4239_body,(Current));
}

/* {RANDOM}.multiplier */
static EIF_INTEGER_32 F1028_4240_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 143)

	
	RTEV;
	RTOTP;
	Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 16807L);
	RTOTE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F1028_4240 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,143,F1028_4240_body,(Current));
}

/* {RANDOM}.increment */
static EIF_INTEGER_32 F1028_4241_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 144)

	
	RTEV;
	RTOTP;
	Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTOTE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F1028_4241 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,144,F1028_4241_body,(Current));
}

/* {RANDOM}.i_th */
EIF_INTEGER_32 F1028_4245 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if ((EIF_BOOLEAN) (arg1 >= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_2_))) {
		Result = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_3_);
		loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_2_);
	} else {
		Result = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_1_);
	}
	for (;;) {
		if ((EIF_BOOLEAN)(loc1 == arg1)) break;
		ti4_1 = F1028_4251(Current, Result);
		Result = (EIF_INTEGER_32) ti4_1;
		loc1++;
	}
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_3_) = (EIF_INTEGER_32) Result;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_2_) = (EIF_INTEGER_32) arg1;
	RTLE;
	return Result;
}

/* {RANDOM}.randomize */
EIF_INTEGER_32 F1028_4251 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_REAL_64 tr8_4;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tr8_1 = RTOUCB(EIF_REAL_64,145,F1028_4256, (Current));
	tr8_2 = (EIF_REAL_64) (arg1);
	tr8_3 = RTOUCB(EIF_REAL_64,146,F1028_4257, (Current));
	tr8_4 = RTOUCB(EIF_REAL_64,147,F1028_4255, (Current));
	tr8_1 = F1028_4252(Current, (EIF_REAL_64) ((EIF_REAL_64) (tr8_1 * tr8_2) + tr8_3), tr8_4);
	Result = (EIF_INTEGER_32) tr8_1;
	RTLE;
	return Result;
}

/* {RANDOM}.double_mod */
EIF_REAL_64 F1028_4252 (EIF_REFERENCE Current, EIF_REAL_64 arg1, EIF_REAL_64 arg2)
{
	GTCX
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	
	
	RTGC;
	Result = (EIF_REAL_64) floor((double) (EIF_REAL_64) ((EIF_REAL_64) (arg1) /  (EIF_REAL_64) (arg2)));
	Result = (EIF_REAL_64) (EIF_REAL_64) (arg1 - (EIF_REAL_64) (Result * arg2));
	return Result;
}

/* {RANDOM}.dmod */
static EIF_REAL_64 F1028_4255_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
#define Result RTOTRB(EIF_REAL_64)
	RTOUDB(EIF_REAL_64, 147)

	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEV;
	RTGC;
	RTOTP;
	ti4_1 = RTOUCB(EIF_INTEGER_32,142,F1028_4239, (Current));
	Result = (EIF_REAL_64) (ti4_1);
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REAL_64 F1028_4255 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_REAL_64,147,F1028_4255_body,(Current));
}

/* {RANDOM}.dmul */
static EIF_REAL_64 F1028_4256_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
#define Result RTOTRB(EIF_REAL_64)
	RTOUDB(EIF_REAL_64, 145)

	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEV;
	RTGC;
	RTOTP;
	ti4_1 = RTOUCB(EIF_INTEGER_32,143,F1028_4240, (Current));
	Result = (EIF_REAL_64) (ti4_1);
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REAL_64 F1028_4256 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_REAL_64,145,F1028_4256_body,(Current));
}

/* {RANDOM}.dinc */
static EIF_REAL_64 F1028_4257_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
#define Result RTOTRB(EIF_REAL_64)
	RTOUDB(EIF_REAL_64, 146)

	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEV;
	RTGC;
	RTOTP;
	ti4_1 = RTOUCB(EIF_INTEGER_32,144,F1028_4241, (Current));
	Result = (EIF_REAL_64) (ti4_1);
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REAL_64 F1028_4257 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_REAL_64,146,F1028_4257_body,(Current));
}

void EIF_Minit162 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
