/*
 * Code for class INTERACTIVE_LIST [INTEGER_32]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "in2035.h"

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
void F970_4167 (EIF_REFERENCE Current)
{
	GTCX
	
	
	F957_4073(Current, ((EIF_INTEGER_32) 4L));
}

/* {INTERACTIVE_LIST}.extend */
void F970_4172 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	*(EIF_BOOLEAN *)(Current + O3107[dtype-968]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	F957_4114(Current, arg1);
	*(EIF_BOOLEAN *)(Current + O3107[dtype-968]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	ti4_1 = F957_4094(Current);
	F970_4187(Current, arg1, ti4_1);
	RTLE;
}

/* {INTERACTIVE_LIST}.append */
void F970_4173 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,loc2);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTGC;
	loc1 = F957_4094(Current);
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2269[Dtype(RTCW(arg1))-818])(arg1);
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + ti4_1);
	if ((EIF_BOOLEAN) (loc1 > F957_4095(Current))) {
		F957_4121(Current, loc1);
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
		ti4_1 = (eif_optimize_return = 1, *(EIF_INTEGER_32 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3145[Dtype(loc2)-1026])(loc2));
		F970_4172(Current, ti4_1);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R3147[Dtype(loc2)-1026])(loc2);
	}
	RTLE;
}

/* {INTERACTIVE_LIST}.put_left */
void F970_4174 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	*(EIF_BOOLEAN *)(Current + O3107[dtype-968]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	F957_4115(Current, arg1);
	*(EIF_BOOLEAN *)(Current + O3107[dtype-968]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	F970_4187(Current, arg1, (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current + O3095[dtype-950]) - ((EIF_INTEGER_32) 1L)));
	RTLE;
}

/* {INTERACTIVE_LIST}.put_i_th */
void F970_4176 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	loc1 = F957_4079(Current, arg2);
	*(EIF_BOOLEAN *)(Current + O3107[dtype-968]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	F957_4112(Current, arg1, arg2);
	*(EIF_BOOLEAN *)(Current + O3107[dtype-968]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	if (EIF_TRUE) {
		F970_4188(Current, loc1, arg2);
	}
	F970_4187(Current, arg1, arg2);
	RTLE;
}

/* {INTERACTIVE_LIST}.replace */
void F970_4177 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	loc1 = *(EIF_INTEGER_32 *)(Current + O3095[dtype-950]);
	loc2 = F957_4078(Current);
	*(EIF_BOOLEAN *)(Current + O3107[dtype-968]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	F957_4117(Current, arg1);
	*(EIF_BOOLEAN *)(Current + O3107[dtype-968]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	F970_4188(Current, loc2, loc1);
	F970_4187(Current, arg1, loc1);
	RTLE;
}

/* {INTERACTIVE_LIST}.remove */
void F970_4178 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	loc1 = *(EIF_INTEGER_32 *)(Current + O3095[dtype-950]);
	loc2 = F957_4078(Current);
	*(EIF_BOOLEAN *)(Current + O3107[dtype-968]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	F957_4127(Current);
	*(EIF_BOOLEAN *)(Current + O3107[dtype-968]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	F970_4188(Current, loc2, loc1);
	RTLE;
}

/* {INTERACTIVE_LIST}.prune_all */
void F970_4182 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc4 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc5 = (EIF_BOOLEAN) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc7);
	RTLIU(2);
	
	RTGC;
	loc5 = *(EIF_BOOLEAN *)(Current + O2212[dtype-574]);
	loc7 = F957_4077(Current);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	loc2 = F957_4094(Current);
	for (;;) {
		if ((EIF_BOOLEAN)(loc1 == F957_4094(Current))) break;
		if ((EIF_BOOLEAN) (loc1 < (EIF_INTEGER_32) (loc2 - loc3))) {
			if ((EIF_BOOLEAN) (loc3 > ((EIF_INTEGER_32) 0L))) {
				/* INLINED CODE (SPECIAL.item) */
				ti4_3 = *((EIF_INTEGER_32 *)RTCW(loc7) + ((EIF_INTEGER_32) (loc1 + loc3)));
				/* END INLINED CODE */
				ti4_1 = ti4_3;
				/* INLINED CODE (SPECIAL.put) */
				*((EIF_INTEGER_32 *)RTCW(loc7) + (loc1)) = ti4_1;
				/* END INLINED CODE */
				;
			}
			/* INLINED CODE (SPECIAL.item) */
			ti4_2 = *((EIF_INTEGER_32 *)RTCW(loc7) + (loc1));
			/* END INLINED CODE */
			loc6 = ti4_2;
			if (loc5) {
				loc4 = (EIF_BOOLEAN) (arg1 == loc6);
			} else {
				loc4 = (EIF_BOOLEAN) (EIF_BOOLEAN)(arg1 == loc6);
			}
			if (loc4) {
				F970_4188(Current, loc6, (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)));
				loc3++;
			} else {
				loc1++;
			}
		} else {
			loc1++;
		}
	}
	F1200_3114(RTCW(loc7), loc3);
	ti4_1 = F957_4094(Current);
	*(EIF_INTEGER_32 *)(Current + O3095[dtype-950]) = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
	RTLE;
}

/* {INTERACTIVE_LIST}.wipe_out */
void F970_4184 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	loc1 = F1_14(F957_4077(Current));
	loc3 = F957_4094(Current);
	F957_4131(Current);
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	for (;;) {
		if ((EIF_BOOLEAN)(loc2 == loc3)) break;
		/* INLINED CODE (SPECIAL.item) */
		ti4_1 = *((EIF_INTEGER_32 *)RTCW(loc1) + (loc2));
		/* END INLINED CODE */
		ti4_1 = ti4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R3104[Dtype(Current)-970])(Current, (EIF_REFERENCE) &ti4_1, ((EIF_INTEGER_32) 1L));
		loc2++;
	}
	RTLE;
}

/* {INTERACTIVE_LIST}.added_item */
void F970_4187 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current + O3107[dtype-968])) {
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R3103[dtype-970])(Current, (EIF_REFERENCE) &arg1, arg2);
	}
	RTLE;
}

/* {INTERACTIVE_LIST}.removed_item */
void F970_4188 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current + O3107[dtype-968])) {
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R3104[dtype-970])(Current, (EIF_REFERENCE) &arg1, arg2);
	}
	RTLE;
}

void EIF_Minit2035 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
