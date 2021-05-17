/*
 * Code for class WEL_TV_KEYDOWN
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1482.h"
#include <tvkeydown.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_TV_KEYDOWN}.make_by_nmhdr */
void F1343_15936 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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

/* {WEL_TV_KEYDOWN}.virtual_key */
EIF_INTEGER_32 F1343_15938 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	return (EIF_INTEGER_32) (EIF_INTEGER_32) cwel_tv_keydown_get_wvkey(((TV_KEYDOWN *) tp1));
}

/* {WEL_TV_KEYDOWN}.structure_size */
static EIF_INTEGER_32 F1343_15939_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 508)

	
	RTEV;
	RTOTP;
	Result = (EIF_INTEGER_32) sizeof (TV_KEYDOWN);
	RTOTE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F1343_15939 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,508,F1343_15939_body,(Current));
}

/* {WEL_TV_KEYDOWN}.c_size_of_tv_keydown */
EIF_INTEGER_32 F1343_15940 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) sizeof (TV_KEYDOWN);
	return Result;
}

/* {WEL_TV_KEYDOWN}.cwel_tv_keydown_get_wvkey */
EIF_INTEGER_32 F1343_15942 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) cwel_tv_keydown_get_wvkey(((TV_KEYDOWN *) arg1));
	return Result;
}

void EIF_Minit1482 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
