/*
 * Code for class LINKABLE [G#1]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "li932.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {LINKABLE}.put_right */
void F494_1937 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + O1722[Dtype(Current)-493]) = (EIF_REFERENCE) arg1;
}

/* {LINKABLE}.forget_right */
void F494_1938 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_REFERENCE *)(Current + O1722[Dtype(Current)-493]) = (EIF_REFERENCE) NULL;
}

void EIF_Minit932 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
