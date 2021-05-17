/*
 * Code for class EV_HORIZONTAL_BOX_I
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1747.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_HORIZONTAL_BOX_I}.pointer_offset */
EIF_INTEGER_32 F1758_19876 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = RTOUCR(206,F1714_19338, (RTCV(F1751_19782(Current))));
	tr1 = F1627_18194(RTCW(tr1));
	Result = F1169_14635(RTCW(tr1));
	ti4_1 = F1970_24044(Current);
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result - ti4_1);
	RTLE;
	return Result;
}

/* {EV_HORIZONTAL_BOX_I}.docking_dimension_of_current_item */
EIF_INTEGER_32 F1758_19877 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = F1630_18246(RTCV(F1696_18976(Current)));
	Result = F1614_18068(RTCW(tr1));
	RTLE;
	return Result;
}

/* {EV_HORIZONTAL_BOX_I}.docking_dimension_of_current */
EIF_INTEGER_32 F1758_19878 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) F1970_24041(Current);
}

void EIF_Minit1747 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
