/*
 * Code for class KL_OUTPUT_FILE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "kl1823.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {KL_OUTPUT_FILE}.put_character */
void F1840_20843 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1)
{
	GTCX
	
	
	F1291_5013(Current, arg1);
}

/* {KL_OUTPUT_FILE}.put_string */
void F1840_20844 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTGC;
	tr1 = RTOUCR(244,F1156_14541, (Current));
	tr1 = F1266_14945(RTCW(tr1), arg1);
	F1291_5010(Current, tr1);
	RTLE;
}

void EIF_Minit1823 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
