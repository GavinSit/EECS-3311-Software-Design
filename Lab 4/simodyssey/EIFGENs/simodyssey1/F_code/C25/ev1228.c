/*
 * Code for class EV_SIMPLE_HELP_ENGINE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1228.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_SIMPLE_HELP_ENGINE}.help_title */

EIF_REFERENCE F319_12782 (EIF_REFERENCE Current)
{
	GTCX
	RTOUC (238,RTMS_EX_H("Contextual Help",15,712875120));
}

/* {EV_SIMPLE_HELP_ENGINE}.show */
void F319_12783 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,tr3);
	RTLIU(6);
	
	RTGC;
	loc1 = RTLNS(eif_new_type(1650, 0x01).id, 1650, _OBJSIZ_14_3_0_3_0_0_0_0_);
	F1650_18585(RTCW(loc1), arg1);
	{
		static EIF_TYPE_INDEX typarr0[] = {1193,0xFF01,1560,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr2 = RTLNSP2(typres0.id,EO_REF,((EIF_INTEGER_32) 1L),sizeof(EIF_REFERENCE), EIF_FALSE);
		RT_SPECIAL_COUNT(tr2) = 1L;
		memset(tr2, 0, RT_SPECIAL_VISIBLE_SIZE(tr2));
	}
	tr3 = F318_12767(Current);
	*((EIF_REFERENCE *)tr2+0) = (EIF_REFERENCE) tr3;
	RTAR(tr2,tr3);
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) F1194_3091)(tr2);
	F1650_18600(RTCW(loc1), tr1);
	tr1 = F318_12767(Current);
	tr1 = F1650_18603(RTCW(loc1), tr1);
	F1648_18570(RTCW(loc1), tr1);
	tr1 = RTOUCR(238,F319_12782, (Current));
	F1643_18473(RTCW(loc1), tr1);
	F1643_18467(RTCW(loc1));
	F1643_18479(RTCW(loc1));
	RTLE;
}

void EIF_Minit1228 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
