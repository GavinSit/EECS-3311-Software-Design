/*
 * Code for class ES_SUITE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "es1184.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {ES_SUITE}.add_test */
void F268_11894 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,arg1);
	RTLIU(4);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current + O9671[dtype-267]);
	if ((EIF_BOOLEAN) !(EIF_BOOLEAN)(loc1 != NULL)) {
		{
			static EIF_TYPE_INDEX typarr0[] = {911,0xFF01,268,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			loc1 = RTLNSMART(typres0.id);
		}
		F912_3515(RTCW(loc1));
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current + O9671[dtype-267]) = (EIF_REFERENCE) loc1;
		tr1 = F1423_5288(RTCV(F1_5(Current)));
		tr1 = F1_14(tr1);
		tr1 = F1558_6566(RTCW(tr1));
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + O9670[dtype-267]) = (EIF_REFERENCE) tr1;
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2222[Dtype(RTCW(loc1))-818])(loc1, arg1);
	RTLE;
}

/* {ES_SUITE}.to_html */
void F268_11896 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTCFDT;
	RTCDT;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc3);
	RTLR(4,loc1);
	RTLR(5,arg1);
	RTLIU(6);
	
	RTGC;
	RTCT0("attached classes as cl", EX_CHECK);
	tr1 = *(EIF_REFERENCE *)(Current + O9671[dtype-267]);
	loc2 = tr1;
	if (EIF_TEST(loc2)) {
		RTCK0;
	} else {
		RTCF0;
	}
	RTCT0("attached name as n", EX_CHECK);
	tr1 = *(EIF_REFERENCE *)(Current + O9670[dtype-267]);
	loc3 = tr1;
	if (EIF_TEST(loc3)) {
		RTCK0;
	} else {
		RTCF0;
	}
	loc1 = RTLNS(eif_new_type(263, 0x01).id, 263, _OBJSIZ_4_1_0_6_0_0_0_0_);
	F264_11865(RTCW(loc1), loc3, arg1, loc2, *(EIF_BOOLEAN *)(Current + O9662[dtype-266]));
	RTLE;
}

/* {ES_SUITE}.run_es_test */
void F268_11897 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCFDT;
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLIU(4);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O9671[dtype-267]);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		*(EIF_INTEGER_32 *)(Current + O9660[dtype-266]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		*(EIF_INTEGER_32 *)(Current + O9661[dtype-266]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		F912_3534(loc1);
		for (;;) {
			tb1 = *(EIF_BOOLEAN *)(loc1+ _CHROFF_2_2_);
			if (tb1) break;
			RTCT0("attached classes1.item as item1", EX_CHECK);
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2258[Dtype(loc1)-818])(loc1);
			loc2 = tr1;
			if ((EIF_TRUE)) {
				RTCK0;
			} else {
				RTCF0;
			}
			if (*(EIF_BOOLEAN *)(Current + O9662[dtype-266])) {
				F267_11879(loc2, *(EIF_BOOLEAN *)(Current + O9662[dtype-266]));
			}
			F269_11926(loc2);
			ti4_1 = *(EIF_INTEGER_32 *)(loc2+ _LNGOFF_7_2_0_0_);
			(*(EIF_INTEGER_32 *)(Current + O9660[dtype-266])) += ti4_1;
			ti4_1 = *(EIF_INTEGER_32 *)(loc2+ _LNGOFF_7_2_0_1_);
			(*(EIF_INTEGER_32 *)(Current + O9661[dtype-266])) += ti4_1;
			F912_3536(loc1);
		}
		tr1 = F267_11885(Current);
		F268_11896(Current, tr1);
		F267_11884(Current);
	} else {
		tr1 = RTMS_EX_H("Error: No test cases added\012",27,953342730);
		F267_11882(Current, tr1);
	}
	RTLE;
}

/* {ES_SUITE}.passed_cases */
EIF_REFERENCE F268_11898 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,loc2);
	RTLIU(5);
	
	RTGC;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,950,0xFF01,1560,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		Result = RTLNS(typres0.id, 950, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	F951_4073(RTCW(Result), ((EIF_INTEGER_32) 10L));
	tr1 = *(EIF_REFERENCE *)(Current + O9671[Dtype(Current)-267]);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		loc2 = F912_3522(loc1);
		for (;;) {
			tb1 = F1078_4353(loc2);
			if (tb1) break;
			tr1 = F1078_4352(loc2);
			tr1 = F269_11921(RTCW(tr1));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2375[Dtype(RTCW(Result))-911])(Result, tr1);
			F1078_4355(loc2);
		}
	}
	RTLE;
	return Result;
}

/* {ES_SUITE}.failed_cases */
EIF_REFERENCE F268_11899 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,loc2);
	RTLIU(5);
	
	RTGC;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,950,0xFF01,1560,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		Result = RTLNS(typres0.id, 950, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	F951_4073(RTCW(Result), ((EIF_INTEGER_32) 10L));
	tr1 = *(EIF_REFERENCE *)(Current + O9671[Dtype(Current)-267]);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		loc2 = F912_3522(loc1);
		for (;;) {
			tb1 = F1078_4353(loc2);
			if (tb1) break;
			tr1 = F1078_4352(loc2);
			tr1 = F269_11918(RTCW(tr1));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2375[Dtype(RTCW(Result))-911])(Result, tr1);
			F1078_4355(loc2);
		}
	}
	RTLE;
	return Result;
}

/* {ES_SUITE}.pass_values */
void F268_11902 (EIF_REFERENCE Current, EIF_BOOLEAN arg1, EIF_BOOLEAN arg2, EIF_REFERENCE arg3)
{
	GTCX
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg3);
	RTLIU(2);
	
	RTGC;
	*(EIF_BOOLEAN *)(Current + O9662[dtype-266]) = (EIF_BOOLEAN) arg1;
	*(EIF_BOOLEAN *)(Current + O9663[dtype-266]) = (EIF_BOOLEAN) arg2;
	RTAR(Current, arg3);
	*(EIF_REFERENCE *)(Current + O9670[dtype-267]) = (EIF_REFERENCE) arg3;
	RTLE;
}

void EIF_Minit1184 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
