/*
 * Code for class WEL_LV_DISPINFO
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1486.h"
#include "lvdispinfo.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_LV_DISPINFO}.make_by_nmhdr */
void F1347_15987 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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

/* {WEL_LV_DISPINFO}.list_item */
EIF_REFERENCE F1347_15989 (EIF_REFERENCE Current)
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
	Result = RTLNS(eif_new_type(1359, 0x01).id, 1359, _OBJSIZ_1_1_0_0_0_1_0_0_);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	tp1 = (EIF_POINTER) cwel_lv_dispinfo_get_item(((LV_DISPINFO*) tp1));
	F1296_15096(RTCW(Result), tp1);
	RTLE;
	return Result;
}

/* {WEL_LV_DISPINFO}.structure_size */
static EIF_INTEGER_32 F1347_15990_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 505)

	
	RTEV;
	RTOTP;
	Result = (EIF_INTEGER_32) sizeof (LV_DISPINFO);
	RTOTE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F1347_15990 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,505,F1347_15990_body,(Current));
}

/* {WEL_LV_DISPINFO}.c_size_of_lv_dispinfo */
EIF_INTEGER_32 F1347_15991 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) sizeof (LV_DISPINFO);
	return Result;
}

/* {WEL_LV_DISPINFO}.cwel_lv_dispinfo_get_item */
EIF_POINTER F1347_15993 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = (EIF_POINTER) cwel_lv_dispinfo_get_item(((LV_DISPINFO*) arg1));
	return Result;
}

void EIF_Minit1486 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
