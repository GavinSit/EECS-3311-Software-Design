/*
 * Code for class ARRAY [REAL_64]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ar627.h"
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

/* {ARRAY}.make_empty */
void F926_3185 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	F527_2405(Current, ((EIF_INTEGER_32) 0L));
	RTLE;
}

/* {ARRAY}.make_filled */
void F926_3186 (EIF_REFERENCE Current, EIF_REAL_64 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_) = (EIF_INTEGER_32) arg2;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) = (EIF_INTEGER_32) arg3;
	if ((EIF_BOOLEAN) (arg2 <= arg3)) {
		loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg3 - arg2) + ((EIF_INTEGER_32) 1L));
	}
	F527_2406(Current, arg1, loc1);
	RTLE;
}

/* {ARRAY}.make */
void F926_3187 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_) = (EIF_INTEGER_32) arg1;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) = (EIF_INTEGER_32) arg2;
	if ((EIF_BOOLEAN) (arg1 <= arg2)) {
		tr1 = RTLNTY2(eif_final_id(Y2164,Y2164_gen_type,Dftype(Current),548), 0x00);
		tr8_1 = F1427_5304(tr1);
		F527_2406(Current, tr8_1, (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 - arg1) + ((EIF_INTEGER_32) 1L)));
	} else {
		F527_2405(Current, ((EIF_INTEGER_32) 0L));
	}
	RTLE;
}

/* {ARRAY}.make_from_special */
void F926_3189 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	F527_2412(Current, arg1);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	ti4_1 = (EIF_INTEGER_32) eif_builtin_SPECIAL_count (arg1);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) = (EIF_INTEGER_32) ti4_1;
	RTLE;
}

/* {ARRAY}.item */
EIF_REAL_64 F926_3191 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_INTEGER_32 ti4_1;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	/* INLINED CODE (SPECIAL.item) */
	tr8_2 = *((EIF_REAL_64 *)RTCW(tr1) + ((EIF_INTEGER_32) (arg1 - *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_))));
	/* END INLINED CODE */
	Result = tr8_2;
	RTLE;
	return Result;
}

/* {ARRAY}.at */
EIF_REAL_64 F926_3192 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_INTEGER_32 ti4_1;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	/* INLINED CODE (SPECIAL.item) */
	tr8_2 = *((EIF_REAL_64 *)RTCW(tr1) + ((EIF_INTEGER_32) (arg1 - *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_))));
	/* END INLINED CODE */
	Result = tr8_2;
	RTLE;
	return Result;
}

/* {ARRAY}.new_cursor */
EIF_REFERENCE F926_3195 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	{
		EIF_TYPE_INDEX typarr0[] = {0xFF01,1119,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = eif_final_id(Y2164,Y2164_gen_type,Dftype(Current),548);
			typarr0[2] = l_type.annotations | 0xFF00;
			typarr0[3] = l_type.id;
		}
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		tr1 = RTLNS(typres0.id, 1119, _OBJSIZ_2_0_0_3_0_0_0_0_);
	}
	F1120_4402(RTCW(tr1), Current);
	RTLE;
	return (EIF_REFERENCE) tr1;
}

/* {ARRAY}.lower */
EIF_INTEGER_32 F926_3196 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_);
}


/* {ARRAY}.upper */
EIF_INTEGER_32 F926_3197 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_);
}


/* {ARRAY}.count */
EIF_INTEGER_32 F926_3198 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) - *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_)) + ((EIF_INTEGER_32) 1L));
}

/* {ARRAY}.capacity */
EIF_INTEGER_32 F926_3199 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) - *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_)) + ((EIF_INTEGER_32) 1L));
}

/* {ARRAY}.is_equal */
EIF_BOOLEAN F926_3201 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 == Current)) {
		RTLE;
		return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	} else {
		tb1 = '\0';
		tb2 = '\0';
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_1_);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_) == ti4_1)) {
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_0_);
			tb2 = (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) == ti4_1);
		}
		if (tb2) {
			tb2 = *(EIF_BOOLEAN *)(RTCW(arg1)+ _CHROFF_1_0_);
			tb1 = (EIF_BOOLEAN)(*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_) == tb2);
		}
		if (tb1) {
			if (*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_)) {
				Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_);
				for (;;) {
					if ((EIF_BOOLEAN) ((EIF_BOOLEAN) !Result || (EIF_BOOLEAN) (loc1 > *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_)))) break;
					tr8_1 = F926_3191(Current, loc1);
					tr8_2 = F926_3191(RTCW(arg1), loc1);
					Result = (EIF_BOOLEAN) (EIF_BOOLEAN) eif_is_equal_real_64 (tr8_1, tr8_2);
					loc1++;
				}
			} else {
				tr1 = *(EIF_REFERENCE *)(Current);
				tr2 = *(EIF_REFERENCE *)(RTCW(arg1));
				ti4_1 = F926_3198(Current);
				Result = F1201_3098(RTCW(tr1), tr2, ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ti4_1);
			}
		}
	}
	RTLE;
	return Result;
}

/* {ARRAY}.valid_index */
EIF_BOOLEAN F926_3206 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_);
	ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN) (ti4_1 <= arg1) && (EIF_BOOLEAN) (arg1 <= ti4_2));
	return Result;
}

/* {ARRAY}.extendible */
EIF_BOOLEAN F926_3207 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
}

/* {ARRAY}.put */
void F926_3210 (EIF_REFERENCE Current, EIF_REAL_64 arg1, EIF_INTEGER_32 arg2)
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
	tr1 = *(EIF_REFERENCE *)(Current);
	/* INLINED CODE (SPECIAL.put) */
	*((EIF_REAL_64 *)RTCW(tr1) + ((EIF_INTEGER_32) (arg2 - *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_)))) = arg1;
	/* END INLINED CODE */
	;
	RTLE;
}

/* {ARRAY}.force */
void F926_3212 (EIF_REFERENCE Current, EIF_REAL_64 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc7 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCFDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTGC;
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_);
	loc3 = eif_min_int32 (ti4_1,arg2);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_);
	loc4 = eif_max_int32 (ti4_1,arg2);
	loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc4 - loc3) + ((EIF_INTEGER_32) 1L));
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_);
	ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_);
	loc7 = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN)(arg2 == (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L))) || (EIF_BOOLEAN)(arg2 == (EIF_INTEGER_32) (ti4_2 - ((EIF_INTEGER_32) 1L))));
	if (F926_3243(Current)) {
		ti4_1 = F811_2556(Current);
		ti4_1 = eif_max_int32 (loc2,ti4_1);
		F527_2405(Current, ti4_1);
		if ((EIF_BOOLEAN) (loc3 < *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_))) {
			tr1 = *(EIF_REFERENCE *)(Current);
			F1201_3102(RTCW(tr1), arg1);
			if ((EIF_BOOLEAN) !loc7) {
				tr1 = *(EIF_REFERENCE *)(Current);
				tr2 = RTLNTY2(eif_final_id(Y2164,Y2164_gen_type,dftype,548), 0x00);
				tr8_1 = F1427_5304(tr2);
				F1201_3104(RTCW(tr1), tr8_1, ((EIF_INTEGER_32) 1L), (EIF_INTEGER_32) (loc2 - ((EIF_INTEGER_32) 1L)));
			}
		} else {
			if ((EIF_BOOLEAN) !loc7) {
				tr1 = *(EIF_REFERENCE *)(Current);
				tr2 = RTLNTY2(eif_final_id(Y2164,Y2164_gen_type,dftype,548), 0x00);
				tr8_1 = F1427_5304(tr2);
				F1201_3104(RTCW(tr1), tr8_1, ((EIF_INTEGER_32) 0L), (EIF_INTEGER_32) (loc2 - ((EIF_INTEGER_32) 2L)));
			}
			tr1 = *(EIF_REFERENCE *)(Current);
			F1201_3102(RTCW(tr1), arg1);
		}
	} else {
		tr1 = *(EIF_REFERENCE *)(Current);
		loc1 = (EIF_INTEGER_32) eif_builtin_SPECIAL_capacity (tr1);
		if ((EIF_BOOLEAN) (loc2 > loc1)) {
			tr1 = *(EIF_REFERENCE *)(Current);
			ti4_1 = F811_2556(Current);
			ti4_1 = eif_max_int32 (loc2,(EIF_INTEGER_32) (loc1 + ti4_1));
			tr1 = F1201_3117(tr1, ti4_1);
			F527_2412(Current, tr1);
		}
		if ((EIF_BOOLEAN) (loc3 < *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_))) {
			loc6 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_);
			loc6 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc6 - loc3);
			loc5 = F926_3199(Current);
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN) !loc7 && (EIF_BOOLEAN) (loc6 > loc5))) {
				tr1 = *(EIF_REFERENCE *)(Current);
				tr2 = RTLNTY2(eif_final_id(Y2164,Y2164_gen_type,dftype,548), 0x00);
				tr8_1 = F1427_5304(tr2);
				F1201_3104(RTCW(tr1), tr8_1, loc5, (EIF_INTEGER_32) (loc6 - ((EIF_INTEGER_32) 1L)));
			}
			tr1 = *(EIF_REFERENCE *)(Current);
			/* INLINED CODE (SPECIAL.overlapping_move) */
			memmove((EIF_REAL_64 *)RTCW(tr1) + (loc6),(EIF_REAL_64 *)RTCW(tr1) + ((EIF_INTEGER_32) 0L), (rt_uint_ptr)sizeof(EIF_REAL_64) * (rt_uint_ptr)loc5);
			RT_SPECIAL_COUNT(tr1) = eif_max_int32(RT_SPECIAL_COUNT(tr1), loc6 + loc5);
			/* END INLINED CODE */
			;
			if ((EIF_BOOLEAN) !loc7) {
				tr1 = *(EIF_REFERENCE *)(Current);
				tr2 = RTLNTY2(eif_final_id(Y2164,Y2164_gen_type,dftype,548), 0x00);
				tr8_1 = F1427_5304(tr2);
				F1201_3104(RTCW(tr1), tr8_1, ((EIF_INTEGER_32) 1L), (EIF_INTEGER_32) (loc6 - ((EIF_INTEGER_32) 1L)));
			}
			tr1 = *(EIF_REFERENCE *)(Current);
			/* INLINED CODE (SPECIAL.put) */
			*((EIF_REAL_64 *)RTCW(tr1) + (((EIF_INTEGER_32) 0L))) = arg1;
			/* END INLINED CODE */
			;
		} else {
			tr1 = *(EIF_REFERENCE *)(Current);
			ti4_1 = (EIF_INTEGER_32) eif_builtin_SPECIAL_count (tr1);
			if ((EIF_BOOLEAN) (loc2 > ti4_1)) {
				if ((EIF_BOOLEAN) !loc7) {
					tr1 = *(EIF_REFERENCE *)(Current);
					tr2 = RTLNTY2(eif_final_id(Y2164,Y2164_gen_type,dftype,548), 0x00);
					tr8_1 = F1427_5304(tr2);
					tr2 = *(EIF_REFERENCE *)(Current);
					ti4_1 = (EIF_INTEGER_32) eif_builtin_SPECIAL_count (tr2);
					F1201_3104(RTCW(tr1), tr8_1, ti4_1, (EIF_INTEGER_32) (loc2 - ((EIF_INTEGER_32) 2L)));
				}
				tr1 = *(EIF_REFERENCE *)(Current);
				F1201_3102(RTCW(tr1), arg1);
			} else {
				tr1 = *(EIF_REFERENCE *)(Current);
				/* INLINED CODE (SPECIAL.put) */
				*((EIF_REAL_64 *)RTCW(tr1) + ((EIF_INTEGER_32) (arg2 - *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_)))) = arg1;
				/* END INLINED CODE */
				;
			}
		}
	}
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_) = (EIF_INTEGER_32) loc3;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) = (EIF_INTEGER_32) loc4;
	RTLE;
}

/* {ARRAY}.subcopy */
void F926_3215 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_INTEGER_32 ti4_6;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = *(EIF_REFERENCE *)(RTCW(arg1));
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_1_);
	/* INLINED CODE (SPECIAL.copy_data) */
	memmove((EIF_REAL_64 *)RTCW(tr1) + ((EIF_INTEGER_32) (arg4 - *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_))),(EIF_REAL_64 *)tr2 + (EIF_INTEGER_32) (arg2 - ti4_1), (rt_uint_ptr)sizeof(EIF_REAL_64) * (rt_uint_ptr)(EIF_INTEGER_32) ((EIF_INTEGER_32) (arg3 - arg2) + ((EIF_INTEGER_32) 1L)));
	RT_SPECIAL_COUNT(tr1) = eif_max_int32(RT_SPECIAL_COUNT(tr1), (EIF_INTEGER_32) (arg4 - *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_)) + (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg3 - arg2) + ((EIF_INTEGER_32) 1L)));
	/* END INLINED CODE */
	;
	RTLE;
}

/* {ARRAY}.grow */
void F926_3229 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	if ((EIF_BOOLEAN) (arg1 > F926_3199(Current))) {
		tr1 = RTLNTY2(eif_final_id(Y2164,Y2164_gen_type,Dftype(Current),548), 0x00);
		tr8_1 = F1427_5304(tr1);
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_);
		ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_);
		ti4_3 = F926_3199(Current);
		F926_3231(Current, tr8_1, ti4_1, (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_2 + arg1) - ti4_3));
	}
	RTLE;
}

/* {ARRAY}.conservative_resize_with_default */
void F926_3231 (EIF_REFERENCE Current, EIF_REAL_64 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	if (F926_3243(Current)) {
		tr1 = *(EIF_REFERENCE *)(Current);
		tr1 = F1201_3118(RTCW(tr1), arg1, (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg3 - arg2) + ((EIF_INTEGER_32) 1L)));
		F527_2412(Current, tr1);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_) = (EIF_INTEGER_32) arg2;
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) = (EIF_INTEGER_32) arg3;
	} else {
		loc2 = eif_min_int32 (arg2,*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_));
		loc3 = eif_max_int32 (arg3,*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_));
		loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc3 - loc2) + ((EIF_INTEGER_32) 1L));
		tr1 = *(EIF_REFERENCE *)(Current);
		ti4_1 = (EIF_INTEGER_32) eif_builtin_SPECIAL_count (tr1);
		if ((EIF_BOOLEAN) (loc1 > ti4_1)) {
			tr1 = *(EIF_REFERENCE *)(Current);
			tr1 = F1201_3118(RTCW(tr1), arg1, loc1);
			F527_2412(Current, tr1);
		}
		if ((EIF_BOOLEAN) (loc2 < *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_))) {
			loc4 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_);
			loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc4 - loc2);
			tr1 = *(EIF_REFERENCE *)(Current);
			/* INLINED CODE (SPECIAL.overlapping_move) */
			memmove((EIF_REAL_64 *)RTCW(tr1) + (loc4),(EIF_REAL_64 *)RTCW(tr1) + ((EIF_INTEGER_32) 0L), (rt_uint_ptr)sizeof(EIF_REAL_64) * (rt_uint_ptr)(EIF_INTEGER_32) ((EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) - *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_)) + ((EIF_INTEGER_32) 1L)));
			RT_SPECIAL_COUNT(tr1) = eif_max_int32(RT_SPECIAL_COUNT(tr1), loc4 + (EIF_INTEGER_32) ((EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) - *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_)) + ((EIF_INTEGER_32) 1L)));
			/* END INLINED CODE */
			;
			tr1 = *(EIF_REFERENCE *)(Current);
			F1201_3104(RTCW(tr1), arg1, ((EIF_INTEGER_32) 0L), (EIF_INTEGER_32) (loc4 - ((EIF_INTEGER_32) 1L)));
		}
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_) = (EIF_INTEGER_32) loc2;
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) = (EIF_INTEGER_32) loc3;
	}
	RTLE;
}

/* {ARRAY}.linear_representation */
EIF_REFERENCE F926_3238 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	{
		EIF_TYPE_INDEX typarr0[] = {0xFF01,957,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = eif_final_id(Y2164,Y2164_gen_type,Dftype(Current),548);
			typarr0[2] = l_type.annotations | 0xFF00;
			typarr0[3] = l_type.id;
		}
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		loc1 = RTLNS(typres0.id, 957, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	ti4_1 = F926_3199(Current);
	F958_4073(RTCW(loc1), ti4_1);
	loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_);
	for (;;) {
		if ((EIF_BOOLEAN) (loc2 > *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_))) break;
		tr8_1 = F926_3191(Current, loc2);
		F958_4114(RTCW(loc1), tr8_1);
		loc2++;
	}
	RTLE;
	return (EIF_REFERENCE) loc1;
}

/* {ARRAY}.copy */
void F926_3239 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 != Current)) {
		eif_builtin_ANY_standard_copy (Current, arg1);
		tr1 = *(EIF_REFERENCE *)(RTCW(arg1));
		tr1 = F1_14(tr1);
		F527_2412(Current, tr1);
	}
	RTLE;
}

/* {ARRAY}.extend */
void F926_3242 (EIF_REFERENCE Current, EIF_REAL_64 arg1)
{
	GTCX
	
	
	RTGC;
}

/* {ARRAY}.empty_area */
EIF_BOOLEAN F926_3243 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	ti4_1 = (EIF_INTEGER_32) eif_builtin_SPECIAL_capacity (tr1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L));
	RTLE;
	return Result;
}

void EIF_Minit627 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
