/*
 * Code for class EV_WEL_STATIC_OWNERDRAW
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1929.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_WEL_STATIC_OWNERDRAW}.text_length */
EIF_INTEGER_32 F1946_23340 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O19370[Dtype(Current)-1945]);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		ti4_1 = *(EIF_INTEGER_32 *)(loc1+ _LNGOFF_1_1_0_2_);
		RTLE;
		return (EIF_INTEGER_32) ti4_1;
	} else {
		RTLE;
		return (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	}/* NOTREACHED */
	
}

/* {EV_WEL_STATIC_OWNERDRAW}.text */
EIF_REFERENCE F1946_23341 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLIU(4);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O19370[Dtype(Current)-1945]);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tr1 = F1_14(loc1);
		RTLE;
		return (EIF_REFERENCE) tr1;
	} else {
		Result = RTMS32_EX_H("",0,0);
	}
	RTLE;
	return Result;
}

/* {EV_WEL_STATIC_OWNERDRAW}.set_text */
void F1946_23342 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4657[Dtype(RTCW(arg1))-1560])(arg1);
		if (tb1) {
			tr1 = F1558_6569(RTCW(arg1));
			tr1 = F1_14(tr1);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + O19370[dtype-1945]) = (EIF_REFERENCE) tr1;
		} else {
			tr1 = F1558_6569(RTCW(arg1));
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + O19370[dtype-1945]) = (EIF_REFERENCE) tr1;
		}
	} else {
		*(EIF_REFERENCE *)(Current + O19370[dtype-1945]) = (EIF_REFERENCE) NULL;
	}
	RTLE;
}

/* {EV_WEL_STATIC_OWNERDRAW}.default_style */
static EIF_INTEGER_32 F1946_23344_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTLD;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 332)

	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEV;
	RTGC;
	RTOTP;
	Result = RTOUCB(EIF_INTEGER_32,333,F1945_23339, (Current));
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result + ((EIF_INTEGER_32) 13L));
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F1946_23344 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,332,F1946_23344_body,(Current));
}

void EIF_Minit1929 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
