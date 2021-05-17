/*
 * Code for class WEL_RICH_EDIT_BUFFER_SAVER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1554.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_RICH_EDIT_BUFFER_SAVER}.make */
void F1416_17566 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNSMART(eif_new_type(1283, 1).id);
	F1284_4468(RTCW(tr1), ((EIF_INTEGER_32) 0L));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	F1414_17556(Current);
	RTLE;
}

/* {WEL_RICH_EDIT_BUFFER_SAVER}.text */
EIF_REFERENCE F1416_17567 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLR(4,loc2);
	RTLIU(5);
	
	RTGC;
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_)) {
		loc1 = RTLNS(eif_new_type(944, 0x01).id, 944, _OBJSIZ_1_0_0_1_0_0_0_0_);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tp1 = *(EIF_POINTER *)(RTCW(tr1)+ _PTROFF_0_1_0_1_0_0_);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_0_1_0_0_);
		F945_14352(RTCW(loc1), tp1, ti4_1);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_1_0_0_0_);
		Result = F944_3744(RTCW(loc1), ((EIF_INTEGER_32) 1L), ti4_1);
	} else {
		loc2 = RTLNS(eif_new_type(547, 0x01).id, 547, _OBJSIZ_1_0_0_1_0_0_0_0_);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tp1 = *(EIF_POINTER *)(RTCW(tr1)+ _PTROFF_0_1_0_1_0_0_);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_0_1_0_0_);
		F548_1899(RTCW(loc2), tp1, ti4_1);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc2)+ _LNGOFF_1_0_0_0_);
		tr1 = F548_1906(RTCW(loc2), ((EIF_INTEGER_32) 1L), ti4_1);
		Result = F1558_6569(RTCW(tr1));
	}
	RTLE;
	return Result;
}

/* {WEL_RICH_EDIT_BUFFER_SAVER}.release_stream */
void F1416_17568 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	F1413_17543(Current);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	F1284_4558(RTCW(tr1), ((EIF_INTEGER_32) 0L));
	RTLE;
}

/* {WEL_RICH_EDIT_BUFFER_SAVER}.write_buffer */
void F1416_17569 (EIF_REFERENCE Current)
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
	tr1 = *(EIF_REFERENCE *)(Current);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		F1284_4557(RTCW(tr1), loc1);
	}
	RTLE;
}

void EIF_Minit1554 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
