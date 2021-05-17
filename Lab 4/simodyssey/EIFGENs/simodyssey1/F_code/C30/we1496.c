/*
 * Code for class WEL_TREE_VIEW_INSERT_STRUCT
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1496.h"
#include "cctrl.h"
#include <cctrl.h>
#include <tvinss.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_TREE_VIEW_INSERT_STRUCT}.tree_view_item */
EIF_REFERENCE F1357_16195 (EIF_REFERENCE Current)
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
	Result = RTLNS(eif_new_type(1409, 0x01).id, 1409, _OBJSIZ_1_1_0_0_0_1_0_0_);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_1_1_0_0_0_0_);
	tp1 = (EIF_POINTER) cwel_insertstruct_get_item(((TV_INSERTSTRUCT*) tp1));
	F1296_15096(RTCW(Result), tp1);
	RTLE;
	return Result;
}

/* {WEL_TREE_VIEW_INSERT_STRUCT}.set_parent */
void F1357_16197 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_1_1_0_0_0_0_);
	cwel_insertstruct_set_hparent((tp1), (arg1));
}

/* {WEL_TREE_VIEW_INSERT_STRUCT}.set_insert_after */
void F1357_16198 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_1_1_0_0_0_0_);
	cwel_insertstruct_set_hinsertafter((tp1), (arg1));
}

/* {WEL_TREE_VIEW_INSERT_STRUCT}.set_tree_view_item */
void F1357_16199 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_1_1_0_0_0_0_);
	tp2 = *(EIF_POINTER *)(RTCW(arg1) + O12527[Dtype(arg1)-1295]);
	cwel_insertstruct_set_item((tp1), (tp2));
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
	RTLE;
}

/* {WEL_TREE_VIEW_INSERT_STRUCT}.set_root */
void F1357_16203 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tp1 = (EIF_POINTER) TVI_ROOT;
	F1357_16197(Current, tp1);
	RTLE;
}

/* {WEL_TREE_VIEW_INSERT_STRUCT}.structure_size */
static EIF_INTEGER_32 F1357_16204_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 477)

	
	RTEV;
	RTOTP;
	Result = (EIF_INTEGER_32) sizeof (TV_INSERTSTRUCT);
	RTOTE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F1357_16204 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,477,F1357_16204_body,(Current));
}

/* {WEL_TREE_VIEW_INSERT_STRUCT}.c_size_of_insertstruct */
EIF_INTEGER_32 F1357_16205 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) sizeof (TV_INSERTSTRUCT);
	return Result;
}

/* {WEL_TREE_VIEW_INSERT_STRUCT}.cwel_insertstruct_set_hparent */
void F1357_16206 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	
	cwel_insertstruct_set_hparent((arg1), (arg2));
}

/* {WEL_TREE_VIEW_INSERT_STRUCT}.cwel_insertstruct_set_hinsertafter */
void F1357_16207 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	
	cwel_insertstruct_set_hinsertafter((arg1), (arg2));
}

/* {WEL_TREE_VIEW_INSERT_STRUCT}.cwel_insertstruct_set_item */
void F1357_16208 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	
	cwel_insertstruct_set_item((arg1), (arg2));
}

/* {WEL_TREE_VIEW_INSERT_STRUCT}.cwel_insertstruct_get_item */
EIF_POINTER F1357_16211 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = (EIF_POINTER) cwel_insertstruct_get_item(((TV_INSERTSTRUCT*) arg1));
	return Result;
}

void EIF_Minit1496 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
