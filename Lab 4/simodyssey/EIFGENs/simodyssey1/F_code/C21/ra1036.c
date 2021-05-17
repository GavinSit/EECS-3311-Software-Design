/*
 * Code for class RANDOM_GENERATOR_ACCESS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ra1036.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {RANDOM_GENERATOR_ACCESS}.debug_gen */
static EIF_REFERENCE F84_9926_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(192)

	RTLI(1);
	RTLR(0,tr1);
	RTLIU(1);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(eif_new_type(75, 0x01).id, 75, _OBJSIZ_1_0_0_0_0_0_0_0_);
	F76_9900(RTCW(tr1));
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F84_9926 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(192,F84_9926_body,(Current));
}

/* {RANDOM_GENERATOR_ACCESS}.rchoose */
EIF_INTEGER_32 F84_9927 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	struct eif_ex_1035 sloc2;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) sloc2.data;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	memset (&sloc2.overhead, 0, OVERHEAD + _OBJSIZ_0_0_0_0_0_0_0_0_);
	sloc2.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc2.overhead, eif_new_type(83, 0x00).id);
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,loc2);
	RTLIU(2);
	
	RTGC;
	loc1 = RTOUCR(192,F84_9926, (RTCW(loc2)));
	Result = F76_9901(RTCW(loc1));
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (Result % (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 - arg1) + ((EIF_INTEGER_32) 1L))) + arg1);
	F76_9902(RTCW(loc1));
	RTLE;
	return Result;
}

void EIF_Minit1036 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
