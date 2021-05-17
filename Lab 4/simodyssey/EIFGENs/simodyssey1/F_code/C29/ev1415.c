/*
 * Code for class EV_CLASSIC_THEME_DRAWER_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1415.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_CLASSIC_THEME_DRAWER_IMP}.open_theme_data */
EIF_POINTER F1260_14795 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_REFERENCE arg2)
{
	GTCX
	
	
	RTGC;
	return (EIF_POINTER) 0;
}

/* {EV_CLASSIC_THEME_DRAWER_IMP}.close_theme_data */
void F1260_14796 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	
	RTGC;
}

/* {EV_CLASSIC_THEME_DRAWER_IMP}.draw_theme_background */
void F1260_14798 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_REFERENCE arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_REFERENCE arg5, EIF_REFERENCE arg6, EIF_REFERENCE arg7)
{
	GTCX
	
	
	F1306_15298(RTCW(arg2), arg5, arg7);
}

/* {EV_CLASSIC_THEME_DRAWER_IMP}.draw_widget_background */
void F1260_14799 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3, EIF_REFERENCE arg4)
{
	GTCX
	
	
	F1306_15298(RTCW(arg2), arg3, arg4);
}

/* {EV_CLASSIC_THEME_DRAWER_IMP}.draw_widget_background_gdip */
EIF_BOOLEAN F1260_14800 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3, EIF_REFERENCE arg4, EIF_REFERENCE arg5)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTLD;
	
	RTLI(7);
	RTLR(0,arg3);
	RTLR(1,loc5);
	RTLR(2,arg2);
	RTLR(3,loc6);
	RTLR(4,arg5);
	RTLR(5,arg4);
	RTLR(6,tr1);
	RTLIU(7);
	
	RTGC;
	loc1 = F1408_17327(RTCW(arg3));
	loc2 = F1408_17329(RTCW(arg3));
	loc3 = F1408_17332(RTCW(arg3));
	loc4 = F1408_17333(RTCW(arg3));
	loc5 = RTLNS(eif_new_type(1331, 0x01).id, 1331, _OBJSIZ_0_1_0_0_0_2_0_0_);
	F1332_15700(RTCW(loc5), arg2);
	loc6 = RTLNS(eif_new_type(30, 0x01).id, 30, _OBJSIZ_0_0_0_0_0_0_1_0_);
	ti4_1 = F1829_20494(RTCW(arg5));
	ti4_2 = F1829_20495(RTCW(arg5));
	ti4_3 = F1829_20496(RTCW(arg5));
	F31_9005(RTCW(loc6), ((EIF_INTEGER_32) 255L), ti4_1, ti4_2, ti4_3);
	F1332_15718(RTCW(loc5), loc6);
	tr1 = RTLNS(eif_new_type(36, 0x01).id, 36, _OBJSIZ_1_0_0_0_0_0_0_0_);
	F37_9087(RTCW(tr1), loc1, loc2, loc3, loc4);
	F1332_15714(RTCW(loc5), arg4, tr1);
	F1332_15726(RTCW(loc5));
	RTLE;
	return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
}

/* {EV_CLASSIC_THEME_DRAWER_IMP}.draw_theme_parent_background */
void F1260_14802 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3, EIF_REFERENCE arg4)
{
	GTCX
	RTLD;
	
	RTLI(3);
	RTLR(0,arg4);
	RTLR(1,arg2);
	RTLR(2,arg3);
	RTLIU(3);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg4 != NULL)) {
		F1306_15298(RTCW(arg2), arg3, arg4);
	}
	RTLE;
}

/* {EV_CLASSIC_THEME_DRAWER_IMP}.draw_button_edge */
void F1260_14803 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_REFERENCE arg3)
{
	GTCX
	
	
	F1260_14808(Current, arg1, arg3, arg2);
}

/* {EV_CLASSIC_THEME_DRAWER_IMP}.update_button_text_rect_for_state */
void F1260_14804 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_REFERENCE arg3)
{
	GTCX
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg3);
	RTLIU(2);
	
	RTGC;
	if (F1258_14781(Current, arg2, ((EIF_INTEGER_32) 1L))) {
		F1408_17339(RTCW(arg3), ((EIF_INTEGER_32) 1L), ((EIF_INTEGER_32) 1L));
	}
	RTLE;
}

/* {EV_CLASSIC_THEME_DRAWER_IMP}.update_button_pixmap_coordinates_for_state */
void F1260_14805 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_REFERENCE arg3)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg3);
	RTLIU(2);
	
	RTGC;
	if (F1258_14781(Current, arg2, ((EIF_INTEGER_32) 1L))) {
		ti4_1 = F1169_14635(RTCW(arg3));
		ti4_2 = F1169_14637(RTCW(arg3));
		F1169_14630(RTCW(arg3), (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)), (EIF_INTEGER_32) (ti4_2 + ((EIF_INTEGER_32) 1L)));
	}
	RTLE;
}

/* {EV_CLASSIC_THEME_DRAWER_IMP}.draw_text */
void F1260_14806 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_REFERENCE arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_REFERENCE arg5, EIF_INTEGER_32 arg6, EIF_BOOLEAN arg7, EIF_REFERENCE arg8, EIF_REFERENCE arg9)
{
	GTCX
	
	
	F314_12734(Current, arg1, arg2, arg5, arg8, arg6, arg7, arg9);
}

/* {EV_CLASSIC_THEME_DRAWER_IMP}.draw_frame */
void F1260_14808 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,arg1);
	RTLR(3,arg2);
	RTLIU(4);
	
	RTGC;
	if (F1258_14781(Current, arg3, ((EIF_INTEGER_32) 32L))) {
		loc1 = RTLNS(eif_new_type(1828, 0x01).id, 1828, _OBJSIZ_0_0_0_1_0_0_0_0_);
		F1829_20489(RTCW(loc1), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L));
		ti4_1 = F1408_17326(RTCW(arg2));
		ti4_2 = F1408_17328(RTCW(arg2));
		ti4_3 = F1408_17330(RTCW(arg2));
		ti4_4 = F1408_17328(RTCW(arg2));
		F1260_14809(Current, arg1, ti4_1, ti4_2, ti4_3, ti4_4, loc1);
		ti4_1 = F1408_17326(RTCW(arg2));
		ti4_2 = F1408_17328(RTCW(arg2));
		ti4_3 = F1408_17326(RTCW(arg2));
		ti4_4 = F1408_17331(RTCW(arg2));
		F1260_14809(Current, arg1, ti4_1, ti4_2, ti4_3, ti4_4, loc1);
		ti4_1 = F1408_17326(RTCW(arg2));
		ti4_2 = F1408_17331(RTCW(arg2));
		ti4_3 = F1408_17330(RTCW(arg2));
		ti4_4 = F1408_17331(RTCW(arg2));
		F1260_14809(Current, arg1, ti4_1, (EIF_INTEGER_32) (ti4_2 - ((EIF_INTEGER_32) 1L)), ti4_3, (EIF_INTEGER_32) (ti4_4 - ((EIF_INTEGER_32) 1L)), loc1);
		ti4_1 = F1408_17330(RTCW(arg2));
		ti4_2 = F1408_17328(RTCW(arg2));
		ti4_3 = F1408_17330(RTCW(arg2));
		ti4_4 = F1408_17331(RTCW(arg2));
		F1260_14809(Current, arg1, (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L)), ti4_2, (EIF_INTEGER_32) (ti4_3 - ((EIF_INTEGER_32) 1L)), ti4_4, loc1);
		F1408_17340(RTCW(arg2), ((EIF_INTEGER_32) -1L), ((EIF_INTEGER_32) -1L));
	}
	tb1 = '\01';
	if (!F1258_14781(Current, arg3, ((EIF_INTEGER_32) 2L))) {
		tb1 = (EIF_BOOLEAN) !F1258_14781(Current, arg3, ((EIF_INTEGER_32) 1L));
	}
	if (tb1) {
		loc1 = F314_12741(Current);
		ti4_1 = F1408_17326(RTCW(arg2));
		ti4_2 = F1408_17328(RTCW(arg2));
		ti4_3 = F1408_17330(RTCW(arg2));
		ti4_4 = F1408_17328(RTCW(arg2));
		F1260_14809(Current, arg1, ti4_1, ti4_2, ti4_3, ti4_4, loc1);
		ti4_1 = F1408_17326(RTCW(arg2));
		ti4_2 = F1408_17328(RTCW(arg2));
		ti4_3 = F1408_17326(RTCW(arg2));
		ti4_4 = F1408_17331(RTCW(arg2));
		F1260_14809(Current, arg1, ti4_1, ti4_2, ti4_3, ti4_4, loc1);
		loc1 = F314_12743(Current);
		ti4_1 = F1408_17326(RTCW(arg2));
		ti4_2 = F1408_17331(RTCW(arg2));
		ti4_3 = F1408_17330(RTCW(arg2));
		ti4_4 = F1408_17331(RTCW(arg2));
		F1260_14809(Current, arg1, ti4_1, (EIF_INTEGER_32) (ti4_2 - ((EIF_INTEGER_32) 1L)), ti4_3, (EIF_INTEGER_32) (ti4_4 - ((EIF_INTEGER_32) 1L)), loc1);
		ti4_1 = F1408_17330(RTCW(arg2));
		ti4_2 = F1408_17328(RTCW(arg2));
		ti4_3 = F1408_17330(RTCW(arg2));
		ti4_4 = F1408_17331(RTCW(arg2));
		F1260_14809(Current, arg1, (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L)), ti4_2, (EIF_INTEGER_32) (ti4_3 - ((EIF_INTEGER_32) 1L)), ti4_4, loc1);
		F1408_17340(RTCW(arg2), ((EIF_INTEGER_32) -1L), ((EIF_INTEGER_32) -1L));
		loc1 = F314_12740(Current);
		ti4_1 = F1408_17326(RTCW(arg2));
		ti4_2 = F1408_17328(RTCW(arg2));
		ti4_3 = F1408_17330(RTCW(arg2));
		ti4_4 = F1408_17328(RTCW(arg2));
		F1260_14809(Current, arg1, ti4_1, ti4_2, ti4_3, ti4_4, loc1);
		ti4_1 = F1408_17326(RTCW(arg2));
		ti4_2 = F1408_17328(RTCW(arg2));
		ti4_3 = F1408_17326(RTCW(arg2));
		ti4_4 = F1408_17331(RTCW(arg2));
		F1260_14809(Current, arg1, ti4_1, ti4_2, ti4_3, ti4_4, loc1);
		loc1 = F314_12742(Current);
		ti4_1 = F1408_17326(RTCW(arg2));
		ti4_2 = F1408_17331(RTCW(arg2));
		ti4_3 = F1408_17330(RTCW(arg2));
		ti4_4 = F1408_17331(RTCW(arg2));
		F1260_14809(Current, arg1, ti4_1, (EIF_INTEGER_32) (ti4_2 - ((EIF_INTEGER_32) 1L)), ti4_3, (EIF_INTEGER_32) (ti4_4 - ((EIF_INTEGER_32) 1L)), loc1);
		ti4_1 = F1408_17330(RTCW(arg2));
		ti4_2 = F1408_17328(RTCW(arg2));
		ti4_3 = F1408_17330(RTCW(arg2));
		ti4_4 = F1408_17331(RTCW(arg2));
		F1260_14809(Current, arg1, (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L)), ti4_2, (EIF_INTEGER_32) (ti4_3 - ((EIF_INTEGER_32) 1L)), ti4_4, loc1);
	}
	if (F1258_14781(Current, arg3, ((EIF_INTEGER_32) 1L))) {
		loc1 = F314_12743(Current);
		ti4_1 = F1408_17326(RTCW(arg2));
		ti4_2 = F1408_17328(RTCW(arg2));
		ti4_3 = F1408_17330(RTCW(arg2));
		ti4_4 = F1408_17328(RTCW(arg2));
		F1260_14809(Current, arg1, ti4_1, ti4_2, ti4_3, ti4_4, loc1);
		ti4_1 = F1408_17326(RTCW(arg2));
		ti4_2 = F1408_17328(RTCW(arg2));
		ti4_3 = F1408_17326(RTCW(arg2));
		ti4_4 = F1408_17331(RTCW(arg2));
		F1260_14809(Current, arg1, ti4_1, ti4_2, ti4_3, ti4_4, loc1);
		loc1 = F314_12741(Current);
		ti4_1 = F1408_17326(RTCW(arg2));
		ti4_2 = F1408_17331(RTCW(arg2));
		ti4_3 = F1408_17330(RTCW(arg2));
		ti4_4 = F1408_17331(RTCW(arg2));
		F1260_14809(Current, arg1, ti4_1, (EIF_INTEGER_32) (ti4_2 - ((EIF_INTEGER_32) 1L)), ti4_3, (EIF_INTEGER_32) (ti4_4 - ((EIF_INTEGER_32) 1L)), loc1);
		ti4_1 = F1408_17330(RTCW(arg2));
		ti4_2 = F1408_17328(RTCW(arg2));
		ti4_3 = F1408_17330(RTCW(arg2));
		ti4_4 = F1408_17331(RTCW(arg2));
		F1260_14809(Current, arg1, (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L)), ti4_2, (EIF_INTEGER_32) (ti4_3 - ((EIF_INTEGER_32) 1L)), ti4_4, loc1);
		F1408_17340(RTCW(arg2), ((EIF_INTEGER_32) -1L), ((EIF_INTEGER_32) -1L));
		loc1 = F314_12742(Current);
		ti4_1 = F1408_17326(RTCW(arg2));
		ti4_2 = F1408_17328(RTCW(arg2));
		ti4_3 = F1408_17330(RTCW(arg2));
		ti4_4 = F1408_17328(RTCW(arg2));
		F1260_14809(Current, arg1, ti4_1, ti4_2, (EIF_INTEGER_32) (ti4_3 - ((EIF_INTEGER_32) 1L)), ti4_4, loc1);
		ti4_1 = F1408_17326(RTCW(arg2));
		ti4_2 = F1408_17328(RTCW(arg2));
		ti4_3 = F1408_17326(RTCW(arg2));
		ti4_4 = F1408_17331(RTCW(arg2));
		F1260_14809(Current, arg1, ti4_1, ti4_2, ti4_3, (EIF_INTEGER_32) (ti4_4 - ((EIF_INTEGER_32) 1L)), loc1);
	}
	RTLE;
}

/* {EV_CLASSIC_THEME_DRAWER_IMP}.draw_line */
void F1260_14809 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_INTEGER_32 arg5, EIF_REFERENCE arg6)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,arg6);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTGC;
	loc1 = RTLNS(eif_new_type(1318, 0x01).id, 1318, _OBJSIZ_0_2_0_3_0_1_0_0_);
	F1319_15554(RTCW(loc1), ((EIF_INTEGER_32) 1L), arg6);
	F1306_15261(RTCW(arg1), loc1);
	F1306_15293(RTCW(arg1), arg2, arg3, arg4, arg5);
	F1306_15266(RTCW(arg1));
	F519_14212(RTCW(loc1));
	RTLE;
}

void EIF_Minit1415 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
