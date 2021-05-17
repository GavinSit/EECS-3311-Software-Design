/*
 * Code for class WEL_NM_COMBO_BOX_EX_ENDEDIT
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1478.h"
#include "nmcbeendedit.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_NM_COMBO_BOX_EX_ENDEDIT}.make_by_nmhdr */
void F1339_15864 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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

/* {WEL_NM_COMBO_BOX_EX_ENDEDIT}.structure_size */
static EIF_INTEGER_32 F1339_15870_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 518)

	
	RTEV;
	RTOTP;
	Result = (EIF_INTEGER_32) sizeof (NMCBEENDEDIT);
	RTOTE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F1339_15870 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,518,F1339_15870_body,(Current));
}

/* {WEL_NM_COMBO_BOX_EX_ENDEDIT}.c_size_of_nm_cbeendedit */
EIF_INTEGER_32 F1339_15871 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) sizeof (NMCBEENDEDIT);
	return Result;
}

void EIF_Minit1478 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
