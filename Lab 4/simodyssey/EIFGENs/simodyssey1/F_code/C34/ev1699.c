/*
 * Code for class EV_POINTER_STYLE_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1699.h"
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

/* {EV_POINTER_STYLE_IMP}.make */
void F1706_19134 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tp1 = F1706_19148(Current, ((EIF_INTEGER_32) 2L));
	F1706_19150(Current, tp1);
	F1696_18990(Current, (EIF_BOOLEAN) 1);
	RTLE;
}

/* {EV_POINTER_STYLE_IMP}.init_predefined */
void F1706_19138 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1706_19154(Current);
	tp1 = F1706_19148(Current, arg1);
	F1706_19150(Current, tp1);
	RTLE;
}

/* {EV_POINTER_STYLE_IMP}.set_x_hotspot */
void F1706_19139 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	F1706_19141(Current, arg1, (EIF_BOOLEAN) 1);
}

/* {EV_POINTER_STYLE_IMP}.set_y_hotspot */
void F1706_19140 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	F1706_19141(Current, arg1, (EIF_BOOLEAN) 0);
}

/* {EV_POINTER_STYLE_IMP}.set_hotspot_imp */
void F1706_19141 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_BOOLEAN arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	loc1 = F1323_15636(RTCW(tr1));
	RTCT0("l_icon_info /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	F519_14210(RTCW(tr1));
	if (arg2) {
		F1399_16990(RTCW(loc1), arg1);
	} else {
		F1399_16991(RTCW(loc1), arg1);
	}
	tr1 = RTLNSMART(eif_new_type(1849, 1).id);
	F1323_15632(RTCW(tr1), loc1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	F519_14209(RTCW(tr1));
	F1399_17002(RTCW(loc1));
	RTLE;
}

/* {EV_POINTER_STYLE_IMP}.destroy */
void F1706_19142 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1696_18992(Current, (EIF_BOOLEAN) 1);
	F1706_19154(Current);
	F1696_18991(Current, (EIF_BOOLEAN) 1);
	RTLE;
}

/* {EV_POINTER_STYLE_IMP}.width */
EIF_INTEGER_32 F1706_19144 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr1 = F1323_15636(RTCW(tr1));
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		Result = F1399_16987(loc1);
		F1399_17002(loc1);
	}
	RTLE;
	return Result;
}

/* {EV_POINTER_STYLE_IMP}.height */
EIF_INTEGER_32 F1706_19145 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr1 = F1323_15636(RTCW(tr1));
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		Result = F1399_16988(loc1);
		F1399_17002(loc1);
	}
	RTLE;
	return Result;
}

/* {EV_POINTER_STYLE_IMP}.x_hotspot */
EIF_INTEGER_32 F1706_19146 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	Result = F1850_20949(RTCW(tr1));
	RTLE;
	return Result;
}

/* {EV_POINTER_STYLE_IMP}.y_hotspot */
EIF_INTEGER_32 F1706_19147 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	Result = F1850_20950(RTCW(tr1));
	RTLE;
	return Result;
}

/* {EV_POINTER_STYLE_IMP}.to_windows_constants */
EIF_POINTER F1706_19148 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	switch (arg1) {
		case 1L:
			Result = (EIF_POINTER) IDC_APPSTARTING;
			break;
		case 3L:
			Result = (EIF_POINTER) IDC_CROSS;
			break;
		case 4L:
			Result = (EIF_POINTER) IDC_HELP;
			break;
		case 5L:
			Result = (EIF_POINTER) IDC_IBEAM;
			break;
		case 6L:
			Result = (EIF_POINTER) IDC_NO;
			break;
		case 7L:
			Result = (EIF_POINTER) IDC_SIZEALL;
			break;
		case 10L:
			Result = (EIF_POINTER) IDC_SIZENESW;
			break;
		case 8L:
			Result = (EIF_POINTER) IDC_SIZENS;
			break;
		case 9L:
			Result = (EIF_POINTER) IDC_SIZENWSE;
			break;
		case 11L:
			Result = (EIF_POINTER) IDC_SIZEWE;
			break;
		case 2L:
			Result = (EIF_POINTER) IDC_ARROW;
			break;
		case 12L:
			Result = (EIF_POINTER) IDC_UPARROW;
			break;
		case 13L:
			Result = (EIF_POINTER) IDC_WAIT;
			break;
		case 14L:
			Result = (EIF_POINTER) IDC_SIZEWE;
			break;
		case 15L:
			Result = (EIF_POINTER) MAKEINTRESOURCE(32649);
			break;
		default:
			RTEC(EN_WHEN);
	}
	RTLE;
	return Result;
}

/* {EV_POINTER_STYLE_IMP}.copy_from_pointer_style */
void F1706_19149 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,arg1);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_1_);
	loc1 = tr1;
	loc1 = RTRV(eif_new_type(Dftype(Current), 1),loc1);
	if (EIF_TEST(loc1)) {
		tr1 = *(EIF_REFERENCE *)(loc1 + _REFACS_1_);
		tr1 = F1_14(tr1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	} else {
	}
	RTLE;
}

/* {EV_POINTER_STYLE_IMP}.build_default_icon */
void F1706_19150 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNSMART(eif_new_type(1849, 1).id);
	F1323_15635(RTCW(tr1), arg1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	F519_14209(RTCW(tr1));
	RTLE;
}

/* {EV_POINTER_STYLE_IMP}.destroy_gdi_objects */
void F1706_19154 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLR(4,loc3);
	RTLIU(5);
	
	RTGC;
	tb1 = '\0';
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	loc1 = tr1;
	if ((EIF_TRUE)) {
		tb2 = F1296_15099(loc1);
		tb1 = tb2;
	}
	if (tb1) {
		F519_14210(loc1);
	}
	tb1 = '\0';
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	loc2 = tr1;
	if (EIF_TEST(loc2)) {
		tb2 = F1296_15099(loc2);
		tb1 = tb2;
	}
	if (tb1) {
		tb1 = *(EIF_BOOLEAN *)(loc2+ _CHROFF_0_0_);
		if (tb1) {
			F519_14210(loc2);
		} else {
			F519_14213(loc2);
		}
	}
	tb1 = '\0';
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	loc3 = tr1;
	if (EIF_TEST(loc3)) {
		tb2 = F1296_15099(loc3);
		tb1 = tb2;
	}
	if (tb1) {
		F519_14213(loc3);
	}
	RTLE;
}

/* {EV_POINTER_STYLE_IMP}.idc_constants */
static EIF_REFERENCE F1706_19157_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(264)

	RTLI(1);
	RTLR(0,tr1);
	RTLIU(1);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(eif_new_type(222, 0x01).id, 222, _OBJSIZ_0_0_0_0_0_0_0_0_);
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1706_19157 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(264,F1706_19157_body,(Current));
}

void EIF_Minit1699 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
