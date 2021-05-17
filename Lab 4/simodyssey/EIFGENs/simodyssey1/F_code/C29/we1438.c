/*
 * Code for class WEL_IMAGE_LIST
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1438.h"
#include "wel_image_list.h"
#include "eif_misc.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_IMAGE_LIST}.make */
void F1299_15116 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_BOOLEAN arg4)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	*(EIF_INTEGER_32 *)(Current + O12560[dtype-1298]) = (EIF_INTEGER_32) arg1;
	*(EIF_INTEGER_32 *)(Current + O12561[dtype-1298]) = (EIF_INTEGER_32) arg2;
	if (arg4) {
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		*(EIF_BOOLEAN *)(Current + O12546[dtype-1298]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	ti4_1 = *(EIF_INTEGER_32 *)(Current + O12560[dtype-1298]);
	ti4_2 = *(EIF_INTEGER_32 *)(Current + O12561[dtype-1298]);
	ti4_3 = eif_bit_or(arg3,loc1);
	tp1 = (EIF_POINTER) ImageList_Create(((int) ti4_1), ((int) ti4_2), ((UINT) ti4_3), ((int) ((EIF_INTEGER_32) 1L)), ((int) ((EIF_INTEGER_32) 1L)));
	*(EIF_POINTER *)(Current + O12527[dtype-1295]) = (EIF_POINTER) tp1;
	RTLE;
}

/* {WEL_IMAGE_LIST}.destroy_item */
void F1299_15118 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current + O12527[dtype-1295]);
	ImageList_Destroy(((HIMAGELIST) tp1));
	{
		/* INLINED CODE (ANY.default_pointer) */
		tp1 = (EIF_POINTER)  0;
		/* END INLINED CODE */
	}
	tp2 = tp1;
	*(EIF_POINTER *)(Current + O12527[dtype-1295]) = (EIF_POINTER) tp2;
	RTLE;
}

/* {WEL_IMAGE_LIST}.add_bitmap */
void F1299_15122 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_POINTER tp4;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current + O12527[dtype-1295]);
	tp2 = *(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_0_3_0_3_0_0_);
	{
		/* INLINED CODE (ANY.default_pointer) */
		tp3 = (EIF_POINTER)  0;
		/* END INLINED CODE */
	}
	tp4 = tp3;
	ti4_1 = (EIF_INTEGER_32) ImageList_Add(((HIMAGELIST) tp1), ((HBITMAP) tp2), ((HBITMAP) tp4));
	*(EIF_INTEGER_32 *)(Current + O12545[dtype-1298]) = (EIF_INTEGER_32) ti4_1;
	RTLE;
}

/* {WEL_IMAGE_LIST}.add_masked_bitmap */
void F1299_15124 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,arg2);
	RTLIU(3);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current + O12527[dtype-1295]);
	tp2 = *(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_0_3_0_3_0_0_);
	tp3 = *(EIF_POINTER *)(RTCW(arg2)+ _PTROFF_0_3_0_3_0_0_);
	ti4_1 = (EIF_INTEGER_32) ImageList_Add(((HIMAGELIST) tp1), ((HBITMAP) tp2), ((HBITMAP) tp3));
	*(EIF_INTEGER_32 *)(Current + O12545[dtype-1298]) = (EIF_INTEGER_32) ti4_1;
	RTLE;
}

/* {WEL_IMAGE_LIST}.add_icon */
void F1299_15127 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current + O12527[dtype-1295]);
	tp2 = *(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_0_2_0_3_0_0_);
	ti4_1 = (EIF_INTEGER_32) ImageList_AddIcon(((HIMAGELIST) tp1), ((HICON) tp2));
	*(EIF_INTEGER_32 *)(Current + O12545[dtype-1298]) = (EIF_INTEGER_32) ti4_1;
	RTLE;
}

/* {WEL_IMAGE_LIST}.get_icon */
EIF_REFERENCE F1299_15130 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
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
	Result = RTLNS(eif_new_type(1323, 0x01).id, 1323, _OBJSIZ_0_2_0_3_0_1_0_0_);
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	tp1 = (EIF_POINTER) ImageList_GetIcon(((HIMAGELIST) tp1), ((int) arg1), ((int) arg2));
	F1317_15540(RTCW(Result), tp1);
	F1296_15102(RTCW(Result));
	RTLE;
	return Result;
}

/* {WEL_IMAGE_LIST}.cwel_imagelist_get_icon */
EIF_POINTER F1299_15137 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = (EIF_POINTER) ImageList_GetIcon(((HIMAGELIST) arg1), ((int) arg2), ((int) arg3));
	return Result;
}

/* {WEL_IMAGE_LIST}.cwel_imagelist_create */
EIF_POINTER F1299_15138 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_INTEGER_32 arg5)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = (EIF_POINTER) ImageList_Create(((int) arg1), ((int) arg2), ((UINT) arg3), ((int) arg4), ((int) arg5));
	return Result;
}

/* {WEL_IMAGE_LIST}.cwel_imagelist_destroy */
void F1299_15139 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	
	ImageList_Destroy(((HIMAGELIST) arg1));
}

/* {WEL_IMAGE_LIST}.cwel_imagelist_add */
EIF_INTEGER_32 F1299_15140 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) ImageList_Add(((HIMAGELIST) arg1), ((HBITMAP) arg2), ((HBITMAP) arg3));
	return Result;
}

/* {WEL_IMAGE_LIST}.cwel_imagelist_add_icon */
EIF_INTEGER_32 F1299_15144 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) ImageList_AddIcon(((HIMAGELIST) arg1), ((HICON) arg2));
	return Result;
}

void EIF_Minit1438 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
