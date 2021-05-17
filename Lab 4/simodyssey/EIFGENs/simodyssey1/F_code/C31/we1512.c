/*
 * Code for class WEL_FIND_ARGUMENT
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1512.h"
#include "wel_find_argument.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_FIND_ARGUMENT}.structure_size */
static EIF_INTEGER_32 F1374_16523_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 450)

	
	RTEV;
	RTOTP;
	Result = (EIF_INTEGER_32) sizeof (FINDTEXTEX);
	RTOTE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F1374_16523 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,450,F1374_16523_body,(Current));
}

/* {WEL_FIND_ARGUMENT}.c_size_of_findargument */
EIF_INTEGER_32 F1374_16524 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) sizeof (FINDTEXTEX);
	return Result;
}

void EIF_Minit1512 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
