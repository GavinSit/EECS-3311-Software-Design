/*
 * Code for class EV_INTERNAL_UP_DOWN_CONTROL
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1918.h"
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

/* {EV_INTERNAL_UP_DOWN_CONTROL}.default_style */
EIF_INTEGER_32 F1935_23155 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	RTGC;
	ti4_1 = eif_bit_or(((EIF_INTEGER_32) 268435456L),((EIF_INTEGER_32) 1073741824L));
	ti4_1 = eif_bit_or(ti4_1,((EIF_INTEGER_32) 32L));
	ti4_1 = eif_bit_or(ti4_1,((EIF_INTEGER_32) 2L));
	Result = eif_bit_or(ti4_1,((EIF_INTEGER_32) 4L));
	return Result;
}

/* {EV_INTERNAL_UP_DOWN_CONTROL}.tooltip_window */
EIF_REFERENCE F1935_23156 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_REFERENCE) Current;
}

void EIF_Minit1918 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
