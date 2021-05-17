/*
 * Code for class EV_ACCELERATOR_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1705.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_ACCELERATOR_IMP}.make */
void F1712_19246 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNSMART(eif_new_type(1813, 1).id);
	F1814_20378(RTCW(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
	F1696_18990(Current, (EIF_BOOLEAN) 1);
	RTLE;
}

/* {EV_ACCELERATOR_IMP}.key */
EIF_REFERENCE F1712_19247 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_2_);
}


/* {EV_ACCELERATOR_IMP}.shift_required */
EIF_BOOLEAN F1712_19248 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_3_3_);
}


/* {EV_ACCELERATOR_IMP}.alt_required */
EIF_BOOLEAN F1712_19249 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_3_2_);
}


/* {EV_ACCELERATOR_IMP}.control_required */
EIF_BOOLEAN F1712_19250 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_3_1_);
}


/* {EV_ACCELERATOR_IMP}.set_key */
void F1712_19251 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	tr1 = F1_14(arg1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {EV_ACCELERATOR_IMP}.enable_shift_required */
void F1712_19252 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_BOOLEAN *)(Current+ _CHROFF_3_3_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
}

/* {EV_ACCELERATOR_IMP}.enable_alt_required */
void F1712_19254 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_BOOLEAN *)(Current+ _CHROFF_3_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
}

/* {EV_ACCELERATOR_IMP}.enable_control_required */
void F1712_19256 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_BOOLEAN *)(Current+ _CHROFF_3_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
}

/* {EV_ACCELERATOR_IMP}.destroy */
void F1712_19259 (EIF_REFERENCE Current)
{
	GTCX
	
	
	F1696_18991(Current, (EIF_BOOLEAN) 1);
}

void EIF_Minit1705 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
