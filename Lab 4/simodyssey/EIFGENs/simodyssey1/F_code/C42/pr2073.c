/*
 * Code for class PROXY_COMPARABLE [G#1]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "pr2073.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {PROXY_COMPARABLE}.make */
void F486_1569 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
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
	tr1 = RTCCL(arg1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTAR(Current, arg2);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) arg2;
	RTLE;
}

/* {PROXY_COMPARABLE}.item */
EIF_REFERENCE F486_1570 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {PROXY_COMPARABLE}.is_less */
EIF_BOOLEAN F486_1572 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(7);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,arg1);
	RTLR(5,tr4);
	RTLR(6,tr5);
	RTLIU(7);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr2 = *(EIF_REFERENCE *)(Current);
	tr3 = RTCCL(tr2);
	tr4 = *(EIF_REFERENCE *)(RTCW(arg1));
	tr5 = RTCCL(tr4);
	tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_POINTER, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) *(EIF_POINTER *)(RTCW(tr1)+ _PTROFF_4_3_0_3_0_0_))(
		*(EIF_POINTER *)(RTCW(tr1)+ _PTROFF_4_3_0_3_0_1_),
		*(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_1_), tr3, tr5);
	Result = tb1;
	RTLE;
	return Result;
}

void EIF_Minit2073 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
