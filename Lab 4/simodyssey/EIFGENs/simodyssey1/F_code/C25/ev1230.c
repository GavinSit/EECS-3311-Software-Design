/*
 * Code for class EV_SHARED_TRANSPORT_I
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1230.h"
#include "eif_built_in.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_SHARED_TRANSPORT_I}.default_accept_cursor */
static EIF_REFERENCE F321_12792_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(230)

	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEV;
	RTGC;
	RTOTP;
	Result = RTOUCR(234,F71_9843, (RTCV(RTOUCR(242,F321_12796, (Current)))));
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F321_12792 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(230,F321_12792_body,(Current));
}

/* {EV_SHARED_TRANSPORT_I}.default_deny_cursor */
static EIF_REFERENCE F321_12793_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(231)

	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEV;
	RTGC;
	RTOTP;
	Result = RTOUCR(236,F71_9847, (RTCV(RTOUCR(242,F321_12796, (Current)))));
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F321_12793 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(231,F321_12793_body,(Current));
}

/* {EV_SHARED_TRANSPORT_I}.global_pnd_targets */
static EIF_REFERENCE F321_12795_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(272)

	RTLI(1);
	RTLR(0,loc1);
	RTLIU(1);
	
	RTEV;
	RTGC;
	RTOTP;
	loc1 = RTLNS(eif_new_type(1605, 0x01).id, 1605, _OBJSIZ_2_0_0_0_0_0_0_0_);
	F1596_17742(RTCW(loc1));
	Result = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_1_);
	Result = F1713_19262(RTCW(Result));
	Result = *(EIF_REFERENCE *)(RTCW(Result) + _REFACS_26_);
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F321_12795 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(272,F321_12795_body,(Current));
}

/* {EV_SHARED_TRANSPORT_I}.default_pixmaps */
static EIF_REFERENCE F321_12796_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(242)

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

EIF_REFERENCE F321_12796 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(242,F321_12796_body,(Current));
}

/* {EV_SHARED_TRANSPORT_I}.insert_label */
static EIF_REFERENCE F321_12802_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(273)

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,loc1);
	RTLIU(2);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(eif_new_type(1638, 0x01).id, 1638, _OBJSIZ_6_3_0_1_0_0_0_0_);
	F1596_17742(RTCW(tr1));
	Result = (EIF_REFERENCE) tr1;
	F1632_18325(RTCW(Result), ((EIF_INTEGER_32) 10L), ((EIF_INTEGER_32) 10L));
	loc1 = RTLNS(eif_new_type(1652, 0x01).id, 1652, _OBJSIZ_6_3_0_1_0_0_0_0_);
	F1596_17742(RTCW(loc1));
	F1653_18636(RTCW(loc1), ((EIF_INTEGER_32) 2L), ((EIF_INTEGER_32) 2L));
	tr1 = RTLNS(eif_new_type(72, 0x01).id, 72, _OBJSIZ_0_0_0_0_0_0_0_0_);
	tr1 = F73_9889(RTCW(tr1));
	F1611_18035(RTCW(loc1), tr1);
	F1625_18151(RTCW(loc1), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L));
	F1625_18151(RTCW(loc1), ((EIF_INTEGER_32) 1L), ((EIF_INTEGER_32) 1L));
	tr1 = RTLNS(eif_new_type(72, 0x01).id, 72, _OBJSIZ_0_0_0_0_0_0_0_0_);
	tr1 = RTOUCR(226,F73_9866, (RTCW(tr1)));
	F1611_18035(RTCW(loc1), tr1);
	F1625_18151(RTCW(loc1), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 1L));
	F1625_18151(RTCW(loc1), ((EIF_INTEGER_32) 1L), ((EIF_INTEGER_32) 0L));
	F1619_18100(RTCW(Result), loc1);
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F321_12802 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(273,F321_12802_body,(Current));
}

/* {EV_SHARED_TRANSPORT_I}.insert_label_imp */
static EIF_REFERENCE F321_12803_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(274)

	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEV;
	RTGC;
	RTOTP;
	Result = *(EIF_REFERENCE *)(RTCV(RTOUCR(273,F321_12802, (Current))) + _REFACS_3_);
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F321_12803 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(274,F321_12803_body,(Current));
}

/* {EV_SHARED_TRANSPORT_I}.remove_insert_label */
void F321_12804 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc4 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc5);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLR(4,loc2);
	RTLIU(5);
	
	RTGC;
	tr1 = F1632_18299(RTCV(RTOUCR(273,F321_12802, (Current))));
	loc5 = tr1;
	if (EIF_TEST(loc5)) {
		loc1 = F1632_18299(RTCV(RTOUCR(273,F321_12802, (Current))));
		loc1 = RTRV(eif_new_type(1638, 0x00), loc1);
		tr1 = RTOUCR(273,F321_12802, (Current));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R15472[Dtype(loc5)-1634])(loc5, tr1);
		tb1 = '\0';
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			tr1 = RTOUCR(273,F321_12802, (Current));
			tb2 = (EIF_BOOLEAN) eif_builtin_ANY_same_type (loc1, tr1);
			tb1 = tb2;
		}
		if (tb1) {
			loc2 = F1632_18299(RTCW(loc1));
			loc2 = RTRV(eif_new_type(1635, 0x00), loc2);
			if ((EIF_BOOLEAN)(loc2 != NULL)) {
				loc3 = F1630_18250(RTCW(loc2), loc1, ((EIF_INTEGER_32) 1L));
				loc4 = F1636_18392(RTCW(loc2), loc1);
				F1630_18273(RTCW(loc2), loc1);
				F1630_18259(RTCW(loc2), loc3);
				F1630_18268(RTCW(loc2), loc1);
				if ((EIF_BOOLEAN) !loc4) {
					F1636_18399(RTCW(loc2), loc1);
				}
			}
		}
	}
	RTLE;
}

/* {EV_SHARED_TRANSPORT_I}.insert_sep */
static EIF_REFERENCE F321_12805_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(275)

	RTLI(1);
	RTLR(0,tr1);
	RTLIU(1);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(eif_new_type(1671, 0x01).id, 1671, _OBJSIZ_6_0_0_1_0_0_0_0_);
	F1596_17742(RTCW(tr1));
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F321_12805 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(275,F321_12805_body,(Current));
}

/* {EV_SHARED_TRANSPORT_I}.remove_insert_sep */
void F321_12807 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	tr1 = F1671_18803(RTCV(RTOUCR(275,F321_12805, (Current))));
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tr1 = RTOUCR(275,F321_12805, (Current));
		F1630_18273(loc1, tr1);
	}
	RTLE;
}

/* {EV_SHARED_TRANSPORT_I}.internal_screen */
static EIF_REFERENCE F321_12809_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(276)

	RTLI(1);
	RTLR(0,tr1);
	RTLIU(1);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(eif_new_type(1626, 0x01).id, 1626, _OBJSIZ_2_0_0_0_0_0_0_0_);
	F1596_17742(RTCW(tr1));
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F321_12809 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(276,F321_12809_body,(Current));
}

void EIF_Minit1230 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
