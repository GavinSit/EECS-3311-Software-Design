/*
 * Code for class WEL_PAINT_STRUCT
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1521.h"
#include <paint.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_PAINT_STRUCT}.rect_paint */
EIF_REFERENCE F1383_16657 (EIF_REFERENCE Current)
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
	tp1 = (EIF_POINTER) cwel_paintstruct_get_rcpaint(((PAINTSTRUCT*) tp1));
	F1296_15096(RTCW(Result), tp1);
	RTLE;
	return Result;
}

/* {WEL_PAINT_STRUCT}.structure_size */
static EIF_INTEGER_32 F1383_16658_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 433)

	
	RTEV;
	RTOTP;
	Result = (EIF_INTEGER_32) sizeof (PAINTSTRUCT);
	RTOTE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F1383_16658 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,433,F1383_16658_body,(Current));
}

/* {WEL_PAINT_STRUCT}.c_size_of_paintstruct */
EIF_INTEGER_32 F1383_16659 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) sizeof (PAINTSTRUCT);
	return Result;
}

/* {WEL_PAINT_STRUCT}.cwel_paintstruct_get_rcpaint */
EIF_POINTER F1383_16661 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = (EIF_POINTER) cwel_paintstruct_get_rcpaint(((PAINTSTRUCT*) arg1));
	return Result;
}

void EIF_Minit1521 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
