/*
 * Code for class WEL_REFERENCE_TRACKABLE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1337.h"
#include "eif_object_id.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_REFERENCE_TRACKABLE}.object_id */
EIF_INTEGER_32 F519_14208 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O11824[dtype-518]) == ((EIF_INTEGER_32) 0L))) {
		ti4_1 = F518_871(Current, Current);
		*(EIF_INTEGER_32 *)(Current + O11824[dtype-518]) = (EIF_INTEGER_32) ti4_1;
	}
	RTLE;
	return (EIF_INTEGER_32) *(EIF_INTEGER_32 *)(Current + O11824[dtype-518]);
}

/* {WEL_REFERENCE_TRACKABLE}.enable_reference_tracking */
void F519_14209 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	*(EIF_BOOLEAN *)(Current + O11813[dtype-518]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current + O12528[dtype-1295])) {
		*(EIF_INTEGER_32 *)(Current + O11816[dtype-518]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	} else {
		*(EIF_INTEGER_32 *)(Current + O11816[dtype-518]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
	}
	tr1 = RTOUCR(439,F519_14217, (Current));
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1) + O1718[Dtype(tr1)-488]);
	*(EIF_INTEGER_32 *)(Current + O11825[dtype-518]) = (EIF_INTEGER_32) ti4_1;
	tr1 = RTOUCR(439,F519_14217, (Current));
	F490_1934(RTCW(tr1), (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current + O11825[dtype-518]) + ((EIF_INTEGER_32) 1L)));
	RTLE;
}

/* {WEL_REFERENCE_TRACKABLE}.decrement_reference */
void F519_14210 (EIF_REFERENCE Current)
{
	GTCX
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current + O11816[dtype-518]) > ((EIF_INTEGER_32) 0L))) {
		(*(EIF_INTEGER_32 *)(Current + O11816[dtype-518]))--;
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O11816[dtype-518]) == ((EIF_INTEGER_32) 0L))) {
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R11823[dtype-1299])(Current);
		}
	} else {
	}
	RTLE;
}

/* {WEL_REFERENCE_TRACKABLE}.increment_reference */
void F519_14211 (EIF_REFERENCE Current)
{
	GTCX
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current + O11816[dtype-518]) > ((EIF_INTEGER_32) 0L))) {
		(*(EIF_INTEGER_32 *)(Current + O11816[dtype-518]))++;
	}
	RTLE;
}

/* {WEL_REFERENCE_TRACKABLE}.dispose */
void F519_14212 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tb1 = '\0';
	if (F1296_15099(Current)) {
		tb1 = (EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current + O12528[dtype-1295]);
	}
	if (tb1) {
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R11823[dtype-1299])(Current);
	}
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O11824[dtype-518]) != ((EIF_INTEGER_32) 0L))) {
		ti4_1 = *(EIF_INTEGER_32 *)(Current + O11824[dtype-518]);
		eif_object_id_free(ti4_1);
		*(EIF_INTEGER_32 *)(Current + O11824[dtype-518]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	}
	RTLE;
}

/* {WEL_REFERENCE_TRACKABLE}.delete */
void F519_14213 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN tb1;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tb1 = '\0';
	if (F1296_15099(Current)) {
		tb1 = (EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current + O12528[dtype-1295]);
	}
	if (tb1) {
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R11823[dtype-1299])(Current);
	}
	RTLE;
}

/* {WEL_REFERENCE_TRACKABLE}.internal_number_id_cell */
static EIF_REFERENCE F519_14217_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(439)

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEV;
	RTGC;
	RTOTP;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,489,1508,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0.id, 489, _OBJSIZ_0_0_0_1_0_0_0_0_);
	}
	F490_1934(RTCW(tr1), ((EIF_INTEGER_32) 0L));
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F519_14217 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(439,F519_14217_body,(Current));
}

/* {WEL_REFERENCE_TRACKABLE}.internal_id_list */
static EIF_REFERENCE F519_14218_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(440)

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEV;
	RTGC;
	RTOTP;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,956,1508,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0.id, 956, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	F957_4073(RTCW(tr1), ((EIF_INTEGER_32) 10L));
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F519_14218 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(440,F519_14218_body,(Current));
}

void EIF_Minit1337 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
