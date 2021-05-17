/*
 * Code for class ARRAY2 [G#1]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ar2046.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {ARRAY2}.make_filled */
void F940_3245 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) = (EIF_INTEGER_32) arg2;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_) = (EIF_INTEGER_32) arg3;
	tr1 = RTCCL(arg1);
	F919_3186(Current, tr1, ((EIF_INTEGER_32) 1L), (EIF_INTEGER_32) (arg2 * arg3));
	RTLE;
}

/* {ARRAY2}.item */
EIF_REFERENCE F940_3247 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	RTLE;
	return (EIF_REFERENCE) F919_3191(Current, (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (arg1 - ((EIF_INTEGER_32) 1L)) * *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_)) + arg2));
}

/* {ARRAY2}.put */
void F940_3250 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTGC;
	tr1 = RTCCL(arg1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_);
	F919_3210(Current, tr1, (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L)) * ti4_1) + arg3));
	RTLE;
}

void EIF_Minit2046 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
