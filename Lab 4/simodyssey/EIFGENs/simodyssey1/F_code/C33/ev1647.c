/*
 * Code for class EV_PIXMAP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1647.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_PIXMAP}.is_equal */
EIF_BOOLEAN F1653_18626 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		ti4_1 = F1614_18068(Current);
		ti4_2 = F1614_18069(RTCW(arg1));
		ti4_3 = F1614_18068(RTCW(arg1));
		ti4_4 = F1614_18069(Current);
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN)((EIF_INTEGER_32) (ti4_1 * ti4_2) == (EIF_INTEGER_32) (ti4_3 * ti4_4));
	}
	RTLE;
	return Result;
}

/* {EV_PIXMAP}.set_size */
void F1653_18636 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R17007[Dtype(RTCW(tr1))-1871])(tr1, arg1, arg2);
	RTLE;
}

/* {EV_PIXMAP}.stretch */
void F1653_18638 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R17009[Dtype(RTCW(tr1))-1871])(tr1, arg1, arg2);
	RTLE;
}

/* {EV_PIXMAP}.copy */
void F1653_18642 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_3_) == NULL)) {
		F1596_17742(Current);
	}
	tb1 = F1596_17746(RTCW(arg1));
	if ((EIF_BOOLEAN) !tb1) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R17017[Dtype(RTCW(tr1))-1871])(tr1, arg1);
	} else {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
		tr2 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_3_);
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16937[Dtype(RTCW(tr2))-1871])(tr2);
		tr2 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_3_);
		ti4_2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16938[Dtype(RTCW(tr2))-1871])(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R17007[Dtype(RTCW(tr1))-1871])(tr1, ti4_1, ti4_2);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R15889[Dtype(RTCW(tr1))-1697])(tr1);
	}
	RTLE;
}

/* {EV_PIXMAP}.implementation */
EIF_REFERENCE F1653_18643 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_3_);
}


/* {EV_PIXMAP}.create_implementation */
void F1653_18644 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(1871, 0x01).id, 1871, _OBJSIZ_42_12_6_4_0_0_0_0_);
	F1872_21252(RTCW(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	RTLE;
}

void EIF_Minit1647 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
