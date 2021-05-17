/*
 * Code for class REAL_32_REF
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "re191.h"
#include <math.h>
#include "eif_helpers.h"
#include "eif_out.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {REAL_32_REF}.hash_code */
EIF_INTEGER_32 F1480_5541 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4087[Dtype(Current)-1479])(Current);
	Result = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (ti4_1)));
	RTLE;
	return Result;
}

/* {REAL_32_REF}.sign */
EIF_INTEGER_32 F1480_5542 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if ((EIF_BOOLEAN) eif_is_greater_real_32 (*(EIF_REAL_32 *)(Current+ _R32OFF_0_0_0_0_0_), (EIF_REAL_32) (EIF_REAL_64) 0.0)) {
		RTLE;
		return (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	} else {
		if ((EIF_BOOLEAN) eif_is_less_real_32 (*(EIF_REAL_32 *)(Current+ _R32OFF_0_0_0_0_0_), (EIF_REAL_32) (EIF_REAL_64) 0.0)) {
			RTLE;
			return (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
		}
	}
	RTLE;
	return (EIF_INTEGER_32) 0;
}

/* {REAL_32_REF}.zero */
EIF_REFERENCE F1480_5544 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTGC;
	Result = RTLNSMART(Dftype(Current));
	F1_29(RTCW(Result));
	F1480_5554(RTCW(Result), (EIF_REAL_32) 0.0);
	RTLE;
	return Result;
}

/* {REAL_32_REF}.is_less */
EIF_BOOLEAN F1480_5552 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 tr4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	tr4_1 = *(EIF_REAL_32 *)(Current+ _R32OFF_0_0_0_0_0_);
	tr4_2 = *(EIF_REAL_32 *)(RTCW(arg1)+ _R32OFF_0_0_0_0_0_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) eif_is_less_real_32 (tr4_1, tr4_2);
	RTLE;
	return Result;
}

/* {REAL_32_REF}.is_equal */
EIF_BOOLEAN F1480_5553 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 tr4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	tr4_1 = *(EIF_REAL_32 *)(RTCW(arg1)+ _R32OFF_0_0_0_0_0_);
	tr4_2 = *(EIF_REAL_32 *)(Current+ _R32OFF_0_0_0_0_0_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) eif_is_equal_real_32 (tr4_1, tr4_2);
	RTLE;
	return Result;
}

/* {REAL_32_REF}.set_item */
void F1480_5554 (EIF_REFERENCE Current, EIF_REAL_32 arg1)
{
	GTCX
	
	
	*(EIF_REAL_32 *)(Current+ _R32OFF_0_0_0_0_0_) = (EIF_REAL_32) arg1;
}

/* {REAL_32_REF}.truncated_to_integer */
EIF_INTEGER_32 F1480_5563 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REAL_32 tr4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tr4_1 = *(EIF_REAL_32 *)(Current+ _R32OFF_0_0_0_0_0_);
	Result = (EIF_INTEGER_32) tr4_1;
	RTLE;
	return Result;
}

/* {REAL_32_REF}.to_double */
EIF_REAL_64 F1480_5565 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REAL_32 tr4_1;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tr4_1 = *(EIF_REAL_32 *)(Current+ _R32OFF_0_0_0_0_0_);
	Result = (EIF_REAL_64) (tr4_1);
	RTLE;
	return Result;
}

/* {REAL_32_REF}.floor */
EIF_INTEGER_32 F1480_5567 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REAL_32 tr4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tr4_1 = (FUNCTION_CAST(EIF_REAL_32, (EIF_REFERENCE)) R4094[Dtype(Current)-1479])(Current);
	Result = (EIF_INTEGER_32) tr4_1;
	RTLE;
	return Result;
}

/* {REAL_32_REF}.rounded */
EIF_INTEGER_32 F1480_5568 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_32 tr4_1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	Result = F1480_5542(Current);
	tr4_1 = F1480_5572(Current);
	tr1 = RTLNS(eif_new_type(1481, 0x00).id, 1481, _OBJSIZ_0_0_0_0_1_0_0_0_);
	*(EIF_REAL_32 *)tr1 = ((EIF_REAL_32) (tr4_1 + (EIF_REAL_32) (EIF_REAL_64) 0.5));
	ti4_1 = F1480_5567(RTCW(tr1));
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result * ti4_1);
	RTLE;
	return Result;
}

/* {REAL_32_REF}.floor_real_32 */
EIF_REAL_32 F1480_5570 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 Result = ((EIF_REAL_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tr4_1 = *(EIF_REAL_32 *)(Current+ _R32OFF_0_0_0_0_0_);
	Result = (EIF_REAL_32) floor ((double)tr4_1);
	RTLE;
	return Result;
}

/* {REAL_32_REF}.abs */
EIF_REAL_32 F1480_5572 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REAL_32 Result = ((EIF_REAL_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	Result = *(EIF_REAL_32 *)(RTCV(F1480_5581(Current))+ _R32OFF_0_0_0_0_0_);
	RTLE;
	return Result;
}

/* {REAL_32_REF}.plus */
EIF_REFERENCE F1480_5573 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REAL_32 tr4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTGC;
	Result = RTLNSMART(Dftype(Current));
	F1_29(RTCW(Result));
	tr4_1 = *(EIF_REAL_32 *)(RTCW(arg1)+ _R32OFF_0_0_0_0_0_);
	F1480_5554(RTCW(Result), (EIF_REAL_32) (*(EIF_REAL_32 *)(Current+ _R32OFF_0_0_0_0_0_) + tr4_1));
	RTLE;
	return Result;
}

/* {REAL_32_REF}.minus */
EIF_REFERENCE F1480_5574 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REAL_32 tr4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTGC;
	Result = RTLNSMART(Dftype(Current));
	F1_29(RTCW(Result));
	tr4_1 = *(EIF_REAL_32 *)(RTCW(arg1)+ _R32OFF_0_0_0_0_0_);
	F1480_5554(RTCW(Result), (EIF_REAL_32) (*(EIF_REAL_32 *)(Current+ _R32OFF_0_0_0_0_0_) - tr4_1));
	RTLE;
	return Result;
}

/* {REAL_32_REF}.product */
EIF_REFERENCE F1480_5575 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REAL_32 tr4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTGC;
	Result = RTLNSMART(Dftype(Current));
	F1_29(RTCW(Result));
	tr4_1 = *(EIF_REAL_32 *)(RTCW(arg1)+ _R32OFF_0_0_0_0_0_);
	F1480_5554(RTCW(Result), (EIF_REAL_32) (*(EIF_REAL_32 *)(Current+ _R32OFF_0_0_0_0_0_) * tr4_1));
	RTLE;
	return Result;
}

/* {REAL_32_REF}.quotient */
EIF_REFERENCE F1480_5576 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REAL_32 tr4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTGC;
	Result = RTLNSMART(Dftype(Current));
	F1_29(RTCW(Result));
	tr4_1 = *(EIF_REAL_32 *)(RTCW(arg1)+ _R32OFF_0_0_0_0_0_);
	F1480_5554(RTCW(Result), (EIF_REAL_32) ((EIF_REAL_64) (*(EIF_REAL_32 *)(Current+ _R32OFF_0_0_0_0_0_)) /  (EIF_REAL_64) (tr4_1)));
	RTLE;
	return Result;
}

/* {REAL_32_REF}.opposite */
EIF_REFERENCE F1480_5579 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTGC;
	Result = RTLNSMART(Dftype(Current));
	F1_29(RTCW(Result));
	F1480_5554(RTCW(Result), (EIF_REAL_32) -*(EIF_REAL_32 *)(Current+ _R32OFF_0_0_0_0_0_));
	RTLE;
	return Result;
}

/* {REAL_32_REF}.out */
EIF_REFERENCE F1480_5580 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REAL_32 tr4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTGC;
	tr4_1 = *(EIF_REAL_32 *)(Current+ _R32OFF_0_0_0_0_0_);
	Result = c_outr32(tr4_1);
	RTLE;
	return Result;
}

/* {REAL_32_REF}.abs_ref */
EIF_REFERENCE F1480_5581 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	if ((EIF_BOOLEAN) eif_is_equal_real_32 (*(EIF_REAL_32 *)(Current+ _R32OFF_0_0_0_0_0_), (EIF_REAL_32) (EIF_REAL_64) 0.0)) {
		RTLE;
		return (EIF_REFERENCE) F1480_5544(Current);
	} else {
		if ((EIF_BOOLEAN) eif_is_greater_real_32 (*(EIF_REAL_32 *)(Current+ _R32OFF_0_0_0_0_0_), (EIF_REAL_32) (EIF_REAL_64) 0.0)) {
			RTLE;
			return (EIF_REFERENCE) Current;
		} else {
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2128[Dtype(Current)-1476])(Current);
			RTLE;
			return (EIF_REFERENCE) tr1;
		}
	}/* NOTREACHED */
	
}

void EIF_Minit191 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
