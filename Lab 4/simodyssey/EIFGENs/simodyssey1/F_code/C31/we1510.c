/*
 * Code for class WEL_TEXT_RANGE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1510.h"
#include <richedit.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F1372_16507
static void inline_F1372_16507 (EIF_POINTER arg1, EIF_POINTER arg2)
{
	((TEXTRANGE *) arg1)->lpstrText = (LPTSTR) arg2;
	;
}
#define INLINE_F1372_16507
#endif
#ifndef INLINE_F1372_16506
static EIF_INTEGER_32 inline_F1372_16506 (void)
{
	return sizeof (TEXTRANGE);
	;
}
#define INLINE_F1372_16506
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_TEXT_RANGE}.make */
void F1372_16501 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	F1337_15830(Current);
	tr1 = RTLNSMART(eif_new_type(944, 1).id);
	F944_3739(RTCW(tr1), arg1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_2_1_0_0_0_0_);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tp2 = F944_3745(RTCW(tr1));
	inline_F1372_16507(tp1, tp2);
	tr1 = RTLNSMART(eif_new_type(1405, 1).id);
	F1296_15096(RTCW(tr1), *(EIF_POINTER *)(Current+ _PTROFF_2_1_0_0_0_0_));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current);
	F1296_15101(RTCW(tr1));
	tr1 = *(EIF_REFERENCE *)(Current);
	F1406_17188(RTCW(tr1), arg2, arg3);
	RTLE;
}

/* {WEL_TEXT_RANGE}.structure_size */
static EIF_INTEGER_32 F1372_16505_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 452)

	
	RTEV;
	RTOTP;
	Result = inline_F1372_16506();
	RTOTE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F1372_16505 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,452,F1372_16505_body,(Current));
}

/* {WEL_TEXT_RANGE}.cwel_size_of_textrange */
EIF_INTEGER_32 F1372_16506 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = inline_F1372_16506 ();
	return Result;
}

/* {WEL_TEXT_RANGE}.cwel_charrange_set_text */
void F1372_16507 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	
	inline_F1372_16507 ((EIF_POINTER) arg1, (EIF_POINTER) arg2);
}

void EIF_Minit1510 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
