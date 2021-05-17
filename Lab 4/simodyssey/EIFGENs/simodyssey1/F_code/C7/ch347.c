/*
 * Code for class CHAIN [NATURAL_16]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ch347.h"

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
EIF_NATURAL_16 F853_3255 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_NATURAL_16 Result = ((EIF_NATURAL_16) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	loc1 = F952_4084(Current);
	F952_4104(Current);
	Result = F952_4078(Current);
	F952_4109(Current, loc1);
	RTLE;
	return Result;
}

/* {CHAIN}.last */
EIF_NATURAL_16 F853_3256 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_NATURAL_16 Result = ((EIF_NATURAL_16) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	loc1 = F952_4084(Current);
	F952_4105(Current);
	Result = F952_4078(Current);
	F952_4109(Current, loc1);
	RTLE;
	return Result;
}

/* {CHAIN}.has */
EIF_BOOLEAN F853_3257 (EIF_REFERENCE Current, EIF_NATURAL_16 arg1)
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
	loc1 = F952_4084(Current);
	Result = F607_2602(Current, arg1);
	F952_4109(Current, loc1);
	RTLE;
	return Result;
}

/* {CHAIN}.index_of */
EIF_INTEGER_32 F853_3258 (EIF_REFERENCE Current, EIF_NATURAL_16 arg1, EIF_INTEGER_32 arg2)
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
	loc1 = F952_4084(Current);
	Result = F607_2603(Current, arg1, arg2);
	F952_4109(Current, loc1);
	RTLE;
	return Result;
}

/* {CHAIN}.i_th */
EIF_NATURAL_16 F853_3259 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_NATURAL_16 Result = ((EIF_NATURAL_16) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	loc1 = F952_4084(Current);
	F952_4108(Current, arg1);
	Result = F952_4078(Current);
	F952_4109(Current, loc1);
	RTLE;
	return Result;
}

/* {CHAIN}.at */
EIF_NATURAL_16 F853_3260 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_NATURAL_16 Result = ((EIF_NATURAL_16) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	loc1 = F952_4084(Current);
	F952_4108(Current, arg1);
	Result = F952_4078(Current);
	F952_4109(Current, loc1);
	RTLE;
	return Result;
}

/* {CHAIN}.lower */
EIF_INTEGER_32 F853_3262 (EIF_REFERENCE Current)
{
	return (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
}

/* {CHAIN}.finish */
void F853_3264 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if ((EIF_BOOLEAN) !F738_2537(Current)) {
		ti4_1 = F952_4094(Current);
		F952_4108(Current, ti4_1);
	}
	RTLE;
}

/* {CHAIN}.valid_index */
EIF_BOOLEAN F853_3267 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
		Result = (EIF_BOOLEAN) (arg1 <= F952_4094(Current));
	}
	RTLE;
	return Result;
}

/* {CHAIN}.islast */
EIF_BOOLEAN F853_3269 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	Result = '\0';
	if ((EIF_BOOLEAN) !F738_2537(Current)) {
		Result = (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) == F952_4094(Current));
	}
	RTLE;
	return Result;
}

/* {CHAIN}.off */
EIF_BOOLEAN F853_3270 (EIF_REFERENCE Current)
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
		Result = (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) == (EIF_INTEGER_32) (F952_4094(Current) + ((EIF_INTEGER_32) 1L)));
	}
	RTLE;
	return Result;
}

/* {CHAIN}.valid_cursor_index */
EIF_BOOLEAN F853_3271 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
		Result = (EIF_BOOLEAN) (arg1 <= (EIF_INTEGER_32) (F952_4094(Current) + ((EIF_INTEGER_32) 1L)));
	}
	RTLE;
	return Result;
}

/* {CHAIN}.append */
void F853_3274 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_NATURAL_16 tu2_1;
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
	loc2 = F952_4084(Current);
	F952_4104(RTCW(loc1));
	for (;;) {
		tb1 = F607_2608(RTCW(loc1));
		if (tb1) break;
		tu2_1 = F952_4078(RTCW(loc1));
		F952_4114(Current, tu2_1);
		F952_4105(Current);
		F952_4106(RTCW(loc1));
	}
	F952_4109(Current, loc2);
	RTLE;
}

/* {CHAIN}.fill */
void F853_3275 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_NATURAL_16 tu2_1;
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
	loc2 = F952_4084(Current);
	F952_4104(RTCW(loc1));
	for (;;) {
		tb1 = '\01';
		if (!(EIF_BOOLEAN) !F868_3316(Current)) {
			tb2 = F853_3270(RTCW(loc1));
			tb1 = tb2;
		}
		if (tb1) break;
		tu2_1 = F952_4078(RTCW(loc1));
		F952_4114(Current, tu2_1);
		F952_4105(Current);
		F952_4106(RTCW(loc1));
	}
	F952_4109(Current, loc2);
	RTLE;
}

void EIF_Minit347 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
