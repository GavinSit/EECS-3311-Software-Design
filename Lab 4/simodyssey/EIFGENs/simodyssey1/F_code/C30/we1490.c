/*
 * Code for class WEL_ACCELERATOR
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1490.h"
#include <wel.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_ACCELERATOR}.structure_size */
static EIF_INTEGER_32 F1351_16075_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 500)

	
	RTEV;
	RTOTP;
	Result = (EIF_INTEGER_32) sizeof (ACCEL);
	RTOTE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F1351_16075 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,500,F1351_16075_body,(Current));
}

/* {WEL_ACCELERATOR}.c_size_of_accel */
EIF_INTEGER_32 F1351_16076 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) sizeof (ACCEL);
	return Result;
}

void EIF_Minit1490 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
