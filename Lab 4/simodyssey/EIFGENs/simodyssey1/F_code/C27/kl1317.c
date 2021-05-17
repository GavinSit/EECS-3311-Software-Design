/*
 * Code for class KL_PLATFORM
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "kl1317.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {KL_PLATFORM}.maximum_character_code */
static EIF_INTEGER_32 F478_13929_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 314)

	
	RTEV;
	RTOTP;
	Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 255L);
	RTOTE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F478_13929 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,314,F478_13929_body,(Current));
}

void EIF_Minit1317 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
