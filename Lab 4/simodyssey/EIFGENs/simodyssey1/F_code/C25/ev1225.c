/*
 * Code for class EV_THEME_DRAWER_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1225.h"
#include "wel.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_THEME_DRAWER_IMP}.draw_bitmap_on_dc */
void F314_12733 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3, EIF_INTEGER_32 arg4, EIF_INTEGER_32 arg5, EIF_BOOLEAN arg6)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg3);
	RTLR(1,arg1);
	RTLR(2,arg2);
	RTLR(3,loc2);
	RTLR(4,loc3);
	RTLIU(5);
	
	RTGC;
	if (arg6) {
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	} else {
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 32L);
	}
	if ((EIF_BOOLEAN)(arg3 == NULL)) {
		F1306_15283(RTCW(arg1), NULL, arg2, arg4, arg5, loc1);
	} else {
		loc2 = RTLNS(eif_new_type(1306, 0x01).id, 1306, _OBJSIZ_6_2_0_3_0_7_0_0_);
		F1307_15414(RTCW(loc2), arg1);
		loc3 = RTLNS(eif_new_type(1319, 0x01).id, 1319, _OBJSIZ_0_3_0_3_0_2_0_0_);
		ti4_1 = F1320_15572(RTCW(arg2));
		ti4_2 = F1320_15573(RTCW(arg2));
		F1320_15566(RTCW(loc3), arg1, ti4_1, ti4_2);
		F1306_15265(RTCW(loc2), loc3);
		F1306_15283(RTCW(loc2), NULL, arg2, ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), loc1);
		ti4_1 = F1320_15572(RTCW(arg2));
		ti4_2 = F1320_15573(RTCW(arg2));
		ti4_3 = (EIF_INTEGER_32) MAKEROP4(SRCCOPY, 0xAA0029);
		F1306_15313(RTCW(arg1), arg4, arg5, ti4_1, ti4_2, loc2, ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), arg3, ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ti4_3);
		F519_14212(RTCW(loc3));
		F1306_15272(RTCW(loc2));
		F519_14213(RTCW(loc2));
	}
	RTLE;
}

/* {EV_THEME_DRAWER_IMP}.internal_draw_text */
void F314_12734 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3, EIF_REFERENCE arg4, EIF_INTEGER_32 arg5, EIF_BOOLEAN arg6, EIF_REFERENCE arg7)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(7);
	RTLR(0,loc1);
	RTLR(1,arg2);
	RTLR(2,arg4);
	RTLR(3,Current);
	RTLR(4,tr1);
	RTLR(5,arg3);
	RTLR(6,arg7);
	RTLIU(7);
	
	RTGC;
	loc1 = F1306_15216(RTCW(arg2));
	if ((EIF_BOOLEAN) !arg6) {
		F1408_17339(RTCW(arg4), ((EIF_INTEGER_32) 1L), ((EIF_INTEGER_32) 1L));
		F1306_15255(RTCW(arg2));
		tr1 = RTOUCR(339,F314_12737, (Current));
		F1306_15253(RTCW(arg2), tr1);
		F1306_15278(RTCW(arg2), arg3, arg4, arg5);
		tr1 = F314_12738(Current);
		F1306_15253(RTCW(arg2), tr1);
		F1408_17339(RTCW(arg4), ((EIF_INTEGER_32) -1L), ((EIF_INTEGER_32) -1L));
	} else {
		F1306_15253(RTCW(arg2), arg7);
	}
	F1306_15255(RTCW(arg2));
	F1306_15278(RTCW(arg2), arg3, arg4, arg5);
	F1306_15253(RTCW(arg2), loc1);
	RTLE;
}

/* {EV_THEME_DRAWER_IMP}.white */
static EIF_REFERENCE F314_12737_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(339)

	RTLI(1);
	RTLR(0,tr1);
	RTLIU(1);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(eif_new_type(1828, 0x01).id, 1828, _OBJSIZ_0_0_0_1_0_0_0_0_);
	F1829_20489(RTCW(tr1), ((EIF_INTEGER_32) 255L), ((EIF_INTEGER_32) 255L), ((EIF_INTEGER_32) 255L));
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F314_12737 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(339,F314_12737_body,(Current));
}

/* {EV_THEME_DRAWER_IMP}.color_gray_text */
EIF_REFERENCE F314_12738 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(1);
	RTLR(0,tr1);
	RTLIU(1);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(1828, 0x01).id, 1828, _OBJSIZ_0_0_0_1_0_0_0_0_);
	F1829_20490(RTCW(tr1), ((EIF_INTEGER_32) 17L));
	RTLE;
	return (EIF_REFERENCE) tr1;
}

/* {EV_THEME_DRAWER_IMP}.rlight */
EIF_REFERENCE F314_12740 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(1);
	RTLR(0,tr1);
	RTLIU(1);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(1828, 0x01).id, 1828, _OBJSIZ_0_0_0_1_0_0_0_0_);
	F1829_20490(RTCW(tr1), ((EIF_INTEGER_32) 22L));
	RTLE;
	return (EIF_REFERENCE) tr1;
}

/* {EV_THEME_DRAWER_IMP}.rhighlight */
EIF_REFERENCE F314_12741 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(1);
	RTLR(0,tr1);
	RTLIU(1);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(1828, 0x01).id, 1828, _OBJSIZ_0_0_0_1_0_0_0_0_);
	F1829_20490(RTCW(tr1), ((EIF_INTEGER_32) 20L));
	RTLE;
	return (EIF_REFERENCE) tr1;
}

/* {EV_THEME_DRAWER_IMP}.rshadow */
EIF_REFERENCE F314_12742 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(1);
	RTLR(0,tr1);
	RTLIU(1);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(1828, 0x01).id, 1828, _OBJSIZ_0_0_0_1_0_0_0_0_);
	F1829_20490(RTCW(tr1), ((EIF_INTEGER_32) 16L));
	RTLE;
	return (EIF_REFERENCE) tr1;
}

/* {EV_THEME_DRAWER_IMP}.rdark_shadow */
EIF_REFERENCE F314_12743 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(1);
	RTLR(0,tr1);
	RTLIU(1);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(1828, 0x01).id, 1828, _OBJSIZ_0_0_0_1_0_0_0_0_);
	F1829_20490(RTCW(tr1), ((EIF_INTEGER_32) 21L));
	RTLE;
	return (EIF_REFERENCE) tr1;
}

void EIF_Minit1225 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
