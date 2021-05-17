/*
 * Code for class EV_WEL_FONT_ENUMERATOR_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1433.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_WEL_FONT_ENUMERATOR_IMP}.font_faces */
EIF_REFERENCE F1287_15070 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTCFDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLIU(3);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_2_) == NULL)) {
		{
			static EIF_TYPE_INDEX typarr0[] = {950,0xFF01,1564,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr1 = RTLNSMART(typres0.id);
		}
		F951_4073(RTCW(tr1), ((EIF_INTEGER_32) 20L));
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
		{
			static EIF_TYPE_INDEX typarr0[] = {998,0xFF01,1403,0xFF01,1564,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr1 = RTLNSMART(typres0.id);
		}
		F999_3924(RTCW(tr1), ((EIF_INTEGER_32) 20L));
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
		{
			static EIF_TYPE_INDEX typarr0[] = {998,0xFF01,1406,0xFF01,1564,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr1 = RTLNSMART(typres0.id);
		}
		F999_3924(RTCW(tr1), ((EIF_INTEGER_32) 20L));
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		F575_2465(RTCW(tr1));
		loc1 = RTLNS(eif_new_type(1310, 0x01).id, 1310, _OBJSIZ_6_2_0_3_0_7_0_0_);
		F1311_15448(RTCW(loc1));
		F1286_15057(Current, loc1, NULL);
		F1311_15449(RTCW(loc1));
	}
	RTLE;
	return (EIF_REFERENCE) *(EIF_REFERENCE *)(Current + _REFACS_2_);
}

/* {EV_WEL_FONT_ENUMERATOR_IMP}.action */
void F1287_15073 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,arg2);
	RTLR(5,tr2);
	RTLIU(6);
	
	RTGC;
	loc1 = F1385_16696(RTCW(arg1));
	loc1 = F1407_17216(RTCW(loc1));
	loc1 = F1_14(loc1);
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_2_) == NULL)) {
	} else {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		tb1 = F951_4085(RTCW(tr1), loc1);
		if ((EIF_BOOLEAN) !tb1) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2222[Dtype(RTCW(tr1))-818])(tr1, loc1);
		}
	}
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current) == NULL)) {
	} else {
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = F1_14(arg2);
		F999_3970(RTCW(tr1), tr2, loc1);
	}
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) == NULL)) {
	} else {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tr2 = F1385_16696(RTCW(arg1));
		F999_3970(RTCW(tr1), tr2, loc1);
	}
	RTLE;
}

void EIF_Minit1433 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
