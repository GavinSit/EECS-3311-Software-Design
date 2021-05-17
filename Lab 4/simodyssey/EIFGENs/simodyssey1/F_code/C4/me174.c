/*
 * Code for class MEMORY
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "me174.h"
#include "eif_memory.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {MEMORY}.dispose */
void F1288_4610 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {MEMORY}.full_coalesce */
void F1288_4612 (EIF_REFERENCE Current)
{
	GTCX
	
	eif_mem_coalesc();
	
}

/* {MEMORY}.full_collect */
void F1288_4614 (EIF_REFERENCE Current)
{
	GTCX
	
	plsc();
	
}

void EIF_Minit174 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
