/*
 * Code for class EV_PIXEL_BUFFER_PIXEL
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1026.h"
#include "eif_built_in.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_PIXEL_BUFFER_PIXEL}.default_create */
void F68_9791 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(476, 0x01).id, 476, _OBJSIZ_0_0_0_0_0_0_0_0_);
	tb1 = (EIF_BOOLEAN) eif_builtin_PLATFORM_is_windows;
	if (tb1) {
		*(EIF_NATURAL_8 *)(Current+ _CHROFF_1_0_) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 16L);
		*(EIF_NATURAL_8 *)(Current+ _CHROFF_1_1_) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 8L);
		*(EIF_NATURAL_8 *)(Current+ _CHROFF_1_2_) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
		*(EIF_NATURAL_8 *)(Current+ _CHROFF_1_3_) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 24L);
	} else {
		*(EIF_NATURAL_8 *)(Current+ _CHROFF_1_0_) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 24L);
		*(EIF_NATURAL_8 *)(Current+ _CHROFF_1_1_) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 16L);
		*(EIF_NATURAL_8 *)(Current+ _CHROFF_1_2_) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 8L);
		*(EIF_NATURAL_8 *)(Current+ _CHROFF_1_3_) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	}
	RTLE;
}

/* {EV_PIXEL_BUFFER_PIXEL}.sync_with_pixel_buffer_value */
void F68_9804 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1, EIF_NATURAL_32 arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 tu4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	*(EIF_NATURAL_32 *)(Current+ _LNGOFF_1_4_0_0_) = (EIF_NATURAL_32) arg1;
	*(EIF_NATURAL_32 *)(Current+ _LNGOFF_1_4_0_1_) = (EIF_NATURAL_32) arg2;
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current) != NULL)) {
		tr1 = *(EIF_REFERENCE *)(Current);
		tu4_1 = F1701_19066(RTCW(tr1), arg1, arg2);
		*(EIF_NATURAL_32 *)(Current+ _LNGOFF_1_4_0_2_) = (EIF_NATURAL_32) tu4_1;
	}
	RTLE;
}

void EIF_Minit1026 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
