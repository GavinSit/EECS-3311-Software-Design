/*
 * Code for class WEL_TEXT_METRIC
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1542.h"
#include <tmetric.h>
#include <wel.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_TEXT_METRIC}.make_empty */
void F1404_17125 (EIF_REFERENCE Current)
{
	GTCX
	
	
	F1337_15830(Current);
}

/* {WEL_TEXT_METRIC}.make */
void F1404_17126 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	F1337_15830(Current);
	F1404_17127(Current, arg1);
	RTLE;
}

/* {WEL_TEXT_METRIC}.set_from_dc */
void F1404_17127 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(RTCW(arg1) + O12527[Dtype(arg1)-1295]);
	tp2 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	GetTextMetrics(((HDC) tp1), ((LPTEXTMETRIC) tp2));
	RTLE;
}

/* {WEL_TEXT_METRIC}.height */
EIF_INTEGER_32 F1404_17128 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	return (EIF_INTEGER_32) (EIF_INTEGER_32) cwel_text_metric_get_tmheight((tp1));
}

/* {WEL_TEXT_METRIC}.pitch_and_family */
EIF_INTEGER_32 F1404_17146 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	return (EIF_INTEGER_32) (EIF_INTEGER_32) cwel_text_metric_get_tmpitchandfamily((tp1));
}

/* {WEL_TEXT_METRIC}.character_set */
EIF_INTEGER_32 F1404_17147 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	return (EIF_INTEGER_32) (EIF_INTEGER_32) cwel_text_metric_get_tmcharset((tp1));
}

/* {WEL_TEXT_METRIC}.structure_size */
static EIF_INTEGER_32 F1404_17148_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 350)

	
	RTEV;
	RTOTP;
	Result = (EIF_INTEGER_32) sizeof (TEXTMETRIC);
	RTOTE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F1404_17148 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,350,F1404_17148_body,(Current));
}

/* {WEL_TEXT_METRIC}.c_size_of_text_metric */
EIF_INTEGER_32 F1404_17149 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) sizeof (TEXTMETRIC);
	return Result;
}

/* {WEL_TEXT_METRIC}.cwel_text_metric_get_tmheight */
EIF_INTEGER_32 F1404_17150 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) cwel_text_metric_get_tmheight((arg1));
	return Result;
}

/* {WEL_TEXT_METRIC}.cwel_text_metric_get_tmpitchandfamily */
EIF_INTEGER_32 F1404_17168 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) cwel_text_metric_get_tmpitchandfamily((arg1));
	return Result;
}

/* {WEL_TEXT_METRIC}.cwel_text_metric_get_tmcharset */
EIF_INTEGER_32 F1404_17169 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) cwel_text_metric_get_tmcharset((arg1));
	return Result;
}

/* {WEL_TEXT_METRIC}.cwin_get_text_metric */
void F1404_17170 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	
	GetTextMetrics(((HDC) arg1), ((LPTEXTMETRIC) arg2));
}

void EIF_Minit1542 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
