/*
 * Code for class ENTITY_EXPLORER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "en1301.h"
#include "eif_out.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {ENTITY_EXPLORER}.make */
void F417_13429 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	F416_13421(Current, arg1, arg2);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_1_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	ti4_1 = RTOUCB(EIF_INTEGER_32,177,F417_13450, (Current));
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_2_0_2_) = (EIF_INTEGER_32) ti4_1;
	ti4_1 = RTOUCB(EIF_INTEGER_32,178,F417_13451, (Current));
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_2_0_3_) = (EIF_INTEGER_32) ti4_1;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,1475,1508,1508,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNTS(typres0.id, 3, 1);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_i4 = ((EIF_INTEGER_32) 1L);
	((EIF_TYPED_VALUE *)tr1+2)->it_i4 = ((EIF_INTEGER_32) 1L);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_2_0_4_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
	RTLE;
}

/* {ENTITY_EXPLORER}.get_fuel */
EIF_INTEGER_32 F417_13435 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_2_0_2_);
}

/* {ENTITY_EXPLORER}.get_life */
EIF_INTEGER_32 F417_13436 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_2_0_3_);
}

/* {ENTITY_EXPLORER}.get_location */
EIF_REFERENCE F417_13437 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_REFERENCE) *(EIF_REFERENCE *)(Current);
}

/* {ENTITY_EXPLORER}.get_landed */
EIF_BOOLEAN F417_13438 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) *(EIF_BOOLEAN *)(Current+ _CHROFF_1_1_);
}

/* {ENTITY_EXPLORER}.get_land_location */
EIF_INTEGER_32 F417_13439 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_2_0_4_);
}

/* {ENTITY_EXPLORER}.is_equal */
EIF_BOOLEAN F417_13440 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	tc1 = *(EIF_CHARACTER_8 *)(Current+ _CHROFF_1_0_);
	tc2 = *(EIF_CHARACTER_8 *)(RTCW(arg1)+ _CHROFF_1_0_);
	Result = tc1 == tc2;
	RTLE;
	return Result;
}

/* {ENTITY_EXPLORER}.location_out */
EIF_REFERENCE F417_13441 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,Result);
	RTLIU(4);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	ti4_1 = eif_integer_32_item(RTCW(tr1),1);
	tr1 = c_outi(ti4_1);
	tr2 = RTMS_EX_H(":",1,58);
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
	tr2 = *(EIF_REFERENCE *)(Current);
	ti4_1 = eif_integer_32_item(RTCW(tr2),2);
	tr2 = c_outi(ti4_1);
	Result = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
	RTLE;
	return Result;
}

/* {ENTITY_EXPLORER}.location_with_spot */
EIF_REFERENCE F417_13442 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,Result);
	RTLIU(4);
	
	RTGC;
	tr1 = F417_13441(Current);
	tr2 = RTMS_EX_H(":",1,58);
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_2_0_1_);
	tr2 = c_outi(ti4_1);
	Result = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
	RTLE;
	return Result;
}

/* {ENTITY_EXPLORER}.set_explorer_location */
void F417_13443 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
}

/* {ENTITY_EXPLORER}.add_fuel */
void F417_13444 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_2_0_2_) + arg1) > RTOUCB(EIF_INTEGER_32,177,F417_13450, (Current)))) {
		ti4_1 = RTOUCB(EIF_INTEGER_32,177,F417_13450, (Current));
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_2_0_2_) = (EIF_INTEGER_32) ti4_1;
	} else {
		(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_2_0_2_)) += arg1;
	}
	RTLE;
}

/* {ENTITY_EXPLORER}.lower_fuel */
void F417_13445 (EIF_REFERENCE Current)
{
	GTCX
	
	
	(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_2_0_2_))--;
}

/* {ENTITY_EXPLORER}.kill_explorer */
void F417_13447 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_2_0_3_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
}

/* {ENTITY_EXPLORER}.set_landed */
void F417_13448 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_1_1_) = (EIF_BOOLEAN) arg1;
	if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_1_1_)) {
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_2_0_4_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
	}
	RTLE;
}

/* {ENTITY_EXPLORER}.set_land_location */
void F417_13449 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_2_0_4_) = (EIF_INTEGER_32) arg1;
}

/* {ENTITY_EXPLORER}.max_fuel */
static EIF_INTEGER_32 F417_13450_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 177)

	
	RTEV;
	RTOTP;
	Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	RTOTE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F417_13450 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,177,F417_13450_body,(Current));
}

/* {ENTITY_EXPLORER}.max_life */
static EIF_INTEGER_32 F417_13451_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 178)

	
	RTEV;
	RTOTP;
	Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	RTOTE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F417_13451 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,178,F417_13451_body,(Current));
}

void EIF_Minit1301 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
