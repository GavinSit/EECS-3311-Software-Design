/*
 * Code for class ES_TEST
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "es1185.h"
#include "eif_out.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {ES_TEST}.add_boolean_case */
void F269_11905 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTCFDT;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,arg1);
	RTLIU(5);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_2_) == NULL)) {
		F269_11923(Current);
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tr1 = RTLNS(eif_new_type(465, 0x01).id, 465, _OBJSIZ_4_2_0_1_0_0_0_0_);
		tr2 = RTMS_EX_H("",0,0);
		F466_13495(RTCW(tr1), tr2, arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2222[Dtype(loc1)-818])(loc1, tr1);
	}
	RTLE;
}

/* {ES_TEST}.setup */
void F269_11908 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {ES_TEST}.teardown */
void F269_11909 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {ES_TEST}.comment */
void F269_11910 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_5_) = (EIF_REFERENCE) arg1;
}

/* {ES_TEST}.failed_cases */
EIF_REFERENCE F269_11918 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCFDT;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,loc2);
	RTLR(3,loc3);
	RTLR(4,tr1);
	RTLR(5,loc4);
	RTLIU(6);
	
	RTGC;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,950,0xFF01,1560,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		loc1 = RTLNS(typres0.id, 950, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	F951_4073(RTCW(loc1), ((EIF_INTEGER_32) 10L));
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,489,1508,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		loc2 = RTLNS(typres0.id, 489, _OBJSIZ_0_0_0_1_0_0_0_0_);
	}
	F490_1934(RTCW(loc2), ((EIF_INTEGER_32) 0L));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	loc3 = tr1;
	if (EIF_TEST(loc3)) {
		loc4 = F912_3522(loc3);
		for (;;) {
			tb1 = F1078_4353(loc4);
			if (tb1) break;
			tr1 = F1078_4352(loc4);
			F269_11919(Current, tr1, loc2);
			tr1 = F1078_4352(loc4);
			tb2 = *(EIF_BOOLEAN *)(RTCW(tr1) + O11161[Dtype(tr1)-463]);
			if ((EIF_BOOLEAN) !tb2) {
				tr1 = F269_11920(Current);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2222[Dtype(RTCW(loc1))-818])(loc1, tr1);
			}
			F1078_4355(loc4);
		}
	}
	RTLE;
	return (EIF_REFERENCE) loc1;
}

/* {ES_TEST}.create_case_name */
void F269_11919 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_CHARACTER_8 tc1;
	RTLD;
	
	RTLI(7);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,arg2);
	RTLR(4,Current);
	RTLR(5,tr2);
	RTLR(6,loc2);
	RTLIU(7);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(RTCW(arg1));
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) ':';
	loc1 = F1558_6588(RTCW(loc1), tw1);
	tb1 = '\01';
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1));
	tc1 = (EIF_CHARACTER_8) ':';
	tb2 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R2209[Dtype(RTCW(tr1))-911])(tr1, (EIF_REFERENCE) &tc1);
	if (!(EIF_BOOLEAN) !tb2) {
		tb2 = F736_2537(RTCW(loc1));
		tb1 = tb2;
	}
	if (tb1) {
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg2) + O1718[Dtype(arg2)-488]);
		F490_1934(RTCW(arg2), (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)));
		tr1 = RTMS_EX_H("unknown_",8,1638607967);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg2) + O1718[Dtype(arg2)-488]);
		tr2 = c_outi(ti4_1);
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(tr1)-1560])(tr1, tr2);
		tr2 = RTMS_EX_H(" -- use \':\' in a `comment\' in the test case",43,240503397);
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	} else {
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2676[Dtype(RTCW(loc1))-911])(loc1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	loc2 = tr1;
	if (EIF_TEST(loc2)) {
		tr1 = RTMS_EX_H(".",1,46);
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(loc2)-1560])(loc2, tr1);
		tr2 = F269_11920(Current);
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	}
	RTLE;
}

/* {ES_TEST}.case_name */
static EIF_REFERENCE F269_11920_body (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Result);
	RTLIU(1);
	
	RTGC;
	Result = RTMS_EX_H("",0,0);
	RTLE;
	return Result;
}

EIF_REFERENCE F269_11920 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	if (!r) {
		GTCX
		RTLD;
		RTLI(1);
		RTLR(0,Current);
		RTLIU(1);
		r = (F269_11920_body (Current));
		*(EIF_REFERENCE *)(Current + _REFACS_1_) = r;
		RTAR(Current, r);
		RTLE;
	}
	return r;
}


/* {ES_TEST}.passed_cases */
EIF_REFERENCE F269_11921 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCFDT;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,loc2);
	RTLR(3,loc3);
	RTLR(4,tr1);
	RTLR(5,loc4);
	RTLIU(6);
	
	RTGC;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,950,0xFF01,1560,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		loc1 = RTLNS(typres0.id, 950, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	F951_4073(RTCW(loc1), ((EIF_INTEGER_32) 10L));
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,489,1508,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		loc2 = RTLNS(typres0.id, 489, _OBJSIZ_0_0_0_1_0_0_0_0_);
	}
	F490_1934(RTCW(loc2), ((EIF_INTEGER_32) 0L));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	loc3 = tr1;
	if (EIF_TEST(loc3)) {
		loc4 = F912_3522(loc3);
		for (;;) {
			tb1 = F1078_4353(loc4);
			if (tb1) break;
			tr1 = F1078_4352(loc4);
			F269_11919(Current, tr1, loc2);
			tr1 = F1078_4352(loc4);
			tb2 = *(EIF_BOOLEAN *)(RTCW(tr1) + O11161[Dtype(tr1)-463]);
			if (tb2) {
				tr1 = F269_11920(Current);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2222[Dtype(RTCW(loc1))-818])(loc1, tr1);
			}
			F1078_4355(loc4);
		}
	}
	RTLE;
	return (EIF_REFERENCE) loc1;
}

/* {ES_TEST}.initialize */
void F269_11923 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTCFDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	{
		static EIF_TYPE_INDEX typarr0[] = {911,0xFF01,463,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSMART(typres0.id);
	}
	F912_3515(RTCW(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
	tr1 = F1423_5288(RTCV(F1_5(Current)));
	tr1 = F1558_6566(RTCW(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {911,0xFF01,1560,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSMART(typres0.id);
	}
	F912_3515(RTCW(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_4_) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {ES_TEST}.to_html */
void F269_11924 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTGC;
	loc1 = RTLNS(eif_new_type(267, 0x01).id, 267, _OBJSIZ_3_2_0_2_0_0_0_0_);
	F268_11894(RTCW(loc1), Current);
	F268_11902(RTCW(loc1), *(EIF_BOOLEAN *)(Current+ _CHROFF_7_0_), *(EIF_BOOLEAN *)(Current+ _CHROFF_7_1_), *(EIF_REFERENCE *)(Current + _REFACS_3_));
	F268_11896(RTCW(loc1), arg1);
	RTLE;
}

/* {ES_TEST}.get_test_name */
EIF_REFERENCE F269_11925 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLIU(4);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_3_) != NULL)) {
		RTCT0("attached name as n", EX_CHECK);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
		loc1 = tr1;
		if (EIF_TEST(loc1)) {
			RTCK0;
		} else {
			RTCF0;
		}
		Result = (EIF_REFERENCE) loc1;
	} else {
		Result = RTMS_EX_H("default_name",12,1867562853);
	}
	RTLE;
	return Result;
}

/* {ES_TEST}.run_es_test */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
void F269_11926 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTED;
	EIF_BOOLEAN EIF_VOLATILE loc1 = (EIF_BOOLEAN) 0;
	EIF_INTEGER_32 EIF_VOLATILE loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE EIF_VOLATILE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE saved_except = (EIF_REFERENCE) 0;
	RTS_SDX;
	EIF_REFERENCE  EIF_VOLATILE tr1 = NULL;
	EIF_REFERENCE  EIF_VOLATILE tr2 = NULL;
	EIF_BOOLEAN  EIF_VOLATILE tb1;
	EIF_BOOLEAN  EIF_VOLATILE tb2;
	RTCFDT;
	RTLD;
	RTXD;
	
	RTLI(12);
	RTLR(0,loc3);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc4);
	RTLR(4,loc5);
	RTLR(5,loc6);
	RTLR(6,tr2);
	RTLR(7,loc7);
	RTLR(8,loc8);
	RTLR(9,loc9);
	RTLR(10,loc10);
	RTLR(11,saved_except);
	RTLIU(12);
	RTXSLS;
	
	RTEV;
	RTGC;
	RTE_T
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	loc3 = tr1;
	if (EIF_TEST(loc3)) {
		if ((EIF_BOOLEAN) !loc1) {
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_2_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_2_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
			RTCT0("attached get_test_name as test_name", EX_CHECK);
			tr1 = F269_11925(Current);
			loc4 = tr1;
			if ((EIF_TRUE)) {
				RTCK0;
			} else {
				RTCF0;
			}
			tr1 = RTMS_EX_H("\012",1,10);
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(loc4)-1560])(loc4, tr1);
			F267_11883(Current, tr1);
		} else {
			tr1 = RTMS_EX_H("***FAILED                   Problem in \'setup\' or \'teardown\' features\012",70,1066083338);
			F267_11883(Current, tr1);
			if (*(EIF_BOOLEAN *)(Current+ _CHROFF_7_0_)) {
				RTCT0("attached cases1.item as item1", EX_CHECK);
				tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2258[Dtype(loc3)-818])(loc3);
				loc5 = tr1;
				if ((EIF_TRUE)) {
					RTCK0;
				} else {
					RTCF0;
				}
				RTCT0("attached item1.exception_trace as et", EX_CHECK);
				tr1 = F463_1393(loc5);
				loc6 = tr1;
				if (EIF_TEST(loc6)) {
					RTCK0;
				} else {
					RTCF0;
				}
				tr1 = RTMS_EX_H("\012",1,10);
				tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(tr1)-1560])(tr1, loc6);
				tr2 = RTMS_EX_H("\012",1,10);
				tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
				F267_11883(Current, tr1);
			}
		}
		if ((EIF_BOOLEAN) !loc1) {
			F912_3534(loc3);
		} else {
			tb1 = F852_3271(loc3, loc2);
			if (tb1) {
				F912_3539(loc3, loc2);
			}
		}
		for (;;) {
			tb1 = *(EIF_BOOLEAN *)(loc3+ _CHROFF_2_2_);
			if (tb1) break;
			tr1 = RTMS_EX_H("no comment",10,1397724276);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + _REFACS_5_) = (EIF_REFERENCE) tr1;
			{
				/* INLINED CODE (ES_TEST.setup) */
				/* END INLINED CODE */
			}
			;
			RTCT0("attached cases1.item as item1", EX_CHECK);
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2258[Dtype(loc3)-818])(loc3);
			loc7 = tr1;
			if ((EIF_TRUE)) {
				RTCK0;
			} else {
				RTCF0;
			}
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R11157[Dtype(loc7)-464])(loc7);
			{
				/* INLINED CODE (ES_TEST.teardown) */
				/* END INLINED CODE */
			}
			;
			RTCT0("attached class_variable_comment_string as cvc", EX_CHECK);
			tr1 = F269_11931(Current);
			loc8 = tr1;
			if ((EIF_TRUE)) {
				RTCK0;
			} else {
				RTCF0;
			}
			F464_13482(loc7, loc8);
			RTCT0("attached to_message_string (item1) as ms", EX_CHECK);
			tr1 = F269_11927(Current, loc7);
			loc9 = tr1;
			if ((EIF_TRUE)) {
				RTCK0;
			} else {
				RTCF0;
			}
			tr1 = RTMS_EX_H("\012",1,10);
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(loc9)-1560])(loc9, tr1);
			F267_11883(Current, tr1);
			(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_2_0_0_))++;
			tb2 = *(EIF_BOOLEAN *)(loc7 + O11161[Dtype(loc7)-463]);
			if (tb2) {
				(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_2_0_1_))++;
			}
			F912_3536(loc3);
		}
	}
	tr1 = F267_11885(Current);
	F269_11924(Current, tr1);
	F267_11884(Current);
	RTE_E
	RTXSC;
	RTS_SRR
	RTCT0("attached cases as cases1", EX_CHECK);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	loc10 = tr1;
	if (EIF_TEST(loc10)) {
		RTCK0;
	} else {
		RTCF0;
	}
	loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	F912_3536(loc10);
	loc2 = F912_3520(loc10);
	RTER;
	/* NOTREACHED */
	RTE_EE
	RTEOK;
	RTLE;
}
#undef EIF_VOLATILE
#define EIF_VOLATILE

/* {ES_TEST}.to_message_string */
EIF_REFERENCE F269_11927 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTLD;
	
	RTLI(9);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLR(4,arg1);
	RTLR(5,loc2);
	RTLR(6,loc3);
	RTLR(7,tr2);
	RTLR(8,loc4);
	RTLIU(9);
	
	RTGC;
	RTCT0("attached cases as cases1", EX_CHECK);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		RTCK0;
	} else {
		RTCF0;
	}
	Result = RTLNS(eif_new_type(1560, 0x01).id, 1560, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F1558_6510(RTCW(Result));
	tb1 = *(EIF_BOOLEAN *)(RTCW(arg1) + O11161[Dtype(arg1)-463]);
	if (tb1) {
		tr1 = RTMS_EX_H("   PASSED   ",12,1581627680);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4823[Dtype(RTCW(Result))-1560])(Result, tr1);
	} else {
		tr1 = RTMS_EX_H("***FAILED   ",12,1495194912);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4823[Dtype(RTCW(Result))-1560])(Result, tr1);
	}
	RTCT0("attached cases1.item as item1", EX_CHECK);
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2258[Dtype(loc1)-818])(loc1);
	loc2 = tr1;
	if ((EIF_TRUE)) {
		RTCK0;
	} else {
		RTCF0;
	}
	tb1 = *(EIF_BOOLEAN *)(RTCW(arg1) + O11162[Dtype(arg1)-463]);
	if (tb1) {
		RTCT0("attached item1.meaning (item1.violation_type) as meaning", EX_CHECK);
		ti4_1 = *(EIF_INTEGER_32 *)(loc2 + O11166[Dtype(loc2)-463]);
		tr1 = F463_1382(loc2, ti4_1);
		loc3 = tr1;
		if (EIF_TEST(loc3)) {
			RTCK0;
		} else {
			RTCF0;
		}
		tr1 = RTMS_EX_H("VIOL      ",10,1707224096);
		tr2 = RTMS_EX_H("#",1,35);
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(tr1)-1560])(tr1, tr2);
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, loc3);
		tr2 = RTMS_EX_H("#",1,35);
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4823[Dtype(RTCW(Result))-1560])(Result, tr1);
	} else {
		tr1 = RTMS_EX_H("NO VIOL   ",10,923096864);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4823[Dtype(RTCW(Result))-1560])(Result, tr1);
	}
	tr1 = *(EIF_REFERENCE *)(loc2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4823[Dtype(RTCW(Result))-1560])(Result, tr1);
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_7_0_)) {
		RTCT0("attached item1.violation_tag as tag", EX_CHECK);
		tr1 = *(EIF_REFERENCE *)(loc2 + _REFACS_2_);
		loc4 = tr1;
		if ((EIF_TRUE)) {
			RTCK0;
		} else {
			RTCF0;
		}
		tr1 = RTMS_EX_H("\012",1,10);
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(tr1)-1560])(tr1, loc4);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4823[Dtype(RTCW(Result))-1560])(Result, tr1);
	}
	RTLE;
	return Result;
}

/* {ES_TEST}.class_variable_comment_string */
static EIF_REFERENCE F269_11931_body (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Result);
	RTLIU(1);
	
	RTGC;
	Result = RTMS_EX_H("",0,0);
	RTLE;
	return Result;
}

EIF_REFERENCE F269_11931 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + _REFACS_5_);
	if (!r) {
		GTCX
		RTLD;
		RTLI(1);
		RTLR(0,Current);
		RTLIU(1);
		r = (F269_11931_body (Current));
		*(EIF_REFERENCE *)(Current + _REFACS_5_) = r;
		RTAR(Current, r);
		RTLE;
	}
	return r;
}


void EIF_Minit1185 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
