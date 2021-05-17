/*
 * Code for class WEL_MONITOR_INFO
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1533.h"
#include <windows.h>
#include <rect.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_MONITOR_INFO}.make */
void F1395_16890 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1337_15830(Current);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	ti4_1 = F1395_16894(Current);
	(((MONITORINFO *)tp1)->cbSize = (DWORD)(ti4_1));
	RTLE;
}

/* {WEL_MONITOR_INFO}.monitor_area */
EIF_REFERENCE F1395_16891 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTGC;
	Result = RTLNS(eif_new_type(1407, 0x01).id, 1407, _OBJSIZ_0_1_0_0_0_1_0_0_);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	tp1 = (EIF_POINTER) &(((MONITORINFO *)tp1)->rcMonitor);
	F1296_15096(RTCW(Result), tp1);
	RTLE;
	return Result;
}

/* {WEL_MONITOR_INFO}.structure_size */
EIF_INTEGER_32 F1395_16894 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) (EIF_INTEGER_32) sizeof (MONITORINFO);
}

/* {WEL_MONITOR_INFO}.c_structure_size */
EIF_INTEGER_32 F1395_16895 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) sizeof (MONITORINFO);
	return Result;
}

/* {WEL_MONITOR_INFO}.cwin_monitorinfo_set_size */
void F1395_16896 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	(((MONITORINFO *)arg1)->cbSize = (DWORD)(arg2));
	
}

/* {WEL_MONITOR_INFO}.cwin_monitorinfo_get_monitor */
EIF_POINTER F1395_16897 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) &(((MONITORINFO *)arg1)->rcMonitor);
	
	return Result;
}

void EIF_Minit1533 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
