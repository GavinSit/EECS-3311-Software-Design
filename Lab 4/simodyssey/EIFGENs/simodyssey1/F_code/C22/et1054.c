/*
 * Code for class ETF_FILE_UTILITY
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "et1054.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {ETF_FILE_UTILITY}.item */
EIF_REFERENCE F102_10095 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(5);
	RTLR(0,Result);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLIU(5);
	
	RTGC;
	Result = RTLNS(eif_new_type(1560, 0x01).id, 1560, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F1558_6510(RTCW(Result));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	loc1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2163[Dtype(RTCW(tr1))-849])(tr1);
	for (;;) {
		tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3146[Dtype(loc1)-1026])(loc1);
		if (tb1) break;
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3145[Dtype(loc1)-1026])(loc1);
		tr2 = RTMS_EX_H("\012",1,10);
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R3147[Dtype(loc1)-1026])(loc1);
	}
	RTLE;
	return Result;
}

/* {ETF_FILE_UTILITY}.read_text_from */
void F102_10096 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLR(3,arg1);
	RTLR(4,tr2);
	RTLR(5,loc2);
	RTLIU(6);
	
	RTGC;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,911,0xFF01,1560,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0.id, 911, _OBJSIZ_2_3_0_1_0_0_0_0_);
	}
	F912_3515(RTCW(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_new_type(1560, 1).id);
	F1558_6510(RTCW(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	loc1 = RTLNS(eif_new_type(1291, 0x01).id, 1291, _OBJSIZ_3_7_2_4_1_1_2_1_);
	F1291_4901(RTCW(loc1), arg1);
	tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3549[Dtype(RTCW(loc1))-1291])(loc1);
	if ((EIF_BOOLEAN) !tb1) {
		*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		tr1 = RTMS_EX_H("error: \'",8,1560791847);
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(tr1)-1560])(tr1, arg1);
		tr2 = RTMS_EX_H("\' does not exist",16,1883121268);
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	} else {
		tb1 = F1291_4939(RTCW(loc1));
		if ((EIF_BOOLEAN) !tb1) {
			*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			tr1 = RTMS_EX_H("error: \'",8,1560791847);
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(tr1)-1560])(tr1, arg1);
			tr2 = RTMS_EX_H("\' is not readable",17,26148453);
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
		} else {
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R3681[Dtype(RTCW(loc1))-1291])(loc1);
			for (;;) {
				tb1 = F756_2749(RTCW(loc1));
				if ((EIF_BOOLEAN) !tb1) break;
				(FUNCTION_CAST(void, (EIF_REFERENCE)) R3604[Dtype(RTCW(loc1))-1291])(loc1);
				loc2 = RTLNS(eif_new_type(1560, 0x01).id, 1560, _OBJSIZ_1_1_0_3_0_0_0_0_);
				tr1 = *(EIF_REFERENCE *)(RTCW(loc1) + O3535[Dtype(loc1)-1289]);
				F1559_6607(RTCW(loc2), tr1);
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2222[Dtype(RTCW(tr1))-818])(tr1, loc2);
			}
			F1291_4988(RTCW(loc1));
		}
	}
	RTLE;
}

/* {ETF_FILE_UTILITY}.remove_comment_lines */
void F102_10097 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLIU(3);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R2292[Dtype(RTCW(tr1))-911])(tr1);
	for (;;) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2306[Dtype(RTCW(tr1))-911])(tr1);
		if (tb1) break;
		loc1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		loc1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2258[Dtype(RTCW(loc1))-818])(loc1);
		loc1 = F1_14(loc1);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R4794[Dtype(RTCW(loc1))-1560])(loc1);
		tb2 = '\01';
		tr1 = RTMS_EX_H("--",2,11565);
		tb3 = F1559_6640(RTCW(loc1), tr1);
		if (!tb3) {
			tb3 = F1558_6528(RTCW(loc1));
			tb2 = tb3;
		}
		if (tb2) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R2263[Dtype(RTCW(tr1))-818])(tr1);
		} else {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R2308[Dtype(RTCW(tr1))-911])(tr1);
		}
	}
	RTLE;
}

void EIF_Minit1054 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
