/*
 * Code for class EV_GDI_ALLOCATED_PENS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1340.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_GDI_ALLOCATED_PENS}.get */
EIF_REFERENCE F537_14240 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_REFERENCE arg3)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,arg3);
	RTLR(3,Result);
	RTLR(4,tr1);
	RTLIU(5);
	
	RTGC;
	(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_))++;
	loc1 = RTOUCR(486,F537_14241, (Current));
	F1518_17627(RTCW(loc1), arg1, arg2, arg3);
	if (F276_12013(Current, loc1)) {
		Result = F276_12015(Current, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_));
	} else {
		Result = RTLNS(eif_new_type(1318, 0x01).id, 1318, _OBJSIZ_0_2_0_3_0_1_0_0_);
		F1319_15556(RTCW(Result), arg1, arg2, arg3);
		F519_14209(RTCW(Result));
		tr1 = F1_14(loc1);
		loc1 = (EIF_REFERENCE) tr1;
		F1516_17607(RTCW(loc1), Result);
		F1516_17606(RTCW(loc1), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_));
		F276_12014(Current, loc1);
	}
	RTLE;
	return Result;
}

/* {EV_GDI_ALLOCATED_PENS}.reusable_search_object */
static EIF_REFERENCE F537_14241_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(486)

	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,loc2);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEV;
	RTGC;
	RTOTP;
	loc1 = RTLNS(eif_new_type(1828, 0x01).id, 1828, _OBJSIZ_0_0_0_1_0_0_0_0_);
	F1829_20488(RTCW(loc1));
	loc2 = RTLNS(eif_new_type(1380, 0x01).id, 1380, _OBJSIZ_0_1_0_0_0_1_0_0_);
	F1381_16631(RTCW(loc2), ((EIF_INTEGER_32) 0L), loc1, ((EIF_INTEGER_32) 0L));
	tr1 = RTLNS(eif_new_type(1517, 0x01).id, 1517, _OBJSIZ_1_0_0_8_0_0_0_0_);
	F1518_17618(RTCW(tr1), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 1L), loc2);
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F537_14241 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(486,F537_14241_body,(Current));
}

void EIF_Minit1340 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
