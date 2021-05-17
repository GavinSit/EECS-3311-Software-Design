/*
 * Code for class EV_TOOL_BAR_BUTTON_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1948.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_TOOL_BAR_BUTTON_IMP}.pointer_style */
EIF_REFERENCE F1965_23934 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

/* {EV_TOOL_BAR_BUTTON_IMP}.wel_has_capture */
EIF_BOOLEAN F1965_23935 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_BOOLEAN) 0;
}

/* {EV_TOOL_BAR_BUTTON_IMP}.make */
void F1965_23937 (EIF_REFERENCE Current)
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
	F405_13268(Current);
	tr1 = RTLNSMART(eif_new_type(1564, 0).id);
	F1564_6847(RTCW(tr1), ((EIF_INTEGER_32) 0L));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + O19629[dtype-1964]) = (EIF_REFERENCE) tr1;
	*(EIF_BOOLEAN *)(Current + O19635[dtype-1964]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	F1696_18990(Current, (EIF_BOOLEAN) 1);
	RTLE;
}

/* {EV_TOOL_BAR_BUTTON_IMP}.parent_imp */
EIF_REFERENCE F1965_23938 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O19636[Dtype(Current)-1964]);
}


/* {EV_TOOL_BAR_BUTTON_IMP}.wel_text */
EIF_REFERENCE F1965_23939 (EIF_REFERENCE Current)
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
	tr1 = *(EIF_REFERENCE *)(Current + O19629[Dtype(Current)-1964]);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tr1 = F1_14(loc1);
		RTLE;
		return (EIF_REFERENCE) tr1;
	} else {
		tr1 = RTLNS(eif_new_type(1564, 0x01).id, 1564, _OBJSIZ_1_1_0_3_0_0_0_0_);
		F1558_6510(RTCW(tr1));
		RTLE;
		return (EIF_REFERENCE) tr1;
	}/* NOTREACHED */
	
}

/* {EV_TOOL_BAR_BUTTON_IMP}.set_parent_imp */
void F1965_23943 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		RTAR(Current, arg1);
		*(EIF_REFERENCE *)(Current + O19636[dtype-1964]) = (EIF_REFERENCE) arg1;
		F1928_22953(RTCW(arg1));
	} else {
		*(EIF_REFERENCE *)(Current + O19636[dtype-1964]) = (EIF_REFERENCE) NULL;
	}
	RTLE;
}

/* {EV_TOOL_BAR_BUTTON_IMP}.gray_pixmap */
EIF_REFERENCE F1965_23944 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(8);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,loc1);
	RTLR(3,loc4);
	RTLR(4,tr1);
	RTLR(5,loc5);
	RTLR(6,loc3);
	RTLR(7,loc2);
	RTLIU(8);
	
	RTGC;
	if (*(EIF_BOOLEAN *)(Current + O19631[dtype-1964])) {
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O19632[dtype-1964]) == NULL)) {
			Result = RTLNS(eif_new_type(1652, 0x01).id, 1652, _OBJSIZ_6_3_0_1_0_0_0_0_);
			F1596_17742(RTCW(Result));
			loc1 = *(EIF_REFERENCE *)(RTCW(Result) + _REFACS_3_);
			loc1 = RTRV(eif_new_type(1871, 0x00), loc1);
			RTCT0("pix_imp /= Void", EX_CHECK);
			if ((EIF_BOOLEAN)(loc1 != NULL)) {
				RTCK0;
			} else {
				RTCF0;
			}
			tb1 = '\0';
			tr1 = *(EIF_REFERENCE *)(Current + O19636[dtype-1964]);
			loc4 = tr1;
			if (EIF_TEST(loc4)) {
				tr1 = *(EIF_REFERENCE *)(loc4 + _REFACS_57_);
				loc5 = tr1;
				tb1 = EIF_TEST(loc5);
			}
			if (tb1) {
				loc3 = (EIF_REFERENCE) loc5;
				loc2 = F1299_15130(loc5, *(EIF_INTEGER_32 *)(Current + O19621[dtype-1962]), ((EIF_INTEGER_32) 0L));
				F1872_21259(RTCW(loc1), loc2);
			} else {
			}
		} else {
			Result = *(EIF_REFERENCE *)(Current + O19632[dtype-1964]);
			RTLE;
			return (EIF_REFERENCE) Result;
		}
	}
	RTLE;
	return Result;
}

/* {EV_TOOL_BAR_BUTTON_IMP}.pixmap */
EIF_REFERENCE F1965_23945 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(7);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,loc1);
	RTLR(3,loc3);
	RTLR(4,tr1);
	RTLR(5,loc4);
	RTLR(6,loc2);
	RTLIU(7);
	
	RTGC;
	if (*(EIF_BOOLEAN *)(Current + O19634[dtype-1964])) {
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O16470[dtype-1742]) == NULL)) {
			Result = RTLNS(eif_new_type(1652, 0x01).id, 1652, _OBJSIZ_6_3_0_1_0_0_0_0_);
			F1596_17742(RTCW(Result));
			loc1 = *(EIF_REFERENCE *)(RTCW(Result) + _REFACS_3_);
			loc1 = RTRV(eif_new_type(1871, 0x00), loc1);
			RTCT0("pix_imp /= Void", EX_CHECK);
			if ((EIF_BOOLEAN)(loc1 != NULL)) {
				RTCK0;
			} else {
				RTCF0;
			}
			tb1 = '\0';
			tr1 = *(EIF_REFERENCE *)(Current + O19636[dtype-1964]);
			loc3 = tr1;
			if (EIF_TEST(loc3)) {
				tr1 = *(EIF_REFERENCE *)(loc3 + _REFACS_58_);
				loc4 = tr1;
				tb1 = EIF_TEST(loc4);
			}
			if (tb1) {
				loc2 = F1299_15130(loc4, *(EIF_INTEGER_32 *)(Current + O19621[dtype-1962]), ((EIF_INTEGER_32) 0L));
				F519_14209(RTCW(loc2));
				F1872_21259(RTCW(loc1), loc2);
				F519_14210(RTCW(loc2));
			} else {
			}
		} else {
			Result = *(EIF_REFERENCE *)(Current + O16470[dtype-1742]);
			RTLE;
			return (EIF_REFERENCE) Result;
		}
	}
	RTLE;
	return Result;
}

/* {EV_TOOL_BAR_BUTTON_IMP}.is_sensitive */
EIF_BOOLEAN F1965_23946 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current + O19635[Dtype(Current)-1964]);
}


/* {EV_TOOL_BAR_BUTTON_IMP}.has_pixmap */
EIF_BOOLEAN F1965_23947 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current + O19634[Dtype(Current)-1964]);
}


/* {EV_TOOL_BAR_BUTTON_IMP}.enable_sensitive */
void F1965_23949 (EIF_REFERENCE Current)
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
	*(EIF_BOOLEAN *)(Current + O19635[dtype-1964]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	tr1 = *(EIF_REFERENCE *)(Current + O19636[dtype-1964]);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		F1928_22956(loc1, *(EIF_INTEGER_32 *)(Current + O10968[dtype-404]));
	}
	RTLE;
}

/* {EV_TOOL_BAR_BUTTON_IMP}.disable_sensitive */
void F1965_23950 (EIF_REFERENCE Current)
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
	*(EIF_BOOLEAN *)(Current + O19635[dtype-1964]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	tr1 = *(EIF_REFERENCE *)(Current + O19636[dtype-1964]);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		F1928_22957(loc1, *(EIF_INTEGER_32 *)(Current + O10968[dtype-404]));
	}
	RTLE;
}

/* {EV_TOOL_BAR_BUTTON_IMP}.parent_is_sensitive */
EIF_BOOLEAN F1965_23951 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	tb1 = '\0';
	tr1 = *(EIF_REFERENCE *)(Current + O19636[Dtype(Current)-1964]);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tb2 = F1912_22467(loc1);
		tb1 = tb2;
	}
	if (tb1) {
		RTLE;
		return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	RTLE;
	return (EIF_BOOLEAN) 0;
}

/* {EV_TOOL_BAR_BUTTON_IMP}.has_parent */
EIF_BOOLEAN F1965_23952 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O19636[Dtype(Current)-1964]) != NULL)) {
		RTLE;
		return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	RTLE;
	return (EIF_BOOLEAN) 0;
}

/* {EV_TOOL_BAR_BUTTON_IMP}.wel_set_text */
void F1965_23954 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLIU(4);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		tr1 = F1558_6569(RTCW(arg1));
		tr1 = F1_14(tr1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + O19629[dtype-1964]) = (EIF_REFERENCE) tr1;
	}
	tr1 = *(EIF_REFERENCE *)(Current + O19636[dtype-1964]);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		F1990_24709(loc1, Current);
		F1928_22953(loc1);
	}
	RTLE;
}

/* {EV_TOOL_BAR_BUTTON_IMP}.set_pixmap */
void F1965_23955 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,arg1);
	RTLR(4,loc2);
	RTLIU(5);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O16470[dtype-1742]);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		F1596_17745(loc1);
		*(EIF_REFERENCE *)(Current + O16470[dtype-1742]) = (EIF_REFERENCE) NULL;
	}
	tr1 = F1_14(arg1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + O16470[dtype-1742]) = (EIF_REFERENCE) tr1;
	*(EIF_BOOLEAN *)(Current + O19634[dtype-1964]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	tr1 = *(EIF_REFERENCE *)(Current + O19636[dtype-1964]);
	loc2 = tr1;
	if (EIF_TEST(loc2)) {
		F1990_24709(loc2, Current);
	}
	RTLE;
}

/* {EV_TOOL_BAR_BUTTON_IMP}.set_pixmap_in_parent */
void F1965_23959 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTLD;
	
	RTLI(9);
	RTLR(0,loc7);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,loc8);
	RTLR(4,loc2);
	RTLR(5,loc3);
	RTLR(6,loc4);
	RTLR(7,loc9);
	RTLR(8,tr1);
	RTLIU(9);
	
	RTGC;
	loc7 = *(EIF_REFERENCE *)(Current + O19636[dtype-1964]);
	RTCT0("l_parent_imp /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc7 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	loc1 = *(EIF_REFERENCE *)(RTCW(loc7) + _REFACS_57_);
	tb1 = '\0';
	tb2 = *(EIF_BOOLEAN *)(RTCW(loc7)+ _CHROFF_61_27_);
	if (tb2) {
		tb1 = *(EIF_BOOLEAN *)(Current + O19634[dtype-1964]);
	}
	if (tb1) {
		F1990_24724(RTCW(loc7));
		loc1 = (EIF_REFERENCE) NULL;
	}
	loc8 = *(EIF_REFERENCE *)(Current + O16470[dtype-1742]);
	if ((EIF_BOOLEAN)(loc1 == NULL)) {
		if (*(EIF_BOOLEAN *)(Current + O19634[dtype-1964])) {
			RTCT0("l_private_pixmap /= Void", EX_CHECK);
			if ((EIF_BOOLEAN)(loc8 != NULL)) {
				RTCK0;
			} else {
				RTCF0;
			}
			ti4_1 = F1614_18068(RTCW(loc8));
			ti4_2 = F1614_18069(RTCW(loc8));
			F1990_24720(RTCW(loc7), ti4_1, ti4_2);
			F1990_24723(RTCW(loc7));
		} else {
			F1990_24722(RTCW(loc7));
			F1990_24720(RTCW(loc7), ((EIF_INTEGER_32) 1L), ((EIF_INTEGER_32) 1L));
			loc1 = *(EIF_REFERENCE *)(RTCW(loc7) + _REFACS_57_);
			loc2 = *(EIF_REFERENCE *)(RTCW(loc7) + _REFACS_58_);
			*(EIF_INTEGER_32 *)(Current + O19621[dtype-1962]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
		}
	}
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O16470[dtype-1742]) == NULL) && (EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O19632[dtype-1964]) == NULL))) {
	} else {
		loc1 = *(EIF_REFERENCE *)(RTCW(loc7) + _REFACS_57_);
		loc2 = *(EIF_REFERENCE *)(RTCW(loc7) + _REFACS_58_);
		loc3 = *(EIF_REFERENCE *)(Current + O16470[dtype-1742]);
		if ((EIF_BOOLEAN)(loc3 == NULL)) {
			loc3 = F1965_23945(Current);
		}
		RTCT0("local_pixmap /= Void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc3 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		if (*(EIF_BOOLEAN *)(Current + O19631[dtype-1964])) {
			loc4 = *(EIF_REFERENCE *)(Current + O19632[dtype-1964]);
			if ((EIF_BOOLEAN)(loc4 == NULL)) {
				loc4 = F1965_23944(Current);
			}
		} else {
			loc4 = (EIF_REFERENCE) loc3;
		}
		RTCT0("local_gray_pixmap /= Void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc4 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		RTCT0("default_imagelist /= Void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		RTCT0("hot_imagelist /= Void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc2 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		F1300_15155(RTCW(loc1), loc4);
		F1300_15155(RTCW(loc2), loc3);
		loc5 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_4_3_0_3_);
		loc6 = *(EIF_INTEGER_32 *)(RTCW(loc2)+ _LNGOFF_4_3_0_3_);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc6 == loc5) && (EIF_BOOLEAN)(loc6 != ((EIF_INTEGER_32) -1L)))) {
			F1300_15156(RTCW(loc1), loc4);
			F1300_15156(RTCW(loc2), loc3);
		} else {
			F1300_15157(RTCW(loc1), loc4);
			F1300_15157(RTCW(loc2), loc3);
		}
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_4_3_0_3_);
		*(EIF_INTEGER_32 *)(Current + O19621[dtype-1962]) = (EIF_INTEGER_32) ti4_1;
		RTCT0("l_private_pixmap /= Void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc8 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		F1596_17745(RTCW(loc8));
		*(EIF_REFERENCE *)(Current + O16470[dtype-1742]) = (EIF_REFERENCE) NULL;
		tr1 = *(EIF_REFERENCE *)(Current + O19632[dtype-1964]);
		loc9 = tr1;
		if (EIF_TEST(loc9)) {
			F1596_17745(loc9);
			*(EIF_REFERENCE *)(Current + O19632[dtype-1964]) = (EIF_REFERENCE) NULL;
		}
	}
	RTLE;
}

/* {EV_TOOL_BAR_BUTTON_IMP}.x_position */
EIF_INTEGER_32 F1965_23960 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O19636[Dtype(Current)-1964]);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tr1 = F1696_18976(Current);
		Result = F1990_24748(loc1, tr1);
	}
	RTLE;
	return Result;
}

/* {EV_TOOL_BAR_BUTTON_IMP}.y_position */
EIF_INTEGER_32 F1965_23961 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O19636[Dtype(Current)-1964]);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tr1 = F1696_18976(Current);
		Result = F1990_24749(loc1, tr1);
	}
	RTLE;
	return Result;
}

/* {EV_TOOL_BAR_BUTTON_IMP}.screen_x */
EIF_INTEGER_32 F1965_23962 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O19636[Dtype(Current)-1964]);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tr1 = F1696_18976(Current);
		Result = F1990_24750(loc1, tr1);
	}
	RTLE;
	return Result;
}

/* {EV_TOOL_BAR_BUTTON_IMP}.screen_y */
EIF_INTEGER_32 F1965_23963 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O19636[Dtype(Current)-1964]);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tr1 = F1696_18976(Current);
		Result = F1990_24751(loc1, tr1);
	}
	RTLE;
	return Result;
}

/* {EV_TOOL_BAR_BUTTON_IMP}.width */
EIF_INTEGER_32 F1965_23964 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O19636[Dtype(Current)-1964]);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tr1 = F1696_18976(Current);
		Result = F1990_24752(loc1, tr1);
	}
	RTLE;
	return Result;
}

/* {EV_TOOL_BAR_BUTTON_IMP}.height */
EIF_INTEGER_32 F1965_23965 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O19636[Dtype(Current)-1964]);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tr1 = F1696_18976(Current);
		Result = F1990_24753(loc1, tr1);
	}
	RTLE;
	return Result;
}

/* {EV_TOOL_BAR_BUTTON_IMP}.minimum_width */
EIF_INTEGER_32 F1965_23966 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) F1965_23964(Current);
}

/* {EV_TOOL_BAR_BUTTON_IMP}.minimum_height */
EIF_INTEGER_32 F1965_23967 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) F1965_23965(Current);
}

/* {EV_TOOL_BAR_BUTTON_IMP}.restore_private_pixmaps */
void F1965_23968 (EIF_REFERENCE Current)
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
	if (*(EIF_BOOLEAN *)(Current + O19634[dtype-1964])) {
		tr1 = F1965_23945(Current);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + O16470[dtype-1742]) = (EIF_REFERENCE) tr1;
	}
	if (*(EIF_BOOLEAN *)(Current + O19631[dtype-1964])) {
		tr1 = F1965_23944(Current);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + O19632[dtype-1964]) = (EIF_REFERENCE) tr1;
	}
	RTLE;
}

/* {EV_TOOL_BAR_BUTTON_IMP}.destroy */
void F1965_23970 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLIU(4);
	
	RTGC;
	F1958_23770(Current);
	tr1 = *(EIF_REFERENCE *)(Current + O16470[dtype-1742]);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		F1596_17745(loc1);
	}
	tr1 = *(EIF_REFERENCE *)(Current + O19632[dtype-1964]);
	loc2 = tr1;
	if (EIF_TEST(loc2)) {
		F1596_17745(loc2);
	}
	RTLE;
}

void EIF_Minit1948 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
