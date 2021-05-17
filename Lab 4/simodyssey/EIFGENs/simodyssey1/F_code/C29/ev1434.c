/*
 * Code for class EV_ABSTRACT_PICK_AND_DROPABLE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1434.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_ABSTRACT_PICK_AND_DROPABLE}.init_drop_actions */
void F1295_15092 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	RTCFDT;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,arg1);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,tr3);
	RTLIU(6);
	
	RTGC;
	loc2 = F1294_4724(Current);
	loc1 = RTOUCR(228,F1295_15094, (Current));
	tr1 = F976_4216(RTCW(arg1));
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,3,1475,0xFF01,1001,1508,1508,1508,1508,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 4, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
	RTAR(tr2,loc1);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = loc2;
	((EIF_TYPED_VALUE *)tr2+3)->it_i4 = loc2;
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1552,0xFF01,0xFFF9,0,1475,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRF(typres0.id, (EIF_POINTER) __A601_89, (EIF_POINTER) _A601_89, (EIF_POINTER)(F1002_3970),tr2, 1, 0);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2222[Dtype(RTCW(tr1))-818])(tr1, tr3);
	tr1 = F976_4217(RTCW(arg1));
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,1475,0xFF01,1001,1508,1508,1508,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
	RTAR(tr2,loc1);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = loc2;
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1552,0xFF01,0xFFF9,0,1475,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRF(typres0.id, (EIF_POINTER) __A601_95, (EIF_POINTER) _A601_95, (EIF_POINTER)(F1002_3976),tr2, 1, 0);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2222[Dtype(RTCW(tr1))-818])(tr1, tr3);
	RTLE;
}

/* {EV_ABSTRACT_PICK_AND_DROPABLE}.create_interface_objects */
void F1295_15093 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	{
		/* INLINED CODE (ANY.do_nothing) */
		tr1 = RTOUCR(228,F1295_15094, (Current));
		/* END INLINED CODE */
	}
	;
	RTLE;
}

/* {EV_ABSTRACT_PICK_AND_DROPABLE}.pnd_targets */
static EIF_REFERENCE F1295_15094_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(228)

	RTLI(1);
	RTLR(0,tr1);
	RTLIU(1);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(eif_new_type(1605, 0x01).id, 1605, _OBJSIZ_2_0_0_0_0_0_0_0_);
	F1596_17742(RTCW(tr1));
	Result = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_1_);
	Result = F1713_19262(RTCW(Result));
	Result = *(EIF_REFERENCE *)(RTCW(Result) + _REFACS_26_);
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1295_15094 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(228,F1295_15094_body,(Current));
}

/* {EV_ABSTRACT_PICK_AND_DROPABLE}.default_pixmaps */
static EIF_REFERENCE F1295_15095_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(224)

	RTLI(1);
	RTLR(0,tr1);
	RTLIU(1);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(eif_new_type(70, 0x01).id, 70, _OBJSIZ_0_0_0_0_0_0_0_0_);
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1295_15095 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(224,F1295_15095_body,(Current));
}

void EIF_Minit1434 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
