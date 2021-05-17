/*
 * Code for class EV_BITMAP_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1936.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_BITMAP_IMP}.make */
void F1953_23572 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 tr4_2;
	EIF_REAL_32 tr4_3;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNSMART(eif_new_type(1306, 1).id);
	F1307_15413(RTCW(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_11_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_11_);
	F1306_15254(RTCW(tr1));
	tr1 = RTLNSMART(eif_new_type(1319, 1).id);
	F1320_15566(RTCW(tr1), *(EIF_REFERENCE *)(Current + _REFACS_11_), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_10_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_10_);
	F519_14209(RTCW(tr1));
	tr1 = RTLNS(eif_new_type(1602, 0x01).id, 1602, _OBJSIZ_2_0_0_0_0_0_0_0_);
	tr4_1 = (EIF_REAL_32) (((EIF_INTEGER_32) 0L));
	tr4_2 = (EIF_REAL_32) (((EIF_INTEGER_32) 0L));
	tr4_3 = (EIF_REAL_32) (((EIF_INTEGER_32) 0L));
	F1603_17889(RTCW(tr1), tr4_1, tr4_2, tr4_3);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_9_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNS(eif_new_type(1602, 0x01).id, 1602, _OBJSIZ_2_0_0_0_0_0_0_0_);
	tr4_1 = (EIF_REAL_32) (((EIF_INTEGER_32) 1L));
	tr4_2 = (EIF_REAL_32) (((EIF_INTEGER_32) 1L));
	tr4_3 = (EIF_REAL_32) (((EIF_INTEGER_32) 1L));
	F1603_17889(RTCW(tr1), tr4_1, tr4_2, tr4_3);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_8_) = (EIF_REFERENCE) tr1;
	F1952_23490(Current);
	F1696_18990(Current, (EIF_BOOLEAN) 1);
	RTLE;
}

/* {EV_BITMAP_IMP}.dc */
EIF_REFERENCE F1953_23577 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_11_);
}


/* {EV_BITMAP_IMP}.destroy */
void F1953_23580 (EIF_REFERENCE Current)
{
	GTCX
	
	
	F1696_18991(Current, (EIF_BOOLEAN) 1);
}

void EIF_Minit1936 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
