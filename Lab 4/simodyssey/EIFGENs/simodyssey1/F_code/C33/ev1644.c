/*
 * Code for class EV_MESSAGE_DIALOG
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1644.h"
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

/* {EV_MESSAGE_DIALOG}.make_with_text */
void F1650_18585 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	F1596_17742(Current);
	F1650_18598(Current, arg1);
	RTLE;
}

/* {EV_MESSAGE_DIALOG}.create_interface_objects */
void F1650_18587 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLIU(3);
	
	RTGC;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,998,0xFF01,1663,0xFF01,1564,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNSMART(typres0.id);
	}
	F999_3924(RTCW(tr1), ((EIF_INTEGER_32) 5L));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_11_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_new_type(1637, 1).id);
	F1596_17742(RTCW(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_7_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_new_type(1638, 1).id);
	F1596_17742(RTCW(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_10_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_new_type(1641, 1).id);
	F1596_17742(RTCW(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_8_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_new_type(1653, 1).id);
	F1596_17742(RTCW(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_9_) = (EIF_REFERENCE) tr1;
	loc1 = RTLNS(eif_new_type(72, 0x01).id, 72, _OBJSIZ_0_0_0_0_0_0_0_0_);
	tr1 = F73_9890(RTCW(loc1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_13_) = (EIF_REFERENCE) tr1;
	tr1 = F73_9889(RTCW(loc1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_12_) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {EV_MESSAGE_DIALOG}.initialize */
void F1650_18588 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCFDT;
	RTLD;
	
	RTLI(11);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLR(3,loc2);
	RTLR(4,loc3);
	RTLR(5,loc4);
	RTLR(6,loc5);
	RTLR(7,tr2);
	RTLR(8,tr3);
	RTLR(9,tr4);
	RTLR(10,tr5);
	RTLIU(11);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	tr1 = F1715_19379(RTCW(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_13_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	tr1 = F1715_19380(RTCW(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_12_) = (EIF_REFERENCE) tr1;
	loc1 = RTLNS(eif_new_type(1637, 0x01).id, 1637, _OBJSIZ_6_3_0_1_0_0_0_0_);
	F1596_17742(RTCW(loc1));
	loc2 = RTLNS(eif_new_type(1636, 0x01).id, 1636, _OBJSIZ_6_3_0_1_0_0_0_0_);
	F1596_17742(RTCW(loc2));
	loc3 = RTLNS(eif_new_type(1637, 0x01).id, 1637, _OBJSIZ_6_3_0_1_0_0_0_0_);
	F1596_17742(RTCW(loc3));
	loc4 = RTLNS(eif_new_type(1636, 0x01).id, 1636, _OBJSIZ_6_3_0_1_0_0_0_0_);
	F1596_17742(RTCW(loc4));
	F1648_18564(Current);
	loc5 = RTLNS(eif_new_type(1626, 0x01).id, 1626, _OBJSIZ_2_0_0_0_0_0_0_0_);
	F1596_17742(RTCW(loc5));
	ti4_1 = F1627_18209(RTCW(loc5));
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_14_3_0_1_) = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 200L));
	ti4_1 = F1627_18210(RTCW(loc5));
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_14_3_0_2_) = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 200L));
	F1630_18264(RTCW(loc4), *(EIF_REFERENCE *)(Current + _REFACS_10_));
	F1636_18399(RTCW(loc4), *(EIF_REFERENCE *)(Current + _REFACS_10_));
	tr1 = RTLNS(eif_new_type(1638, 0x01).id, 1638, _OBJSIZ_6_3_0_1_0_0_0_0_);
	F1596_17742(RTCW(tr1));
	F1630_18264(RTCW(loc4), tr1);
	F1630_18264(RTCW(loc1), loc4);
	F1630_18264(RTCW(loc1), *(EIF_REFERENCE *)(Current + _REFACS_9_));
	F1636_18397(RTCW(loc1), ((EIF_INTEGER_32) 10L));
	tr1 = RTLNS(eif_new_type(1638, 0x01).id, 1638, _OBJSIZ_6_3_0_1_0_0_0_0_);
	F1596_17742(RTCW(tr1));
	F1630_18264(RTCW(loc3), tr1);
	F1630_18264(RTCW(loc3), *(EIF_REFERENCE *)(Current + _REFACS_7_));
	F1636_18399(RTCW(loc3), *(EIF_REFERENCE *)(Current + _REFACS_7_));
	tr1 = RTLNS(eif_new_type(1638, 0x01).id, 1638, _OBJSIZ_6_3_0_1_0_0_0_0_);
	F1596_17742(RTCW(tr1));
	F1630_18264(RTCW(loc3), tr1);
	F1630_18264(RTCW(loc2), loc1);
	F1630_18264(RTCW(loc2), loc3);
	F1636_18399(RTCW(loc2), loc3);
	F1636_18397(RTCW(loc2), ((EIF_INTEGER_32) 14L));
	F1636_18395(RTCW(loc2), ((EIF_INTEGER_32) 10L));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_9_);
	F1623_18126(RTCW(tr1));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_7_);
	F1636_18397(RTCW(tr1), ((EIF_INTEGER_32) 10L));
	F1633_18339(Current, loc2);
	tr1 = RTMS_EX_H("Use `set_text\' to modify this message.",38,1665955374);
	F1650_18598(Current, tr1);
	tr1 = F1593_17709(Current);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,1475,0xFF01,0,0xFFFF};
		EIF_TYPE typres0;
		typarr0[4] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = Current;
	RTAR(tr2,Current);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1552,0xFF01,0xFFF9,1,1475,0xFF01,1813,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr5= RTLNRF(typres0.id, (EIF_POINTER) __A1644_352_2, (EIF_POINTER) _A1644_352_2, (EIF_POINTER)(F1650_18617),tr2, 1, 1);
	}
	F969_4172(RTCW(tr1), tr5);
	F1643_18467(Current);
	RTLE;
}

/* {EV_MESSAGE_DIALOG}.pixmap */
EIF_REFERENCE F1650_18589 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_10_);
	tb1 = F1639_18412(RTCW(tr1));
	if (tb1) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_10_);
		Result = F1633_18330(RTCW(tr1));
		Result = RTRV(eif_new_type(1652, 0x00), Result);
	}
	RTLE;
	return Result;
}

/* {EV_MESSAGE_DIALOG}.foreground_color */
EIF_REFERENCE F1650_18591 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_13_);
}


/* {EV_MESSAGE_DIALOG}.background_color */
EIF_REFERENCE F1650_18592 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_12_);
}


/* {EV_MESSAGE_DIALOG}.set_pixmap */
void F1650_18596 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,arg1);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTGC;
	if ((EIF_BOOLEAN)(F1650_18589(Current) != NULL)) {
		F1650_18597(Current);
	}
	loc1 = RTLNS(eif_new_type(1652, 0x01).id, 1652, _OBJSIZ_6_3_0_1_0_0_0_0_);
	F1596_17742(RTCW(loc1));
	F1653_18642(RTCW(loc1), arg1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_10_);
	F1633_18339(RTCW(tr1), loc1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_10_);
	ti4_1 = F1614_18068(RTCW(loc1));
	ti4_2 = F1614_18069(RTCW(loc1));
	F1632_18325(RTCW(tr1), ti4_1, ti4_2);
	RTLE;
}

/* {EV_MESSAGE_DIALOG}.remove_pixmap */
void F1650_18597 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_10_);
	F1639_18415(RTCW(tr1));
	RTLE;
}

/* {EV_MESSAGE_DIALOG}.set_text */
void F1650_18598 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc3 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc5);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc4);
	RTLR(4,loc6);
	RTLR(5,arg1);
	RTLIU(6);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_8_);
	tr1 = F1632_18299(RTCW(tr1));
	loc5 = tr1;
	if (EIF_TEST(loc5)) {
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R15472[Dtype(loc5)-1634])(loc5, *(EIF_REFERENCE *)(Current + _REFACS_8_));
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_8_);
		F1639_18414(RTCW(tr1), *(EIF_REFERENCE *)(Current + _REFACS_9_));
		loc4 = (EIF_REFERENCE) loc5;
	} else {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_9_);
		tr1 = F1632_18299(RTCW(tr1));
		loc6 = tr1;
		if (EIF_TEST(loc6)) {
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R15472[Dtype(loc6)-1634])(loc6, *(EIF_REFERENCE *)(Current + _REFACS_9_));
			loc4 = (EIF_REFERENCE) loc6;
		}
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_9_);
	F1622_18116(RTCW(tr1), arg1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_9_);
	loc1 = F1614_18068(RTCW(tr1));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_9_);
	loc2 = F1614_18069(RTCW(tr1));
	if ((EIF_BOOLEAN) (loc1 > *(EIF_INTEGER_32 *)(Current+ _LNGOFF_14_3_0_1_))) {
		loc3 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_8_);
		F1642_18444(RTCW(tr1));
		loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_14_3_0_1_);
	} else {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_8_);
		F1642_18447(RTCW(tr1));
	}
	if ((EIF_BOOLEAN) (loc2 > *(EIF_INTEGER_32 *)(Current+ _LNGOFF_14_3_0_2_))) {
		loc3 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_8_);
		F1642_18446(RTCW(tr1));
		loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_14_3_0_2_);
	} else {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_8_);
		F1642_18447(RTCW(tr1));
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_8_);
	F1632_18323(RTCW(tr1), loc1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_8_);
	F1632_18324(RTCW(tr1), loc2);
	if (loc3) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_8_);
		F1633_18339(RTCW(tr1), *(EIF_REFERENCE *)(Current + _REFACS_9_));
		if ((EIF_BOOLEAN)(loc4 != NULL)) {
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R15469[Dtype(RTCW(loc4))-1634])(loc4, *(EIF_REFERENCE *)(Current + _REFACS_8_));
		}
	} else {
		if ((EIF_BOOLEAN)(loc4 != NULL)) {
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R15469[Dtype(RTCW(loc4))-1634])(loc4, *(EIF_REFERENCE *)(Current + _REFACS_9_));
		}
	}
	RTLE;
}

/* {EV_MESSAGE_DIALOG}.set_buttons */
void F1650_18600 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	F1650_18613(Current);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		ti4_1 = F919_3198(RTCW(arg1));
		if ((EIF_BOOLEAN) (loc1 > ti4_1)) break;
		tr1 = F919_3192(RTCW(arg1), loc1);
		F1650_18614(Current, tr1);
		loc1++;
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_7_);
	F1636_18393(RTCW(tr1));
	RTLE;
}

/* {EV_MESSAGE_DIALOG}.button */
EIF_REFERENCE F1650_18603 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,arg1);
	RTLR(4,tr2);
	RTLIU(5);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_11_);
	tr2 = F1558_6569(RTCW(arg1));
	loc1 = F999_3929(RTCW(tr1), tr2);
	RTCT0("l_result /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	RTLE;
	return (EIF_REFERENCE) loc1;
}

/* {EV_MESSAGE_DIALOG}.clean_buttons */
void F1650_18613 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	if ((EIF_BOOLEAN)(F1648_18565(Current) != NULL)) {
		F1648_18571(Current);
	}
	if ((EIF_BOOLEAN)(F1648_18566(Current) != NULL)) {
		F1648_18573(Current);
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_7_);
	F1630_18277(RTCW(tr1));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_11_);
	F999_3978(RTCW(tr1));
	RTLE;
}

/* {EV_MESSAGE_DIALOG}.add_button */
void F1650_18614 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc2 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCFDT;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,tr3);
	RTLIU(6);
	
	RTGC;
	loc1 = RTLNS(eif_new_type(1663, 0x01).id, 1663, _OBJSIZ_6_2_0_1_0_0_0_0_);
	F1622_18114(RTCW(loc1), arg1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_11_);
	tr2 = F1558_6569(RTCW(arg1));
	F999_3970(RTCW(tr1), loc1, tr2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_7_);
	loc2 = F736_2537(RTCW(tr1));
	tr1 = F1591_17697(RTCW(loc1));
	{
		EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,1475,0xFF01,0,0xFF01,1557,0xFFFF};
		EIF_TYPE typres0;
		typarr0[4] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = Current;
	RTAR(tr2,Current);
	((EIF_TYPED_VALUE *)tr2+2)->it_r = arg1;
	RTAR(tr2,arg1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1552,0xFF01,0xFFF9,0,1475,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRF(typres0.id, (EIF_POINTER) __A1644_351, (EIF_POINTER) _A1644_351, (EIF_POINTER)(F1650_18616),tr2, 1, 0);
	}
	F969_4172(RTCW(tr1), tr3);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_7_);
	F1630_18264(RTCW(tr1), loc1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_7_);
	F1636_18399(RTCW(tr1), loc1);
	ti4_1 = F1614_18070(RTCW(loc1));
	ti4_1 = eif_max_int32 (ti4_1,((EIF_INTEGER_32) 75L));
	F1632_18323(RTCW(loc1), ti4_1);
	F1623_18124(RTCW(loc1));
	if (loc2) {
		F1648_18570(Current, loc1);
	}
	RTLE;
}

/* {EV_MESSAGE_DIALOG}.on_button_press */
void F1650_18616 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	tr1 = F1558_6569(RTCW(arg1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_6_) = (EIF_REFERENCE) tr1;
	if ((EIF_BOOLEAN) !F1596_17746(Current)) {
		F1643_18464(Current);
	}
	RTLE;
}

/* {EV_MESSAGE_DIALOG}.on_key_press */
void F1650_18617 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_0_0_0_0_);
	if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 60L))) {
		F1650_18618(Current, ((EIF_INTEGER_32) -1L));
	} else {
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_0_0_0_0_);
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 61L))) {
			F1650_18618(Current, ((EIF_INTEGER_32) 1L));
		}
	}
	RTLE;
}

/* {EV_MESSAGE_DIALOG}.move_to_next_button */
void F1650_18618 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc4 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,loc2);
	RTLR(3,loc3);
	RTLR(4,tr1);
	RTLIU(5);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_7_);
	ti4_1 = F1630_18253(RTCW(loc1));
	if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 1L))) {
		loc2 = F1630_18248(RTCW(loc1));
		F1630_18256(RTCW(loc1));
		for (;;) {
			tb1 = '\01';
			tb2 = F882_3332(RTCW(loc1));
			if (!tb2) {
				tb1 = loc4;
			}
			if (tb1) break;
			loc3 = F1630_18246(RTCW(loc1));
			loc4 = F1632_18309(RTCW(loc3));
			if ((EIF_BOOLEAN) !loc4) {
				F1630_18258(RTCW(loc1));
			}
		}
		if (loc4) {
			if ((EIF_BOOLEAN)(loc3 != NULL)) {
				if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) -1L))) {
					tr1 = F852_3255(RTCW(loc1));
					if ((EIF_BOOLEAN)(tr1 == loc3)) {
						tr1 = F852_3256(RTCW(loc1));
						F1632_18313(RTCW(tr1));
					} else {
						F1630_18257(RTCW(loc1));
						tr1 = F1630_18246(RTCW(loc1));
						F1632_18313(RTCW(tr1));
					}
				} else {
					tr1 = F852_3256(RTCW(loc1));
					if ((EIF_BOOLEAN)(tr1 == loc3)) {
						tr1 = F852_3255(RTCW(loc1));
						F1632_18313(RTCW(tr1));
					} else {
						F1630_18258(RTCW(loc1));
						tr1 = F1630_18246(RTCW(loc1));
						F1632_18313(RTCW(tr1));
					}
				}
			}
		} else {
			tr1 = F852_3255(RTCW(loc1));
			F1632_18313(RTCW(tr1));
		}
		F1630_18260(RTCW(loc1), loc2);
	}
	RTLE;
}

void EIF_Minit1644 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
