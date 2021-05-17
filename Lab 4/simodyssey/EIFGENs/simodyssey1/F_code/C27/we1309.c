/*
 * Code for class WEL_DATA_TYPE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1309.h"
#include <windows.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_DATA_TYPE}.to_lparam */
EIF_POINTER F469_13509 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = (EIF_POINTER) (LPARAM)((arg1));
	return Result;
}

/* {WEL_DATA_TYPE}.to_wparam */
EIF_POINTER F469_13510 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = (EIF_POINTER) (WPARAM)((arg1));
	return Result;
}

/* {WEL_DATA_TYPE}.to_lresult */
EIF_POINTER F469_13511 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = (EIF_POINTER) (LRESULT)((arg1));
	return Result;
}

void EIF_Minit1309 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
