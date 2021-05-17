/*
 * Code for class YY_SCANNER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "yy1814.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {YY_SCANNER}.make */
void F1831_20532 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = RTOUCR(247,F70_9830, (RTCV(RTOUCR(221,F337_13036, (Current)))));
	F1831_20533(Current, tr1);
	RTLE;
}

/* {YY_SCANNER}.make_with_file */
void F1831_20533 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	tr1 = F1831_20570(Current, arg1);
	F1832_20585(Current, tr1);
	RTLE;
}

/* {YY_SCANNER}.last_token */
EIF_INTEGER_32 F1831_20539 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_0_);
}


/* {YY_SCANNER}.terminate */
void F1831_20560 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_52_4_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
}

/* {YY_SCANNER}.wrap */
EIF_BOOLEAN F1831_20561 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
}

/* {YY_SCANNER}.new_file_buffer */
EIF_REFERENCE F1831_20570 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(255, 0x01).id, 255, _OBJSIZ_2_4_0_6_0_0_0_0_);
	F256_11773(RTCW(tr1), arg1);
	RTLE;
	return (EIF_REFERENCE) tr1;
}

/* {YY_SCANNER}.fatal_error */
void F1831_20580 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTGC;
	tr1 = RTOUCR(248,F70_9832, (RTCV(RTOUCR(221,F337_13036, (Current)))));
	F1164_14578(RTCW(tr1), arg1);
	tr1 = RTOUCR(248,F70_9832, (RTCV(RTOUCR(221,F337_13036, (Current)))));
	F1164_14577(RTCW(tr1), (EIF_CHARACTER_8) '\012');
	RTLE;
}

void EIF_Minit1814 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
