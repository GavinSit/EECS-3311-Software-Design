/*
 * Code for class IDENTIFIED
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "id179.h"
#include "eif_built_in.h"
#include "eif_object_id.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {IDENTIFIED}.object_id */
EIF_INTEGER_32 F1294_4724 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O3525[dtype-1293]) == ((EIF_INTEGER_32) 0L))) {
		ti4_1 = F518_871(Current, Current);
		*(EIF_INTEGER_32 *)(Current + O3525[dtype-1293]) = (EIF_INTEGER_32) ti4_1;
	}
	RTLE;
	return (EIF_INTEGER_32) *(EIF_INTEGER_32 *)(Current + O3525[dtype-1293]);
}

/* {IDENTIFIED}.id_object */
EIF_REFERENCE F1294_4725 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tb1 = '\0';
	if ((EIF_BOOLEAN) (arg1 > ((EIF_INTEGER_32) 0L))) {
		tr1 = (EIF_REFERENCE) eif_id_object(arg1);
		loc1 = RTCCL(tr1);
		loc1 = RTRV(eif_new_type(1293, 0x01),loc1);
		tb1 = EIF_TEST(loc1);
	}
	if (tb1) {
		RTLE;
		return (EIF_REFERENCE) loc1;
	}
	RTLE;
	return (EIF_REFERENCE) 0;
}

/* {IDENTIFIED}.free_id */
void F1294_4727 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current + O3525[dtype-1293]) > ((EIF_INTEGER_32) 0L))) {
		ti4_1 = *(EIF_INTEGER_32 *)(Current + O3525[dtype-1293]);
		eif_object_id_free(ti4_1);
		*(EIF_INTEGER_32 *)(Current + O3525[dtype-1293]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
	}
	RTLE;
}

/* {IDENTIFIED}.is_equal */
EIF_BOOLEAN F1294_4728 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	loc1 = *(EIF_INTEGER_32 *)(Current + O3525[dtype-1293]);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O3525[Dtype(arg1)-1293]);
	*(EIF_INTEGER_32 *)(Current + O3525[dtype-1293]) = (EIF_INTEGER_32) ti4_1;
	Result = (EIF_BOOLEAN) eif_builtin_ANY_standard_is_equal (Current, arg1);
	*(EIF_INTEGER_32 *)(Current + O3525[dtype-1293]) = (EIF_INTEGER_32) loc1;
	RTLE;
	return Result;
}

/* {IDENTIFIED}.copy */
void F1294_4729 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 != Current)) {
		loc1 = *(EIF_INTEGER_32 *)(Current + O3525[dtype-1293]);
		eif_builtin_ANY_standard_copy (Current, arg1);
		*(EIF_INTEGER_32 *)(Current + O3525[dtype-1293]) = (EIF_INTEGER_32) loc1;
	}
	RTLE;
}

/* {IDENTIFIED}.dispose */
void F1294_4730 (EIF_REFERENCE Current)
{
	GTCX
	
	
	F1294_4727(Current);
}

void EIF_Minit179 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
