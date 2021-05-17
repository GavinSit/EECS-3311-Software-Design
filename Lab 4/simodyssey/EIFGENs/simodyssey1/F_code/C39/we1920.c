/*
 * Code for class WEL_COMBO_BOX
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1920.h"
#include <windows.h>
#include "wel.h"

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
#ifndef INLINE_F67_9747
static EIF_INTEGER_32 inline_F67_9747 (EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3, EIF_POINTER arg4)
{
	return (EIF_INTEGER_32) (SendMessage ((HWND) arg1, (UINT) arg2, (WPARAM) arg3, (LPARAM) arg4))
	;
}
#define INLINE_F67_9747
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_COMBO_BOX}.delete_string */
void F1937_23226 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	inline_F67_9749(tp1, ((EIF_INTEGER_32) 324L), tp2, tp3);
	RTLE;
}

/* {WEL_COMBO_BOX}.select_item */
void F1937_23229 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	inline_F67_9749(tp1, ((EIF_INTEGER_32) 334L), tp2, tp3);
	RTLE;
}

/* {WEL_COMBO_BOX}.unselect */
void F1937_23230 (EIF_REFERENCE Current)
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
	tp2 = (EIF_POINTER) (WPARAM)((((EIF_INTEGER_32) -1L)));
	tp3 = (EIF_POINTER) (LPARAM)((((EIF_INTEGER_32) 0L)));
	inline_F67_9749(tp1, ((EIF_INTEGER_32) 334L), tp2, tp3);
	RTLE;
}

/* {WEL_COMBO_BOX}.selected */
EIF_BOOLEAN F1937_23232 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	tp2 = (EIF_POINTER) (WPARAM)((((EIF_INTEGER_32) 0L)));
	tp3 = (EIF_POINTER) (LPARAM)((((EIF_INTEGER_32) 0L)));
	ti4_1 = inline_F67_9747(tp1, ((EIF_INTEGER_32) 327L), tp2, tp3);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) -1L));
	RTLE;
	return Result;
}

/* {WEL_COMBO_BOX}.selected_item */
EIF_INTEGER_32 F1937_23233 (EIF_REFERENCE Current)
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
	Result = inline_F67_9747(tp1, ((EIF_INTEGER_32) 327L), tp2, tp3);
	RTLE;
	return Result;
}

/* {WEL_COMBO_BOX}.dropped_rect */
EIF_REFERENCE F1937_23235 (EIF_REFERENCE Current)
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
	tp2 = (EIF_POINTER) (WPARAM)((((EIF_INTEGER_32) 0L)));
	tp3 = *(EIF_POINTER *)(RTCW(Result)+ _PTROFF_0_1_0_0_0_0_);
	inline_F67_9749(tp1, ((EIF_INTEGER_32) 338L), tp2, tp3);
	RTLE;
	return Result;
}

/* {WEL_COMBO_BOX}.text_length */
EIF_INTEGER_32 F1937_23236 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	return (EIF_INTEGER_32) (EIF_INTEGER_32) GetWindowTextLength(((HWND) tp1));
}

/* {WEL_COMBO_BOX}.top_index */
EIF_INTEGER_32 F1937_23237 (EIF_REFERENCE Current)
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
	Result = inline_F67_9747(tp1, ((EIF_INTEGER_32) 347L), tp2, tp3);
	RTLE;
	return Result;
}

/* {WEL_COMBO_BOX}.list_item_height */
EIF_INTEGER_32 F1937_23238 (EIF_REFERENCE Current)
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
	Result = inline_F67_9747(tp1, ((EIF_INTEGER_32) 340L), tp2, tp3);
	RTLE;
	return Result;
}

/* {WEL_COMBO_BOX}.count */
EIF_INTEGER_32 F1937_23240 (EIF_REFERENCE Current)
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
	Result = inline_F67_9747(tp1, ((EIF_INTEGER_32) 326L), tp2, tp3);
	RTLE;
	return Result;
}

/* {WEL_COMBO_BOX}.on_cbn_closeup */
void F1937_23241 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_COMBO_BOX}.on_cbn_dblclk */
void F1937_23242 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_COMBO_BOX}.on_cbn_dropdown */
void F1937_23243 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_COMBO_BOX}.on_cbn_editchange */
void F1937_23244 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_COMBO_BOX}.on_cbn_editupdate */
void F1937_23245 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_COMBO_BOX}.on_cbn_errspace */
void F1937_23246 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_COMBO_BOX}.on_cbn_killfocus */
void F1937_23247 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_COMBO_BOX}.on_cbn_selchange */
void F1937_23248 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_COMBO_BOX}.on_cbn_selendcancel */
void F1937_23249 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_COMBO_BOX}.on_cbn_selendok */
void F1937_23250 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_COMBO_BOX}.on_cbn_setfocus */
void F1937_23251 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_COMBO_BOX}.process_notification */
void F1937_23252 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 8L))) {
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R19317[dtype-1937])(Current);
	} else {
		if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 2L))) {
			{
				/* INLINED CODE (WEL_COMBO_BOX.on_cbn_dblclk) */
				/* END INLINED CODE */
			}
			;
		} else {
			if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 7L))) {
				(FUNCTION_CAST(void, (EIF_REFERENCE)) R19319[dtype-1937])(Current);
			} else {
				if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 5L))) {
					(FUNCTION_CAST(void, (EIF_REFERENCE)) R19320[dtype-1937])(Current);
				} else {
					if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 6L))) {
						{
							/* INLINED CODE (WEL_COMBO_BOX.on_cbn_editupdate) */
							/* END INLINED CODE */
						}
						;
					} else {
						if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) -1L))) {
							{
								/* INLINED CODE (WEL_COMBO_BOX.on_cbn_errspace) */
								/* END INLINED CODE */
							}
							;
						} else {
							if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 4L))) {
								{
									/* INLINED CODE (WEL_COMBO_BOX.on_cbn_killfocus) */
									/* END INLINED CODE */
								}
								;
							} else {
								if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 1L))) {
									(FUNCTION_CAST(void, (EIF_REFERENCE)) R19324[dtype-1937])(Current);
								} else {
									if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 10L))) {
										{
											/* INLINED CODE (WEL_COMBO_BOX.on_cbn_selendcancel) */
											/* END INLINED CODE */
										}
										;
									} else {
										if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 9L))) {
											{
												/* INLINED CODE (WEL_COMBO_BOX.on_cbn_selendok) */
												/* END INLINED CODE */
											}
											;
										} else {
											if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 3L))) {
												{
													/* INLINED CODE (WEL_COMBO_BOX.on_cbn_setfocus) */
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
			}
		}
	}
	RTLE;
}

/* {WEL_COMBO_BOX}.class_name */
static EIF_REFERENCE F1937_23253_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	
#define Result RTOTRR
	RTOUDR(465)

	
	RTEV;
	RTGC;
	RTOTP;
	Result = RTMS32_EX_H("C\000\000\000o\000\000\000m\000\000\000b\000\000\000o\000\000\000B\000\000\000o\000\000\000x\000\000\000",8,2130771320);
	RTOTE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1937_23253 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(465,F1937_23253_body,(Current));
}

void EIF_Minit1920 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
