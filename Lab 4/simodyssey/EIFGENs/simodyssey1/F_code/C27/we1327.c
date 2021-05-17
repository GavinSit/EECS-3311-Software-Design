/*
 * Code for class WEL_WINDOWS_VERSION
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1327.h"
#include "wel_dynload.h"
#include "windows.h"
#include "eif_misc.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_WINDOWS_VERSION}.is_windows_95 */
EIF_BOOLEAN F500_14093 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	Result = '\0';
	tb1 = '\0';
	if (F500_14100(Current)) {
		tb1 = (EIF_BOOLEAN)(F500_14107(Current) == ((EIF_INTEGER_32) 4L));
	}
	if (tb1) {
		Result = (EIF_BOOLEAN) (F500_14108(Current) < ((EIF_INTEGER_32) 10L));
	}
	RTLE;
	return Result;
}

/* {WEL_WINDOWS_VERSION}.is_windows_9x */
EIF_BOOLEAN F500_14100 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	ti4_1 = RTOUCB(EIF_INTEGER_32,373,F500_14123, (Current));
	ti4_1 = eif_bit_and(ti4_1,(EIF_INTEGER_32) ((EIF_INTEGER_64) RTI64C(2147483648)));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L));
	RTLE;
	return Result;
}

/* {WEL_WINDOWS_VERSION}.is_windows_nt */
EIF_BOOLEAN F500_14101 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	ti4_1 = RTOUCB(EIF_INTEGER_32,373,F500_14123, (Current));
	ti4_1 = eif_bit_and(ti4_1,(EIF_INTEGER_32) ((EIF_INTEGER_64) RTI64C(2147483648)));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L));
	RTLE;
	return Result;
}

/* {WEL_WINDOWS_VERSION}.is_windows_xp_compatible */
EIF_BOOLEAN F500_14106 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	Result = '\01';
	tb1 = '\0';
	if (F500_14101(Current)) {
		tb2 = '\0';
		if ((EIF_BOOLEAN)(F500_14107(Current) == ((EIF_INTEGER_32) 5L))) {
			tb2 = (EIF_BOOLEAN) (F500_14108(Current) >= ((EIF_INTEGER_32) 1L));
		}
		tb1 = tb2;
	}
	if (!tb1) {
		Result = (EIF_BOOLEAN) (F500_14107(Current) > ((EIF_INTEGER_32) 5L));
	}
	RTLE;
	return Result;
}

/* {WEL_WINDOWS_VERSION}.major_version */
EIF_INTEGER_32 F500_14107 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	ti4_1 = RTOUCB(EIF_INTEGER_32,373,F500_14123, (Current));
	Result = eif_bit_and(ti4_1,((EIF_INTEGER_32) 255L));
	Result = (EIF_INTEGER_32) Result;
	RTLE;
	return Result;
}

/* {WEL_WINDOWS_VERSION}.minor_version */
EIF_INTEGER_32 F500_14108 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	ti4_1 = RTOUCB(EIF_INTEGER_32,373,F500_14123, (Current));
	ti4_1 = eif_bit_and(ti4_1,((EIF_INTEGER_32) 65280L));
	Result = eif_bit_shift_right((ti4_1),((EIF_INTEGER_32) 8L));
	RTLE;
	return Result;
}

/* {WEL_WINDOWS_VERSION}.comctl32_version */
static EIF_INTEGER_32 F500_14112_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 269)

	
	RTEV;
	RTOTP;
	Result = (EIF_INTEGER_32) cwin_get_comctl32dll_version();
	RTOTE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F500_14112 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,269,F500_14112_body,(Current));
}

/* {WEL_WINDOWS_VERSION}.internal_version */
static EIF_INTEGER_32 F500_14123_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 373)

	
	RTEV;
	RTOTP;
	Result = (EIF_INTEGER_32) GetVersion();
	RTOTE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F500_14123 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,373,F500_14123_body,(Current));
}

/* {WEL_WINDOWS_VERSION}.cwin_get_version */
EIF_INTEGER_32 F500_14124 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) GetVersion();
	
	return Result;
}

/* {WEL_WINDOWS_VERSION}.cwin_get_comctl32dll_version */
EIF_INTEGER_32 F500_14128 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) cwin_get_comctl32dll_version();
	
	return Result;
}

void EIF_Minit1327 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
