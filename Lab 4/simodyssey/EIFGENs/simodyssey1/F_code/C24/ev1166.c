/*
 * Code for class EV_STOCK_COLORS_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1166.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_STOCK_COLORS_IMP}.color_dialog */
EIF_REFERENCE F247_11664 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Result);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTGC;
	Result = RTLNS(eif_new_type(1602, 0x01).id, 1602, _OBJSIZ_2_0_0_0_0_0_0_0_);
	F1596_17742(RTCW(Result));
	loc1 = *(EIF_REFERENCE *)(RTCW(Result) + _REFACS_1_);
	loc1 = RTRV(eif_new_type(1829, 0x00), loc1);
	RTCT0("color_imp /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	ti4_1 = ((EIF_INTEGER_32) 15L);
	F1830_20518(RTCW(loc1), ti4_1);
	RTLE;
	return Result;
}

/* {EV_STOCK_COLORS_IMP}.color_read_only */
EIF_REFERENCE F247_11668 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Result);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTGC;
	Result = RTLNS(eif_new_type(1602, 0x01).id, 1602, _OBJSIZ_2_0_0_0_0_0_0_0_);
	F1596_17742(RTCW(Result));
	loc1 = *(EIF_REFERENCE *)(RTCW(Result) + _REFACS_1_);
	loc1 = RTRV(eif_new_type(1829, 0x00), loc1);
	RTCT0("color_imp /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	ti4_1 = ((EIF_INTEGER_32) 11L);
	F1830_20518(RTCW(loc1), ti4_1);
	RTLE;
	return Result;
}

/* {EV_STOCK_COLORS_IMP}.color_read_write */
EIF_REFERENCE F247_11669 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 tr4_2;
	EIF_REAL_32 tr4_3;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Result);
	RTLIU(1);
	
	RTGC;
	Result = RTLNS(eif_new_type(1602, 0x01).id, 1602, _OBJSIZ_2_0_0_0_0_0_0_0_);
	tr4_1 = (EIF_REAL_32) (((EIF_INTEGER_32) 1L));
	tr4_2 = (EIF_REAL_32) (((EIF_INTEGER_32) 1L));
	tr4_3 = (EIF_REAL_32) (((EIF_INTEGER_32) 1L));
	F1603_17889(RTCW(Result), tr4_1, tr4_2, tr4_3);
	RTLE;
	return Result;
}

/* {EV_STOCK_COLORS_IMP}.default_background_color */
EIF_REFERENCE F247_11670 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_REFERENCE) F247_11664(Current);
}

/* {EV_STOCK_COLORS_IMP}.default_foreground_color */
EIF_REFERENCE F247_11671 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 tr4_2;
	EIF_REAL_32 tr4_3;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Result);
	RTLIU(1);
	
	RTGC;
	Result = RTLNS(eif_new_type(1602, 0x01).id, 1602, _OBJSIZ_2_0_0_0_0_0_0_0_);
	tr4_1 = (EIF_REAL_32) (((EIF_INTEGER_32) 0L));
	tr4_2 = (EIF_REAL_32) (((EIF_INTEGER_32) 0L));
	tr4_3 = (EIF_REAL_32) (((EIF_INTEGER_32) 0L));
	F1603_17889(RTCW(Result), tr4_1, tr4_2, tr4_3);
	RTLE;
	return Result;
}

/* {EV_STOCK_COLORS_IMP}.wel_color_constants */
static EIF_REFERENCE F247_11672_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(263)

	RTLI(1);
	RTLR(0,tr1);
	RTLIU(1);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(eif_new_type(1008, 0x01).id, 1008, _OBJSIZ_0_0_0_0_0_0_0_0_);
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F247_11672 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(263,F247_11672_body,(Current));
}

void EIF_Minit1166 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
