/*
 * Code for class ARGUMENTS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ar147.h"
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

/* {ARGUMENTS}.argument */
EIF_REFERENCE F565_2414 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTGC;
	Result = RTOUCR(150,F565_2437, (Current));
	Result = F564_2438(RTCW(Result), arg1);
	Result = F1558_6566(RTCW(Result));
	RTLE;
	return Result;
}

/* {ARGUMENTS}.argument_array */
static EIF_REFERENCE F565_2415_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	
#define Result RTOTRR
	RTOUDR(151)

	
	RTEV;
	RTOTP;
	Result = F565_2436(Current);
	RTOTE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F565_2415 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(151,F565_2415_body,(Current));
}

/* {ARGUMENTS}.argument_count */
EIF_INTEGER_32 F565_2432 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	Result = (EIF_INTEGER_32) eif_builtin_ARGUMENTS_32_argument_count;
	RTLE;
	return Result;
}

/* {ARGUMENTS}.internal_argument_array */
EIF_REFERENCE F565_2436 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	
	RTGC;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,918,0xFF01,1560,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		Result = RTLNS(typres0.id, 918, _OBJSIZ_1_1_0_2_0_0_0_0_);
	}
	tr1 = RTMS_EX_H("",0,0);
	ti4_1 = F565_2432(Current);
	F919_3186(RTCW(Result), tr1, ((EIF_INTEGER_32) 0L), ti4_1);
	F575_2465(RTCW(Result));
	for (;;) {
		if ((EIF_BOOLEAN) (loc1 > F565_2432(Current))) break;
		tr1 = F565_2414(Current, loc1);
		F919_3210(RTCW(Result), tr1, loc1);
		loc1++;
	}
	RTLE;
	return Result;
}

/* {ARGUMENTS}.internal_arguments */
static EIF_REFERENCE F565_2437_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(150)

	RTLI(1);
	RTLR(0,tr1);
	RTLIU(1);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(eif_new_type(563, 0x01).id, 563, _OBJSIZ_0_0_0_0_0_0_0_0_);
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F565_2437 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(150,F565_2437_body,(Current));
}

void EIF_Minit147 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
