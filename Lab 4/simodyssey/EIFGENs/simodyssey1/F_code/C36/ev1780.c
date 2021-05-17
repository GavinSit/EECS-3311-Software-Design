/*
 * Code for class EV_LIST_ITEM_I
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1780.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_LIST_ITEM_I}.parent */
EIF_REFERENCE F1791_20211 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Result);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	Result = F1790_20206(Current);
	RTLE;
	return RTRV(eif_new_type(1683, 0x00), Result);
}

void EIF_Minit1780 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
