/*
 * Code for class EV_WINDOW
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1637.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_WINDOW}.initialize */
void F1643_18452 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	RTCFDT;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,tr4);
	RTLR(5,tr5);
	RTLIU(6);
	
	RTGC;
	F1596_17751(Current);
	tr1 = *(EIF_REFERENCE *)(RTCV(F1643_18460(Current)) + _REFACS_3_);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,1475,0xFF01,1762,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	tr3 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1552,0xFF01,0xFFF9,1,1475,0xFF01,1604,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr5= RTLNRF(typres0.id, (EIF_POINTER) __A1752_263_2, (EIF_POINTER) _A1752_263_2, (EIF_POINTER)(F1982_24467),tr2, 1, 1);
	}
	F969_4172(RTCW(tr1), tr5);
	tr1 = *(EIF_REFERENCE *)(RTCV(F1643_18460(Current)) + _REFACS_4_);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,1475,0xFF01,1762,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	tr3 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1552,0xFF01,0xFFF9,1,1475,0xFF01,1604,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr5= RTLNRF(typres0.id, (EIF_POINTER) __A1752_264_2, (EIF_POINTER) _A1752_264_2, (EIF_POINTER)(F1982_24468),tr2, 1, 1);
	}
	F969_4172(RTCW(tr1), tr5);
	RTLE;
}

/* {EV_WINDOW}.accelerators */
EIF_REFERENCE F1643_18460 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	Result = F1763_19918(RTCW(tr1));
	RTLE;
	return Result;
}

/* {EV_WINDOW}.destroy */
void F1643_18464 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	F1596_17745(Current);
	tr1 = F1606_17957(RTCV(RTOUCR(210,F415_13420, (Current))));
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		F1607_18005(loc1, Current);
	}
	RTLE;
}

/* {EV_WINDOW}.destroy_and_exit_if_last */
void F1643_18465 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	F1643_18464(Current);
	tr1 = F1607_17971(RTCV(F415_13417(Current)));
	tb1 = F736_2537(RTCW(tr1));
	if (tb1) {
		F1596_17745(RTCV(F415_13417(Current)));
	}
	RTLE;
}

/* {EV_WINDOW}.disable_user_resize */
void F1643_18467 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	F1982_24452(RTCW(tr1));
	RTLE;
}

/* {EV_WINDOW}.set_title */
void F1643_18473 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN uarg1;
	EIF_BOOLEAN uarg;
	RTS_SD;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLIU(5);
	
	RTGC;
	uarg1 = (EIF_BOOLEAN) RTS_OU (arg1);
	uarg = uarg1;
	if (uarg) {
		RTS_RC;
		RTS_RS (arg1);
		RTS_RW;
	}
	loc1 = arg1;
	loc1 = RTRV(eif_new_type(1557, 0x01),loc1);
	if ((loc1) && RTS_OS (Current, loc1)) loc1 = (EIF_REFERENCE) 0;
	if (EIF_TEST(loc1)) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R16674[Dtype(RTCW(tr1))-1981])(tr1, loc1);
	} else {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
		tr2 = RTLNS(eif_new_type(1564, 0x01).id, 1564, _OBJSIZ_1_1_0_3_0_0_0_0_);
		F1564_6854(RTCW(tr2), arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R16674[Dtype(RTCW(tr1))-1981])(tr1, tr2);
	}
	if (uarg) {
		RTS_RD;
	}
	RTLE;
}

/* {EV_WINDOW}.set_menu_bar */
void F1643_18475 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	F1982_24464(RTCW(tr1), arg1);
	RTLE;
}

/* {EV_WINDOW}.remove_menu_bar */
void F1643_18476 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	F1982_24465(RTCW(tr1));
	RTLE;
}

/* {EV_WINDOW}.unlock_update */
void F1643_18478 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	F1982_24449(RTCW(tr1));
	RTLE;
}

/* {EV_WINDOW}.show */
void F1643_18479 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	F1632_18312(Current);
	tr1 = F1606_17957(RTCV(RTOUCR(210,F415_13420, (Current))));
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		F1607_18004(loc1, Current);
	}
	RTLE;
}

/* {EV_WINDOW}.implementation */
EIF_REFERENCE F1643_18482 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_3_);
}


/* {EV_WINDOW}.create_implementation */
void F1643_18486 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(1981, 0x01).id, 1981, _OBJSIZ_70_28_6_11_0_3_0_3_);
	F1982_24436(RTCW(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	RTLE;
}

void EIF_Minit1637 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
