/*
 * Code for class EV_FONTABLE_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1739.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_FONTABLE_IMP}.font */
EIF_REFERENCE F1750_19720 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(7);
	RTLR(0,loc4);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLR(4,loc1);
	RTLR(5,loc3);
	RTLR(6,loc2);
	RTLIU(7);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O16495[dtype-1749]);
	loc4 = tr1;
	if (EIF_TEST(loc4)) {
		tr1 = F1_14(loc4);
		RTLE;
		return (EIF_REFERENCE) tr1;
	} else {
		Result = RTLNS(eif_new_type(1601, 0x01).id, 1601, _OBJSIZ_2_0_0_0_0_0_0_0_);
		F1596_17742(RTCW(Result));
		loc1 = *(EIF_REFERENCE *)(RTCW(Result) + _REFACS_1_);
		loc1 = RTRV(eif_new_type(1885, 0x00), loc1);
		RTCT0("font_imp /= Void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		loc3 = *(EIF_REFERENCE *)(Current + O16496[dtype-1749]);
		RTCT0("l_private_wel_font /= Void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc3 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		loc2 = RTLNS(eif_new_type(1884, 0x01).id, 1884, _OBJSIZ_0_2_0_3_0_1_0_0_);
		tr1 = F1885_21699(RTCW(loc3));
		F1885_21695(RTCW(loc2), tr1);
		F1886_21743(RTCW(loc1), loc2);
		RTAR(Current, Result);
		*(EIF_REFERENCE *)(Current + O16495[dtype-1749]) = (EIF_REFERENCE) Result;
		*(EIF_REFERENCE *)(Current + O16496[dtype-1749]) = (EIF_REFERENCE) NULL;
	}
	RTLE;
	return Result;
}

/* {EV_FONTABLE_IMP}.internal_font */
EIF_REFERENCE F1750_19721 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O16495[Dtype(Current)-1749]);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		RTLE;
		return (EIF_REFERENCE) loc1;
	} else {
		RTLE;
		return (EIF_REFERENCE) F1750_19720(Current);
	}/* NOTREACHED */
	
}

/* {EV_FONTABLE_IMP}.internal_font_height */
EIF_INTEGER_32 F1750_19722 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLIU(4);
	
	RTGC;
	loc1 = RTLNS(eif_new_type(1310, 0x01).id, 1310, _OBJSIZ_6_2_0_3_0_7_0_0_);
	F1311_15448(RTCW(loc1));
	if ((EIF_BOOLEAN)((FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R16498[dtype-1952])(Current) == NULL)) {
		tr1 = RTLNS(eif_new_type(501, 0x01).id, 501, _OBJSIZ_0_0_0_0_0_0_0_0_);
		tr1 = F502_14137(RTCW(tr1));
		F1306_15264(RTCW(loc1), tr1);
	} else {
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R16498[dtype-1952])(Current);
		F1306_15264(RTCW(loc1), tr1);
	}
	tr1 = RTMS_EX_H("X",1,88);
	loc2 = F1306_15225(RTCW(loc1), tr1);
	F1306_15270(RTCW(loc1));
	F1311_15450(RTCW(loc1));
	ti4_1 = F1405_17174(RTCW(loc2));
	RTLE;
	return (EIF_INTEGER_32) ti4_1;
}

/* {EV_FONTABLE_IMP}.set_font */
void F1750_19723 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTGC;
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + O16495[dtype-1749]) = (EIF_REFERENCE) arg1;
	tr1 = *(EIF_REFERENCE *)(Current + O16495[dtype-1749]);
	loc1 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_1_);
	loc1 = RTRV(eif_new_type(1885, 0x00), loc1);
	RTCT0("valid_font", EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	tr1 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_2_);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R16499[dtype-1952])(Current, tr1);
	*(EIF_REFERENCE *)(Current + O16496[dtype-1749]) = (EIF_REFERENCE) NULL;
	RTLE;
}

/* {EV_FONTABLE_IMP}.set_default_font */
void F1750_19724 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = RTOUCR(331,F1750_19727, (Current));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + O16496[dtype-1749]) = (EIF_REFERENCE) tr1;
	tr1 = RTOUCR(331,F1750_19727, (Current));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R16499[dtype-1952])(Current, tr1);
	RTLE;
}

/* {EV_FONTABLE_IMP}.wel_default_font */
static EIF_REFERENCE F1750_19727_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(331)

	RTLI(1);
	RTLR(0,tr1);
	RTLIU(1);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(eif_new_type(501, 0x01).id, 501, _OBJSIZ_0_0_0_0_0_0_0_0_);
	Result = F502_14137(RTCW(tr1));
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1750_19727 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(331,F1750_19727_body,(Current));
}

void EIF_Minit1739 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
