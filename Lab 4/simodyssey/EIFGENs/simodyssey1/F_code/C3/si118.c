/*
 * Code for class SINGLE_MATH
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "si118.h"
#include <math.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {SINGLE_MATH}.cosine */
EIF_REAL_32 F392_1698 (EIF_REFERENCE Current, EIF_REAL_32 arg1)
{
	GTCX
	EIF_REAL_32 Result = ((EIF_REAL_32) 0);
	
	
	Result = (EIF_REAL_32) cos((double) arg1);
	
	return Result;
}

/* {SINGLE_MATH}.sine */
EIF_REAL_32 F392_1700 (EIF_REFERENCE Current, EIF_REAL_32 arg1)
{
	GTCX
	EIF_REAL_32 Result = ((EIF_REAL_32) 0);
	
	
	Result = (EIF_REAL_32) sin((double) arg1);
	
	return Result;
}

void EIF_Minit118 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
