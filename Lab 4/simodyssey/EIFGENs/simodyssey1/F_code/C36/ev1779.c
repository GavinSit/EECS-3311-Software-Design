/*
 * Code for class EV_ITEM_I
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1779.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_ITEM_I}.parent */
EIF_REFERENCE F1790_20206 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLIU(4);
	
	RTGC;
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R16916[Dtype(Current)-1958])(Current);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		Result = *(EIF_REFERENCE *)(loc1 + O15892[Dtype(loc1)-1695]);
		{
			static EIF_TYPE_INDEX typarr0[] = {1680,0xFF01,1667,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			Result = RTRV(typres0, Result);
		}
	}
	RTLE;
	return Result;
}

void EIF_Minit1779 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
