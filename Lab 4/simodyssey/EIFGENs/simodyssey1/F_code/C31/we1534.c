/*
 * Code for class WEL_INIT_COMMCTRL_EX
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1534.h"
#include "cctrl.h"
#include "initcommctrlex.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_INIT_COMMCTRL_EX}.make_with_flags */
void F1396_16901 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1337_15830(Current);
	ti4_1 = RTOUCB(EIF_INTEGER_32,369,F1396_16904, (Current));
	F1396_16906(Current, ti4_1);
	F1396_16903(Current, arg1);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	loc1 = (EIF_BOOLEAN) EIF_TEST(InitCommonControlsEx(((LPINITCOMMONCONTROLSEX) tp1)));
	RTLE;
}

/* {WEL_INIT_COMMCTRL_EX}.set_dwicc */
void F1396_16903 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	cwel_initcommctrlex_set_dwicc((tp1), (arg1));
}

/* {WEL_INIT_COMMCTRL_EX}.structure_size */
static EIF_INTEGER_32 F1396_16904_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 369)

	
	RTEV;
	RTOTP;
	Result = (EIF_INTEGER_32) sizeof (INITCOMMONCONTROLSEX);
	RTOTE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F1396_16904 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,369,F1396_16904_body,(Current));
}

/* {WEL_INIT_COMMCTRL_EX}.set_dwsize */
void F1396_16906 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	cwel_initcommctrlex_set_dwsize((tp1), (arg1));
}

/* {WEL_INIT_COMMCTRL_EX}.c_size_of_initcommctrlex */
EIF_INTEGER_32 F1396_16907 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) sizeof (INITCOMMONCONTROLSEX);
	return Result;
}

/* {WEL_INIT_COMMCTRL_EX}.cwel_initcommctrlex_set_dwsize */
void F1396_16908 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	cwel_initcommctrlex_set_dwsize((arg1), (arg2));
}

/* {WEL_INIT_COMMCTRL_EX}.cwel_initcommctrlex_set_dwicc */
void F1396_16909 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	cwel_initcommctrlex_set_dwicc((arg1), (arg2));
}

/* {WEL_INIT_COMMCTRL_EX}.cwin_init_common_controls_ex */
EIF_BOOLEAN F1396_16912 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	
	Result = (EIF_BOOLEAN) EIF_TEST(InitCommonControlsEx(((LPINITCOMMONCONTROLSEX) arg1)));
	return Result;
}

void EIF_Minit1534 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
