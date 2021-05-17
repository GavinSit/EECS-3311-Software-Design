/*
 * Code for class WEL_LIST_VIEW
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1919.h"
#include <windows.h>
#include "cctrl.h"
#include "eif_helpers.h"

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

/* {WEL_LIST_VIEW}.make */
void F1936_23157 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_INTEGER_32 arg5, EIF_INTEGER_32 arg6)
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
	*(EIF_INTEGER_32 *)(Current + O19238[dtype-1935]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTLE;
}

/* {WEL_LIST_VIEW}.visible_count */
EIF_INTEGER_32 F1936_23160 (EIF_REFERENCE Current)
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
	Result = inline_F67_9747(tp1, ((EIF_INTEGER_32) 4136L), tp2, tp3);
	RTLE;
	return Result;
}

/* {WEL_LIST_VIEW}.selected_count */
EIF_INTEGER_32 F1936_23161 (EIF_REFERENCE Current)
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
	Result = inline_F67_9747(tp1, ((EIF_INTEGER_32) 4146L), tp2, tp3);
	RTLE;
	return Result;
}

/* {WEL_LIST_VIEW}.top_index */
EIF_INTEGER_32 F1936_23162 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	tp2 = (EIF_POINTER) (WPARAM)((((EIF_INTEGER_32) 0L)));
	tp3 = (EIF_POINTER) (LPARAM)((((EIF_INTEGER_32) 0L)));
	ti4_1 = inline_F67_9747(tp1, ((EIF_INTEGER_32) 4135L), tp2, tp3);
	Result = eif_max_int32 (ti4_1,((EIF_INTEGER_32) 0L));
	RTLE;
	return Result;
}

/* {WEL_LIST_VIEW}.selected_items */
EIF_REFERENCE F1936_23164 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTGC;
	if ((EIF_BOOLEAN) (F1936_23161(Current) > ((EIF_INTEGER_32) 0L))) {
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,924,1508,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			Result = RTLNS(typres0.id, 924, _OBJSIZ_1_1_0_2_0_0_0_0_);
		}
		ti4_1 = F1936_23161(Current);
		F925_3186(RTCW(Result), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L)));
		loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		tp1 = *(EIF_POINTER *)(Current + O12527[dtype-1295]);
		tp2 = (EIF_POINTER) (WPARAM)((((EIF_INTEGER_32) -1L)));
		tp3 = (EIF_POINTER) (LPARAM)((((EIF_INTEGER_32) 2L)));
		loc1 = inline_F67_9747(tp1, ((EIF_INTEGER_32) 4108L), tp2, tp3);
		for (;;) {
			if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) -1L))) break;
			F925_3210(RTCW(Result), loc1, loc2);
			tp1 = *(EIF_POINTER *)(Current + O12527[dtype-1295]);
			tp2 = (EIF_POINTER) (WPARAM)((loc1));
			tp3 = (EIF_POINTER) (LPARAM)((((EIF_INTEGER_32) 2L)));
			ti4_1 = inline_F67_9747(tp1, ((EIF_INTEGER_32) 4108L), tp2, tp3);
			loc1 = (EIF_INTEGER_32) ti4_1;
			loc2++;
		}
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,924,1508,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			Result = RTLNS(typres0.id, 924, _OBJSIZ_1_1_0_2_0_0_0_0_);
		}
		F925_3185(RTCW(Result));
		RTLE;
		return (EIF_REFERENCE) Result;
	}
	RTLE;
	return Result;
}

/* {WEL_LIST_VIEW}.get_background_color */
EIF_REFERENCE F1936_23166 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	tp2 = (EIF_POINTER) (WPARAM)((((EIF_INTEGER_32) 0L)));
	tp3 = (EIF_POINTER) (LPARAM)((((EIF_INTEGER_32) 0L)));
	loc1 = inline_F67_9747(tp1, ((EIF_INTEGER_32) 4096L), tp2, tp3);
	tr1 = RTLNS(eif_new_type(1828, 0x01).id, 1828, _OBJSIZ_0_0_0_1_0_0_0_0_);
	F1829_20491(RTCW(tr1), loc1);
	RTLE;
	return (EIF_REFERENCE) tr1;
}

/* {WEL_LIST_VIEW}.get_column_width */
EIF_INTEGER_32 F1936_23169 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	tp2 = (EIF_POINTER) (WPARAM)((arg1));
	tp3 = (EIF_POINTER) (LPARAM)((((EIF_INTEGER_32) 0L)));
	Result = inline_F67_9747(tp1, ((EIF_INTEGER_32) 4125L), tp2, tp3);
	RTLE;
	return Result;
}

/* {WEL_LIST_VIEW}.get_item_state */
EIF_INTEGER_32 F1936_23170 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
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
	tp2 = (EIF_POINTER) (WPARAM)((arg1));
	tp3 = (EIF_POINTER) (LPARAM)((arg2));
	Result = inline_F67_9747(tp1, ((EIF_INTEGER_32) 4140L), tp2, tp3);
	RTLE;
	return Result;
}

/* {WEL_LIST_VIEW}.get_item_position */
EIF_REFERENCE F1936_23171 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Result);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	Result = RTLNS(eif_new_type(1905, 0x01).id, 1905, _OBJSIZ_0_1_0_0_0_1_0_0_);
	F1906_22334(RTCW(Result), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L));
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	tp2 = (EIF_POINTER) (WPARAM)((arg1));
	tp3 = *(EIF_POINTER *)(RTCW(Result)+ _PTROFF_0_1_0_0_0_0_);
	inline_F67_9749(tp1, ((EIF_INTEGER_32) 4112L), tp2, tp3);
	RTLE;
	return Result;
}

/* {WEL_LIST_VIEW}.get_item_rect */
EIF_REFERENCE F1936_23172 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Result);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	Result = RTLNS(eif_new_type(1407, 0x01).id, 1407, _OBJSIZ_0_1_0_0_0_1_0_0_);
	F1408_17321(RTCW(Result), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L));
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	tp2 = (EIF_POINTER) (WPARAM)((arg1));
	tp3 = *(EIF_POINTER *)(RTCW(Result)+ _PTROFF_0_1_0_0_0_0_);
	inline_F67_9749(tp1, ((EIF_INTEGER_32) 4110L), tp2, tp3);
	RTLE;
	return Result;
}

/* {WEL_LIST_VIEW}.get_item */
EIF_REFERENCE F1936_23174 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Result);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLIU(3);
	
	RTGC;
	Result = RTLNS(eif_new_type(1359, 0x01).id, 1359, _OBJSIZ_1_1_0_0_0_1_0_0_);
	F1360_16236(RTCW(Result));
	F1360_16245(RTCW(Result), (EIF_INTEGER_32) ((EIF_INTEGER_32) (((EIF_INTEGER_32) 8L) + ((EIF_INTEGER_32) 2L)) + ((EIF_INTEGER_32) 4L)));
	F1360_16247(RTCW(Result), arg1);
	F1360_16248(RTCW(Result), arg2);
	F1360_16257(RTCW(Result), (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (((EIF_INTEGER_32) 4L) + ((EIF_INTEGER_32) 8L)) + ((EIF_INTEGER_32) 1L)) + ((EIF_INTEGER_32) 2L)));
	tp1 = *(EIF_POINTER *)(Current + O12527[dtype-1295]);
	tp2 = (EIF_POINTER) (WPARAM)((((EIF_INTEGER_32) 0L)));
	tp3 = *(EIF_POINTER *)(RTCW(Result)+ _PTROFF_1_1_0_0_0_0_);
	inline_F67_9749(tp1, ((EIF_INTEGER_32) 4171L), tp2, tp3);
	loc1 = RTLNS(eif_new_type(944, 0x01).id, 944, _OBJSIZ_1_0_0_1_0_0_0_0_);
	F944_3739(RTCW(loc1), ((EIF_INTEGER_32) 32L));
	F1360_16252(RTCW(Result), loc1);
	tp1 = *(EIF_POINTER *)(Current + O12527[dtype-1295]);
	tp2 = (EIF_POINTER) (WPARAM)((arg1));
	tp3 = *(EIF_POINTER *)(RTCW(Result)+ _PTROFF_1_1_0_0_0_0_);
	loc2 = inline_F67_9747(tp1, ((EIF_INTEGER_32) 4211L), tp2, tp3);
	if ((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 32L))) {
		loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 32L);
		for (;;) {
			if ((EIF_BOOLEAN) (loc2 < loc3)) break;
			loc3 *= ((EIF_INTEGER_32) 2L);
			F945_14367(RTCW(loc1), loc3);
			F1360_16252(RTCW(Result), loc1);
			tp1 = *(EIF_POINTER *)(Current + O12527[dtype-1295]);
			tp2 = (EIF_POINTER) (WPARAM)((arg1));
			tp3 = *(EIF_POINTER *)(RTCW(Result)+ _PTROFF_1_1_0_0_0_0_);
			loc2 = inline_F67_9747(tp1, ((EIF_INTEGER_32) 4211L), tp2, tp3);
		}
	}
	RTLE;
	return Result;
}

/* {WEL_LIST_VIEW}.get_extended_view_style */
EIF_INTEGER_32 F1936_23175 (EIF_REFERENCE Current)
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
	Result = inline_F67_9747(tp1, ((EIF_INTEGER_32) 4151L), tp2, tp3);
	RTLE;
	return Result;
}

/* {WEL_LIST_VIEW}.get_tooltip */
EIF_REFERENCE F1936_23176 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	loc1 = (EIF_POINTER) ListView_GetToolTips(((HWND) tp1));
	{
		/* INLINED CODE (ANY.default_pointer) */
		tp1 = (EIF_POINTER)  0;
		/* END INLINED CODE */
	}
	if ((EIF_BOOLEAN)(loc1 != tp1)) {
		tr1 = RTLNS(eif_new_type(1926, 0x01).id, 1926, _OBJSIZ_5_2_0_3_0_2_0_0_);
		F1296_15096(RTCW(tr1), loc1);
		RTLE;
		return (EIF_REFERENCE) tr1;
	}
	RTLE;
	return (EIF_REFERENCE) 0;
}

/* {WEL_LIST_VIEW}.set_extended_view_style */
void F1936_23178 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	tp2 = (EIF_POINTER) (WPARAM)((((EIF_INTEGER_32) 0L)));
	tp3 = (EIF_POINTER) (LPARAM)((arg1));
	inline_F67_9749(tp1, ((EIF_INTEGER_32) 4150L), tp2, tp3);
	RTLE;
}

/* {WEL_LIST_VIEW}.set_column_width */
void F1936_23179 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
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
	tp2 = (EIF_POINTER) (WPARAM)((arg2));
	tp3 = (EIF_POINTER) (LPARAM)((arg1));
	inline_F67_9749(tp1, ((EIF_INTEGER_32) 4126L), tp2, tp3);
	RTLE;
}

/* {WEL_LIST_VIEW}.set_small_image_list */
void F1936_23187 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		tp1 = *(EIF_POINTER *)(Current + O12527[dtype-1295]);
		tp2 = (EIF_POINTER) (WPARAM)((((EIF_INTEGER_32) 1L)));
		tp3 = *(EIF_POINTER *)(RTCW(arg1) + O12527[Dtype(arg1)-1295]);
		inline_F67_9749(tp1, ((EIF_INTEGER_32) 4099L), tp2, tp3);
	} else {
		tp1 = *(EIF_POINTER *)(Current + O12527[dtype-1295]);
		tp2 = (EIF_POINTER) (WPARAM)((((EIF_INTEGER_32) 1L)));
		tp3 = (EIF_POINTER) (LPARAM)((((EIF_INTEGER_32) 0L)));
		inline_F67_9749(tp1, ((EIF_INTEGER_32) 4099L), tp2, tp3);
	}
	RTLE;
}

/* {WEL_LIST_VIEW}.set_background_color */
void F1936_23188 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	tp2 = (EIF_POINTER) (WPARAM)((((EIF_INTEGER_32) 0L)));
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O17154[Dtype(arg1)-1828]);
	tp3 = (EIF_POINTER) (LPARAM)((ti4_1));
	inline_F67_9749(tp1, ((EIF_INTEGER_32) 4097L), tp2, tp3);
	RTLE;
}

/* {WEL_LIST_VIEW}.set_text_background_color */
void F1936_23189 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	tp2 = (EIF_POINTER) (WPARAM)((((EIF_INTEGER_32) 0L)));
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O17154[Dtype(arg1)-1828]);
	tp3 = (EIF_POINTER) (LPARAM)((ti4_1));
	inline_F67_9749(tp1, ((EIF_INTEGER_32) 4134L), tp2, tp3);
	RTLE;
}

/* {WEL_LIST_VIEW}.set_text_foreground_color */
void F1936_23190 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	tp2 = (EIF_POINTER) (WPARAM)((((EIF_INTEGER_32) 0L)));
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O17154[Dtype(arg1)-1828]);
	tp3 = (EIF_POINTER) (LPARAM)((ti4_1));
	inline_F67_9749(tp1, ((EIF_INTEGER_32) 4132L), tp2, tp3);
	RTLE;
}

/* {WEL_LIST_VIEW}.append_column */
void F1936_23191 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current + O12527[dtype-1295]);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + O19238[dtype-1935]);
	tp2 = (EIF_POINTER) (WPARAM)((ti4_1));
	tp3 = *(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_1_1_0_0_0_0_);
	inline_F67_9749(tp1, ((EIF_INTEGER_32) 4193L), tp2, tp3);
	(*(EIF_INTEGER_32 *)(Current + O19238[dtype-1935]))++;
	RTLE;
}

/* {WEL_LIST_VIEW}.insert_column */
void F1936_23192 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current + O12527[dtype-1295]);
	tp2 = (EIF_POINTER) (WPARAM)((arg2));
	tp3 = *(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_1_1_0_0_0_0_);
	inline_F67_9749(tp1, ((EIF_INTEGER_32) 4193L), tp2, tp3);
	(*(EIF_INTEGER_32 *)(Current + O19238[dtype-1935]))++;
	RTLE;
}

/* {WEL_LIST_VIEW}.insert_item */
void F1936_23195 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	tp2 = (EIF_POINTER) (WPARAM)((((EIF_INTEGER_32) 0L)));
	tp3 = *(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_1_1_0_0_0_0_);
	inline_F67_9749(tp1, ((EIF_INTEGER_32) 4173L), tp2, tp3);
	RTLE;
}

/* {WEL_LIST_VIEW}.replace_item */
void F1936_23196 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	tp2 = (EIF_POINTER) (WPARAM)((((EIF_INTEGER_32) 0L)));
	tp3 = *(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_1_1_0_0_0_0_);
	inline_F67_9749(tp1, ((EIF_INTEGER_32) 4172L), tp2, tp3);
	RTLE;
}

/* {WEL_LIST_VIEW}.delete_item */
void F1936_23197 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	inline_F67_9749(tp1, ((EIF_INTEGER_32) 4104L), tp2, tp3);
	RTLE;
}

/* {WEL_LIST_VIEW}.reset_content */
void F1936_23198 (EIF_REFERENCE Current)
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
	tp2 = (EIF_POINTER) (WPARAM)((((EIF_INTEGER_32) 0L)));
	tp3 = (EIF_POINTER) (LPARAM)((((EIF_INTEGER_32) 0L)));
	inline_F67_9749(tp1, ((EIF_INTEGER_32) 4105L), tp2, tp3);
	RTLE;
}

/* {WEL_LIST_VIEW}.on_lvn_begindrag */
void F1936_23200 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_LIST_VIEW}.on_lvn_beginlabeledit */
void F1936_23201 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_LIST_VIEW}.on_lvn_beginrdrag */
void F1936_23202 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_LIST_VIEW}.on_lvn_columnclick */
void F1936_23203 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_LIST_VIEW}.on_lvn_deleteallitems */
void F1936_23204 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_LIST_VIEW}.on_lvn_deleteitem */
void F1936_23205 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_LIST_VIEW}.on_lvn_endlabeledit */
void F1936_23206 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_LIST_VIEW}.on_lvn_getdispinfo */
void F1936_23207 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_LIST_VIEW}.on_lvn_insertitem */
void F1936_23208 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_LIST_VIEW}.on_lvn_itemchanged */
void F1936_23209 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_LIST_VIEW}.on_lvn_itemchanging */
void F1936_23210 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_LIST_VIEW}.on_lvn_keydown */
void F1936_23211 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_LIST_VIEW}.on_lvn_setdispinfo */
void F1936_23212 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_LIST_VIEW}.process_notification_info */
void F1936_23213 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,loc2);
	RTLR(4,tr1);
	RTLR(5,loc3);
	RTLIU(6);
	
	RTGC;
	loc4 = F1903_22268(RTCW(arg1));
	switch (loc4) {
		case -109L:
			loc1 = RTLNS(eif_new_type(1361, 0x01).id, 1361, _OBJSIZ_0_1_0_0_0_1_0_0_);
			F1362_16315(RTCW(loc1), arg1);
			{
				/* INLINED CODE (WEL_LIST_VIEW.on_lvn_begindrag) */
				/* END INLINED CODE */
			}
			;
			break;
		case -175L:
			loc2 = RTLNS(eif_new_type(1346, 0x01).id, 1346, _OBJSIZ_0_1_0_0_0_1_0_0_);
			F1347_15987(RTCW(loc2), arg1);
			tr1 = F1347_15989(RTCW(loc2));
			{
				/* INLINED CODE (WEL_LIST_VIEW.on_lvn_beginlabeledit) */
				/* END INLINED CODE */
			}
			;
			break;
		case -111L:
			loc1 = RTLNS(eif_new_type(1361, 0x01).id, 1361, _OBJSIZ_0_1_0_0_0_1_0_0_);
			F1362_16315(RTCW(loc1), arg1);
			{
				/* INLINED CODE (WEL_LIST_VIEW.on_lvn_beginrdrag) */
				/* END INLINED CODE */
			}
			;
			break;
		case -108L:
			loc1 = RTLNS(eif_new_type(1361, 0x01).id, 1361, _OBJSIZ_0_1_0_0_0_1_0_0_);
			F1362_16315(RTCW(loc1), arg1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R19283[dtype-1935])(Current, loc1);
			break;
		case -104L:
			loc1 = RTLNS(eif_new_type(1361, 0x01).id, 1361, _OBJSIZ_0_1_0_0_0_1_0_0_);
			F1362_16315(RTCW(loc1), arg1);
			{
				/* INLINED CODE (WEL_LIST_VIEW.on_lvn_deleteallitems) */
				/* END INLINED CODE */
			}
			;
			break;
		case -103L:
			loc1 = RTLNS(eif_new_type(1361, 0x01).id, 1361, _OBJSIZ_0_1_0_0_0_1_0_0_);
			F1362_16315(RTCW(loc1), arg1);
			{
				/* INLINED CODE (WEL_LIST_VIEW.on_lvn_deleteitem) */
				/* END INLINED CODE */
			}
			;
			break;
		case -176L:
			loc2 = RTLNS(eif_new_type(1346, 0x01).id, 1346, _OBJSIZ_0_1_0_0_0_1_0_0_);
			F1347_15987(RTCW(loc2), arg1);
			tr1 = F1347_15989(RTCW(loc2));
			{
				/* INLINED CODE (WEL_LIST_VIEW.on_lvn_endlabeledit) */
				/* END INLINED CODE */
			}
			;
			break;
		case -177L:
			loc2 = RTLNS(eif_new_type(1346, 0x01).id, 1346, _OBJSIZ_0_1_0_0_0_1_0_0_);
			F1347_15987(RTCW(loc2), arg1);
			tr1 = F1347_15989(RTCW(loc2));
			{
				/* INLINED CODE (WEL_LIST_VIEW.on_lvn_getdispinfo) */
				/* END INLINED CODE */
			}
			;
			break;
		case -102L:
			loc1 = RTLNS(eif_new_type(1361, 0x01).id, 1361, _OBJSIZ_0_1_0_0_0_1_0_0_);
			F1362_16315(RTCW(loc1), arg1);
			{
				/* INLINED CODE (WEL_LIST_VIEW.on_lvn_insertitem) */
				/* END INLINED CODE */
			}
			;
			break;
		case -101L:
			loc1 = RTLNS(eif_new_type(1361, 0x01).id, 1361, _OBJSIZ_0_1_0_0_0_1_0_0_);
			F1362_16315(RTCW(loc1), arg1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R19289[dtype-1935])(Current, loc1);
			break;
		case -100L:
			loc1 = RTLNS(eif_new_type(1361, 0x01).id, 1361, _OBJSIZ_0_1_0_0_0_1_0_0_);
			F1362_16315(RTCW(loc1), arg1);
			{
				/* INLINED CODE (WEL_LIST_VIEW.on_lvn_itemchanging) */
				/* END INLINED CODE */
			}
			;
			break;
		case -155L:
			loc3 = RTLNS(eif_new_type(1345, 0x01).id, 1345, _OBJSIZ_0_1_0_0_0_1_0_0_);
			F1346_15980(RTCW(loc3), arg1);
			ti4_1 = F1346_15982(RTCW(loc3));
			{
				/* INLINED CODE (WEL_LIST_VIEW.on_lvn_keydown) */
				/* END INLINED CODE */
			}
			;
			break;
		case -178L:
			loc2 = RTLNS(eif_new_type(1346, 0x01).id, 1346, _OBJSIZ_0_1_0_0_0_1_0_0_);
			F1347_15987(RTCW(loc2), arg1);
			tr1 = F1347_15989(RTCW(loc2));
			{
				/* INLINED CODE (WEL_LIST_VIEW.on_lvn_setdispinfo) */
				/* END INLINED CODE */
			}
			;
			break;
		case -157L:
			break;
	}
	RTLE;
}

/* {WEL_LIST_VIEW}.class_name */
static EIF_REFERENCE F1936_23214_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(472)

	RTLI(1);
	RTLR(0,tr1);
	RTLIU(1);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(eif_new_type(944, 0x01).id, 944, _OBJSIZ_1_0_0_1_0_0_0_0_);
	tp1 = (EIF_POINTER) WC_LISTVIEW;
	F945_14351(RTCW(tr1), tp1);
	Result = F944_3743(RTCW(tr1));
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1936_23214 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(472,F1936_23214_body,(Current));
}

/* {WEL_LIST_VIEW}.default_style */
static EIF_INTEGER_32 F1936_23215_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 473)

	
	RTEV;
	RTOTP;
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (((EIF_INTEGER_32) 268435456L) + ((EIF_INTEGER_32) 1073741824L)) + ((EIF_INTEGER_32) 131072L)) + ((EIF_INTEGER_32) 65536L)) + ((EIF_INTEGER_32) 8388608L)) + ((EIF_INTEGER_32) 33554432L)) + ((EIF_INTEGER_32) 1L)) + ((EIF_INTEGER_32) 8L));
	RTOTE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F1936_23215 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,473,F1936_23215_body,(Current));
}

/* {WEL_LIST_VIEW}.cwin_wc_listview */
EIF_POINTER F1936_23217 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = (EIF_POINTER) WC_LISTVIEW;
	return Result;
}

/* {WEL_LIST_VIEW}.listview_gettooltips */
EIF_POINTER F1936_23218 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = (EIF_POINTER) ListView_GetToolTips(((HWND) arg1));
	return Result;
}

void EIF_Minit1919 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
