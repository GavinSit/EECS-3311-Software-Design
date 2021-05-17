/*
 * Code for class BINARY_SEARCH_TREE [G#1]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "bi2038.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {BINARY_SEARCH_TREE}.make */
void F717_2955 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTGC;
	tr1 = RTCCL(arg1);
	F716_2906(Current, tr1);
	RTLE;
}

/* {BINARY_SEARCH_TREE}.put */
void F717_2967 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCFDT;
	RTLD;
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,loc2);
	RTLR(6,loc1);
	RTLIU(7);
	
	RTGC;
	tr1 = RTCCL(arg1);
	tr2 = *(EIF_REFERENCE *)(Current);
	tr3 = RTCCL(tr2);
	if ((EIF_BOOLEAN) !F717_2979(Current, tr1, tr3)) {
		loc2 = *(EIF_REFERENCE *)(Current);
		tb1 = '\0';
		if ((EIF_BOOLEAN)(loc2 != NULL)) {
			tr1 = RTCCL(loc2);
			tb2 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R1384[Dtype(RTCW(arg1))-485])(arg1, tr1);
			tb1 = tb2;
		}
		if (tb1) {
			loc1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
			if ((EIF_BOOLEAN)(loc1 == NULL)) {
				loc1 = RTLNSMART(eif_final_id(Y2472,Y2472_gen_type,dftype,715).id);
				tr1 = *(EIF_REFERENCE *)(Current);
				tr2 = RTCCL(tr1);
				F717_2955(RTCW(loc1), tr2);
				if (*(EIF_BOOLEAN *)(Current+ _CHROFF_4_0_)) {
					F575_2465(RTCW(loc1));
				}
				F716_2933(Current, loc1);
				tr1 = RTCCL(arg1);
				F489_1935(RTCW(loc1), tr1);
			} else {
				tr1 = RTCCL(arg1);
				F717_2967(RTCW(loc1), tr1);
			}
		} else {
			loc1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
			if ((EIF_BOOLEAN)(loc1 == NULL)) {
				loc1 = RTLNSMART(eif_final_id(Y2472,Y2472_gen_type,dftype,715).id);
				tr1 = *(EIF_REFERENCE *)(Current);
				tr2 = RTCCL(tr1);
				F717_2955(RTCW(loc1), tr2);
				if (*(EIF_BOOLEAN *)(Current+ _CHROFF_4_0_)) {
					F575_2465(RTCW(loc1));
				}
				F716_2934(Current, loc1);
				tr1 = RTCCL(arg1);
				F489_1935(RTCW(loc1), tr1);
			} else {
				tr1 = RTCCL(arg1);
				F717_2967(RTCW(loc1), tr1);
			}
		}
	}
	RTLE;
}

/* {BINARY_SEARCH_TREE}.items_equal */
EIF_BOOLEAN F717_2979 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,arg2);
	RTLIU(3);
	
	RTGC;
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_4_0_)) {
		RTLE;
		return (EIF_BOOLEAN) RTEQ(arg1, arg2);
	} else {
		RTLE;
		return (EIF_BOOLEAN) RTCEQ(arg1, arg2);
	}/* NOTREACHED */
	
}

void EIF_Minit2038 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
