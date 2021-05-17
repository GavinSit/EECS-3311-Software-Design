/*
 * Code for class WEL_WINDOW_PLACEMENT
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1525.h"
#include <winplace.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_WINDOW_PLACEMENT}.structure_size */
static EIF_INTEGER_32 F1387_16779_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 419)

	
	RTEV;
	RTOTP;
	Result = (EIF_INTEGER_32) sizeof (WINDOWPLACEMENT);
	RTOTE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F1387_16779 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,419,F1387_16779_body,(Current));
}

/* {WEL_WINDOW_PLACEMENT}.c_size_of_window_placement */
EIF_INTEGER_32 F1387_16780 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) sizeof (WINDOWPLACEMENT);
	return Result;
}

void EIF_Minit1525 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
