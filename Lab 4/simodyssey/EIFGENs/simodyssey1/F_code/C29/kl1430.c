/*
 * Code for class KL_CHARACTER_BUFFER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "kl1430.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {KL_CHARACTER_BUFFER}.make */
void F1280_15019 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNSMART(eif_new_type(1560, 1).id);
	F1559_6606(RTCW(tr1), (EIF_CHARACTER_8) '\000', (EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current);
	tr1 = *(EIF_REFERENCE *)(RTCW(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {KL_CHARACTER_BUFFER}.item */
EIF_CHARACTER_8 F1280_15020 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	/* INLINED CODE (SPECIAL.item) */
	tc2 = *((EIF_CHARACTER_8 *)RTCW(tr1) + (arg1));
	/* END INLINED CODE */
	Result = tc2;
	RTLE;
	return Result;
}

/* {KL_CHARACTER_BUFFER}.substring */
EIF_REFERENCE F1280_15021 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLIU(3);
	
	RTGC;
	if ((EIF_BOOLEAN) (arg2 < arg1)) {
		tr1 = RTLNS(eif_new_type(1560, 0x01).id, 1560, _OBJSIZ_1_1_0_3_0_0_0_0_);
		F1559_6605(RTCW(tr1), ((EIF_INTEGER_32) 0L));
		RTLE;
		return (EIF_REFERENCE) tr1;
	} else {
		tr1 = *(EIF_REFERENCE *)(Current);
		Result = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4722[Dtype(RTCW(tr1))-1560])(tr1, (EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L)), (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 1L)));
	}
	RTLE;
	return Result;
}

/* {KL_CHARACTER_BUFFER}.count */
EIF_INTEGER_32 F1280_15022 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	Result = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_1_1_0_2_);
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result - ((EIF_INTEGER_32) 1L));
	RTLE;
	return Result;
}

/* {KL_CHARACTER_BUFFER}.as_special */
EIF_REFERENCE F1280_15023 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {KL_CHARACTER_BUFFER}.put */
void F1280_15024 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	/* INLINED CODE (SPECIAL.put) */
	*((EIF_CHARACTER_8 *)RTCW(tr1) + (arg2)) = arg1;
	/* END INLINED CODE */
	;
	RTLE;
}

/* {KL_CHARACTER_BUFFER}.fill_from_string */
void F1280_15026 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	loc1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
	if ((EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 0L))) {
		tr1 = *(EIF_REFERENCE *)(Current);
		F1561_6706(RTCW(tr1), arg1, ((EIF_INTEGER_32) 1L), loc1, (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 1L)));
	}
	RTLE;
}

/* {KL_CHARACTER_BUFFER}.fill_from_stream */
EIF_INTEGER_32 F1280_15027 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	
	
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R12444[Dtype(RTCW(arg1))-1274])(arg1, *(EIF_REFERENCE *)(Current), (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 1L)), arg3);
	return (EIF_INTEGER_32) ti4_1;
}

/* {KL_CHARACTER_BUFFER}.move_left */
void F1280_15028 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	if ((EIF_BOOLEAN) (arg3 > ((EIF_INTEGER_32) 0L))) {
		tr1 = *(EIF_REFERENCE *)(Current);
		F1561_6706(RTCW(tr1), *(EIF_REFERENCE *)(Current), (EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L)), (EIF_INTEGER_32) (arg1 + arg3), (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 1L)));
	}
	RTLE;
}

/* {KL_CHARACTER_BUFFER}.resize */
void F1280_15030 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	loc1 = F1280_15022(Current);
	if ((EIF_BOOLEAN) (arg1 > loc1)) {
		tr1 = *(EIF_REFERENCE *)(Current);
		F1561_6762(RTCW(tr1), (EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L)));
		tr1 = *(EIF_REFERENCE *)(Current);
		F1561_6779(RTCW(tr1), (EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L)));
		tr1 = *(EIF_REFERENCE *)(Current);
		tr1 = *(EIF_REFERENCE *)(RTCW(tr1));
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		F1199_3104(RTCW(tr1), (EIF_CHARACTER_8) '\000', (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 2L)), (EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L)));
	}
	RTLE;
}

void EIF_Minit1430 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
