/*
 * Code for class BINARY_TREE [G#1]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "bi2039.h"
#include "eif_built_in.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {BINARY_TREE}.make */
void F716_2906 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	tr1 = RTCCL(arg1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {BINARY_TREE}.child_index */
EIF_INTEGER_32 F716_2908 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_1_0_0_);
}


/* {BINARY_TREE}.child */
EIF_REFERENCE F716_2915 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTGC;
	switch (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_1_0_0_)) {
		case 1L:
			Result = *(EIF_REFERENCE *)(Current + _REFACS_2_);
			break;
		case 2L:
			Result = *(EIF_REFERENCE *)(Current + _REFACS_3_);
			break;
		default:
			Result = (EIF_REFERENCE) NULL;
			break;
	}
	RTLE;
	return Result;
}

/* {BINARY_TREE}.child_cursor */
EIF_REFERENCE F716_2916 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(542, 0x01).id, 542, _OBJSIZ_0_0_0_1_0_0_0_0_);
	F543_2396(RTCW(tr1), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_1_0_0_));
	RTLE;
	return (EIF_REFERENCE) tr1;
}

/* {BINARY_TREE}.child_capacity */
EIF_INTEGER_32 F716_2920 (EIF_REFERENCE Current)
{
	return (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
}

/* {BINARY_TREE}.child_after */
EIF_BOOLEAN F716_2921 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_1_0_0_) >= (EIF_INTEGER_32) (((EIF_INTEGER_32) 2L) + ((EIF_INTEGER_32) 1L)));
}

/* {BINARY_TREE}.is_leaf */
EIF_BOOLEAN F716_2922 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_2_) == NULL) && (EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_3_) == NULL));
}

/* {BINARY_TREE}.has_left */
EIF_BOOLEAN F716_2924 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_2_) != NULL);
}

/* {BINARY_TREE}.has_right */
EIF_BOOLEAN F716_2925 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_3_) != NULL);
}

/* {BINARY_TREE}.child_go_to */
void F716_2927 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_0_0_0_0_);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_1_0_0_) = (EIF_INTEGER_32) ti4_1;
	RTLE;
}

/* {BINARY_TREE}.child_start */
void F716_2928 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if (F716_2924(Current)) {
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_1_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	} else {
		if (F716_2925(Current)) {
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_1_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
		} else {
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_1_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		}
	}
	RTLE;
}

/* {BINARY_TREE}.child_forth */
void F716_2930 (EIF_REFERENCE Current)
{
	GTCX
	
	
	(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_1_0_0_))++;
}

/* {BINARY_TREE}.child_go_i_th */
void F716_2932 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_1_0_0_) = (EIF_INTEGER_32) arg1;
}

/* {BINARY_TREE}.put_left_child */
void F716_2933 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLIU(3);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_4_0_)) {
			F575_2465(RTCW(arg1));
		} else {
			F575_2466(RTCW(arg1));
		}
	}
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		F715_2832(RTCW(loc1), NULL);
	}
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		F715_2832(RTCW(arg1), Current);
	}
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) arg1;
	RTLE;
}

/* {BINARY_TREE}.put_right_child */
void F716_2934 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLIU(3);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_4_0_)) {
			F575_2465(RTCW(arg1));
		} else {
			F575_2466(RTCW(arg1));
		}
	}
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		F715_2832(RTCW(loc1), NULL);
	}
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		F715_2832(RTCW(arg1), Current);
	}
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) arg1;
	RTLE;
}

/* {BINARY_TREE}.put_child */
void F716_2937 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_4_0_)) {
		F575_2465(RTCW(arg1));
	} else {
		F575_2466(RTCW(arg1));
	}
	F715_2832(RTCW(arg1), NULL);
	tb1 = '\0';
	if ((EIF_BOOLEAN) !F716_2924(Current)) {
		tb1 = (EIF_BOOLEAN) !F716_2925(Current);
	}
	if (tb1) {
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_1_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	}
	switch (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_1_0_0_)) {
		case 1L:
			F716_2933(Current, arg1);
			break;
		case 2L:
			F716_2934(Current, arg1);
			break;
		default:
			RTEC(EN_WHEN);
	}
	RTLE;
}

/* {BINARY_TREE}.fill_list */
void F716_2948 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,arg1);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLIU(5);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		tr1 = *(EIF_REFERENCE *)(RTCW(loc1));
		tr2 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2222[Dtype(RTCW(arg1))-818])(arg1, tr2);
		F716_2948(RTCW(loc1), arg1);
	}
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		tr1 = *(EIF_REFERENCE *)(RTCW(loc1));
		tr2 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2222[Dtype(RTCW(arg1))-818])(arg1, tr2);
		F716_2948(RTCW(loc1), arg1);
	}
	RTLE;
}

/* {BINARY_TREE}.clone_node */
EIF_REFERENCE F716_2949 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,Result);
	RTLIU(5);
	
	RTGC;
	Result = RTLNSMART(Dftype(Current));
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1));
	tr2 = RTCCL(tr1);
	F716_2906(RTCW(Result), tr2);
	F716_2950(RTCW(Result), arg1);
	RTLE;
	return Result;
}

/* {BINARY_TREE}.copy_node */
void F716_2950 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	eif_builtin_ANY_standard_copy (Current, arg1);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_1_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) NULL;
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) NULL;
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) NULL;
	RTLE;
}

/* {BINARY_TREE}.subtree_count */
EIF_INTEGER_32 F716_2952 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		Result = F715_2786(RTCW(loc1));
	}
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		ti4_1 = F715_2786(RTCW(loc1));
		Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result + ti4_1);
	}
	RTLE;
	return Result;
}

void EIF_Minit2039 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
