/*
 * Code for class WEL_COMMON_CONTROLS_DLL
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1443.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_COMMON_CONTROLS_DLL}.make */
void F1304_15195 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = RTOUCR(404,F1304_15196, (Current));
	F1303_15187(Current, tr1);
	RTLE;
}

/* {WEL_COMMON_CONTROLS_DLL}.common_controls_dll_name */

EIF_REFERENCE F1304_15196 (EIF_REFERENCE Current)
{
	GTCX
	RTOUC (404,RTMS_EX_H("comctl32.dll",12,1700689004));
}

void EIF_Minit1443 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
