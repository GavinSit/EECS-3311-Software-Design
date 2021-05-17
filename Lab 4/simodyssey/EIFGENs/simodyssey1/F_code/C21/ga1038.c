/*
 * Code for class GALAXY
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ga1038.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

void F85_2 (EIF_REFERENCE Current, EIF_REFERENCE parent)
{
	GTCX
	uint32 offset_position = 0;
	RTLD;
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,parent);
	RTLIU(2);
	
	HEADER(Current)->ov_flags |= EO_COMP;
	offset_position = + _OBJSIZ_4_0_0_0_0_0_0_0_ + OVERHEAD;
	*(EIF_REFERENCE *) (Current + _REFACS_2_) = Current + offset_position;
	HEADER(Current + offset_position)->ov_flags = EO_EXP;
	
	RT_DFS(HEADER(Current + offset_position), eif_new_type(83, 0x00).id);
	HEADER(Current + offset_position)->ov_size = offset_position + (Current - parent);
	offset_position = + _OBJSIZ_4_0_0_0_0_0_0_0_ + OVERHEAD + _OBJSIZ_0_0_0_0_0_0_0_0_ + OVERHEAD;
	*(EIF_REFERENCE *) (Current + _REFACS_3_) = Current + offset_position;
	HEADER(Current + offset_position)->ov_flags = EO_EXP;
	
	RT_DFS(HEADER(Current + offset_position), eif_new_type(89, 0x00).id);
	HEADER(Current + offset_position)->ov_size = offset_position + (Current - parent);
	RTLE;
}

/* {GALAXY}.shared_info */
static EIF_REFERENCE F85_9931_body (EIF_REFERENCE Current)
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
	tr1 = (Current+ _OBJSIZ_4_0_0_0_0_0_0_0_ + OVERHEAD + _OBJSIZ_0_0_0_0_0_0_0_0_ + OVERHEAD);
	Result = RTOUCR(170,F90_9990, (RTCW(tr1)));
	RTLE;
	return Result;
}

EIF_REFERENCE F85_9931 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	if (!r) {
		GTCX
		RTLD;
		RTLI(1);
		RTLR(0,Current);
		RTLIU(1);
		r = (F85_9931_body (Current));
		*(EIF_REFERENCE *)(Current + _REFACS_1_) = r;
		RTAR(Current, r);
		RTLE;
	}
	return r;
}


/* {GALAXY}.make */
void F85_9932 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTGC;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,939,0xFF01,85,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNSMART(typres0.id);
	}
	tr2 = RTLNS(eif_new_type(85, 0x01).id, 85, _OBJSIZ_4_0_0_2_0_0_0_0_ + OVERHEAD +_OBJSIZ_0_0_0_0_0_0_0_0_ + OVERHEAD +_OBJSIZ_0_0_0_0_0_0_0_0_);
	F86_9944(RTCW(tr2));
	ti4_1 = ((EIF_INTEGER_32) 5L);
	ti4_2 = ((EIF_INTEGER_32) 5L);
	F940_3245(RTCW(tr1), tr2, ti4_1, ti4_2);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {GALAXY}.make_galaxy */
void F85_9933 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLIU(4);
	
	RTGC;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,939,0xFF01,85,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNSMART(typres0.id);
	}
	tr2 = RTLNS(eif_new_type(85, 0x01).id, 85, _OBJSIZ_4_0_0_2_0_0_0_0_ + OVERHEAD +_OBJSIZ_0_0_0_0_0_0_0_0_ + OVERHEAD +_OBJSIZ_0_0_0_0_0_0_0_0_);
	F86_9944(RTCW(tr2));
	ti4_1 = ((EIF_INTEGER_32) 5L);
	ti4_2 = ((EIF_INTEGER_32) 5L);
	F940_3245(RTCW(tr1), tr2, ti4_1, ti4_2);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		ti4_1 = ((EIF_INTEGER_32) 5L);
		if ((EIF_BOOLEAN) (loc1 > ti4_1)) break;
		loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			ti4_2 = ((EIF_INTEGER_32) 5L);
			if ((EIF_BOOLEAN) (loc2 > ti4_2)) break;
			tr1 = *(EIF_REFERENCE *)(Current);
			tr2 = RTLNS(eif_new_type(85, 0x01).id, 85, _OBJSIZ_4_0_0_2_0_0_0_0_ + OVERHEAD +_OBJSIZ_0_0_0_0_0_0_0_0_ + OVERHEAD +_OBJSIZ_0_0_0_0_0_0_0_0_);
			tr3 = RTLNS(eif_new_type(416, 0x01).id, 416, _OBJSIZ_1_2_0_5_0_0_0_0_);
			F417_13429(RTCW(tr3), (EIF_CHARACTER_8) 'E', ((EIF_INTEGER_32) 0L));
			F86_9943(RTCW(tr2), loc1, loc2, tr3);
			F940_3250(RTCW(tr1), tr2, loc1, loc2);
			loc2++;
		}
		loc1++;
	}
	F85_9934(Current);
	RTLE;
}

/* {GALAXY}.set_stationary_items */
void F85_9934 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc2);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTGC;
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		ti4_1 = ((EIF_INTEGER_32) 10L);
		if ((EIF_BOOLEAN) (loc1 > ti4_1)) break;
		tr1 = (Current+ _OBJSIZ_4_0_0_0_0_0_0_0_ + OVERHEAD);
		ti4_2 = ((EIF_INTEGER_32) 5L);
		loc3 = F84_9927(RTCW(tr1), ((EIF_INTEGER_32) 1L), ti4_2);
		tr1 = (Current+ _OBJSIZ_4_0_0_0_0_0_0_0_ + OVERHEAD);
		ti4_2 = ((EIF_INTEGER_32) 5L);
		loc4 = F84_9927(RTCW(tr1), ((EIF_INTEGER_32) 1L), ti4_2);
		tr1 = *(EIF_REFERENCE *)(Current);
		loc2 = F940_3247(RTCW(tr1), loc3, loc4);
		tb1 = '\0';
		tb2 = F86_9951(RTCW(loc2));
		if ((EIF_BOOLEAN) !tb2) {
			tb2 = F86_9950(RTCW(loc2));
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if (tb1) {
			tr1 = *(EIF_REFERENCE *)(Current);
			tr1 = F940_3247(RTCW(tr1), loc3, loc4);
			ti4_2 = *(EIF_INTEGER_32 *)(RTCV(F85_9931(Current))+ _LNGOFF_0_0_0_2_);
			tr2 = F85_9935(Current, ti4_2);
			F86_9948(RTCW(tr1), tr2);
			loc1++;
			F93_10059(RTCV(F85_9931(Current)));
		}
	}
	RTLE;
}

/* {GALAXY}.create_stationary_item */
EIF_REFERENCE F85_9935 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	
	RTGC;
	tr1 = (Current+ _OBJSIZ_4_0_0_0_0_0_0_0_ + OVERHEAD);
	loc1 = F84_9927(RTCW(tr1), ((EIF_INTEGER_32) 1L), ((EIF_INTEGER_32) 3L));
	switch (loc1) {
		case 1L:
			Result = RTLNS(eif_new_type(418, 0x01).id, 418, _OBJSIZ_0_1_0_3_0_0_0_0_);
			F419_13474(RTCW(Result), (EIF_CHARACTER_8) 'Y', arg1);
			break;
		case 2L:
			Result = RTLNS(eif_new_type(418, 0x01).id, 418, _OBJSIZ_0_1_0_3_0_0_0_0_);
			F419_13474(RTCW(Result), (EIF_CHARACTER_8) '*', arg1);
			break;
		case 3L:
			Result = RTLNS(eif_new_type(415, 0x01).id, 415, _OBJSIZ_0_1_0_2_0_0_0_0_);
			F416_13421(RTCW(Result), (EIF_CHARACTER_8) 'W', arg1);
			break;
		default:
			Result = RTLNS(eif_new_type(418, 0x01).id, 418, _OBJSIZ_0_1_0_3_0_0_0_0_);
			F419_13474(RTCW(Result), (EIF_CHARACTER_8) 'Y', arg1);
			break;
	}
	RTLE;
	return Result;
}

/* {GALAXY}.out */
EIF_REFERENCE F85_9936 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(10);
	RTLR(0,Result);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,loc2);
	RTLR(4,tr1);
	RTLR(5,loc4);
	RTLR(6,loc5);
	RTLR(7,loc3);
	RTLR(8,tr2);
	RTLR(9,loc6);
	RTLIU(10);
	
	RTGC;
	Result = RTLNS(eif_new_type(1560, 0x01).id, 1560, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F1558_6510(RTCW(Result));
	loc1 = RTLNS(eif_new_type(1560, 0x01).id, 1560, _OBJSIZ_1_1_0_3_0_0_0_0_);
	ti4_1 = ((EIF_INTEGER_32) 5L);
	F1559_6605(RTCW(loc1), (EIF_INTEGER_32) (((EIF_INTEGER_32) 7L) * ti4_1));
	loc2 = RTLNS(eif_new_type(1560, 0x01).id, 1560, _OBJSIZ_1_1_0_3_0_0_0_0_);
	ti4_1 = ((EIF_INTEGER_32) 5L);
	F1559_6605(RTCW(loc2), (EIF_INTEGER_32) (((EIF_INTEGER_32) 7L) * ti4_1));
	tr1 = RTMS_EX_H("\012",1,10);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(loc1))-1560])(loc1, tr1);
	ti4_1 = ((EIF_INTEGER_32) 5L);
	tr1 = RTLNS(eif_new_type(1508, 0x00).id, 1508, _OBJSIZ_0_0_0_1_0_0_0_0_);
	*(EIF_INTEGER_32 *)tr1 = ((EIF_INTEGER_32) 1L);
	tr1 = F1507_6172(RTCW(tr1), ti4_1);
	loc4 = F828_3077(RTCW(tr1));
	for (;;) {
		tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3146[Dtype(loc4)-1026])(loc4);
		if (tb1) break;
		tr1 = RTMS_EX_H("    ",4,538976288);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(loc1))-1560])(loc1, tr1);
		tr1 = RTMS_EX_H("    ",4,538976288);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(loc2))-1560])(loc2, tr1);
		ti4_1 = ((EIF_INTEGER_32) 5L);
		tr1 = RTLNS(eif_new_type(1508, 0x00).id, 1508, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)tr1 = ((EIF_INTEGER_32) 1L);
		tr1 = F1507_6172(RTCW(tr1), ti4_1);
		loc5 = F828_3077(RTCW(tr1));
		for (;;) {
			tb2 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3146[Dtype(loc5)-1026])(loc5);
			if (tb2) break;
			tr1 = *(EIF_REFERENCE *)(Current);
			ti4_1 = (eif_optimize_return = 1, *(EIF_INTEGER_32 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3145[Dtype(loc4)-1026])(loc4));
			ti4_2 = (eif_optimize_return = 1, *(EIF_INTEGER_32 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3145[Dtype(loc5)-1026])(loc5));
			loc3 = F940_3247(RTCW(tr1), ti4_1, ti4_2);
			tr1 = RTMS_EX_H("(",1,40);
			tr2 = F86_9949(RTCW(loc3));
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(tr1)-1560])(tr1, tr2);
			tr2 = RTMS_EX_H(")  ",3,2695200);
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(loc1))-1560])(loc1, tr1);
			ti4_1 = ((EIF_INTEGER_32) 4L);
			tr1 = RTLNS(eif_new_type(1508, 0x00).id, 1508, _OBJSIZ_0_0_0_1_0_0_0_0_);
			*(EIF_INTEGER_32 *)tr1 = ((EIF_INTEGER_32) 1L);
			tr1 = F1507_6172(RTCW(tr1), ti4_1);
			loc6 = F828_3077(RTCW(tr1));
			for (;;) {
				tb3 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3146[Dtype(loc6)-1026])(loc6);
				if (tb3) break;
				ti4_1 = (eif_optimize_return = 1, *(EIF_INTEGER_32 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3145[Dtype(loc6)-1026])(loc6));
				tc1 = F86_9955(RTCW(loc3), ti4_1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R4825[Dtype(RTCW(loc2))-1560])(loc2, tc1);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) R3147[Dtype(loc6)-1026])(loc6);
			}
			tr1 = RTMS_EX_H("   ",3,2105376);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(loc2))-1560])(loc2, tr1);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R3147[Dtype(loc5)-1026])(loc5);
		}
		tr1 = RTMS_EX_H("\012",1,10);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(loc1))-1560])(loc1, tr1);
		ti4_1 = (eif_optimize_return = 1, *(EIF_INTEGER_32 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3145[Dtype(loc4)-1026])(loc4));
		ti4_2 = ((EIF_INTEGER_32) 5L);
		if ((EIF_BOOLEAN) !(EIF_BOOLEAN)(ti4_1 == ti4_2)) {
			tr1 = RTMS_EX_H("\012",1,10);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(loc2))-1560])(loc2, tr1);
		}
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, loc1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, loc2);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R4801[Dtype(RTCW(loc1))-1560])(loc1);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R4801[Dtype(RTCW(loc2))-1560])(loc2);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R3147[Dtype(loc4)-1026])(loc4);
	}
	RTLE;
	return Result;
}

void EIF_Minit1038 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
