/*
 * Code for class EV_TOOL_BAR_ITEM
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1665.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_TOOL_BAR_ITEM}.parent */
EIF_REFERENCE F1671_18803 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Result);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	Result = F1668_18782(Current);
	RTLE;
	return RTRV(eif_new_type(1682, 0x00), Result);
}

void EIF_Minit1665 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
