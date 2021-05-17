/*
 * Code for class WEL_PARAGRAPH_FORMAT2
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1550.h"
#include "redit.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_PARAGRAPH_FORMAT2}.structure_size */
static EIF_INTEGER_32 F1412_17505_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 343)

	
	RTEV;
	RTOTP;
	Result = (EIF_INTEGER_32) sizeof (WEL_PARAFORMAT2);
	RTOTE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F1412_17505 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,343,F1412_17505_body,(Current));
}

/* {WEL_PARAGRAPH_FORMAT2}.c_size_of_paraformat */
EIF_INTEGER_32 F1412_17506 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) sizeof (WEL_PARAFORMAT2);
	return Result;
}

void EIF_Minit1550 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
