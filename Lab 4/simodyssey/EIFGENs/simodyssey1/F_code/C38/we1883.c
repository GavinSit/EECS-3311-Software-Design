/*
 * Code for class WEL_TAB_CONTROL_ITEM
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1883.h"
#include <tcitem.h>
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

/* {WEL_TAB_CONTROL_ITEM}.make */
void F1900_22194 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1337_15830(Current);
	F1900_22200(Current, (EIF_INTEGER_32) (((EIF_INTEGER_32) 1L) + ((EIF_INTEGER_32) 8L)));
	RTLE;
}

/* {WEL_TAB_CONTROL_ITEM}.text */
EIF_REFERENCE F1900_22197 (EIF_REFERENCE Current)
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

/* {WEL_TAB_CONTROL_ITEM}.window */
EIF_REFERENCE F1900_22198 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_1_1_0_0_0_0_);
	loc1 = (EIF_POINTER) cwel_tc_item_get_lparam((tp1));
	{
		/* INLINED CODE (ANY.default_pointer) */
		tp1 = (EIF_POINTER)  0;
		/* END INLINED CODE */
	}
	if ((EIF_BOOLEAN)(loc1 != tp1)) {
		RTLE;
		return (EIF_REFERENCE) F1898_22150(Current, loc1);
	}
	RTLE;
	return (EIF_REFERENCE) 0;
}

/* {WEL_TAB_CONTROL_ITEM}.set_mask */
void F1900_22200 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_1_1_0_0_0_0_);
	cwel_tc_item_set_mask((tp1), (arg1));
}

/* {WEL_TAB_CONTROL_ITEM}.set_text */
void F1900_22201 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	cwel_tc_item_set_psztext((tp1), (tp2));
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_1_1_0_0_0_0_);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_1_0_0_0_);
	cwel_tc_item_set_cchtextmax((tp1), (ti4_1));
	RTLE;
}

/* {WEL_TAB_CONTROL_ITEM}.set_window */
void F1900_22202 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_1_1_0_0_0_0_);
	tp2 = *(EIF_POINTER *)(RTCW(arg1) + O12527[Dtype(arg1)-1295]);
	cwel_tc_item_set_lparam((tp1), (tp2));
	RTLE;
}

/* {WEL_TAB_CONTROL_ITEM}.set_iimage */
void F1900_22203 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_1_1_0_0_0_0_);
	cwel_tc_item_set_iimage((tp1), (arg1));
}

/* {WEL_TAB_CONTROL_ITEM}.structure_size */
static EIF_INTEGER_32 F1900_22204_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 497)

	
	RTEV;
	RTOTP;
	Result = (EIF_INTEGER_32) sizeof (TC_ITEM);
	RTOTE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F1900_22204 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,497,F1900_22204_body,(Current));
}

/* {WEL_TAB_CONTROL_ITEM}.set_cchtextmax */
void F1900_22205 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_1_1_0_0_0_0_);
	cwel_tc_item_set_cchtextmax((tp1), (arg1));
}

/* {WEL_TAB_CONTROL_ITEM}.c_size_of_tc_item */
EIF_INTEGER_32 F1900_22207 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) sizeof (TC_ITEM);
	return Result;
}

/* {WEL_TAB_CONTROL_ITEM}.cwel_tc_item_set_mask */
void F1900_22208 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	cwel_tc_item_set_mask((arg1), (arg2));
}

/* {WEL_TAB_CONTROL_ITEM}.cwel_tc_item_set_psztext */
void F1900_22209 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	
	cwel_tc_item_set_psztext((arg1), (arg2));
}

/* {WEL_TAB_CONTROL_ITEM}.cwel_tc_item_set_cchtextmax */
void F1900_22210 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	cwel_tc_item_set_cchtextmax((arg1), (arg2));
}

/* {WEL_TAB_CONTROL_ITEM}.cwel_tc_item_set_iimage */
void F1900_22211 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	cwel_tc_item_set_iimage((arg1), (arg2));
}

/* {WEL_TAB_CONTROL_ITEM}.cwel_tc_item_set_lparam */
void F1900_22212 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	
	cwel_tc_item_set_lparam((arg1), (arg2));
}

/* {WEL_TAB_CONTROL_ITEM}.cwel_tc_item_get_lparam */
EIF_POINTER F1900_22217 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = (EIF_POINTER) cwel_tc_item_get_lparam((arg1));
	return Result;
}

void EIF_Minit1883 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
