/*
 * Code for class EV_TITLED_WINDOW_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1967.h"
#include <windows.h>
#include "eif_helpers.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F67_9707
static int inline_F67_9707 (EIF_POINTER arg1)
{
	return (int) (SetForegroundWindow ((HWND)arg1))
	;
}
#define INLINE_F67_9707
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_TITLED_WINDOW_IMP}.make */
void F1984_24549 (EIF_REFERENCE Current)
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
	tr1 = F1984_24570(Current);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + O19898[dtype-1983]) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_new_type(1564, 1).id);
	F1558_6510(RTCW(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + O19900[dtype-1983]) = (EIF_REFERENCE) tr1;
	F1982_24436(Current);
	RTLE;
}

/* {EV_TITLED_WINDOW_IMP}.title_name */
EIF_REFERENCE F1984_24550 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Result);
	RTLIU(1);
	
	RTGC;
	Result = RTMS_EX_H("EV_TITLED_WINDOW",16,1878999895);
	RTLE;
	return Result;
}

/* {EV_TITLED_WINDOW_IMP}.icon_name */
EIF_REFERENCE F1984_24553 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O19900[dtype-1983]) != NULL)) {
		tr1 = *(EIF_REFERENCE *)(Current + O19900[dtype-1983]);
		Result = F1_14(tr1);
	} else {
		Result = RTLNS(eif_new_type(1564, 0x01).id, 1564, _OBJSIZ_1_1_0_3_0_0_0_0_);
		F1558_6510(RTCW(Result));
		RTLE;
		return (EIF_REFERENCE) Result;
	}
	RTLE;
	return Result;
}

/* {EV_TITLED_WINDOW_IMP}.icon_pixmap */
EIF_REFERENCE F1984_24554 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(5);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLR(4,loc1);
	RTLIU(5);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O19897[Dtype(Current)-1983]);
	loc2 = tr1;
	if (EIF_TEST(loc2)) {
		Result = RTLNS(eif_new_type(1652, 0x01).id, 1652, _OBJSIZ_6_3_0_1_0_0_0_0_);
		F1596_17742(RTCW(Result));
		loc1 = *(EIF_REFERENCE *)(RTCW(Result) + _REFACS_3_);
		loc1 = RTRV(eif_new_type(1871, 0x00), loc1);
		RTCT0("ev_pixmap_imp /= Void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		F1872_21259(RTCW(loc1), loc2);
	} else {
		Result = RTOUCR(223,F71_9841, (RTCV(RTOUCR(242,F321_12796, (Current)))));
	}
	RTLE;
	return Result;
}

/* {EV_TITLED_WINDOW_IMP}.is_minimized */
EIF_BOOLEAN F1984_24555 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	ti4_1 = F1912_22496(Current);
	Result = F1258_14781(Current, ti4_1, ((EIF_INTEGER_32) 536870912L));
	RTLE;
	return Result;
}

/* {EV_TITLED_WINDOW_IMP}.is_maximized */
EIF_BOOLEAN F1984_24556 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	ti4_1 = F1912_22496(Current);
	Result = F1258_14781(Current, ti4_1, ((EIF_INTEGER_32) 16777216L));
	RTLE;
	return Result;
}

/* {EV_TITLED_WINDOW_IMP}.is_displayed */
EIF_BOOLEAN F1984_24557 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	Result = '\0';
	if (F1912_22468(Current)) {
		Result = (EIF_BOOLEAN) !F1984_24555(Current);
	}
	RTLE;
	return Result;
}

/* {EV_TITLED_WINDOW_IMP}.has_title_bar */
EIF_BOOLEAN F1984_24558 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
}

/* {EV_TITLED_WINDOW_IMP}.raise */
void F1984_24559 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
	EIF_POINTER tp1;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if ((EIF_BOOLEAN) !(FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R16562[dtype-1871])(Current)) {
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R16567[dtype-1871])(Current);
	}
	if (F1984_24555(Current)) {
		F1912_22516(Current);
	}
	tp1 = *(EIF_POINTER *)(Current + O12527[dtype-1295]);
	loc1 = EIF_TEST (inline_F67_9707(tp1));
	RTLE;
}

/* {EV_TITLED_WINDOW_IMP}.destroy */
void F1984_24561 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	F1982_24535(Current);
	tr1 = *(EIF_REFERENCE *)(Current + O19897[dtype-1983]);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		F519_14210(loc1);
		*(EIF_REFERENCE *)(Current + O19897[dtype-1983]) = (EIF_REFERENCE) NULL;
	}
	RTLE;
}

/* {EV_TITLED_WINDOW_IMP}.set_title */
void F1984_24564 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	tr1 = F1558_6569(RTCW(arg1));
	tr1 = F1_14(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + O19896[Dtype(Current)-1983]) = (EIF_REFERENCE) tr1;
	if ((EIF_BOOLEAN) !F1984_24555(Current)) {
		F1912_22526(Current, arg1);
	}
	RTLE;
}

/* {EV_TITLED_WINDOW_IMP}.set_icon_pixmap */
void F1984_24566 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	RTCDT;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc3);
	RTLR(1,arg1);
	RTLR(2,loc1);
	RTLR(3,loc2);
	RTLR(4,loc4);
	RTLR(5,Current);
	RTLIU(6);
	
	RTGC;
	loc3 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_3_);
	loc3 = RTRV(eif_new_type(413, 0x00), loc3);
	RTCT0("pixmap_imp /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc3 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	loc1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R11080[Dtype(RTCW(loc3))-1871])(loc3);
	if ((EIF_BOOLEAN)(loc1 == NULL)) {
		loc3 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_3_);
		loc3 = RTRV(eif_new_type(413, 0x00), loc3);
		RTCT0("pixmap_imp /= Void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc3 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		loc2 = F414_13404(RTCW(loc3));
		F519_14209(RTCW(loc2));
		loc1 = (EIF_REFERENCE) loc2;
	}
	RTCT0("icon /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	loc4 = *(EIF_REFERENCE *)(Current + O19897[dtype-1983]);
	RTAR(Current, loc1);
	*(EIF_REFERENCE *)(Current + O19897[dtype-1983]) = (EIF_REFERENCE) loc1;
	F519_14211(RTCW(loc1));
	F1913_22719(Current, loc1, loc1);
	if ((EIF_BOOLEAN)(loc4 != NULL)) {
		F519_14210(RTCW(loc4));
		loc4 = (EIF_REFERENCE) NULL;
	}
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		F519_14210(RTCW(loc2));
		loc2 = (EIF_REFERENCE) NULL;
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R11089[Dtype(RTCW(loc3))-1871])(loc3);
	RTLE;
}

/* {EV_TITLED_WINDOW_IMP}.class_name */
EIF_REFERENCE F1984_24567 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_REFERENCE) *(EIF_REFERENCE *)(Current + O19898[Dtype(Current)-1983]);
}

/* {EV_TITLED_WINDOW_IMP}.new_class_name */
EIF_REFERENCE F1984_24570 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTGC;
	F405_13268(Current);
	Result = RTMS32_EX_H("E\000\000\000V\000\000\000_\000\000\000T\000\000\000I\000\000\000T\000\000\000L\000\000\000E\000\000\000D\000\000\000_\000\000\000W\000\000\000I\000\000\000N\000\000\000D\000\000\000O\000\000\000W\000\000\000_\000\000\000I\000\000\000M\000\000\000P\000\000\000",20,1253523280);
	RTLE;
	return Result;
}

/* {EV_TITLED_WINDOW_IMP}.default_style */
EIF_INTEGER_32 F1984_24572 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (((EIF_INTEGER_32) 0L) + ((EIF_INTEGER_32) 4194304L)) + ((EIF_INTEGER_32) 262144L)) + ((EIF_INTEGER_32) 33554432L)) + ((EIF_INTEGER_32) 67108864L)) + ((EIF_INTEGER_32) 131072L)) + ((EIF_INTEGER_32) 65536L)) + ((EIF_INTEGER_32) 8388608L)) + ((EIF_INTEGER_32) 524288L));
}

/* {EV_TITLED_WINDOW_IMP}.on_show */
void F1984_24573 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc2);
	RTLR(3,loc1);
	RTLIU(4);
	
	RTGC;
	if (F1913_22706(Current)) {
		F1913_22727(Current);
	}
	if (F1984_24556(Current)) {
		F1912_22515(Current);
	} else {
		if (F1984_24555(Current)) {
			F1912_22514(Current);
		} else {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_40_);
			tb1 = *(EIF_BOOLEAN *)(RTCW(tr1)+ _CHROFF_0_2_);
			if (tb1) {
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_40_);
				ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_0_4_0_0_);
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_40_);
				ti4_2 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_0_4_0_1_);
				F1912_22542(Current, ti4_1, ti4_2);
			}
			tb1 = '\01';
			if (!(EIF_BOOLEAN)(F1977_24333(Current) == NULL)) {
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_40_);
				tb2 = *(EIF_BOOLEAN *)(RTCW(tr1)+ _CHROFF_0_3_);
				tb1 = tb2;
			}
			if (tb1) {
				ti4_1 = F1970_24041(Current);
				ti4_1 = eif_min_int32 (ti4_1,*(EIF_INTEGER_32 *)(Current + O19894[dtype-1981]));
				ti4_2 = F1970_24043(Current);
				ti4_2 = eif_min_int32 (ti4_2,*(EIF_INTEGER_32 *)(Current + O19895[dtype-1981]));
				F1912_22543(Current, ti4_1, ti4_2);
			} else {
				tr1 = F1977_24333(Current);
				loc2 = tr1;
				if (EIF_TEST(loc2)) {
					loc1 = F1982_24479(Current);
					ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16400[Dtype(loc2)-1730])(loc2);
					ti4_2 = F1408_17332(RTCW(loc1));
					ti4_1 = eif_min_int32 ((EIF_INTEGER_32) (ti4_1 + ti4_2),*(EIF_INTEGER_32 *)(Current + O19894[dtype-1981]));
					ti4_2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16401[Dtype(loc2)-1730])(loc2);
					ti4_3 = F1408_17333(RTCW(loc1));
					ti4_2 = eif_min_int32 ((EIF_INTEGER_32) (ti4_2 + ti4_3),*(EIF_INTEGER_32 *)(Current + O19895[dtype-1981]));
					F1912_22543(Current, ti4_1, ti4_2);
				}
			}
		}
	}
	RTLE;
}

/* {EV_TITLED_WINDOW_IMP}.on_size */
void F1984_24574 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	ti4_1 = ((EIF_INTEGER_32) 1L);
	if ((EIF_BOOLEAN)(arg1 == ti4_1)) {
		tb1 = F737_2537(RTCV(F1984_24553(Current)));
		if (tb1) {
			F1912_22526(Current, *(EIF_REFERENCE *)(Current + O19896[dtype-1983]));
		} else {
			tr1 = F1984_24553(Current);
			F1912_22526(Current, tr1);
		}
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_8_) != NULL)) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_8_);
			F977_14409(RTCW(tr1), NULL);
		}
	} else {
		ti4_1 = ((EIF_INTEGER_32) 2L);
		if ((EIF_BOOLEAN)(arg1 == ti4_1)) {
			if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_7_) != NULL)) {
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_7_);
				F977_14409(RTCW(tr1), NULL);
			}
			if ((EIF_BOOLEAN)(*(EIF_BOOLEAN *)(Current + O19901[dtype-1983]) == (EIF_BOOLEAN) 1)) {
				*(EIF_BOOLEAN *)(Current + O19901[dtype-1983]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			}
		} else {
			ti4_1 = ((EIF_INTEGER_32) 0L);
			if ((EIF_BOOLEAN)(arg1 == ti4_1)) {
				F1912_22526(Current, *(EIF_REFERENCE *)(Current + O19896[dtype-1983]));
			}
		}
	}
	F1982_24491(Current, arg1, arg2, arg3);
	tb1 = '\01';
	ti4_1 = ((EIF_INTEGER_32) 1L);
	if (!(EIF_BOOLEAN)(arg1 == ti4_1)) {
		ti4_1 = ((EIF_INTEGER_32) 2L);
		tb1 = (EIF_BOOLEAN)(arg1 == ti4_1);
	}
	if (tb1) {
		*(EIF_BOOLEAN *)(Current + O19901[dtype-1983]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	RTLE;
}

/* {EV_TITLED_WINDOW_IMP}.execute_resize_actions */
void F1984_24575 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
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
	F1970_24131(Current, arg1, arg2);
	if (*(EIF_BOOLEAN *)(Current + O19901[dtype-1983])) {
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_9_) != NULL)) {
			tr1 = F226_11491(Current);
			F977_14409(RTCW(tr1), NULL);
		}
		*(EIF_BOOLEAN *)(Current + O19901[dtype-1983]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	}
	RTLE;
}

/* {EV_TITLED_WINDOW_IMP}.copy_box_attributes */
void F1984_24577 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(7);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,loc3);
	RTLR(3,arg2);
	RTLR(4,loc2);
	RTLR(5,arg1);
	RTLR(6,loc1);
	RTLIU(7);
	
	RTGC;
	RTAOMS(24576,1);
	RTCOMS(tr1,24576,0,"[We should copy all attributes and action sequences.]",53,1847450973);
	{
		/* INLINED CODE (REFACTORING_HELPER.fixme) */
		/* END INLINED CODE */
	}
	;
	loc3 = *(EIF_REFERENCE *)(RTCW(arg2) + _REFACS_3_);
	loc3 = RTRV(eif_new_type(1974, 0x00), loc3);
	RTCT0("l_ub_imp /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc3 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	tp1 = *(EIF_POINTER *)(RTCW(loc3)+ _PTROFF_64_26_6_13_0_0_);
	{
		/* INLINED CODE (ANY.default_pointer) */
		tp2 = (EIF_POINTER)  0;
		/* END INLINED CODE */
	}
	if ((EIF_BOOLEAN)(tp1 != tp2)) {
		loc2 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_3_);
		loc2 = RTRV(eif_new_type(1974, 0x00), loc2);
		RTCT0("l_or_imp /= Void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc2 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		F1971_24168(RTCW(loc2), NULL);
		F1630_18256(RTCW(arg1));
		for (;;) {
			tb1 = F736_2537(RTCW(arg1));
			if (tb1) break;
			loc1 = F1630_18246(RTCW(arg1));
			F1630_18274(RTCW(arg1));
			F1630_18264(RTCW(arg2), loc1);
		}
		ti4_1 = F1636_18391(RTCW(arg1));
		F1636_18397(RTCW(arg2), ti4_1);
		ti4_1 = F1636_18389(RTCW(arg1));
		F1636_18395(RTCW(arg2), ti4_1);
		RTCT0("ub_imp_not_void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc3 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		{
			/* INLINED CODE (EV_WIDGET_I.on_parented) */
			/* END INLINED CODE */
		}
		;
		F1912_22525(RTCW(loc3), Current);
		F1974_24303(RTCW(loc3), Current);
	}
	RTLE;
}

void EIF_Minit1967 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
