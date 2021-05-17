/*
 * Code for class LINKED_STACK [INTEGER_32]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "li902.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {LINKED_STACK}.item */
EIF_INTEGER_32 F917_3562 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCFDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	RTCT0("attached first_element as f", EX_CHECK);
	tr1 = *(EIF_REFERENCE *)(Current);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		RTCK0;
	} else {
		RTCF0;
	}
	Result = *(EIF_INTEGER_32 *)(loc1+ _LNGOFF_1_0_0_0_);
	RTLE;
	return Result;
}

/* {LINKED_STACK}.extend */
void F917_3564 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	F913_3541(Current, arg1);
}

/* {LINKED_STACK}.put */
void F917_3565 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	F913_3541(Current, arg1);
}

/* {LINKED_STACK}.remove */
void F917_3566 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F913_3534(Current);
	F913_3548(Current);
	RTLE;
}

/* {LINKED_STACK}.linear_representation */
EIF_REFERENCE F917_3567 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLIU(3);
	
	RTGC;
	loc1 = F913_3521(Current);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFF01,956,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = eif_final_id(Y2164,Y2164_gen_type,Dftype(Current),548);
			typarr0[2] = l_type.annotations | 0xFF00;
			typarr0[3] = l_type.id;
		}
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		Result = RTLNS(typres0.id, 956, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	F957_4073(RTCW(Result), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_0_));
	F913_3534(Current);
	for (;;) {
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_)) break;
		ti4_1 = F913_3517(Current);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2222[Dtype(RTCW(Result))-818])(Result, (EIF_REFERENCE) &ti4_1);
		F913_3536(Current);
	}
	F913_3540(Current, loc1);
	RTLE;
	return Result;
}

void EIF_Minit902 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
