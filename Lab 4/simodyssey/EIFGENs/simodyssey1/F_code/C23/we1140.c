/*
 * Code for class WEL_MAIN_ARGUMENTS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1140.h"
#include <mainarg.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_MAIN_ARGUMENTS}.current_instance */
static EIF_REFERENCE F217_11264_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(281)

	RTLI(1);
	RTLR(0,tr1);
	RTLIU(1);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(eif_new_type(1297, 0x01).id, 1297, _OBJSIZ_0_1_0_0_0_1_0_0_);
	tp1 = (EIF_POINTER) cwel_hinstance;
	F1298_15111(RTCW(tr1), tp1);
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F217_11264 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(281,F217_11264_body,(Current));
}

/* {WEL_MAIN_ARGUMENTS}.resource_instance */
static EIF_REFERENCE F217_11265_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(418)

	RTLI(1);
	RTLR(0,tr1);
	RTLIU(1);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(eif_new_type(1297, 0x01).id, 1297, _OBJSIZ_0_1_0_0_0_1_0_0_);
	tp1 = (EIF_POINTER) cwel_hinstance;
	F1298_15111(RTCW(tr1), tp1);
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F217_11265 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(418,F217_11265_body,(Current));
}

/* {WEL_MAIN_ARGUMENTS}.cwel_hinstance */
EIF_POINTER F217_11269 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = (EIF_POINTER) cwel_hinstance;
	return Result;
}

void EIF_Minit1140 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
