/*
 * Code for class KL_TEXT_INPUT_FILE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "kl1828.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {KL_TEXT_INPUT_FILE}.last_character */
EIF_CHARACTER_8 F1845_20884 (EIF_REFERENCE Current)
{
	return *(EIF_CHARACTER_8 *)(Current+ _CHROFF_5_1_);
}


/* {KL_TEXT_INPUT_FILE}.old_open_read */
void F1845_20889 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1291_4971(Current);
	{
		/* INLINED CODE (ANY.default_pointer) */
		tp1 = (EIF_POINTER)  0;
		/* END INLINED CODE */
	}
	if ((EIF_BOOLEAN)(*(EIF_POINTER *)(Current+ _PTROFF_5_8_2_4_1_0_) == tp1)) {
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_5_8_2_3_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		*(EIF_BOOLEAN *)(Current+ _CHROFF_5_3_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	}
	RTLE;
}

void EIF_Minit1828 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
