/*
 * Code for class WEL_NM_LIST_VIEW_GETINFOTIP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1530.h"
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

/* {WEL_NM_LIST_VIEW_GETINFOTIP}.psztext */
EIF_POINTER F1392_16854 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	return (EIF_POINTER) (EIF_POINTER) (((NMLVGETINFOTIP *)tp1)->pszText);
}

/* {WEL_NM_LIST_VIEW_GETINFOTIP}.cchtextmax */
EIF_INTEGER_32 F1392_16855 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	return (EIF_INTEGER_32) (EIF_INTEGER_32) (((NMLVGETINFOTIP *)tp1)->cchTextMax);
}

/* {WEL_NM_LIST_VIEW_GETINFOTIP}.iitem */
EIF_INTEGER_32 F1392_16856 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	return (EIF_INTEGER_32) (EIF_INTEGER_32) (((NMLVGETINFOTIP *)tp1)->iItem);
}

/* {WEL_NM_LIST_VIEW_GETINFOTIP}.structure_size */
static EIF_INTEGER_32 F1392_16858_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 406)

	
	RTEV;
	RTOTP;
	Result = (EIF_INTEGER_32) sizeof (NMLVGETINFOTIP);
	RTOTE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F1392_16858 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,406,F1392_16858_body,(Current));
}

/* {WEL_NM_LIST_VIEW_GETINFOTIP}.c_size_of_nm_lvgetinfotip */
EIF_INTEGER_32 F1392_16859 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) sizeof (NMLVGETINFOTIP);
	return Result;
}

/* {WEL_NM_LIST_VIEW_GETINFOTIP}.cwel_nmlvinfotip_get_psztext */
EIF_POINTER F1392_16862 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) (((NMLVGETINFOTIP *)arg1)->pszText);
	
	return Result;
}

/* {WEL_NM_LIST_VIEW_GETINFOTIP}.cwel_nmlvinfotip_get_cchtextmax */
EIF_INTEGER_32 F1392_16863 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) (((NMLVGETINFOTIP *)arg1)->cchTextMax);
	
	return Result;
}

/* {WEL_NM_LIST_VIEW_GETINFOTIP}.cwel_nmlvinfotip_get_iitem */
EIF_INTEGER_32 F1392_16864 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) (((NMLVGETINFOTIP *)arg1)->iItem);
	
	return Result;
}

void EIF_Minit1530 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
