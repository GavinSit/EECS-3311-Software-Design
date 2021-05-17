/*
 * Code for class WEL_LIST_VIEW_ITEM
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1499.h"
#include <cctrl.h>
#include <lvitem.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_LIST_VIEW_ITEM}.make */
void F1360_16236 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1337_15830(Current);
	F1360_16245(Current, ((EIF_INTEGER_32) 1L));
	RTLE;
}

/* {WEL_LIST_VIEW_ITEM}.make_with_attributes */
void F1360_16237 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_REFERENCE arg5)
{
	GTCX
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg5);
	RTLIU(2);
	
	RTGC;
	F1337_15830(Current);
	F1360_16245(Current, arg1);
	F1360_16247(Current, arg2);
	F1360_16248(Current, arg3);
	F1360_16251(Current, arg5);
	F1360_16253(Current, arg4);
	RTLE;
}

/* {WEL_LIST_VIEW_ITEM}.mask */
EIF_INTEGER_32 F1360_16238 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_1_1_0_0_0_0_);
	return (EIF_INTEGER_32) (EIF_INTEGER_32) cwel_lv_item_get_mask((tp1));
}

/* {WEL_LIST_VIEW_ITEM}.text */
EIF_REFERENCE F1360_16242 (EIF_REFERENCE Current)
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
	loc1 = *(EIF_REFERENCE *)(Current);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		tr1 = F944_3743(RTCW(loc1));
		RTLE;
		return (EIF_REFERENCE) tr1;
	} else {
		tr1 = RTLNS(eif_new_type(1564, 0x01).id, 1564, _OBJSIZ_1_1_0_3_0_0_0_0_);
		F1558_6510(RTCW(tr1));
		RTLE;
		return (EIF_REFERENCE) tr1;
	}/* NOTREACHED */
	
}

/* {WEL_LIST_VIEW_ITEM}.set_mask */
void F1360_16245 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_1_1_0_0_0_0_);
	cwel_lv_item_set_mask((tp1), (arg1));
}

/* {WEL_LIST_VIEW_ITEM}.add_mask */
void F1360_16246 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_1_1_0_0_0_0_);
	ti4_1 = F1360_16238(Current);
	cwel_lv_item_add_mask((tp1), (ti4_1), (arg1));
	RTLE;
}

/* {WEL_LIST_VIEW_ITEM}.set_iitem */
void F1360_16247 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_1_1_0_0_0_0_);
	cwel_lv_item_set_iitem((tp1), (arg1));
}

/* {WEL_LIST_VIEW_ITEM}.set_isubitem */
void F1360_16248 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_1_1_0_0_0_0_);
	cwel_lv_item_set_isubitem((tp1), (arg1));
}

/* {WEL_LIST_VIEW_ITEM}.set_state */
void F1360_16250 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_1_1_0_0_0_0_);
	cwel_lv_item_set_state((tp1), (arg1));
}

/* {WEL_LIST_VIEW_ITEM}.set_text */
void F1360_16251 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTGC;
	loc1 = RTLNSMART(eif_new_type(944, 0).id);
	F944_3738(RTCW(loc1), arg1);
	RTAR(Current, loc1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) loc1;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_1_1_0_0_0_0_);
	tp2 = F944_3745(RTCW(loc1));
	cwel_lv_item_set_psztext((tp1), (tp2));
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_1_1_0_0_0_0_);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_1_0_0_0_);
	cwel_lv_item_set_cchtextmax((tp1), (ti4_1));
	RTLE;
}

/* {WEL_LIST_VIEW_ITEM}.set_text_with_wel_string */
void F1360_16252 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_1_1_0_0_0_0_);
	tp2 = F944_3745(RTCW(arg1));
	cwel_lv_item_set_psztext((tp1), (tp2));
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_1_1_0_0_0_0_);
	ti4_1 = F945_14361(RTCW(arg1));
	cwel_lv_item_set_cchtextmax((tp1), (ti4_1));
	RTLE;
}

/* {WEL_LIST_VIEW_ITEM}.set_image */
void F1360_16253 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_1_1_0_0_0_0_);
	cwel_lv_item_set_iimage((tp1), (arg1));
	F1360_16246(Current, ((EIF_INTEGER_32) 2L));
	RTLE;
}

/* {WEL_LIST_VIEW_ITEM}.structure_size */
static EIF_INTEGER_32 F1360_16254_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 471)

	
	RTEV;
	RTOTP;
	Result = (EIF_INTEGER_32) sizeof (LV_ITEM);
	RTOTE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F1360_16254 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,471,F1360_16254_body,(Current));
}

/* {WEL_LIST_VIEW_ITEM}.set_statemask */
void F1360_16257 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_1_1_0_0_0_0_);
	cwel_lv_item_set_statemask((tp1), (arg1));
}

/* {WEL_LIST_VIEW_ITEM}.c_size_of_lv_item */
EIF_INTEGER_32 F1360_16258 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) sizeof (LV_ITEM);
	return Result;
}

/* {WEL_LIST_VIEW_ITEM}.cwel_lv_item_set_mask */
void F1360_16259 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	cwel_lv_item_set_mask((arg1), (arg2));
}

/* {WEL_LIST_VIEW_ITEM}.cwel_lv_item_add_mask */
void F1360_16260 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	
	
	cwel_lv_item_add_mask((arg1), (arg2), (arg3));
}

/* {WEL_LIST_VIEW_ITEM}.cwel_lv_item_set_iitem */
void F1360_16261 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	cwel_lv_item_set_iitem((arg1), (arg2));
}

/* {WEL_LIST_VIEW_ITEM}.cwel_lv_item_set_isubitem */
void F1360_16262 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	cwel_lv_item_set_isubitem((arg1), (arg2));
}

/* {WEL_LIST_VIEW_ITEM}.cwel_lv_item_set_state */
void F1360_16263 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	cwel_lv_item_set_state((arg1), (arg2));
}

/* {WEL_LIST_VIEW_ITEM}.cwel_lv_item_set_statemask */
void F1360_16264 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	cwel_lv_item_set_statemask((arg1), (arg2));
}

/* {WEL_LIST_VIEW_ITEM}.cwel_lv_item_set_psztext */
void F1360_16265 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	
	cwel_lv_item_set_psztext((arg1), (arg2));
}

/* {WEL_LIST_VIEW_ITEM}.cwel_lv_item_set_cchtextmax */
void F1360_16266 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	cwel_lv_item_set_cchtextmax((arg1), (arg2));
}

/* {WEL_LIST_VIEW_ITEM}.cwel_lv_item_set_iimage */
void F1360_16267 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	cwel_lv_item_set_iimage((arg1), (arg2));
}

/* {WEL_LIST_VIEW_ITEM}.cwel_lv_item_get_mask */
EIF_INTEGER_32 F1360_16269 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) cwel_lv_item_get_mask((arg1));
	return Result;
}

void EIF_Minit1499 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
