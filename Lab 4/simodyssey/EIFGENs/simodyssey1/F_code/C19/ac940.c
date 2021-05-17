/*
 * Code for class ACTION_SEQUENCE [G#1]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ac940.h"
#include "eif_built_in.h"
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

/* {ACTION_SEQUENCE}.default_create */
void F976_4196 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F951_4073(Current, ((EIF_INTEGER_32) 0L));
	*(EIF_INTEGER_32 *)(Current + O3121[Dtype(Current)-975]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTLE;
}

/* {ACTION_SEQUENCE}.on_item_added_at */
void F976_4197 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tb1 = '\0';
	if ((EIF_BOOLEAN)(F951_4094(Current) == ((EIF_INTEGER_32) 1L))) {
		tb1 = (EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_7_) != NULL);
	}
	if (tb1) {
		tr1 = F976_4216(Current);
		F976_4220(Current, tr1);
	}
	RTLE;
}

/* {ACTION_SEQUENCE}.on_item_removed_at */
void F976_4198 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tb1 = '\0';
	if ((EIF_BOOLEAN)(F951_4094(Current) == ((EIF_INTEGER_32) 0L))) {
		tb1 = (EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_8_) != NULL);
	}
	if (tb1) {
		tr1 = F976_4217(Current);
		F976_4220(Current, tr1);
	}
	RTLE;
}

/* {ACTION_SEQUENCE}.call */
void F976_4199 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_INTEGER_32 ti4_6;
	EIF_INTEGER_32 ti4_7;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(9);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,loc5);
	RTLR(5,loc4);
	RTLR(6,loc6);
	RTLR(7,loc3);
	RTLR(8,arg1);
	RTLIU(9);
	
	RTGC;
	if ((EIF_BOOLEAN) (F951_4094(Current) > ((EIF_INTEGER_32) 0L))) {
		ti4_1 = F951_4094(Current);
		{
			EIF_TYPE_INDEX typarr0[] = {0xFF01,1193,0,0,0xFFFF};
			EIF_TYPE typres0;
			{
				EIF_TYPE l_type;
				l_type = eif_final_id(Y2258,Y2258_gen_type,Dftype(Current),684);
				typarr0[2] = l_type.annotations | 0xFF00;
				typarr0[3] = l_type.id;
			}
			
			typres0 = eif_compound_id(Dftype(Current), typarr0);
			loc1 = RTLNSP2(typres0.id,EO_REF,ti4_1,sizeof(EIF_REFERENCE), EIF_FALSE);
			RT_SPECIAL_COUNT(loc1) = 0;
		}
		tr1 = F951_4077(Current);
		ti4_2 = F951_4094(Current);
		/* INLINED CODE (SPECIAL.copy_data) */
		sp_copy_data(RTCW(loc1),tr1,((EIF_INTEGER_32) 0L),((EIF_INTEGER_32) 0L),ti4_2);
		RT_SPECIAL_COUNT(loc1) = eif_max_int32(RT_SPECIAL_COUNT(loc1), ((EIF_INTEGER_32) 0L) + ti4_2);
		/* END INLINED CODE */
		;
		loc5 = *(EIF_REFERENCE *)(Current + _REFACS_6_);
		tb1 = '\0';
		if ((EIF_BOOLEAN)(loc5 != NULL)) {
			tb2 = F736_2537(RTCW(loc5));
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if (tb1) {
			loc4 = F951_4077(RTCW(loc5));
			loc2 = F951_4094(RTCW(loc5));
			loc7 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
			for (;;) {
				if ((EIF_BOOLEAN)(loc7 == loc2)) break;
				/* INLINED CODE (SPECIAL.item) */
				tr1 = *((EIF_REFERENCE *)RTCW(loc4) + (loc7));
				/* END INLINED CODE */
				tr1 = tr1;
				F969_4182(Current, tr1);
				loc7++;
			}
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R2226[Dtype(RTCW(loc5))-950])(loc5);
		}
		switch (*(EIF_INTEGER_32 *)(Current + O3121[Dtype(Current)-975])) {
			case 1L:
				loc6 = F976_4221(Current);
				F916_3564(RTCW(loc6), (EIF_BOOLEAN) 0);
				loc2 = (EIF_INTEGER_32) eif_builtin_SPECIAL_count (loc1);
				loc7 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
				for (;;) {
					tb1 = '\01';
					if (!(EIF_BOOLEAN)(loc7 == loc2)) {
						tb2 = F916_3562(RTCW(loc6));
						tb1 = tb2;
					}
					if (tb1) break;
					/* INLINED CODE (SPECIAL.item) */
					tr1 = *((EIF_REFERENCE *)RTCW(loc1) + (loc7));
					/* END INLINED CODE */
					loc3 = tr1;
					if ((EIF_BOOLEAN)(loc3 != NULL)) {
						(FUNCTION_CAST(void, (EIF_POINTER, EIF_REFERENCE, EIF_REFERENCE)) *(EIF_POINTER *)(RTCW(loc3)+ _PTROFF_4_2_0_3_0_2_))(
							*(EIF_POINTER *)(RTCW(loc3)+ _PTROFF_4_2_0_3_0_1_),
							*(EIF_REFERENCE *)(RTCW(loc3) + _REFACS_1_), arg1);
					}
					loc7++;
				}
				F916_3566(RTCW(loc6));
				break;
			case 2L:
				tr1 = F976_4223(Current);
				F918_3579(RTCW(tr1), arg1);
				break;
			case 3L:
				break;
			default:
				RTEC(EN_WHEN);
		}
	}
	RTLE;
}

/* {ACTION_SEQUENCE}.extend_kamikaze */
void F976_4200 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	F969_4172(Current, arg1);
	F976_4214(Current, arg1);
	RTLE;
}

/* {ACTION_SEQUENCE}.block */
void F976_4204 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_INTEGER_32 *)(Current + O3121[Dtype(Current)-975]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
}

/* {ACTION_SEQUENCE}.resume */
void F976_4206 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	*(EIF_INTEGER_32 *)(Current + O3121[dtype-975]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	loc1 = F976_4223(Current);
	for (;;) {
		tb1 = F736_2537(RTCW(loc1));
		if (tb1) break;
		tr1 = F918_3577(RTCW(loc1));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3112[dtype-975])(Current, tr1);
		F912_3549(RTCW(loc1));
	}
	RTLE;
}

/* {ACTION_SEQUENCE}.prune */
void F976_4213 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc2);
	RTLIU(3);
	
	RTGC;
	F951_4126(Current, arg1);
	loc2 = *(EIF_REFERENCE *)(Current + _REFACS_6_);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		if (*(EIF_BOOLEAN *)(Current + O2212[Dtype(Current)-574])) {
			loc1 = *(EIF_BOOLEAN *)(RTCW(loc2) + O2212[Dtype(loc2)-574]);
			F575_2465(RTCW(loc2));
			F951_4104(RTCW(loc2));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2224[Dtype(RTCW(loc2))-911])(loc2, arg1);
			if ((EIF_BOOLEAN) !loc1) {
				F575_2466(RTCW(loc2));
			}
		} else {
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2224[Dtype(RTCW(loc2))-911])(loc2, arg1);
		}
	}
	RTLE;
}

/* {ACTION_SEQUENCE}.prune_when_called */
void F976_4214 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTGC;
	tr1 = F976_4228(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2222[Dtype(RTCW(tr1))-818])(tr1, arg1);
	RTLE;
}

/* {ACTION_SEQUENCE}.not_empty_actions */
EIF_REFERENCE F976_4216 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTGC;
	Result = *(EIF_REFERENCE *)(Current + _REFACS_7_);
	if ((EIF_BOOLEAN)(Result == NULL)) {
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,950,0xFF01,1552,0xFF01,0xFFF9,0,1475,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0.id, 950, _OBJSIZ_1_1_0_1_0_0_0_0_);
		}
		F951_4073(RTCW(Result), ((EIF_INTEGER_32) 0L));
		RTAR(Current, Result);
		*(EIF_REFERENCE *)(Current + _REFACS_7_) = (EIF_REFERENCE) Result;
	}
	RTLE;
	return Result;
}

/* {ACTION_SEQUENCE}.empty_actions */
EIF_REFERENCE F976_4217 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTGC;
	Result = *(EIF_REFERENCE *)(Current + _REFACS_8_);
	if ((EIF_BOOLEAN)(Result == NULL)) {
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,950,0xFF01,1552,0xFF01,0xFFF9,0,1475,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0.id, 950, _OBJSIZ_1_1_0_1_0_0_0_0_);
		}
		F951_4073(RTCW(Result), ((EIF_INTEGER_32) 0L));
		RTAR(Current, Result);
		*(EIF_REFERENCE *)(Current + _REFACS_8_) = (EIF_REFERENCE) Result;
	}
	RTLE;
	return Result;
}

/* {ACTION_SEQUENCE}.call_action_list */
void F976_4220 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	tb1 = F736_2537(RTCW(arg1));
	if ((EIF_BOOLEAN) !tb1) {
		loc1 = F1_14(arg1);
		loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			ti4_1 = F951_4094(RTCW(loc1));
			if ((EIF_BOOLEAN) (loc2 > ti4_1)) break;
			tr1 = F951_4080(RTCW(loc1), loc2);
			if ((EIF_BOOLEAN)(tr1 != NULL)) {
				tr1 = F951_4079(RTCW(loc1), loc2);
				(FUNCTION_CAST(void, (EIF_POINTER, EIF_REFERENCE)) *(EIF_POINTER *)(RTCW(tr1)+ _PTROFF_4_2_0_3_0_0_))(
					*(EIF_POINTER *)(RTCW(tr1)+ _PTROFF_4_2_0_3_0_1_),
					*(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_1_));
			}
			loc2++;
		}
	}
	RTLE;
}

/* {ACTION_SEQUENCE}.is_aborted_stack */
EIF_REFERENCE F976_4221 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTGC;
	Result = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	if ((EIF_BOOLEAN)(Result == NULL)) {
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,915,1493,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0.id, 915, _OBJSIZ_2_3_0_1_0_0_0_0_);
		}
		F914_3515(RTCW(Result));
		RTAR(Current, Result);
		*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) Result;
	}
	RTLE;
	return Result;
}

/* {ACTION_SEQUENCE}.call_buffer */
EIF_REFERENCE F976_4223 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTGC;
	Result = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	if ((EIF_BOOLEAN)(Result == NULL)) {
		{
			EIF_TYPE_INDEX typarr0[] = {0xFF01,917,0xFF02,0,0,0xFFFF};
			EIF_TYPE typres0;
			{
				EIF_TYPE l_type;
				l_type = eif_final_id(Y3144,Y3144_gen_type,Dftype(Current),975);
				typarr0[3] = l_type.annotations | 0xFF00;
				typarr0[4] = l_type.id;
			}
			
			typres0 = eif_compound_id(Dftype(Current), typarr0);
			Result = RTLNS(typres0.id, 917, _OBJSIZ_2_3_0_1_0_0_0_0_);
		}
		F918_3575(RTCW(Result));
		RTAR(Current, Result);
		*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) Result;
	}
	RTLE;
	return Result;
}

/* {ACTION_SEQUENCE}.kamikazes */
EIF_REFERENCE F976_4228 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTGC;
	Result = *(EIF_REFERENCE *)(Current + _REFACS_6_);
	if ((EIF_BOOLEAN)(Result == NULL)) {
		{
			EIF_TYPE_INDEX typarr0[] = {0xFF01,950,0,0,0xFFFF};
			EIF_TYPE typres0;
			{
				EIF_TYPE l_type;
				l_type = eif_final_id(Y2258,Y2258_gen_type,Dftype(Current),684);
				typarr0[2] = l_type.annotations | 0xFF00;
				typarr0[3] = l_type.id;
			}
			
			typres0 = eif_compound_id(Dftype(Current), typarr0);
			Result = RTLNS(typres0.id, 950, _OBJSIZ_1_1_0_1_0_0_0_0_);
		}
		F951_4073(RTCW(Result), ((EIF_INTEGER_32) 0L));
		RTAR(Current, Result);
		*(EIF_REFERENCE *)(Current + _REFACS_6_) = (EIF_REFERENCE) Result;
	}
	RTLE;
	return Result;
}

void EIF_Minit940 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
