/*
 * Code for class EV_MENU_SEPARATOR_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1996.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_MENU_SEPARATOR_IMP}.create_radio_group */
void F2013_25532 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	{
		static EIF_TYPE_INDEX typarr0[] = {911,0xFF01,2013,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNSMART(typres0.id);
	}
	F912_3515(RTCW(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_25_) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {EV_MENU_SEPARATOR_IMP}.set_radio_group */
void F2013_25533 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_25_) = (EIF_REFERENCE) arg1;
}

/* {EV_MENU_SEPARATOR_IMP}.remove_radio_group */
void F2013_25534 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_REFERENCE *)(Current + _REFACS_25_) = (EIF_REFERENCE) NULL;
}

/* {EV_MENU_SEPARATOR_IMP}.on_draw_item */
void F2013_25535 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc9 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc10 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc11 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc12 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(7);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,loc2);
	RTLR(3,loc3);
	RTLR(4,Current);
	RTLR(5,loc5);
	RTLR(6,loc6);
	RTLIU(7);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(RTCW(arg1));
	loc2 = F1904_22283(RTCW(arg1));
	loc7 = F1408_17332(RTCW(loc2));
	loc8 = F1408_17333(RTCW(loc2));
	loc9 = F1408_17328(RTCW(loc2));
	loc10 = F1408_17326(RTCW(loc2));
	loc11 = F1408_17330(RTCW(loc2));
	loc12 = F1408_17331(RTCW(loc2));
	loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc8 / ((EIF_INTEGER_32) 2L));
	loc3 = RTLNS(eif_new_type(1828, 0x01).id, 1828, _OBJSIZ_0_0_0_1_0_0_0_0_);
	ti4_1 = ((EIF_INTEGER_32) 4L);
	F1829_20490(RTCW(loc3), ti4_1);
	if ((EIF_BOOLEAN) (loc4 > ((EIF_INTEGER_32) 1L))) {
		loc5 = RTLNS(eif_new_type(1407, 0x01).id, 1407, _OBJSIZ_0_1_0_0_0_1_0_0_);
		F1408_17321(RTCW(loc5), loc10, loc9, loc11, (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc9 + loc4) - ((EIF_INTEGER_32) 1L)));
		F2011_25506(Current, loc1, loc5, loc3);
	}
	loc6 = F1896_22122(Current);
	F1306_15261(RTCW(loc1), loc6);
	F1306_15293(RTCW(loc1), loc10, (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc9 + loc4) - ((EIF_INTEGER_32) 1L)), loc11, (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc9 + loc4) - ((EIF_INTEGER_32) 1L)));
	F1306_15266(RTCW(loc1));
	F519_14213(RTCW(loc6));
	loc6 = F1896_22123(Current);
	F1306_15261(RTCW(loc1), loc6);
	F1306_15293(RTCW(loc1), loc10, (EIF_INTEGER_32) (loc9 + loc4), loc11, (EIF_INTEGER_32) (loc9 + loc4));
	F1306_15266(RTCW(loc1));
	F519_14213(RTCW(loc6));
	if ((EIF_BOOLEAN) (loc4 < loc8)) {
		loc5 = RTLNS(eif_new_type(1407, 0x01).id, 1407, _OBJSIZ_0_1_0_0_0_1_0_0_);
		F1408_17321(RTCW(loc5), loc10, (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc9 + loc4) + ((EIF_INTEGER_32) 1L)), loc11, loc12);
		F2011_25506(Current, loc1, loc5, loc3);
	}
	RTLE;
}

/* {EV_MENU_SEPARATOR_IMP}.on_measure_item */
void F2013_25536 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	F1398_16967(RTCW(arg1), ((EIF_INTEGER_32) 0L));
	ti4_1 = F2013_25537(Current);
	F1398_16968(RTCW(arg1), ti4_1);
	RTLE;
}

/* {EV_MENU_SEPARATOR_IMP}.desired_height */
EIF_INTEGER_32 F2013_25537 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTGC;
	tr1 = F502_14140(Current);
	tr2 = RTMS_EX_H("W",1,87);
	Result = F1885_21704(RTCW(tr1), tr2);
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (Result / ((EIF_INTEGER_32) 2L)) + ((EIF_INTEGER_32) 2L));
	RTLE;
	return Result;
}

void EIF_Minit1996 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
