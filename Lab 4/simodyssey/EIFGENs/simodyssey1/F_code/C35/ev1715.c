/*
 * Code for class EV_DOCKABLE_SOURCE_I
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1715.h"
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

/* {EV_DOCKABLE_SOURCE_I}.is_dock_executing */
EIF_BOOLEAN F1726_19534 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O10561[Dtype(Current)-320]) != NULL);
}

/* {EV_DOCKABLE_SOURCE_I}.is_external_docking_enabled */
EIF_BOOLEAN F1726_19538 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current + O16350[Dtype(Current)-1725]);
}

/* {EV_DOCKABLE_SOURCE_I}.is_external_docking_relative */
EIF_BOOLEAN F1726_19540 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current + O16352[Dtype(Current)-1725]);
}

/* {EV_DOCKABLE_SOURCE_I}.get_next_target */
EIF_REFERENCE F1726_19541 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(10);
	RTLR(0,loc3);
	RTLR(1,arg1);
	RTLR(2,loc1);
	RTLR(3,loc2);
	RTLR(4,loc4);
	RTLR(5,loc5);
	RTLR(6,tr1);
	RTLR(7,Result);
	RTLR(8,loc6);
	RTLR(9,loc7);
	RTLIU(10);
	
	RTGC;
	loc3 = F1632_18299(RTCW(arg1));
	loc1 = loc3;
	loc1 = RTRV(eif_new_type(1632, 0x00), loc1);
	loc2 = loc1;
	loc2 = RTRV(eif_new_type(1615, 0x00), loc2);
	tb1 = '\0';
	tb2 = '\0';
	loc4 = loc3;
	if (EIF_TEST(loc4)) {
		tr1 = F1632_18303(loc4);
		loc5 = tr1;
		tb2 = EIF_TEST(loc5);
	}
	if (tb2) {
		tb2 = F1616_18082(loc5);
		tb1 = tb2;
	}
	if (tb1) {
		Result = (EIF_REFERENCE) loc5;
	} else {
		tb1 = '\0';
		loc6 = loc2;
		if (EIF_TEST(loc6)) {
			tb2 = F1616_18082(loc6);
			tb1 = tb2;
		}
		if (tb1) {
			Result = (EIF_REFERENCE) loc6;
		}
	}
	for (;;) {
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(Result != NULL) || (EIF_BOOLEAN)(loc1 == NULL))) break;
		loc3 = F1632_18299(RTCW(loc1));
		loc1 = loc3;
		loc1 = RTRV(eif_new_type(1632, 0x00), loc1);
		loc2 = loc1;
		loc2 = RTRV(eif_new_type(1615, 0x00), loc2);
		tb1 = '\0';
		tb2 = '\0';
		if ((EIF_BOOLEAN)(loc3 != NULL)) {
			tr1 = F1632_18303(RTCW(loc3));
			loc7 = tr1;
			tb2 = EIF_TEST(loc7);
		}
		if (tb2) {
			tb2 = F1616_18082(loc7);
			tb1 = tb2;
		}
		if (tb1) {
			Result = (EIF_REFERENCE) loc7;
		} else {
			tb1 = '\0';
			if ((EIF_BOOLEAN)(loc2 != NULL)) {
				tb2 = F1616_18082(RTCW(loc2));
				tb1 = tb2;
			}
			if (tb1) {
				Result = (EIF_REFERENCE) loc2;
			}
		}
	}
	RTLE;
	return Result;
}

/* {EV_DOCKABLE_SOURCE_I}.closest_dockable_target */
EIF_REFERENCE F1726_19542 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(8);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,loc2);
	RTLR(3,loc3);
	RTLR(4,loc4);
	RTLR(5,tr1);
	RTLR(6,loc5);
	RTLR(7,Result);
	RTLIU(8);
	
	RTGC;
	loc1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R16371[Dtype(Current)-1871])(Current);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		loc2 = *(EIF_REFERENCE *)(RTCW(loc1) + O15892[Dtype(loc1)-1695]);
		loc2 = RTRV(eif_new_type(1615, 0x00), loc2);
		loc3 = loc2;
		loc3 = RTRV(eif_new_type(1682, 0x00), loc3);
		tb1 = '\0';
		tr1 = *(EIF_REFERENCE *)(RTCW(loc1) + O16560[Dtype(loc1)-1751]);
		loc4 = tr1;
		if (EIF_TEST(loc4)) {
			tb2 = F1616_18082(loc4);
			tb1 = tb2;
		}
		if (tb1) {
			RTLE;
			return (EIF_REFERENCE) loc4;
		} else {
			tb1 = '\0';
			tb2 = '\0';
			loc5 = loc2;
			if (EIF_TEST(loc5)) {
				tb3 = F1616_18082(loc5);
				tb2 = tb3;
			}
			if (tb2) {
				tb2 = '\0';
				if ((EIF_BOOLEAN)(loc3 != NULL)) {
					tb2 = (EIF_BOOLEAN)(F1726_19557(Current) != NULL);
				}
				tb1 = tb2;
			}
			if (tb1) {
				RTLE;
				return (EIF_REFERENCE) loc2;
			} else {
				tr1 = F1696_18976(RTCW(loc1));
				Result = F1726_19541(Current, tr1);
			}
		}
	}
	RTLE;
	return Result;
}

/* {EV_DOCKABLE_SOURCE_I}.complete_dock */
void F1726_19553 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc4 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc13 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc14 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc15 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc16 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc17 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc18 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc19 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc20 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc21 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc22 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc23 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc24 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc25 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc26 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc27 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc28 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc29 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc30 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc31 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc32 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc33 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc34 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc35 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc36 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc37 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc38 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc39 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc40 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc41 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc42 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_16 ti2_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCFDT;
	RTCDT;
	RTLD;
	
	RTLI(40);
	RTLR(0,Current);
	RTLR(1,loc8);
	RTLR(2,loc29);
	RTLR(3,loc7);
	RTLR(4,loc30);
	RTLR(5,loc32);
	RTLR(6,tr1);
	RTLR(7,loc11);
	RTLR(8,loc14);
	RTLR(9,loc33);
	RTLR(10,loc31);
	RTLR(11,loc34);
	RTLR(12,loc5);
	RTLR(13,loc19);
	RTLR(14,loc13);
	RTLR(15,loc35);
	RTLR(16,loc12);
	RTLR(17,loc10);
	RTLR(18,loc6);
	RTLR(19,loc9);
	RTLR(20,loc3);
	RTLR(21,tr2);
	RTLR(22,tr3);
	RTLR(23,loc36);
	RTLR(24,loc1);
	RTLR(25,loc2);
	RTLR(26,loc37);
	RTLR(27,loc28);
	RTLR(28,loc38);
	RTLR(29,loc39);
	RTLR(30,loc40);
	RTLR(31,loc21);
	RTLR(32,loc24);
	RTLR(33,loc17);
	RTLR(34,loc16);
	RTLR(35,loc15);
	RTLR(36,loc41);
	RTLR(37,loc20);
	RTLR(38,loc42);
	RTLR(39,loc27);
	RTLIU(40);
	
	RTGC;
	*(EIF_REFERENCE *)(Current + O10572[dtype-320]) = (EIF_REFERENCE) NULL;
	loc8 = F1726_19542(Current);
	loc29 = F1726_19556(Current);
	loc29 = RTRV(eif_new_type(1969, 0), loc29);
	if ((EIF_BOOLEAN)(loc29 != NULL)) {
		loc7 = F1970_24039(RTCW(loc29));
		loc7 = RTRV(eif_new_type(1648, 0x00), loc7);
	} else {
		loc30 = F1726_19557(Current);
		loc30 = RTRV(eif_new_type(1789, 0), loc30);
		RTCT0("l_item_source_being_docked /= Void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc30 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R16915[Dtype(RTCW(loc30))-1958])(loc30);
		loc32 = tr1;
		if (EIF_TEST(loc32)) {
			loc7 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R15225[Dtype(loc32)-1634])(loc32);
			loc7 = RTRV(eif_new_type(1648, 0x00), loc7);
		}
	}
	loc11 = loc8;
	loc11 = RTRV(eif_new_type(1682, 0x00), loc11);
	loc14 = loc8;
	loc14 = RTRV(eif_new_type(1632, 0x00), loc14);
	if (((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc29 != NULL) && (EIF_BOOLEAN)(loc14 == NULL)) || (EIF_BOOLEAN) ((EIF_BOOLEAN)(loc30 != NULL) && (EIF_BOOLEAN)(loc11 == NULL))))) {
		loc8 = (EIF_REFERENCE) NULL;
	}
	if ((EIF_BOOLEAN)(loc8 == NULL)) {
		tb1 = '\0';
		tr1 = *(EIF_REFERENCE *)(Current + O10562[dtype-320]);
		loc33 = tr1;
		if (EIF_TEST(loc33)) {
			tb2 = F1726_19538(loc33);
			tb1 = tb2;
		}
		if (tb1) {
			if ((EIF_BOOLEAN)(loc7 == NULL)) {
				loc31 = RTLNSMART(eif_new_type(1648, 0).id);
				F1596_17742(RTCW(loc31));
				RTAR(Current, loc31);
				*(EIF_REFERENCE *)(Current + O10572[dtype-320]) = (EIF_REFERENCE) loc31;
				tb1 = '\0';
				if ((EIF_BOOLEAN)(loc29 != NULL)) {
					tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R19565[Dtype(RTCW(loc29))-1958])(loc29);
					loc34 = tr1;
					tb1 = EIF_TEST(loc34);
				}
				if (tb1) {
					loc5 = *(EIF_REFERENCE *)(loc34 + O15892[Dtype(loc34)-1695]);
					loc19 = F1696_18976(RTCW(loc29));
					loc19 = F1632_18299(RTCW(loc19));
					loc19 = RTRV(eif_new_type(1615, 0x00), loc19);
					RTCT0("original_parent_not_void", EX_CHECK);
					if ((EIF_BOOLEAN)(loc19 != NULL)) {
						RTCK0;
					} else {
						RTCF0;
					}
					F1649_18582(RTCW(loc31), loc19);
					ti4_1 = F1726_19559(Current, loc29);
					F1649_18583(RTCW(loc31), ti4_1);
				} else {
					RTCT0("l_item_source_being_docked /= Void", EX_CHECK);
					if ((EIF_BOOLEAN)(loc30 != NULL)) {
						RTCK0;
					} else {
						RTCF0;
					}
					loc13 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R16916[Dtype(RTCW(loc30))-1958])(loc30);
					loc13 = RTRV(eif_new_type(1969, 0x00), loc13);
					RTCT0("parent_is_widget", EX_CHECK);
					if ((EIF_BOOLEAN)(loc13 != NULL)) {
						RTCK0;
					} else {
						RTCF0;
					}
					tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R19565[Dtype(RTCW(loc13))-1958])(loc13);
					loc35 = tr1;
					if (EIF_TEST(loc35)) {
						loc5 = *(EIF_REFERENCE *)(loc35 + O15892[Dtype(loc35)-1695]);
					}
					RTCT0("original_widget_window /= Void", EX_CHECK);
					if ((EIF_BOOLEAN)(loc5 != NULL)) {
						RTCK0;
					} else {
						RTCF0;
					}
					loc12 = F1696_18976(RTCW(loc30));
					loc12 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R15225[Dtype(RTCW(loc12))-1634])(loc12);
					loc12 = RTRV(eif_new_type(1615, 0x00), loc12);
					RTCT0("parent_not_void", EX_CHECK);
					if ((EIF_BOOLEAN)(loc12 != NULL)) {
						RTCK0;
					} else {
						RTCF0;
					}
					F1649_18582(RTCW(loc31), loc12);
					loc10 = loc30;
					loc10 = RTRV(eif_new_type(1964, 0x00), loc10);
					RTCT0("item_was_tool_bar_button", EX_CHECK);
					if ((EIF_BOOLEAN)(loc10 != NULL)) {
						RTCK0;
					} else {
						RTCF0;
					}
					ti4_1 = F1726_19559(Current, loc10);
					F1649_18583(RTCW(loc31), ti4_1);
					loc11 = loc12;
					loc11 = RTRV(eif_new_type(1682, 0x00), loc11);
					RTCT0("tool_bar_not_void", EX_CHECK);
					if ((EIF_BOOLEAN)(loc11 != NULL)) {
						RTCK0;
					} else {
						RTCF0;
					}
					loc18 = *(EIF_INTEGER_32 *)(RTCW(loc31)+ _LNGOFF_7_4_0_1_);
					loc18 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc18 - ((EIF_INTEGER_32) 1L));
					tb1 = '\0';
					tb2 = F736_2537(RTCW(loc11));
					if ((EIF_BOOLEAN) !tb2) {
						tb1 = (EIF_BOOLEAN) (loc18 >= ((EIF_INTEGER_32) 1L));
					}
					if (tb1) {
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R16379[dtype-1871])(Current, loc11, loc18, loc18);
					}
				}
				if ((EIF_BOOLEAN)(loc29 != NULL)) {
					loc6 = F1696_18976(RTCW(loc29));
					loc6 = F1632_18299(RTCW(loc6));
					loc6 = RTRV(eif_new_type(1635, 0x00), loc6);
					tb1 = '\0';
					if ((EIF_BOOLEAN)(loc6 != NULL)) {
						tr1 = F1696_18976(RTCW(loc29));
						tb2 = F1636_18392(RTCW(loc6), tr1);
						tb1 = (EIF_BOOLEAN) !tb2;
					}
					if (tb1) {
						F1649_18584(RTCW(loc31));
					}
				}
				F1726_19563(Current);
				if ((EIF_BOOLEAN)(loc29 != NULL)) {
					tr1 = F1696_18976(RTCW(loc29));
					F1633_18339(RTCW(loc31), tr1);
				} else {
					RTCT0("l_item_source_being_docked /= Void", EX_CHECK);
					if ((EIF_BOOLEAN)(loc30 != NULL)) {
						RTCK0;
					} else {
						RTCF0;
					}
					loc11 = RTLNS(eif_new_type(1682, 0x01).id, 1682, _OBJSIZ_5_3_0_1_0_0_0_0_);
					F1596_17742(RTCW(loc11));
					F1633_18339(RTCW(loc31), loc11);
					loc9 = *(EIF_REFERENCE *)(RTCW(loc30) + O15892[Dtype(loc30)-1695]);
					loc9 = RTRV(eif_new_type(1672, 0x00), loc9);
					RTCT0("item_was_tool_bar_button", EX_CHECK);
					if ((EIF_BOOLEAN)(loc9 != NULL)) {
						RTCK0;
					} else {
						RTCF0;
					}
					F1630_18264(RTCW(loc11), loc9);
				}
				loc3 = *(EIF_REFERENCE *)(RTCW(loc31) + _REFACS_3_);
				loc3 = RTRV(eif_new_type(1765, 0x00), loc3);
				RTCT0("dialog_imp_not_void", EX_CHECK);
				if ((EIF_BOOLEAN)(loc3 != NULL)) {
					RTCK0;
				} else {
					RTCF0;
				}
				(FUNCTION_CAST(void, (EIF_REFERENCE)) R16715[Dtype(RTCW(loc3))-1984])(loc3);
				tr1 = F1594_17720(RTCW(loc31));
				{
					EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,1475,0xFF01,0,0xFF01,1648,0xFFFF};
					EIF_TYPE typres0;
					typarr0[4] = dftype;
					
					typres0 = eif_compound_id(dftype, typarr0);
					tr2 = RTLNTS(typres0.id, 3, 0);
				}
				((EIF_TYPED_VALUE *)tr2+1)->it_r = Current;
				RTAR(tr2,Current);
				((EIF_TYPED_VALUE *)tr2+2)->it_r = loc31;
				RTAR(tr2,loc31);
				
				{
					static EIF_TYPE_INDEX typarr0[] = {0xFF01,1552,0xFF01,0xFFF9,0,1475,0xFFFF};
					EIF_TYPE typres0;
					static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
					
					typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
					tr3= RTLNRF(typres0.id, (EIF_POINTER) __A1715_100, (EIF_POINTER) _A1715_100, (EIF_POINTER)(F1726_19554),tr2, 1, 0);
				}
				F969_4172(RTCW(tr1), tr3);
				F1726_19561(Current, loc31);
				tb1 = '\0';
				tr1 = *(EIF_REFERENCE *)(Current + O10561[dtype-320]);
				loc36 = tr1;
				if (EIF_TEST(loc36)) {
					tb2 = F1726_19540(loc36);
					tb1 = tb2;
				}
				if (tb1) {
					RTCT0("original_widget_window /= Void", EX_CHECK);
					if ((EIF_BOOLEAN)(loc5 != NULL)) {
						RTCK0;
					} else {
						RTCF0;
					}
					F1648_18575(RTCW(loc31), loc5);
				} else {
					F1643_18479(RTCW(loc31));
				}
				loc1 = loc31;
				loc1 = RTRV(eif_new_type(1632, 0x00), loc1);
			} else {
				F1726_19561(Current, loc7);
			}
			if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O8860[dtype-208]) != NULL)) {
				tr1 = F209_11083(Current);
				F977_14409(RTCW(tr1), NULL);
			}
		}
	} else {
		loc4 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		loc2 = *(EIF_REFERENCE *)(RTCW(loc8) + O15014[Dtype(loc8)-1595]);
		loc2 = RTRV(eif_new_type(1969, 0x00), loc2);
		RTCT0("target_widget_not_void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc2 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		loc1 = *(EIF_REFERENCE *)(RTCW(loc2) + O15892[Dtype(loc2)-1695]);
		loc1 = RTRV(eif_new_type(1632, 0x00), loc1);
	}
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc7 == NULL) || (EIF_BOOLEAN)(loc8 != NULL)) && (EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O10572[dtype-320]) == NULL))) {
		loc11 = loc8;
		loc11 = RTRV(eif_new_type(1682, 0x00), loc11);
		if ((EIF_BOOLEAN) !(EIF_BOOLEAN) ((EIF_BOOLEAN)(loc11 != NULL) && (EIF_BOOLEAN)(loc29 != NULL))) {
			loc26 = '\0';
			tr1 = RTLNS(eif_new_type(1605, 0x01).id, 1605, _OBJSIZ_2_0_0_0_0_0_0_0_);
			F1596_17742(RTCW(tr1));
			tr1 = F1606_17957(RTCW(tr1));
			loc37 = tr1;
			if (EIF_TEST(loc37)) {
				tr1 = F1607_17972(loc37);
				loc26 = (EIF_BOOLEAN)(tr1 == NULL);
			}
			RTCT0("l_widget_source_being_docked /= Void", EX_CHECK);
			if ((EIF_BOOLEAN)(loc29 != NULL)) {
				RTCK0;
			} else {
				RTCF0;
			}
			tb1 = '\0';
			if (loc26) {
				tr1 = F1970_24035(RTCW(loc29));
				tb1 = (EIF_BOOLEAN)(tr1 != NULL);
			}
			if (tb1) {
				RTCT0("container /= Void", EX_CHECK);
				if ((EIF_BOOLEAN)(loc14 != NULL)) {
					RTCK0;
				} else {
					RTCF0;
				}
				loc28 = *(EIF_REFERENCE *)(RTCW(loc14) + _REFACS_3_);
				loc28 = RTRV(eif_new_type(1970, 0x00), loc28);
				RTCT0("container_not_void", EX_CHECK);
				if ((EIF_BOOLEAN)(loc28 != NULL)) {
					RTCK0;
				} else {
					RTCF0;
				}
				tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R16342[Dtype(RTCW(loc28))-1972])(loc28);
				loc38 = tr1;
				if (EIF_TEST(loc38)) {
					F1982_24448(loc38);
				}
			}
			tr1 = F1632_18299(RTCV(RTOUCR(273,F321_12802, (Current))));
			if ((EIF_BOOLEAN)(tr1 != NULL)) {
				F1726_19563(Current);
				F1726_19564(Current);
			}
			loc39 = loc7;
			if (EIF_TEST(loc39)) {
				F1643_18464(loc39);
			}
			if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O8860[dtype-208]) != NULL)) {
				tr1 = F209_11083(Current);
				F977_14409(RTCW(tr1), NULL);
			}
		} else {
			loc40 = loc7;
			if (EIF_TEST(loc40)) {
				F1726_19561(Current, loc40);
			}
		}
	}
	if ((EIF_BOOLEAN)(loc29 == NULL)) {
		RTCT0("l_item_source_being_docked /= Void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc30 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		loc9 = *(EIF_REFERENCE *)(RTCW(loc30) + O15892[Dtype(loc30)-1695]);
		loc9 = RTRV(eif_new_type(1672, 0x00), loc9);
		RTCT0("tool_bar_button_not_void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc9 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		loc11 = loc8;
		loc11 = RTRV(eif_new_type(1682, 0x00), loc11);
		if ((EIF_BOOLEAN)(loc11 != NULL)) {
			tr1 = F1671_18803(RTCV(RTOUCR(275,F321_12805, (Current))));
			if ((EIF_BOOLEAN)(tr1 != NULL)) {
				loc21 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R16915[Dtype(RTCW(loc30))-1958])(loc30);
				loc21 = RTRV(eif_new_type(1682, 0x00), loc21);
				RTCT0("original_tool_bar_not_void", EX_CHECK);
				if ((EIF_BOOLEAN)(loc21 != NULL)) {
					RTCK0;
				} else {
					RTCF0;
				}
				loc24 = loc9;
				loc24 = RTRV(eif_new_type(1670, 0x00), loc24);
				RTCT0("tool_bar_item /= Void", EX_CHECK);
				if ((EIF_BOOLEAN)(loc24 != NULL)) {
					RTCK0;
				} else {
					RTCF0;
				}
				tr1 = RTOUCR(275,F321_12805, (Current));
				loc22 = F1630_18250(RTCW(loc21), tr1, ((EIF_INTEGER_32) 1L));
				loc23 = F1630_18250(RTCW(loc21), loc24, ((EIF_INTEGER_32) 1L));
				tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R15225[Dtype(RTCW(loc24))-1634])(loc24);
				loc25 = (EIF_BOOLEAN) (EIF_BOOLEAN)(tr1 == loc11);
				F1726_19563(Current);
				F1726_19565(Current);
				if ((EIF_BOOLEAN) (loc25 && (EIF_BOOLEAN)(loc23 == (EIF_INTEGER_32) (loc22 + ((EIF_INTEGER_32) 2L))))) {
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R16379[dtype-1871])(Current, loc11, (EIF_INTEGER_32) (loc22 + ((EIF_INTEGER_32) 1L)), (EIF_INTEGER_32) (loc22 + ((EIF_INTEGER_32) 1L)));
				}
				if ((EIF_BOOLEAN)(loc21 == loc11)) {
					loc17 = *(EIF_REFERENCE *)(RTCW(loc11) + _REFACS_3_);
					loc17 = RTRV(eif_new_type(1989, 0x00), loc17);
					RTCT0("tool_bar_imp_not_void", EX_CHECK);
					if ((EIF_BOOLEAN)(loc17 != NULL)) {
						RTCK0;
					} else {
						RTCF0;
					}
					F1990_24747(RTCW(loc17));
				}
			} else {
				loc17 = *(EIF_REFERENCE *)(RTCW(loc11) + _REFACS_3_);
				loc17 = RTRV(eif_new_type(1989, 0x00), loc17);
				RTCT0("tool_bar_imp_not_void", EX_CHECK);
				if ((EIF_BOOLEAN)(loc17 != NULL)) {
					RTCK0;
				} else {
					RTCF0;
				}
				ti4_1 = F1990_24746(RTCW(loc17));
				tr1 = F1630_18249(RTCW(loc11), (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)));
				if ((EIF_BOOLEAN)(tr1 == loc9)) {
					loc18 = F1630_18250(RTCW(loc11), loc9, ((EIF_INTEGER_32) 1L));
					ti4_1 = F1630_18253(RTCW(loc11));
					if ((EIF_BOOLEAN) (loc18 < ti4_1)) {
						loc16 = F1630_18249(RTCW(loc11), (EIF_INTEGER_32) (loc18 + ((EIF_INTEGER_32) 1L)));
						loc16 = RTRV(eif_new_type(1671, 0x00), loc16);
					}
					if ((EIF_BOOLEAN) (loc18 > ((EIF_INTEGER_32) 1L))) {
						loc15 = F1630_18249(RTCW(loc11), (EIF_INTEGER_32) (loc18 - ((EIF_INTEGER_32) 1L)));
						loc15 = RTRV(eif_new_type(1671, 0x00), loc15);
					}
					tr1 = F1627_18194(RTCV(RTOUCR(276,F321_12809, (Current))));
					ti4_1 = F1169_14635(RTCW(tr1));
					ti2_1 = *(EIF_INTEGER_16 *)(Current + O10574[dtype-320]);
					ti4_2 = (EIF_INTEGER_32) ti2_1;
					if ((EIF_BOOLEAN) (ti4_1 > ti4_2)) {
						if ((EIF_BOOLEAN)(loc16 != NULL)) {
							F1630_18273(RTCW(loc11), loc16);
						} else {
							if ((EIF_BOOLEAN)(loc15 == NULL)) {
								ti4_1 = F1630_18250(RTCW(loc11), loc9, ((EIF_INTEGER_32) 1L));
								F1630_18259(RTCW(loc11), ti4_1);
								tr1 = RTLNS(eif_new_type(1671, 0x01).id, 1671, _OBJSIZ_6_0_0_1_0_0_0_0_);
								F1596_17742(RTCW(tr1));
								F1630_18268(RTCW(loc11), tr1);
							}
						}
					} else {
						if ((EIF_BOOLEAN)(loc15 != NULL)) {
							F1630_18273(RTCW(loc11), loc15);
						} else {
							if ((EIF_BOOLEAN)(loc16 == NULL)) {
								ti4_1 = F1630_18250(RTCW(loc11), loc9, ((EIF_INTEGER_32) 1L));
								F1630_18259(RTCW(loc11), (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)));
								tr1 = RTLNS(eif_new_type(1671, 0x01).id, 1671, _OBJSIZ_6_0_0_1_0_0_0_0_);
								F1596_17742(RTCW(tr1));
								F1630_18268(RTCW(loc11), tr1);
							}
						}
					}
					loc22 = F1630_18250(RTCW(loc11), loc9, ((EIF_INTEGER_32) 1L));
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R16379[dtype-1871])(Current, loc11, loc22, loc22);
				}
			}
		}
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O8860[dtype-208]) != NULL)) {
			tr1 = F209_11083(Current);
			F977_14409(RTCW(tr1), NULL);
		}
	}
	tr1 = *(EIF_REFERENCE *)(Current + O10561[dtype-320]);
	loc41 = tr1;
	if (EIF_TEST(loc41)) {
		loc20 = *(EIF_REFERENCE *)(loc41 + O15892[Dtype(loc41)-1695]);
		loc20 = RTRV(eif_new_type(1631, 0x00), loc20);
		if ((EIF_BOOLEAN)(loc20 != NULL)) {
			tr1 = F1593_17702(RTCW(loc20));
			F976_4206(RTCW(tr1));
		} else {
			loc9 = *(EIF_REFERENCE *)(loc41 + O15892[Dtype(loc41)-1695]);
			loc9 = RTRV(eif_new_type(1672, 0x00), loc9);
			if ((EIF_BOOLEAN)(loc9 != NULL)) {
				tr1 = F1581_17666(RTCW(loc9));
				F976_4206(RTCW(tr1));
			} else {
				RTCT0("type_not_supported", EX_CHECK);
					RTCF0;
			}
		}
	}
	*(EIF_REFERENCE *)(Current + O10561[dtype-320]) = (EIF_REFERENCE) NULL;
	tb1 = '\0';
	if (loc26) {
		tr1 = RTLNS(eif_new_type(1605, 0x01).id, 1605, _OBJSIZ_2_0_0_0_0_0_0_0_);
		F1596_17742(RTCW(tr1));
		tr1 = F1606_17957(RTCW(tr1));
		loc42 = tr1;
		tb1 = EIF_TEST(loc42);
	}
	if (tb1) {
		loc27 = F1607_17972(loc42);
		if ((EIF_BOOLEAN)(loc27 != NULL)) {
			F1643_18478(RTCW(loc27));
		}
	}
	RTLE;
}

/* {EV_DOCKABLE_SOURCE_I}.close_dockable_dialog */
void F1726_19554 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(15);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,loc3);
	RTLR(3,loc4);
	RTLR(4,loc5);
	RTLR(5,loc6);
	RTLR(6,loc7);
	RTLR(7,loc8);
	RTLR(8,loc10);
	RTLR(9,loc11);
	RTLR(10,loc12);
	RTLR(11,tr1);
	RTLR(12,loc9);
	RTLR(13,Current);
	RTLR(14,tr2);
	RTLIU(15);
	
	RTGC;
	loc1 = F1633_18330(RTCW(arg1));
	F1639_18415(RTCW(arg1));
	loc3 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_6_);
	loc3 = RTRV(eif_new_type(1638, 0x00), loc3);
	tb1 = '\0';
	if ((EIF_BOOLEAN)(loc3 != NULL)) {
		tb2 = F1639_18407(RTCW(loc3));
		tb1 = tb2;
	}
	if (tb1) {
		F1633_18339(RTCW(loc3), loc1);
	}
	loc4 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_6_);
	loc4 = RTRV(eif_new_type(1633, 0x00), loc4);
	if ((EIF_BOOLEAN)(loc4 != NULL)) {
		loc2 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_7_4_0_1_);
		tb1 = F852_3267(RTCW(loc4), loc2);
		if (tb1) {
			F1630_18259(RTCW(loc4), loc2);
		} else {
			ti4_1 = F1630_18253(RTCW(loc4));
			F1630_18259(RTCW(loc4), (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)));
		}
		F1630_18268(RTCW(loc4), loc1);
		loc5 = loc4;
		loc5 = RTRV(eif_new_type(1635, 0x00), loc5);
		if ((EIF_BOOLEAN)(loc5 != NULL)) {
			tb1 = *(EIF_BOOLEAN *)(RTCW(arg1)+ _CHROFF_7_3_);
			if (tb1) {
				F1636_18399(RTCW(loc5), loc1);
			}
		}
	}
	loc6 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_6_);
	loc6 = RTRV(eif_new_type(1682, 0x00), loc6);
	if ((EIF_BOOLEAN)(loc6 != NULL)) {
		loc7 = loc1;
		loc7 = RTRV(eif_new_type(1682, 0x00), loc7);
		RTCT0("old_parent_was_tool_bar", EX_CHECK);
		if ((EIF_BOOLEAN)(loc7 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		loc8 = F1630_18249(RTCW(loc7), ((EIF_INTEGER_32) 1L));
		loc8 = RTRV(eif_new_type(1672, 0x00), loc8);
		RTCT0("tool_bar_button /= Void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc8 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		F1630_18277(RTCW(loc7));
		loc2 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_7_4_0_1_);
		tb1 = F852_3267(RTCW(loc6), loc2);
		if (tb1) {
			F1630_18259(RTCW(loc6), loc2);
		} else {
			ti4_1 = F1630_18253(RTCW(loc6));
			F1630_18259(RTCW(loc6), (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)));
		}
		F1630_18268(RTCW(loc6), loc8);
		loc10 = (EIF_REFERENCE) loc8;
	} else {
		loc10 = (EIF_REFERENCE) loc1;
	}
	tb1 = '\0';
	loc11 = arg1;
	if ((EIF_TRUE)) {
		tr1 = *(EIF_REFERENCE *)(loc11 + _REFACS_6_);
		loc12 = tr1;
		tb1 = EIF_TEST(loc12);
	}
	if (tb1) {
		loc9 = *(EIF_REFERENCE *)(loc12 + O15014[Dtype(loc12)-1595]);
		loc9 = RTRV(eif_new_type(1735, 0x00), loc9);
	}
	RTCT0("target_not_void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc9 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	tr1 = *(EIF_REFERENCE *)(RTCW(loc9) + _REFACS_2_);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		tr1 = F210_11086(RTCW(loc9));
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,1475,0xFF01,1611,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			tr2 = RTLNTS(typres0.id, 2, 0);
		}
		((EIF_TYPED_VALUE *)tr2+1)->it_r = loc10;
		RTAR(tr2,loc10);
		F977_14409(RTCW(tr1), tr2);
	}
	F1643_18464(RTCW(arg1));
	RTLE;
}

/* {EV_DOCKABLE_SOURCE_I}.drag_cursor */
static EIF_REFERENCE F1726_19555_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(311)

	RTLI(1);
	RTLR(0,tr1);
	RTLIU(1);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(eif_new_type(70, 0x01).id, 70, _OBJSIZ_0_0_0_0_0_0_0_0_);
	Result = RTOUCR(237,F71_9848, (RTCW(tr1)));
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1726_19555 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(311,F1726_19555_body,(Current));
}

/* {EV_DOCKABLE_SOURCE_I}.widget_source_being_docked */
EIF_REFERENCE F1726_19556 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLR(4,Result);
	RTLIU(5);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O10561[dtype-320]);
	loc2 = tr1;
	if (EIF_TEST(loc2)) {
		loc1 = *(EIF_REFERENCE *)(loc2 + O15892[Dtype(loc2)-1695]);
		loc1 = RTRV(eif_new_type(1631, 0x00), loc1);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			Result = *(EIF_REFERENCE *)(Current + O10561[dtype-320]);
			RTLE;
			return RTRV(eif_new_type(1969, 0x00), Result);
		}
	}
	RTLE;
	return Result;
}

/* {EV_DOCKABLE_SOURCE_I}.item_source_being_docked */
EIF_REFERENCE F1726_19557 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	
	
	Result = *(EIF_REFERENCE *)(Current + O10561[Dtype(Current)-320]);
	return RTRV(eif_new_type(1789, 0x00), Result);
}

/* {EV_DOCKABLE_SOURCE_I}.position_in_parent */
EIF_INTEGER_32 F1726_19559 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(6);
	RTLR(0,loc3);
	RTLR(1,arg1);
	RTLR(2,loc1);
	RTLR(3,loc2);
	RTLR(4,loc4);
	RTLR(5,loc5);
	RTLIU(6);
	
	RTGC;
	loc3 = *(EIF_REFERENCE *)(RTCW(arg1) + O15892[Dtype(arg1)-1695]);
	loc3 = RTRV(eif_new_type(1631, 0x00), loc3);
	if ((EIF_BOOLEAN)(loc3 != NULL)) {
		loc1 = F1632_18299(RTCW(loc3));
		loc1 = RTRV(eif_new_type(1638, 0x00), loc1);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		}
		loc2 = F1632_18299(RTCW(loc3));
		loc2 = RTRV(eif_new_type(1635, 0x00), loc2);
		if ((EIF_BOOLEAN)(loc2 != NULL)) {
			Result = F1630_18250(RTCW(loc2), loc3, ((EIF_INTEGER_32) 1L));
			RTLE;
			return (EIF_INTEGER_32) Result;
		}
	} else {
		loc4 = *(EIF_REFERENCE *)(RTCW(arg1) + O15892[Dtype(arg1)-1695]);
		loc4 = RTRV(eif_new_type(1672, 0x00), loc4);
		RTCT0("source_was_widget_or_tool_bar_button", EX_CHECK);
		if ((EIF_BOOLEAN)(loc4 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		loc5 = F1673_18806(RTCW(loc4));
		loc5 = RTRV(eif_new_type(1682, 0x00), loc5);
		RTCT0("tool_bar /= Void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc5 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		Result = F1630_18250(RTCW(loc5), loc4, ((EIF_INTEGER_32) 1L));
		RTLE;
		return (EIF_INTEGER_32) Result;
	}
	RTLE;
	return Result;
}

/* {EV_DOCKABLE_SOURCE_I}.initialize_transport */
void F1726_19560 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_REFERENCE arg3)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_16 ti2_1;
	RTCDT;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLR(3,arg3);
	RTLR(4,loc2);
	RTLR(5,loc3);
	RTLIU(6);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O8859[dtype-208]) != NULL)) {
		tr1 = *(EIF_REFERENCE *)(Current + O8859[dtype-208]);
		F977_14409(RTCW(tr1), NULL);
	}
	loc1 = arg3;
	loc1 = RTRV(eif_new_type(1631, 0x00), loc1);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		tr1 = F1593_17702(RTCW(loc1));
		F976_4204(RTCW(tr1));
	} else {
		loc2 = arg3;
		loc2 = RTRV(eif_new_type(1672, 0x00), loc2);
		if ((EIF_BOOLEAN)(loc2 != NULL)) {
			tr1 = F1581_17666(RTCW(loc2));
			F976_4204(RTCW(tr1));
		} else {
		}
	}
	tr1 = F1612_18042(RTCW(arg3));
	loc3 = tr1;
	if (EIF_TEST(loc3)) {
		tr1 = *(EIF_REFERENCE *)(loc3 + O15014[Dtype(loc3)-1595]);
		*(EIF_REFERENCE *)(Current + O10561[dtype-320]) = RTRV(eif_new_type(1725, 0), tr1);
		RTAR(Current, tr1);
	} else {
		tr1 = *(EIF_REFERENCE *)(RTCW(arg3) + O15014[Dtype(arg3)-1595]);
		*(EIF_REFERENCE *)(Current + O10561[dtype-320]) = RTRV(eif_new_type(1725, 0), tr1);
		RTAR(Current, tr1);
	}
	tr1 = *(EIF_REFERENCE *)(RTCW(arg3) + O15014[Dtype(arg3)-1595]);
	*(EIF_REFERENCE *)(Current + O10562[dtype-320]) = RTRV(eif_new_type(1725, 0), tr1);
	RTAR(Current, tr1);
	ti2_1 = (EIF_INTEGER_16) arg1;
	*(EIF_INTEGER_16 *)(Current + O10574[dtype-320]) = (EIF_INTEGER_16) ti2_1;
	ti2_1 = (EIF_INTEGER_16) arg2;
	*(EIF_INTEGER_16 *)(Current + O10575[dtype-320]) = (EIF_INTEGER_16) ti2_1;
	RTLE;
}

/* {EV_DOCKABLE_SOURCE_I}.move_dialog_to_pointer */
void F1726_19561 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_16 ti2_1;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	loc3 = F1614_18069(RTCW(arg1));
	ti4_1 = F1633_18345(RTCW(arg1));
	ti4_2 = F1614_18068(RTCW(arg1));
	ti4_3 = F1633_18344(RTCW(arg1));
	loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc3 - ti4_1) - ((EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_2 - ti4_3) / ((EIF_INTEGER_32) 2L))));
	tr1 = F1627_18194(RTCV(RTOUCR(276,F321_12809, (Current))));
	loc1 = F1169_14635(RTCW(tr1));
	tr1 = F1627_18194(RTCV(RTOUCR(276,F321_12809, (Current))));
	loc2 = F1169_14637(RTCW(tr1));
	ti2_1 = *(EIF_INTEGER_16 *)(Current + O10563[dtype-320]);
	ti4_1 = (EIF_INTEGER_32) ti2_1;
	F1615_18074(RTCW(arg1), (EIF_INTEGER_32) (loc1 - ti4_1));
	ti2_1 = *(EIF_INTEGER_16 *)(Current + O10564[dtype-320]);
	ti4_1 = (EIF_INTEGER_32) ti2_1;
	F1615_18075(RTCW(arg1), (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc2 - ti4_1) - loc3));
	RTLE;
}

/* {EV_DOCKABLE_SOURCE_I}.execute_dragging */
void F1726_19562 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_REAL_64 arg3, EIF_REAL_64 arg4, EIF_REAL_64 arg5, EIF_INTEGER_32 arg6, EIF_INTEGER_32 arg7)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc9 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc12 = (EIF_BOOLEAN) 0;
	EIF_INTEGER_32 loc13 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc14 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc15 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc16 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc17 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc18 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc19 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTCFDT;
	RTLD;
	
	RTLI(16);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,loc15);
	RTLR(3,tr1);
	RTLR(4,loc3);
	RTLR(5,loc16);
	RTLR(6,loc4);
	RTLR(7,loc6);
	RTLR(8,tr2);
	RTLR(9,loc14);
	RTLR(10,loc5);
	RTLR(11,loc17);
	RTLR(12,loc18);
	RTLR(13,loc19);
	RTLR(14,loc11);
	RTLR(15,loc10);
	RTLIU(16);
	
	RTGC;
	loc2 = F1726_19542(Current);
	tr1 = F1726_19556(Current);
	loc15 = tr1;
	if (EIF_TEST(loc15)) {
		tb1 = '\0';
		if ((EIF_BOOLEAN)(loc2 != NULL)) {
			tb1 = (EIF_BOOLEAN)(loc2 != RTOUCR(273,F321_12802, (Current)));
		}
		if (tb1) {
			loc3 = loc2;
			loc3 = RTRV(eif_new_type(1632, 0x00), loc3);
			if ((EIF_BOOLEAN)(loc3 != NULL)) {
				tr1 = F1616_18081(RTCW(loc2));
				if ((EIF_BOOLEAN)(tr1 != NULL)) {
					loc12 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				}
				loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
				for (;;) {
					tb1 = '\01';
					tb2 = '\01';
					if (!(EIF_BOOLEAN)(loc2 == NULL)) {
						tb3 = '\0';
						if ((EIF_BOOLEAN)(loc2 != NULL)) {
							tr1 = F1616_18081(RTCW(loc2));
							tb3 = (EIF_BOOLEAN)(tr1 == NULL);
						}
						tb2 = tb3;
					}
					if (!tb2) {
						tb2 = '\0';
						tb3 = '\0';
						if ((EIF_BOOLEAN)(loc2 != NULL)) {
							tr1 = F1616_18081(RTCW(loc2));
							tb3 = (EIF_BOOLEAN)(tr1 != NULL);
						}
						if (tb3) {
							tb2 = (EIF_BOOLEAN) !loc12;
						}
						tb1 = tb2;
					}
					if (tb1) break;
					loc1++;
					tr1 = F1616_18081(RTCW(loc2));
					loc16 = tr1;
					if (EIF_TEST(loc16)) {
						tr1 = F1696_18976(loc15);
						tb2 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_POINTER, EIF_REFERENCE, EIF_REFERENCE)) *(EIF_POINTER *)(loc16+ _PTROFF_4_3_0_3_0_0_))(
							*(EIF_POINTER *)(loc16+ _PTROFF_4_3_0_3_0_1_),
							*(EIF_REFERENCE *)(loc16 + _REFACS_1_), tr1);
						loc12 = tb2;
						if (loc12) {
							loc2 = F1726_19541(Current, loc3);
						}
					}
				}
				if ((EIF_BOOLEAN)(loc2 != NULL)) {
					loc3 = loc2;
					loc3 = RTRV(eif_new_type(1632, 0x00), loc3);
					RTCT0("container_not_void", EX_CHECK);
					if ((EIF_BOOLEAN)(loc3 != NULL)) {
						RTCK0;
					} else {
						RTCF0;
					}
					tr1 = F1632_18299(RTCV(RTOUCR(273,F321_12802, (Current))));
					if ((EIF_BOOLEAN)(tr1 != loc3)) {
						F321_12804(Current);
					}
					loc4 = *(EIF_REFERENCE *)(RTCW(loc3) + _REFACS_3_);
					loc4 = RTRV(eif_new_type(1973, 0x00), loc4);
					loc6 = *(EIF_REFERENCE *)(RTCW(loc3) + _REFACS_3_);
					loc6 = RTRV(eif_new_type(1758, 0x00), loc6);
				}
			}
			if ((EIF_BOOLEAN)(loc4 != NULL)) {
				loc7 = F1756_19870(RTCW(loc4));
				if ((EIF_BOOLEAN)(loc7 != ((EIF_INTEGER_32) -1L))) {
					tb2 = '\01';
					ti4_1 = F1717_19424(RTCW(loc4));
					if (!(EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
						tb3 = '\01';
						ti4_1 = F1717_19424(RTCW(loc4));
						ti4_1 = eif_min_int32 (loc7,ti4_1);
						tr1 = F1717_19423(RTCW(loc4), ti4_1);
						if (!((EIF_BOOLEAN)(tr1 == RTOUCR(273,F321_12802, (Current))))) {
							ti4_1 = eif_max_int32 ((EIF_INTEGER_32) (loc7 - ((EIF_INTEGER_32) 1L)),((EIF_INTEGER_32) 1L));
							tr1 = F1717_19423(RTCW(loc4), ti4_1);
							tb3 = (EIF_BOOLEAN)(tr1 == RTOUCR(273,F321_12802, (Current)));
						}
						tb2 = ((EIF_BOOLEAN) !tb3);
					}
					if (tb2) {
						tr1 = *(EIF_REFERENCE *)(loc15 + O15892[Dtype(loc15)-1695]);
						loc8 = F1716_19394(RTCW(loc4), tr1, ((EIF_INTEGER_32) 1L));
						tb2 = '\0';
						tr1 = F1970_24039(loc15);
						tr2 = *(EIF_REFERENCE *)(RTCW(loc4) + _REFACS_31_);
						if ((EIF_BOOLEAN)(tr1 == tr2)) {
							tb2 = (EIF_BOOLEAN) ((EIF_BOOLEAN)(loc8 == loc7) || (EIF_BOOLEAN)(loc8 == (EIF_INTEGER_32) (loc7 - ((EIF_INTEGER_32) 1L))));
						}
						if (tb2) {
							tr1 = *(EIF_REFERENCE *)(loc15 + O15892[Dtype(loc15)-1695]);
							loc13 = F1716_19394(RTCW(loc4), tr1, ((EIF_INTEGER_32) 1L));
							if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc13 == loc7) || (EIF_BOOLEAN)((EIF_INTEGER_32) (loc13 + ((EIF_INTEGER_32) 1L)) == loc7))) {
								F321_12804(Current);
							}
						} else {
							tr1 = F1632_18299(RTCV(RTOUCR(273,F321_12802, (Current))));
							if ((EIF_BOOLEAN)(tr1 != NULL)) {
								tr1 = RTOUCR(274,F321_12803, (Current));
								loc9 = F1726_19559(Current, tr1);
								if ((EIF_BOOLEAN) (loc9 < loc7)) {
									loc7--;
								}
							}
							loc14 = *(EIF_REFERENCE *)(RTCW(loc4) + _REFACS_51_);
							RTCT0("l_top_level_window_imp /= Void", EX_CHECK);
							if ((EIF_BOOLEAN)(loc14 != NULL)) {
								RTCK0;
							} else {
								RTCF0;
							}
							F1982_24448(RTCW(loc14));
							F321_12804(Current);
							loc5 = F1716_19390(RTCW(loc4));
							F1716_19403(RTCW(loc4), loc7);
							tr1 = RTOUCR(273,F321_12802, (Current));
							F1716_19411(RTCW(loc4), tr1);
							tr1 = RTOUCR(273,F321_12802, (Current));
							F1974_24293(RTCW(loc4), tr1, (EIF_BOOLEAN) 0);
							F1716_19404(RTCW(loc4), loc5);
							F1982_24449(RTCW(loc14));
						}
					}
				}
			}
			if ((EIF_BOOLEAN)(loc6 != NULL)) {
				tr1 = *(EIF_REFERENCE *)(RTCW(loc6) + O19844[Dtype(loc6)-1976]);
				if ((EIF_BOOLEAN)(tr1 == NULL)) {
					F321_12804(Current);
					tr1 = RTOUCR(273,F321_12802, (Current));
					F1759_19880(RTCW(loc6), tr1);
				}
			}
		} else {
			if ((EIF_BOOLEAN)(loc2 != RTOUCR(273,F321_12802, (Current)))) {
				F321_12804(Current);
			}
		}
	} else {
		tb2 = '\0';
		loc17 = loc2;
		if (EIF_TEST(loc17)) {
			tr1 = F1726_19557(Current);
			loc18 = tr1;
			tb2 = EIF_TEST(loc18);
		}
		if (tb2) {
			tr1 = F1616_18081(loc17);
			loc19 = tr1;
			if (EIF_TEST(loc19)) {
				loc11 = *(EIF_REFERENCE *)(loc18 + O15892[Dtype(loc18)-1695]);
				loc11 = RTRV(eif_new_type(1672, 0x00), loc11);
				if ((EIF_BOOLEAN)(loc11 != NULL)) {
					tb2 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_POINTER, EIF_REFERENCE, EIF_REFERENCE)) *(EIF_POINTER *)(loc19+ _PTROFF_4_3_0_3_0_0_))(
						*(EIF_POINTER *)(loc19+ _PTROFF_4_3_0_3_0_1_),
						*(EIF_REFERENCE *)(loc19 + _REFACS_1_), loc11);
					tb2 = tb2;
					if ((EIF_BOOLEAN) !tb2) {
						loc10 = *(EIF_REFERENCE *)(loc17 + O15014[Dtype(loc17)-1595]);
						loc10 = RTRV(eif_new_type(1989, 0x00), loc10);
					}
				}
			} else {
				loc10 = *(EIF_REFERENCE *)(loc17 + O15014[Dtype(loc17)-1595]);
				loc10 = RTRV(eif_new_type(1989, 0x00), loc10);
			}
			if ((EIF_BOOLEAN)(loc10 != NULL)) {
				loc7 = F1990_24746(RTCW(loc10));
				if ((EIF_BOOLEAN)(loc7 != ((EIF_INTEGER_32) -1L))) {
					ti4_1 = F1717_19424(RTCW(loc10));
					if ((EIF_BOOLEAN) (loc7 < ti4_1)) {
						loc7++;
					}
					tb2 = '\01';
					ti4_1 = F1717_19424(RTCW(loc10));
					ti4_1 = eif_min_int32 (loc7,ti4_1);
					tr1 = F1717_19423(RTCW(loc10), ti4_1);
					if (!((EIF_BOOLEAN)(tr1 == RTOUCR(275,F321_12805, (Current))))) {
						ti4_1 = eif_max_int32 ((EIF_INTEGER_32) (loc7 - ((EIF_INTEGER_32) 1L)),((EIF_INTEGER_32) 1L));
						tr1 = F1717_19423(RTCW(loc10), ti4_1);
						tb2 = (EIF_BOOLEAN)(tr1 == RTOUCR(275,F321_12805, (Current)));
					}
					if ((EIF_BOOLEAN) !tb2) {
						loc11 = *(EIF_REFERENCE *)(loc18 + O15892[Dtype(loc18)-1695]);
						loc11 = RTRV(eif_new_type(1672, 0x00), loc11);
						loc8 = F1716_19394(RTCW(loc10), loc11, ((EIF_INTEGER_32) 1L));
						tb2 = '\0';
						tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R16915[Dtype(loc18)-1958])(loc18);
						tr2 = *(EIF_REFERENCE *)(RTCW(loc10) + _REFACS_32_);
						if ((EIF_BOOLEAN)(tr1 == tr2)) {
							tb2 = (EIF_BOOLEAN) ((EIF_BOOLEAN)(loc8 == loc7) || (EIF_BOOLEAN)(loc8 == (EIF_INTEGER_32) (loc7 - ((EIF_INTEGER_32) 1L))));
						}
						if (tb2) {
							F321_12807(Current);
						} else {
							tr1 = F1632_18299(RTCV(RTOUCR(273,F321_12802, (Current))));
							if ((EIF_BOOLEAN)(tr1 != NULL)) {
								if ((EIF_BOOLEAN) (loc9 < loc7)) {
									loc7--;
								}
							}
							F321_12807(Current);
							F1716_19403(RTCW(loc10), loc7);
							tr1 = RTOUCR(275,F321_12805, (Current));
							F1716_19411(RTCW(loc10), tr1);
						}
					}
				}
			}
		} else {
			F321_12807(Current);
		}
	}
	RTLE;
}

/* {EV_DOCKABLE_SOURCE_I}.unparent_source_being_docked */
void F1726_19563 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTCFDT;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLR(4,loc3);
	RTLR(5,loc4);
	RTLIU(6);
	
	RTGC;
	tb1 = '\0';
	tr1 = F1726_19556(Current);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tr1 = F1696_18976(loc1);
		tr1 = F1632_18299(RTCW(tr1));
		loc2 = tr1;
		tb1 = EIF_TEST(loc2);
	}
	if (tb1) {
		tr1 = F1696_18976(loc1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R15472[Dtype(loc2)-1634])(loc2, tr1);
	} else {
		tb1 = '\0';
		tr1 = F1726_19557(Current);
		loc3 = tr1;
		if (EIF_TEST(loc3)) {
			tr1 = F1696_18976(loc3);
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R15225[Dtype(RTCW(tr1))-1634])(tr1);
			loc4 = tr1;
			tb1 = EIF_TEST(loc4);
		}
		if (tb1) {
			tr1 = F1696_18976(loc3);
			F1630_18273(loc4, tr1);
		} else {
		}
	}
	RTLE;
}

/* {EV_DOCKABLE_SOURCE_I}.replace_insert_label */
void F1726_19564 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(9);
	RTLR(0,loc6);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc3);
	RTLR(4,loc4);
	RTLR(5,loc1);
	RTLR(6,tr2);
	RTLR(7,loc2);
	RTLR(8,tr3);
	RTLIU(9);
	
	RTGC;
	tr1 = F1632_18299(RTCV(RTOUCR(273,F321_12802, (Current))));
	loc6 = tr1;
	if (EIF_TEST(loc6)) {
		loc3 = *(EIF_REFERENCE *)(loc6 + _REFACS_3_);
		loc3 = RTRV(eif_new_type(1735, 0x00), loc3);
	}
	loc4 = F1726_19556(Current);
	RTCT0("l_widget_source_being_docked /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc4 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	RTCT0("target_not_void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc3 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	loc1 = F1632_18299(RTCV(RTOUCR(273,F321_12802, (Current))));
	loc1 = RTRV(eif_new_type(1635, 0x00), loc1);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		tr1 = F1696_18976(RTCW(loc4));
		tr2 = RTOUCR(273,F321_12802, (Current));
		ti4_1 = F1630_18250(RTCW(loc1), tr2, ((EIF_INTEGER_32) 1L));
		F1630_18269(RTCW(loc1), tr1, ti4_1);
	}
	loc2 = F1632_18299(RTCV(RTOUCR(273,F321_12802, (Current))));
	loc2 = RTRV(eif_new_type(1638, 0x00), loc2);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		tr1 = F1696_18976(RTCW(loc4));
		F1633_18340(RTCW(loc2), tr1);
	}
	tr1 = *(EIF_REFERENCE *)(RTCW(loc3) + _REFACS_2_);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		tr1 = F210_11086(RTCW(loc3));
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,1475,0xFF01,1631,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			tr2 = RTLNTS(typres0.id, 2, 0);
		}
		tr3 = F1696_18976(RTCW(loc4));
		((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
		RTAR(tr2,tr3);
		F977_14409(RTCW(tr1), tr2);
	}
	RTLE;
}

/* {EV_DOCKABLE_SOURCE_I}.replace_insert_sep */
void F1726_19565 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(7);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,loc7);
	RTLR(3,tr1);
	RTLR(4,loc2);
	RTLR(5,loc3);
	RTLR(6,tr2);
	RTLIU(7);
	
	RTGC;
	loc1 = F1671_18803(RTCV(RTOUCR(275,F321_12805, (Current))));
	loc1 = RTRV(eif_new_type(1682, 0x00), loc1);
	RTCT0("parent_was_tool_bar", EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	tr1 = F1726_19557(Current);
	loc7 = tr1;
	if (EIF_TEST(loc7)) {
		loc2 = *(EIF_REFERENCE *)(loc7 + O15892[Dtype(loc7)-1695]);
		loc2 = RTRV(eif_new_type(1670, 0x00), loc2);
	}
	RTCT0("tool_bar_item_not_void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	loc3 = loc2;
	loc3 = RTRV(eif_new_type(1611, 0x00), loc3);
	RTCT0("source_not_void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc3 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	tr1 = RTOUCR(275,F321_12805, (Current));
	loc4 = F1630_18250(RTCW(loc1), tr1, ((EIF_INTEGER_32) 1L));
	tr1 = RTOUCR(275,F321_12805, (Current));
	ti4_1 = F1630_18250(RTCW(loc1), tr1, ((EIF_INTEGER_32) 1L));
	F1630_18269(RTCW(loc1), loc2, ti4_1);
	if ((EIF_BOOLEAN)(loc5 == (EIF_INTEGER_32) (loc4 + ((EIF_INTEGER_32) 2L)))) {
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R16379[Dtype(Current)-1871])(Current, loc1, loc5, loc4);
	}
	tr1 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_3_);
	tr1 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_2_);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		tr1 = F1585_17677(RTCW(loc1));
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,1475,0xFF01,1611,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			tr2 = RTLNTS(typres0.id, 2, 0);
		}
		((EIF_TYPED_VALUE *)tr2+1)->it_r = loc3;
		RTAR(tr2,loc3);
		F977_14409(RTCW(tr1), tr2);
	}
	RTLE;
}

void EIF_Minit1715 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
