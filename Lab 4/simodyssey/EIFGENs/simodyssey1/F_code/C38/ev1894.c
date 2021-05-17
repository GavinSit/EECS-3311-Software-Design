/*
 * Code for class EV_MENU_CONTAINER_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1894.h"
#include <windows.h>
#include "wel.h"
#include "eif_object_id.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_MENU_CONTAINER_IMP}.process_menu_message */
EIF_BOOLEAN F1911_22458 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2, EIF_POINTER arg3)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_CHARACTER_8 loc4 = (EIF_CHARACTER_8) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,loc2);
	RTLR(3,loc3);
	RTLIU(4);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 43L))) {
		loc1 = RTLNS(eif_new_type(1903, 0x01).id, 1903, _OBJSIZ_1_1_0_0_0_1_0_0_);
		F1904_22274(RTCW(loc1), arg3);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_POINTER, EIF_REFERENCE)) R18633[dtype-1920])(Current, arg2, loc1);
		RTLE;
		return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	} else {
		if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 44L))) {
			loc2 = RTLNS(eif_new_type(1397, 0x01).id, 1397, _OBJSIZ_0_1_0_0_0_1_0_0_);
			F1296_15096(RTCW(loc2), arg3);
			F1911_22460(Current, arg2, loc2);
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		} else {
			if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 288L))) {
				if ((EIF_BOOLEAN)((EIF_INTEGER_32) HIWORD((arg2)) != ((EIF_INTEGER_32) 8192L))) {
					ti4_1 = (EIF_INTEGER_32) LOWORD((arg2));
					loc4 = (EIF_CHARACTER_8) ti4_1;
					loc3 = RTLNS(eif_new_type(1315, 0x01).id, 1315, _OBJSIZ_0_1_0_0_0_1_0_0_);
					F1296_15096(RTCW(loc3), arg3);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8, EIF_REFERENCE)) R18631[dtype-1920])(Current, loc4, loc3);
				}
				RTLE;
				return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			}
		}
	}
	RTLE;
	return Result;
}

/* {EV_MENU_CONTAINER_IMP}.on_measure_item */
void F1911_22460 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg2);
	RTLR(1,loc1);
	RTLIU(2);
	
	RTGC;
	loc2 = F1398_16961(RTCW(arg2));
	if ((EIF_BOOLEAN)(loc2 == (EIF_INTEGER_32) ODT_MENU)) {
		ti4_1 = F1398_16966(RTCW(arg2));
		ti4_1 = (EIF_INTEGER_32) ti4_1;
		loc1 = (EIF_REFERENCE) eif_id_object(ti4_1);
		loc1 = RTRV(eif_new_type(2010, 0x00), loc1);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R20172[Dtype(RTCW(loc1))-2010])(loc1, arg2);
		}
	}
	RTLE;
}

/* {EV_MENU_CONTAINER_IMP}.on_draw_item */
void F1911_22461 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg2);
	RTLR(1,loc2);
	RTLIU(2);
	
	RTGC;
	loc1 = F1904_22275(RTCW(arg2));
	if ((EIF_BOOLEAN)(loc1 == (EIF_INTEGER_32) ODT_MENU)) {
		tp1 = F1904_22284(RTCW(arg2));
		ti4_1 = (EIF_INTEGER_32) (rt_int_ptr) tp1;
		loc2 = (EIF_REFERENCE) eif_id_object(ti4_1);
		loc2 = RTRV(eif_new_type(2010, 0x00), loc2);
		if ((EIF_BOOLEAN)(loc2 != NULL)) {
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R20173[Dtype(RTCW(loc2))-2010])(loc2, arg2);
		}
	}
	RTLE;
}

void EIF_Minit1894 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
