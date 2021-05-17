/*
 * Code for class EV_WINDOW_I
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1752.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_WINDOW_I}.is_border_enabled */
EIF_BOOLEAN F1763_19917 (EIF_REFERENCE Current)
{
	GTCX
	RTCDT;
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN) (*(EIF_BOOLEAN *)(Current + O16685[dtype-1762]) || *(EIF_BOOLEAN *)(Current + O16661[dtype-1762]));
}

/* {EV_WINDOW_I}.accelerator_list */
EIF_REFERENCE F1763_19918 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O16686[dtype-1762]) == NULL)) {
		tr1 = RTLNSMART(eif_new_type(974, 0).id);
		F975_14405(RTCW(tr1));
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + O16686[dtype-1762]) = (EIF_REFERENCE) tr1;
		tr1 = *(EIF_REFERENCE *)(Current + O16686[dtype-1762]);
		F575_2465(RTCW(tr1));
	}
	RTLE;
	return (EIF_REFERENCE) *(EIF_REFERENCE *)(Current + O16686[dtype-1762]);
}

/* {EV_WINDOW_I}.lock_update */
void F1763_19931 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(1605, 0x01).id, 1605, _OBJSIZ_2_0_0_0_0_0_0_0_);
	F1596_17742(RTCW(tr1));
	tr1 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_1_);
	tr1 = F1713_19262(RTCW(tr1));
	F1714_19311(RTCW(tr1), *(EIF_REFERENCE *)(Current + O15892[Dtype(Current)-1695]));
	RTLE;
}

/* {EV_WINDOW_I}.unlock_update */
void F1763_19932 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(1);
	RTLR(0,tr1);
	RTLIU(1);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(1605, 0x01).id, 1605, _OBJSIZ_2_0_0_0_0_0_0_0_);
	F1596_17742(RTCW(tr1));
	tr1 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_1_);
	tr1 = F1713_19262(RTCW(tr1));
	F1714_19311(RTCW(tr1), NULL);
	RTLE;
}

/* {EV_WINDOW_I}.update_for_pick_and_drop */
void F1763_19941 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	F1759_19881(Current, arg1);
	tr1 = *(EIF_REFERENCE *)(Current + O16654[dtype-1762]);
	tr1 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_3_);
	F1754_19843(RTCW(tr1), arg1);
	tr1 = *(EIF_REFERENCE *)(Current + O16655[dtype-1762]);
	tr1 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_3_);
	F1754_19843(RTCW(tr1), arg1);
	RTLE;
}

void EIF_Minit1752 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
