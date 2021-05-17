/*
 * Code for class EV_CHARACTER_FORMAT
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1594.h"
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

/* {EV_CHARACTER_FORMAT}.font */
EIF_REFERENCE F1599_17802 (EIF_REFERENCE Current)
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
	Result = F1889_21860(RTCW(tr1));
	RTLE;
	return Result;
}

/* {EV_CHARACTER_FORMAT}.color */
EIF_REFERENCE F1599_17803 (EIF_REFERENCE Current)
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
	Result = F1889_21858(RTCW(tr1));
	RTLE;
	return Result;
}

/* {EV_CHARACTER_FORMAT}.effects */
EIF_REFERENCE F1599_17804 (EIF_REFERENCE Current)
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
	Result = F1889_21861(RTCW(tr1));
	RTLE;
	return Result;
}

/* {EV_CHARACTER_FORMAT}.background_color */
EIF_REFERENCE F1599_17805 (EIF_REFERENCE Current)
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
	Result = F1889_21859(RTCW(tr1));
	RTLE;
	return Result;
}

/* {EV_CHARACTER_FORMAT}.is_equal */
EIF_BOOLEAN F1599_17810 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTGC;
	Result = '\0';
	tb1 = '\0';
	tb2 = '\0';
	tr1 = F1599_17803(RTCW(arg1));
	tr2 = F1599_17803(Current);
	tb3 = F1603_17919(RTCW(tr1), tr2);
	if (tb3) {
		tr1 = F1599_17805(RTCW(arg1));
		tr2 = F1599_17805(Current);
		tb3 = F1603_17919(RTCW(tr1), tr2);
		tb2 = tb3;
	}
	if (tb2) {
		tr1 = F1599_17802(RTCW(arg1));
		tr2 = F1599_17802(Current);
		tb2 = F1602_17882(RTCW(tr1), tr2);
		tb1 = tb2;
	}
	if (tb1) {
		tr1 = F1599_17804(RTCW(arg1));
		tr2 = F1599_17804(Current);
		tb1 = (EIF_BOOLEAN) eif_builtin_ANY_is_equal (tr1, tr2);
		Result = tb1;
	}
	RTLE;
	return Result;
}

/* {EV_CHARACTER_FORMAT}.out */
EIF_REFERENCE F1599_17811 (EIF_REFERENCE Current)
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
	Result = F1702_19085(RTCW(tr1));
	RTLE;
	return Result;
}

/* {EV_CHARACTER_FORMAT}.copy */
void F1599_17813 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) == NULL)) {
		F1596_17742(Current);
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr2 = F1599_17803(RTCW(arg1));
	F1889_21863(RTCW(tr1), tr2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr2 = F1599_17805(RTCW(arg1));
	F1889_21864(RTCW(tr1), tr2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr2 = F1599_17802(RTCW(arg1));
	F1889_21862(RTCW(tr1), tr2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr2 = F1599_17804(RTCW(arg1));
	F1889_21865(RTCW(tr1), tr2);
	RTLE;
}

/* {EV_CHARACTER_FORMAT}.create_interface_objects */
void F1599_17818 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {EV_CHARACTER_FORMAT}.create_implementation */
void F1599_17819 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(1888, 0x01).id, 1888, _OBJSIZ_1_2_0_1_0_1_0_0_);
	F1889_21857(RTCW(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	RTLE;
}

void EIF_Minit1594 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
