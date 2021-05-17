/*
 * Code for class IMMUTABLE_STRING_8
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "im241.h"
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

/* {IMMUTABLE_STRING_8}.make_from_area_and_bounds */
void F1567_6990 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_3_) = (EIF_INTEGER_32) arg2;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_) = (EIF_INTEGER_32) arg3;
	RTLE;
}

/* {IMMUTABLE_STRING_8}.copy */
void F1567_6992 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 != Current)) {
		eif_builtin_ANY_standard_copy (Current, arg1);
	}
	RTLE;
}

/* {IMMUTABLE_STRING_8}.item */
EIF_CHARACTER_8 F1567_6993 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	/* INLINED CODE (SPECIAL.item) */
	tc2 = *((EIF_CHARACTER_8 *)RTCW(tr1) + ((EIF_INTEGER_32) ((EIF_INTEGER_32) (arg1 + *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_3_)) - ((EIF_INTEGER_32) 1L))));
	/* END INLINED CODE */
	Result = tc2;
	RTLE;
	return Result;
}

/* {IMMUTABLE_STRING_8}.character_32_item */
EIF_CHARACTER_32 F1567_6995 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	EIF_CHARACTER_32 Result = ((EIF_CHARACTER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	/* INLINED CODE (SPECIAL.item) */
	tc2 = *((EIF_CHARACTER_8 *)RTCW(tr1) + ((EIF_INTEGER_32) ((EIF_INTEGER_32) (arg1 + *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_3_)) - ((EIF_INTEGER_32) 1L))));
	/* END INLINED CODE */
	tc1 = tc2;
	Result = (EIF_CHARACTER_32) tc1;
	RTLE;
	return Result;
}

/* {IMMUTABLE_STRING_8}.code */
EIF_NATURAL_32 F1567_6996 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	/* INLINED CODE (SPECIAL.item) */
	tc2 = *((EIF_CHARACTER_8 *)RTCW(tr1) + ((EIF_INTEGER_32) ((EIF_INTEGER_32) (arg1 + *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_3_)) - ((EIF_INTEGER_32) 1L))));
	/* END INLINED CODE */
	tc1 = tc2;
	Result = (EIF_NATURAL_32) tc1;
	RTLE;
	return Result;
}

/* {IMMUTABLE_STRING_8}.plus */
EIF_REFERENCE F1567_6998 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_INTEGER_32 ti4_6;
	EIF_INTEGER_32 ti4_7;
	EIF_INTEGER_32 ti4_8;
	EIF_INTEGER_32 ti4_9;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTLD;
	
	RTLI(9);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,arg1);
	RTLR(3,tr1);
	RTLR(4,loc7);
	RTLR(5,loc8);
	RTLR(6,loc2);
	RTLR(7,loc6);
	RTLR(8,Result);
	RTLIU(9);
	
	RTGC;
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_);
	ti4_2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4681[Dtype(RTCW(arg1))-1560])(arg1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1198,1487,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		loc1 = RTLNSP2(typres0.id,0,(EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 + ti4_2) + ((EIF_INTEGER_32) 1L)),sizeof(EIF_CHARACTER_8), EIF_TRUE);
		RT_SPECIAL_COUNT(loc1) = 0;
	}
	/* INLINED CODE (SPECIAL.copy_data) */
	memmove((EIF_CHARACTER_8 *)RTCW(loc1) + (((EIF_INTEGER_32) 0L)),(EIF_CHARACTER_8 *)*(EIF_REFERENCE *)(Current) + *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_3_), (rt_uint_ptr)sizeof(EIF_CHARACTER_8) * (rt_uint_ptr)*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_));
	RT_SPECIAL_COUNT(loc1) = eif_max_int32(RT_SPECIAL_COUNT(loc1), ((EIF_INTEGER_32) 0L) + *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_));
	/* END INLINED CODE */
	;
	loc7 = arg1;
	loc7 = RTRV(eif_new_type(1558, 0x01),loc7);
	if (EIF_TEST(loc7)) {
		tr1 = *(EIF_REFERENCE *)(loc7);
		ti4_3 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4766[Dtype(loc7)-1560])(loc7);
		ti4_4 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_);
		ti4_5 = *(EIF_INTEGER_32 *)(loc7 + O4768[Dtype(loc7)-1558]);
		/* INLINED CODE (SPECIAL.copy_data) */
		memmove((EIF_CHARACTER_8 *)RTCW(loc1) + (ti4_4),(EIF_CHARACTER_8 *)tr1 + ti4_3, (rt_uint_ptr)sizeof(EIF_CHARACTER_8) * (rt_uint_ptr)(EIF_INTEGER_32) (ti4_5 + ((EIF_INTEGER_32) 1L)));
		RT_SPECIAL_COUNT(loc1) = eif_max_int32(RT_SPECIAL_COUNT(loc1), ti4_4 + (EIF_INTEGER_32) (ti4_5 + ((EIF_INTEGER_32) 1L)));
		/* END INLINED CODE */
		;
	} else {
		loc8 = arg1;
		loc8 = RTRV(eif_new_type(1563, 0x01),loc8);
		if (EIF_TEST(loc8)) {
			ti4_3 = *(EIF_INTEGER_32 *)(loc8 + O4910[Dtype(loc8)-1563]);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,1198,1487,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				loc2 = RTLNSP2(typres0.id,0,(EIF_INTEGER_32) (ti4_3 + ((EIF_INTEGER_32) 1L)),sizeof(EIF_CHARACTER_8), EIF_TRUE);
				RT_SPECIAL_COUNT(loc2) = 0;
			}
			loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
			loc4 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4908[Dtype(loc8)-1564])(loc8);
			loc6 = *(EIF_REFERENCE *)(loc8);
			loc5 = *(EIF_INTEGER_32 *)(loc8 + O4910[Dtype(loc8)-1563]);
			loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc5 - ((EIF_INTEGER_32) 1L));
			for (;;) {
				if ((EIF_BOOLEAN) (loc3 > loc5)) break;
				tw1 = 
					/* INLINED CODE (SPECIAL.item) */
					*((EIF_CHARACTER_32 *)RTCW(loc6) + (loc4))
					/* END INLINED CODE */;
				tc1 = (EIF_CHARACTER_8) tw1;
				F1199_3102(RTCW(loc2), tc1);
				loc3++;
				loc4++;
			}
			F1199_3102(RTCW(loc2), (EIF_CHARACTER_8) '\000');
			/* INLINED CODE (SPECIAL.copy_data) */
			memmove((EIF_CHARACTER_8 *)RTCW(loc1) + (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_)),(EIF_CHARACTER_8 *)loc2 + ((EIF_INTEGER_32) 0L), (rt_uint_ptr)sizeof(EIF_CHARACTER_8) * (rt_uint_ptr)(EIF_INTEGER_32) (loc5 + ((EIF_INTEGER_32) 2L)));
			RT_SPECIAL_COUNT(loc1) = eif_max_int32(RT_SPECIAL_COUNT(loc1), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_) + (EIF_INTEGER_32) (loc5 + ((EIF_INTEGER_32) 2L)));
			/* END INLINED CODE */
			;
		}
	}
	Result = RTLNSMART(dftype);
	ti4_4 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_);
	ti4_5 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4681[Dtype(RTCW(arg1))-1560])(arg1);
	F1567_6990(RTCW(Result), loc1, ((EIF_INTEGER_32) 0L), (EIF_INTEGER_32) (ti4_4 + ti4_5));
	RTLE;
	return Result;
}

/* {IMMUTABLE_STRING_8}.substring */
EIF_REFERENCE F1567_7002 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_CHARACTER_8 tc1;
	RTCFDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) (((EIF_INTEGER_32) 1L) <= arg1) && (EIF_BOOLEAN) (arg1 <= arg2)) && (EIF_BOOLEAN) (arg2 <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_)))) {
		loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 - arg1) + ((EIF_INTEGER_32) 1L));
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,1198,1487,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			loc1 = RTLNSP2(typres0.id,0,(EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L)),sizeof(EIF_CHARACTER_8), EIF_TRUE);
			RT_SPECIAL_COUNT(loc1) = 0;
		}
		/* INLINED CODE (SPECIAL.copy_data) */
		memmove((EIF_CHARACTER_8 *)RTCW(loc1) + (((EIF_INTEGER_32) 0L)),(EIF_CHARACTER_8 *)*(EIF_REFERENCE *)(Current) + (EIF_INTEGER_32) ((EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_3_) + arg1) - ((EIF_INTEGER_32) 1L)), (rt_uint_ptr)sizeof(EIF_CHARACTER_8) * (rt_uint_ptr)loc2);
		RT_SPECIAL_COUNT(loc1) = eif_max_int32(RT_SPECIAL_COUNT(loc1), ((EIF_INTEGER_32) 0L) + loc2);
		/* END INLINED CODE */
		;
		F1199_3102(RTCW(loc1), (EIF_CHARACTER_8) '\000');
		tr1 = RTLNSMART(dftype);
		F1567_6990(RTCW(tr1), loc1, ((EIF_INTEGER_32) 0L), loc2);
		RTLE;
		return (EIF_REFERENCE) tr1;
	} else {
		RTLE;
		return (EIF_REFERENCE) RTOUCR(153,F1567_7007, (Current));
	}/* NOTREACHED */
	
}

/* {IMMUTABLE_STRING_8}.is_empty */
EIF_BOOLEAN F1567_7004 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_) == ((EIF_INTEGER_32) 0L));
}

/* {IMMUTABLE_STRING_8}.new_string */
EIF_REFERENCE F1567_7006 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(1);
	RTLR(0,tr1);
	RTLIU(1);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(1566, 0x01).id, 1566, _OBJSIZ_1_0_0_4_0_0_0_0_);
	F1559_6605(RTCW(tr1), arg1);
	RTLE;
	return (EIF_REFERENCE) tr1;
}

/* {IMMUTABLE_STRING_8}.empty_string */
static EIF_REFERENCE F1567_7007_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(153)

	RTLI(1);
	RTLR(0,tr1);
	RTLIU(1);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(eif_new_type(1566, 0x01).id, 1566, _OBJSIZ_1_0_0_4_0_0_0_0_);
	F1559_6605(RTCW(tr1), ((EIF_INTEGER_32) 0L));
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1567_7007 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(153,F1567_7007_body,(Current));
}

/* {IMMUTABLE_STRING_8}.area_lower */
EIF_INTEGER_32 F1567_7008 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_3_);
}


void EIF_Minit241 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
