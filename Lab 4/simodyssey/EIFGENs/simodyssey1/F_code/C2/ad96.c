/*
 * Code for class ADDRESS_APPLIED_TO_MELTED_FEATURE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ad96.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {ADDRESS_APPLIED_TO_MELTED_FEATURE}.code */
EIF_INTEGER_32 F455_1521 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) ((EIF_INTEGER_32) 26L);
}

/* {ADDRESS_APPLIED_TO_MELTED_FEATURE}.tag */
static EIF_REFERENCE F455_1522_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(124)

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,tr2);
	RTLIU(2);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(eif_new_type(1567, 0x01).id, 1567, _OBJSIZ_1_0_0_4_0_0_0_0_);
	tr2 = RTMS_EX_H("CECIL cannot call melted code.",30,1897917230);
	F1568_7010(RTCW(tr1), tr2);
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F455_1522 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(124,F455_1522_body,(Current));
}

void EIF_Minit96 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
