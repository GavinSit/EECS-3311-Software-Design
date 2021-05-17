/*
 * Code for class EV_DOCKABLE_SOURCE_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1716.h"
#include "eif_helpers.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_DOCKABLE_SOURCE_IMP}.dragable_press */
void F1727_19571 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_INTEGER_32 arg5)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg3 == ((EIF_INTEGER_32) 1L))) {
		tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
		tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
		tr1 = F1696_18976(Current);
		F1727_19577(Current, arg1, arg2, arg3, tr8_1, tr8_2, (EIF_REAL_64) 0.5, arg4, arg5, tr1);
	}
	RTLE;
}

/* {EV_DOCKABLE_SOURCE_IMP}.dragable_motion */
void F1727_19572 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	if (*(EIF_BOOLEAN *)(Current + O10095[dtype-300])) {
		tb1 = '\01';
		ti4_1 = *(EIF_INTEGER_32 *)(Current + O10097[dtype-300]);
		ti4_1 = eif_abs_int32 ((EIF_INTEGER_32) (ti4_1 - arg1));
		if (!(EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 3L))) {
			ti4_1 = *(EIF_INTEGER_32 *)(Current + O10098[dtype-300]);
			ti4_1 = eif_abs_int32 ((EIF_INTEGER_32) (ti4_1 - arg2));
			tb1 = (EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 3L));
		}
		if (tb1) {
			F1727_19579(Current, *(EIF_INTEGER_32 *)(Current + O10097[dtype-300]), *(EIF_INTEGER_32 *)(Current + O10098[dtype-300]), ((EIF_INTEGER_32) 1L), *(EIF_REAL_64 *)(Current + O10099[dtype-300]), *(EIF_REAL_64 *)(Current + O10100[dtype-300]), *(EIF_REAL_64 *)(Current + O10101[dtype-300]), (EIF_INTEGER_32) (arg3 + (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current + O10097[dtype-300]) - arg1)), (EIF_INTEGER_32) (arg4 + (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current + O10098[dtype-300]) - arg2)));
			*(EIF_BOOLEAN *)(Current + O10095[dtype-300]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		}
	} else {
		tr1 = F1956_23756(Current);
		ti4_1 = ((EIF_INTEGER_32) 1L);
		tb1 = F1910_22386(RTCW(tr1), ti4_1);
		if ((EIF_BOOLEAN) !tb1) {
			F1727_19573(Current, arg1, arg2);
		}
		tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
		tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
		F1726_19562(Current, arg1, arg2, tr8_1, tr8_2, (EIF_REAL_64) 0.5, arg3, arg4);
	}
	RTLE;
}

/* {EV_DOCKABLE_SOURCE_IMP}.check_dragable_release */
void F1727_19573 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if (F1726_19534(Current)) {
		F1910_22421(RTCV(F1956_23756(Current)));
		tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
		tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
		tr8_3 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
		F1727_19574(Current, arg1, arg2, ((EIF_INTEGER_32) 1L), tr8_1, tr8_2, tr8_3, ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L));
		*(EIF_INTEGER_32 *)(Current + O10097[dtype-300]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
		*(EIF_INTEGER_32 *)(Current + O10098[dtype-300]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
		*(EIF_BOOLEAN *)(Current + O10095[dtype-300]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	} else {
		if (*(EIF_BOOLEAN *)(Current + O10095[dtype-300])) {
			*(EIF_BOOLEAN *)(Current + O10095[dtype-300]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		}
	}
	RTLE;
}

/* {EV_DOCKABLE_SOURCE_IMP}.end_dragable */
void F1727_19574 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_REAL_64 arg4, EIF_REAL_64 arg5, EIF_REAL_64 arg6, EIF_INTEGER_32 arg7, EIF_INTEGER_32 arg8)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc2);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLIU(4);
	
	RTGC;
	*(EIF_BOOLEAN *)(Current + O10095[dtype-300]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	if (F1726_19534(Current)) {
		tr1 = *(EIF_REFERENCE *)(Current + O16390[dtype-1726]);
		loc2 = tr1;
		if (EIF_TEST(loc2)) {
			F301_12337(Current, loc2);
		} else {
			if ((EIF_BOOLEAN)(loc1 != NULL)) {
				tr1 = RTOUCR(235,F71_9846, (RTCV(RTOUCR(242,F321_12796, (Current)))));
				F301_12337(Current, tr1);
			} else {
				tr1 = RTOUCR(234,F71_9843, (RTCV(RTOUCR(242,F321_12796, (Current)))));
				F301_12337(Current, tr1);
			}
		}
		if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R16382[dtype-1964])(Current)) {
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R16395[dtype-1964])(Current);
		}
		tr1 = F1956_23756(Current);
		F1910_22430(RTCW(tr1), ((EIF_INTEGER_32) 0L));
		F1910_22416(RTCV(F1956_23756(Current)));
		F1726_19553(Current);
	}
	RTLE;
}

/* {EV_DOCKABLE_SOURCE_IMP}.start_docking */
void F1727_19577 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_REAL_64 arg4, EIF_REAL_64 arg5, EIF_REAL_64 arg6, EIF_INTEGER_32 arg7, EIF_INTEGER_32 arg8, EIF_REFERENCE arg9)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_16 ti2_1;
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,arg9);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTGC;
	if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current + O10095[dtype-300])) {
		*(EIF_INTEGER_32 *)(Current + O10097[dtype-300]) = (EIF_INTEGER_32) arg1;
		*(EIF_INTEGER_32 *)(Current + O10098[dtype-300]) = (EIF_INTEGER_32) arg2;
		ti2_1 = (EIF_INTEGER_16) arg1;
		*(EIF_INTEGER_16 *)(Current + O10563[dtype-320]) = (EIF_INTEGER_16) ti2_1;
		ti2_1 = (EIF_INTEGER_16) arg2;
		*(EIF_INTEGER_16 *)(Current + O10564[dtype-320]) = (EIF_INTEGER_16) ti2_1;
		*(EIF_REAL_64 *)(Current + O10099[dtype-300]) = (EIF_REAL_64) arg4;
		*(EIF_REAL_64 *)(Current + O10100[dtype-300]) = (EIF_REAL_64) arg5;
		*(EIF_REAL_64 *)(Current + O10101[dtype-300]) = (EIF_REAL_64) arg6;
		*(EIF_BOOLEAN *)(Current + O10095[dtype-300]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		F1910_22420(RTCV(F1956_23756(Current)));
		RTAR(Current, arg9);
		*(EIF_REFERENCE *)(Current + O16388[dtype-1726]) = (EIF_REFERENCE) arg9;
		loc1 = *(EIF_REFERENCE *)(RTCW(arg9) + O15014[Dtype(arg9)-1595]);
		loc1 = RTRV(eif_new_type(1726, 0x00), loc1);
		RTCT0("source_valid", EX_CHECK);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		tr1 = F1956_23756(Current);
		F1910_22415(RTCW(tr1), loc1);
	}
	RTLE;
}

/* {EV_DOCKABLE_SOURCE_IMP}.real_start_dragging */
void F1727_19579 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_REAL_64 arg4, EIF_REAL_64 arg5, EIF_REAL_64 arg6, EIF_INTEGER_32 arg7, EIF_INTEGER_32 arg8)
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
	if ((EIF_BOOLEAN) !F1726_19534(Current)) {
		loc1 = *(EIF_REFERENCE *)(Current + O16388[dtype-1726]);
		RTCT0("l_actual_source /= Void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		F1726_19560(Current, arg7, arg8, loc1);
		tr1 = F1956_23756(Current);
		F1910_22430(RTCW(tr1), ((EIF_INTEGER_32) 0L));
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R16393[dtype-1964])(Current);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + O16390[dtype-1726]) = (EIF_REFERENCE) tr1;
		tr1 = RTOUCR(311,F1726_19555, (Current));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R16392[dtype-1964])(Current, tr1);
		if ((EIF_BOOLEAN) !(FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R16382[dtype-1964])(Current)) {
			F1956_23746(Current);
		}
	}
	RTLE;
}

/* {EV_DOCKABLE_SOURCE_IMP}.update_buttons */
void F1727_19580 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,loc2);
	RTLIU(3);
	
	RTGC;
	loc3 = (EIF_INTEGER_32) arg2;
	for (;;) {
		if ((EIF_BOOLEAN) (loc3 > arg3)) break;
		loc1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_3_);
		loc1 = RTRV(eif_new_type(1989, 0x00), loc1);
		RTCT0("tool_bar_not_void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		loc2 = F1630_18249(RTCW(arg1), loc3);
		loc2 = *(EIF_REFERENCE *)(RTCW(loc2) + _REFACS_3_);
		loc2 = RTRV(eif_new_type(1962, 0x00), loc2);
		RTCT0("button /= Void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc2 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		F1990_24709(RTCW(loc1), loc2);
		loc3++;
	}
	RTLE;
}

void EIF_Minit1716 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
