/*
 * Code for class EV_MENU_BAR
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1686.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_MENU_BAR}.parent */
EIF_REFERENCE F1693_18951 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	Result = F1731_19615(RTCW(tr1));
	RTLE;
	return Result;
}

/* {EV_MENU_BAR}.implementation */
EIF_REFERENCE F1693_18952 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {EV_MENU_BAR}.create_interface_objects */
void F1693_18953 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {EV_MENU_BAR}.create_implementation */
void F1693_18954 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(1730, 0x01).id, 1730, _OBJSIZ_7_2_0_1_0_1_0_0_);
	F1731_19606(RTCW(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	RTLE;
}

void EIF_Minit1686 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
