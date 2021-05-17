/*
 * Code for class KI_CHARACTER_INPUT_STREAM
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ki1423.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {KI_CHARACTER_INPUT_STREAM}.read_to_string */
EIF_INTEGER_32 F1273_14976 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 tc1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 + arg3) - ((EIF_INTEGER_32) 1L));
	loc1 = (EIF_INTEGER_32) arg2;
	for (;;) {
		if ((EIF_BOOLEAN) (loc1 > loc2)) break;
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R10519[dtype-1274])(Current);
		if ((EIF_BOOLEAN) !(FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R10525[dtype-1274])(Current)) {
			tc1 = (eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R10528[dtype-1274])(Current));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R2255[Dtype(RTCW(arg1))-918])(arg1, (EIF_REFERENCE) &tc1, (EIF_REFERENCE) &loc1);
			loc1++;
		} else {
			Result = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 - arg2) - arg3);
			loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
		}
	}
	RTLE;
	return (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (Result + loc1) - arg2);
}

void EIF_Minit1423 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
