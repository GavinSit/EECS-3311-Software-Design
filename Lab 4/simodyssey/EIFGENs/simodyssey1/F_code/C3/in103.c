/*
 * Code for class INVARIANT_VIOLATION
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "in103.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {INVARIANT_VIOLATION}.code */
EIF_INTEGER_32 F462_1533 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) ((EIF_INTEGER_32) 6L);
}

/* {INVARIANT_VIOLATION}.set_is_entry */
void F462_1534 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	
	
	*(EIF_BOOLEAN *)(Current+ _CHROFF_5_1_) = (EIF_BOOLEAN) arg1;
}

/* {INVARIANT_VIOLATION}.tag */
static EIF_REFERENCE F462_1535_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(22)

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,tr2);
	RTLIU(2);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(eif_new_type(1567, 0x01).id, 1567, _OBJSIZ_1_0_0_4_0_0_0_0_);
	tr2 = RTMS_EX_H("Class invariant violated.",25,551542062);
	F1568_7010(RTCW(tr1), tr2);
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F462_1535 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(22,F462_1535_body,(Current));
}

void EIF_Minit103 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
