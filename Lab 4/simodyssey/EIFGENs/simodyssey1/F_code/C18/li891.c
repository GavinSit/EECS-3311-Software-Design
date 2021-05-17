/*
 * Code for class LINKED_STACK [BOOLEAN]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "li891.h"

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
EIF_BOOLEAN F916_3562 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
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
	Result = *(EIF_BOOLEAN *)(loc1+ _CHROFF_1_0_);
	RTLE;
	return Result;
}

/* {LINKED_STACK}.extend */
void F916_3564 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	
	
	F914_3541(Current, arg1);
}

/* {LINKED_STACK}.put */
void F916_3565 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	
	
	F914_3541(Current, arg1);
}

/* {LINKED_STACK}.remove */
void F916_3566 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F914_3534(Current);
	F914_3548(Current);
	RTLE;
}

/* {LINKED_STACK}.linear_representation */
EIF_REFERENCE F916_3567 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLIU(3);
	
	RTGC;
	loc1 = F914_3521(Current);
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
	F963_4073(RTCW(Result), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_0_));
	F914_3534(Current);
	for (;;) {
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_)) break;
		tb1 = F914_3517(Current);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2222[Dtype(RTCW(Result))-818])(Result, (EIF_REFERENCE) &tb1);
		F914_3536(Current);
	}
	F914_3540(Current, loc1);
	RTLE;
	return Result;
}

void EIF_Minit891 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
