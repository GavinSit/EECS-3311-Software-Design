/*
 * Code for class EV_SCREEN_I
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1796.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_SCREEN_I}.monitor_area_from_position */
EIF_REFERENCE F1807_20316 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTGC;
	Result = RTLNS(eif_new_type(1167, 0x01).id, 1167, _OBJSIZ_0_0_0_4_0_0_0_0_);
	ti4_1 = F1954_23607(Current);
	ti4_2 = F1954_23608(Current);
	F1168_14589(RTCW(Result), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ti4_1, ti4_2);
	RTLE;
	return Result;
}

void EIF_Minit1796 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
