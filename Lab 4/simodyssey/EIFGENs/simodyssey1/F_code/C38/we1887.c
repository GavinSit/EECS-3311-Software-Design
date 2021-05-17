/*
 * Code for class WEL_DRAW_ITEM_STRUCT
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1887.h"
#include <drawitem.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_DRAW_ITEM_STRUCT}.make_by_pointer */
void F1904_22274 (EIF_REFERENCE Current, EIF_POINTER arg1)
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
	F1296_15096(Current, arg1);
	tr1 = RTLNSMART(eif_new_type(1311, 1).id);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_1_1_0_0_0_0_);
	tp1 = (EIF_POINTER) cwel_drawitemstruct_get_hdc(((DRAWITEMSTRUCT*) tp1));
	F1296_15096(RTCW(tr1), tp1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {WEL_DRAW_ITEM_STRUCT}.ctl_type */
EIF_INTEGER_32 F1904_22275 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_1_1_0_0_0_0_);
	return (EIF_INTEGER_32) (EIF_INTEGER_32) cwel_drawitemstruct_get_ctltype((tp1));
}

/* {WEL_DRAW_ITEM_STRUCT}.item_state */
EIF_INTEGER_32 F1904_22279 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_1_1_0_0_0_0_);
	return (EIF_INTEGER_32) (EIF_INTEGER_32) cwel_drawitemstruct_get_itemstate((tp1));
}

/* {WEL_DRAW_ITEM_STRUCT}.window_item */
EIF_REFERENCE F1904_22280 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_1_1_0_0_0_0_);
	tp1 = (EIF_POINTER) cwel_drawitemstruct_get_hwnditem(((DRAWITEMSTRUCT*) tp1));
	tr1 = F1898_22150(Current, tp1);
	loc1 = tr1;
	loc1 = RTRV(eif_new_type(1925, 0),loc1);
	if (EIF_TEST(loc1)) {
		RTLE;
		return (EIF_REFERENCE) loc1;
	}
	RTLE;
	return (EIF_REFERENCE) 0;
}

/* {WEL_DRAW_ITEM_STRUCT}.rect_item */
EIF_REFERENCE F1904_22283 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTGC;
	Result = RTLNS(eif_new_type(1407, 0x01).id, 1407, _OBJSIZ_0_1_0_0_0_1_0_0_);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_1_1_0_0_0_0_);
	tp1 = (EIF_POINTER) cwel_drawitemstruct_get_rcitem(((DRAWITEMSTRUCT*) tp1));
	F1296_15096(RTCW(Result), tp1);
	RTLE;
	return Result;
}

/* {WEL_DRAW_ITEM_STRUCT}.item_data */
EIF_POINTER F1904_22284 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_1_1_0_0_0_0_);
	return (EIF_POINTER) (EIF_POINTER) cwel_drawitemstruct_get_itemdata((tp1));
}

/* {WEL_DRAW_ITEM_STRUCT}.structure_size */
static EIF_INTEGER_32 F1904_22285_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 330)

	
	RTEV;
	RTOTP;
	Result = (EIF_INTEGER_32) sizeof (DRAWITEMSTRUCT);
	RTOTE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F1904_22285 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,330,F1904_22285_body,(Current));
}

/* {WEL_DRAW_ITEM_STRUCT}.c_size_of_drawitemstruct */
EIF_INTEGER_32 F1904_22286 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) sizeof (DRAWITEMSTRUCT);
	return Result;
}

/* {WEL_DRAW_ITEM_STRUCT}.cwel_drawitemstruct_get_ctltype */
EIF_INTEGER_32 F1904_22287 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) cwel_drawitemstruct_get_ctltype((arg1));
	return Result;
}

/* {WEL_DRAW_ITEM_STRUCT}.cwel_drawitemstruct_get_itemstate */
EIF_INTEGER_32 F1904_22291 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) cwel_drawitemstruct_get_itemstate((arg1));
	return Result;
}

/* {WEL_DRAW_ITEM_STRUCT}.cwel_drawitemstruct_get_hwnditem */
EIF_POINTER F1904_22292 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = (EIF_POINTER) cwel_drawitemstruct_get_hwnditem(((DRAWITEMSTRUCT*) arg1));
	return Result;
}

/* {WEL_DRAW_ITEM_STRUCT}.cwel_drawitemstruct_get_hdc */
EIF_POINTER F1904_22293 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = (EIF_POINTER) cwel_drawitemstruct_get_hdc(((DRAWITEMSTRUCT*) arg1));
	return Result;
}

/* {WEL_DRAW_ITEM_STRUCT}.cwel_drawitemstruct_get_rcitem */
EIF_POINTER F1904_22294 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = (EIF_POINTER) cwel_drawitemstruct_get_rcitem(((DRAWITEMSTRUCT*) arg1));
	return Result;
}

/* {WEL_DRAW_ITEM_STRUCT}.cwel_drawitemstruct_get_itemdata */
EIF_POINTER F1904_22295 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = (EIF_POINTER) cwel_drawitemstruct_get_itemdata((arg1));
	return Result;
}

void EIF_Minit1887 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
