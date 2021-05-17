/*
 * Code for class EV_NOTEBOOK_TAB
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1688.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_NOTEBOOK_TAB}.notebook */
EIF_REFERENCE F1695_18963 (EIF_REFERENCE Current)
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
	Result = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_2_);
	RTLE;
	return Result;
}

/* {EV_NOTEBOOK_TAB}.widget */
EIF_REFERENCE F1695_18964 (EIF_REFERENCE Current)
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
	Result = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_3_);
	RTLE;
	return Result;
}

/* {EV_NOTEBOOK_TAB}.is_destroyed */
EIF_BOOLEAN F1695_18965 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLR(3,loc2);
	RTLIU(4);
	
	RTGC;
	Result = '\01';
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tb1 = F1696_18975(RTCW(tr1));
	if (!tb1) {
		tb1 = '\0';
		tb2 = '\0';
		tr1 = F1695_18963(Current);
		loc1 = tr1;
		if (EIF_TEST(loc1)) {
			tr1 = F1695_18964(Current);
			loc2 = tr1;
			tb2 = EIF_TEST(loc2);
		}
		if (tb2) {
			tb2 = F852_3257(loc1, loc2);
			tb1 = tb2;
		}
		Result = (EIF_BOOLEAN) !tb1;
	}
	RTLE;
	return Result;
}

/* {EV_NOTEBOOK_TAB}.create_interface_objects */
void F1695_18968 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {EV_NOTEBOOK_TAB}.create_implementation */
void F1695_18969 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(1809, 0x01).id, 1809, _OBJSIZ_4_1_0_0_0_0_0_0_);
	F1810_20350(RTCW(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	RTLE;
}

void EIF_Minit1688 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
