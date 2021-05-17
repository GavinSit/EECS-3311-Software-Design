/*
 * Code for class WEL_ARRAY [G#1]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we2070.h"
#include <string.h>
#include "eif_helpers.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_ARRAY}.make */
void F1370_16476 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_) = (EIF_INTEGER_32) arg1;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_1_) = (EIF_INTEGER_32) arg2;
	F1337_15830(Current);
	RTLE;
}

/* {WEL_ARRAY}.put */
void F1370_16477 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_2_0_0_);
	tp1 = RTPOF(tp1,(EIF_INTEGER_32) (arg2 * *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_1_)));
	tp2 = *(EIF_POINTER *)(RTCW(arg1) + O12527[Dtype(arg1)-1295]);
	memcpy((void *)tp1, (const void *) tp2, (size_t) *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_1_));
	RTLE;
}

/* {WEL_ARRAY}.i_th_item */
EIF_POINTER F1370_16478 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_2_0_0_);
	Result = RTPOF(tp1,(EIF_INTEGER_32) (arg1 * *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_1_)));
	RTLE;
	return Result;
}

/* {WEL_ARRAY}.structure_size */
EIF_INTEGER_32 F1370_16481 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_1_);
	ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_);
	Result = eif_max_int32 ((EIF_INTEGER_32) (ti4_1 * ti4_2),((EIF_INTEGER_32) 1L));
	RTLE;
	return Result;
}

void EIF_Minit2070 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
