/*
 * Code for class WEL_TOOL_BAR
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1911.h"
#include <windows.h>
#include <cctrl.h>
#include "eif_misc.h"

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
#ifndef INLINE_F470_13514
static EIF_POINTER inline_F470_13514 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	return (EIF_POINTER) (rt_uint_ptr) MAKELONG(arg1, arg2);
	;
}
#define INLINE_F470_13514
#endif
#ifndef INLINE_F67_9746
static EIF_POINTER inline_F67_9746 (EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3, EIF_POINTER arg4)
{
	return (EIF_POINTER) (SendMessage ((HWND) arg1, (UINT) arg2, (WPARAM) arg3, (LPARAM) arg4))
	;
}
#define INLINE_F67_9746
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

/* {WEL_TOOL_BAR}.make */
void F1928_22951 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
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
	F1912_22614(Current, arg1, NULL, ti4_1, ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), arg2, tp2);
	F1928_23003(Current);
	*(EIF_INTEGER_32 *)(Current + O19029[dtype-1925]) = (EIF_INTEGER_32) arg2;
	RTLE;
}

/* {WEL_TOOL_BAR}.reposition */
void F1928_22952 (EIF_REFERENCE Current)
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
	inline_F67_9749(tp1, ((EIF_INTEGER_32) 5L), tp2, tp3);
	RTLE;
}

/* {WEL_TOOL_BAR}.auto_size */
void F1928_22953 (EIF_REFERENCE Current)
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
	inline_F67_9749(tp1, ((EIF_INTEGER_32) 1057L), tp2, tp3);
	RTLE;
}

/* {WEL_TOOL_BAR}.check_button */
void F1928_22954 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	tp3 = inline_F470_13514(((EIF_INTEGER_32) 1L), ((EIF_INTEGER_32) 0L));
	inline_F67_9749(tp1, ((EIF_INTEGER_32) 1026L), tp2, tp3);
	RTLE;
}

/* {WEL_TOOL_BAR}.uncheck_button */
void F1928_22955 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	inline_F67_9749(tp1, ((EIF_INTEGER_32) 1026L), tp2, tp3);
	RTLE;
}

/* {WEL_TOOL_BAR}.enable_button */
void F1928_22956 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	tp3 = inline_F470_13514(((EIF_INTEGER_32) 1L), ((EIF_INTEGER_32) 0L));
	inline_F67_9749(tp1, ((EIF_INTEGER_32) 1025L), tp2, tp3);
	RTLE;
}

/* {WEL_TOOL_BAR}.disable_button */
void F1928_22957 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	inline_F67_9749(tp1, ((EIF_INTEGER_32) 1025L), tp2, tp3);
	RTLE;
}

/* {WEL_TOOL_BAR}.button_checked */
EIF_BOOLEAN F1928_22977 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	tp2 = (EIF_POINTER) (WPARAM)((arg1));
	tp3 = (EIF_POINTER) (LPARAM)((((EIF_INTEGER_32) 0L)));
	tp1 = inline_F67_9746(tp1, ((EIF_INTEGER_32) 1034L), tp2, tp3);
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

/* {WEL_TOOL_BAR}.button_rect */
EIF_REFERENCE F1928_22979 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	inline_F67_9749(tp1, ((EIF_INTEGER_32) 1053L), tp2, tp3);
	RTLE;
	return Result;
}

/* {WEL_TOOL_BAR}.button_count */
EIF_INTEGER_32 F1928_22981 (EIF_REFERENCE Current)
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
	Result = inline_F67_9747(tp1, ((EIF_INTEGER_32) 1048L), tp2, tp3);
	RTLE;
	return Result;
}

/* {WEL_TOOL_BAR}.insert_button */
void F1928_22984 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
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
	tp3 = *(EIF_POINTER *)(RTCW(arg2)+ _PTROFF_0_1_0_0_0_0_);
	inline_F67_9749(tp1, ((EIF_INTEGER_32) 1045L), tp2, tp3);
	RTLE;
}

/* {WEL_TOOL_BAR}.add_strings */
void F1928_22987 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER_32 tw1;
	RTCDT;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,loc2);
	RTLR(2,tr1);
	RTLR(3,loc3);
	RTLR(4,Current);
	RTLIU(5);
	
	RTGC;
	loc1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_1_);
	loc2 = RTLNS(eif_new_type(1564, 0x01).id, 1564, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F1558_6510(RTCW(loc2));
	for (;;) {
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_0_);
		if ((EIF_BOOLEAN) (loc1 > ti4_1)) break;
		tr1 = F919_3191(RTCW(arg1), loc1);
		F1565_6937(RTCW(loc2), tr1);
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\000';
		F1565_6952(RTCW(loc2), tw1);
		loc1++;
	}
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\000';
	F1565_6952(RTCW(loc2), tw1);
	loc3 = RTLNS(eif_new_type(944, 0x01).id, 944, _OBJSIZ_1_0_0_1_0_0_0_0_);
	F944_3738(RTCW(loc3), loc2);
	tp1 = *(EIF_POINTER *)(Current + O12527[dtype-1295]);
	tp2 = (EIF_POINTER) (WPARAM)((((EIF_INTEGER_32) 0L)));
	tp3 = F944_3745(RTCW(loc3));
	ti4_2 = inline_F67_9747(tp1, ((EIF_INTEGER_32) 1101L), tp2, tp3);
	*(EIF_INTEGER_32 *)(Current + O19097[dtype-1927]) = (EIF_INTEGER_32) ti4_2;
	RTLE;
}

/* {WEL_TOOL_BAR}.delete_button */
void F1928_22988 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	inline_F67_9749(tp1, ((EIF_INTEGER_32) 1046L), tp2, tp3);
	RTLE;
}

/* {WEL_TOOL_BAR}.on_tbn_getbuttoninfo */
void F1928_22989 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_TOOL_BAR}.on_tbn_begindrag */
void F1928_22990 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_TOOL_BAR}.on_tbn_enddrag */
void F1928_22991 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_TOOL_BAR}.on_tbn_beginadjust */
void F1928_22992 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_TOOL_BAR}.on_tbn_endadjust */
void F1928_22993 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_TOOL_BAR}.on_tbn_reset */
void F1928_22994 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_TOOL_BAR}.on_tbn_queryinsert */
void F1928_22995 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_TOOL_BAR}.on_tbn_querydelete */
void F1928_22996 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_TOOL_BAR}.on_tbn_toolbarchange */
void F1928_22997 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_TOOL_BAR}.on_tbn_custhelp */
void F1928_22998 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_TOOL_BAR}.on_tbn_dropdown */
void F1928_22999 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_TOOL_BAR}.process_notification_info */
void F1928_23000 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,loc2);
	RTLR(2,Current);
	RTLIU(3);
	
	RTGC;
	loc1 = F1903_22268(RTCW(arg1));
	if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) -680L))) {
		loc2 = RTLNS(eif_new_type(1354, 0x01).id, 1354, _OBJSIZ_0_1_0_0_0_1_0_0_);
		F1355_16142(RTCW(loc2), arg1);
		{
			/* INLINED CODE (WEL_TOOL_BAR.on_tbn_getbuttoninfo) */
			/* END INLINED CODE */
		}
		;
	} else {
		if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) -701L))) {
			loc2 = RTLNS(eif_new_type(1354, 0x01).id, 1354, _OBJSIZ_0_1_0_0_0_1_0_0_);
			F1355_16142(RTCW(loc2), arg1);
			{
				/* INLINED CODE (WEL_TOOL_BAR.on_tbn_begindrag) */
				/* END INLINED CODE */
			}
			;
		} else {
			if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) -702L))) {
				loc2 = RTLNS(eif_new_type(1354, 0x01).id, 1354, _OBJSIZ_0_1_0_0_0_1_0_0_);
				F1355_16142(RTCW(loc2), arg1);
				{
					/* INLINED CODE (WEL_TOOL_BAR.on_tbn_enddrag) */
					/* END INLINED CODE */
				}
				;
			} else {
				if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) -703L))) {
					{
						/* INLINED CODE (WEL_TOOL_BAR.on_tbn_beginadjust) */
						/* END INLINED CODE */
					}
					;
				} else {
					if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) -704L))) {
						{
							/* INLINED CODE (WEL_TOOL_BAR.on_tbn_endadjust) */
							/* END INLINED CODE */
						}
						;
					} else {
						if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) -705L))) {
							{
								/* INLINED CODE (WEL_TOOL_BAR.on_tbn_reset) */
								/* END INLINED CODE */
							}
							;
						} else {
							if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) -706L))) {
								loc2 = RTLNS(eif_new_type(1354, 0x01).id, 1354, _OBJSIZ_0_1_0_0_0_1_0_0_);
								F1355_16142(RTCW(loc2), arg1);
								{
									/* INLINED CODE (WEL_TOOL_BAR.on_tbn_queryinsert) */
									/* END INLINED CODE */
								}
								;
							} else {
								if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) -707L))) {
									loc2 = RTLNS(eif_new_type(1354, 0x01).id, 1354, _OBJSIZ_0_1_0_0_0_1_0_0_);
									F1355_16142(RTCW(loc2), arg1);
									{
										/* INLINED CODE (WEL_TOOL_BAR.on_tbn_querydelete) */
										/* END INLINED CODE */
									}
									;
								} else {
									if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) -708L))) {
										{
											/* INLINED CODE (WEL_TOOL_BAR.on_tbn_toolbarchange) */
											/* END INLINED CODE */
										}
										;
									} else {
										if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) -709L))) {
											{
												/* INLINED CODE (WEL_TOOL_BAR.on_tbn_custhelp) */
												/* END INLINED CODE */
											}
											;
										} else {
											if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) -710L))) {
												loc2 = RTLNS(eif_new_type(1354, 0x01).id, 1354, _OBJSIZ_0_1_0_0_0_1_0_0_);
												F1355_16142(RTCW(loc2), arg1);
												(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R19113[Dtype(Current)-1927])(Current, loc2);
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

/* {WEL_TOOL_BAR}.class_name */
static EIF_REFERENCE F1928_23001_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(511)

	RTLI(1);
	RTLR(0,tr1);
	RTLIU(1);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(eif_new_type(944, 0x01).id, 944, _OBJSIZ_1_0_0_1_0_0_0_0_);
	tp1 = (EIF_POINTER) TOOLBARCLASSNAME;
	F945_14351(RTCW(tr1), tp1);
	Result = F944_3743(RTCW(tr1));
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1928_23001 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(511,F1928_23001_body,(Current));
}

/* {WEL_TOOL_BAR}.default_style */
static EIF_INTEGER_32 F1928_23002_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 512)

	
	RTEV;
	RTGC;
	RTOTP;
	ti4_1 = eif_bit_or(((EIF_INTEGER_32) 268435456L),((EIF_INTEGER_32) 1073741824L));
	Result = eif_bit_or(ti4_1,((EIF_INTEGER_32) 256L));
	RTOTE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F1928_23002 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,512,F1928_23002_body,(Current));
}

/* {WEL_TOOL_BAR}.set_button_struct_size */
void F1928_23003 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	ti4_1 = (EIF_INTEGER_32) sizeof (TBBUTTON);
	tp2 = (EIF_POINTER) (WPARAM)((ti4_1));
	tp3 = (EIF_POINTER) (LPARAM)((((EIF_INTEGER_32) 0L)));
	inline_F67_9749(tp1, ((EIF_INTEGER_32) 1054L), tp2, tp3);
	RTLE;
}

/* {WEL_TOOL_BAR}.cwin_toolbar_class */
EIF_POINTER F1928_23004 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = (EIF_POINTER) TOOLBARCLASSNAME;
	return Result;
}

/* {WEL_TOOL_BAR}.c_size_of_tbbutton */
EIF_INTEGER_32 F1928_23005 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) sizeof (TBBUTTON);
	return Result;
}

/* {WEL_TOOL_BAR}.text_length */
EIF_INTEGER_32 F1928_23009 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_INTEGER_32) 0;
}

void EIF_Minit1911 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
