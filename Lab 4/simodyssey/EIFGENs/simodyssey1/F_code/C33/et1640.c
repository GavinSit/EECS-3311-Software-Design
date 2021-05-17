/*
 * Code for class ETF_MAIN_WINDOW_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "et1640.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {ETF_MAIN_WINDOW_IMP}.initialize */
void F1646_18510 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	RTCFDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLIU(4);
	
	RTGC;
	F1645_18495(Current);
	F1633_18339(Current, *(EIF_REFERENCE *)(Current + _REFACS_6_));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_6_);
	F1630_18264(RTCW(tr1), *(EIF_REFERENCE *)(Current + _REFACS_8_));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_8_);
	F1633_18339(RTCW(tr1), *(EIF_REFERENCE *)(Current + _REFACS_9_));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_9_);
	F1630_18264(RTCW(tr1), *(EIF_REFERENCE *)(Current + _REFACS_10_));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_9_);
	F1630_18264(RTCW(tr1), *(EIF_REFERENCE *)(Current + _REFACS_12_));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_9_);
	F1630_18264(RTCW(tr1), *(EIF_REFERENCE *)(Current + _REFACS_7_));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_7_);
	F1630_18264(RTCW(tr1), *(EIF_REFERENCE *)(Current + _REFACS_13_));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_7_);
	F1630_18264(RTCW(tr1), *(EIF_REFERENCE *)(Current + _REFACS_14_));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_7_);
	F1630_18264(RTCW(tr1), *(EIF_REFERENCE *)(Current + _REFACS_15_));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_9_);
	F1630_18264(RTCW(tr1), *(EIF_REFERENCE *)(Current + _REFACS_16_));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_9_);
	F1630_18264(RTCW(tr1), *(EIF_REFERENCE *)(Current + _REFACS_19_));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_9_);
	F1630_18264(RTCW(tr1), *(EIF_REFERENCE *)(Current + _REFACS_11_));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_9_);
	F1630_18264(RTCW(tr1), *(EIF_REFERENCE *)(Current + _REFACS_17_));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_6_);
	F1630_18264(RTCW(tr1), *(EIF_REFERENCE *)(Current + _REFACS_18_));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_6_);
	F1636_18393(RTCW(tr1));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_9_);
	F1636_18399(RTCW(tr1), *(EIF_REFERENCE *)(Current + _REFACS_10_));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_9_);
	F1636_18399(RTCW(tr1), *(EIF_REFERENCE *)(Current + _REFACS_12_));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_9_);
	F1636_18399(RTCW(tr1), *(EIF_REFERENCE *)(Current + _REFACS_7_));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_9_);
	F1636_18399(RTCW(tr1), *(EIF_REFERENCE *)(Current + _REFACS_19_));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_9_);
	F1636_18399(RTCW(tr1), *(EIF_REFERENCE *)(Current + _REFACS_11_));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_10_);
	tr2 = RTMS_EX_H("Enter Command (\"man\" for options)",33,1443321129);
	F1622_18116(RTCW(tr1), tr2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_7_);
	F1636_18393(RTCW(tr1));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_13_);
	tr2 = RTMS_EX_H("Execute",7,127027557);
	F1622_18116(RTCW(tr1), tr2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_14_);
	tr2 = RTMS_EX_H("Reset",5,1702691188);
	F1622_18116(RTCW(tr1), tr2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_15_);
	tr2 = RTMS_EX_H("Load",4,1282367844);
	F1622_18116(RTCW(tr1), tr2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_16_);
	F1659_18685(RTCW(tr1));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_11_);
	tr2 = RTLNS(eif_new_type(1602, 0x01).id, 1602, _OBJSIZ_2_0_0_0_0_0_0_0_);
	F1603_17888(RTCW(tr2), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L));
	F1611_18036(RTCW(tr1), tr2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_11_);
	tr2 = RTLNS(eif_new_type(1602, 0x01).id, 1602, _OBJSIZ_2_0_0_0_0_0_0_0_);
	F1603_17888(RTCW(tr2), ((EIF_INTEGER_32) 255L), ((EIF_INTEGER_32) 255L), ((EIF_INTEGER_32) 255L));
	F1611_18035(RTCW(tr1), tr2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_11_);
	tr2 = RTMS_EX_H("Status",6,1799097715);
	F1622_18116(RTCW(tr1), tr2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_11_);
	F1623_18126(RTCW(tr1));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_17_);
	F1659_18685(RTCW(tr1));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_18_);
	F1632_18323(RTCW(tr1), ((EIF_INTEGER_32) 200L));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_18_);
	F1632_18324(RTCW(tr1), ((EIF_INTEGER_32) 100L));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_18_);
	F1659_18685(RTCW(tr1));
	F1632_18323(Current, ((EIF_INTEGER_32) 700L));
	F1632_18324(Current, ((EIF_INTEGER_32) 500L));
	tr1 = RTMS_EX_H("system etf_template GUI",23,1355129417);
	F1643_18473(Current, tr1);
	F1646_18538(Current);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_12_);
	tr1 = F1592_17699(RTCW(tr1));
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
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1552,0xFF01,0xFFF9,0,1475,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRF(typres0.id, (EIF_POINTER) __A1640_318, (EIF_POINTER) _A1640_318, (EIF_POINTER)(F1647_18559),tr2, 1, 0);
	}
	F969_4172(RTCW(tr1), tr3);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_13_);
	tr1 = F1591_17697(RTCW(tr1));
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
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1552,0xFF01,0xFFF9,0,1475,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRF(typres0.id, (EIF_POINTER) __A1640_319, (EIF_POINTER) _A1640_319, (EIF_POINTER)(F1647_18560),tr2, 1, 0);
	}
	F969_4172(RTCW(tr1), tr3);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_14_);
	tr1 = F1591_17697(RTCW(tr1));
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
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1552,0xFF01,0xFFF9,0,1475,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRF(typres0.id, (EIF_POINTER) __A1640_320, (EIF_POINTER) _A1640_320, (EIF_POINTER)(F1647_18561),tr2, 1, 0);
	}
	F969_4172(RTCW(tr1), tr3);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_15_);
	tr1 = F1591_17697(RTCW(tr1));
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
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1552,0xFF01,0xFFF9,0,1475,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRF(typres0.id, (EIF_POINTER) __A1640_321, (EIF_POINTER) _A1640_321, (EIF_POINTER)(F1647_18562),tr2, 1, 0);
	}
	F969_4172(RTCW(tr1), tr3);
	tr1 = F1594_17720(Current);
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
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1552,0xFF01,0xFFF9,0,1475,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRF(typres0.id, (EIF_POINTER) __A1640_262, (EIF_POINTER) _A1640_262, (EIF_POINTER)(F1643_18465),tr2, 1, 0);
	}
	F969_4172(RTCW(tr1), tr3);
	{
		/* INLINED CODE (ETF_MAIN_WINDOW_IMP.user_initialization) */
		/* END INLINED CODE */
	}
	;
	RTLE;
}

/* {ETF_MAIN_WINDOW_IMP}.create_interface_objects */
void F1646_18511 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTCFDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNSMART(eif_new_type(1637, 1).id);
	F1596_17742(RTCW(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_6_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_new_type(1638, 1).id);
	F1596_17742(RTCW(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_8_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_new_type(1636, 1).id);
	F1596_17742(RTCW(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_9_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_new_type(1653, 1).id);
	F1596_17742(RTCW(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_10_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_new_type(1661, 1).id);
	F1596_17742(RTCW(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_12_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_new_type(1637, 1).id);
	F1596_17742(RTCW(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_7_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_new_type(1663, 1).id);
	F1596_17742(RTCW(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_13_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_new_type(1663, 1).id);
	F1596_17742(RTCW(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_14_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_new_type(1663, 1).id);
	F1596_17742(RTCW(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_15_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_new_type(1660, 1).id);
	F1596_17742(RTCW(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_16_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_new_type(1655, 1).id);
	F1596_17742(RTCW(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_19_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_new_type(1653, 1).id);
	F1596_17742(RTCW(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_11_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_new_type(1660, 1).id);
	F1596_17742(RTCW(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_17_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_new_type(1660, 1).id);
	F1596_17742(RTCW(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_18_) = (EIF_REFERENCE) tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,950,0xFF01,1552,0xFF01,0xFFF9,1,1475,0xFF01,1557,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSMART(typres0.id);
	}
	F951_4073(RTCW(tr1), ((EIF_INTEGER_32) 10L));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_20_) = (EIF_REFERENCE) tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,950,0xFF01,1553,0xFF01,0xFFF9,0,1475,0xFF01,1564,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSMART(typres0.id);
	}
	F951_4073(RTCW(tr1), ((EIF_INTEGER_32) 10L));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_21_) = (EIF_REFERENCE) tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,950,0xFF01,1552,0xFF01,0xFFF9,1,1475,1508,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSMART(typres0.id);
	}
	F951_4073(RTCW(tr1), ((EIF_INTEGER_32) 10L));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_22_) = (EIF_REFERENCE) tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,950,0xFF01,1555,0xFF01,0xFFF9,0,1475,1508,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSMART(typres0.id);
	}
	F951_4073(RTCW(tr1), ((EIF_INTEGER_32) 10L));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_23_) = (EIF_REFERENCE) tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,950,0xFF01,1552,0xFF01,0xFFF9,1,1475,0xFF01,1652,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSMART(typres0.id);
	}
	F951_4073(RTCW(tr1), ((EIF_INTEGER_32) 10L));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_24_) = (EIF_REFERENCE) tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,950,0xFF01,1553,0xFF01,0xFFF9,0,1475,0xFF01,1652,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSMART(typres0.id);
	}
	F951_4073(RTCW(tr1), ((EIF_INTEGER_32) 10L));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_25_) = (EIF_REFERENCE) tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,950,0xFF01,1555,0xFF01,0xFFF9,0,1475,1508,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSMART(typres0.id);
	}
	F951_4073(RTCW(tr1), ((EIF_INTEGER_32) 10L));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_26_) = (EIF_REFERENCE) tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,950,0xFF01,1552,0xFF01,0xFFF9,1,1475,0xFF01,849,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSMART(typres0.id);
	}
	F951_4073(RTCW(tr1), ((EIF_INTEGER_32) 10L));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_27_) = (EIF_REFERENCE) tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,950,0xFF01,1552,0xFF01,0xFFF9,1,1475,0xFF01,1601,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSMART(typres0.id);
	}
	F951_4073(RTCW(tr1), ((EIF_INTEGER_32) 10L));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_28_) = (EIF_REFERENCE) tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,950,0xFF01,1553,0xFF01,0xFFF9,0,1475,0xFF01,1601,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSMART(typres0.id);
	}
	F951_4073(RTCW(tr1), ((EIF_INTEGER_32) 10L));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_29_) = (EIF_REFERENCE) tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,950,0xFF01,1553,0xFF01,0xFFF9,0,1475,0xFF01,1652,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSMART(typres0.id);
	}
	F951_4073(RTCW(tr1), ((EIF_INTEGER_32) 10L));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_25_) = (EIF_REFERENCE) tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,950,0xFF01,1552,0xFF01,0xFFF9,1,1475,0xFF01,1602,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSMART(typres0.id);
	}
	F951_4073(RTCW(tr1), ((EIF_INTEGER_32) 10L));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_30_) = (EIF_REFERENCE) tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,950,0xFF01,1553,0xFF01,0xFFF9,0,1475,0xFF01,1602,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSMART(typres0.id);
	}
	F951_4073(RTCW(tr1), ((EIF_INTEGER_32) 10L));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_31_) = (EIF_REFERENCE) tr1;
	F1647_18552(Current);
	RTLE;
}

/* {ETF_MAIN_WINDOW_IMP}.set_attributes_using_string_constants */
void F1646_18533 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,loc1);
	RTLIU(4);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_20_);
	F951_4104(RTCW(tr1));
	for (;;) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_20_);
		tb1 = F852_3270(RTCW(tr1));
		if (tb1) break;
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_21_);
		tr2 = *(EIF_REFERENCE *)(Current + _REFACS_20_);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr2) + O3095[Dtype(tr2)-950]);
		tr1 = F951_4079(RTCW(tr1), ti4_1);
		tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_POINTER, EIF_REFERENCE)) *(EIF_POINTER *)(RTCW(tr1)+ _PTROFF_5_2_0_3_0_0_))(
			*(EIF_POINTER *)(RTCW(tr1)+ _PTROFF_5_2_0_3_0_1_),
			*(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_1_));
		*(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_4_) = tr2;
		RTAR(tr1, tr2);
		tr1 = tr2;
		loc1 = *(EIF_REFERENCE *)(Current + _REFACS_21_);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_20_);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1) + O3095[Dtype(tr1)-950]);
		loc1 = F951_4079(RTCW(loc1), ti4_1);
		loc1 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_4_);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_20_);
			tr1 = F951_4078(RTCW(tr1));
			(FUNCTION_CAST(void, (EIF_POINTER, EIF_REFERENCE, EIF_REFERENCE)) *(EIF_POINTER *)(RTCW(tr1)+ _PTROFF_4_2_0_3_0_0_))(
				*(EIF_POINTER *)(RTCW(tr1)+ _PTROFF_4_2_0_3_0_1_),
				*(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_1_), loc1);
		}
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_20_);
		F951_4106(RTCW(tr1));
	}
	RTLE;
}

/* {ETF_MAIN_WINDOW_IMP}.set_attributes_using_integer_constants */
void F1646_18534 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,loc4);
	RTLIU(4);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_22_);
	F951_4104(RTCW(tr1));
	for (;;) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_22_);
		tb1 = F852_3270(RTCW(tr1));
		if (tb1) break;
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_23_);
		tr2 = *(EIF_REFERENCE *)(Current + _REFACS_22_);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr2) + O3095[Dtype(tr2)-950]);
		tr1 = F951_4079(RTCW(tr1), ti4_1);
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_POINTER, EIF_REFERENCE)) *(EIF_POINTER *)(RTCW(tr1)+ _PTROFF_4_2_0_4_0_0_))(
			*(EIF_POINTER *)(RTCW(tr1)+ _PTROFF_4_2_0_4_0_1_),
			*(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_1_));
		*(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_4_2_0_3_) = ti4_1;
		ti4_1 = ti4_1;
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_23_);
		tr2 = *(EIF_REFERENCE *)(Current + _REFACS_22_);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr2) + O3095[Dtype(tr2)-950]);
		tr1 = F951_4079(RTCW(tr1), ti4_1);
		loc1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_4_2_0_3_);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_22_);
		tr1 = F951_4078(RTCW(tr1));
		(FUNCTION_CAST(void, (EIF_POINTER, EIF_REFERENCE, EIF_INTEGER_32)) *(EIF_POINTER *)(RTCW(tr1)+ _PTROFF_4_2_0_3_0_0_))(
			*(EIF_POINTER *)(RTCW(tr1)+ _PTROFF_4_2_0_3_0_1_),
			*(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_1_), loc1);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_22_);
		F951_4106(RTCW(tr1));
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_26_);
	F951_4104(RTCW(tr1));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_27_);
	F951_4104(RTCW(tr1));
	for (;;) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_26_);
		tb2 = F852_3270(RTCW(tr1));
		if (tb2) break;
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_26_);
		tr1 = F951_4078(RTCW(tr1));
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_POINTER, EIF_REFERENCE)) *(EIF_POINTER *)(RTCW(tr1)+ _PTROFF_4_2_0_4_0_0_))(
			*(EIF_POINTER *)(RTCW(tr1)+ _PTROFF_4_2_0_4_0_1_),
			*(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_1_));
		*(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_4_2_0_3_) = ti4_1;
		ti4_1 = ti4_1;
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_26_);
		tr1 = F951_4078(RTCW(tr1));
		loc2 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_4_2_0_3_);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_26_);
		F951_4106(RTCW(tr1));
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_26_);
		tr1 = F951_4078(RTCW(tr1));
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_POINTER, EIF_REFERENCE)) *(EIF_POINTER *)(RTCW(tr1)+ _PTROFF_4_2_0_4_0_0_))(
			*(EIF_POINTER *)(RTCW(tr1)+ _PTROFF_4_2_0_4_0_1_),
			*(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_1_));
		*(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_4_2_0_3_) = ti4_1;
		ti4_1 = ti4_1;
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_26_);
		tr1 = F951_4078(RTCW(tr1));
		loc3 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_4_2_0_3_);
		loc4 = RTLNS(eif_new_type(849, 0x01).id, 849, _OBJSIZ_0_1_0_2_0_0_0_0_);
		F850_3137(RTCW(loc4), loc2, loc3);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_27_);
		tr1 = F951_4078(RTCW(tr1));
		(FUNCTION_CAST(void, (EIF_POINTER, EIF_REFERENCE, EIF_REFERENCE)) *(EIF_POINTER *)(RTCW(tr1)+ _PTROFF_4_2_0_3_0_0_))(
			*(EIF_POINTER *)(RTCW(tr1)+ _PTROFF_4_2_0_3_0_1_),
			*(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_1_), loc4);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_26_);
		F951_4106(RTCW(tr1));
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_27_);
		F951_4106(RTCW(tr1));
	}
	RTLE;
}

/* {ETF_MAIN_WINDOW_IMP}.set_attributes_using_pixmap_constants */
void F1646_18535 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,loc1);
	RTLIU(4);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_24_);
	F951_4104(RTCW(tr1));
	for (;;) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_24_);
		tb1 = F852_3270(RTCW(tr1));
		if (tb1) break;
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_25_);
		tr2 = *(EIF_REFERENCE *)(Current + _REFACS_24_);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr2) + O3095[Dtype(tr2)-950]);
		tr1 = F951_4079(RTCW(tr1), ti4_1);
		tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_POINTER, EIF_REFERENCE)) *(EIF_POINTER *)(RTCW(tr1)+ _PTROFF_5_2_0_3_0_0_))(
			*(EIF_POINTER *)(RTCW(tr1)+ _PTROFF_5_2_0_3_0_1_),
			*(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_1_));
		*(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_4_) = tr2;
		RTAR(tr1, tr2);
		tr1 = tr2;
		loc1 = *(EIF_REFERENCE *)(Current + _REFACS_25_);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_24_);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1) + O3095[Dtype(tr1)-950]);
		loc1 = F951_4079(RTCW(loc1), ti4_1);
		loc1 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_4_);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_24_);
			tr1 = F951_4078(RTCW(tr1));
			(FUNCTION_CAST(void, (EIF_POINTER, EIF_REFERENCE, EIF_REFERENCE)) *(EIF_POINTER *)(RTCW(tr1)+ _PTROFF_4_2_0_3_0_0_))(
				*(EIF_POINTER *)(RTCW(tr1)+ _PTROFF_4_2_0_3_0_1_),
				*(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_1_), loc1);
		}
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_24_);
		F951_4106(RTCW(tr1));
	}
	RTLE;
}

/* {ETF_MAIN_WINDOW_IMP}.set_attributes_using_font_constants */
void F1646_18536 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,loc1);
	RTLIU(4);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_28_);
	F951_4104(RTCW(tr1));
	for (;;) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_28_);
		tb1 = F852_3270(RTCW(tr1));
		if (tb1) break;
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_29_);
		tr2 = *(EIF_REFERENCE *)(Current + _REFACS_28_);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr2) + O3095[Dtype(tr2)-950]);
		tr1 = F951_4079(RTCW(tr1), ti4_1);
		tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_POINTER, EIF_REFERENCE)) *(EIF_POINTER *)(RTCW(tr1)+ _PTROFF_5_2_0_3_0_0_))(
			*(EIF_POINTER *)(RTCW(tr1)+ _PTROFF_5_2_0_3_0_1_),
			*(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_1_));
		*(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_4_) = tr2;
		RTAR(tr1, tr2);
		tr1 = tr2;
		loc1 = *(EIF_REFERENCE *)(Current + _REFACS_29_);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_28_);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1) + O3095[Dtype(tr1)-950]);
		loc1 = F951_4079(RTCW(loc1), ti4_1);
		loc1 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_4_);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_28_);
			tr1 = F951_4078(RTCW(tr1));
			(FUNCTION_CAST(void, (EIF_POINTER, EIF_REFERENCE, EIF_REFERENCE)) *(EIF_POINTER *)(RTCW(tr1)+ _PTROFF_4_2_0_3_0_0_))(
				*(EIF_POINTER *)(RTCW(tr1)+ _PTROFF_4_2_0_3_0_1_),
				*(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_1_), loc1);
		}
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_28_);
		F951_4106(RTCW(tr1));
	}
	RTLE;
}

/* {ETF_MAIN_WINDOW_IMP}.set_attributes_using_color_constants */
void F1646_18537 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,loc1);
	RTLIU(4);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_30_);
	F951_4104(RTCW(tr1));
	for (;;) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_30_);
		tb1 = F852_3270(RTCW(tr1));
		if (tb1) break;
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_31_);
		tr2 = *(EIF_REFERENCE *)(Current + _REFACS_30_);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr2) + O3095[Dtype(tr2)-950]);
		tr1 = F951_4079(RTCW(tr1), ti4_1);
		tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_POINTER, EIF_REFERENCE)) *(EIF_POINTER *)(RTCW(tr1)+ _PTROFF_5_2_0_3_0_0_))(
			*(EIF_POINTER *)(RTCW(tr1)+ _PTROFF_5_2_0_3_0_1_),
			*(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_1_));
		*(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_4_) = tr2;
		RTAR(tr1, tr2);
		tr1 = tr2;
		loc1 = *(EIF_REFERENCE *)(Current + _REFACS_31_);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_30_);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1) + O3095[Dtype(tr1)-950]);
		loc1 = F951_4079(RTCW(loc1), ti4_1);
		loc1 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_4_);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_30_);
			tr1 = F951_4078(RTCW(tr1));
			(FUNCTION_CAST(void, (EIF_POINTER, EIF_REFERENCE, EIF_REFERENCE)) *(EIF_POINTER *)(RTCW(tr1)+ _PTROFF_4_2_0_3_0_0_))(
				*(EIF_POINTER *)(RTCW(tr1)+ _PTROFF_4_2_0_3_0_1_),
				*(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_1_), loc1);
		}
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_30_);
		F951_4106(RTCW(tr1));
	}
	RTLE;
}

/* {ETF_MAIN_WINDOW_IMP}.set_all_attributes_using_constants */
void F1646_18538 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1646_18533(Current);
	F1646_18534(Current);
	F1646_18535(Current);
	F1646_18536(Current);
	F1646_18537(Current);
	RTLE;
}

void EIF_Minit1640 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
