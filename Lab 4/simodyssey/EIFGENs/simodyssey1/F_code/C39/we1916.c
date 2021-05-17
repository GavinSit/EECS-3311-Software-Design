/*
 * Code for class WEL_TRACK_BAR
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1916.h"
#include <cctrl.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_TRACK_BAR}.class_name */
static EIF_REFERENCE F1933_23137_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(501)

	RTLI(1);
	RTLR(0,tr1);
	RTLIU(1);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(eif_new_type(944, 0x01).id, 944, _OBJSIZ_1_0_0_1_0_0_0_0_);
	tp1 = (EIF_POINTER) TRACKBAR_CLASS;
	F945_14351(RTCW(tr1), tp1);
	Result = F944_3743(RTCW(tr1));
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1933_23137 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(501,F1933_23137_body,(Current));
}

/* {WEL_TRACK_BAR}.cwin_trackbar_class */
EIF_POINTER F1933_23139 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = (EIF_POINTER) TRACKBAR_CLASS;
	return Result;
}

void EIF_Minit1916 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
