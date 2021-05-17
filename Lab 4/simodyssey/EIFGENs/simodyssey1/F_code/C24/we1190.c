/*
 * Code for class WEL_STANDARD_COLORS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1190.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_STANDARD_COLORS}.white */
static EIF_REFERENCE F279_12029_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(459)

	RTLI(1);
	RTLR(0,tr1);
	RTLIU(1);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(eif_new_type(1828, 0x01).id, 1828, _OBJSIZ_0_0_0_1_0_0_0_0_);
	F1829_20489(RTCW(tr1), ((EIF_INTEGER_32) 255L), ((EIF_INTEGER_32) 255L), ((EIF_INTEGER_32) 255L));
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F279_12029 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(459,F279_12029_body,(Current));
}

/* {WEL_STANDARD_COLORS}.black */
static EIF_REFERENCE F279_12030_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(458)

	RTLI(1);
	RTLR(0,tr1);
	RTLIU(1);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(eif_new_type(1828, 0x01).id, 1828, _OBJSIZ_0_0_0_1_0_0_0_0_);
	F1829_20489(RTCW(tr1), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L));
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F279_12030 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(458,F279_12030_body,(Current));
}

void EIF_Minit1190 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
