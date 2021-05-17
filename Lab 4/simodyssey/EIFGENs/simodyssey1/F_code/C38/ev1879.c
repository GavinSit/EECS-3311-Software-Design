/*
 * Code for class EV_SYSTEM_PEN_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1879.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_SYSTEM_PEN_IMP}.shadow_pen */
EIF_REFERENCE F1896_22122 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	loc1 = RTLNS(eif_new_type(1828, 0x01).id, 1828, _OBJSIZ_0_0_0_1_0_0_0_0_);
	F1829_20490(RTCW(loc1), ((EIF_INTEGER_32) 16L));
	tr1 = RTLNS(eif_new_type(1318, 0x01).id, 1318, _OBJSIZ_0_2_0_3_0_1_0_0_);
	F1319_15553(RTCW(tr1), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 1L), loc1);
	RTLE;
	return (EIF_REFERENCE) tr1;
}

/* {EV_SYSTEM_PEN_IMP}.highlight_pen */
EIF_REFERENCE F1896_22123 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	loc1 = RTLNS(eif_new_type(1828, 0x01).id, 1828, _OBJSIZ_0_0_0_1_0_0_0_0_);
	F1829_20490(RTCW(loc1), ((EIF_INTEGER_32) 20L));
	tr1 = RTLNS(eif_new_type(1318, 0x01).id, 1318, _OBJSIZ_0_2_0_3_0_1_0_0_);
	F1319_15553(RTCW(tr1), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 1L), loc1);
	RTLE;
	return (EIF_REFERENCE) tr1;
}

void EIF_Minit1879 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
