/*
 * Code for class CHAIN [BOOLEAN]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ch809.h"

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
EIF_BOOLEAN F864_3255 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	loc1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2264[dtype-911])(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R2292[dtype-911])(Current);
	Result = (eif_optimize_return = 1, *(EIF_BOOLEAN *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2258[dtype-818])(Current));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2266[dtype-911])(Current, loc1);
	RTLE;
	return Result;
}

/* {CHAIN}.last */
EIF_BOOLEAN F864_3256 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	loc1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2264[dtype-911])(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R2307[dtype-911])(Current);
	Result = (eif_optimize_return = 1, *(EIF_BOOLEAN *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2258[dtype-818])(Current));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2266[dtype-911])(Current, loc1);
	RTLE;
	return Result;
}

/* {CHAIN}.has */
EIF_BOOLEAN F864_3257 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	loc1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2264[dtype-911])(Current);
	Result = F618_2602(Current, arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2266[dtype-911])(Current, loc1);
	RTLE;
	return Result;
}

/* {CHAIN}.index_of */
EIF_INTEGER_32 F864_3258 (EIF_REFERENCE Current, EIF_BOOLEAN arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	loc1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2264[dtype-911])(Current);
	Result = F618_2603(Current, arg1, arg2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2266[dtype-911])(Current, loc1);
	RTLE;
	return Result;
}

/* {CHAIN}.i_th */
EIF_BOOLEAN F864_3259 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	loc1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2264[dtype-911])(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R2679[dtype-911])(Current, arg1);
	Result = (eif_optimize_return = 1, *(EIF_BOOLEAN *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2258[dtype-818])(Current));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2266[dtype-911])(Current, loc1);
	RTLE;
	return Result;
}

/* {CHAIN}.at */
EIF_BOOLEAN F864_3260 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	loc1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2264[dtype-911])(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R2679[dtype-911])(Current, arg1);
	Result = (eif_optimize_return = 1, *(EIF_BOOLEAN *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2258[dtype-818])(Current));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2266[dtype-911])(Current, loc1);
	RTLE;
	return Result;
}

/* {CHAIN}.lower */
EIF_INTEGER_32 F864_3262 (EIF_REFERENCE Current)
{
	return (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
}

/* {CHAIN}.finish */
void F864_3264 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if ((EIF_BOOLEAN) !F749_2537(Current)) {
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2269[dtype-818])(Current);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R2679[dtype-911])(Current, ti4_1);
	}
	RTLE;
}

/* {CHAIN}.valid_index */
EIF_BOOLEAN F864_3267 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
		Result = (EIF_BOOLEAN) (arg1 <= (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2269[Dtype(Current)-818])(Current));
	}
	RTLE;
	return Result;
}

/* {CHAIN}.islast */
EIF_BOOLEAN F864_3269 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	Result = '\0';
	if ((EIF_BOOLEAN) !F749_2537(Current)) {
		Result = (EIF_BOOLEAN)((FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2302[dtype-911])(Current) == (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2269[dtype-818])(Current));
	}
	RTLE;
	return Result;
}

/* {CHAIN}.off */
EIF_BOOLEAN F864_3270 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	Result = '\01';
	if (!((EIF_BOOLEAN)((FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2302[dtype-911])(Current) == ((EIF_INTEGER_32) 0L)))) {
		Result = (EIF_BOOLEAN)((FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2302[dtype-911])(Current) == (EIF_INTEGER_32) ((FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2269[dtype-818])(Current) + ((EIF_INTEGER_32) 1L)));
	}
	RTLE;
	return Result;
}

/* {CHAIN}.valid_cursor_index */
EIF_BOOLEAN F864_3271 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
		Result = (EIF_BOOLEAN) (arg1 <= (EIF_INTEGER_32) ((FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2269[Dtype(Current)-818])(Current) + ((EIF_INTEGER_32) 1L)));
	}
	RTLE;
	return Result;
}

/* {CHAIN}.append */
void F864_3274 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
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
	loc2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2264[dtype-911])(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R2292[Dtype(RTCW(loc1))-911])(loc1);
	for (;;) {
		tb1 = F618_2608(RTCW(loc1));
		if (tb1) break;
		tb2 = (eif_optimize_return = 1, *(EIF_BOOLEAN *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2258[Dtype(RTCW(loc1))-818])(loc1));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2222[dtype-818])(Current, (EIF_REFERENCE) &tb2);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R2307[dtype-911])(Current);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R2308[Dtype(RTCW(loc1))-911])(loc1);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2266[dtype-911])(Current, loc2);
	RTLE;
}

/* {CHAIN}.fill */
void F864_3275 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,loc2);
	RTLR(3,Current);
	RTLIU(4);
	
	RTGC;
	loc1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2216[Dtype(RTCW(arg1))-715])(arg1);
	loc2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2264[dtype-911])(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R2292[Dtype(RTCW(loc1))-911])(loc1);
	for (;;) {
		tb1 = '\01';
		if (!(EIF_BOOLEAN) !F879_3316(Current)) {
			tb2 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2291[Dtype(RTCW(loc1))-911])(loc1);
			tb1 = tb2;
		}
		if (tb1) break;
		tb2 = (eif_optimize_return = 1, *(EIF_BOOLEAN *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2290[Dtype(RTCW(loc1))-911])(loc1));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2222[dtype-818])(Current, (EIF_REFERENCE) &tb2);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R2307[dtype-911])(Current);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R2308[Dtype(RTCW(loc1))-911])(loc1);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2266[dtype-911])(Current, loc2);
	RTLE;
}

void EIF_Minit809 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
