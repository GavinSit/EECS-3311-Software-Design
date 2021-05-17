/*
 * Code for class WEL_RICH_EDIT_BUFFER_LOADER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1557.h"
#include "eif_helpers.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_RICH_EDIT_BUFFER_LOADER}.make */
void F1419_17583 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) arg1;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	F1417_17571(Current);
	RTLE;
}

/* {WEL_RICH_EDIT_BUFFER_LOADER}.read_buffer */
void F1419_17586 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc4);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLR(4,loc2);
	RTLIU(5);
	
	RTGC;
	loc4 = *(EIF_REFERENCE *)(Current);
	RTCT0("l_buffer_attached", EX_CHECK);
	if ((EIF_BOOLEAN)(loc4 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4681[Dtype(RTCW(tr1))-1560])(tr1);
	if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_1_) > ti4_1)) {
		tp1 = *(EIF_POINTER *)(RTCW(loc4)+ _PTROFF_0_1_0_1_0_0_);
		F1284_4473(RTCW(loc4), tp1, ((EIF_INTEGER_32) 0L));
	} else {
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_)) {
			loc1 = RTLNS(eif_new_type(944, 0x01).id, 944, _OBJSIZ_1_0_0_1_0_0_0_0_);
			tp1 = *(EIF_POINTER *)(RTCW(loc4)+ _PTROFF_0_1_0_1_0_0_);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc4)+ _LNGOFF_0_1_0_0_);
			F945_14352(RTCW(loc1), tp1, (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 2L)));
			ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_1_);
			ti4_2 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_1_0_0_0_);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			ti4_3 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4681[Dtype(RTCW(tr1))-1560])(tr1);
			loc3 = eif_min_int32 ((EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 + ti4_2) - ((EIF_INTEGER_32) 1L)),ti4_3);
			F944_3754(RTCW(loc1), *(EIF_REFERENCE *)(Current + _REFACS_1_), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_1_), loc3);
			tp1 = *(EIF_POINTER *)(RTCW(loc4)+ _PTROFF_0_1_0_1_0_0_);
			ti4_1 = ((EIF_INTEGER_32) 2L);
			F1284_4473(RTCW(loc4), tp1, (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc3 - *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_1_)) + ((EIF_INTEGER_32) 1L)) * ti4_1));
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_1_0_0_0_);
			(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_1_)) += ti4_1;
		} else {
			loc2 = RTLNS(eif_new_type(547, 0x01).id, 547, _OBJSIZ_1_0_0_1_0_0_0_0_);
			tp1 = *(EIF_POINTER *)(RTCW(loc4)+ _PTROFF_0_1_0_1_0_0_);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc4)+ _LNGOFF_0_1_0_0_);
			F548_1899(RTCW(loc2), tp1, (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L)));
			ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_1_);
			ti4_2 = *(EIF_INTEGER_32 *)(RTCW(loc2)+ _LNGOFF_1_0_0_0_);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			ti4_3 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4681[Dtype(RTCW(tr1))-1560])(tr1);
			loc3 = eif_min_int32 ((EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 + ti4_2) - ((EIF_INTEGER_32) 1L)),ti4_3);
			F548_1920(RTCW(loc2), *(EIF_REFERENCE *)(Current + _REFACS_1_), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_1_), loc3);
			tp1 = *(EIF_POINTER *)(RTCW(loc4)+ _PTROFF_0_1_0_1_0_0_);
			ti4_1 = ((EIF_INTEGER_32) 1L);
			F1284_4473(RTCW(loc4), tp1, (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc3 - *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_1_)) + ((EIF_INTEGER_32) 1L)) * ti4_1));
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc2)+ _LNGOFF_1_0_0_0_);
			(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_1_)) += ti4_1;
		}
	}
	RTLE;
}

void EIF_Minit1557 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
