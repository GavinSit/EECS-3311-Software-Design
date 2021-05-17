/*
 * Code for class READABLE_STRING_32
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "re238.h"
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

/* {READABLE_STRING_32}.make */
void F1564_6847 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER_32 tw1;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	*(EIF_INTEGER_32 *)(Current + O4910[dtype-1563]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*(EIF_INTEGER_32 *)(Current + O4734[dtype-1557]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\000';
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1207,1484,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNSP2(typres0.id,0,(EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L)),sizeof(EIF_CHARACTER_32), EIF_TRUE);
	}
	F1208_3083(RTCW(tr1), tw1, (EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {READABLE_STRING_32}.make_filled */
void F1564_6848 (EIF_REFERENCE Current, EIF_CHARACTER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1564_6847(Current, arg2);
	F1564_6886(Current, arg1);
	RTLE;
}

/* {READABLE_STRING_32}.make_from_string */
void F1564_6849 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_INTEGER_32 ti4_6;
	EIF_INTEGER_32 ti4_7;
	EIF_CHARACTER_32 tw1;
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O4910[Dtype(arg1)-1563]);
	*(EIF_INTEGER_32 *)(Current + O4910[dtype-1563]) = (EIF_INTEGER_32) ti4_1;
	*(EIF_INTEGER_32 *)(Current + O4734[dtype-1557]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	if ((EIF_BOOLEAN)(Current != arg1)) {
		ti4_1 = *(EIF_INTEGER_32 *)(Current + O4910[dtype-1563]);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,1207,1484,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			tr1 = RTLNSP2(typres0.id,0,(EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)),sizeof(EIF_CHARACTER_32), EIF_TRUE);
			RT_SPECIAL_COUNT(tr1) = 0;
		}
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = *(EIF_REFERENCE *)(RTCW(arg1));
		ti4_2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4908[Dtype(RTCW(arg1))-1564])(arg1);
		ti4_3 = *(EIF_INTEGER_32 *)(Current + O4910[dtype-1563]);
		/* INLINED CODE (SPECIAL.copy_data) */
		memmove((EIF_CHARACTER_32 *)RTCW(tr1) + (((EIF_INTEGER_32) 0L)),(EIF_CHARACTER_32 *)tr2 + ti4_2, (rt_uint_ptr)sizeof(EIF_CHARACTER_32) * (rt_uint_ptr)(EIF_INTEGER_32) (ti4_3 + ((EIF_INTEGER_32) 1L)));
		RT_SPECIAL_COUNT(tr1) = eif_max_int32(RT_SPECIAL_COUNT(tr1), ((EIF_INTEGER_32) 0L) + (EIF_INTEGER_32) (ti4_3 + ((EIF_INTEGER_32) 1L)));
		/* END INLINED CODE */
		;
	}
	RTLE;
}

/* {READABLE_STRING_32}.make_from_separate */
void F1564_6854 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN uarg1;
	EIF_BOOLEAN uarg;
	RTS_SD;
	RTS_SDC;
	EIF_CHARACTER_32 tw1;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,loc3);
	RTLIU(3);
	
	RTGC;
	uarg1 = (EIF_BOOLEAN) RTS_OU (arg1);
	uarg = uarg1;
	if (uarg) {
		RTS_RC;
		RTS_RS (arg1);
		RTS_RW;
	}
	if (RTS_CI (EIF_TRUE, arg1)) {
		RTS_BI (arg1);
		loc2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4681[Dtype(RTCW(arg1))-1560])(arg1);
		RTS_EI;
	} else {
		RTS_AC (0, arg1);
		RTS_CALL (R4681[Dtype(arg1)-1560], eif_scr1, 0, &(loc2));
	}
	F1564_6847(Current, loc2);
	loc3 = *(EIF_REFERENCE *)(Current);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	for (;;) {
		if ((EIF_BOOLEAN)(loc1 == loc2)) break;
		if (RTS_CI (EIF_TRUE, arg1)) {
			RTS_BI (arg1);
			tw1 = (FUNCTION_CAST(EIF_CHARACTER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4645[Dtype(RTCW(arg1))-1560])(arg1, (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)));
			RTS_EI;
		} else {
			RTS_AC (1, arg1);
			RTS_AA ((EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)), it_i4, SK_INT32, 1);
			RTS_CALL (R4645[Dtype(arg1)-1560], eif_scr5, 0, &(tw1));
		}
		/* INLINED CODE (SPECIAL.put) */
		*((EIF_CHARACTER_32 *)RTCW(loc3) + (loc1)) = tw1;
		/* END INLINED CODE */
		;
		loc1++;
	}
	*(EIF_INTEGER_32 *)(Current + O4910[Dtype(Current)-1563]) = (EIF_INTEGER_32) loc2;
	if (uarg) {
		RTS_RD;
	}
	RTLE;
}

/* {READABLE_STRING_32}.index_of */
EIF_INTEGER_32 F1564_6858 (EIF_REFERENCE Current, EIF_CHARACTER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 tw2;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLIU(2);
	
	RTGC;
	loc3 = *(EIF_INTEGER_32 *)(Current + O4910[dtype-1563]);
	if ((EIF_BOOLEAN) (arg2 <= loc3)) {
		loc4 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4908[dtype-1564])(Current);
		loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L)) + loc4);
		loc3 += loc4;
		loc1 = *(EIF_REFERENCE *)(Current);
		for (;;) {
			tb1 = '\01';
			if (!(EIF_BOOLEAN)(loc2 == loc3)) {
				/* INLINED CODE (SPECIAL.item) */
				tw2 = *((EIF_CHARACTER_32 *)RTCW(loc1) + (loc2));
				/* END INLINED CODE */
				tw1 = tw2;
				tb1 = (EIF_BOOLEAN)(tw1 == arg1);
			}
			if (tb1) break;
			loc2++;
		}
		if ((EIF_BOOLEAN) (loc2 < loc3)) {
			RTLE;
			return (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L)) - loc4);
		}
	}
	RTLE;
	return (EIF_INTEGER_32) 0;
}

/* {READABLE_STRING_32}.substring_index */
EIF_INTEGER_32 F1564_6863 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTGC;
	tr1 = RTOUCR(118,F1564_6890, (Current));
	Result = F388_1541(RTCW(tr1), Current, arg1, arg2, *(EIF_INTEGER_32 *)(Current + O4910[Dtype(Current)-1563]));
	RTLE;
	return Result;
}

/* {READABLE_STRING_32}.capacity */
EIF_INTEGER_32 F1564_6866 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	Result = (EIF_INTEGER_32) eif_builtin_SPECIAL_count (tr1);
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result - ((EIF_INTEGER_32) 1L));
	RTLE;
	return Result;
}

/* {READABLE_STRING_32}.count */
EIF_INTEGER_32 F1564_6867 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current + O4910[Dtype(Current)-1563]);
}


/* {READABLE_STRING_32}.occurrences */
EIF_INTEGER_32 F1564_6868 (EIF_REFERENCE Current, EIF_CHARACTER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 tw2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc3);
	RTLIU(2);
	
	RTGC;
	loc1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4908[dtype-1564])(Current);
	loc2 = *(EIF_INTEGER_32 *)(Current + O4910[dtype-1563]);
	loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + loc1);
	loc3 = *(EIF_REFERENCE *)(Current);
	for (;;) {
		if ((EIF_BOOLEAN)(loc1 == loc2)) break;
		/* INLINED CODE (SPECIAL.item) */
		tw2 = *((EIF_CHARACTER_32 *)RTCW(loc3) + (loc1));
		/* END INLINED CODE */
		tw1 = tw2;
		if ((EIF_BOOLEAN)(tw1 == arg1)) {
			Result++;
		}
		loc1++;
	}
	RTLE;
	return Result;
}

/* {READABLE_STRING_32}.lower */
EIF_INTEGER_32 F1564_6869 (EIF_REFERENCE Current)
{
	return (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
}

/* {READABLE_STRING_32}.is_equal */
EIF_BOOLEAN F1564_6870 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
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
		loc1 = *(EIF_INTEGER_32 *)(Current + O4910[dtype-1563]);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O4910[Dtype(arg1)-1563]);
		if ((EIF_BOOLEAN)(loc1 == ti4_1)) {
			loc2 = *(EIF_INTEGER_32 *)(Current + O4734[dtype-1557]);
			loc3 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O4734[Dtype(arg1)-1557]);
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 0L)) || (EIF_BOOLEAN)(loc3 == ((EIF_INTEGER_32) 0L))) || (EIF_BOOLEAN)(loc2 == loc3))) {
				tr1 = *(EIF_REFERENCE *)(Current);
				tr2 = *(EIF_REFERENCE *)(RTCW(arg1));
				ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4908[Dtype(RTCW(arg1))-1564])(arg1);
				ti4_2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4908[dtype-1564])(Current);
				Result = F1208_3098(RTCW(tr1), tr2, ti4_1, ti4_2, loc1);
			}
		}
	}
	RTLE;
	return Result;
}

/* {READABLE_STRING_32}.is_case_insensitive_equal */
EIF_BOOLEAN F1564_6871 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 == Current)) {
		RTLE;
		return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	} else {
		loc1 = *(EIF_INTEGER_32 *)(Current + O4910[Dtype(Current)-1563]);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O4910[Dtype(arg1)-1563]);
		if ((EIF_BOOLEAN)(loc1 == ti4_1)) {
			Result = '\01';
			if (!(EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 0L))) {
				Result = F1564_6872(Current, arg1, ((EIF_INTEGER_32) 1L), loc1, ((EIF_INTEGER_32) 1L));
			}
		}
	}
	RTLE;
	return Result;
}

/* {READABLE_STRING_32}.same_caseless_characters */
EIF_BOOLEAN F1564_6872 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_CHARACTER_32 loc7 = (EIF_CHARACTER_32) 0;
	EIF_CHARACTER_32 loc8 = (EIF_CHARACTER_32) 0;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 tw2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,loc4);
	RTLR(2,loc5);
	RTLR(3,loc6);
	RTLR(4,arg1);
	RTLIU(5);
	
	RTGC;
	loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg3 - arg2) + ((EIF_INTEGER_32) 1L));
	if ((EIF_BOOLEAN) (loc3 <= (EIF_INTEGER_32) ((EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current + O4910[dtype-1563]) - arg4) + ((EIF_INTEGER_32) 1L)))) {
		loc4 = RTOUCR(119,F1558_6601, (Current));
		loc5 = *(EIF_REFERENCE *)(Current);
		loc6 = *(EIF_REFERENCE *)(RTCW(arg1));
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		loc1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4908[dtype-1564])(Current);
		loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 + arg4) - ((EIF_INTEGER_32) 1L));
		loc2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4908[Dtype(RTCW(arg1))-1564])(arg1);
		loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc2 + arg2) - ((EIF_INTEGER_32) 1L));
		loc3 += loc1;
		for (;;) {
			if ((EIF_BOOLEAN)(loc1 == loc3)) break;
			/* INLINED CODE (SPECIAL.item) */
			tw2 = *((EIF_CHARACTER_32 *)RTCW(loc5) + (loc1));
			/* END INLINED CODE */
			loc7 = tw2;
			/* INLINED CODE (SPECIAL.item) */
			tw2 = *((EIF_CHARACTER_32 *)RTCW(loc6) + (loc2));
			/* END INLINED CODE */
			loc8 = tw2;
			tb1 = '\0';
			if ((EIF_BOOLEAN)(loc7 != loc8)) {
				tw1 = F128_229(RTCW(loc4), loc7);
				tw2 = F128_229(RTCW(loc4), loc8);
				tb1 = (EIF_BOOLEAN)(tw1 != tw2);
			}
			if (tb1) {
				Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
				loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L));
			}
			loc1++;
			loc2++;
		}
	}
	RTLE;
	return Result;
}

/* {READABLE_STRING_32}.is_less */
EIF_BOOLEAN F1564_6875 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 != Current)) {
		loc1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O4910[Dtype(arg1)-1563]);
		loc2 = *(EIF_INTEGER_32 *)(Current + O4910[dtype-1563]);
		if ((EIF_BOOLEAN)(loc1 == loc2)) {
			tr1 = *(EIF_REFERENCE *)(RTCW(arg1));
			tr2 = *(EIF_REFERENCE *)(Current);
			ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4908[Dtype(RTCW(arg1))-1564])(arg1);
			ti4_2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4908[dtype-1564])(Current);
			ti4_1 = F1564_6891(Current, tr1, tr2, ti4_1, ti4_2, loc1);
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L));
		} else {
			if ((EIF_BOOLEAN) (loc2 < loc1)) {
				tr1 = *(EIF_REFERENCE *)(RTCW(arg1));
				tr2 = *(EIF_REFERENCE *)(Current);
				ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4908[Dtype(RTCW(arg1))-1564])(arg1);
				ti4_2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4908[dtype-1564])(Current);
				ti4_1 = F1564_6891(Current, tr1, tr2, ti4_1, ti4_2, loc2);
				Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 0L));
			} else {
				tr1 = *(EIF_REFERENCE *)(RTCW(arg1));
				tr2 = *(EIF_REFERENCE *)(Current);
				ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4908[Dtype(RTCW(arg1))-1564])(arg1);
				ti4_2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4908[dtype-1564])(Current);
				ti4_1 = F1564_6891(Current, tr1, tr2, ti4_1, ti4_2, loc1);
				Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L));
			}
		}
	}
	RTLE;
	return Result;
}

/* {READABLE_STRING_32}.is_string_32 */
EIF_BOOLEAN F1564_6877 (EIF_REFERENCE Current)
{
	return (EIF_BOOLEAN) EIF_TRUE;
}

/* {READABLE_STRING_32}.is_substring_whitespace */
EIF_BOOLEAN F1564_6879 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 tw2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc4);
	RTLR(1,Current);
	RTLR(2,loc3);
	RTLIU(3);
	
	RTGC;
	loc4 = *(EIF_REFERENCE *)(Current);
	loc1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4908[dtype-1564])(Current);
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 + arg1) - ((EIF_INTEGER_32) 1L));
	loc2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4908[dtype-1564])(Current);
	loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc2 + arg2) - ((EIF_INTEGER_32) 1L));
	loc3 = RTOUCR(119,F1558_6601, (Current));
	for (;;) {
		tb1 = '\01';
		if (!(EIF_BOOLEAN) (loc1 > loc2)) {
			/* INLINED CODE (SPECIAL.item) */
			tw2 = *((EIF_CHARACTER_32 *)RTCW(loc4) + (loc1));
			/* END INLINED CODE */
			tw1 = tw2;
			tb2 = F128_225(RTCW(loc3), tw1);
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if (tb1) break;
		loc1++;
	}
	RTLE;
	return (EIF_BOOLEAN) (EIF_BOOLEAN) (loc1 > loc2);
}

/* {READABLE_STRING_32}.copy */
void F1564_6885 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_INTEGER_32 ti4_6;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 != Current)) {
		loc1 = *(EIF_REFERENCE *)(Current);
		eif_builtin_ANY_standard_copy (Current, arg1);
		tb1 = '\01';
		tb2 = '\01';
		if (!(EIF_BOOLEAN)(loc1 == NULL)) {
			tr1 = *(EIF_REFERENCE *)(RTCW(arg1));
			tb2 = (EIF_BOOLEAN)(loc1 == tr1);
		}
		if (!tb2) {
			ti4_1 = (EIF_INTEGER_32) eif_builtin_SPECIAL_count (loc1);
			tb1 = (EIF_BOOLEAN) (ti4_1 <= *(EIF_INTEGER_32 *)(Current + O4910[dtype-1563]));
		}
		if (tb1) {
			tr1 = *(EIF_REFERENCE *)(Current);
			tr1 = F1208_3115(RTCW(tr1), (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current + O4910[dtype-1563]) + ((EIF_INTEGER_32) 1L)));
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
		} else {
			/* INLINED CODE (SPECIAL.copy_data) */
			memmove((EIF_CHARACTER_32 *)RTCW(loc1) + (((EIF_INTEGER_32) 0L)),(EIF_CHARACTER_32 *)*(EIF_REFERENCE *)(Current) + ((EIF_INTEGER_32) 0L), (rt_uint_ptr)sizeof(EIF_CHARACTER_32) * (rt_uint_ptr)*(EIF_INTEGER_32 *)(Current + O4910[dtype-1563]));
			RT_SPECIAL_COUNT(loc1) = eif_max_int32(RT_SPECIAL_COUNT(loc1), ((EIF_INTEGER_32) 0L) + *(EIF_INTEGER_32 *)(Current + O4910[dtype-1563]));
			/* END INLINED CODE */
			;
			RTAR(Current, loc1);
			*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) loc1;
		}
		*(EIF_INTEGER_32 *)(Current + O4734[dtype-1557]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	}
	RTLE;
}

/* {READABLE_STRING_32}.fill_character */
void F1564_6886 (EIF_REFERENCE Current, EIF_CHARACTER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	loc1 = F1564_6866(Current);
	if ((EIF_BOOLEAN)(loc1 != ((EIF_INTEGER_32) 0L))) {
		tr1 = *(EIF_REFERENCE *)(Current);
		F1208_3104(RTCW(tr1), arg1, ((EIF_INTEGER_32) 0L), (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L)));
		*(EIF_INTEGER_32 *)(Current + O4910[dtype-1563]) = (EIF_INTEGER_32) loc1;
		*(EIF_INTEGER_32 *)(Current + O4734[dtype-1557]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	}
	RTLE;
}

/* {READABLE_STRING_32}.out */
EIF_REFERENCE F1564_6889 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	Result = RTLNS(eif_new_type(1560, 0x01).id, 1560, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F1559_6605(RTCW(Result), *(EIF_INTEGER_32 *)(Current + O4910[Dtype(Current)-1563]));
	tr1 = F1558_6566(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, tr1);
	RTLE;
	return Result;
}

/* {READABLE_STRING_32}.string_searcher */
static EIF_REFERENCE F1564_6890_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(118)

	RTLI(1);
	RTLR(0,tr1);
	RTLIU(1);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(eif_new_type(389, 0x01).id, 389, _OBJSIZ_2_0_0_0_0_0_0_0_);
	F388_1537(RTCW(tr1));
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1564_6890 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(118,F1564_6890_body,(Current));
}

/* {READABLE_STRING_32}.str_strict_cmp */
EIF_INTEGER_32 F1564_6891 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_INTEGER_32 arg5)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 tw2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLIU(2);
	
	RTGC;
	loc1 = (EIF_INTEGER_32) arg3;
	loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + arg5);
	loc2 = (EIF_INTEGER_32) arg4;
	for (;;) {
		if ((EIF_BOOLEAN)(loc1 == loc3)) break;
		/* INLINED CODE (SPECIAL.item) */
		tw2 = *((EIF_CHARACTER_32 *)RTCW(arg1) + (loc1));
		/* END INLINED CODE */
		tw1 = tw2;
		loc4 = (EIF_INTEGER_32) (tw1);
		/* INLINED CODE (SPECIAL.item) */
		tw2 = *((EIF_CHARACTER_32 *)RTCW(arg2) + (loc2));
		/* END INLINED CODE */
		tw1 = tw2;
		loc5 = (EIF_INTEGER_32) (tw1);
		if ((EIF_BOOLEAN)(loc4 != loc5)) {
			Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc4 - loc5);
			loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L));
		}
		loc1++;
		loc2++;
	}
	RTLE;
	return Result;
}

/* {READABLE_STRING_32}.to_lower_area */
void F1564_6892 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_32 loc2 = (EIF_CHARACTER_32) 0;
	EIF_CHARACTER_32 loc3 = (EIF_CHARACTER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 tw2;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc4);
	RTLR(1,Current);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTGC;
	loc1 = (EIF_INTEGER_32) arg2;
	loc4 = RTOUCR(119,F1558_6601, (Current));
	for (;;) {
		if ((EIF_BOOLEAN) (loc1 > arg3)) break;
		/* INLINED CODE (SPECIAL.item) */
		tw2 = *((EIF_CHARACTER_32 *)RTCW(arg1) + (loc1));
		/* END INLINED CODE */
		loc2 = tw2;
		loc3 = F128_229(RTCW(loc4), loc2);
		if ((EIF_BOOLEAN)(loc2 != loc3)) {
			/* INLINED CODE (SPECIAL.put) */
			*((EIF_CHARACTER_32 *)RTCW(arg1) + (loc1)) = loc3;
			/* END INLINED CODE */
			;
		}
		loc1++;
	}
	RTLE;
}

/* {READABLE_STRING_32}.to_upper_area */
void F1564_6893 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_32 loc2 = (EIF_CHARACTER_32) 0;
	EIF_CHARACTER_32 loc3 = (EIF_CHARACTER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 tw2;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc4);
	RTLR(1,Current);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTGC;
	loc1 = (EIF_INTEGER_32) arg2;
	loc4 = RTOUCR(119,F1558_6601, (Current));
	for (;;) {
		if ((EIF_BOOLEAN) (loc1 > arg3)) break;
		/* INLINED CODE (SPECIAL.item) */
		tw2 = *((EIF_CHARACTER_32 *)RTCW(arg1) + (loc1));
		/* END INLINED CODE */
		loc2 = tw2;
		loc3 = F128_230(RTCW(loc4), loc2);
		if ((EIF_BOOLEAN)(loc2 != loc3)) {
			/* INLINED CODE (SPECIAL.put) */
			*((EIF_CHARACTER_32 *)RTCW(arg1) + (loc1)) = loc3;
			/* END INLINED CODE */
			;
		}
		loc1++;
	}
	RTLE;
}

/* {READABLE_STRING_32}.area_lower */
EIF_INTEGER_32 F1564_6896 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_INTEGER_32) 0;
}

void EIF_Minit238 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
