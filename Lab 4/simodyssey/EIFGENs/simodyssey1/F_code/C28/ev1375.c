/*
 * Code for class EV_PIXEL_BUFFER_ITERATOR
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1375.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_PIXEL_BUFFER_ITERATOR}.start */
void F1027_14522 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	*(EIF_NATURAL_32 *)(Current+ _LNGOFF_2_1_0_0_) = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
	*(EIF_NATURAL_32 *)(Current+ _LNGOFF_2_1_0_1_) = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
	RTLE;
}

/* {EV_PIXEL_BUFFER_ITERATOR}.after */
EIF_BOOLEAN F1027_14523 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN) (*(EIF_NATURAL_32 *)(Current+ _LNGOFF_2_1_0_1_) > *(EIF_NATURAL_32 *)(Current+ _LNGOFF_2_1_0_3_));
}

/* {EV_PIXEL_BUFFER_ITERATOR}.forth */
void F1027_14525 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_NATURAL_32 *)(Current+ _LNGOFF_2_1_0_0_) == *(EIF_NATURAL_32 *)(Current+ _LNGOFF_2_1_0_2_))) {
		*(EIF_NATURAL_32 *)(Current+ _LNGOFF_2_1_0_0_) = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
		(*(EIF_NATURAL_32 *)(Current+ _LNGOFF_2_1_0_1_)) += (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
	} else {
		(*(EIF_NATURAL_32 *)(Current+ _LNGOFF_2_1_0_0_)) += (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
	}
	RTLE;
}

/* {EV_PIXEL_BUFFER_ITERATOR}.before */
EIF_BOOLEAN F1027_14526 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	
	tu4_1 = *(EIF_NATURAL_32 *)(Current+ _LNGOFF_2_1_0_1_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu4_1 == (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L));
	return Result;
}

/* {EV_PIXEL_BUFFER_ITERATOR}.item */
EIF_REFERENCE F1027_14528 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tb1 = *(EIF_BOOLEAN *)(RTCW(tr1)+ _CHROFF_5_0_);
	if (tb1) {
		Result = *(EIF_REFERENCE *)(Current);
		F68_9804(RTCW(Result), (EIF_NATURAL_32) (*(EIF_NATURAL_32 *)(Current+ _LNGOFF_2_1_0_0_) - (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L)), (EIF_NATURAL_32) (*(EIF_NATURAL_32 *)(Current+ _LNGOFF_2_1_0_1_) - (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L)));
	} else {
		Result = RTLNS(eif_new_type(67, 0x01).id, 67, _OBJSIZ_1_4_0_3_0_0_0_0_);
		F68_9791(RTCW(Result));
		RTLE;
		return (EIF_REFERENCE) Result;
	}
	RTLE;
	return Result;
}

/* {EV_PIXEL_BUFFER_ITERATOR}.is_empty */
EIF_BOOLEAN F1027_14535 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_BOOLEAN) 0;
}

void EIF_Minit1375 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
