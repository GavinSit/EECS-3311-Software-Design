/*
 * Code for class WEL_LOG_PEN
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1508.h"
#include <logpen.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_LOG_PEN}.structure_size */
static EIF_INTEGER_32 F1369_16466_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 454)

	
	RTEV;
	RTOTP;
	Result = (EIF_INTEGER_32) sizeof (LOGPEN);
	RTOTE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F1369_16466 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,454,F1369_16466_body,(Current));
}

/* {WEL_LOG_PEN}.c_size_of_logpen */
EIF_INTEGER_32 F1369_16467 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) sizeof (LOGPEN);
	return Result;
}

void EIF_Minit1508 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
