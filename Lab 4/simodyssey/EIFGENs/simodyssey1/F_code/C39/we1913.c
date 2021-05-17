/*
 * Code for class WEL_TAB_CONTROL
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1913.h"
#include <windows.h>
#include "cctrl.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F67_9747
static EIF_INTEGER_32 inline_F67_9747 (EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3, EIF_POINTER arg4)
{
	return (EIF_INTEGER_32) (SendMessage ((HWND) arg1, (UINT) arg2, (WPARAM) arg3, (LPARAM) arg4))
	;
}
#define INLINE_F67_9747
#endif
#ifndef INLINE_F67_9749
static void inline_F67_9749 (EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3, EIF_POINTER arg4)
{
	SendMessage ((HWND) arg1, (UINT) arg2, (WPARAM) arg3, (LPARAM) arg4)
	;
}
#define INLINE_F67_9749
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_TAB_CONTROL}.make */
void F1930_23025 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_INTEGER_32 arg5, EIF_INTEGER_32 arg6)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R18790[dtype-1916])(Current);
	{
		/* INLINED CODE (ANY.default_pointer) */
		tp1 = (EIF_POINTER)  0;
		/* END INLINED CODE */
	}
	tp2 = tp1;
	F1912_22614(Current, arg1, NULL, ti4_1, arg2, arg3, arg4, arg5, arg6, tp2);
	*(EIF_INTEGER_32 *)(Current + O19029[dtype-1925]) = (EIF_INTEGER_32) arg6;
	RTLE;
}

/* {WEL_TAB_CONTROL}.count */
EIF_INTEGER_32 F1930_23026 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	tp2 = (EIF_POINTER) (WPARAM)((((EIF_INTEGER_32) 0L)));
	tp3 = (EIF_POINTER) (LPARAM)((((EIF_INTEGER_32) 0L)));
	Result = inline_F67_9747(tp1, ((EIF_INTEGER_32) 4868L), tp2, tp3);
	RTLE;
	return Result;
}

/* {WEL_TAB_CONTROL}.sheet_rect */
EIF_REFERENCE F1930_23028 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTGC;
	Result = F1912_22490(Current);
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	tp2 = (EIF_POINTER) (WPARAM)((((EIF_INTEGER_32) 0L)));
	tp3 = *(EIF_POINTER *)(RTCW(Result)+ _PTROFF_0_1_0_0_0_0_);
	inline_F67_9749(tp1, ((EIF_INTEGER_32) 4904L), tp2, tp3);
	RTLE;
	return Result;
}

/* {WEL_TAB_CONTROL}.current_selection */
EIF_INTEGER_32 F1930_23030 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	tp2 = (EIF_POINTER) (WPARAM)((((EIF_INTEGER_32) 0L)));
	tp3 = (EIF_POINTER) (LPARAM)((((EIF_INTEGER_32) 0L)));
	Result = inline_F67_9747(tp1, ((EIF_INTEGER_32) 4875L), tp2, tp3);
	RTLE;
	return Result;
}

/* {WEL_TAB_CONTROL}.selected_window */
EIF_REFERENCE F1930_23031 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	
	RTGC;
	ti4_1 = F1930_23030(Current);
	tr1 = F1930_23032(Current, ti4_1);
	Result = F1900_22198(RTCW(tr1));
	RTLE;
	return Result;
}

/* {WEL_TAB_CONTROL}.get_item */
EIF_REFERENCE F1930_23032 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Result);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTGC;
	Result = RTLNS(eif_new_type(1899, 0x01).id, 1899, _OBJSIZ_1_1_0_0_0_1_0_0_);
	F1900_22194(RTCW(Result));
	loc1 = RTLNS(eif_new_type(1564, 0x01).id, 1564, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F1564_6847(RTCW(loc1), ((EIF_INTEGER_32) 256L));
	F1565_6917(RTCW(loc1));
	F1900_22201(RTCW(Result), loc1);
	F1900_22205(RTCW(Result), ((EIF_INTEGER_32) 256L));
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	tp2 = (EIF_POINTER) (WPARAM)((arg1));
	tp3 = *(EIF_POINTER *)(RTCW(Result)+ _PTROFF_1_1_0_0_0_0_);
	inline_F67_9749(tp1, ((EIF_INTEGER_32) 4924L), tp2, tp3);
	F1565_6966(RTCW(loc1));
	F1565_6968(RTCW(loc1));
	RTLE;
	return Result;
}

/* {WEL_TAB_CONTROL}.background_region */
EIF_REFERENCE F1930_23033 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc8 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc9 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc10 = (EIF_BOOLEAN) 0;
	EIF_POINTER loc11 = (EIF_POINTER) 0;
	EIF_POINTER loc12 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,Result);
	RTLR(3,loc7);
	RTLR(4,loc1);
	RTLR(5,loc2);
	RTLIU(6);
	
	RTGC;
	loc6 = F1912_22496(Current);
	loc9 = F1258_14781(Current, loc6, ((EIF_INTEGER_32) 2L));
	loc8 = F1258_14781(Current, loc6, ((EIF_INTEGER_32) 128L));
	loc10 = F1258_14781(Current, loc6, ((EIF_INTEGER_32) 2L));
	Result = RTLNS(eif_new_type(1321, 0x01).id, 1321, _OBJSIZ_0_2_0_3_0_1_0_0_);
	F1322_15608(RTCW(Result), arg1);
	loc7 = RTLNS(eif_new_type(1407, 0x01).id, 1407, _OBJSIZ_0_1_0_0_0_1_0_0_);
	F1408_17321(RTCW(loc7), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L));
	loc11 = *(EIF_POINTER *)(RTCW(loc7)+ _PTROFF_0_1_0_0_0_0_);
	loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	loc4 = F1930_23026(Current);
	loc5 = F1930_23030(Current);
	loc12 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	for (;;) {
		if ((EIF_BOOLEAN)(loc3 == loc4)) break;
		tp1 = (EIF_POINTER) (WPARAM)((loc3));
		inline_F67_9749(loc12, ((EIF_INTEGER_32) 4874L), tp1, loc11);
		if ((EIF_BOOLEAN)(loc3 != loc5)) {
			if (loc9) {
				ti4_1 = F1408_17328(RTCW(loc7));
				F1408_17336(RTCW(loc7), (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 2L)));
			} else {
				if (loc8) {
					if (loc10) {
						ti4_1 = F1408_17326(RTCW(loc7));
						F1408_17335(RTCW(loc7), (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 2L)));
					} else {
						ti4_1 = F1408_17330(RTCW(loc7));
						F1408_17337(RTCW(loc7), (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 2L)));
					}
				} else {
					ti4_1 = F1408_17331(RTCW(loc7));
					F1408_17338(RTCW(loc7), (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 2L)));
				}
			}
		} else {
			if (loc9) {
				ti4_1 = F1408_17331(RTCW(loc7));
				F1408_17338(RTCW(loc7), (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 2L)));
			} else {
				if (loc8) {
					if (loc10) {
						ti4_1 = F1408_17330(RTCW(loc7));
						F1408_17337(RTCW(loc7), (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 2L)));
					} else {
						ti4_1 = F1408_17326(RTCW(loc7));
						F1408_17335(RTCW(loc7), (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 2L)));
					}
				} else {
					ti4_1 = F1408_17328(RTCW(loc7));
					F1408_17336(RTCW(loc7), (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 2L)));
				}
			}
		}
		loc1 = RTLNS(eif_new_type(1321, 0x01).id, 1321, _OBJSIZ_0_2_0_3_0_1_0_0_);
		F1322_15608(RTCW(loc1), loc7);
		loc2 = F1322_15610(RTCW(Result), loc1, ((EIF_INTEGER_32) 4L));
		F519_14213(RTCW(loc1));
		F519_14213(RTCW(Result));
		Result = (EIF_REFERENCE) loc2;
		loc3++;
	}
	RTLE;
	return Result;
}

/* {WEL_TAB_CONTROL}.set_current_selection */
void F1930_23034 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1930_23043(Current);
	tp1 = *(EIF_POINTER *)(Current + O12527[dtype-1295]);
	tp2 = (EIF_POINTER) (WPARAM)((arg1));
	tp3 = (EIF_POINTER) (LPARAM)((((EIF_INTEGER_32) 0L)));
	inline_F67_9749(tp1, ((EIF_INTEGER_32) 4876L), tp2, tp3);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R19148[dtype-1929])(Current);
	RTLE;
}

/* {WEL_TAB_CONTROL}.update_item */
void F1930_23036 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg2);
	RTLIU(2);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	tp2 = (EIF_POINTER) (WPARAM)((arg1));
	tp3 = *(EIF_POINTER *)(RTCW(arg2)+ _PTROFF_1_1_0_0_0_0_);
	inline_F67_9749(tp1, ((EIF_INTEGER_32) 4925L), tp2, tp3);
	RTLE;
}

/* {WEL_TAB_CONTROL}.insert_item */
void F1930_23037 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg2);
	RTLR(2,loc1);
	RTLIU(3);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	tp2 = (EIF_POINTER) (WPARAM)((arg1));
	tp3 = *(EIF_POINTER *)(RTCW(arg2)+ _PTROFF_1_1_0_0_0_0_);
	inline_F67_9749(tp1, ((EIF_INTEGER_32) 4926L), tp2, tp3);
	loc1 = F1900_22198(RTCW(arg2));
	tb1 = '\0';
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		tb2 = F1296_15099(RTCW(loc1));
		tb1 = tb2;
	}
	if (tb1) {
		if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 0L))) {
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R18684[Dtype(RTCW(loc1))-1914])(loc1);
		} else {
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R18685[Dtype(RTCW(loc1))-1914])(loc1);
		}
	}
	RTLE;
}

/* {WEL_TAB_CONTROL}.delete_item */
void F1930_23038 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	tp2 = (EIF_POINTER) (WPARAM)((arg1));
	tp3 = (EIF_POINTER) (LPARAM)((((EIF_INTEGER_32) 0L)));
	inline_F67_9749(tp1, ((EIF_INTEGER_32) 4872L), tp2, tp3);
	RTLE;
}

/* {WEL_TAB_CONTROL}.on_tcn_keydown */
void F1930_23041 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_TAB_CONTROL}.on_tcn_selchange */
void F1930_23042 (EIF_REFERENCE Current)
{
	GTCX
	
	
	F1930_23045(Current);
}

/* {WEL_TAB_CONTROL}.on_tcn_selchanging */
void F1930_23043 (EIF_REFERENCE Current)
{
	GTCX
	
	
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R19150[Dtype(Current)-1929])(Current);
}

/* {WEL_TAB_CONTROL}.hide_current_selection */
void F1930_23044 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	ti4_1 = F1930_23030(Current);
	tr1 = F1930_23032(Current, ti4_1);
	loc1 = F1900_22198(RTCW(tr1));
	tb1 = '\0';
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		tb2 = F1296_15099(RTCW(loc1));
		tb1 = tb2;
	}
	if (tb1) {
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R18685[Dtype(RTCW(loc1))-1914])(loc1);
	}
	RTLE;
}

/* {WEL_TAB_CONTROL}.show_current_selection */
void F1930_23045 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	ti4_1 = F1930_23030(Current);
	tr1 = F1930_23032(Current, ti4_1);
	loc1 = F1900_22198(RTCW(tr1));
	tb1 = '\0';
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		tb2 = F1296_15099(RTCW(loc1));
		tb1 = tb2;
	}
	if (tb1) {
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R18684[Dtype(RTCW(loc1))-1914])(loc1);
	}
	RTLE;
}

/* {WEL_TAB_CONTROL}.adjust_items */
void F1930_23046 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc2);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	for (;;) {
		if ((EIF_BOOLEAN)(loc1 == F1930_23026(Current))) break;
		tr1 = F1930_23032(Current, loc1);
		loc2 = F1900_22198(RTCW(tr1));
		if ((EIF_BOOLEAN)(loc2 != NULL)) {
			ti4_1 = F1408_17326(RTCV(F1930_23028(Current)));
			ti4_2 = F1408_17328(RTCV(F1930_23028(Current)));
			ti4_3 = F1408_17332(RTCV(F1930_23028(Current)));
			ti4_4 = F1408_17333(RTCV(F1930_23028(Current)));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32, EIF_BOOLEAN)) R18713[Dtype(RTCW(loc2))-1914])(loc2, ti4_1, ti4_2, ti4_3, ti4_4, (EIF_BOOLEAN) 0);
		}
		loc1++;
	}
	RTLE;
}

/* {WEL_TAB_CONTROL}.process_notification_info */
void F1930_23047 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTGC;
	loc2 = F1903_22268(RTCW(arg1));
	if ((EIF_BOOLEAN)(loc2 == (EIF_INTEGER_32) TCN_KEYDOWN)) {
		loc1 = RTLNS(eif_new_type(1340, 0x01).id, 1340, _OBJSIZ_0_1_0_0_0_1_0_0_);
		F1341_15884(RTCW(loc1), arg1);
		ti4_1 = F1341_15886(RTCW(loc1));
		ti4_2 = F1341_15887(RTCW(loc1));
		{
			/* INLINED CODE (WEL_TAB_CONTROL.on_tcn_keydown) */
			/* END INLINED CODE */
		}
		;
	} else {
		if ((EIF_BOOLEAN)(loc2 == (EIF_INTEGER_32) TCN_SELCHANGE)) {
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R19148[Dtype(Current)-1929])(Current);
		} else {
			if ((EIF_BOOLEAN)(loc2 == (EIF_INTEGER_32) TCN_SELCHANGING)) {
				F1930_23043(Current);
			}
		}
	}
	RTLE;
}

/* {WEL_TAB_CONTROL}.resize */
void F1930_23048 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1912_22543(Current, arg1, arg2);
	F1930_23046(Current);
	RTLE;
}

/* {WEL_TAB_CONTROL}.move_and_resize */
void F1930_23049 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_BOOLEAN arg5)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1912_22541(Current, arg1, arg2, arg3, arg4, arg5);
	F1930_23046(Current);
	RTLE;
}

/* {WEL_TAB_CONTROL}.on_erase_background */
void F1930_23050 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,loc2);
	RTLR(3,arg2);
	RTLR(4,arg1);
	RTLIU(5);
	
	RTGC;
	loc1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R18670[Dtype(Current)-1914])(Current);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		F1912_22507(Current);
		tp1 = (EIF_POINTER) (LRESULT)((((EIF_INTEGER_32) 1L)));
		F214_11244(Current, tp1);
		loc2 = F1930_23033(Current, arg2);
		F1306_15299(RTCW(arg1), loc2, loc1);
		F519_14213(RTCW(loc1));
		F519_14213(RTCW(loc2));
	}
	RTLE;
}

/* {WEL_TAB_CONTROL}.class_name */
static EIF_REFERENCE F1930_23051_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(498)

	RTLI(1);
	RTLR(0,tr1);
	RTLIU(1);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(eif_new_type(944, 0x01).id, 944, _OBJSIZ_1_0_0_1_0_0_0_0_);
	tp1 = (EIF_POINTER) WC_TABCONTROL;
	F945_14351(RTCW(tr1), tp1);
	Result = F944_3743(RTCW(tr1));
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1930_23051 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(498,F1930_23051_body,(Current));
}

/* {WEL_TAB_CONTROL}.default_style */
static EIF_INTEGER_32 F1930_23052_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 499)

	
	RTEV;
	RTOTP;
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (((EIF_INTEGER_32) 268435456L) + ((EIF_INTEGER_32) 1073741824L)) + ((EIF_INTEGER_32) 131072L)) + ((EIF_INTEGER_32) 65536L)) + ((EIF_INTEGER_32) 512L));
	RTOTE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F1930_23052 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,499,F1930_23052_body,(Current));
}

/* {WEL_TAB_CONTROL}.on_wm_paint */
void F1930_23054 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_TAB_CONTROL}.cwin_tabcontrol_class */
EIF_POINTER F1930_23056 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = (EIF_POINTER) WC_TABCONTROL;
	return Result;
}

void EIF_Minit1913 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
