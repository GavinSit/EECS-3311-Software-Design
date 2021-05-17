/*
 * Code for class EV_PRIMITIVE_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1972.h"
#include <windows.h>
#include "eif_misc.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_PRIMITIVE_IMP}.top_level_window_imp */
EIF_REFERENCE F1989_24664 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O19941[Dtype(Current)-1988]);
}


/* {EV_PRIMITIVE_IMP}.set_parent_imp */
void F1989_24665 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		loc1 = arg1;
		loc1 = RTRV(eif_new_type(1911, 0x00), loc1);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R19743[dtype-1972])(Current, loc1);
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R16342[Dtype(RTCW(arg1))-1972])(arg1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R19735[dtype-1972])(Current, tr1);
		}
	} else {
		if ((EIF_BOOLEAN)((FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R16312[dtype-1972])(Current) != NULL)) {
			tr1 = RTOUCR(249,F1970_24036, (Current));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R19743[dtype-1972])(Current, tr1);
		}
	}
	RTLE;
}

/* {EV_PRIMITIVE_IMP}.set_top_level_window_imp */
void F1989_24666 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + O19941[Dtype(Current)-1988]) = (EIF_REFERENCE) arg1;
}

/* {EV_PRIMITIVE_IMP}.on_getdlgcode */
void F1989_24667 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tp1 = (EIF_POINTER) (LRESULT)((((EIF_INTEGER_32) 4L)));
	F214_11244(Current, tp1);
	RTLE;
}

/* {EV_PRIMITIVE_IMP}.tooltip_window */
EIF_REFERENCE F1989_24668 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_REFERENCE) F1898_22150(Current, *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]));
}

/* {EV_PRIMITIVE_IMP}.is_tabable_to */
EIF_BOOLEAN F1989_24669 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	ti4_1 = F1912_22496(Current);
	Result = F1258_14781(Current, ti4_1, ((EIF_INTEGER_32) 65536L));
	RTLE;
	return Result;
}

/* {EV_PRIMITIVE_IMP}.is_tabable_from */
EIF_BOOLEAN F1989_24670 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current + O19940[Dtype(Current)-1988]);
}

/* {EV_PRIMITIVE_IMP}.enable_tabable_to */
void F1989_24671 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	ti4_1 = F1912_22496(Current);
	ti4_1 = eif_bit_or(ti4_1,((EIF_INTEGER_32) 65536L));
	ti4_1 = eif_bit_or(ti4_1,((EIF_INTEGER_32) 131072L));
	F1912_22522(Current, ti4_1);
	RTLE;
}

/* {EV_PRIMITIVE_IMP}.disable_tabable_to */
void F1989_24672 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	loc1 = F1912_22496(Current);
	ti4_1 = F1258_14780(Current, loc1, ((EIF_INTEGER_32) 65536L));
	loc1 = (EIF_INTEGER_32) ti4_1;
	ti4_1 = F1258_14780(Current, loc1, ((EIF_INTEGER_32) 131072L));
	loc1 = (EIF_INTEGER_32) ti4_1;
	F1912_22522(Current, loc1);
	RTLE;
}

/* {EV_PRIMITIVE_IMP}.enable_tabable_from */
void F1989_24673 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_BOOLEAN *)(Current + O19940[Dtype(Current)-1988]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
}

/* {EV_PRIMITIVE_IMP}.disable_tabable_from */
void F1989_24674 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_BOOLEAN *)(Current + O19940[Dtype(Current)-1988]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
}

/* {EV_PRIMITIVE_IMP}.destroy */
void F1989_24676 (EIF_REFERENCE Current)
{
	GTCX
	
	
	F1970_24054(Current);
}

/* {EV_PRIMITIVE_IMP}.update_for_pick_and_drop */
void F1989_24677 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	
	
	RTGC;
}

void EIF_Minit1972 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
