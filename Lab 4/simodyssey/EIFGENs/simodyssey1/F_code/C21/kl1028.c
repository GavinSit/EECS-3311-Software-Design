/*
 * Code for class KL_STANDARD_FILES
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "kl1028.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {KL_STANDARD_FILES}.input */
static EIF_REFERENCE F70_9830_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(247)

	RTLI(1);
	RTLR(0,tr1);
	RTLIU(1);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(eif_new_type(1275, 0x01).id, 1275, _OBJSIZ_2_2_0_0_0_0_0_0_);
	F1276_14997(RTCW(tr1));
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F70_9830 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(247,F70_9830_body,(Current));
}

/* {KL_STANDARD_FILES}.error */
static EIF_REFERENCE F70_9832_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(248)

	RTLI(1);
	RTLR(0,tr1);
	RTLIU(1);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(eif_new_type(1163, 0x01).id, 1163, _OBJSIZ_0_0_0_0_0_0_0_0_);
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F70_9832 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(248,F70_9832_body,(Current));
}

void EIF_Minit1028 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
