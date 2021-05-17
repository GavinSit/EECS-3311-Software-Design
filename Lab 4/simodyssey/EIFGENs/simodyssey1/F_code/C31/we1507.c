/*
 * Code for class WEL_LOG_PALETTE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1507.h"
#include <logpal.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_LOG_PALETTE}.make */
void F1368_16438 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_) = (EIF_INTEGER_32) arg2;
	F1337_15830(Current);
	F1368_16442(Current, arg1);
	F1368_16443(Current, arg2);
	RTLE;
}

/* {WEL_LOG_PALETTE}.set_version */
void F1368_16442 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
	cwel_log_palette_set_version((tp1), (arg1));
}

/* {WEL_LOG_PALETTE}.set_num_entries */
void F1368_16443 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
	cwel_log_palette_set_num_entries((tp1), (arg1));
}

/* {WEL_LOG_PALETTE}.set_pal_entry */
void F1368_16444 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg2);
	RTLIU(2);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
	ti4_1 = F1367_16420(RTCW(arg2));
	cwel_log_palette_set_pal_entry_red((tp1), (arg1), (ti4_1));
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
	ti4_1 = F1367_16421(RTCW(arg2));
	cwel_log_palette_set_pal_entry_green((tp1), (arg1), (ti4_1));
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
	ti4_1 = F1367_16422(RTCW(arg2));
	cwel_log_palette_set_pal_entry_blue((tp1), (arg1), (ti4_1));
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
	ti4_1 = F1367_16423(RTCW(arg2));
	cwel_log_palette_set_pal_entry_flags((tp1), (arg1), (ti4_1));
	RTLE;
}

/* {WEL_LOG_PALETTE}.structure_size */
EIF_INTEGER_32 F1368_16445 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	Result = (EIF_INTEGER_32) sizeof (LOGPALETTE);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_);
	ti4_2 = (EIF_INTEGER_32) sizeof (PALETTEENTRY);
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result + (EIF_INTEGER_32) (ti4_1 * ti4_2));
	RTLE;
	return Result;
}

/* {WEL_LOG_PALETTE}.c_size_of_log_palette */
EIF_INTEGER_32 F1368_16447 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) sizeof (LOGPALETTE);
	return Result;
}

/* {WEL_LOG_PALETTE}.c_size_of_pal_entry */
EIF_INTEGER_32 F1368_16448 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) sizeof (PALETTEENTRY);
	return Result;
}

/* {WEL_LOG_PALETTE}.cwel_log_palette_set_version */
void F1368_16449 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	cwel_log_palette_set_version((arg1), (arg2));
}

/* {WEL_LOG_PALETTE}.cwel_log_palette_set_num_entries */
void F1368_16450 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	cwel_log_palette_set_num_entries((arg1), (arg2));
}

/* {WEL_LOG_PALETTE}.cwel_log_palette_set_pal_entry_red */
void F1368_16451 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	
	
	cwel_log_palette_set_pal_entry_red((arg1), (arg2), (arg3));
}

/* {WEL_LOG_PALETTE}.cwel_log_palette_set_pal_entry_green */
void F1368_16452 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	
	
	cwel_log_palette_set_pal_entry_green((arg1), (arg2), (arg3));
}

/* {WEL_LOG_PALETTE}.cwel_log_palette_set_pal_entry_blue */
void F1368_16453 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	
	
	cwel_log_palette_set_pal_entry_blue((arg1), (arg2), (arg3));
}

/* {WEL_LOG_PALETTE}.cwel_log_palette_set_pal_entry_flags */
void F1368_16454 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	
	
	cwel_log_palette_set_pal_entry_flags((arg1), (arg2), (arg3));
}

void EIF_Minit1507 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
