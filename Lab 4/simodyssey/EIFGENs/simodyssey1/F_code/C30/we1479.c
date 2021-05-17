/*
 * Code for class WEL_NM_COMBO_BOX_EX
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1479.h"
#include "nmcomboboxex.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_NM_COMBO_BOX_EX}.make_by_nmhdr */
void F1340_15877 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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

/* {WEL_NM_COMBO_BOX_EX}.hdr */
EIF_REFERENCE F1340_15878 (EIF_REFERENCE Current)
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
	Result = RTLNS(eif_new_type(1902, 0x01).id, 1902, _OBJSIZ_0_1_0_0_0_1_0_0_);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	tp1 = (EIF_POINTER) cwel_nm_comboboxex_get_hdr(((NMCOMBOBOXEX*) tp1));
	F1296_15096(RTCW(Result), tp1);
	RTLE;
	return Result;
}

/* {WEL_NM_COMBO_BOX_EX}.comboboxex_item */
EIF_REFERENCE F1340_15879 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTGC;
	Result = RTLNS(eif_new_type(1355, 0x01).id, 1355, _OBJSIZ_1_1_0_0_0_1_0_0_);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	tp1 = (EIF_POINTER) cwel_nm_comboboxex_get_ceitem(((NMCOMBOBOXEX*) tp1));
	F1296_15096(RTCW(Result), tp1);
	tr1 = F1903_22266(RTCV(F1340_15878(Current)));
	loc1 = tr1;
	loc1 = RTRV(eif_new_type(1938, 0x01),loc1);
	if (EIF_TEST(loc1)) {
		ti4_1 = F1356_16157(RTCW(Result));
		tr1 = F1939_23280(loc1, ti4_1);
		Result = (EIF_REFERENCE) tr1;
	}
	RTLE;
	return Result;
}

/* {WEL_NM_COMBO_BOX_EX}.structure_size */
static EIF_INTEGER_32 F1340_15880_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 517)

	
	RTEV;
	RTOTP;
	Result = (EIF_INTEGER_32) sizeof (NMCOMBOBOXEX);
	RTOTE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F1340_15880 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,517,F1340_15880_body,(Current));
}

/* {WEL_NM_COMBO_BOX_EX}.c_size_of_nm_comboboxex */
EIF_INTEGER_32 F1340_15881 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) sizeof (NMCOMBOBOXEX);
	return Result;
}

/* {WEL_NM_COMBO_BOX_EX}.cwel_nm_comboboxex_get_hdr */
EIF_POINTER F1340_15882 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = (EIF_POINTER) cwel_nm_comboboxex_get_hdr(((NMCOMBOBOXEX*) arg1));
	return Result;
}

/* {WEL_NM_COMBO_BOX_EX}.cwel_nm_comboboxex_get_ceitem */
EIF_POINTER F1340_15883 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = (EIF_POINTER) cwel_nm_comboboxex_get_ceitem(((NMCOMBOBOXEX*) arg1));
	return Result;
}

void EIF_Minit1479 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
