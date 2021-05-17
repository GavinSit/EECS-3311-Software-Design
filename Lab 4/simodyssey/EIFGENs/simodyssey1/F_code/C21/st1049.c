/*
 * Code for class reference STRING_UPDATE_ACCESS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "st1049.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {STRING_UPDATE_ACCESS}.string_update */
static EIF_REFERENCE F96_10064_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(169)

	RTLI(1);
	RTLR(0,tr1);
	RTLIU(1);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(eif_new_type(257, 0x01).id, 257, _OBJSIZ_3_1_0_2_0_0_0_0_);
	F258_11805(RTCW(tr1));
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F96_10064 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(169,F96_10064_body,(Current));
}

void EIF_Minit1049 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
