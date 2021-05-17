/*
 * Code for class WEL_MIN_MAX_INFO
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1547.h"
#include <minmaxi.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_MIN_MAX_INFO}.set_min_track_size */
void F1409_17374 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	tp2 = *(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_0_1_0_0_0_0_);
	cwel_minmaxinfo_set_mintracksize((tp1), (tp2));
	RTLE;
}

/* {WEL_MIN_MAX_INFO}.set_max_track_size */
void F1409_17375 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	tp2 = *(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_0_1_0_0_0_0_);
	cwel_minmaxinfo_set_maxtracksize((tp1), (tp2));
	RTLE;
}

/* {WEL_MIN_MAX_INFO}.structure_size */
static EIF_INTEGER_32 F1409_17376_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 289)

	
	RTEV;
	RTOTP;
	Result = (EIF_INTEGER_32) sizeof (MINMAXINFO);
	RTOTE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F1409_17376 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,289,F1409_17376_body,(Current));
}

/* {WEL_MIN_MAX_INFO}.c_size_of_minmaxinfo */
EIF_INTEGER_32 F1409_17377 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) sizeof (MINMAXINFO);
	return Result;
}

/* {WEL_MIN_MAX_INFO}.cwel_minmaxinfo_set_mintracksize */
void F1409_17380 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	
	cwel_minmaxinfo_set_mintracksize((arg1), (arg2));
}

/* {WEL_MIN_MAX_INFO}.cwel_minmaxinfo_set_maxtracksize */
void F1409_17381 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	
	cwel_minmaxinfo_set_maxtracksize((arg1), (arg2));
}

void EIF_Minit1547 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
