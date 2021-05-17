/*
 * Code for class EV_RADIO_BUTTON_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1986.h"
#include <windows.h>
#include <wel.h>
#include "eif_misc.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_RADIO_BUTTON_IMP}.make */
void F2003_25142 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F2002_25107(Current);
	F1942_23314(Current);
	ti4_1 = F1787_20202(Current);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_59_20_6_4_) = (EIF_INTEGER_32) ti4_1;
	RTLE;
}

/* {EV_RADIO_BUTTON_IMP}.set_default_minimum_size */
void F2003_25143 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLIU(4);
	
	RTGC;
	tb1 = '\0';
	if ((EIF_BOOLEAN) !F1926_22913(Current)) {
		tb2 = F737_2537(RTCV(F1747_19708(Current)));
		tb1 = (EIF_BOOLEAN) !tb2;
	}
	if (tb1) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_40_);
		loc1 = tr1;
		if (EIF_TEST(loc1)) {
			tr1 = *(EIF_REFERENCE *)(loc1 + _REFACS_1_);
			ti4_1 = F1886_21722(RTCW(tr1));
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_59_20_6_10_) = (EIF_INTEGER_32) (EIF_INTEGER_32) (((EIF_INTEGER_32) 20L) + (EIF_INTEGER_32) (ti4_1 / ((EIF_INTEGER_32) 2L)));
		} else {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_41_);
			loc2 = tr1;
			if (EIF_TEST(loc2)) {
				ti4_1 = F1885_21701(loc2);
				*(EIF_INTEGER_32 *)(Current+ _LNGOFF_59_20_6_10_) = (EIF_INTEGER_32) (EIF_INTEGER_32) (((EIF_INTEGER_32) 20L) + (EIF_INTEGER_32) (ti4_1 / ((EIF_INTEGER_32) 2L)));
			} else {
			}
		}
	}
	F2002_25110(Current);
	RTLE;
}

/* {EV_RADIO_BUTTON_IMP}.enable_select */
void F2003_25144 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTGC;
	loc2 = *(EIF_REFERENCE *)(Current + _REFACS_38_);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		loc1 = F912_3521(RTCW(loc2));
		F912_3534(RTCW(loc2));
		for (;;) {
			tb1 = F912_3528(RTCW(loc2));
			if (tb1) break;
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2258[Dtype(RTCW(loc2))-818])(loc2);
			F1942_23315(RTCW(tr1));
			F912_3536(RTCW(loc2));
		}
		F912_3540(RTCW(loc2), loc1);
	}
	F1942_23314(Current);
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_5_) != NULL)) {
		tr1 = F232_11528(Current);
		F977_14409(RTCW(tr1), NULL);
	}
	RTLE;
}

/* {EV_RADIO_BUTTON_IMP}.on_bn_clicked */
void F2003_25145 (EIF_REFERENCE Current)
{
	GTCX
	
	
	F2003_25144(Current);
}

/* {EV_RADIO_BUTTON_IMP}.default_style */
static EIF_INTEGER_32 F2003_25146_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 413)

	
	RTEV;
	RTGC;
	RTOTP;
	ti4_1 = eif_bit_or(((EIF_INTEGER_32) 268435456L),((EIF_INTEGER_32) 1073741824L));
	ti4_1 = eif_bit_or(ti4_1,((EIF_INTEGER_32) 65536L));
	ti4_1 = eif_bit_or(ti4_1,((EIF_INTEGER_32) 4L));
	ti4_1 = eif_bit_or(ti4_1,((EIF_INTEGER_32) 33554432L));
	Result = eif_bit_or(ti4_1,((EIF_INTEGER_32) 67108864L));
	RTOTE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F2003_25146 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,413,F2003_25146_body,(Current));
}

/* {EV_RADIO_BUTTON_IMP}.next_dlggroupitem */
EIF_POINTER F2003_25147 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_BOOLEAN arg3)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTCFDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLIU(4);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_38_);
	loc2 = tr1;
	if (EIF_TEST(loc2)) {
		loc1 = F912_3521(loc2);
		F912_3534(loc2);
		F620_2713(loc2, Current);
		if (arg3) {
			F912_3536(loc2);
			tb1 = F912_3528(loc2);
			if (tb1) {
				tr1 = F912_3518(loc2);
				Result = *(EIF_POINTER *)(RTCW(tr1)+ _PTROFF_59_20_6_11_0_0_);
			} else {
				tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2258[Dtype(loc2)-818])(loc2);
				Result = *(EIF_POINTER *)(RTCW(tr1)+ _PTROFF_59_20_6_11_0_0_);
			}
		} else {
			F912_3537(loc2);
			tb1 = F912_3528(loc2);
			if (tb1) {
				tr1 = F912_3519(loc2);
				Result = *(EIF_POINTER *)(RTCW(tr1)+ _PTROFF_59_20_6_11_0_0_);
			} else {
				tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2258[Dtype(loc2)-818])(loc2);
				Result = *(EIF_POINTER *)(RTCW(tr1)+ _PTROFF_59_20_6_11_0_0_);
			}
		}
		F912_3540(loc2, loc1);
	} else {
		Result = (EIF_POINTER) GetNextDlgGroupItem(((HWND) arg1), ((HWND) arg2), ((BOOL) arg3));
		RTLE;
		return (EIF_POINTER) Result;
	}
	RTLE;
	return Result;
}

/* {EV_RADIO_BUTTON_IMP}.process_navigation_key */
void F2003_25148 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	switch (arg1) {
		case 39L:
		case 40L:
			F2003_25149(Current, (EIF_BOOLEAN) 1);
			break;
		case 37L:
		case 38L:
			F2003_25149(Current, (EIF_BOOLEAN) 0);
			break;
		default:
			F1970_24103(Current, arg1);
			break;
	}
	RTLE;
}

/* {EV_RADIO_BUTTON_IMP}.arrow_action */
void F2003_25149 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc4);
	RTLR(1,Current);
	RTLR(2,loc3);
	RTLIU(3);
	
	RTGC;
	loc4 = *(EIF_REFERENCE *)(Current + _REFACS_58_);
	if ((EIF_BOOLEAN)(loc4 != NULL)) {
		tp1 = *(EIF_POINTER *)(RTCW(loc4) + O12527[Dtype(loc4)-1295]);
		loc1 = F2003_25147(Current, tp1, *(EIF_POINTER *)(Current+ _PTROFF_59_20_6_11_0_0_), arg1);
	}
	if ((EIF_BOOLEAN)(loc1 != loc2)) {
		loc3 = F1898_22150(Current, loc1);
		if ((EIF_BOOLEAN)(loc3 != NULL)) {
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R18689[Dtype(RTCW(loc3))-1914])(loc3);
		}
	}
	RTLE;
}

/* {EV_RADIO_BUTTON_IMP}.internal_default_height */
EIF_INTEGER_32 F2003_25150 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) ((EIF_INTEGER_32) 12L);
}

/* {EV_RADIO_BUTTON_IMP}.update_current_push_button */
void F2003_25151 (EIF_REFERENCE Current)
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
	loc1 = *(EIF_REFERENCE *)(RTCV(F1956_23756(Current)) + _REFACS_40_);
	loc1 = RTRV(eif_new_type(1765, 0x00), loc1);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		tr1 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_58_);
		F1766_19981(RTCW(loc1), tr1);
	}
	RTLE;
}

/* {EV_RADIO_BUTTON_IMP}.fire_select_actions_on_enter */
void F2003_25152 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {EV_RADIO_BUTTON_IMP}.set_background_color */
void F2003_25153 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_1_);
	*(EIF_REFERENCE *)(Current + _REFACS_56_) = RTRV(eif_new_type(1829, 0), tr1);
	RTAR(Current, tr1);
	if (F1912_22468(Current)) {
		F1912_22563(Current);
	}
	RTLE;
}

/* {EV_RADIO_BUTTON_IMP}.on_erase_background */
void F2003_25154 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1912_22507(Current);
	tp1 = (EIF_POINTER) (LRESULT)((((EIF_INTEGER_32) 1L)));
	F214_11244(Current, tp1);
	RTLE;
}

void EIF_Minit1986 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
