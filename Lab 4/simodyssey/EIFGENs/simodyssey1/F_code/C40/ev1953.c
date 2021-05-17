/*
 * Code for class EV_WIDGET_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1953.h"
#include <windows.h>
#include "wel.h"
#include "eif_helpers.h"
#include "eif_misc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F67_9786
static EIF_INTEGER_32 inline_F67_9786 (EIF_CHARACTER_32 arg1)
{
	return (EIF_INTEGER_32) VkKeyScan ((TCHAR) arg1);
	;
}
#define INLINE_F67_9786
#endif
#ifndef INLINE_F67_9751
static EIF_INTEGER_32 inline_F67_9751 (EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3, EIF_INTEGER_32 arg4)
{
	return (EIF_INTEGER_32) (DragQueryFile ((HDROP) arg1, (UINT) arg2, (LPTSTR) arg3, (UINT) arg4))
	;
}
#define INLINE_F67_9751
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_WIDGET_IMP}.make */
void F1970_24029 (EIF_REFERENCE Current)
{
	GTCX
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R16292[dtype-1972])(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R19680[dtype-1972])(Current);
	if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R19763[dtype-1972])(Current)) {
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R16567[dtype-1871])(Current);
	}
	F1696_18990(Current, (EIF_BOOLEAN) 1);
	RTLE;
}

/* {EV_WIDGET_IMP}.pointer_style */
EIF_REFERENCE F1970_24032 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_REFERENCE) *(EIF_REFERENCE *)(Current + O10105[Dtype(Current)-300]);
}

/* {EV_WIDGET_IMP}.background_color_internal */
EIF_REFERENCE F1970_24033 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLIU(4);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O19682[Dtype(Current)-1969]);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tr1 = F1696_18976(loc1);
		RTLE;
		return (EIF_REFERENCE) tr1;
	} else {
		Result = F1956_23756(Current);
		Result = RTOUCR(208,F1714_19339, (RTCW(Result)));
		Result = F73_9889(RTCW(Result));
	}
	RTLE;
	return Result;
}

/* {EV_WIDGET_IMP}.foreground_color_internal */
EIF_REFERENCE F1970_24034 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLIU(4);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O19683[Dtype(Current)-1969]);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tr1 = F1696_18976(loc1);
		RTLE;
		return (EIF_REFERENCE) tr1;
	} else {
		Result = F1956_23756(Current);
		Result = RTOUCR(208,F1714_19339, (RTCW(Result)));
		Result = F73_9890(RTCW(Result));
	}
	RTLE;
	return Result;
}

/* {EV_WIDGET_IMP}.top_level_window */
EIF_REFERENCE F1970_24035 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLIU(4);
	
	RTGC;
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R19565[Dtype(Current)-1958])(Current);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		Result = F1696_18976(loc1);
		RTLE;
		return RTRV(eif_new_type(1642, 0x00), Result);
	}
	RTLE;
	return Result;
}

/* {EV_WIDGET_IMP}.default_parent */
static EIF_REFERENCE F1970_24036_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(249)

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,tr2);
	RTLIU(2);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(eif_new_type(1918, 0x01).id, 1918, _OBJSIZ_7_2_0_2_0_2_0_0_);
	tr2 = RTMS_EX_H("Eiffel Vision default parent window",35,82325367);
	F1917_22823(RTCW(tr1), tr2);
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1970_24036 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(249,F1970_24036_body,(Current));
}

/* {EV_WIDGET_IMP}.focus_on_widget */
static EIF_REFERENCE F1970_24037_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(241)

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEV;
	RTGC;
	RTOTP;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,488,1969,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0.id, 488, _OBJSIZ_1_0_0_0_0_0_0_0_);
	}
	F489_1934(RTCW(tr1), NULL);
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1970_24037 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(241,F1970_24037_body,(Current));
}

/* {EV_WIDGET_IMP}.cursor_on_widget */
static EIF_REFERENCE F1970_24038_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(284)

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEV;
	RTGC;
	RTOTP;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,488,1969,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0.id, 488, _OBJSIZ_1_0_0_0_0_0_0_0_);
	}
	F489_1934(RTCW(tr1), NULL);
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1970_24038 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(284,F1970_24038_body,(Current));
}

/* {EV_WIDGET_IMP}.parent */
EIF_REFERENCE F1970_24039 (EIF_REFERENCE Current)
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
	loc1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R16312[Dtype(Current)-1972])(Current);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		tr1 = *(EIF_REFERENCE *)(RTCW(loc1) + O15892[Dtype(loc1)-1695]);
		RTLE;
		return (EIF_REFERENCE) tr1;
	}
	RTLE;
	return (EIF_REFERENCE) 0;
}

/* {EV_WIDGET_IMP}.width */
EIF_INTEGER_32 F1970_24041 (EIF_REFERENCE Current)
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
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16402[Dtype(Current)-1730])(Current);
	ti4_2 = F1723_19499(Current);
	Result = eif_max_int32 (ti4_1,ti4_2);
	RTLE;
	return Result;
}

/* {EV_WIDGET_IMP}.height */
EIF_INTEGER_32 F1970_24043 (EIF_REFERENCE Current)
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
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16403[Dtype(Current)-1730])(Current);
	ti4_2 = F1723_19500(Current);
	Result = eif_max_int32 (ti4_1,ti4_2);
	RTLE;
	return Result;
}

/* {EV_WIDGET_IMP}.screen_x */
EIF_INTEGER_32 F1970_24044 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc2);
	RTLR(2,loc1);
	RTLIU(3);
	
	RTGC;
	if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R16563[dtype-1871])(Current)) {
		RTLE;
		return (EIF_INTEGER_32) F1912_22484(Current);
	} else {
		loc2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R16312[dtype-1972])(Current);
		tb1 = '\0';
		if ((EIF_BOOLEAN)(loc2 != NULL)) {
			tb2 = F1696_18975(RTCW(loc2));
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if (tb1) {
			Result = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16396[dtype-1730])(Current);
			ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16398[Dtype(RTCW(loc2))-1730])(loc2);
			Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result + ti4_1);
			loc1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R19565[dtype-1958])(Current);
			if ((EIF_BOOLEAN)(loc2 == loc1)) {
				RTCT0("l_wind /= Void", EX_CHECK);
				if ((EIF_BOOLEAN)(loc1 != NULL)) {
					RTCK0;
				} else {
					RTCF0;
				}
				ti4_1 = F1982_24518(RTCW(loc1));
				Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result + ti4_1);
			}
		}
	}
	RTLE;
	return Result;
}

/* {EV_WIDGET_IMP}.screen_y */
EIF_INTEGER_32 F1970_24045 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc2);
	RTLR(2,loc1);
	RTLIU(3);
	
	RTGC;
	if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R16563[dtype-1871])(Current)) {
		RTLE;
		return (EIF_INTEGER_32) F1912_22485(Current);
	} else {
		loc2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R16312[dtype-1972])(Current);
		tb1 = '\0';
		if ((EIF_BOOLEAN)(loc2 != NULL)) {
			tb2 = F1696_18975(RTCW(loc2));
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if (tb1) {
			Result = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16397[dtype-1730])(Current);
			ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16399[Dtype(RTCW(loc2))-1730])(loc2);
			Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result + ti4_1);
			loc1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R19565[dtype-1958])(Current);
			if ((EIF_BOOLEAN)(loc1 == loc2)) {
				RTCT0("l_wind /= Void", EX_CHECK);
				if ((EIF_BOOLEAN)(loc1 != NULL)) {
					RTCK0;
				} else {
					RTCF0;
				}
				ti4_1 = F1982_24516(RTCW(loc1));
				ti4_2 = F1982_24517(RTCW(loc1));
				Result = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (Result + ti4_1) + ti4_2);
				tb1 = F1913_22706(RTCW(loc1));
				if (tb1) {
					ti4_1 = F1849_20938(RTCW(loc1));
					Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result + ti4_1);
				}
			}
		}
	}
	RTLE;
	return Result;
}

/* {EV_WIDGET_IMP}.x_position */
EIF_INTEGER_32 F1970_24046 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,loc3);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLR(4,loc2);
	RTLIU(5);
	
	RTGC;
	if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R16562[dtype-1871])(Current)) {
		tr1 = *(EIF_REFERENCE *)(Current + O18635[dtype-1911]);
		loc3 = tr1;
		if (EIF_TEST(loc3)) {
			loc1 = F1912_22491(Current);
			loc2 = RTLNS(eif_new_type(1905, 0x01).id, 1905, _OBJSIZ_0_1_0_0_0_1_0_0_);
			ti4_1 = F1408_17327(RTCW(loc1));
			ti4_2 = F1408_17329(RTCW(loc1));
			F1906_22334(RTCW(loc2), ti4_1, ti4_2);
			F1906_22345(RTCW(loc2), loc3);
			ti4_1 = F1906_22336(RTCW(loc2));
			RTLE;
			return (EIF_INTEGER_32) ti4_1;
		} else {
			RTLE;
			return (EIF_INTEGER_32) F1912_22484(Current);
		}
	} else {
		tr1 = *(EIF_REFERENCE *)(Current + O16311[dtype-1722]);
		Result = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_0_4_0_0_);
	}
	RTLE;
	return Result;
}

/* {EV_WIDGET_IMP}.y_position */
EIF_INTEGER_32 F1970_24047 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,loc3);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLR(4,loc2);
	RTLIU(5);
	
	RTGC;
	if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R16562[dtype-1871])(Current)) {
		tr1 = *(EIF_REFERENCE *)(Current + O18635[dtype-1911]);
		loc3 = tr1;
		if (EIF_TEST(loc3)) {
			loc1 = F1912_22491(Current);
			loc2 = RTLNS(eif_new_type(1905, 0x01).id, 1905, _OBJSIZ_0_1_0_0_0_1_0_0_);
			ti4_1 = F1408_17327(RTCW(loc1));
			ti4_2 = F1408_17329(RTCW(loc1));
			F1906_22334(RTCW(loc2), ti4_1, ti4_2);
			F1906_22345(RTCW(loc2), loc3);
			ti4_1 = F1906_22337(RTCW(loc2));
			RTLE;
			return (EIF_INTEGER_32) ti4_1;
		} else {
			RTLE;
			return (EIF_INTEGER_32) F1912_22485(Current);
		}
	} else {
		tr1 = *(EIF_REFERENCE *)(Current + O16311[dtype-1722]);
		Result = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_0_4_0_1_);
	}
	RTLE;
	return Result;
}

/* {EV_WIDGET_IMP}.destroyed */
EIF_BOOLEAN F1970_24048 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	Result = F1296_15099(Current);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) !Result;
	RTLE;
	return Result;
}

/* {EV_WIDGET_IMP}.is_show_requested */
EIF_BOOLEAN F1970_24049 (EIF_REFERENCE Current)
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
	Result = F1258_14781(Current, ti4_1, ((EIF_INTEGER_32) 268435456L));
	RTLE;
	return Result;
}

/* {EV_WIDGET_IMP}.has_capture */
EIF_BOOLEAN F1970_24051 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tb1 = '\01';
	if (!F1912_22476(Current)) {
		tb1 = F1912_22475(Current);
	}
	if (tb1) {
		RTLE;
		return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	RTLE;
	return (EIF_BOOLEAN) 0;
}

/* {EV_WIDGET_IMP}.destroy */
void F1970_24054 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTGC;
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R16312[dtype-1972])(Current);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tr1 = F1696_18976(loc1);
		tr2 = F1696_18976(Current);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R15472[Dtype(RTCW(tr1))-1634])(tr1, tr2);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R19750[dtype-1972])(Current);
	F1696_18991(Current, (EIF_BOOLEAN) 1);
	RTLE;
}

/* {EV_WIDGET_IMP}.show */
void F1970_24055 (EIF_REFERENCE Current)
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
	F1970_24159(Current, *(EIF_POINTER *)(Current + O12527[dtype-1295]), ((EIF_INTEGER_32) 5L));
	loc1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R16312[dtype-1972])(Current);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		tr1 = *(EIF_REFERENCE *)(RTCV(F1696_18976(Current)) + _REFACS_3_);
		F1725_19528(RTCW(loc1), ((EIF_INTEGER_32) 3L), tr1, (EIF_BOOLEAN) 0);
	}
	RTLE;
}

/* {EV_WIDGET_IMP}.hide */
void F1970_24056 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLIU(2);
	
	RTGC;
	F1970_24159(Current, *(EIF_POINTER *)(Current + O12527[dtype-1295]), ((EIF_INTEGER_32) 0L));
	loc1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R16312[dtype-1972])(Current);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		F1725_19528(RTCW(loc1), ((EIF_INTEGER_32) 3L), Current, (EIF_BOOLEAN) 0);
	}
	RTLE;
}

/* {EV_WIDGET_IMP}.parent_is_sensitive */
EIF_BOOLEAN F1970_24057 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	Result = '\0';
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R16312[Dtype(Current)-1972])(Current);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tb1 = F1912_22467(loc1);
		Result = tb1;
	}
	RTLE;
	return Result;
}

/* {EV_WIDGET_IMP}.has_parent */
EIF_BOOLEAN F1970_24058 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R16312[Dtype(Current)-1972])(Current);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tr1 != NULL);
	RTLE;
	return Result;
}

/* {EV_WIDGET_IMP}.disable_sensitive */
void F1970_24059 (EIF_REFERENCE Current)
{
	GTCX
	
	
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R19737[Dtype(Current)-1972])(Current);
}

/* {EV_WIDGET_IMP}.enable_sensitive */
void F1970_24060 (EIF_REFERENCE Current)
{
	GTCX
	
	
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R19738[Dtype(Current)-1972])(Current);
}

/* {EV_WIDGET_IMP}.set_default_minimum_size */
void F1970_24061 (EIF_REFERENCE Current)
{
	GTCX
	
	
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32, EIF_BOOLEAN)) R16303[Dtype(Current)-1972])(Current, ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), (EIF_BOOLEAN) 0);
}

/* {EV_WIDGET_IMP}.enable_capture */
void F1970_24062 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	if ((EIF_BOOLEAN) !F1970_24051(Current)) {
		F1956_23745(Current);
		tr1 = F1956_23756(Current);
		F1714_19307(RTCW(tr1), *(EIF_REFERENCE *)(Current + O15892[Dtype(Current)-1695]));
	}
	RTLE;
}

/* {EV_WIDGET_IMP}.disable_capture */
void F1970_24063 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	if (F1970_24051(Current)) {
		F1956_23747(Current);
		tr1 = F1956_23756(Current);
		F1714_19307(RTCW(tr1), NULL);
	}
	RTLE;
}

/* {EV_WIDGET_IMP}.set_background_color */
void F1970_24066 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_1_);
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O19682[dtype-1969]) != tr1)) {
		tr2 = F1_14(arg1);
		tr1 = *(EIF_REFERENCE *)(RTCW(tr2) + _REFACS_1_);
		*(EIF_REFERENCE *)(Current + O19682[dtype-1969]) = RTRV(eif_new_type(1829, 0), tr1);
		RTAR(Current, tr1);
		if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R16563[dtype-1871])(Current)) {
			F1912_22563(Current);
		}
	}
	RTLE;
}

/* {EV_WIDGET_IMP}.set_foreground_color */
void F1970_24067 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_1_);
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O19683[dtype-1969]) != tr1)) {
		tr2 = F1_14(arg1);
		tr1 = *(EIF_REFERENCE *)(RTCW(tr2) + _REFACS_1_);
		*(EIF_REFERENCE *)(Current + O19683[dtype-1969]) = RTRV(eif_new_type(1829, 0), tr1);
		RTAR(Current, tr1);
		if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R16563[dtype-1871])(Current)) {
			F1912_22563(Current);
		}
	}
	RTLE;
}

/* {EV_WIDGET_IMP}.init_file_drop_actions */
void F1970_24068 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	RTCFDT;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLIU(5);
	
	RTGC;
	tr1 = F976_4216(RTCW(arg1));
	{
		EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,1475,0xFF01,0,0xFFFF};
		EIF_TYPE typres0;
		typarr0[4] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = Current;
	RTAR(tr2,Current);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1552,0xFF01,0xFFF9,0,1475,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRF(typres0.id, (EIF_POINTER) __A1953_754, (EIF_POINTER) _A1953_754, (EIF_POINTER)(F1912_22510),tr2, 1, 0);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2222[Dtype(RTCW(tr1))-818])(tr1, tr3);
	tr1 = F976_4217(RTCW(arg1));
	{
		EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,1475,0xFF01,0,0xFFFF};
		EIF_TYPE typres0;
		typarr0[4] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = Current;
	RTAR(tr2,Current);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1552,0xFF01,0xFFF9,0,1475,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRF(typres0.id, (EIF_POINTER) __A1953_755, (EIF_POINTER) _A1953_755, (EIF_POINTER)(F1912_22511),tr2, 1, 0);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2222[Dtype(RTCW(tr1))-818])(tr1, tr3);
	RTLE;
}

/* {EV_WIDGET_IMP}.parent_imp */
EIF_REFERENCE F1970_24073 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	
	
	Result = *(EIF_REFERENCE *)(Current + O18635[Dtype(Current)-1911]);
	return RTRV(eif_new_type(1970, 0x00), Result);
}

/* {EV_WIDGET_IMP}.call_pointer_actions */
void F1970_24074 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_INTEGER_32 arg5, EIF_INTEGER_32 arg6)
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
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,8,1475,1508,1508,1508,1496,1496,1496,1508,1508,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			tr1 = RTLNTS(typres0.id, 9, 1);
		}
		((EIF_TYPED_VALUE *)tr1+1)->it_i4 = arg2;
		((EIF_TYPED_VALUE *)tr1+2)->it_i4 = arg3;
		((EIF_TYPED_VALUE *)tr1+3)->it_i4 = arg6;
		((EIF_TYPED_VALUE *)tr1+4)->it_r8 = (EIF_REAL_64) 0.0;
		((EIF_TYPED_VALUE *)tr1+5)->it_r8 = (EIF_REAL_64) 0.0;
		((EIF_TYPED_VALUE *)tr1+6)->it_r8 = (EIF_REAL_64) 0.0;
		((EIF_TYPED_VALUE *)tr1+7)->it_i4 = arg4;
		((EIF_TYPED_VALUE *)tr1+8)->it_i4 = arg5;
		F977_14409(RTCW(arg1), tr1);
	}
	RTLE;
}

/* {EV_WIDGET_IMP}.on_button_down */
void F1970_24075 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc2 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCFDT;
	RTCDT;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLIU(5);
	
	RTGC;
	loc1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R19699[dtype-1972])(Current, arg1, arg2);
	tb1 = '\0';
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current + O19554[dtype-1955]) && (EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current + O19553[dtype-1955]))) {
		tb1 = (EIF_BOOLEAN) !F1726_19534(Current);
	}
	if (tb1) {
		tr1 = *(EIF_REFERENCE *)(RTCV(F1956_23756(Current)) + _REFACS_10_);
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			tr1 = F251_11704(RTCV(F1956_23756(Current)));
			{
				EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,4,1475,0xFF01,0,0,1508,1508,1508,0xFFFF};
				EIF_TYPE typres0;
				{
					EIF_TYPE l_type;
					l_type = eif_final_id(Y15892,Y15892_gen_type,dftype,1695);
					typarr0[5] = l_type.annotations | 0xFF00;
					typarr0[6] = l_type.id;
				}
				
				typres0 = eif_compound_id(dftype, typarr0);
				tr2 = RTLNTS(typres0.id, 5, 0);
			}
			tr3 = F1696_18976(Current);
			((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
			RTAR(tr2,tr3);
			((EIF_TYPED_VALUE *)tr2+2)->it_i4 = arg3;
			ti4_1 = eif_integer_32_item(RTCW(loc1),3);
			((EIF_TYPED_VALUE *)tr2+3)->it_i4 = ti4_1;
			ti4_1 = eif_integer_32_item(RTCW(loc1),4);
			((EIF_TYPED_VALUE *)tr2+4)->it_i4 = ti4_1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3112[Dtype(RTCW(tr1))-975])(tr1, tr2);
		}
		ti4_1 = eif_integer_32_item(RTCW(loc1),1);
		ti4_2 = eif_integer_32_item(RTCW(loc1),2);
		ti4_3 = eif_integer_32_item(RTCW(loc1),3);
		ti4_4 = eif_integer_32_item(RTCW(loc1),4);
		F1970_24074(Current, *(EIF_REFERENCE *)(Current + O11051[dtype-412]), ti4_1, ti4_2, ti4_3, ti4_4, arg3);
		loc2 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	tb1 = '\0';
	if ((EIF_BOOLEAN) !F1696_18975(Current)) {
		tb2 = F1612_18041(RTCV(F1696_18976(Current)));
		tb1 = tb2;
	}
	if (tb1) {
		ti4_1 = eif_integer_32_item(RTCW(loc1),1);
		ti4_2 = eif_integer_32_item(RTCW(loc1),2);
		ti4_3 = eif_integer_32_item(RTCW(loc1),3);
		ti4_4 = eif_integer_32_item(RTCW(loc1),4);
		F1727_19571(Current, ti4_1, ti4_2, arg3, ti4_3, ti4_4);
	}
	tb1 = '\0';
	if ((EIF_BOOLEAN) !F1696_18975(Current)) {
		tb1 = (EIF_BOOLEAN) !F1726_19534(Current);
	}
	if (tb1) {
		tu1_1 = *(EIF_NATURAL_8 *)(Current + O19555[dtype-1955]);
		loc2 = (EIF_BOOLEAN) (EIF_BOOLEAN) (loc2 || (EIF_BOOLEAN)(tu1_1 == ((EIF_NATURAL_8) 2U)));
		ti4_1 = eif_integer_32_item(RTCW(loc1),1);
		ti4_2 = eif_integer_32_item(RTCW(loc1),2);
		ti4_3 = eif_integer_32_item(RTCW(loc1),3);
		ti4_4 = eif_integer_32_item(RTCW(loc1),4);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32)) R19545[dtype-1958])(Current, ti4_1, ti4_2, arg3, ti4_3, ti4_4);
	}
	if ((EIF_BOOLEAN) !loc2) {
		tr1 = *(EIF_REFERENCE *)(RTCV(F1956_23756(Current)) + _REFACS_10_);
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			tr1 = F251_11704(RTCV(F1956_23756(Current)));
			{
				EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,4,1475,0xFF01,0,0,1508,1508,1508,0xFFFF};
				EIF_TYPE typres0;
				{
					EIF_TYPE l_type;
					l_type = eif_final_id(Y15892,Y15892_gen_type,dftype,1695);
					typarr0[5] = l_type.annotations | 0xFF00;
					typarr0[6] = l_type.id;
				}
				
				typres0 = eif_compound_id(dftype, typarr0);
				tr2 = RTLNTS(typres0.id, 5, 0);
			}
			tr3 = F1696_18976(Current);
			((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
			RTAR(tr2,tr3);
			((EIF_TYPED_VALUE *)tr2+2)->it_i4 = arg3;
			ti4_1 = eif_integer_32_item(RTCW(loc1),3);
			((EIF_TYPED_VALUE *)tr2+3)->it_i4 = ti4_1;
			ti4_1 = eif_integer_32_item(RTCW(loc1),4);
			((EIF_TYPED_VALUE *)tr2+4)->it_i4 = ti4_1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3112[Dtype(RTCW(tr1))-975])(tr1, tr2);
		}
		ti4_1 = eif_integer_32_item(RTCW(loc1),1);
		ti4_2 = eif_integer_32_item(RTCW(loc1),2);
		ti4_3 = eif_integer_32_item(RTCW(loc1),3);
		ti4_4 = eif_integer_32_item(RTCW(loc1),4);
		F1970_24074(Current, *(EIF_REFERENCE *)(Current + O11051[dtype-412]), ti4_1, ti4_2, ti4_3, ti4_4, arg3);
	}
	RTLE;
}

/* {EV_WIDGET_IMP}.on_button_up */
void F1970_24076 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	RTCDT;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLIU(5);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_NATURAL_8 *)(Current + O19557[dtype-1955]) != ((EIF_NATURAL_8) 3U))) {
		loc1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R19699[dtype-1972])(Current, arg1, arg2);
		tr1 = *(EIF_REFERENCE *)(RTCV(F1956_23756(Current)) + _REFACS_12_);
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			tr1 = F251_11708(RTCV(F1956_23756(Current)));
			{
				EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,4,1475,0xFF01,0,0,1508,1508,1508,0xFFFF};
				EIF_TYPE typres0;
				{
					EIF_TYPE l_type;
					l_type = eif_final_id(Y15892,Y15892_gen_type,Dftype(Current),1695);
					typarr0[5] = l_type.annotations | 0xFF00;
					typarr0[6] = l_type.id;
				}
				
				typres0 = eif_compound_id(Dftype(Current), typarr0);
				tr2 = RTLNTS(typres0.id, 5, 0);
			}
			tr3 = F1696_18976(Current);
			((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
			RTAR(tr2,tr3);
			((EIF_TYPED_VALUE *)tr2+2)->it_i4 = arg3;
			ti4_1 = eif_integer_32_item(RTCW(loc1),3);
			((EIF_TYPED_VALUE *)tr2+3)->it_i4 = ti4_1;
			ti4_1 = eif_integer_32_item(RTCW(loc1),4);
			((EIF_TYPED_VALUE *)tr2+4)->it_i4 = ti4_1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3112[Dtype(RTCW(tr1))-975])(tr1, tr2);
		}
		ti4_1 = eif_integer_32_item(RTCW(loc1),1);
		ti4_2 = eif_integer_32_item(RTCW(loc1),2);
		ti4_3 = eif_integer_32_item(RTCW(loc1),3);
		ti4_4 = eif_integer_32_item(RTCW(loc1),4);
		F1970_24074(Current, *(EIF_REFERENCE *)(Current + O11055[dtype-412]), ti4_1, ti4_2, ti4_3, ti4_4, arg3);
	}
	RTLE;
}

/* {EV_WIDGET_IMP}.on_button_double_click */
void F1970_24077 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc2 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_NATURAL_8 tu1_1;
	RTCFDT;
	RTCDT;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLIU(5);
	
	RTGC;
	loc1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R19699[dtype-1972])(Current, arg1, arg2);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current + O19554[dtype-1955]) && (EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current + O19553[dtype-1955]))) {
		tr1 = *(EIF_REFERENCE *)(RTCV(F1956_23756(Current)) + _REFACS_11_);
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			tr1 = F251_11706(RTCV(F1956_23756(Current)));
			{
				EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,4,1475,0xFF01,0,0,1508,1508,1508,0xFFFF};
				EIF_TYPE typres0;
				{
					EIF_TYPE l_type;
					l_type = eif_final_id(Y15892,Y15892_gen_type,dftype,1695);
					typarr0[5] = l_type.annotations | 0xFF00;
					typarr0[6] = l_type.id;
				}
				
				typres0 = eif_compound_id(dftype, typarr0);
				tr2 = RTLNTS(typres0.id, 5, 0);
			}
			tr3 = F1696_18976(Current);
			((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
			RTAR(tr2,tr3);
			((EIF_TYPED_VALUE *)tr2+2)->it_i4 = arg3;
			ti4_1 = eif_integer_32_item(RTCW(loc1),3);
			((EIF_TYPED_VALUE *)tr2+3)->it_i4 = ti4_1;
			ti4_1 = eif_integer_32_item(RTCW(loc1),4);
			((EIF_TYPED_VALUE *)tr2+4)->it_i4 = ti4_1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3112[Dtype(RTCW(tr1))-975])(tr1, tr2);
		}
		ti4_1 = eif_integer_32_item(RTCW(loc1),1);
		ti4_2 = eif_integer_32_item(RTCW(loc1),2);
		ti4_3 = eif_integer_32_item(RTCW(loc1),3);
		ti4_4 = eif_integer_32_item(RTCW(loc1),4);
		F1970_24074(Current, *(EIF_REFERENCE *)(Current + O11053[dtype-412]), ti4_1, ti4_2, ti4_3, ti4_4, arg3);
		loc2 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	tu1_1 = *(EIF_NATURAL_8 *)(Current + O19555[dtype-1955]);
	loc2 = (EIF_BOOLEAN) (EIF_BOOLEAN) (loc2 || (EIF_BOOLEAN)(tu1_1 == ((EIF_NATURAL_8) 2U)));
	ti4_1 = eif_integer_32_item(RTCW(loc1),1);
	ti4_2 = eif_integer_32_item(RTCW(loc1),2);
	ti4_3 = eif_integer_32_item(RTCW(loc1),3);
	ti4_4 = eif_integer_32_item(RTCW(loc1),4);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32)) R19545[dtype-1958])(Current, ti4_1, ti4_2, arg3, ti4_3, ti4_4);
	if ((EIF_BOOLEAN) !loc2) {
		tr1 = *(EIF_REFERENCE *)(RTCV(F1956_23756(Current)) + _REFACS_11_);
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			tr1 = F251_11706(RTCV(F1956_23756(Current)));
			{
				EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,4,1475,0xFF01,0,0,1508,1508,1508,0xFFFF};
				EIF_TYPE typres0;
				{
					EIF_TYPE l_type;
					l_type = eif_final_id(Y15892,Y15892_gen_type,dftype,1695);
					typarr0[5] = l_type.annotations | 0xFF00;
					typarr0[6] = l_type.id;
				}
				
				typres0 = eif_compound_id(dftype, typarr0);
				tr2 = RTLNTS(typres0.id, 5, 0);
			}
			tr3 = F1696_18976(Current);
			((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
			RTAR(tr2,tr3);
			((EIF_TYPED_VALUE *)tr2+2)->it_i4 = arg3;
			ti4_1 = eif_integer_32_item(RTCW(loc1),3);
			((EIF_TYPED_VALUE *)tr2+3)->it_i4 = ti4_1;
			ti4_1 = eif_integer_32_item(RTCW(loc1),4);
			((EIF_TYPED_VALUE *)tr2+4)->it_i4 = ti4_1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3112[Dtype(RTCW(tr1))-975])(tr1, tr2);
		}
		ti4_1 = eif_integer_32_item(RTCW(loc1),1);
		ti4_2 = eif_integer_32_item(RTCW(loc1),2);
		ti4_3 = eif_integer_32_item(RTCW(loc1),3);
		ti4_4 = eif_integer_32_item(RTCW(loc1),4);
		F1970_24074(Current, *(EIF_REFERENCE *)(Current + O11053[dtype-412]), ti4_1, ti4_2, ti4_3, ti4_4, arg3);
	}
	RTLE;
}

/* {EV_WIDGET_IMP}.on_left_button_down */
void F1970_24078 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if (*(EIF_BOOLEAN *)(Current + O19553[Dtype(Current)-1955])) {
		F1912_22507(Current);
	}
	F1970_24075(Current, arg2, arg3, ((EIF_INTEGER_32) 1L));
	RTLE;
}

/* {EV_WIDGET_IMP}.on_middle_button_down */
void F1970_24079 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	
	
	F1970_24075(Current, arg2, arg3, ((EIF_INTEGER_32) 2L));
}

/* {EV_WIDGET_IMP}.on_right_button_down */
void F1970_24080 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	
	
	F1970_24075(Current, arg2, arg3, ((EIF_INTEGER_32) 3L));
}

/* {EV_WIDGET_IMP}.on_left_button_up */
void F1970_24081 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1956_23721(Current, arg2, arg3);
	F1970_24076(Current, arg2, arg3, ((EIF_INTEGER_32) 1L));
	F1727_19573(Current, arg2, arg3);
	RTLE;
}

/* {EV_WIDGET_IMP}.on_middle_button_up */
void F1970_24082 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	
	
	F1970_24076(Current, arg2, arg3, ((EIF_INTEGER_32) 2L));
}

/* {EV_WIDGET_IMP}.on_right_button_up */
void F1970_24083 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	
	
	F1970_24076(Current, arg2, arg3, ((EIF_INTEGER_32) 3L));
}

/* {EV_WIDGET_IMP}.on_left_button_double_click */
void F1970_24084 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	
	
	F1970_24077(Current, arg2, arg3, ((EIF_INTEGER_32) 1L));
}

/* {EV_WIDGET_IMP}.on_middle_button_double_click */
void F1970_24085 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	
	
	F1970_24077(Current, arg2, arg3, ((EIF_INTEGER_32) 2L));
}

/* {EV_WIDGET_IMP}.on_right_button_double_click */
void F1970_24086 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	
	
	F1970_24077(Current, arg2, arg3, ((EIF_INTEGER_32) 3L));
}

/* {EV_WIDGET_IMP}.default_process_message */
void F1970_24087 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2, EIF_POINTER arg3)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 675L))) {
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R19706[Dtype(Current)-1972])(Current);
		tr1 = RTOUCR(284,F1970_24038, (Current));
		F489_1934(RTCW(tr1), NULL);
	}
	RTLE;
}

/* {EV_WIDGET_IMP}.client_to_screen */
EIF_REFERENCE F1970_24088 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Result);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTGC;
	Result = RTLNS(eif_new_type(1905, 0x01).id, 1905, _OBJSIZ_0_1_0_0_0_1_0_0_);
	F1906_22334(RTCW(Result), arg1, arg2);
	loc1 = Current;
	loc1 = RTRV(eif_new_type(1911, 0x00), loc1);
	RTCT0("wel_window_not_void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	F1906_22344(RTCW(Result), loc1);
	RTLE;
	return Result;
}

/* {EV_WIDGET_IMP}.translate_coordinates */
EIF_REFERENCE F1970_24089 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLIU(4);
	
	RTGC;
	loc1 = F1970_24088(Current, arg1, arg2);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,4,1475,1508,1508,1508,1508,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNTS(typres0.id, 5, 1);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_i4 = arg1;
	((EIF_TYPED_VALUE *)tr1+2)->it_i4 = arg2;
	ti4_1 = F1906_22336(RTCW(loc1));
	((EIF_TYPED_VALUE *)tr1+3)->it_i4 = ti4_1;
	ti4_1 = F1906_22337(RTCW(loc1));
	((EIF_TYPED_VALUE *)tr1+4)->it_i4 = ti4_1;
	Result = (EIF_REFERENCE) tr1;
	RTLE;
	return Result;
}

/* {EV_WIDGET_IMP}.is_dockable_source */
EIF_BOOLEAN F1970_24091 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	return (EIF_BOOLEAN) *(EIF_BOOLEAN *)(Current + O16349[Dtype(Current)-1725]);
}

/* {EV_WIDGET_IMP}.on_mouse_move */
void F1970_24092 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc3 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc4 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	RTCFDT;
	RTCDT;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc2);
	RTLR(3,loc1);
	RTLR(4,tr2);
	RTLR(5,tr3);
	RTLIU(6);
	
	RTGC;
	tb1 = '\0';
	tb2 = '\0';
	tb3 = '\0';
	tb4 = '\0';
	tr1 = *(EIF_REFERENCE *)(RTCV(RTOUCR(284,F1970_24038, (Current))));
	if ((EIF_BOOLEAN)(tr1 == NULL)) {
		tb4 = (EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L));
	}
	if (tb4) {
		tb3 = (EIF_BOOLEAN) (arg3 >= ((EIF_INTEGER_32) 0L));
	}
	if (tb3) {
		tb2 = (EIF_BOOLEAN) (arg2 <= (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16400[dtype-1730])(Current));
	}
	if (tb2) {
		tb1 = (EIF_BOOLEAN) (arg3 <= (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16401[dtype-1730])(Current));
	}
	if (tb1) {
		loc2 = RTLNS(eif_new_type(1392, 0x01).id, 1392, _OBJSIZ_0_1_0_0_0_1_0_0_);
		F1393_16866(RTCW(loc2));
		F1393_16873(RTCW(loc2), *(EIF_POINTER *)(Current + O12527[dtype-1295]));
		F1393_16872(RTCW(loc2), ((EIF_INTEGER_32) 2L));
		loc3 = F1912_22644(Current, loc2);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R19705[dtype-1972])(Current);
		tr1 = RTOUCR(284,F1970_24038, (Current));
		F489_1935(RTCW(tr1), Current);
		F1296_15104(RTCW(loc2));
	}
	loc1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R19699[dtype-1972])(Current, arg2, arg3);
	loc4 = '\01';
	ti4_1 = eif_integer_32_item(RTCW(loc1),1);
	if (!(EIF_BOOLEAN)(ti4_1 != *(EIF_INTEGER_32 *)(Current + O19703[dtype-1969]))) {
		ti4_1 = eif_integer_32_item(RTCW(loc1),2);
		loc4 = (EIF_BOOLEAN)(ti4_1 != *(EIF_INTEGER_32 *)(Current + O19704[dtype-1969]));
	}
	if (loc4) {
		ti4_1 = eif_integer_32_item(RTCW(loc1),1);
		*(EIF_INTEGER_32 *)(Current + O19703[dtype-1969]) = (EIF_INTEGER_32) ti4_1;
		ti4_1 = eif_integer_32_item(RTCW(loc1),2);
		*(EIF_INTEGER_32 *)(Current + O19704[dtype-1969]) = (EIF_INTEGER_32) ti4_1;
	}
	tb1 = '\01';
	tb2 = '\0';
	if (*(EIF_BOOLEAN *)(Current + O10095[dtype-300])) {
		tb2 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R19701[dtype-1972])(Current, arg2, arg3);
	}
	if (!(tb2)) {
		tr1 = *(EIF_REFERENCE *)(RTCV(F1956_23756(Current)) + _REFACS_42_);
		tb1 = (EIF_BOOLEAN)(tr1 != NULL);
	}
	if (tb1) {
		ti4_1 = eif_integer_32_item(RTCW(loc1),1);
		ti4_2 = eif_integer_32_item(RTCW(loc1),2);
		ti4_3 = eif_integer_32_item(RTCW(loc1),3);
		ti4_4 = eif_integer_32_item(RTCW(loc1),4);
		F1727_19572(Current, ti4_1, ti4_2, ti4_3, ti4_4);
	} else {
		tb1 = '\01';
		tb2 = '\0';
		if (*(EIF_BOOLEAN *)(Current + O16525[dtype-1750])) {
			tb2 = F1751_19757(Current);
		}
		if (!(tb2)) {
			tb2 = '\0';
			if (F1751_19756(Current)) {
				tb2 = *(EIF_BOOLEAN *)(Current + O19553[dtype-1955]);
			}
			tb1 = tb2;
		}
		if (tb1) {
			if ((EIF_BOOLEAN) (loc4 || *(EIF_BOOLEAN *)(Current + O10095[dtype-300]))) {
				ti4_1 = eif_integer_32_item(RTCW(loc1),1);
				ti4_2 = eif_integer_32_item(RTCW(loc1),2);
				ti4_3 = eif_integer_32_item(RTCW(loc1),3);
				ti4_4 = eif_integer_32_item(RTCW(loc1),4);
				F1956_23722(Current, ti4_1, ti4_2, ti4_3, ti4_4);
			}
		}
	}
	tr1 = *(EIF_REFERENCE *)(RTCV(F1956_23756(Current)) + _REFACS_9_);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		if (loc4) {
			tr1 = F251_11702(RTCV(F1956_23756(Current)));
			{
				EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,3,1475,0xFF01,0,0,1508,1508,0xFFFF};
				EIF_TYPE typres0;
				{
					EIF_TYPE l_type;
					l_type = eif_final_id(Y15892,Y15892_gen_type,dftype,1695);
					typarr0[5] = l_type.annotations | 0xFF00;
					typarr0[6] = l_type.id;
				}
				
				typres0 = eif_compound_id(dftype, typarr0);
				tr2 = RTLNTS(typres0.id, 4, 0);
			}
			tr3 = F1696_18976(Current);
			((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
			RTAR(tr2,tr3);
			ti4_1 = eif_integer_32_item(RTCW(loc1),3);
			((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ti4_1;
			ti4_1 = eif_integer_32_item(RTCW(loc1),4);
			((EIF_TYPED_VALUE *)tr2+3)->it_i4 = ti4_1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3112[Dtype(RTCW(tr1))-975])(tr1, tr2);
		}
	}
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O11049[dtype-412]) != NULL)) {
		if (loc4) {
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R11048[dtype-1871])(Current);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,7,1475,1508,1508,1496,1496,1496,1508,1508,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr2 = RTLNTS(typres0.id, 8, 1);
			}
			ti4_1 = eif_integer_32_item(RTCW(loc1),1);
			((EIF_TYPED_VALUE *)tr2+1)->it_i4 = ti4_1;
			ti4_1 = eif_integer_32_item(RTCW(loc1),2);
			((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ti4_1;
			((EIF_TYPED_VALUE *)tr2+3)->it_r8 = (EIF_REAL_64) 0.0;
			((EIF_TYPED_VALUE *)tr2+4)->it_r8 = (EIF_REAL_64) 0.0;
			((EIF_TYPED_VALUE *)tr2+5)->it_r8 = (EIF_REAL_64) 0.0;
			ti4_1 = eif_integer_32_item(RTCW(loc1),3);
			((EIF_TYPED_VALUE *)tr2+6)->it_i4 = ti4_1;
			ti4_1 = eif_integer_32_item(RTCW(loc1),4);
			((EIF_TYPED_VALUE *)tr2+7)->it_i4 = ti4_1;
			F977_14409(RTCW(tr1), tr2);
		}
	}
	RTLE;
}

/* {EV_WIDGET_IMP}.on_mouse_enter */
void F1970_24095 (EIF_REFERENCE Current)
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
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O11057[dtype-412]) != NULL)) {
		tr1 = *(EIF_REFERENCE *)(Current + O11057[dtype-412]);
		F977_14409(RTCW(tr1), NULL);
	}
	RTLE;
}

/* {EV_WIDGET_IMP}.on_mouse_leave */
void F1970_24096 (EIF_REFERENCE Current)
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
	*(EIF_INTEGER_32 *)(Current + O19703[dtype-1969]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
	*(EIF_INTEGER_32 *)(Current + O19704[dtype-1969]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O11061[dtype-412]) != NULL)) {
		tr1 = *(EIF_REFERENCE *)(Current + O11061[dtype-412]);
		F977_14409(RTCW(tr1), NULL);
	}
	RTLE;
}

/* {EV_WIDGET_IMP}.process_standard_key_press */
void F1970_24097 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc4 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc5 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCFDT;
	RTCDT;
	RTLD;
	
	RTLI(8);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,loc2);
	RTLR(3,loc3);
	RTLR(4,tr1);
	RTLR(5,tr2);
	RTLR(6,loc6);
	RTLR(7,tr3);
	RTLIU(8);
	
	RTGC;
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 18L)) || (EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 27L)))) {
		loc4 = F1956_23717(Current);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R19548[dtype-1958])(Current);
	}
	tb1 = '\0';
	if ((EIF_BOOLEAN) !loc4) {
		tb1 = F472_13634(Current, arg1);
	}
	if (tb1) {
		loc1 = RTLNS(eif_new_type(1813, 0x01).id, 1813, _OBJSIZ_0_0_0_1_0_0_0_0_);
		ti4_1 = F472_13633(Current, arg1);
		F1814_20379(RTCW(loc1), ti4_1);
		loc5 = F1752_19811(Current, loc1);
		tb1 = '\0';
		if ((EIF_BOOLEAN) !loc5) {
			tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_BOOLEAN)) R19710[dtype-1972])(Current, (EIF_BOOLEAN) 1);
		}
		if (tb1) {
			loc2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R19565[dtype-1958])(Current);
			loc2 = RTRV(eif_new_type(1762, 0x00), loc2);
			loc3 = (EIF_REFERENCE) Current;
			if ((EIF_BOOLEAN)(loc2 != NULL)) {
				if ((EIF_BOOLEAN)(loc2 != loc3)) {
					tr1 = F413_13376(RTCW(loc2));
					{
						static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,1475,0xFF01,1813,0xFFFF};
						EIF_TYPE typres0;
						static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
						
						typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
						tr2 = RTLNTS(typres0.id, 2, 0);
					}
					((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
					RTAR(tr2,loc1);
					F977_14409(RTCW(tr1), tr2);
				}
				ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_0_0_0_0_);
				loc6 = F1970_24098(Current, ti4_1);
				if ((EIF_BOOLEAN)(loc6 != NULL)) {
					tr1 = F1956_23756(Current);
					{
						static EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,1475,0xFF01,996,0xFFF9,0,1475,0xFFFF};
						EIF_TYPE typres0;
						static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
						
						typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
						tr2 = RTLNTS(typres0.id, 3, 0);
					}
					tr3 = F1605_17937(RTCW(loc6));
					((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
					RTAR(tr2,tr3);
					
					{
						static EIF_TYPE_INDEX typarr0[] = {0xFF01,1552,0xFF01,0xFFF9,0,1475,0xFFFF};
						EIF_TYPE typres0;
						static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
						
						typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
						tr3= RTLNRF(typres0.id, (EIF_POINTER) __A1369_182, (EIF_POINTER) _A1369_182, (EIF_POINTER)(F977_14409),tr2, 1, 0);
					}
					F1714_19329(RTCW(tr1), tr3);
					loc5 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				}
			}
		}
		tr1 = *(EIF_REFERENCE *)(RTCV(F1956_23756(Current)) + _REFACS_14_);
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			tr1 = F251_11712(RTCV(F1956_23756(Current)));
			{
				EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,1475,0xFF01,0,0,0xFF01,1813,0xFFFF};
				EIF_TYPE typres0;
				{
					EIF_TYPE l_type;
					l_type = eif_final_id(Y15892,Y15892_gen_type,dftype,1695);
					typarr0[5] = l_type.annotations | 0xFF00;
					typarr0[6] = l_type.id;
				}
				
				typres0 = eif_compound_id(dftype, typarr0);
				tr2 = RTLNTS(typres0.id, 3, 0);
			}
			tr3 = F1696_18976(Current);
			((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
			RTAR(tr2,tr3);
			((EIF_TYPED_VALUE *)tr2+2)->it_r = loc1;
			RTAR(tr2,loc1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3112[Dtype(RTCW(tr1))-975])(tr1, tr2);
		}
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O11063[dtype-412]) != NULL)) {
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R11062[dtype-1871])(Current);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,1475,0xFF01,1813,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr2 = RTLNTS(typres0.id, 2, 0);
			}
			((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
			RTAR(tr2,loc1);
			F977_14409(RTCW(tr1), tr2);
		}
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 13L)) && (EIF_BOOLEAN) !loc5)) {
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R19711[dtype-1972])(Current);
		}
		if (loc5) {
			F1912_22507(Current);
		} else {
			tb1 = '\0';
			if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R19714[dtype-1972])(Current)) {
				tb1 = (EIF_BOOLEAN) !loc5;
			}
			if (tb1) {
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R19713[dtype-1972])(Current, arg1);
			}
		}
	}
	RTLE;
}

/* {EV_WIDGET_IMP}.accelerator_from_key_code */
EIF_REFERENCE F1970_24098 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(6);
	RTLR(0,loc4);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,loc2);
	RTLR(4,loc3);
	RTLR(5,Result);
	RTLIU(6);
	
	RTGC;
	loc4 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R19565[Dtype(Current)-1958])(Current);
	if ((EIF_BOOLEAN)(loc4 != NULL)) {
		loc1 = *(EIF_REFERENCE *)(RTCW(loc4) + O16682[Dtype(loc4)-1762]);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_6_3_0_7_);
		if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
			F1000_3963(RTCW(loc1));
			tb1 = F1000_3958(RTCW(loc1));
			if ((EIF_BOOLEAN) !tb1) {
				loc2 = F1000_3935(RTCW(loc1));
				if ((EIF_BOOLEAN)(loc2 != NULL)) {
					loc3 = *(EIF_REFERENCE *)(RTCW(loc2) + _REFACS_1_);
					loc3 = RTRV(eif_new_type(1711, 0x00), loc3);
					RTCT0("l_accel_imp /= Void", EX_CHECK);
					if ((EIF_BOOLEAN)(loc3 != NULL)) {
						RTCK0;
					} else {
						RTCF0;
					}
					tb1 = F1910_22388(RTCV(F1956_23756(Current)));
					tb2 = F1910_22389(RTCV(F1956_23756(Current)));
					tb3 = F1910_22390(RTCV(F1956_23756(Current)));
					ti4_1 = F1711_19242(RTCW(loc3), arg1, tb1, tb2, tb3);
					Result = F1000_3929(RTCW(loc1), ti4_1);
				}
			}
		}
	}
	RTLE;
	return Result;
}

/* {EV_WIDGET_IMP}.process_standard_key_release */
void F1970_24099 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc4 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCFDT;
	RTCDT;
	RTLD;
	
	RTLI(8);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,loc2);
	RTLR(3,loc3);
	RTLR(4,tr1);
	RTLR(5,tr2);
	RTLR(6,loc5);
	RTLR(7,tr3);
	RTLIU(8);
	
	RTGC;
	if (F472_13634(Current, arg1)) {
		loc1 = RTLNS(eif_new_type(1813, 0x01).id, 1813, _OBJSIZ_0_0_0_1_0_0_0_0_);
		ti4_1 = F472_13633(Current, arg1);
		F1814_20379(RTCW(loc1), ti4_1);
		loc4 = F1752_19811(Current, loc1);
		tb1 = '\0';
		if ((EIF_BOOLEAN) !loc4) {
			tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_BOOLEAN)) R19710[dtype-1972])(Current, (EIF_BOOLEAN) 0);
		}
		if (tb1) {
			loc2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R19565[dtype-1958])(Current);
			loc2 = RTRV(eif_new_type(1762, 0x00), loc2);
			loc3 = (EIF_REFERENCE) Current;
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc2 != NULL) && (EIF_BOOLEAN)(loc3 != loc2))) {
				tr1 = F413_13380(RTCW(loc2));
				{
					static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,1475,0xFF01,1813,0xFFFF};
					EIF_TYPE typres0;
					static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
					
					typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
					tr2 = RTLNTS(typres0.id, 2, 0);
				}
				((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
				RTAR(tr2,loc1);
				F977_14409(RTCW(tr1), tr2);
			}
		}
		loc5 = F1956_23756(Current);
		tr1 = *(EIF_REFERENCE *)(RTCW(loc5) + _REFACS_16_);
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			tr1 = F251_11716(RTCW(loc5));
			{
				EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,1475,0xFF01,0,0,0xFF01,1813,0xFFFF};
				EIF_TYPE typres0;
				{
					EIF_TYPE l_type;
					l_type = eif_final_id(Y15892,Y15892_gen_type,dftype,1695);
					typarr0[5] = l_type.annotations | 0xFF00;
					typarr0[6] = l_type.id;
				}
				
				typres0 = eif_compound_id(dftype, typarr0);
				tr2 = RTLNTS(typres0.id, 3, 0);
			}
			tr3 = F1696_18976(Current);
			((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
			RTAR(tr2,tr3);
			((EIF_TYPED_VALUE *)tr2+2)->it_r = loc1;
			RTAR(tr2,loc1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3112[Dtype(RTCW(tr1))-975])(tr1, tr2);
		}
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O11067[dtype-412]) != NULL)) {
			tr1 = *(EIF_REFERENCE *)(Current + O11067[dtype-412]);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,1475,0xFF01,1813,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr2 = RTLNTS(typres0.id, 2, 0);
			}
			((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
			RTAR(tr2,loc1);
			F977_14409(RTCW(tr1), tr2);
		}
		if (loc4) {
			F1912_22507(Current);
		}
	}
	RTLE;
}

/* {EV_WIDGET_IMP}.propagate_key_event_to_toplevel_window */
EIF_BOOLEAN F1970_24100 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
}

/* {EV_WIDGET_IMP}.fire_select_actions_on_enter */
void F1970_24101 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {EV_WIDGET_IMP}.tab_action */
void F1970_24102 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc3);
	RTLR(1,Current);
	RTLR(2,loc2);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTGC;
	loc3 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R19565[dtype-1958])(Current);
	if ((EIF_BOOLEAN)(loc3 != NULL)) {
		tp1 = *(EIF_POINTER *)(RTCW(loc3) + O12527[Dtype(loc3)-1295]);
		loc1 = (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE, EIF_POINTER, EIF_POINTER, EIF_BOOLEAN)) R19756[dtype-1972])(Current, tp1, *(EIF_POINTER *)(Current + O12527[dtype-1295]), arg1);
		{
			/* INLINED CODE (ANY.default_pointer) */
			tp1 = (EIF_POINTER)  0;
			/* END INLINED CODE */
		}
		if ((EIF_BOOLEAN)(loc1 != tp1)) {
			if ((EIF_BOOLEAN)(loc1 != *(EIF_POINTER *)(Current + O12527[dtype-1295]))) {
				loc2 = F1898_22150(Current, loc1);
				if ((EIF_BOOLEAN)(loc2 != NULL)) {
					if (arg1) {
						tr1 = F1751_19782(Current);
						F1714_19352(RTCW(tr1), ((EIF_NATURAL_8) 1U));
					} else {
						tr1 = F1751_19782(Current);
						F1714_19352(RTCW(tr1), ((EIF_NATURAL_8) 2U));
					}
					(FUNCTION_CAST(void, (EIF_REFERENCE)) R18689[Dtype(RTCW(loc2))-1914])(loc2);
					tr1 = F1751_19782(Current);
					F1714_19352(RTCW(tr1), ((EIF_NATURAL_8) 0U));
				}
			}
		}
	}
	RTLE;
}

/* {EV_WIDGET_IMP}.process_navigation_key */
void F1970_24103 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tb1 = '\0';
	if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 9L))) {
		ti4_1 = F1912_22496(Current);
		tb1 = F1258_14781(Current, ti4_1, ((EIF_INTEGER_32) 65536L));
	}
	if (tb1) {
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_BOOLEAN)) R19712[Dtype(Current)-1972])(Current, (EIF_BOOLEAN) !F1898_22152(Current, ((EIF_INTEGER_32) 16L)));
	}
	RTLE;
}

/* {EV_WIDGET_IMP}.is_tabable_from */
EIF_BOOLEAN F1970_24104 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
}

/* {EV_WIDGET_IMP}.ignore_character_code */
EIF_BOOLEAN F1970_24105 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 13L));
}

/* {EV_WIDGET_IMP}.on_key_down */
void F1970_24106 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	F1970_24097(Current, arg1);
}

/* {EV_WIDGET_IMP}.on_sys_key_down */
void F1970_24107 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	F1970_24097(Current, arg1);
}

/* {EV_WIDGET_IMP}.on_sys_key_up */
void F1970_24108 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	F1970_24099(Current, arg1);
}

/* {EV_WIDGET_IMP}.on_key_up */
void F1970_24109 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	F1970_24099(Current, arg1);
}

/* {EV_WIDGET_IMP}.on_char */
void F1970_24110 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_CHARACTER_32 loc2 = (EIF_CHARACTER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc5 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTCFDT;
	RTCDT;
	RTLD;
	
	RTLI(7);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,loc3);
	RTLR(3,tr1);
	RTLR(4,loc6);
	RTLR(5,tr2);
	RTLR(6,tr3);
	RTLIU(7);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 13L))) {
		loc2 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\012';
	} else {
		tu4_1 = (EIF_NATURAL_32) arg1;
		loc2 = (EIF_CHARACTER_32) tu4_1;
	}
	loc1 = RTLNS(eif_new_type(1564, 0x01).id, 1564, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F1564_6847(RTCW(loc1), ((EIF_INTEGER_32) 1L));
	F1565_6952(RTCW(loc1), loc2);
	switch (arg1) {
		case 8L:
		case 27L:
		case 127L:
			loc5 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			break;
		default:
			loc5 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			break;
	}
	ti4_1 = inline_F67_9786(loc2);
	loc4 = eif_bit_and(ti4_1,((EIF_INTEGER_32) 255L));
	tb1 = '\0';
	if ((EIF_BOOLEAN)(loc4 != ((EIF_INTEGER_32) -1L))) {
		tb1 = F472_13634(Current, loc4);
	}
	if (tb1) {
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O16561[dtype-1751]) != NULL)) {
			loc3 = RTLNS(eif_new_type(1813, 0x01).id, 1813, _OBJSIZ_0_0_0_1_0_0_0_0_);
			ti4_1 = F472_13633(Current, loc4);
			F1814_20379(RTCW(loc3), ti4_1);
		}
		if ((EIF_BOOLEAN) !loc5) {
			ti4_1 = F472_13633(Current, loc4);
			tr1 = F1970_24098(Current, ti4_1);
			loc5 = (EIF_BOOLEAN) (EIF_BOOLEAN)(tr1 != NULL);
		}
	}
	tb1 = '\01';
	tb2 = '\0';
	tr1 = *(EIF_REFERENCE *)(Current + O16561[dtype-1751]);
	loc6 = tr1;
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc3 != NULL) && EIF_TEST(loc6))) {
		tb3 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_POINTER, EIF_REFERENCE, EIF_REFERENCE)) *(EIF_POINTER *)(loc6+ _PTROFF_4_3_0_3_0_0_))(
			*(EIF_POINTER *)(loc6+ _PTROFF_4_3_0_3_0_1_),
			*(EIF_REFERENCE *)(loc6 + _REFACS_1_), loc3);
		tb3 = tb3;
		tb2 = (EIF_BOOLEAN) !tb3;
	}
	if (!(tb2)) {
		tb2 = '\01';
		if (!(EIF_BOOLEAN) !(FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R16564[dtype-1871])(Current)) {
			tb2 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_INTEGER_32)) R19715[dtype-1972])(Current, arg1);
		}
		tb1 = tb2;
	}
	if (tb1) {
		F1912_22507(Current);
	}
	if ((EIF_BOOLEAN) !loc5) {
		tr1 = *(EIF_REFERENCE *)(RTCV(F1956_23756(Current)) + _REFACS_15_);
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			tr1 = F251_11714(RTCV(F1956_23756(Current)));
			{
				EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,1475,0xFF01,0,0,0xFF01,1564,0xFFFF};
				EIF_TYPE typres0;
				{
					EIF_TYPE l_type;
					l_type = eif_final_id(Y15892,Y15892_gen_type,dftype,1695);
					typarr0[5] = l_type.annotations | 0xFF00;
					typarr0[6] = l_type.id;
				}
				
				typres0 = eif_compound_id(dftype, typarr0);
				tr2 = RTLNTS(typres0.id, 3, 0);
			}
			tr3 = F1696_18976(Current);
			((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
			RTAR(tr2,tr3);
			((EIF_TYPED_VALUE *)tr2+2)->it_r = loc1;
			RTAR(tr2,loc1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3112[Dtype(RTCW(tr1))-975])(tr1, tr2);
		}
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O11065[dtype-412]) != NULL)) {
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R11064[dtype-1871])(Current);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,1475,0xFF01,1564,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr2 = RTLNTS(typres0.id, 2, 0);
			}
			((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
			RTAR(tr2,loc1);
			F977_14409(RTCW(tr1), tr2);
		}
	}
	RTLE;
}

/* {EV_WIDGET_IMP}.on_mouse_wheel */
void F1970_24111 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	RTCFDT;
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLIU(4);
	
	RTGC;
	if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R16563[dtype-1871])(Current)) {
		tr1 = *(EIF_REFERENCE *)(RTCV(F1956_23756(Current)) + _REFACS_47_);
		if ((EIF_BOOLEAN)(tr1 == NULL)) {
			loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg1 / ((EIF_INTEGER_32) 120L));
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN)(arg1 != ((EIF_INTEGER_32) 0L)))) {
				tr1 = RTLNS(eif_new_type(1508, 0x00).id, 1508, _OBJSIZ_0_0_0_1_0_0_0_0_);
				*(EIF_INTEGER_32 *)tr1 = arg1;
				loc2 = F1507_6147(RTCW(tr1));
			}
			tr1 = *(EIF_REFERENCE *)(RTCV(F1956_23756(Current)) + _REFACS_13_);
			if ((EIF_BOOLEAN)(tr1 != NULL)) {
				tr1 = F251_11710(RTCV(F1956_23756(Current)));
				{
					EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,1475,0xFF01,0,0,1508,0xFFFF};
					EIF_TYPE typres0;
					{
						EIF_TYPE l_type;
						l_type = eif_final_id(Y15892,Y15892_gen_type,dftype,1695);
						typarr0[5] = l_type.annotations | 0xFF00;
						typarr0[6] = l_type.id;
					}
					
					typres0 = eif_compound_id(dftype, typarr0);
					tr2 = RTLNTS(typres0.id, 3, 0);
				}
				tr3 = F1696_18976(Current);
				((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
				RTAR(tr2,tr3);
				((EIF_TYPED_VALUE *)tr2+2)->it_i4 = loc2;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3112[Dtype(RTCW(tr1))-975])(tr1, tr2);
				loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			}
			if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O11059[dtype-412]) != NULL)) {
				tr1 = F413_13372(Current);
				{
					static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,1475,1508,0xFFFF};
					EIF_TYPE typres0;
					static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
					
					typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
					tr2 = RTLNTS(typres0.id, 2, 1);
				}
				((EIF_TYPED_VALUE *)tr2+1)->it_i4 = loc2;
				F977_14409(RTCW(tr1), tr2);
				loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			}
		} else {
			loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
		if (loc1) {
			tp1 = (EIF_POINTER) (LRESULT)((((EIF_INTEGER_32) 0L)));
			F214_11244(Current, tp1);
			F1912_22507(Current);
		}
	}
	RTLE;
}

/* {EV_WIDGET_IMP}.on_set_focus */
void F1970_24113 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLIU(5);
	
	RTGC;
	loc1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R19565[dtype-1958])(Current);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc1 != NULL) && (EIF_BOOLEAN)(loc1 != Current))) {
		tr1 = RTOUCR(241,F1970_24037, (Current));
		F489_1934(RTCW(tr1), Current);
		tr1 = *(EIF_REFERENCE *)(RTCV(F1956_23756(Current)) + _REFACS_17_);
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			tr1 = F251_11718(RTCV(F1956_23756(Current)));
			{
				EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,1475,0xFF01,0,0,0xFFFF};
				EIF_TYPE typres0;
				{
					EIF_TYPE l_type;
					l_type = eif_final_id(Y15892,Y15892_gen_type,Dftype(Current),1695);
					typarr0[5] = l_type.annotations | 0xFF00;
					typarr0[6] = l_type.id;
				}
				
				typres0 = eif_compound_id(Dftype(Current), typarr0);
				tr2 = RTLNTS(typres0.id, 2, 0);
			}
			tr3 = F1696_18976(Current);
			((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
			RTAR(tr2,tr3);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3112[Dtype(RTCW(tr1))-975])(tr1, tr2);
		}
		F1982_24475(RTCW(loc1), *(EIF_POINTER *)(Current + O12527[dtype-1295]));
		tr1 = F1956_23756(Current);
		F1910_22399(RTCW(tr1), loc1);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O11069[dtype-412]) != NULL)) {
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R11068[dtype-1871])(Current);
			F977_14409(RTCW(tr1), NULL);
		}
	}
	if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R16564[dtype-1871])(Current)) {
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R19726[dtype-1972])(Current);
	}
	RTLE;
}

/* {EV_WIDGET_IMP}.on_kill_focus */
void F1970_24114 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLIU(5);
	
	RTGC;
	loc1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R19565[dtype-1958])(Current);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc1 == NULL) || (EIF_BOOLEAN)(Current != loc1))) {
		tr1 = *(EIF_REFERENCE *)(RTCV(F1956_23756(Current)) + _REFACS_18_);
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			tr1 = F251_11720(RTCV(F1956_23756(Current)));
			{
				EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,1475,0xFF01,0,0,0xFFFF};
				EIF_TYPE typres0;
				{
					EIF_TYPE l_type;
					l_type = eif_final_id(Y15892,Y15892_gen_type,Dftype(Current),1695);
					typarr0[5] = l_type.annotations | 0xFF00;
					typarr0[6] = l_type.id;
				}
				
				typres0 = eif_compound_id(Dftype(Current), typarr0);
				tr2 = RTLNTS(typres0.id, 2, 0);
			}
			tr3 = F1696_18976(Current);
			((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
			RTAR(tr2,tr3);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3112[Dtype(RTCW(tr1))-975])(tr1, tr2);
		}
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O11071[dtype-412]) != NULL)) {
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R11070[dtype-1871])(Current);
			F977_14409(RTCW(tr1), NULL);
		}
	}
	RTLE;
}

/* {EV_WIDGET_IMP}.on_desactivate */
void F1970_24115 (EIF_REFERENCE Current)
{
	GTCX
	
	
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R19724[Dtype(Current)-1972])(Current);
}

/* {EV_WIDGET_IMP}.update_current_push_button */
void F1970_24116 (EIF_REFERENCE Current)
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

/* {EV_WIDGET_IMP}.on_set_cursor */
void F1970_24118 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(RTCV(F1956_23756(Current)) + _REFACS_47_);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		F1912_22507(Current);
	} else {
		if ((EIF_BOOLEAN) (((EIF_BOOLEAN) ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 0L)) || (EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 1L)))) && (EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O10105[Dtype(Current)-300]) != NULL))) {
			F1970_24119(Current);
			tp1 = (EIF_POINTER) (LRESULT)((((EIF_INTEGER_32) 1L)));
			F214_11244(Current, tp1);
			F1912_22507(Current);
		}
	}
	RTLE;
}

/* {EV_WIDGET_IMP}.internal_on_set_cursor */
void F1970_24119 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,loc3);
	RTLR(3,loc1);
	RTLR(4,loc4);
	RTLR(5,tr1);
	RTLIU(6);
	
	RTGC;
	loc2 = *(EIF_REFERENCE *)(Current + O10105[dtype-300]);
	RTCT0("l_cursor_pixmap /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	loc3 = *(EIF_REFERENCE *)(RTCW(loc2) + _REFACS_1_);
	loc3 = RTRV(eif_new_type(1705, 0x00), loc3);
	RTCT0("cursor_imp /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc3 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	loc1 = *(EIF_REFERENCE *)(RTCW(loc3) + _REFACS_1_);
	F519_14211(RTCW(loc1));
	tr1 = *(EIF_REFERENCE *)(Current + O10103[dtype-300]);
	loc4 = tr1;
	if (EIF_TEST(loc4)) {
		F519_14210(loc4);
		*(EIF_REFERENCE *)(Current + O10103[dtype-300]) = (EIF_REFERENCE) NULL;
	}
	RTAR(Current, loc1);
	*(EIF_REFERENCE *)(Current + O10103[dtype-300]) = (EIF_REFERENCE) loc1;
	F1850_20952(RTCW(loc1));
	RTLE;
}

/* {EV_WIDGET_IMP}.on_size */
void F1970_24130 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	
	
	F1970_24131(Current, arg2, arg3);
}

/* {EV_WIDGET_IMP}.trigger_resize_actions */
void F1970_24131 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O11074[dtype-412]);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,4,1475,1508,1508,1508,1508,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			tr1 = RTLNTS(typres0.id, 5, 1);
		}
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16398[dtype-1730])(Current);
		((EIF_TYPED_VALUE *)tr1+1)->it_i4 = ti4_1;
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16399[dtype-1730])(Current);
		((EIF_TYPED_VALUE *)tr1+2)->it_i4 = ti4_1;
		((EIF_TYPED_VALUE *)tr1+3)->it_i4 = arg1;
		((EIF_TYPED_VALUE *)tr1+4)->it_i4 = arg2;
		F977_14409(loc1, tr1);
	}
	RTLE;
}

/* {EV_WIDGET_IMP}.wel_background_color */
EIF_REFERENCE F1970_24145 (EIF_REFERENCE Current)
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
	tr1 = *(EIF_REFERENCE *)(Current + O19682[Dtype(Current)-1969]);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		RTLE;
		return (EIF_REFERENCE) loc1;
	} else {
		tr1 = RTLNS(eif_new_type(1828, 0x01).id, 1828, _OBJSIZ_0_0_0_1_0_0_0_0_);
		F1829_20490(RTCW(tr1), ((EIF_INTEGER_32) 15L));
		RTLE;
		return (EIF_REFERENCE) tr1;
	}/* NOTREACHED */
	
}

/* {EV_WIDGET_IMP}.wel_foreground_color */
EIF_REFERENCE F1970_24146 (EIF_REFERENCE Current)
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
	tr1 = *(EIF_REFERENCE *)(Current + O19683[Dtype(Current)-1969]);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		RTLE;
		return (EIF_REFERENCE) loc1;
	} else {
		tr1 = RTLNS(eif_new_type(1828, 0x01).id, 1828, _OBJSIZ_0_0_0_1_0_0_0_0_);
		F1829_20489(RTCW(tr1), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L));
		RTLE;
		return (EIF_REFERENCE) tr1;
	}/* NOTREACHED */
	
}

/* {EV_WIDGET_IMP}.next_dlgtabitem */
EIF_POINTER F1970_24147 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_BOOLEAN arg3)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLIU(3);
	
	RTGC;
	tr1 = RTOUCR(251,F1970_24148, (Current));
	F490_1934(RTCW(tr1), ((EIF_INTEGER_32) -1L));
	if ((EIF_BOOLEAN) !arg3) {
		tr1 = F1696_18976(Current);
		loc1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32, EIF_BOOLEAN)) R19758[dtype-1972])(Current, tr1, ((EIF_INTEGER_32) 0L), (EIF_BOOLEAN) 0);
	} else {
		tr1 = F1696_18976(Current);
		loc1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32, EIF_BOOLEAN)) R19758[dtype-1972])(Current, tr1, ((EIF_INTEGER_32) 1L), (EIF_BOOLEAN) 1);
	}
	tp1 = *(EIF_POINTER *)(RTCW(loc1) + O12527[Dtype(loc1)-1295]);
	RTLE;
	return (EIF_POINTER) tp1;
}

/* {EV_WIDGET_IMP}.start_widget_searched_cell */
static EIF_REFERENCE F1970_24148_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(251)

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEV;
	RTGC;
	RTOTP;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,489,1508,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0.id, 489, _OBJSIZ_0_0_0_1_0_0_0_0_);
	}
	F490_1934(RTCW(tr1), ((EIF_INTEGER_32) 0L));
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1970_24148 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(251,F1970_24148_body,(Current));
}

/* {EV_WIDGET_IMP}.next_tabstop_widget */
EIF_REFERENCE F1970_24149 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_BOOLEAN arg3)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,loc2);
	RTLR(3,tr1);
	RTLR(4,loc1);
	RTLIU(5);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O15892[Dtype(Current)-1695]) != arg1)) {
		if (F1970_24152(Current)) {
			loc2 = (EIF_REFERENCE) Current;
		}
	} else {
		tr1 = RTOUCR(251,F1970_24148, (Current));
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1) + O1718[Dtype(tr1)-488]);
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L))) {
			loc1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_3_);
			loc1 = RTRV(eif_new_type(1969, 0x00), loc1);
			loc2 = (EIF_REFERENCE) loc1;
		} else {
			tr1 = RTOUCR(251,F1970_24148, (Current));
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1) + O1718[Dtype(tr1)-488]);
			if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) -1L))) {
				tr1 = RTOUCR(251,F1970_24148, (Current));
				F490_1934(RTCW(tr1), ((EIF_INTEGER_32) 1L));
			}
		}
	}
	if ((EIF_BOOLEAN)(loc2 == NULL)) {
		loc2 = F1970_24151(Current, arg1, arg2, arg3);
	}
	RTLE;
	return (EIF_REFERENCE) loc2;
}

/* {EV_WIDGET_IMP}.return_current_if_next_tabstop_widget */
EIF_REFERENCE F1970_24150 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_BOOLEAN arg3)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLIU(4);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O15892[Dtype(Current)-1695]) != arg1)) {
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg3 && (EIF_BOOLEAN)(arg2 == ((EIF_INTEGER_32) 1L))) || (EIF_BOOLEAN) ((EIF_BOOLEAN) !arg3 && (EIF_BOOLEAN)(arg2 == ((EIF_INTEGER_32) 0L))))) {
			if (F1970_24152(Current)) {
				RTLE;
				return (EIF_REFERENCE) Current;
			}
		}
	} else {
		tr1 = RTOUCR(251,F1970_24148, (Current));
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1) + O1718[Dtype(tr1)-488]);
		if ((EIF_BOOLEAN)(ti4_1 == arg2)) {
			loc1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_3_);
			loc1 = RTRV(eif_new_type(1969, 0x00), loc1);
			RTLE;
			return (EIF_REFERENCE) loc1;
		} else {
			tr1 = RTOUCR(251,F1970_24148, (Current));
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1) + O1718[Dtype(tr1)-488]);
			if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) -1L))) {
				tr1 = RTOUCR(251,F1970_24148, (Current));
				F490_1934(RTCW(tr1), arg2);
			}
		}
	}
	RTLE;
	return (EIF_REFERENCE) 0;
}

/* {EV_WIDGET_IMP}.next_tabstop_widget_from_parent */
EIF_REFERENCE F1970_24151 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_BOOLEAN arg3)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc3);
	RTLR(1,Current);
	RTLR(2,loc4);
	RTLR(3,arg1);
	RTLIU(4);
	
	RTGC;
	loc3 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R16312[Dtype(Current)-1972])(Current);
	if ((EIF_BOOLEAN)(loc3 != NULL)) {
		loc1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_REFERENCE)) R19792[Dtype(RTCW(loc3))-1972])(loc3, Current);
		if (arg3) {
			loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L));
		} else {
			loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L));
		}
		loc4 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32, EIF_BOOLEAN)) R19758[Dtype(RTCW(loc3))-1972])(loc3, arg1, loc2, arg3);
	} else {
		loc4 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_3_);
		loc4 = RTRV(eif_new_type(1969, 0x00), loc4);
		RTCT0("l_result /= Void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc4 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
	}
	RTLE;
	return (EIF_REFERENCE) loc4;
}

/* {EV_WIDGET_IMP}.has_tabstop */
EIF_BOOLEAN F1970_24152 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	Result = '\0';
	tb1 = '\0';
	ti4_1 = F1912_22496(Current);
	if (F1258_14781(Current, ti4_1, ((EIF_INTEGER_32) 65536L))) {
		tb1 = F1912_22467(Current);
	}
	if (tb1) {
		Result = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R16563[Dtype(Current)-1871])(Current);
	}
	RTLE;
	return Result;
}

/* {EV_WIDGET_IMP}.is_shown_by_default */
EIF_BOOLEAN F1970_24154 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
}

/* {EV_WIDGET_IMP}.on_wm_dropfiles */
void F1970_24157 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	RTCFDT;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,loc3);
	RTLR(2,loc6);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,tr3);
	RTLIU(6);
	
	RTGC;
	{
		/* INLINED CODE (ANY.default_pointer) */
		tp1 = (EIF_POINTER)  0;
		/* END INLINED CODE */
	}
	tp2 = tp1;
	loc1 = inline_F67_9751(arg1, ((EIF_INTEGER_32) -1L), tp2, ((EIF_INTEGER_32) 0L));
	if ((EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 0L))) {
		loc5 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		loc4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 255L);
		loc3 = RTLNS(eif_new_type(944, 0x01).id, 944, _OBJSIZ_1_0_0_1_0_0_0_0_);
		F944_3739(RTCW(loc3), loc4);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,950,0xFF01,1564,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			loc6 = RTLNS(typres0.id, 950, _OBJSIZ_1_1_0_1_0_0_0_0_);
		}
		F951_4073(RTCW(loc6), loc1);
		for (;;) {
			if ((EIF_BOOLEAN)(loc5 == loc1)) break;
			tp1 = F944_3745(RTCW(loc3));
			loc2 = inline_F67_9751(arg1, loc5, tp1, loc4);
			tr1 = F944_3744(RTCW(loc3), ((EIF_INTEGER_32) 1L), loc2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2222[Dtype(RTCW(loc6))-818])(loc6, tr1);
			loc5++;
		}
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O11046[Dtype(Current)-412]) != NULL)) {
			tr1 = F413_13359(Current);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,1475,0xFF01,950,0xFF01,1564,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr2 = RTLNTS(typres0.id, 2, 0);
			}
			((EIF_TYPED_VALUE *)tr2+1)->it_r = loc6;
			RTAR(tr2,loc6);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3112[Dtype(RTCW(tr1))-975])(tr1, tr2);
		}
		tr1 = *(EIF_REFERENCE *)(RTCV(F1956_23756(Current)) + _REFACS_7_);
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			tr1 = F251_11697(RTCV(F1956_23756(Current)));
			{
				EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,1475,0xFF01,0,0,0xFF01,950,0xFF01,1564,0xFFFF};
				EIF_TYPE typres0;
				{
					EIF_TYPE l_type;
					l_type = eif_final_id(Y15892,Y15892_gen_type,dftype,1695);
					typarr0[5] = l_type.annotations | 0xFF00;
					typarr0[6] = l_type.id;
				}
				
				typres0 = eif_compound_id(dftype, typarr0);
				tr2 = RTLNTS(typres0.id, 3, 0);
			}
			tr3 = F1696_18976(Current);
			((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
			RTAR(tr2,tr3);
			((EIF_TYPED_VALUE *)tr2+2)->it_r = loc6;
			RTAR(tr2,loc6);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3112[Dtype(RTCW(tr1))-975])(tr1, tr2);
		}
	}
	RTLE;
}

/* {EV_WIDGET_IMP}.convert_from_wel_constant */
EIF_INTEGER_32 F1970_24158 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	RTGC;
	switch (arg1) {
		case 7L:
			Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			break;
		case 8L:
			Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
			break;
		case 1L:
			Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
			break;
		case 0L:
			Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
			break;
		case 3L:
			Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 5L);
			break;
		case 2L:
			Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 6L);
			break;
		case 4L:
			Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 7L);
			break;
		case 5L:
			Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 8L);
			break;
		case 6L:
			Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 9L);
			break;
		default:
			break;
	}
	return Result;
}

/* {EV_WIDGET_IMP}.show_window */
void F1970_24159 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	ShowWindow(((HWND) arg1), ((int) arg2));
}

void EIF_Minit1953 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
