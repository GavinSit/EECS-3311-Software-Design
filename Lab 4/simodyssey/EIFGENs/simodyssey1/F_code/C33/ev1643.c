/*
 * Code for class EV_DOCKABLE_DIALOG
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1643.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_DOCKABLE_DIALOG}.set_original_parent */
void F1649_18582 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_6_) = (EIF_REFERENCE) arg1;
}

/* {EV_DOCKABLE_DIALOG}.set_original_parent_index */
void F1649_18583 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_4_0_1_) = (EIF_INTEGER_32) arg1;
}

/* {EV_DOCKABLE_DIALOG}.set_expansion_was_disabled */
void F1649_18584 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_BOOLEAN *)(Current+ _CHROFF_7_3_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
}

void EIF_Minit1643 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
