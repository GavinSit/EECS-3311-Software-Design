/*
 * Code for class WEL_CURSOR
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1833.h"
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

/* {WEL_CURSOR}.x_hotspot */
EIF_INTEGER_32 F1850_20949 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	loc1 = F1323_15636(Current);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		Result = F1399_16985(RTCW(loc1));
		F1399_16989(RTCW(loc1));
		F1296_15104(RTCW(loc1));
	} else {
		RTLE;
		return (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	}
	RTLE;
	return Result;
}

/* {WEL_CURSOR}.y_hotspot */
EIF_INTEGER_32 F1850_20950 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	loc1 = F1323_15636(Current);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		Result = F1399_16986(RTCW(loc1));
		F1399_16989(RTCW(loc1));
		F1296_15104(RTCW(loc1));
	} else {
		RTLE;
		return (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	}
	RTLE;
	return Result;
}

/* {WEL_CURSOR}.set */
void F1850_20952 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_2_0_3_0_0_);
	tp1 = (EIF_POINTER) SetCursor(((HCURSOR) tp1));
	*(EIF_POINTER *)(Current+ _PTROFF_0_2_0_3_0_1_) = (EIF_POINTER) tp1;
	RTLE;
}

/* {WEL_CURSOR}.load_item */
void F1850_20955 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tp1 = (EIF_POINTER) LoadCursor(((HINSTANCE) arg1), ((LPCTSTR) arg2));
	*(EIF_POINTER *)(Current+ _PTROFF_0_2_0_3_0_0_) = (EIF_POINTER) tp1;
	RTLE;
}

/* {WEL_CURSOR}.destroy_resource */
EIF_BOOLEAN F1850_20957 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_2_0_3_0_0_);
	return (EIF_BOOLEAN) (EIF_BOOLEAN) EIF_TEST(DestroyCursor(((HCURSOR) tp1)));
}

/* {WEL_CURSOR}.cwin_set_cursor */
EIF_POINTER F1850_20958 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = (EIF_POINTER) SetCursor(((HCURSOR) arg1));
	return Result;
}

/* {WEL_CURSOR}.cwin_load_cursor */
EIF_POINTER F1850_20959 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = (EIF_POINTER) LoadCursor(((HINSTANCE) arg1), ((LPCTSTR) arg2));
	return Result;
}

/* {WEL_CURSOR}.cwin_destroy_cursor */
EIF_BOOLEAN F1850_20960 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	
	Result = (EIF_BOOLEAN) EIF_TEST(DestroyCursor(((HCURSOR) arg1)));
	return Result;
}

void EIF_Minit1833 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
