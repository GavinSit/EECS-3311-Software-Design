/*
 * Code for class WEL_TREE_VIEW
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1914.h"
#include <windows.h>
#include "cctrl.h"
#include <cctrl.h>
#include "commctrl.h"

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
#ifndef INLINE_F67_9746
static EIF_POINTER inline_F67_9746 (EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3, EIF_POINTER arg4)
{
	return (EIF_POINTER) (SendMessage ((HWND) arg1, (UINT) arg2, (WPARAM) arg3, (LPARAM) arg4))
	;
}
#define INLINE_F67_9746
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_TREE_VIEW}.make */
void F1931_23058 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_INTEGER_32 arg5, EIF_INTEGER_32 arg6)
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

/* {WEL_TREE_VIEW}.indent */
EIF_INTEGER_32 F1931_23063 (EIF_REFERENCE Current)
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
	Result = inline_F67_9747(tp1, ((EIF_INTEGER_32) 4358L), tp2, tp3);
	RTLE;
	return Result;
}

/* {WEL_TREE_VIEW}.is_selected */
EIF_BOOLEAN F1931_23064 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTGC;
	loc1 = RTLNS(eif_new_type(1409, 0x01).id, 1409, _OBJSIZ_1_1_0_0_0_1_0_0_);
	F1410_17386(RTCW(loc1));
	tp1 = F1410_17390(RTCW(arg1));
	F1410_17401(RTCW(loc1), tp1);
	F1410_17398(RTCW(loc1), ((EIF_INTEGER_32) 8L));
	F1410_17408(RTCW(loc1), ((EIF_INTEGER_32) 2L));
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	tp2 = (EIF_POINTER) (WPARAM)((((EIF_INTEGER_32) 0L)));
	tp3 = *(EIF_POINTER *)(RTCW(loc1) + O12527[Dtype(loc1)-1295]);
	inline_F67_9749(tp1, ((EIF_INTEGER_32) 4414L), tp2, tp3);
	ti4_1 = F1410_17391(RTCW(loc1));
	Result = F1258_14781(Current, ti4_1, ((EIF_INTEGER_32) 2L));
	RTLE;
	return Result;
}

/* {WEL_TREE_VIEW}.is_parent */
EIF_BOOLEAN F1931_23069 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTGC;
	loc1 = RTLNS(eif_new_type(1409, 0x01).id, 1409, _OBJSIZ_1_1_0_0_0_1_0_0_);
	F1410_17386(RTCW(loc1));
	tp1 = F1410_17390(RTCW(arg1));
	F1410_17401(RTCW(loc1), tp1);
	F1410_17398(RTCW(loc1), ((EIF_INTEGER_32) 64L));
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	tp2 = (EIF_POINTER) (WPARAM)((((EIF_INTEGER_32) 0L)));
	tp3 = *(EIF_POINTER *)(RTCW(loc1) + O12527[Dtype(loc1)-1295]);
	inline_F67_9749(tp1, ((EIF_INTEGER_32) 4414L), tp2, tp3);
	ti4_1 = F1410_17392(RTCW(loc1));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L));
	RTLE;
	return Result;
}

/* {WEL_TREE_VIEW}.has_item */
EIF_BOOLEAN F1931_23070 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTGC;
	loc1 = RTLNS(eif_new_type(1409, 0x01).id, 1409, _OBJSIZ_1_1_0_0_0_1_0_0_);
	F1410_17386(RTCW(loc1));
	tp1 = F1410_17390(RTCW(arg1));
	F1410_17401(RTCW(loc1), tp1);
	F1410_17398(RTCW(loc1), ((EIF_INTEGER_32) 16L));
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	tp2 = (EIF_POINTER) (WPARAM)((((EIF_INTEGER_32) 0L)));
	tp3 = *(EIF_POINTER *)(RTCW(loc1) + O12527[Dtype(loc1)-1295]);
	tp1 = inline_F67_9746(tp1, ((EIF_INTEGER_32) 4414L), tp2, tp3);
	{
		/* INLINED CODE (ANY.default_pointer) */
		tp2 = (EIF_POINTER)  0;
		/* END INLINED CODE */
	}
	tp3 = tp2;
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tp1 != tp3);
	RTLE;
	return Result;
}

/* {WEL_TREE_VIEW}.selected */
EIF_BOOLEAN F1931_23071 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	tp2 = (EIF_POINTER) (WPARAM)((((EIF_INTEGER_32) 9L)));
	tp3 = (EIF_POINTER) (LPARAM)((((EIF_INTEGER_32) 0L)));
	tp1 = inline_F67_9746(tp1, ((EIF_INTEGER_32) 4362L), tp2, tp3);
	{
		/* INLINED CODE (ANY.default_pointer) */
		tp2 = (EIF_POINTER)  0;
		/* END INLINED CODE */
	}
	tp3 = tp2;
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tp1 != tp3);
	RTLE;
	return Result;
}

/* {WEL_TREE_VIEW}.get_tooltip */
EIF_REFERENCE F1931_23076 (EIF_REFERENCE Current)
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
	loc1 = (EIF_POINTER) TreeView_GetToolTips(((HWND) tp1));
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

/* {WEL_TREE_VIEW}.select_item */
void F1931_23079 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	tp2 = (EIF_POINTER) (WPARAM)((((EIF_INTEGER_32) 9L)));
	tp3 = F1410_17390(RTCW(arg1));
	inline_F67_9749(tp1, ((EIF_INTEGER_32) 4363L), tp2, tp3);
	RTLE;
}

/* {WEL_TREE_VIEW}.deselect_item */
void F1931_23080 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	tp2 = (EIF_POINTER) (WPARAM)((((EIF_INTEGER_32) 9L)));
	tp3 = (EIF_POINTER) (LPARAM)((((EIF_INTEGER_32) 0L)));
	inline_F67_9749(tp1, ((EIF_INTEGER_32) 4363L), tp2, tp3);
	RTLE;
}

/* {WEL_TREE_VIEW}.set_image_list */
void F1931_23086 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
		tp2 = (EIF_POINTER) (WPARAM)((((EIF_INTEGER_32) 0L)));
		tp3 = *(EIF_POINTER *)(RTCW(arg1) + O12527[Dtype(arg1)-1295]);
		inline_F67_9749(tp1, ((EIF_INTEGER_32) 4361L), tp2, tp3);
	} else {
		tp1 = *(EIF_POINTER *)(Current + O12527[dtype-1295]);
		tp2 = (EIF_POINTER) (WPARAM)((((EIF_INTEGER_32) 0L)));
		tp3 = (EIF_POINTER) (LPARAM)((((EIF_INTEGER_32) 0L)));
		inline_F67_9749(tp1, ((EIF_INTEGER_32) 4361L), tp2, tp3);
	}
	RTLE;
}

/* {WEL_TREE_VIEW}.set_background_color */
void F1931_23088 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	inline_F67_9749(tp1, ((EIF_INTEGER_32) 4381L), tp2, tp3);
	RTLE;
}

/* {WEL_TREE_VIEW}.set_text_color */
void F1931_23089 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	inline_F67_9749(tp1, ((EIF_INTEGER_32) 4382L), tp2, tp3);
	RTLE;
}

/* {WEL_TREE_VIEW}.insert_item */
void F1931_23090 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLIU(4);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current + O12527[dtype-1295]);
	tp2 = (EIF_POINTER) (WPARAM)((((EIF_INTEGER_32) 0L)));
	tp3 = *(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_1_1_0_0_0_0_);
	tp1 = inline_F67_9746(tp1, ((EIF_INTEGER_32) 4402L), tp2, tp3);
	*(EIF_POINTER *)(Current + O19158[dtype-1930]) = (EIF_POINTER) tp1;
	tr1 = F1357_16195(RTCW(arg1));
	F1410_17401(RTCW(tr1), *(EIF_POINTER *)(Current + O19158[dtype-1930]));
	loc1 = *(EIF_REFERENCE *)(RTCW(arg1));
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		F1410_17401(RTCW(loc1), *(EIF_POINTER *)(Current + O19158[dtype-1930]));
	} else {
	}
	RTLE;
}

/* {WEL_TREE_VIEW}.delete_item */
void F1931_23091 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
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
	tp3 = F1410_17390(RTCW(arg1));
	loc1 = inline_F67_9746(tp1, ((EIF_INTEGER_32) 4353L), tp2, tp3);
	RTLE;
}

/* {WEL_TREE_VIEW}.set_tree_item */
void F1931_23093 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	inline_F67_9749(tp1, ((EIF_INTEGER_32) 4415L), tp2, tp3);
	RTLE;
}

/* {WEL_TREE_VIEW}.on_tvn_begindrag */
void F1931_23094 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_TREE_VIEW}.on_tvn_beginlabeledit */
void F1931_23095 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_TREE_VIEW}.on_tvn_beginrdrag */
void F1931_23096 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_TREE_VIEW}.on_tvn_deleteitem */
void F1931_23097 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_TREE_VIEW}.on_tvn_endlabeledit */
void F1931_23098 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_TREE_VIEW}.on_tvn_getdispinfo */
void F1931_23099 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_TREE_VIEW}.on_tvn_itemexpanded */
void F1931_23100 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_TREE_VIEW}.on_tvn_itemexpanding */
void F1931_23101 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_TREE_VIEW}.on_tvn_keydown */
void F1931_23102 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_TREE_VIEW}.on_tvn_selchanged */
void F1931_23103 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_TREE_VIEW}.on_tvn_selchanging */
void F1931_23104 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_TREE_VIEW}.on_tvn_setdispinfo */
void F1931_23105 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_TREE_VIEW}.process_notification_info */
void F1931_23106 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	if ((EIF_BOOLEAN)(loc4 == ((EIF_INTEGER_32) -456L))) {
		loc1 = RTLNS(eif_new_type(1358, 0x01).id, 1358, _OBJSIZ_0_1_0_0_0_1_0_0_);
		F1359_16223(RTCW(loc1), arg1);
		{
			/* INLINED CODE (WEL_TREE_VIEW.on_tvn_begindrag) */
			/* END INLINED CODE */
		}
		;
	} else {
		if ((EIF_BOOLEAN)(loc4 == ((EIF_INTEGER_32) -459L))) {
			loc2 = RTLNS(eif_new_type(1343, 0x01).id, 1343, _OBJSIZ_0_1_0_0_0_1_0_0_);
			F1344_15943(RTCW(loc2), arg1);
			tr1 = F1344_15945(RTCW(loc2));
			{
				/* INLINED CODE (WEL_TREE_VIEW.on_tvn_beginlabeledit) */
				/* END INLINED CODE */
			}
			;
		} else {
			if ((EIF_BOOLEAN)(loc4 == ((EIF_INTEGER_32) -457L))) {
				loc1 = RTLNS(eif_new_type(1358, 0x01).id, 1358, _OBJSIZ_0_1_0_0_0_1_0_0_);
				F1359_16223(RTCW(loc1), arg1);
				{
					/* INLINED CODE (WEL_TREE_VIEW.on_tvn_beginrdrag) */
					/* END INLINED CODE */
				}
				;
			} else {
				if ((EIF_BOOLEAN)(loc4 == ((EIF_INTEGER_32) -458L))) {
					loc1 = RTLNS(eif_new_type(1358, 0x01).id, 1358, _OBJSIZ_0_1_0_0_0_1_0_0_);
					F1359_16223(RTCW(loc1), arg1);
					{
						/* INLINED CODE (WEL_TREE_VIEW.on_tvn_deleteitem) */
						/* END INLINED CODE */
					}
					;
				} else {
					if ((EIF_BOOLEAN)(loc4 == ((EIF_INTEGER_32) -460L))) {
						loc2 = RTLNS(eif_new_type(1343, 0x01).id, 1343, _OBJSIZ_0_1_0_0_0_1_0_0_);
						F1344_15943(RTCW(loc2), arg1);
						tr1 = F1344_15945(RTCW(loc2));
						{
							/* INLINED CODE (WEL_TREE_VIEW.on_tvn_endlabeledit) */
							/* END INLINED CODE */
						}
						;
					} else {
						if ((EIF_BOOLEAN)(loc4 == ((EIF_INTEGER_32) -452L))) {
							loc2 = RTLNS(eif_new_type(1343, 0x01).id, 1343, _OBJSIZ_0_1_0_0_0_1_0_0_);
							F1344_15943(RTCW(loc2), arg1);
							tr1 = F1344_15945(RTCW(loc2));
							{
								/* INLINED CODE (WEL_TREE_VIEW.on_tvn_getdispinfo) */
								/* END INLINED CODE */
							}
							;
						} else {
							if ((EIF_BOOLEAN)(loc4 == ((EIF_INTEGER_32) -455L))) {
								loc1 = RTLNS(eif_new_type(1358, 0x01).id, 1358, _OBJSIZ_0_1_0_0_0_1_0_0_);
								F1359_16223(RTCW(loc1), arg1);
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R19199[dtype-1930])(Current, loc1);
							} else {
								if ((EIF_BOOLEAN)(loc4 == ((EIF_INTEGER_32) -454L))) {
									loc1 = RTLNS(eif_new_type(1358, 0x01).id, 1358, _OBJSIZ_0_1_0_0_0_1_0_0_);
									F1359_16223(RTCW(loc1), arg1);
									{
										/* INLINED CODE (WEL_TREE_VIEW.on_tvn_itemexpanding) */
										/* END INLINED CODE */
									}
									;
								} else {
									if ((EIF_BOOLEAN)(loc4 == ((EIF_INTEGER_32) -412L))) {
										loc3 = RTLNS(eif_new_type(1342, 0x01).id, 1342, _OBJSIZ_0_1_0_0_0_1_0_0_);
										F1343_15936(RTCW(loc3), arg1);
										ti4_1 = F1343_15938(RTCW(loc3));
										{
											/* INLINED CODE (WEL_TREE_VIEW.on_tvn_keydown) */
											/* END INLINED CODE */
										}
										;
									} else {
										if ((EIF_BOOLEAN)(loc4 == ((EIF_INTEGER_32) -451L))) {
											loc1 = RTLNS(eif_new_type(1358, 0x01).id, 1358, _OBJSIZ_0_1_0_0_0_1_0_0_);
											F1359_16223(RTCW(loc1), arg1);
											(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R19202[dtype-1930])(Current, loc1);
										} else {
											if ((EIF_BOOLEAN)(loc4 == ((EIF_INTEGER_32) -450L))) {
												loc1 = RTLNS(eif_new_type(1358, 0x01).id, 1358, _OBJSIZ_0_1_0_0_0_1_0_0_);
												F1359_16223(RTCW(loc1), arg1);
												(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R19203[dtype-1930])(Current, loc1);
											} else {
												if ((EIF_BOOLEAN)(loc4 == ((EIF_INTEGER_32) -453L))) {
													loc2 = RTLNS(eif_new_type(1343, 0x01).id, 1343, _OBJSIZ_0_1_0_0_0_1_0_0_);
													F1344_15943(RTCW(loc2), arg1);
													tr1 = F1344_15945(RTCW(loc2));
													{
														/* INLINED CODE (WEL_TREE_VIEW.on_tvn_setdispinfo) */
														/* END INLINED CODE */
													}
													;
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	RTLE;
}

/* {WEL_TREE_VIEW}.get_item_with_data */
EIF_REFERENCE F1931_23107 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Result);
	RTLR(2,loc1);
	RTLR(3,Current);
	RTLIU(4);
	
	RTGC;
	Result = (EIF_REFERENCE) arg1;
	F1410_17398(RTCW(Result), (EIF_INTEGER_32) ((EIF_INTEGER_32) (((EIF_INTEGER_32) 1L) + ((EIF_INTEGER_32) 8L)) + ((EIF_INTEGER_32) 4L)));
	loc1 = RTLNS(eif_new_type(1564, 0x01).id, 1564, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F1564_6847(RTCW(loc1), ((EIF_INTEGER_32) 30L));
	F1565_6917(RTCW(loc1));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R14693[Dtype(RTCW(Result))-1409])(Result, loc1);
	F1410_17407(RTCW(Result), ((EIF_INTEGER_32) 30L));
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	tp2 = (EIF_POINTER) (WPARAM)((((EIF_INTEGER_32) 0L)));
	tp3 = *(EIF_POINTER *)(RTCW(arg1) + O12527[Dtype(arg1)-1295]);
	inline_F67_9749(tp1, ((EIF_INTEGER_32) 4414L), tp2, tp3);
	RTLE;
	return Result;
}

/* {WEL_TREE_VIEW}.class_name */
static EIF_REFERENCE F1931_23108_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(479)

	RTLI(1);
	RTLR(0,tr1);
	RTLIU(1);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(eif_new_type(944, 0x01).id, 944, _OBJSIZ_1_0_0_1_0_0_0_0_);
	tp1 = (EIF_POINTER) WC_TREEVIEW;
	F945_14351(RTCW(tr1), tp1);
	Result = F944_3743(RTCW(tr1));
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1931_23108 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(479,F1931_23108_body,(Current));
}

/* {WEL_TREE_VIEW}.default_style */
static EIF_INTEGER_32 F1931_23109_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 480)

	
	RTEV;
	RTOTP;
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (((EIF_INTEGER_32) 268435456L) + ((EIF_INTEGER_32) 1073741824L)) + ((EIF_INTEGER_32) 131072L)) + ((EIF_INTEGER_32) 65536L)) + ((EIF_INTEGER_32) 8388608L)) + ((EIF_INTEGER_32) 2L)) + ((EIF_INTEGER_32) 1L)) + ((EIF_INTEGER_32) 4L));
	RTOTE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F1931_23109 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,480,F1931_23109_body,(Current));
}

/* {WEL_TREE_VIEW}.cwin_wc_treeview */
EIF_POINTER F1931_23111 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = (EIF_POINTER) WC_TREEVIEW;
	return Result;
}

/* {WEL_TREE_VIEW}.treeview_gettooltips */
EIF_POINTER F1931_23112 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = (EIF_POINTER) TreeView_GetToolTips(((HWND) arg1));
	return Result;
}

/* {WEL_TREE_VIEW}.cwin_index_to_state_image_mask */
EIF_INTEGER_32 F1931_23114 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) INDEXTOSTATEIMAGEMASK(((UINT) arg1));
	return Result;
}

void EIF_Minit1914 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
