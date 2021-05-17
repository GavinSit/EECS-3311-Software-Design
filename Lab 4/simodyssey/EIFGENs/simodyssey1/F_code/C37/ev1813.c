/*
 * Code for class EV_COLOR_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1813.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_COLOR_IMP}.make */
void F1830_20509 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	F1829_20488(Current);
	tr1 = RTOUCR(257,F1708_19212, (Current));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	F1696_18990(Current, (EIF_BOOLEAN) 1);
	RTLE;
}

/* {EV_COLOR_IMP}.red */
EIF_REAL_32 F1830_20510 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_REAL_32 Result = ((EIF_REAL_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	ti4_1 = F1829_20494(Current);
	Result = (EIF_REAL_32) (ti4_1);
	Result = (EIF_REAL_32) (EIF_REAL_32) ((EIF_REAL_64) (Result) /  (EIF_REAL_64) ((EIF_REAL_32) 255.0));
	RTLE;
	return Result;
}

/* {EV_COLOR_IMP}.green */
EIF_REAL_32 F1830_20511 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_REAL_32 Result = ((EIF_REAL_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	ti4_1 = F1829_20495(Current);
	Result = (EIF_REAL_32) (ti4_1);
	Result = (EIF_REAL_32) (EIF_REAL_32) ((EIF_REAL_64) (Result) /  (EIF_REAL_64) ((EIF_REAL_32) 255.0));
	RTLE;
	return Result;
}

/* {EV_COLOR_IMP}.blue */
EIF_REAL_32 F1830_20512 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_REAL_32 Result = ((EIF_REAL_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	ti4_1 = F1829_20496(Current);
	Result = (EIF_REAL_32) (ti4_1);
	Result = (EIF_REAL_32) (EIF_REAL_32) ((EIF_REAL_64) (Result) /  (EIF_REAL_64) ((EIF_REAL_32) 255.0));
	RTLE;
	return Result;
}

/* {EV_COLOR_IMP}.name */
EIF_REFERENCE F1830_20513 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {EV_COLOR_IMP}.set_red */
void F1830_20514 (EIF_REFERENCE Current, EIF_REAL_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_32 tr4_1;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	tr4_1 = (EIF_REAL_32) (((EIF_INTEGER_32) 255L));
	tr1 = RTLNS(eif_new_type(1481, 0x00).id, 1481, _OBJSIZ_0_0_0_0_1_0_0_0_);
	*(EIF_REAL_32 *)tr1 = (EIF_REAL_32) (arg1 * tr4_1);
	ti4_1 = F1480_5568(RTCW(tr1));
	F1829_20500(Current, ti4_1);
	RTLE;
}

/* {EV_COLOR_IMP}.set_green */
void F1830_20515 (EIF_REFERENCE Current, EIF_REAL_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_32 tr4_1;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	tr4_1 = (EIF_REAL_32) (((EIF_INTEGER_32) 255L));
	tr1 = RTLNS(eif_new_type(1481, 0x00).id, 1481, _OBJSIZ_0_0_0_0_1_0_0_0_);
	*(EIF_REAL_32 *)tr1 = (EIF_REAL_32) (arg1 * tr4_1);
	ti4_1 = F1480_5568(RTCW(tr1));
	F1829_20501(Current, ti4_1);
	RTLE;
}

/* {EV_COLOR_IMP}.set_blue */
void F1830_20516 (EIF_REFERENCE Current, EIF_REAL_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_32 tr4_1;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	tr4_1 = (EIF_REAL_32) (((EIF_INTEGER_32) 255L));
	tr1 = RTLNS(eif_new_type(1481, 0x00).id, 1481, _OBJSIZ_0_0_0_0_1_0_0_0_);
	*(EIF_REAL_32 *)tr1 = (EIF_REAL_32) (arg1 * tr4_1);
	ti4_1 = F1480_5568(RTCW(tr1));
	F1829_20502(Current, ti4_1);
	RTLE;
}

/* {EV_COLOR_IMP}.set_with_system_id */
void F1830_20518 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	loc1 = RTLNS(eif_new_type(1828, 0x01).id, 1828, _OBJSIZ_0_0_0_1_0_0_0_0_);
	F1829_20490(RTCW(loc1), arg1);
	ti4_1 = F1829_20494(RTCW(loc1));
	F1829_20500(Current, ti4_1);
	ti4_1 = F1829_20495(RTCW(loc1));
	F1829_20501(Current, ti4_1);
	ti4_1 = F1829_20496(RTCW(loc1));
	F1829_20502(Current, ti4_1);
	RTLE;
}

/* {EV_COLOR_IMP}.rgb_24_bit */
EIF_INTEGER_32 F1830_20519 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	Result = F1829_20494(Current);
	ti4_1 = F1829_20495(Current);
	ti4_2 = F1829_20496(Current);
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (Result * ((EIF_INTEGER_32) 65536L)) + (EIF_INTEGER_32) (ti4_1 * ((EIF_INTEGER_32) 256L))) + ti4_2);
	RTLE;
	return Result;
}

/* {EV_COLOR_IMP}.set_red_with_8_bit */
void F1830_20521 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	F1829_20500(Current, arg1);
}

/* {EV_COLOR_IMP}.set_green_with_8_bit */
void F1830_20522 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	F1829_20501(Current, arg1);
}

/* {EV_COLOR_IMP}.set_blue_with_8_bit */
void F1830_20523 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	F1829_20502(Current, arg1);
}

/* {EV_COLOR_IMP}.destroy */
void F1830_20530 (EIF_REFERENCE Current)
{
	GTCX
	
	
	F1696_18991(Current, (EIF_BOOLEAN) 1);
}

/* {EV_COLOR_IMP}.delta */
EIF_REAL_32 F1830_20531 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_REAL_32) (EIF_REAL_32) ((EIF_REAL_64) ((EIF_REAL_32) 1.0) /  (EIF_REAL_64) ((EIF_REAL_32) 255.0));
}

void EIF_Minit1813 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
