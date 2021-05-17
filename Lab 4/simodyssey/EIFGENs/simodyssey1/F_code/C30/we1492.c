/*
 * Code for class WEL_DOC_INFO
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1492.h"
#include <docinfo.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_DOC_INFO}.structure_size */
static EIF_INTEGER_32 F1353_16100_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 492)

	
	RTEV;
	RTOTP;
	Result = (EIF_INTEGER_32) sizeof (DOCINFO);
	RTOTE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F1353_16100 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,492,F1353_16100_body,(Current));
}

/* {WEL_DOC_INFO}.cwel_size_of_doc_info */
EIF_INTEGER_32 F1353_16103 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) sizeof (DOCINFO);
	return Result;
}

void EIF_Minit1492 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
