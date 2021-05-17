/*
 * Code for class CELL [BOOLEAN]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ce894.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {CELL}.item */
EIF_BOOLEAN F492_1933 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current + O1718[Dtype(Current)-488]);
}


/* {CELL}.put */
void F492_1934 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	
	
	*(EIF_BOOLEAN *)(Current + O1718[Dtype(Current)-488]) = (EIF_BOOLEAN) arg1;
}

/* {CELL}.replace */
void F492_1935 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	
	
	*(EIF_BOOLEAN *)(Current + O1718[Dtype(Current)-488]) = (EIF_BOOLEAN) arg1;
}

void EIF_Minit894 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
