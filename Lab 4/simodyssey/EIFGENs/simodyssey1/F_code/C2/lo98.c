/*
 * Code for class LOOP_INVARIANT_VIOLATION
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "lo98.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {LOOP_INVARIANT_VIOLATION}.code */
EIF_INTEGER_32 F457_1523 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) ((EIF_INTEGER_32) 11L);
}

/* {LOOP_INVARIANT_VIOLATION}.tag */
static EIF_REFERENCE F457_1524_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(140)

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,tr2);
	RTLIU(2);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(eif_new_type(1567, 0x01).id, 1567, _OBJSIZ_1_0_0_4_0_0_0_0_);
	tr2 = RTMS_EX_H("Loop invariant violated.",24,122405166);
	F1568_7010(RTCW(tr1), tr2);
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F457_1524 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(140,F457_1524_body,(Current));
}

void EIF_Minit98 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
