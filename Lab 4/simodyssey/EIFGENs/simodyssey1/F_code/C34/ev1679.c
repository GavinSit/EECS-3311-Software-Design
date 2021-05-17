/*
 * Code for class EV_LIST
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1679.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_LIST}.implementation */
EIF_REFERENCE F1686_18914 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_3_);
}


/* {EV_LIST}.create_implementation */
void F1686_18915 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(1990, 0x01).id, 1990, _OBJSIZ_61_27_6_12_0_2_0_3_);
	F1991_24756(RTCW(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	RTLE;
}

void EIF_Minit1679 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
