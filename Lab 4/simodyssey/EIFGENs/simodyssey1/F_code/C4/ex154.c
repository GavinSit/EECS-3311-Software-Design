/*
 * Code for class EXECUTION_ENVIRONMENT
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ex154.h"
#include <stdlib.h>
#include "eif_misc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F943_3788
static EIF_POINTER inline_F943_3788 (EIF_POINTER arg1)
{
	#ifdef EIF_WINDOWS
	return _wgetenv ((EIF_NATIVE_CHAR *) arg1);
#else
	return getenv ((EIF_NATIVE_CHAR *) arg1);
#endif
	;
}
#define INLINE_F943_3788
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EXECUTION_ENVIRONMENT}.default_shell */
static EIF_REFERENCE F943_3764_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(28)

	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTMS_EX_H("SHELL",5,1213138508);
	tr1 = F943_3766(Current, tr1);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		Result = (EIF_REFERENCE) loc1;
	} else {
		tr1 = RTLNS(eif_new_type(1564, 0x01).id, 1564, _OBJSIZ_1_1_0_3_0_0_0_0_);
		F1558_6510(RTCW(tr1));
		Result = (EIF_REFERENCE) tr1;
	}
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F943_3764 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(28,F943_3764_body,(Current));
}

/* {EXECUTION_ENVIRONMENT}.item */
EIF_REFERENCE F943_3766 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLIU(4);
	
	RTGC;
	loc1 = RTLNS(eif_new_type(943, 0x01).id, 943, _OBJSIZ_1_0_0_1_0_0_0_0_);
	F944_3738(RTCW(loc1), arg1);
	tp1 = F944_3745(RTCW(loc1));
	loc2 = inline_F943_3788(tp1);
	tb1 = !loc2;
	if ((EIF_BOOLEAN) !tb1) {
		tr1 = RTLNS(eif_new_type(943, 0x01).id, 943, _OBJSIZ_1_0_0_1_0_0_0_0_);
		F944_3740(RTCW(tr1), loc2);
		Result = F944_3743(RTCW(tr1));
	}
	RTLE;
	return Result;
}

/* {EXECUTION_ENVIRONMENT}.launch */
void F943_3781 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTGC;
	tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4659[Dtype(RTCW(arg1))-1560])(arg1);
	if (tb1) {
		loc1 = RTLNS(eif_new_type(943, 0x01).id, 943, _OBJSIZ_1_0_0_1_0_0_0_0_);
		tr1 = RTOUCR(28,F943_3764, (Current));
		F944_3738(RTCW(loc1), tr1);
	} else {
		loc1 = RTLNS(eif_new_type(943, 0x01).id, 943, _OBJSIZ_1_0_0_1_0_0_0_0_);
		F944_3738(RTCW(loc1), arg1);
	}
	tp1 = F944_3745(RTCW(loc1));
	F943_3792(Current, tp1);
	RTLE;
}

/* {EXECUTION_ENVIRONMENT}.eif_getenv */
EIF_POINTER F943_3788 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = inline_F943_3788 ((EIF_POINTER) arg1);
	return Result;
}

/* {EXECUTION_ENVIRONMENT}.asynchronous_system_call */
void F943_3792 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	
	EIF_ENTER_C;eif_system_asynchronous(arg1);
	
	EIF_EXIT_C;
	RTGC;
}

void EIF_Minit154 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
