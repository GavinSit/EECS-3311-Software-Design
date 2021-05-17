/*
 * Code for class EV_COLOR
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1598.h"
#include "eif_helpers.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_COLOR}.make_with_8_bit_rgb */
void F1603_17888 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1596_17742(Current);
	F1603_17908(Current, arg1);
	F1603_17909(Current, arg2);
	F1603_17910(Current, arg3);
	RTLE;
}

/* {EV_COLOR}.make_with_rgb */
void F1603_17889 (EIF_REFERENCE Current, EIF_REAL_32 arg1, EIF_REAL_32 arg2, EIF_REAL_32 arg3)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1596_17742(Current);
	F1603_17899(Current, arg1);
	F1603_17900(Current, arg2);
	F1603_17901(Current, arg3);
	RTLE;
}

/* {EV_COLOR}.red */
EIF_REAL_32 F1603_17890 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_32 Result = ((EIF_REAL_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	Result = F1830_20510(RTCW(tr1));
	RTLE;
	return Result;
}

/* {EV_COLOR}.green */
EIF_REAL_32 F1603_17891 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_32 Result = ((EIF_REAL_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	Result = F1830_20511(RTCW(tr1));
	RTLE;
	return Result;
}

/* {EV_COLOR}.blue */
EIF_REAL_32 F1603_17892 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_32 Result = ((EIF_REAL_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	Result = F1830_20512(RTCW(tr1));
	RTLE;
	return Result;
}

/* {EV_COLOR}.set_red */
void F1603_17899 (EIF_REFERENCE Current, EIF_REAL_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	F1830_20514(RTCW(tr1), arg1);
	RTLE;
}

/* {EV_COLOR}.set_green */
void F1603_17900 (EIF_REFERENCE Current, EIF_REAL_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	F1830_20515(RTCW(tr1), arg1);
	RTLE;
}

/* {EV_COLOR}.set_blue */
void F1603_17901 (EIF_REFERENCE Current, EIF_REAL_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	F1830_20516(RTCW(tr1), arg1);
	RTLE;
}

/* {EV_COLOR}.rgb_24_bit */
EIF_INTEGER_32 F1603_17902 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	Result = F1830_20519(RTCW(tr1));
	RTLE;
	return Result;
}

/* {EV_COLOR}.set_red_with_8_bit */
void F1603_17908 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	F1830_20521(RTCW(tr1), arg1);
	RTLE;
}

/* {EV_COLOR}.set_green_with_8_bit */
void F1603_17909 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	F1830_20522(RTCW(tr1), arg1);
	RTLE;
}

/* {EV_COLOR}.set_blue_with_8_bit */
void F1603_17910 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	F1830_20523(RTCW(tr1), arg1);
	RTLE;
}

/* {EV_COLOR}.out */
EIF_REFERENCE F1603_17918 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_32 tr4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,Result);
	RTLIU(5);
	
	RTGC;
	loc1 = RTLNS(eif_new_type(393, 0x01).id, 393, _OBJSIZ_1_8_0_4_0_0_0_0_);
	F394_1725(RTCW(loc1), ((EIF_INTEGER_32) 6L), ((EIF_INTEGER_32) 4L));
	tr4_1 = F1603_17890(Current);
	tr8_1 = (EIF_REAL_64) (tr4_1);
	tr1 = F394_1743(RTCW(loc1), tr8_1);
	tr2 = RTMS_EX_H(" ",1,32);
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
	tr4_1 = F1603_17891(Current);
	tr8_1 = (EIF_REAL_64) (tr4_1);
	tr2 = F394_1743(RTCW(loc1), tr8_1);
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
	tr2 = RTMS_EX_H(" ",1,32);
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
	tr4_1 = F1603_17892(Current);
	tr8_1 = (EIF_REAL_64) (tr4_1);
	tr2 = F394_1743(RTCW(loc1), tr8_1);
	Result = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
	RTLE;
	return Result;
}

/* {EV_COLOR}.is_equal */
EIF_BOOLEAN F1603_17919 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REAL_32 loc1 = (EIF_REAL_32) 0;
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 tr4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	loc1 = F1603_17925(Current);
	Result = '\0';
	tb1 = '\0';
	tr4_1 = F1603_17890(RTCW(arg1));
	tr4_2 = F1603_17890(Current);
	tr4_1 = eif_abs_real32 ((EIF_REAL_32) (tr4_1 - tr4_2));
	if ((EIF_BOOLEAN) eif_is_less_real_32 (tr4_1, loc1)) {
		tr4_1 = F1603_17891(RTCW(arg1));
		tr4_2 = F1603_17891(Current);
		tr4_1 = eif_abs_real32 ((EIF_REAL_32) (tr4_1 - tr4_2));
		tb1 = (EIF_BOOLEAN) eif_is_less_real_32 (tr4_1, loc1);
	}
	if (tb1) {
		tr4_1 = F1603_17892(RTCW(arg1));
		tr4_2 = F1603_17892(Current);
		tr4_1 = eif_abs_real32 ((EIF_REAL_32) (tr4_1 - tr4_2));
		Result = (EIF_BOOLEAN) eif_is_less_real_32 (tr4_1, loc1);
	}
	RTLE;
	return Result;
}

/* {EV_COLOR}.copy */
void F1603_17920 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) == NULL)) {
		F1596_17742(Current);
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	F1708_19211(RTCW(tr1), arg1);
	RTLE;
}

/* {EV_COLOR}.hash_code */
EIF_INTEGER_32 F1603_17921 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) F1603_17902(Current);
}

/* {EV_COLOR}.delta */
EIF_REAL_32 F1603_17925 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_32 Result = ((EIF_REAL_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	Result = F1830_20531(RTCW(tr1));
	RTLE;
	return Result;
}

/* {EV_COLOR}.create_interface_objects */
void F1603_17927 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {EV_COLOR}.create_implementation */
void F1603_17928 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(1829, 0x01).id, 1829, _OBJSIZ_2_1_0_1_0_0_0_0_);
	F1830_20509(RTCW(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	RTLE;
}

void EIF_Minit1598 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
