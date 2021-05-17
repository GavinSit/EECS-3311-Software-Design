/*
 * Code for class TYPE [ETF_SIMODYSSEY_ACCESS]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ty2009.h"
#include "eif_built_in.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {TYPE}.name */
EIF_REFERENCE F1470_5288 (EIF_REFERENCE Current)
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
	Result = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	if ((EIF_BOOLEAN) !(EIF_BOOLEAN)(Result != NULL)) {
		Result = RTLNS(eif_new_type(1566, 0x01).id, 1566, _OBJSIZ_1_0_0_4_0_0_0_0_);
		tr1 = F1470_5316(Current);
		F1559_6607(RTCW(Result), tr1);
		RTAR(Current, Result);
		*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) Result;
	}
	RTLE;
	return Result;
}

/* {TYPE}.generic_parameter_type */
EIF_REFERENCE F1470_5289 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Result);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("generic_parameter_type", 1469, Current, 0, 1, 24274);
	Result = (EIF_REFERENCE) eif_builtin_TYPE_generic_parameter_type (Current, arg1);
	if (!Result) {RTEC(EN_FAIL);}
	RTLE;
	RTEE;
	return Result;
}

/* {TYPE}.type_id */
EIF_INTEGER_32 F1470_5290 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) eif_builtin_TYPE_type_id (Current);
	return Result;
}

/* {TYPE}.hash_code */
EIF_INTEGER_32 F1470_5291 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) (EIF_INTEGER_32) eif_builtin_TYPE_type_id (Current);
}

/* {TYPE}.has_default */
EIF_BOOLEAN F1470_5293 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	
	Result = (EIF_BOOLEAN) eif_builtin_TYPE_has_default (Current);
	return Result;
}

/* {TYPE}.is_attached */
EIF_BOOLEAN F1470_5296 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	
	Result = (EIF_BOOLEAN) eif_builtin_TYPE_is_attached (Current);
	return Result;
}

/* {TYPE}.is_equal */
EIF_BOOLEAN F1470_5297 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	ti4_1 = (EIF_INTEGER_32) eif_builtin_TYPE_type_id (Current);
	ti4_2 = (EIF_INTEGER_32) eif_builtin_TYPE_type_id (arg1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
	RTLE;
	return Result;
}

/* {TYPE}.attempted */
EIF_REFERENCE F1470_5301 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	struct eif_ex_1050 sloc1;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) sloc1.data;
	EIF_BOOLEAN uarg1;
	EIF_BOOLEAN uarg;
	RTS_SD;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	memset (&sloc1.overhead, 0, OVERHEAD + _OBJSIZ_0_0_0_0_0_0_0_0_);
	sloc1.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc1.overhead, eif_gen_param(Dftype(Current), 1).id);
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,Result);
	RTLR(3,loc1);
	RTLR(4,tr1);
	RTLIU(5);
	
	RTGC;
	uarg1 = (EIF_BOOLEAN) RTS_OU (arg1);
	uarg = uarg1;
	if (uarg) {
		RTS_RC;
		RTS_RS (arg1);
		RTS_RW;
	}
	Result= RTLN(eif_gen_param(Dftype(Current), 1).id);
	tr1 = RTCCL(arg1);
	RTOE(eif_gen_param(Dftype(Current), 1), tr1, loc1, tb1);
	if (tb1) {
		tr1 = RTRCL(loc1);
		RTXA(tr1, Result);
	}
	if (uarg) {
		RTS_RD;
	}
	RTLE;
	return Result;
}

/* {TYPE}.default */
EIF_REFERENCE F1470_5304 (EIF_REFERENCE Current)
{
	GTCX
	struct eif_ex_1050 sloc1;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) sloc1.data;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	memset (&sloc1.overhead, 0, OVERHEAD + _OBJSIZ_0_0_0_0_0_0_0_0_);
	sloc1.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc1.overhead, eif_gen_param(Dftype(Current), 1).id);
	RTLI(1);
	RTLR(0,Result);
	RTLIU(1);
	
	RTGC;
	Result= RTLN(eif_gen_param(Dftype(Current), 1).id);
	RTLE;
	return Result;
}

/* {TYPE}.out */
EIF_REFERENCE F1470_5305 (EIF_REFERENCE Current)
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
	Result = RTLNS(eif_new_type(1560, 0x01).id, 1560, _OBJSIZ_1_1_0_3_0_0_0_0_);
	tr1 = F1470_5288(Current);
	F1559_6607(RTCW(Result), tr1);
	RTLE;
	return Result;
}

/* {TYPE}.runtime_name */
EIF_REFERENCE F1470_5316 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Result);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("runtime_name", 1469, Current, 0, 0, 24301);
	Result = (EIF_REFERENCE) eif_builtin_TYPE_runtime_name (Current);
	if (!Result) {RTEC(EN_FAIL);}
	RTLE;
	RTEE;
	return Result;
}

void EIF_Minit2009 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
