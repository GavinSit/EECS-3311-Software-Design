/*
 * Code for class STRING_8_ITERATION_CURSOR
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "st168.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {STRING_8_ITERATION_CURSOR}.first_index */
EIF_INTEGER_32 F1112_4397 (EIF_REFERENCE Current)
{
	return (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
}

/* {STRING_8_ITERATION_CURSOR}.target */
EIF_REFERENCE F1112_4400 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {STRING_8_ITERATION_CURSOR}.area_first_index */
EIF_INTEGER_32 F1112_4401 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_2_);
}


void EIF_Minit168 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
