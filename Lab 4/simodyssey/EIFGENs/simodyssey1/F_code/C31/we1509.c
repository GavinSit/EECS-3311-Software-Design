/*
 * Code for class WEL_FORMAT_RANGE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1509.h"
#include <frange.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_FORMAT_RANGE}.structure_size */
static EIF_INTEGER_32 F1371_16491_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 453)

	
	RTEV;
	RTOTP;
	Result = (EIF_INTEGER_32) sizeof (FORMATRANGE);
	RTOTE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F1371_16491 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,453,F1371_16491_body,(Current));
}

/* {WEL_FORMAT_RANGE}.c_size_of_formatrange */
EIF_INTEGER_32 F1371_16492 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) sizeof (FORMATRANGE);
	return Result;
}

void EIF_Minit1509 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
