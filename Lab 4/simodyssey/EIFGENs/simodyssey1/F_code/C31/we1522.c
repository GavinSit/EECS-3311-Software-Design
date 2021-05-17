/*
 * Code for class WEL_NON_CLIENT_METRICS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1522.h"
#include <nonclientmetrics.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_NON_CLIENT_METRICS}.make */
void F1384_16662 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1337_15830(Current);
	ti4_1 = RTOUCB(EIF_INTEGER_32,312,F1384_16678, (Current));
	F1384_16677(Current, ti4_1);
	RTLE;
}

/* {WEL_NON_CLIENT_METRICS}.menu_font */
EIF_REFERENCE F1384_16674 (EIF_REFERENCE Current)
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
	Result = RTLNS(eif_new_type(1406, 0x01).id, 1406, _OBJSIZ_0_1_0_0_0_1_0_0_);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	tp1 = (EIF_POINTER) cwel_nonclientmetrics_get_menu_font((tp1));
	F1407_17198(RTCW(Result), tp1);
	RTLE;
	return Result;
}

/* {WEL_NON_CLIENT_METRICS}.message_font */
EIF_REFERENCE F1384_16676 (EIF_REFERENCE Current)
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
	Result = RTLNS(eif_new_type(1406, 0x01).id, 1406, _OBJSIZ_0_1_0_0_0_1_0_0_);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	tp1 = (EIF_POINTER) cwel_nonclientmetrics_get_message_font((tp1));
	F1407_17198(RTCW(Result), tp1);
	RTLE;
	return Result;
}

/* {WEL_NON_CLIENT_METRICS}.set_structure_size */
void F1384_16677 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	cwel_nonclientmetrics_set_structure_size((tp1), (arg1));
}

/* {WEL_NON_CLIENT_METRICS}.structure_size */
static EIF_INTEGER_32 F1384_16678_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 312)

	
	RTEV;
	RTOTP;
	Result = (EIF_INTEGER_32) sizeof (NONCLIENTMETRICS);
	RTOTE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F1384_16678 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,312,F1384_16678_body,(Current));
}

/* {WEL_NON_CLIENT_METRICS}.c_size_of_nonclientmetrics */
EIF_INTEGER_32 F1384_16679 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) sizeof (NONCLIENTMETRICS);
	return Result;
}

/* {WEL_NON_CLIENT_METRICS}.cwel_nonclientmetrics_set_structure_size */
void F1384_16680 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	cwel_nonclientmetrics_set_structure_size((arg1), (arg2));
}

/* {WEL_NON_CLIENT_METRICS}.cwel_nonclientmetrics_get_menu_font */
EIF_POINTER F1384_16692 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = (EIF_POINTER) cwel_nonclientmetrics_get_menu_font((arg1));
	return Result;
}

/* {WEL_NON_CLIENT_METRICS}.cwel_nonclientmetrics_get_message_font */
EIF_POINTER F1384_16694 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = (EIF_POINTER) cwel_nonclientmetrics_get_message_font((arg1));
	return Result;
}

void EIF_Minit1522 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
