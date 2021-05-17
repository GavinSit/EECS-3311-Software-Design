/*
 * Code for class ARGUMENTS_32
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ar148.h"
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

/* {ARGUMENTS_32}.argument */
EIF_REFERENCE F564_2438 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	tr1 = RTOUCR(135,F564_2456, (Current));
	Result = F919_3191(RTCW(tr1), arg1);
	RTLE;
	return Result;
}

/* {ARGUMENTS_32}.argument_count */
EIF_INTEGER_32 F564_2452 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) eif_builtin_ARGUMENTS_32_argument_count;
	return Result;
}

/* {ARGUMENTS_32}.internal_argument_array */
static EIF_REFERENCE F564_2456_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(135)

	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTEV;
	RTGC;
	RTOTP;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,918,0xFF01,1567,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0.id, 918, _OBJSIZ_1_1_0_2_0_0_0_0_);
	}
	tr2 = RTLNS(eif_new_type(1567, 0x01).id, 1567, _OBJSIZ_1_0_0_4_0_0_0_0_);
	F1558_6510(RTCW(tr2));
	ti4_1 = (EIF_INTEGER_32) eif_builtin_ARGUMENTS_32_argument_count;
	F919_3186(RTCW(tr1), tr2, ((EIF_INTEGER_32) 0L), ti4_1);
	Result = (EIF_REFERENCE) tr1;
	F575_2465(RTCW(Result));
	for (;;) {
		if ((EIF_BOOLEAN) (loc1 > (EIF_INTEGER_32) eif_builtin_ARGUMENTS_32_argument_count)) break;
		tr1 = F564_2457(Current, loc1);
		F919_3210(RTCW(Result), tr1, loc1);
		loc1++;
	}
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F564_2456 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(135,F564_2456_body,(Current));
}

/* {ARGUMENTS_32}.i_th_argument_string */
EIF_REFERENCE F564_2457 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLIU(4);
	
	RTGC;
	loc1 = RTLNS(eif_new_type(943, 0x01).id, 943, _OBJSIZ_1_0_0_1_0_0_0_0_);
	F944_3739(RTCW(loc1), ((EIF_INTEGER_32) 0L));
	loc2 = (EIF_POINTER) eif_builtin_ARGUMENTS_32_i_th_argument_pointer (arg1);
	{
		/* INLINED CODE (ANY.default_pointer) */
		tp1 = (EIF_POINTER)  0;
		/* END INLINED CODE */
	}
	if ((EIF_BOOLEAN)(loc2 != tp1)) {
		F944_3755(RTCW(loc1), loc2);
		Result = RTLNS(eif_new_type(1567, 0x01).id, 1567, _OBJSIZ_1_0_0_4_0_0_0_0_);
		tr1 = F944_3743(RTCW(loc1));
		F1564_6849(RTCW(Result), tr1);
	} else {
		Result = RTLNS(eif_new_type(1567, 0x01).id, 1567, _OBJSIZ_1_0_0_4_0_0_0_0_);
		F1558_6510(RTCW(Result));
		RTLE;
		return (EIF_REFERENCE) Result;
	}
	RTLE;
	return Result;
}

/* {ARGUMENTS_32}.i_th_argument_pointer */
EIF_POINTER F564_2458 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = (EIF_POINTER) eif_builtin_ARGUMENTS_32_i_th_argument_pointer (arg1);
	return Result;
}

void EIF_Minit148 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
