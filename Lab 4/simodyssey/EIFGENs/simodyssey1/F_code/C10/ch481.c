/*
 * Code for class CHAIN [NATURAL_8]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ch481.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {CHAIN}.first */
EIF_NATURAL_8 F856_3255 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	loc1 = F955_4084(Current);
	F955_4104(Current);
	Result = F955_4078(Current);
	F955_4109(Current, loc1);
	RTLE;
	return Result;
}

/* {CHAIN}.last */
EIF_NATURAL_8 F856_3256 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	loc1 = F955_4084(Current);
	F955_4105(Current);
	Result = F955_4078(Current);
	F955_4109(Current, loc1);
	RTLE;
	return Result;
}

/* {CHAIN}.has */
EIF_BOOLEAN F856_3257 (EIF_REFERENCE Current, EIF_NATURAL_8 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	loc1 = F955_4084(Current);
	Result = F611_2602(Current, arg1);
	F955_4109(Current, loc1);
	RTLE;
	return Result;
}

/* {CHAIN}.index_of */
EIF_INTEGER_32 F856_3258 (EIF_REFERENCE Current, EIF_NATURAL_8 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	loc1 = F955_4084(Current);
	Result = F611_2603(Current, arg1, arg2);
	F955_4109(Current, loc1);
	RTLE;
	return Result;
}

/* {CHAIN}.i_th */
EIF_NATURAL_8 F856_3259 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	loc1 = F955_4084(Current);
	F955_4108(Current, arg1);
	Result = F955_4078(Current);
	F955_4109(Current, loc1);
	RTLE;
	return Result;
}

/* {CHAIN}.at */
EIF_NATURAL_8 F856_3260 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	loc1 = F955_4084(Current);
	F955_4108(Current, arg1);
	Result = F955_4078(Current);
	F955_4109(Current, loc1);
	RTLE;
	return Result;
}

/* {CHAIN}.lower */
EIF_INTEGER_32 F856_3262 (EIF_REFERENCE Current)
{
	return (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
}

/* {CHAIN}.finish */
void F856_3264 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if ((EIF_BOOLEAN) !F742_2537(Current)) {
		ti4_1 = F955_4094(Current);
		F955_4108(Current, ti4_1);
	}
	RTLE;
}

/* {CHAIN}.valid_index */
EIF_BOOLEAN F856_3267 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	Result = '\0';
	if ((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L))) {
		Result = (EIF_BOOLEAN) (arg1 <= F955_4094(Current));
	}
	RTLE;
	return Result;
}

/* {CHAIN}.islast */
EIF_BOOLEAN F856_3269 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	Result = '\0';
	if ((EIF_BOOLEAN) !F742_2537(Current)) {
		Result = (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) == F955_4094(Current));
	}
	RTLE;
	return Result;
}

/* {CHAIN}.off */
EIF_BOOLEAN F856_3270 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	Result = '\01';
	if (!((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) == ((EIF_INTEGER_32) 0L)))) {
		Result = (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) == (EIF_INTEGER_32) (F955_4094(Current) + ((EIF_INTEGER_32) 1L)));
	}
	RTLE;
	return Result;
}

/* {CHAIN}.valid_cursor_index */
EIF_BOOLEAN F856_3271 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	Result = '\0';
	if ((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L))) {
		Result = (EIF_BOOLEAN) (arg1 <= (EIF_INTEGER_32) (F955_4094(Current) + ((EIF_INTEGER_32) 1L)));
	}
	RTLE;
	return Result;
}

/* {CHAIN}.append */
void F856_3274 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLR(3,loc2);
	RTLIU(4);
	
	RTGC;
	loc1 = (EIF_REFERENCE) arg1;
	if ((EIF_BOOLEAN)(arg1 == Current)) {
		loc1 = F1_14(Current);
	}
	loc2 = F955_4084(Current);
	F955_4104(RTCW(loc1));
	for (;;) {
		tb1 = F611_2608(RTCW(loc1));
		if (tb1) break;
		tu1_1 = F955_4078(RTCW(loc1));
		F955_4114(Current, tu1_1);
		F955_4105(Current);
		F955_4106(RTCW(loc1));
	}
	F955_4109(Current, loc2);
	RTLE;
}

/* {CHAIN}.fill */
void F856_3275 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,loc2);
	RTLR(3,Current);
	RTLIU(4);
	
	RTGC;
	loc1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2216[Dtype(RTCW(arg1))-715])(arg1);
	loc2 = F955_4084(Current);
	F955_4104(RTCW(loc1));
	for (;;) {
		tb1 = '\01';
		if (!(EIF_BOOLEAN) !F871_3316(Current)) {
			tb2 = F856_3270(RTCW(loc1));
			tb1 = tb2;
		}
		if (tb1) break;
		tu1_1 = F955_4078(RTCW(loc1));
		F955_4114(Current, tu1_1);
		F955_4105(Current);
		F955_4106(RTCW(loc1));
	}
	F955_4109(Current, loc2);
	RTLE;
}

void EIF_Minit481 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
