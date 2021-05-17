/*
 * Code for class EV_STOCK_PIXMAPS_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1834.h"
#include "wel.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_STOCK_PIXMAPS_IMP}.information_pixmap */
EIF_REFERENCE F1851_20967 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTGC;
	tp1 = (EIF_POINTER) IDI_ASTERISK;
	Result = F1851_20973(Current, tp1);
	RTLE;
	return Result;
}

/* {EV_STOCK_PIXMAPS_IMP}.error_pixmap */
EIF_REFERENCE F1851_20968 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTGC;
	tp1 = (EIF_POINTER) IDI_HAND;
	Result = F1851_20973(Current, tp1);
	RTLE;
	return Result;
}

/* {EV_STOCK_PIXMAPS_IMP}.default_window_icon */
EIF_REFERENCE F1851_20971 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Result);
	RTLR(1,loc1);
	RTLIU(2);
	
	RTGC;
	Result = RTLNS(eif_new_type(1652, 0x01).id, 1652, _OBJSIZ_6_3_0_1_0_0_0_0_);
	F1596_17742(RTCW(Result));
	loc1 = *(EIF_REFERENCE *)(RTCW(Result) + _REFACS_3_);
	loc1 = RTRV(eif_new_type(1871, 0x00), loc1);
	RTCT0("pixmap_imp /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	F1872_21260(RTCW(loc1));
	RTLE;
	return Result;
}

/* {EV_STOCK_PIXMAPS_IMP}.build_default_pixmap */
EIF_REFERENCE F1851_20973 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Result);
	RTLR(1,loc2);
	RTLR(2,loc1);
	RTLIU(3);
	
	RTGC;
	Result = RTLNS(eif_new_type(1652, 0x01).id, 1652, _OBJSIZ_6_3_0_1_0_0_0_0_);
	F1596_17742(RTCW(Result));
	loc2 = RTLNS(eif_new_type(1323, 0x01).id, 1323, _OBJSIZ_0_2_0_3_0_1_0_0_);
	F1323_15635(RTCW(loc2), arg1);
	F519_14209(RTCW(loc2));
	loc1 = *(EIF_REFERENCE *)(RTCW(Result) + _REFACS_3_);
	loc1 = RTRV(eif_new_type(1871, 0x00), loc1);
	RTCT0("pixmap_imp /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	F1872_21259(RTCW(loc1), loc2);
	F519_14210(RTCW(loc2));
	RTLE;
	return Result;
}

void EIF_Minit1834 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
