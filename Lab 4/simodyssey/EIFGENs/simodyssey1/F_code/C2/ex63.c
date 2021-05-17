/*
 * Code for class EXCEPTIONS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ex63.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EXCEPTIONS}.meaning */
EIF_REFERENCE F463_1382 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLIU(4);
	
	RTGC;
	tr1 = RTOUCR(11,F423_1381, (Current));
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R1144[Dtype(RTCW(tr1))-378])(tr1, arg1);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		Result = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R1309[Dtype(loc1)-423])(loc1);
		Result = F1558_6566(RTCW(Result));
	}
	RTLE;
	return Result;
}

/* {EXCEPTIONS}.is_signal */
EIF_BOOLEAN F463_1387 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLIU(4);
	
	RTGC;
	Result = '\0';
	tr1 = RTOUCR(11,F423_1381, (Current));
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R1134[Dtype(RTCW(tr1))-378])(tr1);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tr1 = F424_1425(loc1);
		loc2 = tr1;
		loc2 = RTRV(eif_new_type(431, 0x01),loc2);
		Result = EIF_TEST(loc2);
	}
	RTLE;
	return Result;
}

/* {EXCEPTIONS}.tag_name */
EIF_REFERENCE F463_1389 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLIU(4);
	
	RTGC;
	tb1 = '\0';
	tr1 = RTOUCR(11,F423_1381, (Current));
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R1134[Dtype(RTCW(tr1))-378])(tr1);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tr1 = F424_1421(loc1);
		loc2 = tr1;
		tb1 = EIF_TEST(loc2);
	}
	if (tb1) {
		tr1 = F1558_6566(loc2);
		RTLE;
		return (EIF_REFERENCE) tr1;
	}
	RTLE;
	return (EIF_REFERENCE) 0;
}

/* {EXCEPTIONS}.exception */
EIF_INTEGER_32 F463_1392 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	tr1 = RTOUCR(11,F423_1381, (Current));
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R1134[Dtype(RTCW(tr1))-378])(tr1);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R1314[Dtype(loc1)-423])(loc1);
		RTLE;
		return (EIF_INTEGER_32) ti4_1;
	}
	RTLE;
	return (EIF_INTEGER_32) 0;
}

/* {EXCEPTIONS}.exception_trace */
EIF_REFERENCE F463_1393 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLIU(4);
	
	RTGC;
	tb1 = '\0';
	tr1 = RTOUCR(11,F423_1381, (Current));
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R1134[Dtype(RTCW(tr1))-378])(tr1);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tr1 = F424_1425(loc1);
		tr1 = F424_1423(RTCW(tr1));
		loc2 = tr1;
		tb1 = EIF_TEST(loc2);
	}
	if (tb1) {
		tr1 = F1558_6566(loc2);
		RTLE;
		return (EIF_REFERENCE) tr1;
	}
	RTLE;
	return (EIF_REFERENCE) 0;
}

/* {EXCEPTIONS}.raise */
void F463_1400 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	loc1 = RTLNS(eif_new_type(424, 0x01).id, 424, _OBJSIZ_5_1_0_1_0_0_0_0_);
	F424_1432(RTCW(loc1), arg1);
	F424_1417(RTCW(loc1));
	RTLE;
}

/* {EXCEPTIONS}.raise_retrieval_exception */
void F463_1401 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,arg1);
	RTLIU(4);
	
	RTGC;
	tr1 = RTOUCR(11,F423_1381, (Current));
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R1144[Dtype(RTCW(tr1))-378])(tr1, ((EIF_INTEGER_32) 31L));
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		F424_1432(loc1, arg1);
		F424_1417(loc1);
	}
	RTLE;
}

void EIF_Minit63 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
