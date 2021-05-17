/*
 * Code for class EV_HORIZONTAL_SEPARATOR_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1981.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_HORIZONTAL_SEPARATOR_IMP}.set_default_minimum_size */
void F1998_25001 (EIF_REFERENCE Current)
{
	GTCX
	
	
	F1724_19512(Current, ((EIF_INTEGER_32) 2L), (EIF_BOOLEAN) 0);
}

/* {EV_HORIZONTAL_SEPARATOR_IMP}.on_paint */
void F1998_25002 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,loc3);
	RTLR(2,loc2);
	RTLR(3,arg1);
	RTLR(4,loc4);
	RTLIU(5);
	
	RTGC;
	loc1 = F1723_19500(Current);
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 / ((EIF_INTEGER_32) 2L));
	if ((EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 1L))) {
		loc3 = F1997_24996(Current);
		if ((EIF_BOOLEAN)(loc3 != NULL)) {
			loc2 = RTLNS(eif_new_type(1407, 0x01).id, 1407, _OBJSIZ_0_1_0_0_0_1_0_0_);
			ti4_1 = F1970_24041(Current);
			F1408_17321(RTCW(loc2), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ti4_1, (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L)));
			F1306_15298(RTCW(arg1), loc2, loc3);
		}
	}
	loc4 = F1896_22122(Current);
	F1998_25003(Current, arg1, loc4, (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L)));
	F519_14213(RTCW(loc4));
	loc4 = F1896_22123(Current);
	F1998_25003(Current, arg1, loc4, loc1);
	F519_14213(RTCW(loc4));
	if ((EIF_BOOLEAN) (loc1 < F1970_24043(Current))) {
		if ((EIF_BOOLEAN)(loc3 == NULL)) {
			loc3 = F1997_24996(Current);
		}
		RTCT0("bk_brush /= Void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc3 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		loc2 = RTLNS(eif_new_type(1407, 0x01).id, 1407, _OBJSIZ_0_1_0_0_0_1_0_0_);
		ti4_1 = F1970_24041(Current);
		ti4_2 = F1970_24043(Current);
		F1408_17321(RTCW(loc2), ((EIF_INTEGER_32) 0L), (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)), ti4_1, ti4_2);
		F1306_15298(RTCW(arg1), loc2, loc3);
	}
	if ((EIF_BOOLEAN)(loc3 != NULL)) {
		F519_14213(RTCW(loc3));
	}
	RTLE;
}

/* {EV_HORIZONTAL_SEPARATOR_IMP}.draw_horizontal_line */
void F1998_25003 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLIU(3);
	
	RTGC;
	F1306_15261(RTCW(arg1), arg2);
	ti4_1 = F1970_24041(Current);
	F1306_15293(RTCW(arg1), ((EIF_INTEGER_32) 0L), arg3, ti4_1, arg3);
	F1306_15266(RTCW(arg1));
	RTLE;
}

void EIF_Minit1981 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
