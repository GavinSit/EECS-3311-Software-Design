/*
 * Code for class STACK [BOOLEAN]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "st895.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {STACK}.fill */
void F770_2548 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTGC;
	{
		EIF_TYPE_INDEX typarr0[] = {0xFF01,966,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = eif_final_id(Y2164,Y2164_gen_type,Dftype(Current),548);
			typarr0[2] = l_type.annotations | 0xFF00;
			typarr0[3] = l_type.id;
		}
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		loc1 = RTLNS(typres0.id, 966, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	F963_4073(RTCW(loc1), ((EIF_INTEGER_32) 0L));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R2292[Dtype(RTCW(arg1))-911])(arg1);
	for (;;) {
		tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2291[Dtype(RTCW(arg1))-911])(arg1);
		if (tb1) break;
		tb2 = (eif_optimize_return = 1, *(EIF_BOOLEAN *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2290[Dtype(RTCW(arg1))-911])(arg1));
		F967_4154(RTCW(loc1), tb2);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R2308[Dtype(RTCW(arg1))-911])(arg1);
	}
	for (;;) {
		tb2 = '\01';
		tb3 = F749_2537(RTCW(loc1));
		if (!tb3) {
			tb2 = (EIF_BOOLEAN) !F879_3316(Current);
		}
		if (tb2) break;
		tb3 = F963_4078(RTCW(loc1));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2222[Dtype(Current)-818])(Current, (EIF_REFERENCE) &tb3);
		F967_4157(RTCW(loc1));
	}
	RTLE;
}

void EIF_Minit895 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
