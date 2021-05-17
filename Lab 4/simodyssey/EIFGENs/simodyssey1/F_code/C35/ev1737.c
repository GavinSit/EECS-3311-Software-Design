/*
 * Code for class EV_TEXT_ALIGNABLE_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1737.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_TEXT_ALIGNABLE_IMP}.alignment */
EIF_INTEGER_32 F1748_19712 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) *(EIF_INTEGER_32 *)(Current + O16486[Dtype(Current)-1747]);
}

/* {EV_TEXT_ALIGNABLE_IMP}.text_alignment */
EIF_INTEGER_32 F1748_19713 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current + O16486[Dtype(Current)-1747]);
}


/* {EV_TEXT_ALIGNABLE_IMP}.align_text_center */
void F1748_19714 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_INTEGER_32 *)(Current + O16486[Dtype(Current)-1747]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
}

/* {EV_TEXT_ALIGNABLE_IMP}.align_text_left */
void F1748_19716 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_INTEGER_32 *)(Current + O16486[Dtype(Current)-1747]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
}

void EIF_Minit1737 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
