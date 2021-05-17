/*
 * Code for class NATIVE_STRING
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "na152.h"
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

/* {NATIVE_STRING}.make */
void F944_3738 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4681[Dtype(RTCW(arg1))-1560])(arg1);
	F944_3739(Current, ti4_1);
	F944_3753(Current, arg1);
	RTLE;
}

/* {NATIVE_STRING}.make_empty */
void F944_3739 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	tr1 = RTLNSMART(eif_new_type(1283, 1).id);
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2832[Dtype(Current)-943])(Current);
	F1284_4468(RTCW(tr1), (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L)) * ti4_1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTLE;
}

/* {NATIVE_STRING}.make_from_pointer */
void F944_3740 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	loc1 = F942_3736(Current, arg1);
	tr1 = RTLNSMART(eif_new_type(1283, 1).id);
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2832[dtype-943])(Current);
	F1284_4470(RTCW(tr1), arg1, (EIF_INTEGER_32) (loc1 + ti4_1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2832[dtype-943])(Current);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_) = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 / ti4_1);
	RTLE;
}

/* {NATIVE_STRING}.string */
EIF_REFERENCE F944_3743 (EIF_REFERENCE Current)
{
	GTCX
	struct eif_ex_22 sloc1;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) sloc1.data;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	memset (&sloc1.overhead, 0, OVERHEAD + _OBJSIZ_0_0_0_0_0_0_0_0_);
	sloc1.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc1.overhead, eif_new_type(130, 0x00).id);
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	if ((EIF_BOOLEAN) eif_builtin_PLATFORM_is_windows) {
		tr1 = F131_670(RTCW(loc1), *(EIF_REFERENCE *)(Current));
		RTLE;
		return (EIF_REFERENCE) tr1;
	} else {
		tr1 = F131_645(RTCW(loc1), *(EIF_REFERENCE *)(Current));
		RTLE;
		return (EIF_REFERENCE) tr1;
	}/* NOTREACHED */
	
}

/* {NATIVE_STRING}.substring */
EIF_REFERENCE F944_3744 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	struct eif_ex_22 sloc1;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) sloc1.data;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	memset (&sloc1.overhead, 0, OVERHEAD + _OBJSIZ_0_0_0_0_0_0_0_0_);
	sloc1.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc1.overhead, eif_new_type(130, 0x00).id);
	RTLI(3);
	RTLR(0,Result);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTGC;
	Result = RTLNS(eif_new_type(1564, 0x01).id, 1564, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F1564_6847(RTCW(Result), (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 - arg1) + ((EIF_INTEGER_32) 1L)));
	if ((EIF_BOOLEAN) eif_builtin_PLATFORM_is_windows) {
		F131_673(RTCW(loc1), *(EIF_REFERENCE *)(Current), (EIF_INTEGER_32) (arg1 - ((EIF_INTEGER_32) 1L)), (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L)), (EIF_BOOLEAN) 0, Result);
	} else {
		Result = F131_645(RTCW(loc1), *(EIF_REFERENCE *)(Current));
		F131_648(RTCW(loc1), *(EIF_REFERENCE *)(Current), (EIF_INTEGER_32) (arg1 - ((EIF_INTEGER_32) 1L)), (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L)), (EIF_BOOLEAN) 0, Result);
	}
	RTLE;
	return Result;
}

/* {NATIVE_STRING}.item */
EIF_POINTER F944_3745 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	Result = *(EIF_POINTER *)(RTCW(tr1)+ _PTROFF_0_1_0_1_0_0_);
	RTLE;
	return Result;
}

/* {NATIVE_STRING}.unit_size */
EIF_INTEGER_32 F944_3751 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	if ((EIF_BOOLEAN) eif_builtin_PLATFORM_is_windows) {
		return (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	} else {
		return (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	}/* NOTREACHED */
	
}

/* {NATIVE_STRING}.is_equal */
EIF_BOOLEAN F944_3752 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	tp1 = F944_3745(Current);
	tp2 = F944_3745(RTCW(arg1));
	Result = tp1 == tp2;
	RTLE;
	return Result;
}

/* {NATIVE_STRING}.set_string */
void F944_3753 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4681[Dtype(RTCW(arg1))-1560])(arg1);
	F944_3754(Current, arg1, ((EIF_INTEGER_32) 1L), ti4_1);
	RTLE;
}

/* {NATIVE_STRING}.set_substring */
void F944_3754 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	struct eif_ex_22 sloc1;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) sloc1.data;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTLD;
	
	memset (&sloc1.overhead, 0, OVERHEAD + _OBJSIZ_0_0_0_0_0_0_0_0_);
	sloc1.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc1.overhead, eif_new_type(130, 0x00).id);
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLIU(5);
	
	RTGC;
	if ((EIF_BOOLEAN) eif_builtin_PLATFORM_is_windows) {
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = RTOUCR(139,F944_3758, (Current));
		F131_663(RTCW(loc1), arg1, arg2, arg3, tr1, ((EIF_INTEGER_32) 0L), tr2);
	} else {
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = RTOUCR(139,F944_3758, (Current));
		F131_638(RTCW(loc1), arg1, arg2, arg3, tr1, ((EIF_INTEGER_32) 0L), tr2);
	}
	tr1 = RTOUCR(139,F944_3758, (Current));
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1) + O1718[Dtype(tr1)-488]);
	ti4_2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2832[Dtype(Current)-943])(Current);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_) = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 / ti4_2);
	RTLE;
}

/* {NATIVE_STRING}.set_shared_from_pointer */
void F944_3755 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	ti4_1 = F942_3736(Current, arg1);
	F944_3756(Current, arg1, ti4_1);
	RTLE;
}

/* {NATIVE_STRING}.set_shared_from_pointer_and_count */
void F944_3756 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2832[dtype-943])(Current);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_) = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg2 / ti4_1);
	tr1 = *(EIF_REFERENCE *)(Current);
	tb1 = *(EIF_BOOLEAN *)(RTCW(tr1)+ _CHROFF_0_0_);
	if ((EIF_BOOLEAN) !tb1) {
		tr1 = RTLNSMART(eif_new_type(1283, 1).id);
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2832[dtype-943])(Current);
		F1284_4471(RTCW(tr1), arg1, (EIF_INTEGER_32) (arg2 + ti4_1));
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	} else {
		tr1 = *(EIF_REFERENCE *)(Current);
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2832[dtype-943])(Current);
		F1284_4473(RTCW(tr1), arg1, (EIF_INTEGER_32) (arg2 + ti4_1));
	}
	RTLE;
}

/* {NATIVE_STRING}.upper_cell */
static EIF_REFERENCE F944_3758_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(139)

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEV;
	RTGC;
	RTOTP;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,489,1508,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0.id, 489, _OBJSIZ_0_0_0_1_0_0_0_0_);
	}
	F490_1934(RTCW(tr1), ((EIF_INTEGER_32) 0L));
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F944_3758 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(139,F944_3758_body,(Current));
}

void EIF_Minit152 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
