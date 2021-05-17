/*
 * Code for class WEL_PALETTE_ENTRY
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1506.h"
#include <palentry.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_PALETTE_ENTRY}.make */
void F1367_16419 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1337_15830(Current);
	F1367_16424(Current, arg1);
	F1367_16425(Current, arg2);
	F1367_16426(Current, arg3);
	F1367_16427(Current, arg4);
	RTLE;
}

/* {WEL_PALETTE_ENTRY}.red */
EIF_INTEGER_32 F1367_16420 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	return (EIF_INTEGER_32) (EIF_INTEGER_32) cwel_palette_entry_get_red((tp1));
}

/* {WEL_PALETTE_ENTRY}.green */
EIF_INTEGER_32 F1367_16421 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	return (EIF_INTEGER_32) (EIF_INTEGER_32) cwel_palette_entry_get_green((tp1));
}

/* {WEL_PALETTE_ENTRY}.blue */
EIF_INTEGER_32 F1367_16422 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	return (EIF_INTEGER_32) (EIF_INTEGER_32) cwel_palette_entry_get_blue((tp1));
}

/* {WEL_PALETTE_ENTRY}.flags */
EIF_INTEGER_32 F1367_16423 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	return (EIF_INTEGER_32) (EIF_INTEGER_32) cwel_palette_entry_get_flags((tp1));
}

/* {WEL_PALETTE_ENTRY}.set_red */
void F1367_16424 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	cwel_palette_entry_set_red((tp1), (arg1));
}

/* {WEL_PALETTE_ENTRY}.set_green */
void F1367_16425 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	cwel_palette_entry_set_green((tp1), (arg1));
}

/* {WEL_PALETTE_ENTRY}.set_blue */
void F1367_16426 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	cwel_palette_entry_set_blue((tp1), (arg1));
}

/* {WEL_PALETTE_ENTRY}.set_flags */
void F1367_16427 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	cwel_palette_entry_set_flags((tp1), (arg1));
}

/* {WEL_PALETTE_ENTRY}.structure_size */
static EIF_INTEGER_32 F1367_16428_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 456)

	
	RTEV;
	RTOTP;
	Result = (EIF_INTEGER_32) sizeof (PALETTEENTRY);
	RTOTE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F1367_16428 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,456,F1367_16428_body,(Current));
}

/* {WEL_PALETTE_ENTRY}.c_size_of_palette_entry */
EIF_INTEGER_32 F1367_16429 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) sizeof (PALETTEENTRY);
	return Result;
}

/* {WEL_PALETTE_ENTRY}.cwel_palette_entry_set_red */
void F1367_16430 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	cwel_palette_entry_set_red((arg1), (arg2));
}

/* {WEL_PALETTE_ENTRY}.cwel_palette_entry_set_green */
void F1367_16431 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	cwel_palette_entry_set_green((arg1), (arg2));
}

/* {WEL_PALETTE_ENTRY}.cwel_palette_entry_set_blue */
void F1367_16432 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	cwel_palette_entry_set_blue((arg1), (arg2));
}

/* {WEL_PALETTE_ENTRY}.cwel_palette_entry_set_flags */
void F1367_16433 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	cwel_palette_entry_set_flags((arg1), (arg2));
}

/* {WEL_PALETTE_ENTRY}.cwel_palette_entry_get_red */
EIF_INTEGER_32 F1367_16434 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) cwel_palette_entry_get_red((arg1));
	return Result;
}

/* {WEL_PALETTE_ENTRY}.cwel_palette_entry_get_green */
EIF_INTEGER_32 F1367_16435 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) cwel_palette_entry_get_green((arg1));
	return Result;
}

/* {WEL_PALETTE_ENTRY}.cwel_palette_entry_get_blue */
EIF_INTEGER_32 F1367_16436 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) cwel_palette_entry_get_blue((arg1));
	return Result;
}

/* {WEL_PALETTE_ENTRY}.cwel_palette_entry_get_flags */
EIF_INTEGER_32 F1367_16437 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) cwel_palette_entry_get_flags((arg1));
	return Result;
}

void EIF_Minit1506 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
