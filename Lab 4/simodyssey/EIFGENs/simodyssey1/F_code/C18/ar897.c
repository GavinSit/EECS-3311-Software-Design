/*
 * Code for class ARRAYED_STACK [BOOLEAN]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ar897.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {ARRAYED_STACK}.extend */
void F967_4154 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F963_4114(Current, arg1);
	F963_4105(Current);
	RTLE;
}

/* {ARRAYED_STACK}.put */
void F967_4155 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F963_4114(Current, arg1);
	F963_4105(Current);
	RTLE;
}

/* {ARRAYED_STACK}.remove */
void F967_4157 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F963_4127(Current);
	F963_4105(Current);
	RTLE;
}

/* {ARRAYED_STACK}.linear_representation */
EIF_REFERENCE F967_4158 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTGC;
	{
		EIF_TYPE_INDEX typarr0[] = {0xFF01,962,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = eif_final_id(Y2164,Y2164_gen_type,Dftype(Current),548);
			typarr0[2] = l_type.annotations | 0xFF00;
			typarr0[3] = l_type.id;
		}
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		Result = RTLNS(typres0.id, 962, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	ti4_1 = F963_4094(Current);
	F963_4073(RTCW(Result), ti4_1);
	loc1 = F963_4094(Current);
	for (;;) {
		if ((EIF_BOOLEAN) (loc1 < ((EIF_INTEGER_32) 1L))) break;
		tb1 = F963_4079(Current, loc1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2222[Dtype(RTCW(Result))-818])(Result, (EIF_REFERENCE) &tb1);
		loc1--;
	}
	RTLE;
	return Result;
}

void EIF_Minit897 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
