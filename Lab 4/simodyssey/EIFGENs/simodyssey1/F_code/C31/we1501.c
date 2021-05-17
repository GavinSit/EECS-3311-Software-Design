/*
 * Code for class WEL_NM_LIST_VIEW
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1501.h"
#include "nmlv.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_NM_LIST_VIEW}.make_by_nmhdr */
void F1362_16315 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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

/* {WEL_NM_LIST_VIEW}.iitem */
EIF_INTEGER_32 F1362_16317 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	return (EIF_INTEGER_32) (EIF_INTEGER_32) cwel_nm_listview_get_iitem((tp1));
}

/* {WEL_NM_LIST_VIEW}.isubitem */
EIF_INTEGER_32 F1362_16318 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	return (EIF_INTEGER_32) (EIF_INTEGER_32) cwel_nm_listview_get_isubitem((tp1));
}

/* {WEL_NM_LIST_VIEW}.unewstate */
EIF_INTEGER_32 F1362_16319 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	return (EIF_INTEGER_32) (EIF_INTEGER_32) cwel_nm_listview_get_unewstate((tp1));
}

/* {WEL_NM_LIST_VIEW}.uoldstate */
EIF_INTEGER_32 F1362_16320 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	return (EIF_INTEGER_32) (EIF_INTEGER_32) cwel_nm_listview_get_uoldstate((tp1));
}

/* {WEL_NM_LIST_VIEW}.uchanged */
EIF_INTEGER_32 F1362_16321 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	return (EIF_INTEGER_32) (EIF_INTEGER_32) cwel_nm_listview_get_uchanged((tp1));
}

/* {WEL_NM_LIST_VIEW}.structure_size */
static EIF_INTEGER_32 F1362_16323_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 468)

	
	RTEV;
	RTOTP;
	Result = (EIF_INTEGER_32) sizeof (NM_LISTVIEW);
	RTOTE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F1362_16323 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,468,F1362_16323_body,(Current));
}

/* {WEL_NM_LIST_VIEW}.c_size_of_nm_listview */
EIF_INTEGER_32 F1362_16324 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) sizeof (NM_LISTVIEW);
	return Result;
}

/* {WEL_NM_LIST_VIEW}.cwel_nm_listview_get_iitem */
EIF_INTEGER_32 F1362_16326 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) cwel_nm_listview_get_iitem((arg1));
	return Result;
}

/* {WEL_NM_LIST_VIEW}.cwel_nm_listview_get_isubitem */
EIF_INTEGER_32 F1362_16327 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) cwel_nm_listview_get_isubitem((arg1));
	return Result;
}

/* {WEL_NM_LIST_VIEW}.cwel_nm_listview_get_unewstate */
EIF_INTEGER_32 F1362_16328 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) cwel_nm_listview_get_unewstate((arg1));
	return Result;
}

/* {WEL_NM_LIST_VIEW}.cwel_nm_listview_get_uoldstate */
EIF_INTEGER_32 F1362_16329 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) cwel_nm_listview_get_uoldstate((arg1));
	return Result;
}

/* {WEL_NM_LIST_VIEW}.cwel_nm_listview_get_uchanged */
EIF_INTEGER_32 F1362_16330 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) cwel_nm_listview_get_uchanged((arg1));
	return Result;
}

void EIF_Minit1501 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
