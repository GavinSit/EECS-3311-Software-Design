/*
 * Code for class WEL_LOG_BRUSH
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1519.h"
#include "logbrush.h"
#include <logbrush.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_LOG_BRUSH}.make */
void F1381_16631 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg2);
	RTLIU(2);
	
	RTGC;
	F1337_15830(Current);
	F1381_16636(Current, arg1);
	F1381_16637(Current, arg2);
	F1381_16638(Current, arg3);
	RTLE;
}

/* {WEL_LOG_BRUSH}.color */
EIF_REFERENCE F1381_16634 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTGC;
	Result = RTLNS(eif_new_type(1828, 0x01).id, 1828, _OBJSIZ_0_0_0_1_0_0_0_0_);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	ti4_1 = (EIF_INTEGER_32) cwel_logbrush_get_color((tp1));
	F1829_20491(RTCW(Result), ti4_1);
	RTLE;
	return Result;
}

/* {WEL_LOG_BRUSH}.set_style */
void F1381_16636 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	cwel_logbrush_set_style((tp1), (arg1));
}

/* {WEL_LOG_BRUSH}.set_color */
void F1381_16637 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O17154[Dtype(arg1)-1828]);
	cwel_logbrush_set_color((tp1), (ti4_1));
	RTLE;
}

/* {WEL_LOG_BRUSH}.set_hatch */
void F1381_16638 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	cwel_logbrush_set_hatch((tp1), (arg1));
}

/* {WEL_LOG_BRUSH}.structure_size */
static EIF_INTEGER_32 F1381_16639_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 436)

	
	RTEV;
	RTOTP;
	Result = (EIF_INTEGER_32) sizeof (LOGBRUSH);
	RTOTE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F1381_16639 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,436,F1381_16639_body,(Current));
}

/* {WEL_LOG_BRUSH}.c_size_of_logbrush */
EIF_INTEGER_32 F1381_16640 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) sizeof (LOGBRUSH);
	return Result;
}

/* {WEL_LOG_BRUSH}.cwel_logbrush_get_color */
EIF_INTEGER_32 F1381_16642 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) cwel_logbrush_get_color((arg1));
	return Result;
}

/* {WEL_LOG_BRUSH}.cwel_logbrush_set_style */
void F1381_16644 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	cwel_logbrush_set_style((arg1), (arg2));
}

/* {WEL_LOG_BRUSH}.cwel_logbrush_set_color */
void F1381_16645 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	cwel_logbrush_set_color((arg1), (arg2));
}

/* {WEL_LOG_BRUSH}.cwel_logbrush_set_hatch */
void F1381_16646 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	cwel_logbrush_set_hatch((arg1), (arg2));
}

void EIF_Minit1519 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
