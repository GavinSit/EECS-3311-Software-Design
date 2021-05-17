/*
 * Code for class WEL_CLIENT_DC
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1451.h"
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

/* {WEL_CLIENT_DC}.destroy_item */
void F1312_15459 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_POINTER *)(Current+ _PTROFF_7_2_0_3_0_0_) != loc1)) {
		F1306_15272(Current);
		tp1 = *(EIF_POINTER *)(Current+ _PTROFF_7_2_0_3_0_7_);
		tp2 = *(EIF_POINTER *)(Current+ _PTROFF_7_2_0_3_0_0_);
		ReleaseDC(((HWND) tp1), ((HDC) tp2));
		*(EIF_POINTER *)(Current+ _PTROFF_7_2_0_3_0_0_) = (EIF_POINTER) loc1;
	}
	RTLE;
}

void EIF_Minit1451 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
