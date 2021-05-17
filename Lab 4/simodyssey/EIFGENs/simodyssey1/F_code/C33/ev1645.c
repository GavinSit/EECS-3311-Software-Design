/*
 * Code for class EV_INFORMATION_DIALOG
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1645.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_INFORMATION_DIALOG}.initialize */
void F1651_18619 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLIU(4);
	
	RTGC;
	F1650_18588(Current);
	tr1 = F318_12779(Current);
	F1643_18473(Current, tr1);
	tr1 = RTOUCR(232,F71_9837, (RTCV(RTOUCR(224,F1295_15095, (Current)))));
	F1650_18596(Current, tr1);
	tr1 = RTOUCR(232,F71_9837, (RTCV(RTOUCR(224,F1295_15095, (Current)))));
	F1645_18507(Current, tr1);
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
	F1650_18600(Current, tr1);
	tr1 = F318_12767(Current);
	tr1 = F1650_18603(Current, tr1);
	F1648_18570(Current, tr1);
	tr1 = F318_12767(Current);
	tr1 = F1650_18603(Current, tr1);
	F1648_18572(Current, tr1);
	RTLE;
}

void EIF_Minit1645 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
