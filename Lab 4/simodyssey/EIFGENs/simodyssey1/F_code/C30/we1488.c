/*
 * Code for class WEL_HD_ITEM
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1488.h"
#include "nmtb.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_HD_ITEM}.structure_size */
static EIF_INTEGER_32 F1349_16040_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 503)

	
	RTEV;
	RTOTP;
	Result = (EIF_INTEGER_32) sizeof (HDITEM);
	RTOTE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F1349_16040 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,503,F1349_16040_body,(Current));
}

/* {WEL_HD_ITEM}.c_size_of_hd_item */
EIF_INTEGER_32 F1349_16043 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) sizeof (HDITEM);
	return Result;
}

void EIF_Minit1488 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
