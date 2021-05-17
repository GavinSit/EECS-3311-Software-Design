/*
 * Code for class KL_STRING_INPUT_STREAM
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "kl1425.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {KL_STRING_INPUT_STREAM}.end_of_input */
EIF_BOOLEAN F1275_14984 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_);
}


/* {KL_STRING_INPUT_STREAM}.last_character */
EIF_CHARACTER_8 F1275_14987 (EIF_REFERENCE Current)
{
	return *(EIF_CHARACTER_8 *)(Current+ _CHROFF_2_0_);
}


/* {KL_STRING_INPUT_STREAM}.read_character */
void F1275_14990 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_8 tc1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_0_))++;
	tr1 = *(EIF_REFERENCE *)(Current);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_1_1_0_2_);
	if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_0_) <= ti4_1)) {
		tr1 = *(EIF_REFERENCE *)(Current);
		tc1 = (eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2556[Dtype(RTCW(tr1))-849])(tr1, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_0_)));
		*(EIF_CHARACTER_8 *)(Current+ _CHROFF_2_0_) = (EIF_CHARACTER_8) tc1;
	} else {
		*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	RTLE;
}

void EIF_Minit1425 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
