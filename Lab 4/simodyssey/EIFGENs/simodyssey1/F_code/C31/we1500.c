/*
 * Code for class WEL_LIST_VIEW_COLUMN
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1500.h"
#include <lvcolumn.h>
#include <cctrl.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_LIST_VIEW_COLUMN}.make */
void F1361_16278 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1337_15830(Current);
	F1361_16288(Current, ((EIF_INTEGER_32) 0L));
	RTLE;
}

/* {WEL_LIST_VIEW_COLUMN}.set_mask */
void F1361_16288 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_1_1_0_0_0_0_);
	cwel_lv_column_set_mask((tp1), (arg1));
}

/* {WEL_LIST_VIEW_COLUMN}.set_text */
void F1361_16290 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_1_1_0_0_0_0_);
	cwel_lv_column_add_mask((tp1), (((EIF_INTEGER_32) 4L)));
	loc1 = RTLNSMART(eif_new_type(944, 0).id);
	F944_3738(RTCW(loc1), arg1);
	RTAR(Current, loc1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) loc1;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_1_1_0_0_0_0_);
	tp2 = F944_3745(RTCW(loc1));
	cwel_lv_column_set_psztext((tp1), (tp2));
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_1_1_0_0_0_0_);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_1_0_0_0_);
	cwel_lv_column_set_cchtextmax((tp1), (ti4_1));
	RTLE;
}

/* {WEL_LIST_VIEW_COLUMN}.set_width */
void F1361_16292 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_1_1_0_0_0_0_);
	cwel_lv_column_add_mask((tp1), (((EIF_INTEGER_32) 2L)));
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_1_1_0_0_0_0_);
	cwel_lv_column_set_cx((tp1), (arg1));
	RTLE;
}

/* {WEL_LIST_VIEW_COLUMN}.structure_size */
static EIF_INTEGER_32 F1361_16296_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 470)

	
	RTEV;
	RTOTP;
	Result = (EIF_INTEGER_32) sizeof (LV_COLUMN);
	RTOTE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F1361_16296 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,470,F1361_16296_body,(Current));
}

/* {WEL_LIST_VIEW_COLUMN}.c_size_of_lv_column */
EIF_INTEGER_32 F1361_16302 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) sizeof (LV_COLUMN);
	return Result;
}

/* {WEL_LIST_VIEW_COLUMN}.cwel_lv_column_set_mask */
void F1361_16303 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	cwel_lv_column_set_mask((arg1), (arg2));
}

/* {WEL_LIST_VIEW_COLUMN}.cwel_lv_column_add_mask */
void F1361_16304 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	cwel_lv_column_add_mask((arg1), (arg2));
}

/* {WEL_LIST_VIEW_COLUMN}.cwel_lv_column_set_cx */
void F1361_16307 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	cwel_lv_column_set_cx((arg1), (arg2));
}

/* {WEL_LIST_VIEW_COLUMN}.cwel_lv_column_set_psztext */
void F1361_16308 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	
	cwel_lv_column_set_psztext((arg1), (arg2));
}

/* {WEL_LIST_VIEW_COLUMN}.cwel_lv_column_set_cchtextmax */
void F1361_16309 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	cwel_lv_column_set_cchtextmax((arg1), (arg2));
}

void EIF_Minit1500 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
