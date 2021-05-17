/*
 * Code for class EV_WIDGET
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1626.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_WIDGET}.parent */
EIF_REFERENCE F1632_18299 (EIF_REFERENCE Current)
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
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	Result = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R16555[Dtype(RTCW(tr1))-1871])(tr1);
	RTLE;
	return Result;
}

/* {EV_WIDGET}.pointer_style */
EIF_REFERENCE F1632_18301 (EIF_REFERENCE Current)
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
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	Result = F1752_19789(RTCW(tr1));
	RTLE;
	return Result;
}

/* {EV_WIDGET}.real_target */
EIF_REFERENCE F1632_18303 (EIF_REFERENCE Current)
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
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	Result = *(EIF_REFERENCE *)(RTCW(tr1) + O16560[Dtype(tr1)-1751]);
	RTLE;
	return Result;
}

/* {EV_WIDGET}.is_show_requested */
EIF_BOOLEAN F1632_18307 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	Result = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R16562[Dtype(RTCW(tr1))-1871])(tr1);
	RTLE;
	return Result;
}

/* {EV_WIDGET}.is_displayed */
EIF_BOOLEAN F1632_18308 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	Result = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R16563[Dtype(RTCW(tr1))-1871])(tr1);
	RTLE;
	return Result;
}

/* {EV_WIDGET}.has_focus */
EIF_BOOLEAN F1632_18309 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	Result = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R16564[Dtype(RTCW(tr1))-1871])(tr1);
	RTLE;
	return Result;
}

/* {EV_WIDGET}.hide */
void F1632_18311 (EIF_REFERENCE Current)
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
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R16566[Dtype(RTCW(tr1))-1871])(tr1);
	RTLE;
}

/* {EV_WIDGET}.show */
void F1632_18312 (EIF_REFERENCE Current)
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
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R16567[Dtype(RTCW(tr1))-1871])(tr1);
	RTLE;
}

/* {EV_WIDGET}.set_focus */
void F1632_18313 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	if (F1632_18308(Current)) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R16568[Dtype(RTCW(tr1))-1871])(tr1);
	}
	RTLE;
}

/* {EV_WIDGET}.enable_capture */
void F1632_18314 (EIF_REFERENCE Current)
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
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R16550[Dtype(RTCW(tr1))-1871])(tr1);
	RTLE;
}

/* {EV_WIDGET}.disable_capture */
void F1632_18315 (EIF_REFERENCE Current)
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
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R16551[Dtype(RTCW(tr1))-1871])(tr1);
	RTLE;
}

/* {EV_WIDGET}.set_pointer_style */
void F1632_18322 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R16548[Dtype(RTCW(tr1))-1871])(tr1, arg1);
	RTLE;
}

/* {EV_WIDGET}.set_minimum_width */
void F1632_18323 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R16574[Dtype(RTCW(tr1))-1871])(tr1, arg1);
	*(EIF_BOOLEAN *)(Current + O15438[Dtype(Current)-1631]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTLE;
}

/* {EV_WIDGET}.set_minimum_height */
void F1632_18324 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R16575[Dtype(RTCW(tr1))-1871])(tr1, arg1);
	*(EIF_BOOLEAN *)(Current + O15439[Dtype(Current)-1631]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTLE;
}

/* {EV_WIDGET}.set_minimum_size */
void F1632_18325 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
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
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R16576[Dtype(RTCW(tr1))-1871])(tr1, arg1, arg2);
	*(EIF_BOOLEAN *)(Current + O15439[dtype-1631]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	*(EIF_BOOLEAN *)(Current + O15438[dtype-1631]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTLE;
}

void EIF_Minit1626 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
