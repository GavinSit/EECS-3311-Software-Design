/*
 * Code for class EXCEPTION
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ex65.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EXCEPTION}.raise */
void F424_1417 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = RTOUCR(11,F423_1381, (Current));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R1135[Dtype(RTCW(tr1))-378])(tr1, Current);
	RTLE;
}

/* {EXCEPTION}.tag */
static EIF_REFERENCE F424_1419_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(12)

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,tr2);
	RTLIU(2);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(eif_new_type(1567, 0x01).id, 1567, _OBJSIZ_1_0_0_4_0_0_0_0_);
	tr2 = RTMS_EX_H("General exception",17,1068931182);
	F1568_7010(RTCW(tr1), tr2);
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F424_1419 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(12,F424_1419_body,(Current));
}

/* {EXCEPTION}.description */
EIF_REFERENCE F424_1421 (EIF_REFERENCE Current)
{
	GTCX
	struct eif_ex_22 sloc1;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) sloc1.data;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	memset (&sloc1.overhead, 0, OVERHEAD + _OBJSIZ_0_0_0_0_0_0_0_0_);
	sloc1.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc1.overhead, eif_new_type(130, 0x00).id);
	RTLI(5);
	RTLR(0,loc3);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLR(4,loc1);
	RTLIU(5);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	loc3 = tr1;
	if (EIF_TEST(loc3)) {
		loc2 = RTLNS(eif_new_type(1564, 0x01).id, 1564, _OBJSIZ_1_1_0_3_0_0_0_0_);
		ti4_1 = *(EIF_INTEGER_32 *)(loc3+ _LNGOFF_1_0_0_0_);
		F1564_6847(RTCW(loc2), ti4_1);
		tr1 = *(EIF_REFERENCE *)(loc3);
		ti4_1 = *(EIF_INTEGER_32 *)(loc3+ _LNGOFF_1_0_0_0_);
		F131_648(RTCW(loc1), tr1, ((EIF_INTEGER_32) 0L), (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L)), (EIF_BOOLEAN) 0, loc2);
		RTLE;
		return (EIF_REFERENCE) loc2;
	}
	RTLE;
	return (EIF_REFERENCE) 0;
}

/* {EXCEPTION}.trace */
EIF_REFERENCE F424_1423 (EIF_REFERENCE Current)
{
	GTCX
	struct eif_ex_22 sloc1;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) sloc1.data;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	memset (&sloc1.overhead, 0, OVERHEAD + _OBJSIZ_0_0_0_0_0_0_0_0_);
	sloc1.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc1.overhead, eif_new_type(130, 0x00).id);
	RTLI(4);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLIU(4);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	loc2 = tr1;
	if (EIF_TEST(loc2)) {
		tr1 = F131_649(RTCW(loc1), loc2);
		RTLE;
		return (EIF_REFERENCE) tr1;
	}
	RTLE;
	return (EIF_REFERENCE) 0;
}

/* {EXCEPTION}.code */
EIF_INTEGER_32 F424_1424 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_INTEGER_32) 0;
}

/* {EXCEPTION}.original */
EIF_REFERENCE F424_1425 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,loc2);
	RTLR(3,loc3);
	RTLR(4,tr1);
	RTLIU(5);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc1 == Current) || (EIF_BOOLEAN)(loc1 == NULL))) {
		RTLE;
		return (EIF_REFERENCE) Current;
	} else {
		loc2 = Current;
		loc2 = RTRV(eif_new_type(450, 0x01),loc2);
		loc3 = Current;
		loc3 = RTRV(eif_new_type(438, 0x01),loc3);
		if ((EIF_BOOLEAN) ((EIF_TEST(loc2)) || (EIF_TEST(loc3)))) {
			tr1 = F424_1425(RTCW(loc1));
			RTLE;
			return (EIF_REFERENCE) tr1;
		} else {
			RTLE;
			return (EIF_REFERENCE) Current;
		}
	}/* NOTREACHED */
	
}

/* {EXCEPTION}.set_description */
void F424_1432 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	struct eif_ex_22 sloc1;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) sloc1.data;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	memset (&sloc1.overhead, 0, OVERHEAD + _OBJSIZ_0_0_0_0_0_0_0_0_);
	sloc1.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc1.overhead, eif_new_type(130, 0x00).id);
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,loc3);
	RTLR(2,loc2);
	RTLR(3,Current);
	RTLR(4,loc1);
	RTLR(5,tr1);
	RTLIU(6);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		loc3 = RTLNSMART(eif_new_type(547, 0).id);
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4681[Dtype(RTCW(arg1))-1560])(arg1);
		F548_1895(RTCW(loc3), ti4_1);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,489,1508,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			loc2 = RTLNS(typres0.id, 489, _OBJSIZ_0_0_0_1_0_0_0_0_);
		}
		F490_1934(RTCW(loc2), ((EIF_INTEGER_32) 0L));
		tr1 = *(EIF_REFERENCE *)(RTCW(loc3));
		F131_642(RTCW(loc1), arg1, tr1, ((EIF_INTEGER_32) 0L), loc2);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc2) + O1718[Dtype(loc2)-488]);
		F548_1921(RTCW(loc3), ti4_1);
		RTAR(Current, loc3);
		*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) loc3;
	} else {
		*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) NULL;
	}
	RTLE;
}

/* {EXCEPTION}.is_ignored */
EIF_BOOLEAN F424_1435 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTGC;
	tr1 = RTOUCR(11,F423_1381, (Current));
	tr2 = F1_5(Current);
	Result = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R1141[Dtype(RTCW(tr1))-378])(tr1, tr2);
	RTLE;
	return Result;
}

/* {EXCEPTION}.out */
EIF_REFERENCE F424_1437 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,loc1);
	RTLIU(4);
	
	RTGC;
	tr1 = F1423_5288(RTCV(F1_5(Current)));
	Result = F1558_6566(RTCW(tr1));
	loc1 = F424_1423(Current);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R4825[Dtype(RTCW(Result))-1560])(Result, (EIF_CHARACTER_8) '\012');
		tr1 = F1558_6566(RTCW(loc1));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4823[Dtype(RTCW(Result))-1560])(Result, tr1);
	}
	RTLE;
	return Result;
}

/* {EXCEPTION}.set_throwing_exception */
void F424_1439 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) arg1;
}

/* {EXCEPTION}.set_recipient_name */
void F424_1440 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
}

/* {EXCEPTION}.set_type_name */
void F424_1444 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) arg1;
}

/* {EXCEPTION}.set_exception_trace */
void F424_1446 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_4_) = (EIF_REFERENCE) arg1;
}

void EIF_Minit65 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
