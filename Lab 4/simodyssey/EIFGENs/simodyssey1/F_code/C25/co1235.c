/*
 * Code for class CODE_VALIDITY_CHECKER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "co1235.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {CODE_VALIDITY_CHECKER}.is_day */
EIF_BOOLEAN F326_12832 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = RTMS_EX_H("dd",2,25700);
	Result = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R4754[Dtype(RTCW(arg1))-1560])(arg1, tr1);
	RTLE;
	return Result;
}

/* {CODE_VALIDITY_CHECKER}.is_day0 */
EIF_BOOLEAN F326_12833 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = RTMS_EX_H("[0]dd",5,812125796);
	Result = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R4754[Dtype(RTCW(arg1))-1560])(arg1, tr1);
	RTLE;
	return Result;
}

/* {CODE_VALIDITY_CHECKER}.is_day_text */
EIF_BOOLEAN F326_12834 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = RTMS_EX_H("ddd",3,6579300);
	Result = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R4754[Dtype(RTCW(arg1))-1560])(arg1, tr1);
	RTLE;
	return Result;
}

/* {CODE_VALIDITY_CHECKER}.is_year4 */
EIF_BOOLEAN F326_12835 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = RTMS_EX_H("yyyy",4,2038004089);
	Result = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R4754[Dtype(RTCW(arg1))-1560])(arg1, tr1);
	RTLE;
	return Result;
}

/* {CODE_VALIDITY_CHECKER}.is_year2 */
EIF_BOOLEAN F326_12836 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = RTMS_EX_H("yy",2,31097);
	Result = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R4754[Dtype(RTCW(arg1))-1560])(arg1, tr1);
	RTLE;
	return Result;
}

/* {CODE_VALIDITY_CHECKER}.is_month */
EIF_BOOLEAN F326_12837 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = RTMS_EX_H("mm",2,28013);
	Result = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R4754[Dtype(RTCW(arg1))-1560])(arg1, tr1);
	RTLE;
	return Result;
}

/* {CODE_VALIDITY_CHECKER}.is_month0 */
EIF_BOOLEAN F326_12838 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = RTMS_EX_H("[0]mm",5,812128109);
	Result = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R4754[Dtype(RTCW(arg1))-1560])(arg1, tr1);
	RTLE;
	return Result;
}

/* {CODE_VALIDITY_CHECKER}.is_month_text */
EIF_BOOLEAN F326_12839 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = RTMS_EX_H("mmm",3,7171437);
	Result = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R4754[Dtype(RTCW(arg1))-1560])(arg1, tr1);
	RTLE;
	return Result;
}

/* {CODE_VALIDITY_CHECKER}.is_hour */
EIF_BOOLEAN F326_12840 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = RTMS_EX_H("hh",2,26728);
	Result = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R4754[Dtype(RTCW(arg1))-1560])(arg1, tr1);
	RTLE;
	return Result;
}

/* {CODE_VALIDITY_CHECKER}.is_hour0 */
EIF_BOOLEAN F326_12841 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = RTMS_EX_H("[0]hh",5,812126824);
	Result = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R4754[Dtype(RTCW(arg1))-1560])(arg1, tr1);
	RTLE;
	return Result;
}

/* {CODE_VALIDITY_CHECKER}.is_hour12 */
EIF_BOOLEAN F326_12842 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = RTMS_EX_H("hh12",4,1751658802);
	Result = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R4754[Dtype(RTCW(arg1))-1560])(arg1, tr1);
	RTLE;
	return Result;
}

/* {CODE_VALIDITY_CHECKER}.is_minute */
EIF_BOOLEAN F326_12844 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = RTMS_EX_H("mi",2,28009);
	Result = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R4754[Dtype(RTCW(arg1))-1560])(arg1, tr1);
	RTLE;
	return Result;
}

/* {CODE_VALIDITY_CHECKER}.is_minute0 */
EIF_BOOLEAN F326_12845 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = RTMS_EX_H("[0]mi",5,812128105);
	Result = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R4754[Dtype(RTCW(arg1))-1560])(arg1, tr1);
	RTLE;
	return Result;
}

/* {CODE_VALIDITY_CHECKER}.is_second */
EIF_BOOLEAN F326_12846 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = RTMS_EX_H("ss",2,29555);
	Result = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R4754[Dtype(RTCW(arg1))-1560])(arg1, tr1);
	RTLE;
	return Result;
}

/* {CODE_VALIDITY_CHECKER}.is_second0 */
EIF_BOOLEAN F326_12847 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = RTMS_EX_H("[0]ss",5,812129651);
	Result = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R4754[Dtype(RTCW(arg1))-1560])(arg1, tr1);
	RTLE;
	return Result;
}

/* {CODE_VALIDITY_CHECKER}.is_fractional_second */
EIF_BOOLEAN F326_12848 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTGC;
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
	if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 2L))) {
		Result = '\0';
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4722[Dtype(RTCW(arg1))-1560])(arg1, ((EIF_INTEGER_32) 1L), ((EIF_INTEGER_32) 2L));
		tr2 = RTMS_EX_H("ff",2,26214);
		tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R4754[Dtype(RTCW(tr1))-1560])(tr1, tr2);
		if (tb1) {
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4722[Dtype(RTCW(arg1))-1560])(arg1, ((EIF_INTEGER_32) 3L), ti4_1);
			tb1 = F1558_6541(RTCW(tr1));
			Result = tb1;
		}
	}
	RTLE;
	return Result;
}

/* {CODE_VALIDITY_CHECKER}.is_colon */
EIF_BOOLEAN F326_12849 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = RTMS_EX_H(":",1,58);
	Result = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R4754[Dtype(RTCW(arg1))-1560])(arg1, tr1);
	RTLE;
	return Result;
}

/* {CODE_VALIDITY_CHECKER}.is_slash */
EIF_BOOLEAN F326_12850 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = RTMS_EX_H("/",1,47);
	Result = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R4754[Dtype(RTCW(arg1))-1560])(arg1, tr1);
	RTLE;
	return Result;
}

/* {CODE_VALIDITY_CHECKER}.is_minus */
EIF_BOOLEAN F326_12851 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = RTMS_EX_H("-",1,45);
	Result = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R4754[Dtype(RTCW(arg1))-1560])(arg1, tr1);
	RTLE;
	return Result;
}

/* {CODE_VALIDITY_CHECKER}.is_comma */
EIF_BOOLEAN F326_12852 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = RTMS_EX_H(",",1,44);
	Result = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R4754[Dtype(RTCW(arg1))-1560])(arg1, tr1);
	RTLE;
	return Result;
}

/* {CODE_VALIDITY_CHECKER}.is_space */
EIF_BOOLEAN F326_12853 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = RTMS_EX_H(" ",1,32);
	Result = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R4754[Dtype(RTCW(arg1))-1560])(arg1, tr1);
	RTLE;
	return Result;
}

/* {CODE_VALIDITY_CHECKER}.is_dot */
EIF_BOOLEAN F326_12854 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = RTMS_EX_H(".",1,46);
	Result = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R4754[Dtype(RTCW(arg1))-1560])(arg1, tr1);
	RTLE;
	return Result;
}

/* {CODE_VALIDITY_CHECKER}.is_meridiem */
EIF_BOOLEAN F326_12856 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	loc1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4704[Dtype(RTCW(arg1))-1560])(arg1);
	Result = '\01';
	tr1 = RTMS_EX_H("AM",2,16717);
	tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R4754[Dtype(RTCW(loc1))-1560])(loc1, tr1);
	if (!tb1) {
		tr1 = RTMS_EX_H("PM",2,20557);
		tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R4754[Dtype(RTCW(loc1))-1560])(loc1, tr1);
		Result = tb1;
	}
	RTLE;
	return Result;
}

void EIF_Minit1235 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
