/*
 * Code for class WEL_SCREEN_DC
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1450.h"
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

/* {WEL_SCREEN_DC}.get */
void F1311_15448 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_POINTER *)(Current+ _PTROFF_6_2_0_3_0_0_) == loc1)) {
		tp1 = (EIF_POINTER) GetDC(((HWND) loc1));
		*(EIF_POINTER *)(Current+ _PTROFF_6_2_0_3_0_0_) = (EIF_POINTER) tp1;
	}
	RTLE;
}

/* {WEL_SCREEN_DC}.release */
void F1311_15449 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_POINTER *)(Current+ _PTROFF_6_2_0_3_0_0_) != loc1)) {
		F1306_15272(Current);
		tp1 = *(EIF_POINTER *)(Current+ _PTROFF_6_2_0_3_0_0_);
		ReleaseDC(((HWND) loc1), ((HDC) tp1));
		*(EIF_POINTER *)(Current+ _PTROFF_6_2_0_3_0_0_) = (EIF_POINTER) loc1;
	}
	RTLE;
}

/* {WEL_SCREEN_DC}.quick_release */
void F1311_15450 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_POINTER *)(Current+ _PTROFF_6_2_0_3_0_0_) != loc1)) {
		tp1 = *(EIF_POINTER *)(Current+ _PTROFF_6_2_0_3_0_0_);
		ReleaseDC(((HWND) loc1), ((HDC) tp1));
		*(EIF_POINTER *)(Current+ _PTROFF_6_2_0_3_0_0_) = (EIF_POINTER) loc1;
	}
	RTLE;
}

/* {WEL_SCREEN_DC}.destroy_item */
void F1311_15451 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_POINTER *)(Current+ _PTROFF_6_2_0_3_0_0_) != loc1)) {
		F1306_15272(Current);
		tp1 = *(EIF_POINTER *)(Current+ _PTROFF_6_2_0_3_0_0_);
		ReleaseDC(((HWND) loc1), ((HDC) tp1));
		*(EIF_POINTER *)(Current+ _PTROFF_6_2_0_3_0_0_) = (EIF_POINTER) loc1;
	}
	RTLE;
}

void EIF_Minit1450 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
