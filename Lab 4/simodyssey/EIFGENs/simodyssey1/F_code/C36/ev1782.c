/*
 * Code for class EV_TREE_NODE_I
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1782.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_TREE_NODE_I}.parent */
EIF_REFERENCE F1793_20214 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLIU(4);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_34_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		Result = *(EIF_REFERENCE *)(loc1 + O15892[Dtype(loc1)-1695]);
		RTLE;
		return RTRV(eif_new_type(1686, 0x00), Result);
	}
	RTLE;
	return Result;
}

/* {EV_TREE_NODE_I}.parent_tree */
EIF_REFERENCE F1793_20215 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(5);
	RTLR(0,Result);
	RTLR(1,Current);
	RTLR(2,loc2);
	RTLR(3,tr1);
	RTLR(4,loc1);
	RTLIU(5);
	
	RTGC;
	Result = F1793_20214(Current);
	Result = RTRV(eif_new_type(1689, 0x00), Result);
	tb1 = '\0';
	if ((EIF_BOOLEAN)(Result == NULL)) {
		tr1 = F1793_20214(Current);
		loc2 = tr1;
		tb1 = EIF_TEST(loc2);
	}
	if (tb1) {
		loc1 = *(EIF_REFERENCE *)(loc2 + _REFACS_3_);
		loc1 = RTRV(eif_new_type(1792, 0x00), loc1);
		RTCT0("parent_item /= Void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		Result = F1793_20215(RTCW(loc1));
		RTLE;
		return (EIF_REFERENCE) Result;
	}
	RTLE;
	return Result;
}

/* {EV_TREE_NODE_I}.parent_tree_i */
EIF_REFERENCE F1793_20216 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,Result);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTGC;
	Result = *(EIF_REFERENCE *)(Current + _REFACS_34_);
	Result = RTRV(eif_new_type(1770, 0x00), Result);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_34_);
	loc1 = tr1;
	loc1 = RTRV(eif_new_type(1792, 0x01),loc1);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(Result == NULL) && EIF_TEST(loc1))) {
		Result = F1793_20216(loc1);
		RTLE;
		return (EIF_REFERENCE) Result;
	}
	RTLE;
	return Result;
}

void EIF_Minit1782 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
