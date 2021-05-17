/*
 * Code for class INTERACTIVE_LIST [G#1]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "in942.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {INTERACTIVE_LIST}.default_create */
void F969_4167 (EIF_REFERENCE Current)
{
	GTCX
	
	
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R3081[Dtype(Current)-950])(Current, ((EIF_INTEGER_32) 4L));
}

/* {INTERACTIVE_LIST}.extend */
void F969_4172 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	*(EIF_BOOLEAN *)(Current + O3107[dtype-968]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	tr1 = RTCCL(arg1);
	F951_4114(Current, tr1);
	*(EIF_BOOLEAN *)(Current + O3107[dtype-968]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	tr1 = RTCCL(arg1);
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2269[dtype-818])(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R3108[dtype-970])(Current, tr1, ti4_1);
	RTLE;
}

/* {INTERACTIVE_LIST}.append */
void F969_4173 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,loc2);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLIU(5);
	
	RTGC;
	loc1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2269[dtype-818])(Current);
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2269[Dtype(RTCW(arg1))-818])(arg1);
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + ti4_1);
	if ((EIF_BOOLEAN) (loc1 > (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2272[dtype-818])(Current))) {
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R2278[dtype-818])(Current, loc1);
	}
	if ((EIF_BOOLEAN)(arg1 == Current)) {
		tr1 = F1_14(arg1);
	} else {
		tr1 = arg1;
	}
	loc2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2163[Dtype(RTCV(tr1))-849])(tr1);
	for (;;) {
		tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3146[Dtype(loc2)-1026])(loc2);
		if (tb1) break;
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3145[Dtype(loc2)-1026])(loc2);
		tr2 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2222[dtype-818])(Current, tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R3147[Dtype(loc2)-1026])(loc2);
	}
	RTLE;
}

/* {INTERACTIVE_LIST}.put_left */
void F969_4174 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	*(EIF_BOOLEAN *)(Current + O3107[dtype-968]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	tr1 = RTCCL(arg1);
	F951_4115(Current, tr1);
	*(EIF_BOOLEAN *)(Current + O3107[dtype-968]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	tr1 = RTCCL(arg1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + O3095[dtype-950]);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R3108[dtype-970])(Current, tr1, (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L)));
	RTLE;
}

/* {INTERACTIVE_LIST}.put_i_th */
void F969_4176 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,arg1);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTGC;
	loc1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R2252[dtype-849])(Current, (EIF_REFERENCE) &arg2);
	*(EIF_BOOLEAN *)(Current + O3107[dtype-968]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	tr1 = RTCCL(arg1);
	F951_4112(Current, tr1, arg2);
	*(EIF_BOOLEAN *)(Current + O3107[dtype-968]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		tr1 = RTCCL(loc1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R3109[dtype-970])(Current, tr1, arg2);
	}
	tr1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R3108[dtype-970])(Current, tr1, arg2);
	RTLE;
}

/* {INTERACTIVE_LIST}.replace */
void F969_4177 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc2);
	RTLR(2,arg1);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTGC;
	loc1 = *(EIF_INTEGER_32 *)(Current + O3095[dtype-950]);
	loc2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2258[dtype-818])(Current);
	*(EIF_BOOLEAN *)(Current + O3107[dtype-968]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	tr1 = RTCCL(arg1);
	F951_4117(Current, tr1);
	*(EIF_BOOLEAN *)(Current + O3107[dtype-968]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	tr1 = RTCCL(loc2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R3109[dtype-970])(Current, tr1, loc1);
	tr1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R3108[dtype-970])(Current, tr1, loc1);
	RTLE;
}

/* {INTERACTIVE_LIST}.remove */
void F969_4178 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc2);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	loc1 = *(EIF_INTEGER_32 *)(Current + O3095[dtype-950]);
	loc2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2258[dtype-818])(Current);
	*(EIF_BOOLEAN *)(Current + O3107[dtype-968]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	F951_4127(Current);
	*(EIF_BOOLEAN *)(Current + O3107[dtype-968]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	tr1 = RTCCL(loc2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R3109[dtype-970])(Current, tr1, loc1);
	RTLE;
}

/* {INTERACTIVE_LIST}.prune_all */
void F969_4182 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc4 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc5 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,loc7);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,loc6);
	RTLR(5,arg1);
	RTLIU(6);
	
	RTGC;
	loc5 = *(EIF_BOOLEAN *)(Current + O2212[dtype-574]);
	loc7 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3085[dtype-950])(Current);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	loc2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2269[dtype-818])(Current);
	for (;;) {
		if ((EIF_BOOLEAN)(loc1 == (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2269[dtype-818])(Current))) break;
		if ((EIF_BOOLEAN) (loc1 < (EIF_INTEGER_32) (loc2 - loc3))) {
			if ((EIF_BOOLEAN) (loc3 > ((EIF_INTEGER_32) 0L))) {
				tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2556[Dtype(RTCW(loc7))-849])(loc7, (EIF_INTEGER_32) (loc1 + loc3));
				tr2 = RTCCL(tr1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R2572[Dtype(RTCW(loc7))-1193])(loc7, tr2, loc1);
			}
			loc6 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2556[Dtype(RTCW(loc7))-849])(loc7, loc1);
			if (loc5) {
				loc4 = (EIF_BOOLEAN) RTEQ(arg1, loc6);
			} else {
				loc4 = (EIF_BOOLEAN) RTCEQ(arg1, loc6);
			}
			if (loc4) {
				tr1 = RTCCL(loc6);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R3109[dtype-970])(Current, tr1, (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)));
				loc3++;
			} else {
				loc1++;
			}
		} else {
			loc1++;
		}
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R2586[Dtype(RTCW(loc7))-1193])(loc7, loc3);
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2269[dtype-818])(Current);
	*(EIF_INTEGER_32 *)(Current + O3095[dtype-950]) = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
	RTLE;
}

/* {INTERACTIVE_LIST}.wipe_out */
void F969_4184 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTGC;
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3085[dtype-950])(Current);
	loc1 = F1_14(tr1);
	loc3 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2269[dtype-818])(Current);
	F951_4131(Current);
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	for (;;) {
		if ((EIF_BOOLEAN)(loc2 == loc3)) break;
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2564[Dtype(RTCW(loc1))-1193])(loc1, loc2);
		tr2 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R3104[dtype-970])(Current, tr2, ((EIF_INTEGER_32) 1L));
		loc2++;
	}
	RTLE;
}

/* {INTERACTIVE_LIST}.added_item */
void F969_4187 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current + O3107[dtype-968])) {
		tr1 = RTCCL(arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R3103[dtype-970])(Current, tr1, arg2);
	}
	RTLE;
}

/* {INTERACTIVE_LIST}.removed_item */
void F969_4188 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current + O3107[dtype-968])) {
		tr1 = RTCCL(arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R3104[dtype-970])(Current, tr1, arg2);
	}
	RTLE;
}

void EIF_Minit942 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
