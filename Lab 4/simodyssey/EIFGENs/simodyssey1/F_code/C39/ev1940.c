/*
 * Code for class EV_PICK_AND_DROPABLE_ITEM_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1940.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_PICK_AND_DROPABLE_ITEM_IMP}.set_pnd_original_parent */
void F1957_23758 (EIF_REFERENCE Current)
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
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R19576[dtype-1958])(Current);
	*(EIF_REFERENCE *)(Current + O19574[dtype-1956]) = RTRV(eif_new_type(1968, 0), tr1);
	RTAR(Current, tr1);
	RTLE;
}

/* {EV_PICK_AND_DROPABLE_ITEM_IMP}.top_level_window_imp */
EIF_REFERENCE F1957_23760 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	if ((EIF_BOOLEAN)((FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R19576[dtype-1958])(Current) != NULL)) {
		loc1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R19576[dtype-1958])(Current);
		loc1 = RTRV(eif_new_type(1955, 0x00), loc1);
		RTCT0("parent_is_item_list", EX_CHECK);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R19565[Dtype(RTCW(loc1))-1958])(loc1);
		RTLE;
		return (EIF_REFERENCE) tr1;
	}
	RTLE;
	return (EIF_REFERENCE) 0;
}

/* {EV_PICK_AND_DROPABLE_ITEM_IMP}.pnd_press */
void F1957_23761 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_INTEGER_32 arg5)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLR(3,loc2);
	RTLR(4,loc3);
	RTLIU(5);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_NATURAL_8 *)(Current + O19555[dtype-1955]) == ((EIF_NATURAL_8) 1U))) {
		tr1 = *(EIF_REFERENCE *)(RTCV(F1956_23756(Current)) + _REFACS_47_);
		if ((EIF_BOOLEAN)(tr1 == NULL)) {
			tb1 = '\01';
			tb2 = '\0';
			if ((EIF_BOOLEAN)(arg3 == ((EIF_INTEGER_32) 1L))) {
				tb2 = (EIF_BOOLEAN) !F1751_19756(Current);
			}
			if (!(tb2)) {
				tb2 = '\0';
				if ((EIF_BOOLEAN)(arg3 == ((EIF_INTEGER_32) 3L))) {
					tb2 = F1751_19756(Current);
				}
				tb1 = tb2;
			}
			if (tb1) {
				(FUNCTION_CAST(void, (EIF_REFERENCE)) R19575[dtype-1958])(Current);
				tr1 = *(EIF_REFERENCE *)(Current + O19574[dtype-1956]);
				loc1 = tr1;
				if (EIF_TEST(loc1)) {
					tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
					tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
					F1956_23724(Current, arg1, arg2, arg3, (EIF_BOOLEAN) 1, tr8_1, tr8_2, (EIF_REAL_64) 0.5, arg4, arg5, (EIF_BOOLEAN) 0);
					tr1 = *(EIF_REFERENCE *)(RTCV(F1956_23756(Current)) + _REFACS_47_);
					if ((EIF_BOOLEAN)(tr1 != NULL)) {
						if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O16500[dtype-1750]) != NULL)) {
							F1969_24015(loc1);
							F1969_24014(loc1, Current);
							F1969_24017(loc1);
						}
					} else {
						F1969_24016(loc1);
					}
				}
			}
		}
	} else {
		if ((EIF_BOOLEAN)(*(EIF_NATURAL_8 *)(Current + O19555[dtype-1955]) == ((EIF_NATURAL_8) 2U))) {
			tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
			tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
			F1956_23726(Current, arg1, arg2, arg3, tr8_1, tr8_2, (EIF_REAL_64) 0.5, arg4, arg5);
			tr1 = *(EIF_REFERENCE *)(Current + O19574[dtype-1956]);
			loc2 = tr1;
			if (EIF_TEST(loc2)) {
				F1969_24016(loc2);
				F1969_24014(loc2, NULL);
				F1969_24018(loc2);
				if ((EIF_BOOLEAN)(arg3 == ((EIF_INTEGER_32) 1L))) {
					F1969_24008(loc2);
				}
			}
		} else {
			tr1 = *(EIF_REFERENCE *)(Current + O19574[dtype-1956]);
			loc3 = tr1;
			if (EIF_TEST(loc3)) {
				F1969_24016(loc3);
				F1969_24014(loc3, NULL);
				F1969_24018(loc3);
			}
		}
	}
	RTLE;
}

/* {EV_PICK_AND_DROPABLE_ITEM_IMP}.escape_pnd */
void F1957_23762 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O19574[Dtype(Current)-1956]);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		F1969_23986(loc1);
	} else {
		F1956_23723(Current);
	}
	RTLE;
}

/* {EV_PICK_AND_DROPABLE_ITEM_IMP}.check_drag_and_drop_release */
void F1957_23763 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc2);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLIU(4);
	
	RTGC;
	*(EIF_INTEGER_32 *)(Current + O10097[dtype-300]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
	*(EIF_INTEGER_32 *)(Current + O10098[dtype-300]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
	F1910_22421(RTCV(F1956_23756(Current)));
	*(EIF_BOOLEAN *)(Current + O10095[dtype-300]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	tb1 = '\0';
	if (F1751_19757(Current)) {
		tb1 = (EIF_BOOLEAN)(*(EIF_NATURAL_8 *)(Current + O19555[dtype-1955]) == ((EIF_NATURAL_8) 2U));
	}
	if (tb1) {
		tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
		tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
		tr8_3 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
		F1956_23726(Current, arg1, arg2, ((EIF_INTEGER_32) 1L), tr8_1, tr8_2, tr8_3, ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L));
		tr1 = *(EIF_REFERENCE *)(Current + O19574[dtype-1956]);
		loc2 = tr1;
		if (EIF_TEST(loc2)) {
			F1969_24016(loc2);
			F1969_24014(loc2, NULL);
			F1969_24018(loc2);
		}
	} else {
		loc1 = *(EIF_REFERENCE *)(Current + O19566[dtype-1955]);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			F1982_24513(RTCW(loc1));
		}
	}
	RTLE;
}

/* {EV_PICK_AND_DROPABLE_ITEM_IMP}.set_pointer_style */
void F1957_23764 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTGC;
	if ((EIF_BOOLEAN)((FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R19576[dtype-1958])(Current) != NULL)) {
		loc1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R19576[dtype-1958])(Current);
		loc1 = RTRV(eif_new_type(1955, 0x00), loc1);
		RTCT0("parent_is_item_list", EX_CHECK);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R16548[Dtype(RTCW(loc1))-1871])(loc1, arg1);
	}
	RTLE;
}

/* {EV_PICK_AND_DROPABLE_ITEM_IMP}.set_capture */
void F1957_23765 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O19574[Dtype(Current)-1956]);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		F1912_22518(loc1);
	}
	RTLE;
}

/* {EV_PICK_AND_DROPABLE_ITEM_IMP}.release_capture */
void F1957_23766 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O19574[Dtype(Current)-1956]);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		F1912_22520(loc1);
	}
	RTLE;
}

void EIF_Minit1940 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
