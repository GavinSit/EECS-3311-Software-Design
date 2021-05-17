/*
 * Code for class STACK [G#1]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "st831.h"

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
void F769_2548 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTCDT;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,arg1);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLIU(5);
	
	RTGC;
	{
		EIF_TYPE_INDEX typarr0[] = {0xFF01,965,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = eif_final_id(Y2164,Y2164_gen_type,Dftype(Current),548);
			typarr0[2] = l_type.annotations | 0xFF00;
			typarr0[3] = l_type.id;
		}
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		loc1 = RTLNS(typres0.id, 965, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R3081[Dtype(RTCW(loc1))-950])(loc1, ((EIF_INTEGER_32) 0L));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R2292[Dtype(RTCW(arg1))-911])(arg1);
	for (;;) {
		tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2291[Dtype(RTCW(arg1))-911])(arg1);
		if (tb1) break;
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2290[Dtype(RTCW(arg1))-911])(arg1);
		tr2 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2222[Dtype(RTCW(loc1))-818])(loc1, tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R2308[Dtype(RTCW(arg1))-911])(arg1);
	}
	for (;;) {
		tb2 = '\01';
		tb3 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2210[Dtype(RTCW(loc1))-715])(loc1);
		if (!tb3) {
			tb2 = (EIF_BOOLEAN) !(FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2218[dtype-818])(Current);
		}
		if (tb2) break;
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2258[Dtype(RTCW(loc1))-818])(loc1);
		tr2 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2222[dtype-818])(Current, tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R2263[Dtype(RTCW(loc1))-818])(loc1);
	}
	RTLE;
}

void EIF_Minit831 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
