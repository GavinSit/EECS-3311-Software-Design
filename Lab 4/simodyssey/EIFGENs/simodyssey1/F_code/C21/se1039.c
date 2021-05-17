/*
 * Code for class SECTOR
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "se1039.h"
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

void F86_2 (EIF_REFERENCE Current, EIF_REFERENCE parent)
{
	GTCX
	uint32 offset_position = 0;
	RTLD;
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,parent);
	RTLIU(2);
	
	HEADER(Current)->ov_flags |= EO_COMP;
	offset_position = + _OBJSIZ_4_0_0_2_0_0_0_0_ + OVERHEAD;
	*(EIF_REFERENCE *) (Current + _REFACS_2_) = Current + offset_position;
	HEADER(Current + offset_position)->ov_flags = EO_EXP;
	
	RT_DFS(HEADER(Current + offset_position), eif_new_type(89, 0x00).id);
	HEADER(Current + offset_position)->ov_size = offset_position + (Current - parent);
	offset_position = + _OBJSIZ_4_0_0_2_0_0_0_0_ + OVERHEAD + _OBJSIZ_0_0_0_0_0_0_0_0_ + OVERHEAD;
	*(EIF_REFERENCE *) (Current + _REFACS_3_) = Current + offset_position;
	HEADER(Current + offset_position)->ov_flags = EO_EXP;
	
	RT_DFS(HEADER(Current + offset_position), eif_new_type(83, 0x00).id);
	HEADER(Current + offset_position)->ov_size = offset_position + (Current - parent);
	RTLE;
}

/* {SECTOR}.shared_info */
static EIF_REFERENCE F86_9938_body (EIF_REFERENCE Current)
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
	tr1 = (Current+ _OBJSIZ_4_0_0_2_0_0_0_0_ + OVERHEAD);
	Result = RTOUCR(170,F90_9990, (RTCW(tr1)));
	RTLE;
	return Result;
}

EIF_REFERENCE F86_9938 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current);
	if (!r) {
		GTCX
		RTLD;
		RTLI(1);
		RTLR(0,Current);
		RTLIU(1);
		r = (F86_9938_body (Current));
		*(EIF_REFERENCE *)(Current) = r;
		RTAR(Current, r);
		RTLE;
	}
	return r;
}


/* {SECTOR}.make */
void F86_9943 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_REFERENCE arg3)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg3);
	RTLIU(3);
	
	RTGC;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_0_0_0_) = (EIF_INTEGER_32) arg1;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_0_0_1_) = (EIF_INTEGER_32) arg2;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,950,0xFF01,415,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNSMART(typres0.id);
	}
	ti4_1 = ((EIF_INTEGER_32) 4L);
	F951_4073(RTCW(tr1), ti4_1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	F575_2465(RTCW(tr1));
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_0_0_0_) == ((EIF_INTEGER_32) 3L)) && (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_0_0_1_) == ((EIF_INTEGER_32) 3L)))) {
		tr1 = RTLNS(eif_new_type(415, 0x01).id, 415, _OBJSIZ_0_1_0_2_0_0_0_0_);
		F416_13421(RTCW(tr1), (EIF_CHARACTER_8) 'O', ((EIF_INTEGER_32) -1L));
		F86_9948(Current, tr1);
	} else {
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_0_0_0_) == ((EIF_INTEGER_32) 1L)) && (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_0_0_1_) == ((EIF_INTEGER_32) 1L)))) {
			F86_9948(Current, arg3);
		}
		F86_9945(Current);
	}
	RTLE;
}

/* {SECTOR}.make_dummy */
void F86_9944 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,950,0xFF01,415,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNSMART(typres0.id);
	}
	ti4_1 = ((EIF_INTEGER_32) 4L);
	F951_4073(RTCW(tr1), ti4_1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	F575_2465(RTCW(tr1));
	RTLE;
}

/* {SECTOR}.populate */
void F86_9945 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc4);
	RTLR(3,loc6);
	RTLIU(4);
	
	RTGC;
	tr1 = (Current+ _OBJSIZ_4_0_0_2_0_0_0_0_ + OVERHEAD + _OBJSIZ_0_0_0_0_0_0_0_0_ + OVERHEAD);
	ti4_1 = ((EIF_INTEGER_32) 4L);
	loc2 = F84_9927(RTCW(tr1), ((EIF_INTEGER_32) 1L), (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L)));
	loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		if ((EIF_BOOLEAN) (loc3 > loc2)) break;
		tr1 = (Current+ _OBJSIZ_4_0_0_2_0_0_0_0_ + OVERHEAD + _OBJSIZ_0_0_0_0_0_0_0_0_ + OVERHEAD);
		loc1 = F84_9927(RTCW(tr1), ((EIF_INTEGER_32) 1L), ((EIF_INTEGER_32) 100L));
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(F86_9938(Current))+ _LNGOFF_0_0_0_0_);
		if ((EIF_BOOLEAN) (loc1 < ti4_1)) {
			loc4 = RTLNS(eif_new_type(417, 0x01).id, 417, _OBJSIZ_1_4_0_3_0_0_0_0_);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCV(F86_9938(Current))+ _LNGOFF_0_0_0_1_);
			F418_13452(RTCW(loc4), (EIF_CHARACTER_8) 'P', ti4_1);
			F93_10058(RTCV(F86_9938(Current)));
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,1475,1508,1508,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
				tr1 = RTLNTS(typres0.id, 3, 1);
			}
			ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_0_0_0_);
			((EIF_TYPED_VALUE *)tr1+1)->it_i4 = ti4_1;
			ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_0_0_1_);
			((EIF_TYPED_VALUE *)tr1+2)->it_i4 = ti4_1;
			F418_13470(RTCW(loc4), tr1);
		}
		loc6 = loc4;
		if (EIF_TEST(loc6)) {
			F86_9948(Current, loc6);
			tr1 = (Current+ _OBJSIZ_4_0_0_2_0_0_0_0_ + OVERHEAD + _OBJSIZ_0_0_0_0_0_0_0_0_ + OVERHEAD);
			loc5 = F84_9927(RTCW(tr1), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 2L));
			F418_13467(loc6, loc5);
			loc4 = (EIF_REFERENCE) NULL;
		}
		loc3++;
	}
	RTLE;
}

/* {SECTOR}.remove_by_id */
void F86_9946 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	F951_4104(RTCW(tr1));
	loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	for (;;) {
		tb1 = '\01';
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tb2 = F882_3332(RTCW(tr1));
		if (!tb2) {
			tb1 = loc1;
		}
		if (tb1) break;
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tr1 = F951_4078(RTCW(tr1));
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1) + O11109[Dtype(tr1)-415]);
		if ((ti4_1 == arg1)) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			tr1 = F951_4078(RTCW(tr1));
			F416_13428(RTCW(tr1), ((EIF_INTEGER_32) 0L));
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R2263[Dtype(RTCW(tr1))-818])(tr1);
			loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		} else {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			F951_4106(RTCW(tr1));
		}
	}
	RTLE;
}

/* {SECTOR}.place */
void F86_9947 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc3 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_CHARACTER_8 tc1;
	RTCFDT;
	RTLD;
	
	RTLI(7);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,loc4);
	RTLR(3,tr1);
	RTLR(4,arg1);
	RTLR(5,loc5);
	RTLR(6,loc6);
	RTLIU(7);
	
	RTGC;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,956,1508,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		loc1 = RTLNS(typres0.id, 956, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	F957_4073(RTCW(loc1), ((EIF_INTEGER_32) 0L));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	loc4 = F951_4087(RTCW(tr1));
	for (;;) {
		tb1 = F1081_4373(loc4);
		if (tb1) break;
		tr1 = F1081_4364(loc4);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1) + O11110[Dtype(tr1)-415]);
		F957_4113(RTCW(loc1), ti4_1);
		F1081_4379(loc4);
	}
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	loc3 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	for (;;) {
		if ((EIF_BOOLEAN) (loc3 || (EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 4L)))) break;
		tb2 = F957_4085(RTCW(loc1), loc2);
		if ((EIF_BOOLEAN) !tb2) {
			F416_13428(RTCW(arg1), loc2);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2222[Dtype(RTCW(tr1))-818])(tr1, arg1);
			loc3 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
		loc2++;
	}
	tc1 = *(EIF_CHARACTER_8 *)(RTCW(arg1) + O11108[Dtype(arg1)-415]);
	if ((tc1 == (EIF_CHARACTER_8) 'E')) {
		RTCT0("attached {ENTITY_EXPLORER} component as exp", EX_CHECK);
		loc5 = arg1;
		loc5 = RTRV(eif_new_type(416, 0x01),loc5);
		if (EIF_TEST(loc5)) {
			RTCK0;
		} else {
			RTCF0;
		}
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,1475,1508,1508,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr1 = RTLNTS(typres0.id, 3, 1);
		}
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_0_0_0_);
		((EIF_TYPED_VALUE *)tr1+1)->it_i4 = ti4_1;
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_0_0_1_);
		((EIF_TYPED_VALUE *)tr1+2)->it_i4 = ti4_1;
		F417_13443(loc5, tr1);
	} else {
		RTCT0("attached {ENTITY_MOVABLE} component as planet", EX_CHECK);
		loc6 = arg1;
		loc6 = RTRV(eif_new_type(417, 0x01),loc6);
		if (EIF_TEST(loc6)) {
			RTCK0;
		} else {
			RTCF0;
		}
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,1475,1508,1508,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr1 = RTLNTS(typres0.id, 3, 1);
		}
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_0_0_0_);
		((EIF_TYPED_VALUE *)tr1+1)->it_i4 = ti4_1;
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_0_0_1_);
		((EIF_TYPED_VALUE *)tr1+2)->it_i4 = ti4_1;
		F418_13470(loc6, tr1);
	}
	RTLE;
}

/* {SECTOR}.put */
void F86_9948 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc2 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc4 = (EIF_BOOLEAN) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,loc3);
	RTLR(4,loc6);
	RTLIU(5);
	
	RTGC;
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		tb1 = '\01';
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		ti4_1 = F951_4094(RTCW(tr1));
		if (!(EIF_BOOLEAN) (loc1 > ti4_1)) {
			tb1 = loc2;
		}
		if (tb1) break;
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tr1 = F951_4079(RTCW(tr1), loc1);
		if ((EIF_BOOLEAN)(tr1 == arg1)) {
			loc2 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
		loc1++;
	}
	tb2 = '\0';
	if ((EIF_BOOLEAN) !loc2) {
		tb2 = (EIF_BOOLEAN) !F86_9950(Current);
	}
	if (tb2) {
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,956,1508,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			loc3 = RTLNS(typres0.id, 956, _OBJSIZ_1_1_0_1_0_0_0_0_);
		}
		F957_4073(RTCW(loc3), ((EIF_INTEGER_32) 0L));
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		loc6 = F951_4087(RTCW(tr1));
		for (;;) {
			tb2 = F1081_4373(loc6);
			if (tb2) break;
			tr1 = F1081_4364(loc6);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1) + O11110[Dtype(tr1)-415]);
			F957_4113(RTCW(loc3), ti4_1);
			F1081_4379(loc6);
		}
		loc4 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		loc5 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			if ((EIF_BOOLEAN) (loc4 || (EIF_BOOLEAN) (loc5 > ((EIF_INTEGER_32) 4L)))) break;
			tb3 = F957_4085(RTCW(loc3), loc5);
			if ((EIF_BOOLEAN) !tb3) {
				F416_13428(RTCW(arg1), loc5);
				loc4 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			}
			loc5++;
		}
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2222[Dtype(RTCW(tr1))-818])(tr1, arg1);
	}
	RTLE;
}

/* {SECTOR}.print_sector */
EIF_REFERENCE F86_9949 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Result);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	Result = RTMS_EX_H("",0,0);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_0_0_0_);
	tr1 = c_outi(ti4_1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, tr1);
	tr1 = RTMS_EX_H(":",1,58);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, tr1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_0_0_1_);
	tr1 = c_outi(ti4_1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, tr1);
	RTLE;
	return Result;
}

/* {SECTOR}.is_full */
EIF_BOOLEAN F86_9950 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc3 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc2);
	RTLIU(3);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	ti4_1 = F951_4094(RTCW(tr1));
	ti4_2 = ((EIF_INTEGER_32) 4L);
	if ((EIF_BOOLEAN) (ti4_1 < ti4_2)) {
		loc3 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		tb1 = '\01';
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		ti4_1 = F951_4094(RTCW(tr1));
		if (!(EIF_BOOLEAN) (loc1 > ti4_1)) {
			tb1 = loc3;
		}
		if (tb1) break;
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		loc2 = F951_4079(RTCW(tr1), loc1);
		if ((EIF_BOOLEAN) !(EIF_BOOLEAN)(loc2 != NULL)) {
			loc3 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
		loc1++;
	}
	tb2 = '\0';
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	ti4_1 = F951_4094(RTCW(tr1));
	ti4_2 = ((EIF_INTEGER_32) 4L);
	if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
		tb2 = (EIF_BOOLEAN) !loc3;
	}
	if (tb2) {
		RTLE;
		return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	} else {
		RTLE;
		return (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	}/* NOTREACHED */
	
}

/* {SECTOR}.has_stationary */
EIF_BOOLEAN F86_9951 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc2);
	RTLIU(3);
	
	RTGC;
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		tb1 = '\01';
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		ti4_1 = F951_4094(RTCW(tr1));
		if (!(EIF_BOOLEAN) (loc1 > ti4_1)) {
			tb1 = Result;
		}
		if (tb1) break;
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tr1 = F951_4079(RTCW(tr1), loc1);
		loc2 = tr1;
		if ((EIF_TRUE)) {
			Result = F416_13427(loc2);
		}
		loc1++;
	}
	RTLE;
	return Result;
}

/* {SECTOR}.has_entity */
EIF_BOOLEAN F86_9952 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_CHARACTER_8 tc1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	loc1 = F951_4087(RTCW(tr1));
	tb1 = EIF_FALSE;
	for (;;) {
		if (tb1) break;
		tb2 = F1081_4373(loc1);
		if (tb2) break;
		tr1 = F1081_4364(loc1);
		tc1 = *(EIF_CHARACTER_8 *)(RTCW(tr1) + O11108[Dtype(tr1)-415]);
		tb1 = (tc1 == arg1);
		F1081_4379(loc1);
	}
	Result = (EIF_BOOLEAN) tb1;
	RTLE;
	return Result;
}

/* {SECTOR}.has_star */
EIF_BOOLEAN F86_9953 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	Result = '\01';
	if (!F86_9952(Current, (EIF_CHARACTER_8) '*')) {
		Result = F86_9952(Current, (EIF_CHARACTER_8) 'Y');
	}
	RTLE;
	return Result;
}

/* {SECTOR}.entity_at_place */
EIF_CHARACTER_8 F86_9955 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	Result = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '-';
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	loc1 = F951_4087(RTCW(tr1));
	for (;;) {
		tb1 = F1081_4373(loc1);
		if (tb1) break;
		tr1 = F1081_4364(loc1);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1) + O11110[Dtype(tr1)-415]);
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
			tr1 = F1081_4364(loc1);
			Result = *(EIF_CHARACTER_8 *)(RTCW(tr1) + O11108[Dtype(tr1)-415]);
		}
		F1081_4379(loc1);
	}
	RTLE;
	return Result;
}

/* {SECTOR}.entity_at_place_out */
EIF_REFERENCE F86_9956 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,Result);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTGC;
	Result = RTMS_EX_H("-",1,45);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	loc1 = F951_4087(RTCW(tr1));
	for (;;) {
		tb1 = F1081_4373(loc1);
		if (tb1) break;
		tr1 = F1081_4364(loc1);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1) + O11110[Dtype(tr1)-415]);
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
			Result = F1081_4364(loc1);
			Result = F416_13425(RTCW(Result));
		}
		F1081_4379(loc1);
	}
	RTLE;
	return Result;
}

void EIF_Minit1039 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
