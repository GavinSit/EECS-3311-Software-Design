/*
 * Code for class WEL_COMBO_BOX_EX
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1922.h"
#include <windows.h>
#include "cctrl.h"

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

/* {WEL_COMBO_BOX_EX}.get_item_info */
EIF_REFERENCE F1939_23280 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	Result = RTLNS(eif_new_type(1355, 0x01).id, 1355, _OBJSIZ_1_1_0_0_0_1_0_0_);
	F1356_16155(RTCW(Result), arg1);
	F1356_16172(RTCW(Result), (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (((EIF_INTEGER_32) 1L) + ((EIF_INTEGER_32) 2L)) + ((EIF_INTEGER_32) 4L)) + ((EIF_INTEGER_32) 8L)) + ((EIF_INTEGER_32) 16L)) + ((EIF_INTEGER_32) 32L)));
	loc1 = RTLNS(eif_new_type(1564, 0x01).id, 1564, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F1564_6847(RTCW(loc1), ((EIF_INTEGER_32) 30L));
	F1565_6917(RTCW(loc1));
	F1356_16164(RTCW(Result), loc1);
	F1356_16173(RTCW(Result), ((EIF_INTEGER_32) 30L));
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	tp2 = (EIF_POINTER) (WPARAM)((((EIF_INTEGER_32) 0L)));
	tp3 = *(EIF_POINTER *)(RTCW(Result)+ _PTROFF_1_1_0_0_0_0_);
	inline_F67_9749(tp1, ((EIF_INTEGER_32) 1037L), tp2, tp3);
	RTLE;
	return Result;
}

/* {WEL_COMBO_BOX_EX}.list_shown */
EIF_BOOLEAN F1939_23281 (EIF_REFERENCE Current)
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
	ti4_1 = inline_F67_9747(tp1, ((EIF_INTEGER_32) 343L), tp2, tp3);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L));
	RTLE;
	return Result;
}

/* {WEL_COMBO_BOX_EX}.set_item_info */
void F1939_23283 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
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
	F1356_16163(RTCW(arg2), arg1);
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	tp2 = (EIF_POINTER) (WPARAM)((((EIF_INTEGER_32) 0L)));
	tp3 = *(EIF_POINTER *)(RTCW(arg2)+ _PTROFF_1_1_0_0_0_0_);
	inline_F67_9749(tp1, ((EIF_INTEGER_32) 1036L), tp2, tp3);
	RTLE;
}

/* {WEL_COMBO_BOX_EX}.set_image_list */
void F1939_23286 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
		inline_F67_9749(tp1, ((EIF_INTEGER_32) 1026L), tp2, tp3);
	} else {
		tp1 = *(EIF_POINTER *)(Current + O12527[dtype-1295]);
		tp2 = (EIF_POINTER) (WPARAM)((((EIF_INTEGER_32) 0L)));
		tp3 = (EIF_POINTER) (LPARAM)((((EIF_INTEGER_32) 0L)));
		inline_F67_9749(tp1, ((EIF_INTEGER_32) 1026L), tp2, tp3);
	}
	RTLE;
}

/* {WEL_COMBO_BOX_EX}.add_string */
void F1939_23287 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	ti4_1 = F1937_23240(Current);
	F1939_23288(Current, arg1, ti4_1);
	RTLE;
}

/* {WEL_COMBO_BOX_EX}.insert_string_at */
void F1939_23288 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
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
	loc1 = RTLNS(eif_new_type(1355, 0x01).id, 1355, _OBJSIZ_1_1_0_0_0_1_0_0_);
	F1356_16155(RTCW(loc1), arg2);
	F1356_16164(RTCW(loc1), arg1);
	F1939_23289(Current, loc1);
	RTLE;
}

/* {WEL_COMBO_BOX_EX}.insert_item */
void F1939_23289 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	inline_F67_9749(tp1, ((EIF_INTEGER_32) 1035L), tp2, tp3);
	RTLE;
}

/* {WEL_COMBO_BOX_EX}.delete_item */
void F1939_23290 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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

/* {WEL_COMBO_BOX_EX}.on_cben_beginedit_item */
void F1939_23291 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_COMBO_BOX_EX}.on_cben_endedit_item */
void F1939_23292 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_COMBO_BOX_EX}.on_cben_insert_item */
void F1939_23293 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_COMBO_BOX_EX}.on_cben_delete_item */
void F1939_23294 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_COMBO_BOX_EX}.process_notification_info */
void F1939_23297 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,loc2);
	RTLR(2,tr1);
	RTLR(3,Current);
	RTLR(4,loc3);
	RTLIU(5);
	
	RTGC;
	loc1 = F1903_22268(RTCW(arg1));
	if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) -801L))) {
		loc2 = RTLNS(eif_new_type(1339, 0x01).id, 1339, _OBJSIZ_0_1_0_0_0_1_0_0_);
		F1340_15877(RTCW(loc2), arg1);
		tr1 = F1340_15879(RTCW(loc2));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R19344[Dtype(Current)-1939])(Current, tr1);
	} else {
		if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) -802L))) {
			loc2 = RTLNS(eif_new_type(1339, 0x01).id, 1339, _OBJSIZ_0_1_0_0_0_1_0_0_);
			F1340_15877(RTCW(loc2), arg1);
			tr1 = F1340_15879(RTCW(loc2));
			{
				/* INLINED CODE (WEL_COMBO_BOX_EX.on_cben_delete_item) */
				/* END INLINED CODE */
			}
			;
		} else {
			if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) -804L))) {
				{
					/* INLINED CODE (WEL_COMBO_BOX_EX.on_cben_beginedit_item) */
					/* END INLINED CODE */
				}
				;
			} else {
				if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) -806L))) {
					loc3 = RTLNS(eif_new_type(1338, 0x01).id, 1338, _OBJSIZ_0_1_0_0_0_1_0_0_);
					F1339_15864(RTCW(loc3), arg1);
					{
						/* INLINED CODE (WEL_COMBO_BOX_EX.on_cben_endedit_item) */
						/* END INLINED CODE */
					}
					;
				}
			}
		}
	}
	RTLE;
}

/* {WEL_COMBO_BOX_EX}.combo_item */
EIF_POINTER F1939_23299 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	tp2 = (EIF_POINTER) (WPARAM)((((EIF_INTEGER_32) 0L)));
	tp3 = (EIF_POINTER) (LPARAM)((((EIF_INTEGER_32) 0L)));
	Result = inline_F67_9746(tp1, ((EIF_INTEGER_32) 1030L), tp2, tp3);
	RTLE;
	return Result;
}

/* {WEL_COMBO_BOX_EX}.class_name */
static EIF_REFERENCE F1939_23300_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(510)

	RTLI(1);
	RTLR(0,tr1);
	RTLIU(1);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(eif_new_type(944, 0x01).id, 944, _OBJSIZ_1_0_0_1_0_0_0_0_);
	tp1 = (EIF_POINTER) WC_COMBOBOXEX;
	F945_14351(RTCW(tr1), tp1);
	Result = F944_3743(RTCW(tr1));
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1939_23300 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(510,F1939_23300_body,(Current));
}

/* {WEL_COMBO_BOX_EX}.cwin_comboex_class */
EIF_POINTER F1939_23301 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = (EIF_POINTER) WC_COMBOBOXEX;
	return Result;
}

void EIF_Minit1922 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
