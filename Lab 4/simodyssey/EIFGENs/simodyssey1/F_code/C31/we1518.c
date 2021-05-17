/*
 * Code for class WEL_LOG_BITMAP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1518.h"
#include <logbmp.h>
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

/* {WEL_LOG_BITMAP}.make_by_bitmap */
void F1380_16599 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	F1337_15830(Current);
	tp1 = *(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_0_3_0_3_0_0_);
	ti4_1 = RTOUCB(EIF_INTEGER_32,437,F1380_16614, (Current));
	tp2 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	GetObject(((HGDIOBJ) tp1), ((int) ti4_1), ((LPVOID) tp2));
	RTLE;
}

/* {WEL_LOG_BITMAP}.width */
EIF_INTEGER_32 F1380_16601 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	return (EIF_INTEGER_32) (EIF_INTEGER_32) cwel_logbitmap_get_width((tp1));
}

/* {WEL_LOG_BITMAP}.height */
EIF_INTEGER_32 F1380_16602 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	return (EIF_INTEGER_32) (EIF_INTEGER_32) cwel_logbitmap_get_height((tp1));
}

/* {WEL_LOG_BITMAP}.bits_pixel */
EIF_INTEGER_32 F1380_16605 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	return (EIF_INTEGER_32) (EIF_INTEGER_32) cwel_logbitmap_get_bits_pixel((tp1));
}

/* {WEL_LOG_BITMAP}.structure_size */
static EIF_INTEGER_32 F1380_16614_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 437)

	
	RTEV;
	RTOTP;
	Result = (EIF_INTEGER_32) sizeof (BITMAP);
	RTOTE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F1380_16614 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,437,F1380_16614_body,(Current));
}

/* {WEL_LOG_BITMAP}.c_size_of_logbitmap */
EIF_INTEGER_32 F1380_16615 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) sizeof (BITMAP);
	return Result;
}

/* {WEL_LOG_BITMAP}.cwel_logbitmap_get_width */
EIF_INTEGER_32 F1380_16617 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) cwel_logbitmap_get_width((arg1));
	return Result;
}

/* {WEL_LOG_BITMAP}.cwel_logbitmap_get_height */
EIF_INTEGER_32 F1380_16618 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) cwel_logbitmap_get_height((arg1));
	return Result;
}

/* {WEL_LOG_BITMAP}.cwel_logbitmap_get_bits_pixel */
EIF_INTEGER_32 F1380_16621 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) cwel_logbitmap_get_bits_pixel((arg1));
	return Result;
}

/* {WEL_LOG_BITMAP}.cwin_get_object */
void F1380_16630 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3)
{
	GTCX
	
	
	GetObject(((HGDIOBJ) arg1), ((int) arg2), ((LPVOID) arg3));
}

void EIF_Minit1518 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
