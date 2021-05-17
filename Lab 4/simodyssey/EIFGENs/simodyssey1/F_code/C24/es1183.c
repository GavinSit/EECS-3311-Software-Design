/*
 * Code for class ES_TESTABLE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "es1183.h"
#include "eif_built_in.h"
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

/* {ES_TESTABLE}.run_espec */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
void F267_11875 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTED;
	EIF_BOOLEAN EIF_VOLATILE loc1 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE EIF_VOLATILE saved_except = (EIF_REFERENCE) 0;
	RTS_SDX;
	EIF_REFERENCE  EIF_VOLATILE tr1 = NULL;
	RTLD;
	RTXD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,saved_except);
	RTLIU(3);
	RTXSLS;
	
	RTEV;
	RTGC;
	RTE_T
	if ((EIF_BOOLEAN) !loc1) {
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R9650[Dtype(Current)-267])(Current);
		F267_11888(Current);
	}
	RTE_E
	RTXSC;
	RTS_SRR
	loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	tr1 = RTMS_EX_H("Error: No test cases found, Please add ES_TEST classes to the class that inherits from ES_SUITE\012",96,1749911306);
	F267_11882(Current, tr1);
	RTER;
	/* NOTREACHED */
	RTE_EE
	RTEOK;
	RTLE;
}
#undef EIF_VOLATILE
#define EIF_VOLATILE

/* {ES_TESTABLE}.show_browser */
void F267_11877 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_BOOLEAN *)(Current + O9663[Dtype(Current)-266]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
}

/* {ES_TESTABLE}.set_error_report */
void F267_11879 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	
	
	*(EIF_BOOLEAN *)(Current + O9662[Dtype(Current)-266]) = (EIF_BOOLEAN) arg1;
}

/* {ES_TESTABLE}.print_to_screen */
void F267_11882 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	F267_11883(Current, arg1);
}

/* {ES_TESTABLE}.safe_put_string */
void F267_11883 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	F1_27(Current, arg1);
}

/* {ES_TESTABLE}.check_browser */
void F267_11884 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLIU(4);
	
	RTGC;
	if (*(EIF_BOOLEAN *)(Current + O9663[Dtype(Current)-266])) {
		if ((EIF_BOOLEAN) eif_builtin_PLATFORM_is_windows) {
			tr1 = RTOUCR(148,F266_40, (Current));
			tr2 = RTMS_EX_H("\"explorer\" ",11,1679325984);
			tr3 = F267_11885(Current);
			tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(tr2)-1560])(tr2, tr3);
			tr3 = RTMS_EX_H("\"",1,34);
			tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr2))-1560])(tr2, tr3);
			F943_3781(RTCW(tr1), tr2);
		} else {
			if ((EIF_BOOLEAN) eif_builtin_PLATFORM_is_mac) {
				tr1 = RTOUCR(148,F266_40, (Current));
				tr2 = RTMS_EX_H("open",4,1869636974);
				tr3 = RTMS_EX_H(" \'",2,8231);
				tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(tr2)-1560])(tr2, tr3);
				tr3 = F267_11885(Current);
				tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr2))-1560])(tr2, tr3);
				tr3 = RTMS_EX_H("\'",1,39);
				tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr2))-1560])(tr2, tr3);
				F943_3781(RTCW(tr1), tr2);
			} else {
				tr1 = RTOUCR(148,F266_40, (Current));
				tr2 = RTMS_EX_H("xdg-open",8,892269422);
				tr3 = RTMS_EX_H(" \'",2,8231);
				tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(tr2)-1560])(tr2, tr3);
				tr3 = F267_11885(Current);
				tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr2))-1560])(tr2, tr3);
				tr3 = RTMS_EX_H("\'",1,39);
				tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr2))-1560])(tr2, tr3);
				F943_3781(RTCW(tr1), tr2);
			}
		}
	}
	RTLE;
}

/* {ES_TESTABLE}.get_html_name */
EIF_REFERENCE F267_11885 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLR(4,tr2);
	RTLIU(5);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O9659[dtype-266]) != NULL)) {
		RTCT0("attached default_html_name as d", EX_CHECK);
		tr1 = *(EIF_REFERENCE *)(Current + O9659[dtype-266]);
		loc1 = tr1;
		if (EIF_TEST(loc1)) {
			RTCK0;
		} else {
			RTCF0;
		}
		Result = F1_14(loc1);
	} else {
		tr1 = F1423_5288(RTCV(F1_5(Current)));
		tr2 = RTMS_EX_H(".html",5,1752813932);
		tr1 = F1567_6998(RTCW(tr1), tr2);
		Result = F1558_6566(RTCW(tr1));
	}
	RTLE;
	return Result;
}

/* {ES_TESTABLE}.print_console_report */
void F267_11888 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTLD;
	
	RTLI(7);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,loc2);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,loc5);
	RTLR(6,loc6);
	RTLIU(7);
	
	RTGC;
	loc1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R9657[dtype-267])(Current);
	loc2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R9656[dtype-267])(Current);
	loc3 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2269[Dtype(RTCW(loc2))-818])(loc2);
	loc4 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2269[Dtype(RTCW(loc2))-818])(loc2);
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2269[Dtype(RTCW(loc1))-818])(loc1);
	loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc4 + ti4_1);
	tr1 = RTOUCR(0,F1_24, (Current));
	tr2 = RTLNS(eif_new_type(1560, 0x01).id, 1560, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F1559_6606(RTCW(tr2), (EIF_CHARACTER_8) '=', ((EIF_INTEGER_32) 60L));
	F125_145(RTCW(tr1), tr2);
	F125_164(RTCV(RTOUCR(0,F1_24, (Current))));
	tr1 = RTMS_EX_H("passing tests\012",14,1588283658);
	F267_11883(Current, tr1);
	loc5 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2163[Dtype(RTCW(loc2))-849])(loc2);
	for (;;) {
		tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3146[Dtype(loc5)-1026])(loc5);
		if (tb1) break;
		tr1 = RTMS_EX_H("> ",2,15904);
		tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3145[Dtype(loc5)-1026])(loc5);
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(tr1)-1560])(tr1, tr2);
		tr2 = RTMS_EX_H("\012",1,10);
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
		F267_11883(Current, tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R3147[Dtype(loc5)-1026])(loc5);
	}
	tr1 = RTMS_EX_H("failing tests\012",14,1098897930);
	F267_11883(Current, tr1);
	loc6 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2163[Dtype(RTCW(loc1))-849])(loc1);
	for (;;) {
		tb2 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3146[Dtype(loc6)-1026])(loc6);
		if (tb2) break;
		tr1 = RTMS_EX_H("> ",2,15904);
		tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3145[Dtype(loc6)-1026])(loc6);
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(tr1)-1560])(tr1, tr2);
		tr2 = RTMS_EX_H("\012",1,10);
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
		F267_11883(Current, tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R3147[Dtype(loc6)-1026])(loc6);
	}
	tr1 = c_outi(loc3);
	tr2 = RTMS_EX_H("/",1,47);
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
	tr2 = c_outi(loc4);
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
	tr2 = RTMS_EX_H(" passed\012",8,524481290);
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
	F267_11883(Current, tr1);
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O9660[dtype-266]) == *(EIF_INTEGER_32 *)(Current + O9661[dtype-266]))) {
		tr1 = RTMS_EX_H("passed\012",7,517108490);
		F267_11883(Current, tr1);
	} else {
		tr1 = RTMS_EX_H("failed\012",7,1808865802);
		F267_11883(Current, tr1);
	}
	RTLE;
}

void EIF_Minit1183 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
