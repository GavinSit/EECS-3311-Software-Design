/*
 * Code for class WEL_MEMORY_DC
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1446.h"
#include <windows.h>
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

/* {WEL_MEMORY_DC}.make */
void F1307_15413 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tp1 = (EIF_POINTER) CreateCompatibleDC(((HDC) loc1));
	*(EIF_POINTER *)(Current+ _PTROFF_6_2_0_3_0_0_) = (EIF_POINTER) tp1;
	RTLE;
}

/* {WEL_MEMORY_DC}.make_by_dc */
void F1307_15414 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(RTCW(arg1) + O12527[Dtype(arg1)-1295]);
	tp1 = (EIF_POINTER) CreateCompatibleDC(((HDC) tp1));
	*(EIF_POINTER *)(Current+ _PTROFF_6_2_0_3_0_0_) = (EIF_POINTER) tp1;
	RTLE;
}

/* {WEL_MEMORY_DC}.release */
void F1307_15416 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_MEMORY_DC}.destroy_item */
void F1307_15417 (EIF_REFERENCE Current)
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
		DeleteDC(((HDC) tp1));
	}
	*(EIF_POINTER *)(Current+ _PTROFF_6_2_0_3_0_0_) = (EIF_POINTER) loc1;
	RTLE;
}

/* {WEL_MEMORY_DC}.cwin_create_compatible_dc */
EIF_POINTER F1307_15418 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = (EIF_POINTER) CreateCompatibleDC(((HDC) arg1));
	return Result;
}

void EIF_Minit1446 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
