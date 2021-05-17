/*
 * Code for class WEL_MEASURE_ITEM_STRUCT
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1536.h"
#include <measureitem.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_MEASURE_ITEM_STRUCT}.ctl_type */
EIF_INTEGER_32 F1398_16961 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	return (EIF_INTEGER_32) (EIF_INTEGER_32) cwel_measureitemstruct_get_ctltype((tp1));
}

/* {WEL_MEASURE_ITEM_STRUCT}.item_data */
EIF_INTEGER_32 F1398_16966 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	return (EIF_INTEGER_32) (EIF_INTEGER_32) cwel_measureitemstruct_get_itemdata((tp1));
}

/* {WEL_MEASURE_ITEM_STRUCT}.set_item_width */
void F1398_16967 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	cwel_measureitemstruct_set_itemwidth((tp1), (arg1));
}

/* {WEL_MEASURE_ITEM_STRUCT}.set_item_height */
void F1398_16968 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	cwel_measureitemstruct_set_itemheight((tp1), (arg1));
}

/* {WEL_MEASURE_ITEM_STRUCT}.structure_size */
static EIF_INTEGER_32 F1398_16969_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 365)

	
	RTEV;
	RTOTP;
	Result = (EIF_INTEGER_32) sizeof (MEASUREITEMSTRUCT);
	RTOTE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F1398_16969 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,365,F1398_16969_body,(Current));
}

/* {WEL_MEASURE_ITEM_STRUCT}.c_size_of_measureitemstruct */
EIF_INTEGER_32 F1398_16970 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) sizeof (MEASUREITEMSTRUCT);
	return Result;
}

/* {WEL_MEASURE_ITEM_STRUCT}.cwel_measureitemstruct_get_ctltype */
EIF_INTEGER_32 F1398_16971 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) cwel_measureitemstruct_get_ctltype((arg1));
	return Result;
}

/* {WEL_MEASURE_ITEM_STRUCT}.cwel_measureitemstruct_get_itemdata */
EIF_INTEGER_32 F1398_16976 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) cwel_measureitemstruct_get_itemdata((arg1));
	return Result;
}

/* {WEL_MEASURE_ITEM_STRUCT}.cwel_measureitemstruct_set_itemwidth */
void F1398_16977 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	cwel_measureitemstruct_set_itemwidth((arg1), (arg2));
}

/* {WEL_MEASURE_ITEM_STRUCT}.cwel_measureitemstruct_set_itemheight */
void F1398_16978 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	cwel_measureitemstruct_set_itemheight((arg1), (arg2));
}

void EIF_Minit1536 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
