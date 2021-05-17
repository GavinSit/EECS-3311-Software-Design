/*
 * Code for class WEL_RICH_EDIT
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1932.h"
#include <windows.h>
#include "redit.h"
#include "eif_misc.h"

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

/* {WEL_RICH_EDIT}.selection_start */
EIF_INTEGER_32 F1949_23399 (EIF_REFERENCE Current)
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
	loc1 = RTOUCR(344,F1949_23459, (Current));
	F1406_17189(RTCW(loc1), Current);
	ti4_1 = F1406_17186(RTCW(loc1));
	RTLE;
	return (EIF_INTEGER_32) ti4_1;
}

/* {WEL_RICH_EDIT}.selection_end */
EIF_INTEGER_32 F1949_23400 (EIF_REFERENCE Current)
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
	loc1 = RTOUCR(344,F1949_23459, (Current));
	F1406_17189(RTCW(loc1), Current);
	ti4_1 = F1406_17187(RTCW(loc1));
	RTLE;
	return (EIF_INTEGER_32) ti4_1;
}

/* {WEL_RICH_EDIT}.has_selection */
EIF_BOOLEAN F1949_23403 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	loc1 = RTOUCR(344,F1949_23459, (Current));
	F1406_17189(RTCW(loc1), Current);
	ti4_1 = F1406_17186(RTCW(loc1));
	ti4_2 = F1406_17187(RTCW(loc1));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 != ti4_2);
	RTLE;
	return Result;
}

/* {WEL_RICH_EDIT}.text_substring */
EIF_REFERENCE F1949_23413 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLIU(3);
	
	RTGC;
	loc2 = RTLNS(eif_new_type(1371, 0x01).id, 1371, _OBJSIZ_2_1_0_0_0_1_0_0_);
	F1372_16501(RTCW(loc2), (EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L)), ((EIF_INTEGER_32) 0L), arg1);
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	tp2 = (EIF_POINTER) (WPARAM)((((EIF_INTEGER_32) 0L)));
	tp3 = *(EIF_POINTER *)(RTCW(loc2)+ _PTROFF_2_1_0_0_0_0_);
	loc1 = inline_F67_9747(tp1, ((EIF_INTEGER_32) 1099L), tp2, tp3);
	Result = *(EIF_REFERENCE *)(RTCW(loc2) + _REFACS_1_);
	F945_14367(RTCW(Result), loc1);
	RTLE;
	return Result;
}

/* {WEL_RICH_EDIT}.set_selection */
void F1949_23416 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	loc1 = RTLNS(eif_new_type(1405, 0x01).id, 1405, _OBJSIZ_0_1_0_0_0_1_0_0_);
	F1406_17183(RTCW(loc1), arg1, arg2);
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	tp2 = (EIF_POINTER) (WPARAM)((((EIF_INTEGER_32) 0L)));
	tp3 = *(EIF_POINTER *)(RTCW(loc1)+ _PTROFF_0_1_0_0_0_0_);
	inline_F67_9749(tp1, ((EIF_INTEGER_32) 1079L), tp2, tp3);
	RTLE;
}

/* {WEL_RICH_EDIT}.set_caret_position */
void F1949_23417 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	loc1 = RTLNS(eif_new_type(1405, 0x01).id, 1405, _OBJSIZ_0_1_0_0_0_1_0_0_);
	F1406_17183(RTCW(loc1), arg1, arg1);
	tp1 = *(EIF_POINTER *)(Current + O12527[dtype-1295]);
	tp2 = (EIF_POINTER) (WPARAM)((((EIF_INTEGER_32) 0L)));
	tp3 = *(EIF_POINTER *)(RTCW(loc1)+ _PTROFF_0_1_0_0_0_0_);
	inline_F67_9749(tp1, ((EIF_INTEGER_32) 1079L), tp2, tp3);
	if (*(EIF_BOOLEAN *)(Current + O19396[dtype-1946])) {
		F1949_23418(Current);
	}
	RTLE;
}

/* {WEL_RICH_EDIT}.move_to_selection */
void F1949_23418 (EIF_REFERENCE Current)
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
	inline_F67_9749(tp1, ((EIF_INTEGER_32) 183L), tp2, tp3);
	RTLE;
}

/* {WEL_RICH_EDIT}.set_tab_stops_array */
void F1949_23420 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTGC;
	loc1 = RTLNS(eif_new_type(1410, 0x01).id, 1410, _OBJSIZ_0_1_0_0_0_1_0_0_);
	F1411_17431(RTCW(loc1));
	F1411_17448(RTCW(loc1), arg1);
	F1949_23450(Current, loc1);
	RTLE;
}

/* {WEL_RICH_EDIT}.set_event_mask */
void F1949_23423 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	inline_F67_9749(tp1, ((EIF_INTEGER_32) 1093L), tp2, tp3);
	RTLE;
}

/* {WEL_RICH_EDIT}.set_options */
void F1949_23424 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
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
	tp3 = (EIF_POINTER) (LPARAM)((arg2));
	inline_F67_9749(tp1, ((EIF_INTEGER_32) 1101L), tp2, tp3);
	RTLE;
}

/* {WEL_RICH_EDIT}.set_background_color */
void F1949_23427 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	inline_F67_9749(tp1, ((EIF_INTEGER_32) 1091L), tp2, tp3);
	RTLE;
}

/* {WEL_RICH_EDIT}.enable_all_notifications */
void F1949_23430 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	ti4_1 = eif_bit_or(((EIF_INTEGER_32) 1L),((EIF_INTEGER_32) 2L));
	ti4_1 = eif_bit_or(ti4_1,((EIF_INTEGER_32) 4L));
	ti4_1 = eif_bit_or(ti4_1,((EIF_INTEGER_32) 65536L));
	ti4_1 = eif_bit_or(ti4_1,((EIF_INTEGER_32) 131072L));
	ti4_1 = eif_bit_or(ti4_1,((EIF_INTEGER_32) 262144L));
	ti4_1 = eif_bit_or(ti4_1,((EIF_INTEGER_32) 524288L));
	ti4_1 = eif_bit_or(ti4_1,((EIF_INTEGER_32) 1048576L));
	ti4_1 = eif_bit_or(ti4_1,((EIF_INTEGER_32) 2097152L));
	ti4_1 = eif_bit_or(ti4_1,((EIF_INTEGER_32) 4194304L));
	ti4_1 = eif_bit_or(ti4_1,((EIF_INTEGER_32) 8388608L));
	F1949_23423(Current, ti4_1);
	RTLE;
}

/* {WEL_RICH_EDIT}.text_stream_in */
void F1949_23436 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	ti4_1 = eif_bit_or(((EIF_INTEGER_32) 1L),((EIF_INTEGER_32) 16L));
	F1949_23442(Current, ti4_1, arg1);
	RTLE;
}

/* {WEL_RICH_EDIT}.rtf_stream_out */
void F1949_23439 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	F1949_23443(Current, ((EIF_INTEGER_32) 2L), arg1);
}

/* {WEL_RICH_EDIT}.insert_rtf_stream_in */
void F1949_23441 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	F1949_23442(Current, (EIF_INTEGER_32) (((EIF_INTEGER_32) 2L) + ((EIF_INTEGER_32) 32768L)), arg1);
}

/* {WEL_RICH_EDIT}.send_stream_in_message */
void F1949_23442 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg2);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	{
		/* INLINED CODE (WEL_RICH_EDIT_STREAM.init_action) */
		/* END INLINED CODE */
	}
	;
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	tp2 = (EIF_POINTER) (WPARAM)((arg1));
	tp3 = *(EIF_POINTER *)(RTCW(arg2) + O12527[Dtype(arg2)-1295]);
	inline_F67_9749(tp1, ((EIF_INTEGER_32) 1097L), tp2, tp3);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R14831[Dtype(RTCW(arg2))-1414])(arg2);
	RTLE;
}

/* {WEL_RICH_EDIT}.send_stream_out_message */
void F1949_23443 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg2);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	{
		/* INLINED CODE (WEL_RICH_EDIT_STREAM.init_action) */
		/* END INLINED CODE */
	}
	;
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	tp2 = (EIF_POINTER) (WPARAM)((arg1));
	tp3 = *(EIF_POINTER *)(RTCW(arg2)+ _PTROFF_2_2_0_1_0_0_);
	inline_F67_9749(tp1, ((EIF_INTEGER_32) 1098L), tp2, tp3);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R14831[Dtype(RTCW(arg2))-1414])(arg2);
	RTLE;
}

/* {WEL_RICH_EDIT}.set_paragraph_format */
void F1949_23450 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	tp3 = *(EIF_POINTER *)(RTCW(arg1) + O12527[Dtype(arg1)-1295]);
	inline_F67_9749(tp1, ((EIF_INTEGER_32) 1095L), tp2, tp3);
	RTLE;
}

/* {WEL_RICH_EDIT}.on_en_msgfilter */
void F1949_23453 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_RICH_EDIT}.class_name */
static EIF_REFERENCE F1949_23456_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(345)

	RTLI(1);
	RTLR(0,tr1);
	RTLIU(1);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(eif_new_type(944, 0x01).id, 944, _OBJSIZ_1_0_0_1_0_0_0_0_);
	tp1 = (EIF_POINTER) RICHEDIT_CLASS;
	F945_14351(RTCW(tr1), tp1);
	Result = F944_3743(RTCW(tr1));
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1949_23456 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(345,F1949_23456_body,(Current));
}

/* {WEL_RICH_EDIT}.default_style */
static EIF_INTEGER_32 F1949_23457_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 346)

	
	RTEV;
	RTOTP;
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (((EIF_INTEGER_32) 268435456L) + ((EIF_INTEGER_32) 1073741824L)) + ((EIF_INTEGER_32) 8388608L)) + ((EIF_INTEGER_32) 1048576L)) + ((EIF_INTEGER_32) 2097152L)) + ((EIF_INTEGER_32) 32768L)) + ((EIF_INTEGER_32) 8192L)) + ((EIF_INTEGER_32) 4L));
	RTOTE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F1949_23457 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,346,F1949_23457_body,(Current));
}

/* {WEL_RICH_EDIT}.process_notification_info */
void F1949_23458 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTGC;
	ti4_1 = F1903_22268(RTCW(arg1));
	if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1792L))) {
		loc1 = RTLNS(eif_new_type(1372, 0x01).id, 1372, _OBJSIZ_0_1_0_0_0_1_0_0_);
		F1373_16508(RTCW(loc1), arg1);
		{
			/* INLINED CODE (WEL_RICH_EDIT.on_en_msgfilter) */
			/* END INLINED CODE */
		}
		;
	}
	RTLE;
}

/* {WEL_RICH_EDIT}.internal_selection */
static EIF_REFERENCE F1949_23459_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(344)

	RTLI(1);
	RTLR(0,tr1);
	RTLIU(1);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(eif_new_type(1405, 0x01).id, 1405, _OBJSIZ_0_1_0_0_0_1_0_0_);
	F1406_17184(RTCW(tr1));
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1949_23459 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(344,F1949_23459_body,(Current));
}

/* {WEL_RICH_EDIT}.class_name_pointer */
EIF_POINTER F1949_23460 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = (EIF_POINTER) RICHEDIT_CLASS;
	return Result;
}

void EIF_Minit1932 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
