/*
 * Code for class EV_BITMAP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1621.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_BITMAP}.create_interface_objects */
void F1626_18184 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {EV_BITMAP}.create_implementation */
void F1626_18185 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(1952, 0x01).id, 1952, _OBJSIZ_12_8_0_4_0_0_0_0_);
	F1953_23572(RTCW(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	RTLE;
}

void EIF_Minit1621 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
