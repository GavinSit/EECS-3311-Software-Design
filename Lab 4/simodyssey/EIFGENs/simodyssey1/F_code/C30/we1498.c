/*
 * Code for class WEL_NM_TREE_VIEW
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1498.h"
#include <nmtv.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_NM_TREE_VIEW}.make_by_nmhdr */
void F1359_16223 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_0_1_0_0_0_0_);
	F1296_15096(Current, tp1);
	RTLE;
}

/* {WEL_NM_TREE_VIEW}.hdr */
EIF_REFERENCE F1359_16224 (EIF_REFERENCE Current)
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
	Result = RTLNS(eif_new_type(1902, 0x01).id, 1902, _OBJSIZ_0_1_0_0_0_1_0_0_);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	tp1 = (EIF_POINTER) cwel_nm_treeview_get_hdr(((NM_TREEVIEW *) tp1));
	F1296_15096(RTCW(Result), tp1);
	RTLE;
	return Result;
}

/* {WEL_NM_TREE_VIEW}.action */
EIF_INTEGER_32 F1359_16225 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	return (EIF_INTEGER_32) (EIF_INTEGER_32) cwel_nm_treeview_get_action(((NM_TREEVIEW *) tp1));
}

/* {WEL_NM_TREE_VIEW}.new_item */
EIF_REFERENCE F1359_16226 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTGC;
	Result = RTLNS(eif_new_type(1409, 0x01).id, 1409, _OBJSIZ_1_1_0_0_0_1_0_0_);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	tp1 = (EIF_POINTER) cwel_nm_treeview_get_itemnew(((NM_TREEVIEW *) tp1));
	F1296_15096(RTCW(Result), tp1);
	tr1 = F1903_22266(RTCV(F1359_16224(Current)));
	loc1 = tr1;
	loc1 = RTRV(eif_new_type(1930, 0x01),loc1);
	if (EIF_TEST(loc1)) {
		tb1 = F1931_23070(loc1, Result);
		if (tb1) {
			tr1 = F1931_23107(loc1, Result);
			RTLE;
			return (EIF_REFERENCE) tr1;
		} else {
			RTLE;
			return (EIF_REFERENCE) NULL;
		}
	} else {
		RTLE;
		return (EIF_REFERENCE) NULL;
	}/* NOTREACHED */
	
}

/* {WEL_NM_TREE_VIEW}.old_item */
EIF_REFERENCE F1359_16227 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTGC;
	Result = RTLNS(eif_new_type(1409, 0x01).id, 1409, _OBJSIZ_1_1_0_0_0_1_0_0_);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	tp1 = (EIF_POINTER) cwel_nm_treeview_get_itemold(((NM_TREEVIEW *) tp1));
	F1296_15096(RTCW(Result), tp1);
	tr1 = F1903_22266(RTCV(F1359_16224(Current)));
	loc1 = tr1;
	loc1 = RTRV(eif_new_type(1930, 0x01),loc1);
	if (EIF_TEST(loc1)) {
		tb1 = F1931_23070(loc1, Result);
		if (tb1) {
			tr1 = F1931_23107(loc1, Result);
			RTLE;
			return (EIF_REFERENCE) tr1;
		}
	}
	RTLE;
	return Result;
}

/* {WEL_NM_TREE_VIEW}.structure_size */
static EIF_INTEGER_32 F1359_16229_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 475)

	
	RTEV;
	RTOTP;
	Result = (EIF_INTEGER_32) sizeof (NM_TREEVIEW);
	RTOTE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F1359_16229 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,475,F1359_16229_body,(Current));
}

/* {WEL_NM_TREE_VIEW}.c_size_of_nm_treeview */
EIF_INTEGER_32 F1359_16230 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) sizeof (NM_TREEVIEW);
	return Result;
}

/* {WEL_NM_TREE_VIEW}.cwel_nm_treeview_get_hdr */
EIF_POINTER F1359_16231 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = (EIF_POINTER) cwel_nm_treeview_get_hdr(((NM_TREEVIEW *) arg1));
	return Result;
}

/* {WEL_NM_TREE_VIEW}.cwel_nm_treeview_get_action */
EIF_INTEGER_32 F1359_16232 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) cwel_nm_treeview_get_action(((NM_TREEVIEW *) arg1));
	return Result;
}

/* {WEL_NM_TREE_VIEW}.cwel_nm_treeview_get_itemnew */
EIF_POINTER F1359_16233 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = (EIF_POINTER) cwel_nm_treeview_get_itemnew(((NM_TREEVIEW *) arg1));
	return Result;
}

/* {WEL_NM_TREE_VIEW}.cwel_nm_treeview_get_itemold */
EIF_POINTER F1359_16234 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = (EIF_POINTER) cwel_nm_treeview_get_itemold(((NM_TREEVIEW *) arg1));
	return Result;
}

void EIF_Minit1498 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
