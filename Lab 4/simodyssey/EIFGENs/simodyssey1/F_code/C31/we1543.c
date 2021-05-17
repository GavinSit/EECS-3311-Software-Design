/*
 * Code for class WEL_SIZE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1543.h"
#include <wsize.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_SIZE}.make */
void F1405_17171 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1337_15830(Current);
	F1405_17175(Current, arg1);
	F1405_17176(Current, arg2);
	RTLE;
}

/* {WEL_SIZE}.default_create */
void F1405_17172 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1337_15830(Current);
	F1405_17175(Current, ((EIF_INTEGER_32) 0L));
	F1405_17176(Current, ((EIF_INTEGER_32) 0L));
	RTLE;
}

/* {WEL_SIZE}.width */
EIF_INTEGER_32 F1405_17173 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	return (EIF_INTEGER_32) (EIF_INTEGER_32) cwel_size_get_cx((tp1));
}

/* {WEL_SIZE}.height */
EIF_INTEGER_32 F1405_17174 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	return (EIF_INTEGER_32) (EIF_INTEGER_32) cwel_size_get_cy((tp1));
}

/* {WEL_SIZE}.set_width */
void F1405_17175 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	cwel_size_set_cx((tp1), (arg1));
}

/* {WEL_SIZE}.set_height */
void F1405_17176 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	cwel_size_set_cy((tp1), (arg1));
}

/* {WEL_SIZE}.structure_size */
static EIF_INTEGER_32 F1405_17177_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 349)

	
	RTEV;
	RTOTP;
	Result = (EIF_INTEGER_32) sizeof (SIZE);
	RTOTE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F1405_17177 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,349,F1405_17177_body,(Current));
}

/* {WEL_SIZE}.cwel_size_of_size */
EIF_INTEGER_32 F1405_17178 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) sizeof (SIZE);
	return Result;
}

/* {WEL_SIZE}.cwel_size_get_cx */
EIF_INTEGER_32 F1405_17179 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) cwel_size_get_cx((arg1));
	return Result;
}

/* {WEL_SIZE}.cwel_size_get_cy */
EIF_INTEGER_32 F1405_17180 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) cwel_size_get_cy((arg1));
	return Result;
}

/* {WEL_SIZE}.cwel_size_set_cx */
void F1405_17181 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	cwel_size_set_cx((arg1), (arg2));
}

/* {WEL_SIZE}.cwel_size_set_cy */
void F1405_17182 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	cwel_size_set_cy((arg1), (arg2));
}

void EIF_Minit1543 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
