/*
 * Code for class EV_CHARACTER_FORMAT_EFFECTS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1018.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_CHARACTER_FORMAT_EFFECTS}.enable_striked_out */
void F60_9657 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_BOOLEAN *)(Current+ _CHROFF_0_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
}

/* {EV_CHARACTER_FORMAT_EFFECTS}.enable_underlined */
void F60_9659 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_BOOLEAN *)(Current+ _CHROFF_0_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
}

/* {EV_CHARACTER_FORMAT_EFFECTS}.set_vertical_offset */
void F60_9661 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_2_0_0_) = (EIF_INTEGER_32) arg1;
}

void EIF_Minit1018 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
