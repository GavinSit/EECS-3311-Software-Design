/*
 * Code for class WEL_RICH_EDIT_DLL
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1444.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_RICH_EDIT_DLL}.make */
void F1305_15197 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = RTOUCR(367,F1305_15198, (Current));
	F1303_15187(Current, tr1);
	RTLE;
}

/* {WEL_RICH_EDIT_DLL}.rich_edit_dll_name */

EIF_REFERENCE F1305_15198 (EIF_REFERENCE Current)
{
	GTCX
	RTOUC (367,RTMS_EX_H("riched32.dll",12,172585836));
}

void EIF_Minit1444 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
