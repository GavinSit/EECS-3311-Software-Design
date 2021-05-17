/*
 * Code for class WEL_ABC_STRUCT
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1520.h"
#include "wingdi.h"
#include <wingdi.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_ABC_STRUCT}.structure_size */
static EIF_INTEGER_32 F1382_16648_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 325)

	
	RTEV;
	RTOTP;
	Result = (EIF_INTEGER_32) sizeof (ABC);
	RTOTE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F1382_16648 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,325,F1382_16648_body,(Current));
}

/* {WEL_ABC_STRUCT}.a */
EIF_INTEGER_32 F1382_16649 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	return (EIF_INTEGER_32) (EIF_INTEGER_32) (((ABC *)tp1)->abcA);
}

/* {WEL_ABC_STRUCT}.b */
EIF_INTEGER_32 F1382_16650 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	return (EIF_INTEGER_32) (EIF_INTEGER_32) (((ABC *)tp1)->abcB);
}

/* {WEL_ABC_STRUCT}.c */
EIF_INTEGER_32 F1382_16651 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	return (EIF_INTEGER_32) (EIF_INTEGER_32) (((ABC *)tp1)->abcC);
}

/* {WEL_ABC_STRUCT}.c_size_of_abc */
EIF_INTEGER_32 F1382_16652 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) sizeof (ABC);
	return Result;
}

/* {WEL_ABC_STRUCT}.cwel_abc_get_abca */
EIF_INTEGER_32 F1382_16653 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) (((ABC *)arg1)->abcA);
	
	return Result;
}

/* {WEL_ABC_STRUCT}.cwel_abc_get_abcb */
EIF_INTEGER_32 F1382_16654 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) (((ABC *)arg1)->abcB);
	
	return Result;
}

/* {WEL_ABC_STRUCT}.cwel_abc_get_abcc */
EIF_INTEGER_32 F1382_16655 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) (((ABC *)arg1)->abcC);
	
	return Result;
}

void EIF_Minit1520 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
