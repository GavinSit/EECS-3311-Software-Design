/*
 * Code for class WEL_DISPLAY_DC
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1449.h"
#include <wel.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_DISPLAY_DC}.cwin_get_dc */
EIF_POINTER F1310_15446 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = (EIF_POINTER) GetDC(((HWND) arg1));
	return Result;
}

/* {WEL_DISPLAY_DC}.cwin_release_dc */
void F1310_15447 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	
	ReleaseDC(((HWND) arg1), ((HDC) arg2));
}

void EIF_Minit1449 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
