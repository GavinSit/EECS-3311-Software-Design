/*
 * Code for class EV_MENU_ITEM
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1671.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_MENU_ITEM}.make_with_text_and_action */
void F1677_18824 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,arg2);
	RTLIU(4);
	
	RTGC;
	F1596_17742(Current);
	F1622_18116(Current, arg1);
	tr1 = F1586_17679(Current);
	F969_4172(RTCW(tr1), arg2);
	RTLE;
}

/* {EV_MENU_ITEM}.implementation */
EIF_REFERENCE F1677_18830 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_3_);
}


/* {EV_MENU_ITEM}.create_implementation */
void F1677_18831 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(2010, 0x01).id, 2010, _OBJSIZ_25_13_6_6_0_0_0_3_);
	F2011_25467(RTCW(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	RTLE;
}

void EIF_Minit1671 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
