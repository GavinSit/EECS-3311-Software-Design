/*
 * Code for class EV_RADIO_PEER_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1724.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_RADIO_PEER_IMP}.selected_peer */
EIF_REFERENCE F1735_19662 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCFDT;
	RTCDT;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc3);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLR(4,loc2);
	RTLIU(5);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O16449[dtype-1734]);
	loc3 = tr1;
	if (EIF_TEST(loc3)) {
		loc1 = F912_3521(loc3);
		F912_3534(loc3);
		for (;;) {
			tb1 = '\01';
			tb2 = F912_3528(loc3);
			if (!tb2) {
				tb1 = (EIF_BOOLEAN)(loc2 != NULL);
			}
			if (tb1) break;
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2258[Dtype(loc3)-818])(loc3);
			tb2 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R16445[Dtype(RTCW(tr1))-1967])(tr1);
			if (tb2) {
				loc2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2258[Dtype(loc3)-818])(loc3);
				loc2 = *(EIF_REFERENCE *)(RTCW(loc2) + O15892[Dtype(loc2)-1695]);
			}
			F912_3536(loc3);
		}
		F912_3540(loc3, loc1);
	} else {
		loc2 = *(EIF_REFERENCE *)(Current + O15892[dtype-1695]);
	}
	RTCT0("l_result /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	RTLE;
	return (EIF_REFERENCE) loc2;
}

/* {EV_RADIO_PEER_IMP}.set_radio_group */
void F1735_19664 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,loc1);
	RTLIU(3);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O16449[dtype-1734]) != NULL)) {
		F1735_19665(Current);
	}
	F1735_19666(Current, arg1);
	loc1 = *(EIF_REFERENCE *)(Current + O16449[dtype-1734]);
	RTCT0("l_radio_group /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2222[Dtype(RTCW(loc1))-818])(loc1, Current);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_2_3_0_0_);
	if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L))) {
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R16448[dtype-1967])(Current);
	}
	RTLE;
}

/* {EV_RADIO_PEER_IMP}.remove_from_radio_group */
void F1735_19665 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current + O16449[dtype-1734]);
	RTCT0("l_radio_group /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	F912_3534(RTCW(loc1));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2224[Dtype(RTCW(loc1))-911])(loc1, Current);
	RTCT0("removed", EX_CHECK);
	tb1 = F852_3257(RTCW(loc1), Current);
	if ((EIF_BOOLEAN) !tb1) {
		RTCK0;
	} else {
		RTCF0;
	}
	tb1 = '\0';
	if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R16445[dtype-1967])(Current)) {
		tb2 = F736_2537(RTCW(loc1));
		tb1 = (EIF_BOOLEAN) !tb2;
	}
	if (tb1) {
		tr1 = F912_3518(RTCW(loc1));
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R16448[Dtype(RTCW(tr1))-1967])(tr1);
	}
	*(EIF_REFERENCE *)(Current + O16449[dtype-1734]) = (EIF_REFERENCE) NULL;
	RTLE;
}

/* {EV_RADIO_PEER_IMP}.internal_set_radio_group */
void F1735_19666 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + O16449[Dtype(Current)-1734]) = (EIF_REFERENCE) arg1;
}

void EIF_Minit1724 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
