/*
 * Code for class WEL_CHARACTER_ARRAY
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1516.h"
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

/* {WEL_CHARACTER_ARRAY}.structure_size */
EIF_INTEGER_32 F1378_16576 (EIF_REFERENCE Current)
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
	Result = eif_max_int32 (ti4_1,((EIF_INTEGER_32) 1L));
	RTLE;
	return Result;
}

void EIF_Minit1516 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
