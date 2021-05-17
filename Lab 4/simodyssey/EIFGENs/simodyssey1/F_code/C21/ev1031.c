/*
 * Code for class EV_STOCK_COLORS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1031.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_STOCK_COLORS}.white */
static EIF_REFERENCE F73_9865_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 tr4_2;
	EIF_REAL_32 tr4_3;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(207)

	RTLI(1);
	RTLR(0,tr1);
	RTLIU(1);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(eif_new_type(1602, 0x01).id, 1602, _OBJSIZ_2_0_0_0_0_0_0_0_);
	tr4_1 = (EIF_REAL_32) (((EIF_INTEGER_32) 1L));
	tr4_2 = (EIF_REAL_32) (((EIF_INTEGER_32) 1L));
	tr4_3 = (EIF_REAL_32) (((EIF_INTEGER_32) 1L));
	F1603_17889(RTCW(tr1), tr4_1, tr4_2, tr4_3);
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F73_9865 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(207,F73_9865_body,(Current));
}

/* {EV_STOCK_COLORS}.black */
static EIF_REFERENCE F73_9866_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 tr4_2;
	EIF_REAL_32 tr4_3;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(226)

	RTLI(1);
	RTLR(0,tr1);
	RTLIU(1);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(eif_new_type(1602, 0x01).id, 1602, _OBJSIZ_2_0_0_0_0_0_0_0_);
	tr4_1 = (EIF_REAL_32) (((EIF_INTEGER_32) 0L));
	tr4_2 = (EIF_REAL_32) (((EIF_INTEGER_32) 0L));
	tr4_3 = (EIF_REAL_32) (((EIF_INTEGER_32) 0L));
	F1603_17889(RTCW(tr1), tr4_1, tr4_2, tr4_3);
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F73_9866 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(226,F73_9866_body,(Current));
}

/* {EV_STOCK_COLORS}.color_read_only */
EIF_REFERENCE F73_9887 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTGC;
	Result = F247_11668(RTCV(RTOUCR(227,F73_9892, (Current))));
	RTLE;
	return Result;
}

/* {EV_STOCK_COLORS}.color_read_write */
EIF_REFERENCE F73_9888 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTGC;
	Result = F247_11669(RTCV(RTOUCR(227,F73_9892, (Current))));
	RTLE;
	return Result;
}

/* {EV_STOCK_COLORS}.default_background_color */
EIF_REFERENCE F73_9889 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTGC;
	Result = F247_11670(RTCV(RTOUCR(227,F73_9892, (Current))));
	RTLE;
	return Result;
}

/* {EV_STOCK_COLORS}.default_foreground_color */
EIF_REFERENCE F73_9890 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTGC;
	Result = F247_11671(RTCV(RTOUCR(227,F73_9892, (Current))));
	RTLE;
	return Result;
}

/* {EV_STOCK_COLORS}.implementation */
static EIF_REFERENCE F73_9892_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(227)

	RTLI(1);
	RTLR(0,tr1);
	RTLIU(1);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(eif_new_type(246, 0x01).id, 246, _OBJSIZ_0_0_0_0_0_0_0_0_);
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F73_9892 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(227,F73_9892_body,(Current));
}

void EIF_Minit1031 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
