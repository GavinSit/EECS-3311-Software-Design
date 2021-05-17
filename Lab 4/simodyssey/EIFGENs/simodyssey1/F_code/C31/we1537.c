/*
 * Code for class WEL_ICON_INFO
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1537.h"
#include "winuser.h"
#include <winuser.h>
#include "eif_object_id.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_ICON_INFO}.initialize_bitmaps */
void F1399_16979 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	loc1 = RTLNS(eif_new_type(1319, 0x01).id, 1319, _OBJSIZ_0_3_0_3_0_2_0_0_);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_2_2_0_2_0_0_);
	tp1 = (EIF_POINTER) (((ICONINFO *)tp1)->hbmMask);
	F1317_15540(RTCW(loc1), tp1);
	RTAR(Current, loc1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) loc1;
	F1296_15102(RTCW(loc1));
	if (F1399_16984(Current)) {
		loc1 = RTLNS(eif_new_type(1319, 0x01).id, 1319, _OBJSIZ_0_3_0_3_0_2_0_0_);
		tp1 = *(EIF_POINTER *)(Current+ _PTROFF_2_2_0_2_0_0_);
		tp1 = (EIF_POINTER) (((ICONINFO *)tp1)->hbmColor);
		F1317_15540(RTCW(loc1), tp1);
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) loc1;
		F1296_15102(RTCW(loc1));
	}
	*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTLE;
}

/* {WEL_ICON_INFO}.mask_bitmap */
EIF_REFERENCE F1399_16980 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current);
	RTCT0("l_bitmap_attached", EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	RTLE;
	return (EIF_REFERENCE) loc1;
}

/* {WEL_ICON_INFO}.color_bitmap */
EIF_REFERENCE F1399_16981 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	RTCT0("l_bitmap_attached", EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	RTLE;
	return (EIF_REFERENCE) loc1;
}

/* {WEL_ICON_INFO}.has_color_bitmap */
EIF_BOOLEAN F1399_16984 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_2_2_0_2_0_0_);
	tp1 = (EIF_POINTER) (((ICONINFO *)tp1)->hbmColor);
	{
		/* INLINED CODE (ANY.default_pointer) */
		tp2 = (EIF_POINTER)  0;
		/* END INLINED CODE */
	}
	tp3 = tp2;
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tp1 != tp3);
	RTLE;
	return Result;
}

/* {WEL_ICON_INFO}.x_hotspot */
EIF_INTEGER_32 F1399_16985 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_2_2_0_2_0_0_);
	return (EIF_INTEGER_32) (EIF_INTEGER_32) (((ICONINFO *)tp1)->xHotspot);
}

/* {WEL_ICON_INFO}.y_hotspot */
EIF_INTEGER_32 F1399_16986 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_2_2_0_2_0_0_);
	return (EIF_INTEGER_32) (EIF_INTEGER_32) (((ICONINFO *)tp1)->yHotspot);
}

/* {WEL_ICON_INFO}.width */
EIF_INTEGER_32 F1399_16987 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if ((EIF_BOOLEAN) !F1399_16984(Current)) {
		Result = F1320_15572(RTCV(F1399_16980(Current)));
	} else {
		Result = F1320_15572(RTCV(F1399_16981(Current)));
	}
	RTLE;
	return Result;
}

/* {WEL_ICON_INFO}.height */
EIF_INTEGER_32 F1399_16988 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if ((EIF_BOOLEAN) !F1399_16984(Current)) {
		Result = F1320_15573(RTCV(F1399_16980(Current)));
		Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result / ((EIF_INTEGER_32) 2L));
	} else {
		Result = F1320_15573(RTCV(F1399_16981(Current)));
	}
	RTLE;
	return Result;
}

/* {WEL_ICON_INFO}.enable_reference_tracking_on_bitmaps */
void F1399_16989 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current);
	RTCT0("l_bitmap_attached", EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	F519_14209(RTCW(loc1));
	ti4_1 = F519_14208(RTCW(loc1));
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_0_) = (EIF_INTEGER_32) ti4_1;
	if (F1399_16984(Current)) {
		loc1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		RTCT0("l_bitmap_attached", EX_CHECK);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		F519_14209(RTCW(loc1));
		ti4_1 = F519_14208(RTCW(loc1));
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_1_) = (EIF_INTEGER_32) ti4_1;
	}
	RTLE;
}

/* {WEL_ICON_INFO}.set_x_hotspot */
void F1399_16990 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_2_2_0_2_0_0_);
	(((ICONINFO *)tp1)->xHotspot = (int)(arg1));
}

/* {WEL_ICON_INFO}.set_y_hotspot */
void F1399_16991 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_2_2_0_2_0_0_);
	(((ICONINFO *)tp1)->yHotspot = (int)(arg1));
}

/* {WEL_ICON_INFO}.set_mask_bitmap */
void F1399_16992 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current);
	tb1 = '\0';
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		tb2 = *(EIF_BOOLEAN *)(RTCW(loc1)+ _CHROFF_0_0_);
		tb1 = tb2;
	}
	if (tb1) {
		F519_14210(RTCW(loc1));
	}
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_2_2_0_2_0_0_);
	tp2 = *(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_0_3_0_3_0_0_);
	(((ICONINFO *)tp1)->hbmMask = (HBITMAP)(tp2));
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
	ti4_1 = F519_14208(RTCW(arg1));
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_0_) = (EIF_INTEGER_32) ti4_1;
	tb1 = *(EIF_BOOLEAN *)(RTCW(arg1)+ _CHROFF_0_0_);
	if (tb1) {
		F519_14211(RTCW(arg1));
	}
	*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTLE;
}

/* {WEL_ICON_INFO}.set_color_bitmap */
void F1399_16993 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tb1 = '\0';
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		tb2 = *(EIF_BOOLEAN *)(RTCW(loc1)+ _CHROFF_0_0_);
		tb1 = tb2;
	}
	if (tb1) {
		F519_14210(RTCW(loc1));
	}
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_2_2_0_2_0_0_);
	tp2 = *(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_0_3_0_3_0_0_);
	(((ICONINFO *)tp1)->hbmColor = (HBITMAP)(tp2));
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) arg1;
	ti4_1 = F519_14208(RTCW(arg1));
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_1_) = (EIF_INTEGER_32) ti4_1;
	tb1 = *(EIF_BOOLEAN *)(RTCW(arg1)+ _CHROFF_0_0_);
	if (tb1) {
		F519_14211(RTCW(arg1));
	}
	*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTLE;
}

/* {WEL_ICON_INFO}.set_is_icon */
void F1399_16994 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_2_2_0_2_0_0_);
	(((ICONINFO *)tp1)->fIcon = (unsigned char)(arg1));
}

/* {WEL_ICON_INFO}.structure_size */
static EIF_INTEGER_32 F1399_16995_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 362)

	
	RTEV;
	RTOTP;
	Result = (EIF_INTEGER_32) sizeof (ICONINFO);
	RTOTE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F1399_16995 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,362,F1399_16995_body,(Current));
}

/* {WEL_ICON_INFO}.delete */
void F1399_17002 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if (F1296_15099(Current)) {
		F1399_17003(Current);
	}
	RTLE;
}

/* {WEL_ICON_INFO}.destroy_item */
void F1399_17003 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLIU(4);
	
	RTGC;
	F1337_15837(Current);
	tb1 = '\0';
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_0_);
	tr1 = (EIF_REFERENCE) eif_id_object(ti4_1);
	loc1 = RTCCL(tr1);
	loc1 = RTRV(eif_new_type(1319, 0x01),loc1);
	if (EIF_TEST(loc1)) {
		tb2 = *(EIF_BOOLEAN *)(loc1+ _CHROFF_0_0_);
		tb1 = tb2;
	}
	if (tb1) {
		F519_14210(loc1);
	}
	tb1 = '\0';
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_1_);
	tr1 = (EIF_REFERENCE) eif_id_object(ti4_1);
	loc2 = RTCCL(tr1);
	loc2 = RTRV(eif_new_type(1319, 0x01),loc2);
	if (EIF_TEST(loc2)) {
		tb2 = *(EIF_BOOLEAN *)(loc2+ _CHROFF_0_0_);
		tb1 = tb2;
	}
	if (tb1) {
		F519_14210(loc2);
	}
	RTLE;
}

/* {WEL_ICON_INFO}.c_size_of_iconinfo */
EIF_INTEGER_32 F1399_17008 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) sizeof (ICONINFO);
	return Result;
}

/* {WEL_ICON_INFO}.xhotspot_ext */
EIF_INTEGER_32 F1399_17010 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) (((ICONINFO *)arg1)->xHotspot);
	
	return Result;
}

/* {WEL_ICON_INFO}.yhotspot_ext */
EIF_INTEGER_32 F1399_17011 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) (((ICONINFO *)arg1)->yHotspot);
	
	return Result;
}

/* {WEL_ICON_INFO}.hbmmask_ext */
EIF_POINTER F1399_17012 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) (((ICONINFO *)arg1)->hbmMask);
	
	return Result;
}

/* {WEL_ICON_INFO}.hbmcolor_ext */
EIF_POINTER F1399_17013 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) (((ICONINFO *)arg1)->hbmColor);
	
	return Result;
}

/* {WEL_ICON_INFO}.set_ficon_ext */
void F1399_17014 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_BOOLEAN arg2)
{
	GTCX
	
	(((ICONINFO *)arg1)->fIcon = (unsigned char)(arg2));
	
}

/* {WEL_ICON_INFO}.set_xhotspot_ext */
void F1399_17015 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	(((ICONINFO *)arg1)->xHotspot = (int)(arg2));
	
}

/* {WEL_ICON_INFO}.set_yhotspot_ext */
void F1399_17016 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	(((ICONINFO *)arg1)->yHotspot = (int)(arg2));
	
}

/* {WEL_ICON_INFO}.set_hbmmask_ext */
void F1399_17017 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	(((ICONINFO *)arg1)->hbmMask = (HBITMAP)(arg2));
	
}

/* {WEL_ICON_INFO}.set_hbmcolor_ext */
void F1399_17018 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	(((ICONINFO *)arg1)->hbmColor = (HBITMAP)(arg2));
	
}

void EIF_Minit1537 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
