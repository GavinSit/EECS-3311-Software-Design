/*
 * Code for class EV_ITEM_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1941.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_ITEM_IMP}.destroy */
void F1958_23770 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTCFDT;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	tb1 = '\0';
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R16916[dtype-1958])(Current);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tb1 = (EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O15892[dtype-1695]) != NULL);
	}
	if (tb1) {
		F1716_19415(loc1, *(EIF_REFERENCE *)(Current + O15892[dtype-1695]));
	}
	F1696_18991(Current, (EIF_BOOLEAN) 1);
	RTLE;
}

/* {EV_ITEM_IMP}.on_parented */
void F1958_23773 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {EV_ITEM_IMP}.on_orphaned */
void F1958_23774 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {EV_ITEM_IMP}.update_for_pick_and_drop */
void F1958_23775 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	
	
	RTGC;
}

void EIF_Minit1941 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
