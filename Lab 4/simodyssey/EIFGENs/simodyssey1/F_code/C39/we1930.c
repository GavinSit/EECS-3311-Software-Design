/*
 * Code for class WEL_EDIT
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1930.h"
#include <windows.h>

#ifdef __cplusplus
extern "C" {
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

/* {WEL_EDIT}.background_color */
EIF_REFERENCE F1947_23345 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(1);
	RTLR(0,tr1);
	RTLIU(1);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(1828, 0x01).id, 1828, _OBJSIZ_0_0_0_1_0_0_0_0_);
	F1829_20490(RTCW(tr1), ((EIF_INTEGER_32) 5L));
	RTLE;
	return (EIF_REFERENCE) tr1;
}

/* {WEL_EDIT}.read_only */
EIF_BOOLEAN F1947_23346 (EIF_REFERENCE Current)
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
	Result = F1258_14781(Current, ti4_1, ((EIF_INTEGER_32) 2048L));
	RTLE;
	return Result;
}

/* {WEL_EDIT}.delete_selection */
void F1947_23351 (EIF_REFERENCE Current)
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
	inline_F67_9749(tp1, ((EIF_INTEGER_32) 771L), tp2, tp3);
	RTLE;
}

/* {WEL_EDIT}.set_read_only */
void F1947_23356 (EIF_REFERENCE Current)
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
	tp2 = (EIF_POINTER) (WPARAM)((((EIF_INTEGER_32) 1L)));
	tp3 = (EIF_POINTER) (LPARAM)((((EIF_INTEGER_32) 0L)));
	inline_F67_9749(tp1, ((EIF_INTEGER_32) 207L), tp2, tp3);
	RTLE;
}

/* {WEL_EDIT}.set_read_write */
void F1947_23357 (EIF_REFERENCE Current)
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
	inline_F67_9749(tp1, ((EIF_INTEGER_32) 207L), tp2, tp3);
	RTLE;
}

/* {WEL_EDIT}.set_text_limit */
void F1947_23358 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	inline_F67_9749(tp1, ((EIF_INTEGER_32) 197L), tp2, tp3);
	RTLE;
}

/* {WEL_EDIT}.set_selection */
void F1947_23360 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
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
	tp1 = *(EIF_POINTER *)(Current + O12527[dtype-1295]);
	tp2 = (EIF_POINTER) (WPARAM)((arg1));
	tp3 = (EIF_POINTER) (LPARAM)((arg2));
	inline_F67_9749(tp1, ((EIF_INTEGER_32) 177L), tp2, tp3);
	if (*(EIF_BOOLEAN *)(Current + O19396[dtype-1946])) {
		tp1 = *(EIF_POINTER *)(Current + O12527[dtype-1295]);
		tp2 = (EIF_POINTER) (WPARAM)((((EIF_INTEGER_32) 0L)));
		tp3 = (EIF_POINTER) (LPARAM)((((EIF_INTEGER_32) 0L)));
		inline_F67_9749(tp1, ((EIF_INTEGER_32) 183L), tp2, tp3);
	}
	RTLE;
}

/* {WEL_EDIT}.set_caret_position */
void F1947_23361 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	tp1 = *(EIF_POINTER *)(Current + O12527[dtype-1295]);
	tp2 = (EIF_POINTER) (WPARAM)((arg1));
	tp3 = (EIF_POINTER) (LPARAM)((arg1));
	inline_F67_9749(tp1, ((EIF_INTEGER_32) 177L), tp2, tp3);
	if (*(EIF_BOOLEAN *)(Current + O19396[dtype-1946])) {
		tp1 = *(EIF_POINTER *)(Current + O12527[dtype-1295]);
		tp2 = (EIF_POINTER) (WPARAM)((((EIF_INTEGER_32) 0L)));
		tp3 = (EIF_POINTER) (LPARAM)((((EIF_INTEGER_32) 0L)));
		inline_F67_9749(tp1, ((EIF_INTEGER_32) 183L), tp2, tp3);
	}
	RTLE;
}

/* {WEL_EDIT}.enable_scroll_caret_at_selection */
void F1947_23362 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_BOOLEAN *)(Current + O19396[Dtype(Current)-1946]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
}

/* {WEL_EDIT}.has_selection */
EIF_BOOLEAN F1947_23365 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	inline_F67_9749(tp1, ((EIF_INTEGER_32) 176L), (EIF_INTEGER_32 *) &(loc1), (EIF_INTEGER_32 *) &(loc2));
	RTLE;
	return (EIF_BOOLEAN) (EIF_BOOLEAN)(loc2 != loc1);
}

/* {WEL_EDIT}.selection_start */
EIF_INTEGER_32 F1947_23366 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	tp2 = (EIF_POINTER) (LPARAM)((((EIF_INTEGER_32) 0L)));
	inline_F67_9749(tp1, ((EIF_INTEGER_32) 176L), (EIF_INTEGER_32 *) &(Result), tp2);
	RTLE;
	return Result;
}

/* {WEL_EDIT}.selection_end */
EIF_INTEGER_32 F1947_23367 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	tp2 = (EIF_POINTER) (WPARAM)((((EIF_INTEGER_32) 0L)));
	inline_F67_9749(tp1, ((EIF_INTEGER_32) 176L), tp2, (EIF_INTEGER_32 *) &(Result));
	RTLE;
	return Result;
}

/* {WEL_EDIT}.on_en_change */
void F1947_23372 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_EDIT}.on_en_vscroll */
void F1947_23373 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_EDIT}.on_en_hscroll */
void F1947_23374 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_EDIT}.on_en_errspace */
void F1947_23375 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_EDIT}.on_en_setfocus */
void F1947_23376 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_EDIT}.on_en_killfocus */
void F1947_23377 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_EDIT}.on_en_update */
void F1947_23378 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_EDIT}.on_en_maxtext */
void F1947_23379 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_EDIT}.process_notification */
void F1947_23381 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 768L))) {
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R19397[Dtype(Current)-1947])(Current);
	} else {
		if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 1538L))) {
			{
				/* INLINED CODE (WEL_EDIT.on_en_vscroll) */
				/* END INLINED CODE */
			}
			;
		} else {
			if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 1537L))) {
				{
					/* INLINED CODE (WEL_EDIT.on_en_hscroll) */
					/* END INLINED CODE */
				}
				;
			} else {
				if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 1280L))) {
					{
						/* INLINED CODE (WEL_EDIT.on_en_errspace) */
						/* END INLINED CODE */
					}
					;
				} else {
					if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 256L))) {
						{
							/* INLINED CODE (WEL_EDIT.on_en_setfocus) */
							/* END INLINED CODE */
						}
						;
					} else {
						if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 512L))) {
							{
								/* INLINED CODE (WEL_EDIT.on_en_killfocus) */
								/* END INLINED CODE */
							}
							;
						} else {
							if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 1024L))) {
								{
									/* INLINED CODE (WEL_EDIT.on_en_update) */
									/* END INLINED CODE */
								}
								;
							} else {
								if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 1281L))) {
									{
										/* INLINED CODE (WEL_EDIT.on_en_maxtext) */
										/* END INLINED CODE */
									}
									;
								} else {
									{
										/* INLINED CODE (WEL_CONTROL.default_process_notification) */
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
	RTLE;
}

/* {WEL_EDIT}.class_name */
static EIF_REFERENCE F1947_23382_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	
#define Result RTOTRR
	RTOUDR(445)

	
	RTEV;
	RTGC;
	RTOTP;
	Result = RTMS32_EX_H("E\000\000\000d\000\000\000i\000\000\000t\000\000\000",4,1164208500);
	RTOTE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1947_23382 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(445,F1947_23382_body,(Current));
}

void EIF_Minit1930 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
