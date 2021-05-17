/*
 * Code for class WEL_GDIP_COLOR
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we989.h"
#include "eif_misc.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_GDIP_COLOR}.make_from_argb */
void F31_9005 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	ti4_1 = eif_bit_shift_left(arg2,((EIF_INTEGER_32) 16L));
	ti4_2 = eif_bit_shift_left(arg3,((EIF_INTEGER_32) 8L));
	ti4_1 = eif_bit_or((ti4_1),ti4_2);
	ti4_1 = eif_bit_or((ti4_1),arg4);
	ti4_2 = eif_bit_shift_left(arg1,((EIF_INTEGER_32) 24L));
	ti4_1 = eif_bit_or((ti4_1),ti4_2);
	ti4_1 = eif_bit_and(((ti4_1)),(EIF_INTEGER_32) ((EIF_INTEGER_64) RTI64C(4294967295)));
	ti8_1 = (EIF_INTEGER_64) (ti4_1);
	*(EIF_INTEGER_64 *)(Current+ _I64OFF_0_0_0_0_0_0_0_) = (EIF_INTEGER_64) ti8_1;
	RTLE;
}

/* {WEL_GDIP_COLOR}.make_from_rgb */
void F31_9006 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	
	
	F31_9005(Current, ((EIF_INTEGER_32) 255L), arg1, arg2, arg3);
}

void EIF_Minit989 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
