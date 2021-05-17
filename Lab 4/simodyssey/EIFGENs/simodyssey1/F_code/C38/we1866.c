/*
 * Code for class WEL_UNIT_CONVERSION
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1866.h"
#include <windows.h>
#include "eif_helpers.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_UNIT_CONVERSION}.point_to_pixel */
EIF_INTEGER_32 F1883_21670 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,arg1);
	RTLIU(1);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(RTCW(arg1) + O12527[Dtype(arg1)-1295]);
	ti4_1 = (EIF_INTEGER_32) GetDeviceCaps(((HDC) tp1), ((int) ((EIF_INTEGER_32) 90L)));
	Result = (EIF_INTEGER_32) MulDiv(((int) ti4_1), ((int) arg2), ((int) (EIF_INTEGER_32) (((EIF_INTEGER_32) 72L) * arg3)));
	RTLE;
	return Result;
}

/* {WEL_UNIT_CONVERSION}.pixel_to_point */
EIF_INTEGER_32 F1883_21671 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,arg1);
	RTLIU(1);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(RTCW(arg1) + O12527[Dtype(arg1)-1295]);
	ti4_1 = (EIF_INTEGER_32) GetDeviceCaps(((HDC) tp1), ((int) ((EIF_INTEGER_32) 90L)));
	Result = (EIF_INTEGER_32) MulDiv(((int) arg2), ((int) ((EIF_INTEGER_32) 72L)), ((int) ti4_1));
	RTLE;
	return Result;
}

/* {WEL_UNIT_CONVERSION}.logical_to_pixel */
EIF_INTEGER_32 F1883_21675 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,arg1);
	RTLR(4,loc2);
	RTLR(5,loc3);
	RTLIU(6);
	
	RTGC;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1369,0xFF01,1905,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		loc1 = RTLNS(typres0.id, 1369, _OBJSIZ_0_1_0_2_0_1_0_0_);
	}
	tr1 = RTLNS(eif_new_type(1905, 0x01).id, 1905, _OBJSIZ_0_1_0_0_0_1_0_0_);
	F1906_22334(RTCW(tr1), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L));
	ti4_1 = RTOUCB(EIF_INTEGER_32,290,F1906_22346, (RTCW(tr1)));
	F1370_16476(RTCW(loc1), ((EIF_INTEGER_32) 2L), ti4_1);
	tr1 = RTLNS(eif_new_type(1905, 0x01).id, 1905, _OBJSIZ_0_1_0_0_0_1_0_0_);
	F1906_22334(RTCW(tr1), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L));
	F1370_16477(RTCW(loc1), tr1, ((EIF_INTEGER_32) 0L));
	tr1 = RTLNS(eif_new_type(1905, 0x01).id, 1905, _OBJSIZ_0_1_0_0_0_1_0_0_);
	F1906_22334(RTCW(tr1), ((EIF_INTEGER_32) 0L), arg2);
	F1370_16477(RTCW(loc1), tr1, ((EIF_INTEGER_32) 1L));
	tp1 = *(EIF_POINTER *)(RTCW(arg1) + O12527[Dtype(arg1)-1295]);
	tp2 = *(EIF_POINTER *)(RTCW(loc1)+ _PTROFF_0_1_0_2_0_0_);
	LPtoDP(((HDC) tp1), ((LPPOINT) tp2), ((int) ((EIF_INTEGER_32) 2L)));
	loc2 = RTLNS(eif_new_type(1905, 0x01).id, 1905, _OBJSIZ_0_1_0_0_0_1_0_0_);
	tp1 = F1370_16478(RTCW(loc1), ((EIF_INTEGER_32) 0L));
	F1296_15096(RTCW(loc2), tp1);
	loc3 = RTLNS(eif_new_type(1905, 0x01).id, 1905, _OBJSIZ_0_1_0_0_0_1_0_0_);
	tp1 = F1370_16478(RTCW(loc1), ((EIF_INTEGER_32) 1L));
	F1296_15096(RTCW(loc3), tp1);
	ti4_1 = F1906_22337(RTCW(loc3));
	ti4_2 = F1906_22337(RTCW(loc2));
	Result = eif_abs_int32 ((EIF_INTEGER_32) (ti4_1 - ti4_2));
	RTLE;
	return Result;
}

/* {WEL_UNIT_CONVERSION}.cwin_lp_to_dp */
void F1883_21677 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	
	
	LPtoDP(((HDC) arg1), ((LPPOINT) arg2), ((int) arg3));
}

/* {WEL_UNIT_CONVERSION}.mul_div */
EIF_INTEGER_32 F1883_21678 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) MulDiv(((int) arg1), ((int) arg2), ((int) arg3));
	return Result;
}

/* {WEL_UNIT_CONVERSION}.get_device_caps */
EIF_INTEGER_32 F1883_21680 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) GetDeviceCaps(((HDC) arg1), ((int) arg2));
	return Result;
}

void EIF_Minit1866 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
