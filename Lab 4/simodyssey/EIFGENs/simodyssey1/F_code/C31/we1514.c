/*
 * Code for class WEL_BITMAP_FILE_HEADER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1514.h"
#include <bmpfileh.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_BITMAP_FILE_HEADER}.structure_size */
static EIF_INTEGER_32 F1376_16556_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 438)

	
	RTEV;
	RTOTP;
	Result = (EIF_INTEGER_32) sizeof (BITMAPFILEHEADER);
	RTOTE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F1376_16556 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,438,F1376_16556_body,(Current));
}

/* {WEL_BITMAP_FILE_HEADER}.c_size_of_bitmapfileheader */
EIF_INTEGER_32 F1376_16557 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) sizeof (BITMAPFILEHEADER);
	return Result;
}

void EIF_Minit1514 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
