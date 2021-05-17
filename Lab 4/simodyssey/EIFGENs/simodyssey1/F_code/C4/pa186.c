/*
 * Code for class PATH
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "pa186.h"
#include "eif_built_in.h"
#include "eif_path_name.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {PATH}.make_empty */
void F1422_5225 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNSMART(eif_new_type(1560, 1).id);
	F1558_6510(RTCW(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	F1422_5272(Current);
	RTLE;
}

/* {PATH}.is_empty */
EIF_BOOLEAN F1422_5235 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	Result = F743_2537(RTCW(tr1));
	RTLE;
	return Result;
}

/* {PATH}.hash_code */
EIF_INTEGER_32 F1422_5249 (EIF_REFERENCE Current)
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
	if ((EIF_BOOLEAN) EIF_TEST(eif_case_sensitive_path_names())) {
		tr1 = *(EIF_REFERENCE *)(Current);
		Result = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3816[Dtype(RTCW(tr1))-1420])(tr1);
	} else {
		Result = F1558_6520(RTCV(F1422_5266(Current)));
	}
	RTLE;
	return Result;
}

/* {PATH}.same_as */
EIF_BOOLEAN F1422_5258 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 == NULL)) {
	} else {
		if ((EIF_BOOLEAN)(arg1 == Current)) {
			RTLE;
			return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		} else {
			if ((EIF_BOOLEAN) EIF_TEST(eif_case_sensitive_path_names())) {
				RTLE;
				return (EIF_BOOLEAN) F1422_5261(Current, arg1);
			} else {
				RTLE;
				return (EIF_BOOLEAN) F1422_5262(Current, arg1);
			}
		}
	}
	RTLE;
	return (EIF_BOOLEAN) 0;
}

/* {PATH}.is_less */
EIF_BOOLEAN F1422_5259 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTGC;
	if ((EIF_BOOLEAN) EIF_TEST(eif_case_sensitive_path_names())) {
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = *(EIF_REFERENCE *)(RTCW(arg1));
		Result = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R1384[Dtype(RTCW(tr1))-485])(tr1, tr2);
	} else {
		tr1 = F1568_7021(RTCV(F1422_5266(Current)));
		tr2 = F1422_5266(RTCW(arg1));
		tr2 = F1568_7021(RTCW(tr2));
		Result = F1564_6875(RTCW(tr1), tr2);
	}
	RTLE;
	return Result;
}

/* {PATH}.is_equal */
EIF_BOOLEAN F1422_5260 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	return (EIF_BOOLEAN) F1422_5258(Current, arg1);
}

/* {PATH}.is_case_sensitive_equal */
EIF_BOOLEAN F1422_5261 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
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
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = *(EIF_REFERENCE *)(RTCW(arg1));
		Result = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R11[Dtype(RTCW(tr1))-0])(tr1, tr2);
	}
	RTLE;
	return Result;
}

/* {PATH}.is_case_insensitive_equal */
EIF_BOOLEAN F1422_5262 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
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
		tr1 = F1422_5266(Current);
		tr2 = F1422_5266(RTCW(arg1));
		Result = F1564_6871(RTCW(tr1), tr2);
	}
	RTLE;
	return Result;
}

/* {PATH}.copy */
void F1422_5263 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	}
	RTLE;
}

/* {PATH}.out */
EIF_REFERENCE F1422_5264 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_REFERENCE) F1422_5265(Current);
}

/* {PATH}.utf_8_name */
EIF_REFERENCE F1422_5265 (EIF_REFERENCE Current)
{
	GTCX
	struct eif_ex_22 sloc1;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) sloc1.data;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	memset (&sloc1.overhead, 0, OVERHEAD + _OBJSIZ_0_0_0_0_0_0_0_0_);
	sloc1.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc1.overhead, eif_new_type(130, 0x00).id);
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLIU(4);
	
	RTGC;
	tr1 = F1422_5266(Current);
	Result = F131_636(RTCW(loc1), tr1);
	RTLE;
	return Result;
}

/* {PATH}.name */
EIF_REFERENCE F1422_5266 (EIF_REFERENCE Current)
{
	GTCX
	struct eif_ex_22 sloc1;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) sloc1.data;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	memset (&sloc1.overhead, 0, OVERHEAD + _OBJSIZ_0_0_0_0_0_0_0_0_);
	sloc1.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc1.overhead, eif_new_type(130, 0x00).id);
	RTLI(5);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLR(4,Result);
	RTLIU(5);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	loc2 = tr1;
	if (EIF_TEST(loc2)) {
		RTLE;
		return (EIF_REFERENCE) loc2;
	} else {
		if ((EIF_BOOLEAN) eif_builtin_PLATFORM_is_windows) {
			Result = RTLNS(eif_new_type(1567, 0x01).id, 1567, _OBJSIZ_1_0_0_4_0_0_0_0_);
			tr1 = F131_678(RTCW(loc1), *(EIF_REFERENCE *)(Current));
			F1564_6849(RTCW(Result), tr1);
		} else {
			Result = RTLNS(eif_new_type(1567, 0x01).id, 1567, _OBJSIZ_1_0_0_4_0_0_0_0_);
			tr1 = F131_651(RTCW(loc1), *(EIF_REFERENCE *)(Current));
			F1564_6849(RTCW(Result), tr1);
		}
		RTAR(Current, Result);
		*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) Result;
	}
	RTLE;
	return Result;
}

/* {PATH}.to_pointer */
EIF_REFERENCE F1422_5268 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	loc1 = RTLNS(eif_new_type(547, 0x01).id, 547, _OBJSIZ_1_0_0_1_0_0_0_0_);
	tr1 = *(EIF_REFERENCE *)(Current);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_1_1_0_2_);
	ti4_2 = F1422_5271(Current);
	F548_1895(RTCW(loc1), (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 + ti4_2) - ((EIF_INTEGER_32) 1L)));
	F548_1919(RTCW(loc1), *(EIF_REFERENCE *)(Current));
	tr1 = *(EIF_REFERENCE *)(RTCW(loc1));
	RTLE;
	return (EIF_REFERENCE) tr1;
}

/* {PATH}.unit_size */
EIF_INTEGER_32 F1422_5271 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	if ((EIF_BOOLEAN) eif_builtin_PLATFORM_is_windows) {
		return (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	} else {
		return (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	}/* NOTREACHED */
	
}

/* {PATH}.reset_internal_data */
void F1422_5272 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) NULL;
}

void EIF_Minit186 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
