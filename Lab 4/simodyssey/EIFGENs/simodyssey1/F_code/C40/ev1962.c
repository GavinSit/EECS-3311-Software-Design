/*
 * Code for class EV_CELL_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1962.h"
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

/* {EV_CELL_IMP}.make */
void F1979_24383 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1925_22879(Current);
	F1971_24161(Current);
	RTLE;
}

/* {EV_CELL_IMP}.top_level_window_imp */
EIF_REFERENCE F1979_24384 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O19007[Dtype(Current)-1924]);
}


/* {EV_CELL_IMP}.set_top_level_window_imp */
void F1979_24385 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTGC;
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + O19007[Dtype(Current)-1924]) = (EIF_REFERENCE) arg1;
	tr1 = F1977_24333(Current);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R19735[Dtype(loc1)-1972])(loc1, arg1);
	}
	RTLE;
}

/* {EV_CELL_IMP}.compute_minimum_width */
void F1979_24386 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	tb1 = '\0';
	tr1 = F1977_24333(Current);
	loc2 = tr1;
	if (EIF_TEST(loc2)) {
		tb2 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R16562[Dtype(loc2)-1871])(loc2);
		tb1 = tb2;
	}
	if (tb1) {
		loc1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16402[Dtype(loc2)-1730])(loc2);
	}
	F1725_19525(Current, loc1, arg1);
	RTLE;
}

/* {EV_CELL_IMP}.compute_minimum_height */
void F1979_24387 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	tb1 = '\0';
	tr1 = F1977_24333(Current);
	loc2 = tr1;
	if (EIF_TEST(loc2)) {
		tb2 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R16562[Dtype(loc2)-1871])(loc2);
		tb1 = tb2;
	}
	if (tb1) {
		loc1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16403[Dtype(loc2)-1730])(loc2);
	}
	F1725_19526(Current, loc1, arg1);
	RTLE;
}

/* {EV_CELL_IMP}.compute_minimum_size */
void F1979_24388 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc3);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	tb1 = '\0';
	tr1 = F1977_24333(Current);
	loc3 = tr1;
	if (EIF_TEST(loc3)) {
		tb2 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R16562[Dtype(loc3)-1871])(loc3);
		tb1 = tb2;
	}
	if (tb1) {
		loc1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16402[Dtype(loc3)-1730])(loc3);
		loc2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16403[Dtype(loc3)-1730])(loc3);
	}
	F1725_19527(Current, loc1, loc2, arg1);
	RTLE;
}

/* {EV_CELL_IMP}.default_style */
EIF_INTEGER_32 F1979_24389 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	RTGC;
	ti4_1 = eif_bit_or(((EIF_INTEGER_32) 1073741824L),((EIF_INTEGER_32) 268435456L));
	Result = eif_bit_or(ti4_1,((EIF_INTEGER_32) 67108864L));
	return Result;
}

/* {EV_CELL_IMP}.on_erase_background */
void F1979_24390 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_POINTER tp1;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,arg2);
	RTLIU(3);
	
	RTGC;
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O19844[dtype-1976]) == NULL) || *(EIF_BOOLEAN *)(Current + O19020[dtype-1924]))) {
		F1925_22888(Current, arg1, arg2);
	} else {
		F1912_22507(Current);
		tp1 = (EIF_POINTER) (LRESULT)((((EIF_INTEGER_32) 1L)));
		F214_11244(Current, tp1);
	}
	RTLE;
}

void EIF_Minit1962 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
