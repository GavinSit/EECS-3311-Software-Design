/*
 * Code for class INTEGER_INTERVAL
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "in149.h"
#include "eif_built_in.h"
#include "eif_helpers.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {INTEGER_INTERVAL}.make */
void F850_3137 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if ((EIF_BOOLEAN) (arg1 <= arg2)) {
		*(EIF_INTEGER_32 *)(Current + O2622[dtype-849]) = (EIF_INTEGER_32) arg1;
		*(EIF_INTEGER_32 *)(Current + O2621[dtype-849]) = (EIF_INTEGER_32) arg2;
	} else {
		*(EIF_INTEGER_32 *)(Current + O2622[dtype-849]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		*(EIF_INTEGER_32 *)(Current + O2621[dtype-849]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	}
	RTLE;
}

/* {INTEGER_INTERVAL}.lower */
EIF_INTEGER_32 F850_3140 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current + O2622[Dtype(Current)-849]);
}


/* {INTEGER_INTERVAL}.upper */
EIF_INTEGER_32 F850_3142 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current + O2621[Dtype(Current)-849]);
}


/* {INTEGER_INTERVAL}.item */
EIF_INTEGER_32 F850_3143 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	return (EIF_INTEGER_32) arg1;
}

/* {INTEGER_INTERVAL}.valid_index */
EIF_BOOLEAN F850_3146 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	
	
	ti4_1 = *(EIF_INTEGER_32 *)(Current + O2621[dtype-849]);
	ti4_2 = *(EIF_INTEGER_32 *)(Current + O2622[dtype-849]);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN) (arg1 <= ti4_1) && (EIF_BOOLEAN) (arg1 >= ti4_2));
	return Result;
}

/* {INTEGER_INTERVAL}.capacity */
EIF_INTEGER_32 F850_3148 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	RTLE;
	return (EIF_INTEGER_32) F850_3149(Current);
}

/* {INTEGER_INTERVAL}.count */
EIF_INTEGER_32 F850_3149 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	Result = *(EIF_INTEGER_32 *)(Current + O2621[dtype-849]);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + O2622[dtype-849]);
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (Result - ti4_1) + ((EIF_INTEGER_32) 1L));
	RTLE;
	return Result;
}

/* {INTEGER_INTERVAL}.is_equal */
EIF_BOOLEAN F850_3151 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	Result = '\0';
	tb1 = '\0';
	tb2 = EIF_TRUE;
	if (tb2) {
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O2622[Dtype(arg1)-849]);
		tb1 = (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O2622[dtype-849]) == ti4_1);
	}
	if ((tb1)) {
		tb1 = '\0';
		tb2 = EIF_TRUE;
		if (tb2) {
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O2621[Dtype(arg1)-849]);
			tb1 = (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O2621[dtype-849]) == ti4_1);
		}
		Result = (tb1);
	}
	RTLE;
	return Result;
}

/* {INTEGER_INTERVAL}.extendible */
EIF_BOOLEAN F850_3153 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
}

/* {INTEGER_INTERVAL}.extend */
void F850_3155 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if ((EIF_BOOLEAN) (arg1 < *(EIF_INTEGER_32 *)(Current + O2622[dtype-849]))) {
		*(EIF_INTEGER_32 *)(Current + O2622[dtype-849]) = (EIF_INTEGER_32) arg1;
	} else {
		if ((EIF_BOOLEAN) (arg1 > *(EIF_INTEGER_32 *)(Current + O2621[dtype-849]))) {
			*(EIF_INTEGER_32 *)(Current + O2621[dtype-849]) = (EIF_INTEGER_32) arg1;
		}
	}
	RTLE;
}

/* {INTEGER_INTERVAL}.put */
void F850_3156 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if ((EIF_BOOLEAN) (arg1 < *(EIF_INTEGER_32 *)(Current + O2622[dtype-849]))) {
		*(EIF_INTEGER_32 *)(Current + O2622[dtype-849]) = (EIF_INTEGER_32) arg1;
	} else {
		if ((EIF_BOOLEAN) (arg1 > *(EIF_INTEGER_32 *)(Current + O2621[dtype-849]))) {
			*(EIF_INTEGER_32 *)(Current + O2621[dtype-849]) = (EIF_INTEGER_32) arg1;
		}
	}
	RTLE;
}

/* {INTEGER_INTERVAL}.resize */
void F850_3157 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	ti4_1 = eif_min_int32 (arg1,*(EIF_INTEGER_32 *)(Current + O2622[dtype-849]));
	*(EIF_INTEGER_32 *)(Current + O2622[dtype-849]) = (EIF_INTEGER_32) ti4_1;
	ti4_1 = eif_max_int32 (arg2,*(EIF_INTEGER_32 *)(Current + O2621[dtype-849]));
	*(EIF_INTEGER_32 *)(Current + O2621[dtype-849]) = (EIF_INTEGER_32) ti4_1;
	RTLE;
}

/* {INTEGER_INTERVAL}.grow */
void F850_3159 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if ((EIF_BOOLEAN) (F850_3148(Current) < arg1)) {
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R2611[dtype-849])(Current, *(EIF_INTEGER_32 *)(Current + O2622[dtype-849]), (EIF_INTEGER_32) ((EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current + O2622[dtype-849]) + arg1) - ((EIF_INTEGER_32) 1L)));
	}
	RTLE;
}

/* {INTEGER_INTERVAL}.as_array */
EIF_REFERENCE F850_3162 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTGC;
	loc1 = *(EIF_INTEGER_32 *)(Current + O2622[dtype-849]);
	loc2 = *(EIF_INTEGER_32 *)(Current + O2621[dtype-849]);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,924,1508,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		Result = RTLNS(typres0.id, 924, _OBJSIZ_1_1_0_2_0_0_0_0_);
	}
	F925_3186(RTCW(Result), ((EIF_INTEGER_32) 0L), loc1, loc2);
	for (;;) {
		if ((EIF_BOOLEAN) (loc1 > loc2)) break;
		F925_3210(RTCW(Result), loc1, loc1);
		loc1++;
	}
	RTLE;
	return Result;
}

/* {INTEGER_INTERVAL}.linear_representation */
EIF_REFERENCE F850_3164 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTGC;
	Result = F925_3238(RTCV(F850_3162(Current)));
	RTLE;
	return Result;
}

/* {INTEGER_INTERVAL}.copy */
void F850_3165 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 != Current)) {
		eif_builtin_ANY_standard_copy (Current, arg1);
	}
	RTLE;
}

void EIF_Minit149 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
