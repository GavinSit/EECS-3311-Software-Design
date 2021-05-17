/*
 * Code for class WEL_STRUCTURE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1476.h"
#include <string.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_STRUCTURE}.make */
void F1337_15830 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current + O12527[dtype-1295]);
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R13210[dtype-1337])(Current);
	tp1 = calloc((size_t)((EIF_INTEGER_32) 1L), (size_t) ti4_1);
	*(EIF_POINTER *)(Current + O12527[dtype-1295]) = (EIF_POINTER) tp1;
	if ((EIF_BOOLEAN)(*(EIF_POINTER *)(Current + O12527[dtype-1295]) == loc1)) {
		tr1 = RTLNS(eif_new_type(462, 0x01).id, 462, _OBJSIZ_0_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("No more memory",14,904766585);
		F463_1400(RTCW(tr1), tr2);
	}
	*(EIF_BOOLEAN *)(Current + O12528[dtype-1295]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTLE;
}

/* {WEL_STRUCTURE}.copy */
void F1337_15831 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 != Current)) {
		tb1 = '\01';
		tb2 = '\01';
		tp1 = *(EIF_POINTER *)(RTCW(arg1) + O12527[Dtype(arg1)-1295]);
		if (!(EIF_BOOLEAN)(*(EIF_POINTER *)(Current + O12527[dtype-1295]) == tp1)) {
			tb2 = *(EIF_BOOLEAN *)(Current + O12528[dtype-1295]);
		}
		if (!tb2) {
			tb1 = (EIF_BOOLEAN)(*(EIF_POINTER *)(Current + O12527[dtype-1295]) == loc1);
		}
		if (tb1) {
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R13206[dtype-1337])(Current);
		}
		tp1 = *(EIF_POINTER *)(Current + O12527[dtype-1295]);
		tp2 = *(EIF_POINTER *)(RTCW(arg1) + O12527[Dtype(arg1)-1295]);
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R13210[dtype-1337])(Current);
		memcpy((void *)tp1, (const void *) tp2, (size_t) ti4_1);
	}
	RTLE;
}

/* {WEL_STRUCTURE}.is_equal */
EIF_BOOLEAN F1337_15832 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current + O12527[dtype-1295]);
	tp2 = *(EIF_POINTER *)(RTCW(arg1) + O12527[Dtype(arg1)-1295]);
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R13210[dtype-1337])(Current);
	tr1 = RTLNS(eif_new_type(1550, 0x00).id, 1550, _OBJSIZ_0_0_0_0_0_1_0_0_);
	*(EIF_POINTER *)tr1 = tp1;
	Result = F1519_6429(RTCW(tr1), tp2, ti4_1);
	RTLE;
	return Result;
}

/* {WEL_STRUCTURE}.memory_copy */
void F1337_15833 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	memcpy((void *)tp1, (const void *) arg1, (size_t) arg2);
	RTLE;
}

/* {WEL_STRUCTURE}.destroy_item */
void F1337_15837 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_POINTER *)(Current + O12527[dtype-1295]) != loc1)) {
		tp1 = *(EIF_POINTER *)(Current + O12527[dtype-1295]);
		free(tp1);
		*(EIF_POINTER *)(Current + O12527[dtype-1295]) = (EIF_POINTER) loc1;
	}
	RTLE;
}

void EIF_Minit1476 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
