/*
 * Code for class WEL_INTEGER_ARRAY
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1515.h"
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

/* {WEL_INTEGER_ARRAY}.structure_size */
EIF_INTEGER_32 F1377_16571 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_);
	Result = eif_max_int32 ((EIF_INTEGER_32) (((EIF_INTEGER_32) 4L) * ti4_1),((EIF_INTEGER_32) 1L));
	RTLE;
	return Result;
}

void EIF_Minit1515 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
