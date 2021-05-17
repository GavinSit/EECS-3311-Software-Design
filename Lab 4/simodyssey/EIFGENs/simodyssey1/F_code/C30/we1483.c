/*
 * Code for class WEL_TV_DISPINFO
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1483.h"
#include <tvdispinfo.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_TV_DISPINFO}.make_by_nmhdr */
void F1344_15943 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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

/* {WEL_TV_DISPINFO}.tree_item */
EIF_REFERENCE F1344_15945 (EIF_REFERENCE Current)
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
	Result = RTLNS(eif_new_type(1409, 0x01).id, 1409, _OBJSIZ_1_1_0_0_0_1_0_0_);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	tp1 = (EIF_POINTER) cwel_tv_dispinfo_get_item(((TV_DISPINFO*) tp1));
	F1296_15096(RTCW(Result), tp1);
	RTLE;
	return Result;
}

/* {WEL_TV_DISPINFO}.structure_size */
static EIF_INTEGER_32 F1344_15946_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 507)

	
	RTEV;
	RTOTP;
	Result = (EIF_INTEGER_32) sizeof (TV_DISPINFO);
	RTOTE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F1344_15946 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,507,F1344_15946_body,(Current));
}

/* {WEL_TV_DISPINFO}.c_size_of_tv_dispinfo */
EIF_INTEGER_32 F1344_15947 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) sizeof (TV_DISPINFO);
	return Result;
}

/* {WEL_TV_DISPINFO}.cwel_tv_dispinfo_get_item */
EIF_POINTER F1344_15949 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = (EIF_POINTER) cwel_tv_dispinfo_get_item(((TV_DISPINFO*) arg1));
	return Result;
}

void EIF_Minit1483 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
