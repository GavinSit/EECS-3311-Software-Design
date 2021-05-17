/*
 * Code for class WEL_TC_KEYDOWN
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1480.h"
#include "tckeydown.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_TC_KEYDOWN}.make_by_nmhdr */
void F1341_15884 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_0_1_0_0_0_0_);
	F1296_15096(Current, tp1);
	RTLE;
}

/* {WEL_TC_KEYDOWN}.virtual_key */
EIF_INTEGER_32 F1341_15886 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	return (EIF_INTEGER_32) (EIF_INTEGER_32) cwel_tc_keydown_get_wvkey((tp1));
}

/* {WEL_TC_KEYDOWN}.key_data */
EIF_INTEGER_32 F1341_15887 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	return (EIF_INTEGER_32) (EIF_INTEGER_32) cwel_tc_keydown_get_flags((tp1));
}

/* {WEL_TC_KEYDOWN}.structure_size */
static EIF_INTEGER_32 F1341_15888_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 516)

	
	RTEV;
	RTOTP;
	Result = (EIF_INTEGER_32) sizeof (TC_KEYDOWN);
	RTOTE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F1341_15888 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,516,F1341_15888_body,(Current));
}

/* {WEL_TC_KEYDOWN}.c_size_of_tc_keydown */
EIF_INTEGER_32 F1341_15889 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) sizeof (TC_KEYDOWN);
	return Result;
}

/* {WEL_TC_KEYDOWN}.cwel_tc_keydown_get_wvkey */
EIF_INTEGER_32 F1341_15891 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) cwel_tc_keydown_get_wvkey((arg1));
	return Result;
}

/* {WEL_TC_KEYDOWN}.cwel_tc_keydown_get_flags */
EIF_INTEGER_32 F1341_15892 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) cwel_tc_keydown_get_flags((arg1));
	return Result;
}

void EIF_Minit1480 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
