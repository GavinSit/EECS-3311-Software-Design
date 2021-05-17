/*
 * Code for class WEL_SYSTEM_METRICS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1832.h"
#include <wel.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_SYSTEM_METRICS}.dialog_window_frame_width */
EIF_INTEGER_32 F1849_20903 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) (EIF_INTEGER_32) GetSystemMetrics(((int) ((EIF_INTEGER_32) 7L)));
}

/* {WEL_SYSTEM_METRICS}.dialog_window_frame_height */
EIF_INTEGER_32 F1849_20904 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) (EIF_INTEGER_32) GetSystemMetrics(((int) ((EIF_INTEGER_32) 8L)));
}

/* {WEL_SYSTEM_METRICS}.window_frame_width */
EIF_INTEGER_32 F1849_20907 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) (EIF_INTEGER_32) GetSystemMetrics(((int) ((EIF_INTEGER_32) 32L)));
}

/* {WEL_SYSTEM_METRICS}.window_frame_height */
EIF_INTEGER_32 F1849_20908 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) (EIF_INTEGER_32) GetSystemMetrics(((int) ((EIF_INTEGER_32) 33L)));
}

/* {WEL_SYSTEM_METRICS}.virtual_screen_x */
EIF_INTEGER_32 F1849_20924 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) (EIF_INTEGER_32) GetSystemMetrics(((int) ((EIF_INTEGER_32) 76L)));
}

/* {WEL_SYSTEM_METRICS}.virtual_screen_y */
EIF_INTEGER_32 F1849_20925 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) (EIF_INTEGER_32) GetSystemMetrics(((int) ((EIF_INTEGER_32) 77L)));
}

/* {WEL_SYSTEM_METRICS}.virtual_screen_width */
EIF_INTEGER_32 F1849_20926 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) (EIF_INTEGER_32) GetSystemMetrics(((int) ((EIF_INTEGER_32) 78L)));
}

/* {WEL_SYSTEM_METRICS}.virtual_screen_height */
EIF_INTEGER_32 F1849_20927 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) (EIF_INTEGER_32) GetSystemMetrics(((int) ((EIF_INTEGER_32) 79L)));
}

/* {WEL_SYSTEM_METRICS}.title_bar_height */
EIF_INTEGER_32 F1849_20932 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) (EIF_INTEGER_32) GetSystemMetrics(((int) ((EIF_INTEGER_32) 4L)));
}

/* {WEL_SYSTEM_METRICS}.menu_bar_height */
EIF_INTEGER_32 F1849_20938 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) (EIF_INTEGER_32) GetSystemMetrics(((int) ((EIF_INTEGER_32) 15L)));
}

/* {WEL_SYSTEM_METRICS}.is_remote_session */
EIF_BOOLEAN F1849_20946 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	
	RTGC;
	ti4_1 = (EIF_INTEGER_32) GetSystemMetrics(((int) ((EIF_INTEGER_32) 4096L)));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L));
	return Result;
}

/* {WEL_SYSTEM_METRICS}.cwin_get_system_metrics */
EIF_INTEGER_32 F1849_20947 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) GetSystemMetrics(((int) arg1));
	return Result;
}

void EIF_Minit1832 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
