/*
 * Code for class WEL_TC_HITTESTINFO
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1491.h"
#include "cctrl.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_TC_HITTESTINFO}.structure_size */
static EIF_INTEGER_32 F1352_16087_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 496)

	
	RTEV;
	RTOTP;
	Result = (EIF_INTEGER_32) sizeof (TCHITTESTINFO);
	RTOTE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F1352_16087 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,496,F1352_16087_body,(Current));
}

/* {WEL_TC_HITTESTINFO}.c_size_of_tv_hittestinfo */
EIF_INTEGER_32 F1352_16088 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) sizeof (TCHITTESTINFO);
	return Result;
}

void EIF_Minit1491 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
