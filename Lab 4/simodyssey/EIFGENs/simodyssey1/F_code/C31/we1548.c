/*
 * Code for class WEL_TREE_VIEW_ITEM
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1548.h"
#include <tvitem.h>
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

/* {WEL_TREE_VIEW_ITEM}.make */
void F1410_17386 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1337_15830(Current);
	F1410_17398(Current, ((EIF_INTEGER_32) 1L));
	RTLE;
}

/* {WEL_TREE_VIEW_ITEM}.mask */
EIF_INTEGER_32 F1410_17387 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	return (EIF_INTEGER_32) (EIF_INTEGER_32) cwel_tv_item_get_mask((tp1));
}

/* {WEL_TREE_VIEW_ITEM}.state_mask */
EIF_INTEGER_32 F1410_17388 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	return (EIF_INTEGER_32) (EIF_INTEGER_32) cwel_tv_item_get_statemask((tp1));
}

/* {WEL_TREE_VIEW_ITEM}.h_item */
EIF_POINTER F1410_17390 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	return (EIF_POINTER) (EIF_POINTER) cwel_tv_item_get_hitem(((TV_ITEM*) tp1));
}

/* {WEL_TREE_VIEW_ITEM}.state */
EIF_INTEGER_32 F1410_17391 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	return (EIF_INTEGER_32) (EIF_INTEGER_32) cwel_tv_item_get_state((tp1));
}

/* {WEL_TREE_VIEW_ITEM}.children */
EIF_INTEGER_32 F1410_17392 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	return (EIF_INTEGER_32) (EIF_INTEGER_32) cwel_tv_item_get_cchildren((tp1));
}

/* {WEL_TREE_VIEW_ITEM}.set_mask */
void F1410_17398 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	cwel_tv_item_set_mask((tp1), (arg1));
}

/* {WEL_TREE_VIEW_ITEM}.add_mask */
void F1410_17399 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	ti4_1 = F1410_17387(Current);
	cwel_tv_item_add_mask((tp1), (ti4_1), (arg1));
	RTLE;
}

/* {WEL_TREE_VIEW_ITEM}.set_text */
void F1410_17400 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
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
	*(EIF_REFERENCE *)(Current + O14698[dtype-1409]) = (EIF_REFERENCE) loc1;
	tp1 = *(EIF_POINTER *)(Current + O12527[dtype-1295]);
	tp2 = F944_3745(RTCW(loc1));
	cwel_tv_item_set_psztext((tp1), (tp2));
	tp1 = *(EIF_POINTER *)(Current + O12527[dtype-1295]);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_1_0_0_0_);
	cwel_tv_item_set_cchtextmax((tp1), (ti4_1));
	RTLE;
}

/* {WEL_TREE_VIEW_ITEM}.set_h_item */
void F1410_17401 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	cwel_tv_item_set_hitem((tp1), (arg1));
}

/* {WEL_TREE_VIEW_ITEM}.set_state */
void F1410_17402 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	cwel_tv_item_set_state((tp1), (arg1));
}

/* {WEL_TREE_VIEW_ITEM}.set_image */
void F1410_17404 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_POINTER tp1;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current + O12527[dtype-1295]);
	cwel_tv_item_set_iimage((tp1), (arg1));
	tp1 = *(EIF_POINTER *)(Current + O12527[dtype-1295]);
	cwel_tv_item_set_iselectedimage((tp1), (arg2));
	F1410_17399(Current, (EIF_INTEGER_32) (((EIF_INTEGER_32) 2L) + ((EIF_INTEGER_32) 32L)));
	RTLE;
}

/* {WEL_TREE_VIEW_ITEM}.structure_size */
static EIF_INTEGER_32 F1410_17405_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 478)

	
	RTEV;
	RTOTP;
	Result = (EIF_INTEGER_32) sizeof (TV_ITEM);
	RTOTE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F1410_17405 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,478,F1410_17405_body,(Current));
}

/* {WEL_TREE_VIEW_ITEM}.set_cchtextmax */
void F1410_17407 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	cwel_tv_item_set_cchtextmax((tp1), (arg1));
}

/* {WEL_TREE_VIEW_ITEM}.set_statemask */
void F1410_17408 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	cwel_tv_item_set_statemask((tp1), (arg1));
}

/* {WEL_TREE_VIEW_ITEM}.c_size_of_tv_item */
EIF_INTEGER_32 F1410_17409 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) sizeof (TV_ITEM);
	return Result;
}

/* {WEL_TREE_VIEW_ITEM}.cwel_tv_item_set_mask */
void F1410_17410 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	cwel_tv_item_set_mask((arg1), (arg2));
}

/* {WEL_TREE_VIEW_ITEM}.cwel_tv_item_add_mask */
void F1410_17411 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	
	
	cwel_tv_item_add_mask((arg1), (arg2), (arg3));
}

/* {WEL_TREE_VIEW_ITEM}.cwel_tv_item_set_hitem */
void F1410_17412 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	
	cwel_tv_item_set_hitem((arg1), (arg2));
}

/* {WEL_TREE_VIEW_ITEM}.cwel_tv_item_set_state */
void F1410_17413 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	cwel_tv_item_set_state((arg1), (arg2));
}

/* {WEL_TREE_VIEW_ITEM}.cwel_tv_item_set_statemask */
void F1410_17414 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	cwel_tv_item_set_statemask((arg1), (arg2));
}

/* {WEL_TREE_VIEW_ITEM}.cwel_tv_item_set_psztext */
void F1410_17415 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	
	cwel_tv_item_set_psztext((arg1), (arg2));
}

/* {WEL_TREE_VIEW_ITEM}.cwel_tv_item_set_cchtextmax */
void F1410_17416 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	cwel_tv_item_set_cchtextmax((arg1), (arg2));
}

/* {WEL_TREE_VIEW_ITEM}.cwel_tv_item_set_iimage */
void F1410_17417 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	cwel_tv_item_set_iimage((arg1), (arg2));
}

/* {WEL_TREE_VIEW_ITEM}.cwel_tv_item_set_iselectedimage */
void F1410_17418 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	cwel_tv_item_set_iselectedimage((arg1), (arg2));
}

/* {WEL_TREE_VIEW_ITEM}.cwel_tv_item_get_mask */
EIF_INTEGER_32 F1410_17421 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) cwel_tv_item_get_mask((arg1));
	return Result;
}

/* {WEL_TREE_VIEW_ITEM}.cwel_tv_item_get_hitem */
EIF_POINTER F1410_17422 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = (EIF_POINTER) cwel_tv_item_get_hitem(((TV_ITEM*) arg1));
	return Result;
}

/* {WEL_TREE_VIEW_ITEM}.cwel_tv_item_get_state */
EIF_INTEGER_32 F1410_17423 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) cwel_tv_item_get_state((arg1));
	return Result;
}

/* {WEL_TREE_VIEW_ITEM}.cwel_tv_item_get_statemask */
EIF_INTEGER_32 F1410_17424 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) cwel_tv_item_get_statemask((arg1));
	return Result;
}

/* {WEL_TREE_VIEW_ITEM}.cwel_tv_item_get_cchildren */
EIF_INTEGER_32 F1410_17429 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) cwel_tv_item_get_cchildren((arg1));
	return Result;
}

void EIF_Minit1548 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
