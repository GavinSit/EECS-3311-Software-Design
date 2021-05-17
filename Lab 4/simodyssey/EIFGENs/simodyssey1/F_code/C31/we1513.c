/*
 * Code for class WEL_NM_UP_DOWN_CONTROL
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1513.h"
#include <nmupdown.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_NM_UP_DOWN_CONTROL}.delta */
EIF_INTEGER_32 F1375_16535 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	return (EIF_INTEGER_32) (EIF_INTEGER_32) cwel_nm_updown_get_idelta(((NM_UPDOWN*) tp1));
}

/* {WEL_NM_UP_DOWN_CONTROL}.set_delta */
void F1375_16537 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	cwel_nm_updown_set_idelta((tp1), (arg1));
}

/* {WEL_NM_UP_DOWN_CONTROL}.structure_size */
static EIF_INTEGER_32 F1375_16538_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 442)

	
	RTEV;
	RTOTP;
	Result = (EIF_INTEGER_32) sizeof (NM_UPDOWN);
	RTOTE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F1375_16538 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,442,F1375_16538_body,(Current));
}

/* {WEL_NM_UP_DOWN_CONTROL}.c_size_of_nm_updown */
EIF_INTEGER_32 F1375_16539 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) sizeof (NM_UPDOWN);
	return Result;
}

/* {WEL_NM_UP_DOWN_CONTROL}.cwel_nm_updown_set_idelta */
void F1375_16541 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	cwel_nm_updown_set_idelta((arg1), (arg2));
}

/* {WEL_NM_UP_DOWN_CONTROL}.cwel_nm_updown_get_idelta */
EIF_INTEGER_32 F1375_16544 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) cwel_nm_updown_get_idelta(((NM_UPDOWN*) arg1));
	return Result;
}

void EIF_Minit1513 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
