/*
 * Code for class EV_COLOR_I
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1701.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_COLOR_I}.set_with_other */
void F1708_19211 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REAL_32 tr4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	tr4_1 = F1603_17890(RTCW(arg1));
	F1830_20514(Current, tr4_1);
	tr4_1 = F1603_17891(RTCW(arg1));
	F1830_20515(Current, tr4_1);
	tr4_1 = F1603_17892(RTCW(arg1));
	F1830_20516(Current, tr4_1);
	RTLE;
}

/* {EV_COLOR_I}.default_name */

EIF_REFERENCE F1708_19212 (EIF_REFERENCE Current)
{
	GTCX
	RTOUC (257,RTMS32_EX_H("n\000\000\000o\000\000\000n\000\000\000a\000\000\000m\000\000\000e\000\000\000",6,2069000037));
}

void EIF_Minit1701 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
