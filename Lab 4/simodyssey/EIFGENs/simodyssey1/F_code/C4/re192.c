/*
 * Code for class REAL_32
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "re192.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {REAL_32}.is_less */
EIF_BOOLEAN F1482_5582 (EIF_REFERENCE Current, EIF_REAL_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(1481, 0x00).id, 1481, _OBJSIZ_0_0_0_0_1_0_0_0_);
	*(EIF_REAL_32 *)tr1 = arg1;
	Result = F1480_5552(Current, tr1);
	RTLE;
	return Result;
}

/* {REAL_32}.truncated_to_integer */
EIF_INTEGER_32 F1482_5586 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) F1480_5563(Current);
}

/* {REAL_32}.to_double */
EIF_REAL_64 F1482_5588 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_REAL_64) F1480_5565(Current);
}

/* {REAL_32}.floor_real_32 */
EIF_REAL_32 F1482_5590 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_REAL_32) F1480_5570(Current);
}

/* {REAL_32}.plus */
EIF_REAL_32 F1482_5591 (EIF_REFERENCE Current, EIF_REAL_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_32 Result = ((EIF_REAL_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(1481, 0x00).id, 1481, _OBJSIZ_0_0_0_0_1_0_0_0_);
	*(EIF_REAL_32 *)tr1 = arg1;
	tr1 = F1480_5573(Current, tr1);
	Result = *(EIF_REAL_32 *)(tr1);
	RTLE;
	return Result;
}

/* {REAL_32}.minus */
EIF_REAL_32 F1482_5592 (EIF_REFERENCE Current, EIF_REAL_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_32 Result = ((EIF_REAL_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(1481, 0x00).id, 1481, _OBJSIZ_0_0_0_0_1_0_0_0_);
	*(EIF_REAL_32 *)tr1 = arg1;
	tr1 = F1480_5574(Current, tr1);
	Result = *(EIF_REAL_32 *)(tr1);
	RTLE;
	return Result;
}

/* {REAL_32}.product */
EIF_REAL_32 F1482_5593 (EIF_REFERENCE Current, EIF_REAL_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_32 Result = ((EIF_REAL_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(1481, 0x00).id, 1481, _OBJSIZ_0_0_0_0_1_0_0_0_);
	*(EIF_REAL_32 *)tr1 = arg1;
	tr1 = F1480_5575(Current, tr1);
	Result = *(EIF_REAL_32 *)(tr1);
	RTLE;
	return Result;
}

/* {REAL_32}.quotient */
EIF_REAL_32 F1482_5594 (EIF_REFERENCE Current, EIF_REAL_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_32 Result = ((EIF_REAL_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(1481, 0x00).id, 1481, _OBJSIZ_0_0_0_0_1_0_0_0_);
	*(EIF_REAL_32 *)tr1 = arg1;
	tr1 = F1480_5576(Current, tr1);
	Result = *(EIF_REAL_32 *)(tr1);
	RTLE;
	return Result;
}

/* {REAL_32}.opposite */
EIF_REAL_32 F1482_5597 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return *(EIF_REAL_32 *)F1480_5579(Current);
}

/* {REAL_32}.out */
EIF_REFERENCE F1482_5605 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_REFERENCE) F1480_5580(Current);
}

void EIF_Minit192 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
