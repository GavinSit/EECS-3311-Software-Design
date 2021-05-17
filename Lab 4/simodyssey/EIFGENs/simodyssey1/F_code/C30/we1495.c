/*
 * Code for class WEL_COMBO_BOX_EX_ITEM
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1495.h"
#include "cctrl.h"
#include "comboboxexitem.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_COMBO_BOX_EX_ITEM}.make_with_index */
void F1356_16155 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1337_15830(Current);
	F1356_16163(Current, arg1);
	RTLE;
}

/* {WEL_COMBO_BOX_EX_ITEM}.mask */
EIF_INTEGER_32 F1356_16156 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_1_1_0_0_0_0_);
	return (EIF_INTEGER_32) (EIF_INTEGER_32) cwel_comboboxex_item_get_mask((tp1));
}

/* {WEL_COMBO_BOX_EX_ITEM}.index */
EIF_INTEGER_32 F1356_16157 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_1_1_0_0_0_0_);
	return (EIF_INTEGER_32) (EIF_INTEGER_32) cwel_comboboxex_item_get_iitem((tp1));
}

/* {WEL_COMBO_BOX_EX_ITEM}.set_index */
void F1356_16163 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_1_1_0_0_0_0_);
	cwel_comboboxex_item_set_iitem((tp1), (arg1));
}

/* {WEL_COMBO_BOX_EX_ITEM}.set_text */
void F1356_16164 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	ti4_1 = F1356_16156(Current);
	ti4_1 = F1258_14779(Current, ti4_1, ((EIF_INTEGER_32) 1L));
	F1356_16172(Current, ti4_1);
	loc1 = RTLNSMART(eif_new_type(944, 0).id);
	F944_3738(RTCW(loc1), arg1);
	RTAR(Current, loc1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) loc1;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_1_1_0_0_0_0_);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_1_0_0_0_);
	cwel_comboboxex_item_set_cchtextmax((tp1), (ti4_1));
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_1_1_0_0_0_0_);
	tp2 = F944_3745(RTCW(loc1));
	cwel_comboboxex_item_set_psztext((tp1), (tp2));
	RTLE;
}

/* {WEL_COMBO_BOX_EX_ITEM}.set_image */
void F1356_16165 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	ti4_1 = F1356_16156(Current);
	ti4_1 = F1258_14779(Current, ti4_1, ((EIF_INTEGER_32) 2L));
	F1356_16172(Current, ti4_1);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_1_1_0_0_0_0_);
	cwel_comboboxex_item_set_iimage((tp1), (arg1));
	RTLE;
}

/* {WEL_COMBO_BOX_EX_ITEM}.set_selected_image */
void F1356_16166 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	ti4_1 = F1356_16156(Current);
	ti4_1 = F1258_14779(Current, ti4_1, ((EIF_INTEGER_32) 4L));
	F1356_16172(Current, ti4_1);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_1_1_0_0_0_0_);
	cwel_comboboxex_item_set_iselectedimage((tp1), (arg1));
	RTLE;
}

/* {WEL_COMBO_BOX_EX_ITEM}.structure_size */
static EIF_INTEGER_32 F1356_16170_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 488)

	
	RTEV;
	RTOTP;
	Result = (EIF_INTEGER_32) sizeof (COMBOBOXEXITEM);
	RTOTE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F1356_16170 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,488,F1356_16170_body,(Current));
}

/* {WEL_COMBO_BOX_EX_ITEM}.set_mask */
void F1356_16172 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_1_1_0_0_0_0_);
	cwel_comboboxex_item_set_mask((tp1), (arg1));
}

/* {WEL_COMBO_BOX_EX_ITEM}.set_cchtextmax */
void F1356_16173 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_1_1_0_0_0_0_);
	cwel_comboboxex_item_set_cchtextmax((tp1), (arg1));
}

/* {WEL_COMBO_BOX_EX_ITEM}.c_size_of_comboboxex_item */
EIF_INTEGER_32 F1356_16174 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) sizeof (COMBOBOXEXITEM);
	return Result;
}

/* {WEL_COMBO_BOX_EX_ITEM}.cwel_comboboxex_item_set_mask */
void F1356_16175 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	cwel_comboboxex_item_set_mask((arg1), (arg2));
}

/* {WEL_COMBO_BOX_EX_ITEM}.cwel_comboboxex_item_set_iitem */
void F1356_16176 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	cwel_comboboxex_item_set_iitem((arg1), (arg2));
}

/* {WEL_COMBO_BOX_EX_ITEM}.cwel_comboboxex_item_set_psztext */
void F1356_16177 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	
	cwel_comboboxex_item_set_psztext((arg1), (arg2));
}

/* {WEL_COMBO_BOX_EX_ITEM}.cwel_comboboxex_item_set_cchtextmax */
void F1356_16178 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	cwel_comboboxex_item_set_cchtextmax((arg1), (arg2));
}

/* {WEL_COMBO_BOX_EX_ITEM}.cwel_comboboxex_item_set_iimage */
void F1356_16179 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	cwel_comboboxex_item_set_iimage((arg1), (arg2));
}

/* {WEL_COMBO_BOX_EX_ITEM}.cwel_comboboxex_item_set_iselectedimage */
void F1356_16180 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	cwel_comboboxex_item_set_iselectedimage((arg1), (arg2));
}

/* {WEL_COMBO_BOX_EX_ITEM}.cwel_comboboxex_item_get_mask */
EIF_INTEGER_32 F1356_16184 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) cwel_comboboxex_item_get_mask((arg1));
	return Result;
}

/* {WEL_COMBO_BOX_EX_ITEM}.cwel_comboboxex_item_get_iitem */
EIF_INTEGER_32 F1356_16185 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) cwel_comboboxex_item_get_iitem((arg1));
	return Result;
}

void EIF_Minit1495 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
