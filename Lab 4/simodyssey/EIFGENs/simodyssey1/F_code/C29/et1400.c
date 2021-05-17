/*
 * Code for class ETF_ABORT
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "et1400.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {ETF_ABORT}.abort */
void F1182_14711 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
	F101_10081(RTCW(tr1));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr1 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_1_);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,1475,0xFF01,0,0xFFFF};
		EIF_TYPE typres0;
		typarr0[5] = Dftype(Current);
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = Current;
	RTAR(tr2,Current);
	F88_9988(RTCW(tr1), tr2);
	RTLE;
}

void EIF_Minit1400 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
