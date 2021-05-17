/*
 * Code for class EV_SIZEABLE_CONTAINER_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1714.h"
#include "eif_helpers.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_SIZEABLE_CONTAINER_IMP}.initialize_sizeable */
void F1725_19514 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNSMART(eif_new_type(24, 1).id);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + O16311[Dtype(Current)-1722]) = (EIF_REFERENCE) tr1;
	F1725_19521(Current, (EIF_BOOLEAN) 1);
	F1725_19522(Current, (EIF_BOOLEAN) 1);
	RTLE;
}

/* {EV_SIZEABLE_CONTAINER_IMP}.is_in_notify */
static EIF_REFERENCE F1725_19520_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(417)

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEV;
	RTGC;
	RTOTP;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,491,1493,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0.id, 491, _OBJSIZ_0_1_0_0_0_0_0_0_);
	}
	F492_1934(RTCW(tr1), (EIF_BOOLEAN) 0);
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1725_19520 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(417,F1725_19520_body,(Current));
}

/* {EV_SIZEABLE_CONTAINER_IMP}.set_minwidth_recomputation_needed */
void F1725_19521 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	
	
	*(EIF_BOOLEAN *)(Current + O16333[Dtype(Current)-1724]) = (EIF_BOOLEAN) arg1;
}

/* {EV_SIZEABLE_CONTAINER_IMP}.set_minheight_recomputation_needed */
void F1725_19522 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	
	
	*(EIF_BOOLEAN *)(Current + O16334[Dtype(Current)-1724]) = (EIF_BOOLEAN) arg1;
}

/* {EV_SIZEABLE_CONTAINER_IMP}.minimum_width */
EIF_INTEGER_32 F1725_19523 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	if (*(EIF_BOOLEAN *)(Current + O16333[dtype-1724])) {
		F1725_19521(Current, (EIF_BOOLEAN) 0);
		*(EIF_BOOLEAN *)(Current + O16337[dtype-1724]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		if (*(EIF_BOOLEAN *)(Current + O16334[dtype-1724])) {
			F1725_19522(Current, (EIF_BOOLEAN) 0);
			*(EIF_BOOLEAN *)(Current + O16336[dtype-1724]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_BOOLEAN)) R16345[dtype-1972])(Current, (EIF_BOOLEAN) 0);
		} else {
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_BOOLEAN)) R16343[dtype-1972])(Current, (EIF_BOOLEAN) 0);
		}
		*(EIF_BOOLEAN *)(Current + O16336[dtype-1724]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		*(EIF_BOOLEAN *)(Current + O16337[dtype-1724]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	}
	tr1 = *(EIF_REFERENCE *)(Current + O16311[dtype-1722]);
	Result = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_0_4_0_4_);
	RTLE;
	return Result;
}

/* {EV_SIZEABLE_CONTAINER_IMP}.minimum_height */
EIF_INTEGER_32 F1725_19524 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	if (*(EIF_BOOLEAN *)(Current + O16334[dtype-1724])) {
		F1725_19522(Current, (EIF_BOOLEAN) 0);
		*(EIF_BOOLEAN *)(Current + O16336[dtype-1724]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		if (*(EIF_BOOLEAN *)(Current + O16333[dtype-1724])) {
			F1725_19521(Current, (EIF_BOOLEAN) 0);
			*(EIF_BOOLEAN *)(Current + O16337[dtype-1724]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_BOOLEAN)) R16345[dtype-1972])(Current, (EIF_BOOLEAN) 0);
		} else {
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_BOOLEAN)) R16344[dtype-1972])(Current, (EIF_BOOLEAN) 0);
		}
		*(EIF_BOOLEAN *)(Current + O16336[dtype-1724]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		*(EIF_BOOLEAN *)(Current + O16337[dtype-1724]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	}
	tr1 = *(EIF_REFERENCE *)(Current + O16311[dtype-1722]);
	Result = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_0_4_0_5_);
	RTLE;
	return Result;
}

/* {EV_SIZEABLE_CONTAINER_IMP}.ev_set_minimum_width */
void F1725_19525 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_BOOLEAN arg2)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc4 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc3);
	RTLR(3,loc5);
	RTLIU(4);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O16311[dtype-1722]);
	loc1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_0_4_0_4_);
	if ((EIF_BOOLEAN)(loc1 != arg1)) {
		F1723_19486(Current, arg1);
		loc3 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R16312[dtype-1972])(Current);
		tb1 = '\0';
		if ((EIF_BOOLEAN)(loc3 != NULL)) {
			tb2 = '\01';
			tr1 = RTOUCR(417,F1725_19520, (Current));
			tb3 = *(EIF_BOOLEAN *)(RTCW(tr1) + O1718[Dtype(tr1)-488]);
			if (!(EIF_BOOLEAN) !tb3) {
				tb2 = *(EIF_BOOLEAN *)(Current + O16335[dtype-1724]);
			}
			tb1 = tb2;
		}
		if (tb1) {
			tr1 = F1696_18976(Current);
			tr1 = *(EIF_REFERENCE *)(RTCW(tr1) + O15014[Dtype(tr1)-1595]);
			F1725_19528(RTCW(loc3), ((EIF_INTEGER_32) 1L), tr1, arg2);
			loc4 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
	}
	loc5 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R16342[dtype-1972])(Current);
	tb1 = '\0';
	if ((EIF_BOOLEAN) !loc4) {
		tb2 = '\01';
		if (!arg2) {
			tb3 = '\0';
			if ((EIF_BOOLEAN)(loc5 != NULL)) {
				tb4 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R16563[Dtype(RTCW(loc5))-1871])(loc5);
				tb3 = tb4;
			}
			tb2 = tb3;
		}
		tb1 = tb2;
	}
	if (tb1) {
		tr1 = *(EIF_REFERENCE *)(Current + O16311[dtype-1722]);
		loc2 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_0_4_0_2_);
		if ((EIF_BOOLEAN) (arg1 > loc2)) {
			ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16315[dtype-1972])(Current);
			ti4_2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16316[dtype-1972])(Current);
			tr1 = *(EIF_REFERENCE *)(Current + O16311[dtype-1722]);
			ti4_3 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_0_4_0_3_);
			F1723_19497(Current, ti4_1, ti4_2, arg1, ti4_3, (EIF_BOOLEAN) 1);
		} else {
			if (F1696_18988(Current)) {
				ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16315[dtype-1972])(Current);
				ti4_2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16316[dtype-1972])(Current);
				ti4_3 = eif_max_int32 (loc2,arg1);
				tr1 = *(EIF_REFERENCE *)(Current + O16311[dtype-1722]);
				ti4_4 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_0_4_0_3_);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32, EIF_BOOLEAN)) R16318[dtype-1972])(Current, ti4_1, ti4_2, ti4_3, ti4_4, (EIF_BOOLEAN) 1);
			}
		}
	}
	RTLE;
}

/* {EV_SIZEABLE_CONTAINER_IMP}.ev_set_minimum_height */
void F1725_19526 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_BOOLEAN arg2)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc4 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc3);
	RTLR(3,loc5);
	RTLIU(4);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O16311[dtype-1722]);
	loc1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_0_4_0_5_);
	if ((EIF_BOOLEAN)(loc1 != arg1)) {
		F1723_19487(Current, arg1);
		loc3 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R16312[dtype-1972])(Current);
		tb1 = '\0';
		if ((EIF_BOOLEAN)(loc3 != NULL)) {
			tb2 = '\01';
			tr1 = RTOUCR(417,F1725_19520, (Current));
			tb3 = *(EIF_BOOLEAN *)(RTCW(tr1) + O1718[Dtype(tr1)-488]);
			if (!(EIF_BOOLEAN) !tb3) {
				tb2 = *(EIF_BOOLEAN *)(Current + O16335[dtype-1724]);
			}
			tb1 = tb2;
		}
		if (tb1) {
			tr1 = F1696_18976(Current);
			tr1 = *(EIF_REFERENCE *)(RTCW(tr1) + O15014[Dtype(tr1)-1595]);
			F1725_19528(RTCW(loc3), ((EIF_INTEGER_32) 2L), tr1, arg2);
			loc4 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
	}
	loc5 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R16342[dtype-1972])(Current);
	tb1 = '\0';
	if ((EIF_BOOLEAN) !loc4) {
		tb2 = '\01';
		if (!arg2) {
			tb3 = '\0';
			if ((EIF_BOOLEAN)(loc5 != NULL)) {
				tb4 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R16563[Dtype(RTCW(loc5))-1871])(loc5);
				tb3 = tb4;
			}
			tb2 = tb3;
		}
		tb1 = tb2;
	}
	if (tb1) {
		tr1 = *(EIF_REFERENCE *)(Current + O16311[dtype-1722]);
		loc2 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_0_4_0_3_);
		if ((EIF_BOOLEAN) (arg1 > loc2)) {
			ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16315[dtype-1972])(Current);
			ti4_2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16316[dtype-1972])(Current);
			tr1 = *(EIF_REFERENCE *)(Current + O16311[dtype-1722]);
			ti4_3 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_0_4_0_2_);
			F1723_19497(Current, ti4_1, ti4_2, ti4_3, arg1, (EIF_BOOLEAN) 1);
		} else {
			if (F1696_18988(Current)) {
				ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16315[dtype-1972])(Current);
				ti4_2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16316[dtype-1972])(Current);
				tr1 = *(EIF_REFERENCE *)(Current + O16311[dtype-1722]);
				ti4_3 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_0_4_0_2_);
				ti4_4 = eif_max_int32 (loc2,arg1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32, EIF_BOOLEAN)) R16318[dtype-1972])(Current, ti4_1, ti4_2, ti4_3, ti4_4, (EIF_BOOLEAN) 1);
			}
		}
	}
	RTLE;
}

/* {EV_SIZEABLE_CONTAINER_IMP}.ev_set_minimum_size */
void F1725_19527 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_BOOLEAN arg3)
{
	GTCX
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc2 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc3 = (EIF_BOOLEAN) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc8);
	RTLR(3,loc9);
	RTLIU(4);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O16311[dtype-1722]);
	loc4 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_0_4_0_4_);
	tr1 = *(EIF_REFERENCE *)(Current + O16311[dtype-1722]);
	loc5 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_0_4_0_5_);
	loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN)(loc4 != arg1);
	loc2 = (EIF_BOOLEAN) (EIF_BOOLEAN)(loc5 != arg2);
	if ((EIF_BOOLEAN) (loc1 || loc2)) {
		F1723_19488(Current, arg1, arg2);
		loc8 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R16312[dtype-1972])(Current);
		tb1 = '\0';
		if ((EIF_BOOLEAN)(loc8 != NULL)) {
			tb2 = '\01';
			tr1 = RTOUCR(417,F1725_19520, (Current));
			tb3 = *(EIF_BOOLEAN *)(RTCW(tr1) + O1718[Dtype(tr1)-488]);
			if (!(EIF_BOOLEAN) !tb3) {
				tb2 = *(EIF_BOOLEAN *)(Current + O16335[dtype-1724]);
			}
			tb1 = tb2;
		}
		if (tb1) {
			if (loc1) {
				if (loc2) {
					tr1 = F1696_18976(Current);
					tr1 = *(EIF_REFERENCE *)(RTCW(tr1) + O15014[Dtype(tr1)-1595]);
					F1725_19528(RTCW(loc8), ((EIF_INTEGER_32) 3L), tr1, arg3);
				} else {
					tr1 = F1696_18976(Current);
					tr1 = *(EIF_REFERENCE *)(RTCW(tr1) + O15014[Dtype(tr1)-1595]);
					F1725_19528(RTCW(loc8), ((EIF_INTEGER_32) 1L), tr1, arg3);
				}
			} else {
				tr1 = F1696_18976(Current);
				tr1 = *(EIF_REFERENCE *)(RTCW(tr1) + O15014[Dtype(tr1)-1595]);
				F1725_19528(RTCW(loc8), ((EIF_INTEGER_32) 2L), tr1, arg3);
			}
			loc3 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
	}
	loc9 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R16342[dtype-1972])(Current);
	tb1 = '\0';
	if ((EIF_BOOLEAN) !loc3) {
		tb2 = '\01';
		if (!arg3) {
			tb3 = '\0';
			if ((EIF_BOOLEAN)(loc9 != NULL)) {
				tb4 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R16563[Dtype(RTCW(loc9))-1871])(loc9);
				tb3 = tb4;
			}
			tb2 = tb3;
		}
		tb1 = tb2;
	}
	if (tb1) {
		tr1 = *(EIF_REFERENCE *)(Current + O16311[dtype-1722]);
		loc6 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_0_4_0_2_);
		tr1 = *(EIF_REFERENCE *)(Current + O16311[dtype-1722]);
		loc7 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_0_4_0_3_);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg1 > loc6) || (EIF_BOOLEAN) (arg2 > loc7))) {
			ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16315[dtype-1972])(Current);
			ti4_2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16316[dtype-1972])(Current);
			ti4_3 = eif_max_int32 (arg1,loc6);
			ti4_4 = eif_max_int32 (arg2,loc7);
			F1723_19497(Current, ti4_1, ti4_2, ti4_3, ti4_4, (EIF_BOOLEAN) 1);
		} else {
			if (F1696_18988(Current)) {
				ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16315[dtype-1972])(Current);
				ti4_2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16316[dtype-1972])(Current);
				ti4_3 = eif_max_int32 (loc6,arg1);
				ti4_4 = eif_max_int32 (loc7,arg2);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32, EIF_BOOLEAN)) R16318[dtype-1972])(Current, ti4_1, ti4_2, ti4_3, ti4_4, (EIF_BOOLEAN) 1);
			}
		}
	}
	RTLE;
}

/* {EV_SIZEABLE_CONTAINER_IMP}.notify_change */
void F1725_19528 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2, EIF_BOOLEAN arg3)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTCDT;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc3);
	RTLR(3,arg2);
	RTLR(4,loc2);
	RTLR(5,loc1);
	RTLIU(6);
	
	RTGC;
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current + O16336[dtype-1724]) && (EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current + O16337[dtype-1724]))) {
		tr1 = RTOUCR(417,F1725_19520, (Current));
		tb1 = *(EIF_BOOLEAN *)(RTCW(tr1) + O1718[Dtype(tr1)-488]);
		if (tb1) {
			loc3 = arg2;
			loc3 = RTRV(eif_new_type(1724, 0x00), loc3);
			tb1 = '\0';
			if ((EIF_BOOLEAN)(loc3 != NULL)) {
				tb2 = *(EIF_BOOLEAN *)(RTCW(loc3) + O16335[Dtype(loc3)-1724]);
				tb1 = tb2;
			}
			if (tb1) {
				tr1 = RTOUCR(417,F1725_19520, (Current));
				F492_1934(RTCW(tr1), (EIF_BOOLEAN) 0);
			}
		}
		tr1 = RTOUCR(417,F1725_19520, (Current));
		tb1 = *(EIF_BOOLEAN *)(RTCW(tr1) + O1718[Dtype(tr1)-488]);
		if ((EIF_BOOLEAN) !tb1) {
			*(EIF_BOOLEAN *)(Current + O16335[dtype-1724]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			tr1 = RTOUCR(417,F1725_19520, (Current));
			F492_1934(RTCW(tr1), (EIF_BOOLEAN) 1);
			loc2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R16342[dtype-1972])(Current);
			tb1 = '\01';
			if (!arg3) {
				tb2 = '\0';
				if ((EIF_BOOLEAN)(loc2 != NULL)) {
					tb3 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R16563[Dtype(RTCW(loc2))-1871])(loc2);
					tb2 = tb3;
				}
				tb1 = tb2;
			}
			if (tb1) {
				switch (arg1) {
					case 1L:
						F1725_19521(Current, (EIF_BOOLEAN) 0);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_BOOLEAN)) R16343[dtype-1972])(Current, arg3);
						break;
					case 2L:
						F1725_19522(Current, (EIF_BOOLEAN) 0);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_BOOLEAN)) R16344[dtype-1972])(Current, arg3);
						break;
					case 3L:
						F1725_19521(Current, (EIF_BOOLEAN) 0);
						F1725_19522(Current, (EIF_BOOLEAN) 0);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_BOOLEAN)) R16345[dtype-1972])(Current, arg3);
						break;
					default:
						RTEC(EN_WHEN);
				}
			} else {
				switch (arg1) {
					case 1L:
						F1725_19521(Current, (EIF_BOOLEAN) 1);
						break;
					case 2L:
						F1725_19522(Current, (EIF_BOOLEAN) 1);
						break;
					case 3L:
						F1725_19521(Current, (EIF_BOOLEAN) 1);
						F1725_19522(Current, (EIF_BOOLEAN) 1);
						break;
					default:
						RTEC(EN_WHEN);
				}
				tb1 = '\01';
				if (!(EIF_BOOLEAN)(loc2 == NULL)) {
					tb2 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R16563[Dtype(RTCW(loc2))-1871])(loc2);
					tb1 = (EIF_BOOLEAN) !tb2;
				}
				if (tb1) {
					loc1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R16312[dtype-1972])(Current);
					if ((EIF_BOOLEAN)(loc1 != NULL)) {
						tr1 = F1696_18976(Current);
						tr1 = *(EIF_REFERENCE *)(RTCW(tr1) + O15014[Dtype(tr1)-1595]);
						F1725_19528(RTCW(loc1), arg1, tr1, arg3);
					}
				}
			}
			*(EIF_BOOLEAN *)(Current + O16335[dtype-1724]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			tr1 = RTOUCR(417,F1725_19520, (Current));
			F492_1934(RTCW(tr1), (EIF_BOOLEAN) 0);
		}
	}
	RTLE;
}

void EIF_Minit1714 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
