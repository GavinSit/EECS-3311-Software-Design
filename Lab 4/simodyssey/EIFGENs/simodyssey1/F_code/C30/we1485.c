/*
 * Code for class WEL_LV_KEYDOWN
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1485.h"
#include "lvkeydown.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_LV_KEYDOWN}.make_by_nmhdr */
void F1346_15980 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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

/* {WEL_LV_KEYDOWN}.virtual_key */
EIF_INTEGER_32 F1346_15982 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	return (EIF_INTEGER_32) (EIF_INTEGER_32) cwel_lv_keydown_get_wvkey(((LV_KEYDOWN *) tp1));
}

/* {WEL_LV_KEYDOWN}.structure_size */
static EIF_INTEGER_32 F1346_15983_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 506)

	
	RTEV;
	RTOTP;
	Result = (EIF_INTEGER_32) sizeof (LV_KEYDOWN);
	RTOTE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F1346_15983 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,506,F1346_15983_body,(Current));
}

/* {WEL_LV_KEYDOWN}.c_size_of_lv_keydown */
EIF_INTEGER_32 F1346_15984 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) sizeof (LV_KEYDOWN);
	return Result;
}

/* {WEL_LV_KEYDOWN}.cwel_lv_keydown_get_wvkey */
EIF_INTEGER_32 F1346_15986 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) cwel_lv_keydown_get_wvkey(((LV_KEYDOWN *) arg1));
	return Result;
}

void EIF_Minit1485 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
