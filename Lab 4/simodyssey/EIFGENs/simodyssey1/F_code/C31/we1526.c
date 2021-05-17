/*
 * Code for class WEL_NM_TREE_VIEW_GETINFOTIP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1526.h"
#include <commctrl.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_NM_TREE_VIEW_GETINFOTIP}.hitem */
EIF_POINTER F1388_16796 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	return (EIF_POINTER) (EIF_POINTER) (((NMTVGETINFOTIP *)tp1)->hItem);
}

/* {WEL_NM_TREE_VIEW_GETINFOTIP}.structure_size */
static EIF_INTEGER_32 F1388_16798_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 415)

	
	RTEV;
	RTOTP;
	Result = (EIF_INTEGER_32) sizeof (NMTVGETINFOTIP);
	RTOTE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F1388_16798 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,415,F1388_16798_body,(Current));
}

/* {WEL_NM_TREE_VIEW_GETINFOTIP}.c_size_of_nm_tvgetinfotip */
EIF_INTEGER_32 F1388_16799 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) sizeof (NMTVGETINFOTIP);
	return Result;
}

/* {WEL_NM_TREE_VIEW_GETINFOTIP}.cwel_nmtvinfotip_get_hitem */
EIF_POINTER F1388_16803 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) (((NMTVGETINFOTIP *)arg1)->hItem);
	
	return Result;
}

void EIF_Minit1526 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
