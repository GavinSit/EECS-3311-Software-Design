/*
 * Code for class KL_BINARY_OUTPUT_FILE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "kl1824.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {KL_BINARY_OUTPUT_FILE}.old_open_write */
void F1841_20858 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1291_4972(Current);
	{
		/* INLINED CODE (ANY.default_pointer) */
		tp1 = (EIF_POINTER)  0;
		/* END INLINED CODE */
	}
	if ((EIF_BOOLEAN)(*(EIF_POINTER *)(Current+ _PTROFF_5_6_2_4_1_0_) == tp1)) {
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_5_6_2_3_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		*(EIF_BOOLEAN *)(Current+ _CHROFF_5_3_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	}
	RTLE;
}

void EIF_Minit1824 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
