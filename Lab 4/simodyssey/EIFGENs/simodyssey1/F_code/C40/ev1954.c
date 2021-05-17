/*
 * Code for class EV_CONTAINER_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1954.h"
#include <string.h>
#include <windows.h>
#include "wel.h"
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

/* {EV_CONTAINER_IMP}.make */
void F1971_24161 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	RTCFDT;
	RTCDT;
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
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,911,0xFF01,2002,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSMART(typres0.id);
	}
	F912_3515(RTCW(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + O19793[dtype-1970]) = (EIF_REFERENCE) tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,976,0xFF01,0xFFF9,1,1475,0xFF01,1631,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSMART(typres0.id);
	}
	F976_4196(RTCW(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + O19801[dtype-1970]) = (EIF_REFERENCE) tr1;
	F1970_24029(Current);
	tr1 = F222_11465(Current);
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
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1552,0xFF01,0xFFF9,1,1475,0xFF01,1631,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr5= RTLNRF(typres0.id, (EIF_POINTER) __A1954_813_2, (EIF_POINTER) _A1954_813_2, (EIF_POINTER)(F1971_24206),tr2, 1, 1);
	}
	F969_4172(RTCW(tr1), tr5);
	tr1 = F222_11465(Current);
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
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1552,0xFF01,0xFFF9,1,1475,0xFF01,1631,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr5= RTLNRF(typres0.id, (EIF_POINTER) __A1954_810_2, (EIF_POINTER) _A1954_810_2, (EIF_POINTER)(F1971_24203),tr2, 1, 1);
	}
	F969_4172(RTCW(tr1), tr5);
	tr1 = *(EIF_REFERENCE *)(Current + O19801[dtype-1970]);
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
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1552,0xFF01,0xFFF9,1,1475,0xFF01,1631,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr5= RTLNRF(typres0.id, (EIF_POINTER) __A1954_812_2, (EIF_POINTER) _A1954_812_2, (EIF_POINTER)(F1971_24205),tr2, 1, 1);
	}
	F969_4172(RTCW(tr1), tr5);
	tr1 = *(EIF_REFERENCE *)(Current + O19801[dtype-1970]);
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
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1552,0xFF01,0xFFF9,1,1475,0xFF01,1631,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr5= RTLNRF(typres0.id, (EIF_POINTER) __A1954_811_2, (EIF_POINTER) _A1954_811_2, (EIF_POINTER)(F1971_24204),tr2, 1, 1);
	}
	F969_4172(RTCW(tr1), tr5);
	RTLE;
}

/* {EV_CONTAINER_IMP}.client_x */
EIF_INTEGER_32 F1971_24162 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	Result = F1408_17327(RTCV(F1912_22490(Current)));
	RTLE;
	return Result;
}

/* {EV_CONTAINER_IMP}.client_y */
EIF_INTEGER_32 F1971_24163 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	Result = F1408_17329(RTCV(F1912_22490(Current)));
	RTLE;
	return Result;
}

/* {EV_CONTAINER_IMP}.client_width */
EIF_INTEGER_32 F1971_24164 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R16562[dtype-1871])(Current)) {
		Result = F1408_17332(RTCV(F1912_22490(Current)));
	} else {
		tr1 = *(EIF_REFERENCE *)(Current + O16311[dtype-1722]);
		Result = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_0_4_0_2_);
	}
	RTLE;
	return Result;
}

/* {EV_CONTAINER_IMP}.client_height */
EIF_INTEGER_32 F1971_24165 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R16562[dtype-1871])(Current)) {
		Result = F1408_17333(RTCV(F1912_22490(Current)));
	} else {
		tr1 = *(EIF_REFERENCE *)(Current + O16311[dtype-1722]);
		Result = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_0_4_0_3_);
	}
	RTLE;
	return Result;
}

/* {EV_CONTAINER_IMP}.set_parent_imp */
void F1971_24168 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,loc1);
	RTLIU(4);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R16342[Dtype(RTCW(arg1))-1972])(arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R19735[dtype-1972])(Current, tr1);
		loc1 = arg1;
		loc1 = RTRV(eif_new_type(1911, 0x00), loc1);
		F1912_22525(Current, loc1);
	} else {
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R19735[dtype-1972])(Current, NULL);
		if ((EIF_BOOLEAN)(F1970_24073(Current) != NULL)) {
			tr1 = RTOUCR(249,F1970_24036, (Current));
			F1912_22525(Current, tr1);
		}
	}
	RTLE;
}

/* {EV_CONTAINER_IMP}.set_background_pixmap */
void F1971_24169 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		loc1 = RTLNSMART(RTCA(arg1, eif_new_type(1652, 0x01)).id);
		F1596_17742(RTCW(loc1));
		F1653_18642(RTCW(loc1), arg1);
		tr1 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_3_);
		*(EIF_REFERENCE *)(Current + O19772[Dtype(Current)-1970]) = RTRV(eif_new_type(1871, 0), tr1);
		RTAR(Current, tr1);
	}
	if (F1296_15099(Current)) {
		F1912_22563(Current);
	}
	RTLE;
}

/* {EV_CONTAINER_IMP}.destroy */
void F1971_24172 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTGC;
	tr1 = F1970_24073(Current);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tr1 = F1696_18976(loc1);
		tr2 = F1696_18976(Current);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R15472[Dtype(RTCW(tr1))-1634])(tr1, tr2);
	}
	tr1 = F1696_18976(Current);
	tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2219[Dtype(RTCW(tr1))-911])(tr1);
	if (tb1) {
		tr1 = F1696_18976(Current);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R2226[Dtype(RTCW(tr1))-950])(tr1);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R19750[Dtype(Current)-1972])(Current);
	F1696_18991(Current, (EIF_BOOLEAN) 1);
	RTLE;
}

/* {EV_CONTAINER_IMP}.on_menu_char */
void F1971_24173 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc3);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,loc2);
	RTLR(4,arg2);
	RTLIU(5);
	
	RTGC;
	loc3 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R16342[Dtype(Current)-1972])(Current);
	if ((EIF_BOOLEAN)(loc3 != NULL)) {
		loc1 = *(EIF_REFERENCE *)(RTCW(loc3) + O19893[Dtype(loc3)-1981]);
		loc1 = RTRV(eif_new_type(1691, 0x00), loc1);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			loc2 = *(EIF_REFERENCE *)(RTCW(loc1) + O15014[Dtype(loc1)-1595]);
			loc2 = RTRV(eif_new_type(1721, 0x00), loc2);
			if ((EIF_BOOLEAN)(loc2 != NULL)) {
				tp1 = F1722_19450(RTCW(loc2), arg1, arg2);
				F214_11244(RTCW(loc3), tp1);
			}
		}
	}
	RTLE;
}

/* {EV_CONTAINER_IMP}.on_draw_item */
void F1971_24174 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg2);
	RTLR(1,Current);
	RTLR(2,loc3);
	RTLR(3,tr1);
	RTLR(4,loc2);
	RTLIU(5);
	
	RTGC;
	loc1 = F1904_22275(RTCW(arg2));
	if ((EIF_BOOLEAN)(loc1 == (EIF_INTEGER_32) ODT_MENU)) {
		F1911_22461(Current, arg1, arg2);
	} else {
		if ((EIF_BOOLEAN)(loc1 == (EIF_INTEGER_32) ODT_STATIC)) {
			tr1 = F1904_22280(RTCW(arg2));
			loc3 = tr1;
			loc3 = RTRV(eif_new_type(1993, 0x01),loc3);
			if (EIF_TEST(loc3)) {
				F1994_24938(loc3, arg2);
			}
		} else {
			if ((EIF_BOOLEAN)(loc1 == (EIF_INTEGER_32) ODT_BUTTON)) {
				loc2 = F1904_22280(RTCW(arg2));
				loc2 = RTRV(eif_new_type(2001, 0x00), loc2);
				if ((EIF_BOOLEAN)(loc2 != NULL)) {
					F2002_25133(RTCW(loc2), arg2);
				}
			}
		}
	}
	RTLE;
}

/* {EV_CONTAINER_IMP}.on_color_control */
void F1971_24175 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(9);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,loc3);
	RTLR(3,arg1);
	RTLR(4,loc4);
	RTLR(5,loc1);
	RTLR(6,arg2);
	RTLR(7,tr1);
	RTLR(8,tr2);
	RTLIU(9);
	
	RTGC;
	loc2 = *(EIF_REFERENCE *)(RTCV(F1956_23756(Current)) + _REFACS_41_);
	loc3 = arg1;
	loc3 = RTRV(eif_new_type(1969, 0x01),loc3);
	if (EIF_TEST(loc3)) {
		tb1 = '\0';
		tb2 = F1910_22408(RTCV(F1956_23756(Current)));
		if (tb2) {
			loc4 = loc3;
			loc4 = RTRV(eif_new_type(1993, 0x01),loc4);
			tb1 = EIF_TEST(loc4);
		}
		if (tb1) {
			F1912_22507(Current);
			loc1 = F1971_24179(Current);
			RTCT0("brush /= Void", EX_CHECK);
			if ((EIF_BOOLEAN)(loc1 != NULL)) {
				RTCK0;
			} else {
				RTCF0;
			}
			tr1 = RTLNS(eif_new_type(1407, 0x01).id, 1407, _OBJSIZ_0_1_0_0_0_1_0_0_);
			ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16400[Dtype(loc3)-1730])(loc3);
			ti4_2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16401[Dtype(loc3)-1730])(loc3);
			F1408_17321(RTCW(tr1), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ti4_1, ti4_2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R10490[Dtype(RTCW(loc2))-409])(loc2, loc4, arg2, tr1, loc1);
			F1306_15255(RTCW(arg2));
			F519_14213(RTCW(loc1));
		} else {
			tb1 = '\01';
			tr1 = *(EIF_REFERENCE *)(loc3 + O19682[Dtype(loc3)-1969]);
			if (!(EIF_BOOLEAN)(tr1 != NULL)) {
				tr1 = *(EIF_REFERENCE *)(loc3 + O19683[Dtype(loc3)-1969]);
				tb1 = (EIF_BOOLEAN)(tr1 != NULL);
			}
			if (tb1) {
				tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R12066[Dtype(RTCW(arg1))-1941])(arg1);
				F1306_15253(RTCW(arg2), tr1);
				tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R12067[Dtype(RTCW(arg1))-1941])(arg1);
				F1306_15252(RTCW(arg2), tr1);
				tr1 = RTOUCR(285,F403_13235, (Current));
				tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R12067[Dtype(RTCW(arg1))-1941])(arg1);
				loc1 = F536_14238(RTCW(tr1), NULL, tr2);
				tp1 = *(EIF_POINTER *)(RTCW(loc1)+ _PTROFF_0_2_0_3_0_0_);
				F214_11244(Current, tp1);
				F1912_22507(Current);
			}
		}
	}
	RTLE;
}

/* {EV_CONTAINER_IMP}.background_brush_gdip */
EIF_REFERENCE F1971_24176 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(9);
	RTLR(0,loc3);
	RTLR(1,Current);
	RTLR(2,loc4);
	RTLR(3,tr1);
	RTLR(4,loc1);
	RTLR(5,loc2);
	RTLR(6,Result);
	RTLR(7,loc5);
	RTLR(8,loc6);
	RTLIU(9);
	
	RTGC;
	loc3 = RTLNS(eif_new_type(62, 0x01).id, 62, _OBJSIZ_0_0_0_0_0_0_0_0_);
	tb1 = '\0';
	if (F1296_15099(Current)) {
		tb2 = F63_9679(RTCW(loc3));
		tb1 = tb2;
	}
	if (tb1) {
		tr1 = *(EIF_REFERENCE *)(Current + O19772[dtype-1970]);
		loc4 = tr1;
		if (EIF_TEST(loc4)) {
			if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O19776[dtype-1970]) != loc4)) {
				RTAR(Current, loc4);
				*(EIF_REFERENCE *)(Current + O19776[dtype-1970]) = (EIF_REFERENCE) loc4;
				loc1 = F1872_21270(loc4);
				loc2 = RTLNS(eif_new_type(1333, 0x01).id, 1333, _OBJSIZ_1_1_0_0_0_2_0_0_);
				F1334_15805(RTCW(loc2), loc1);
				Result = RTLNS(eif_new_type(1335, 0x01).id, 1335, _OBJSIZ_0_1_0_0_0_2_0_0_);
				F1336_15828(RTCW(Result), loc2);
				F1333_15780(RTCW(loc2));
				tr1 = *(EIF_REFERENCE *)(Current + O19777[dtype-1970]);
				loc5 = tr1;
				if (EIF_TEST(loc5)) {
					F1325_15654(loc5);
				}
				RTAR(Current, Result);
				*(EIF_REFERENCE *)(Current + O19777[dtype-1970]) = (EIF_REFERENCE) Result;
			} else {
				Result = *(EIF_REFERENCE *)(Current + O19777[dtype-1970]);
				RTLE;
				return (EIF_REFERENCE) Result;
			}
		} else {
			*(EIF_REFERENCE *)(Current + O19776[dtype-1970]) = (EIF_REFERENCE) NULL;
			tr1 = *(EIF_REFERENCE *)(Current + O19777[dtype-1970]);
			loc6 = tr1;
			if (EIF_TEST(loc6)) {
				F1325_15654(loc6);
				*(EIF_REFERENCE *)(Current + O19777[dtype-1970]) = (EIF_REFERENCE) NULL;
			}
		}
	}
	RTLE;
	return Result;
}

/* {EV_CONTAINER_IMP}.background_brush */
EIF_REFERENCE F1971_24179 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,loc2);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLR(4,Result);
	RTLIU(5);
	
	RTGC;
	if (F1296_15099(Current)) {
		tr1 = *(EIF_REFERENCE *)(Current + O19772[Dtype(Current)-1970]);
		loc2 = tr1;
		if (EIF_TEST(loc2)) {
			loc1 = F1872_21270(loc2);
			Result = RTLNS(eif_new_type(1320, 0x01).id, 1320, _OBJSIZ_0_2_0_3_0_1_0_0_);
			F1321_15592(RTCW(Result), loc1);
			F519_14210(RTCW(loc1));
		} else {
			Result = RTLNS(eif_new_type(1320, 0x01).id, 1320, _OBJSIZ_0_2_0_3_0_1_0_0_);
			tr1 = F1970_24145(Current);
			F1321_15590(RTCW(Result), tr1);
		}
	}
	RTLE;
	return Result;
}

/* {EV_CONTAINER_IMP}.on_wm_vscroll */
void F1971_24180 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLIU(5);
	
	RTGC;
	if ((EIF_BOOLEAN)((EIF_INTEGER_32) LOWORD((arg1)) != ((EIF_INTEGER_32) 8L))) {
		loc2 = (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE, EIF_POINTER, EIF_POINTER)) R19789[dtype-1972])(Current, arg1, arg2);
		{
			/* INLINED CODE (ANY.default_pointer) */
			tp1 = (EIF_POINTER)  0;
			/* END INLINED CODE */
		}
		if ((EIF_BOOLEAN)(loc2 != tp1)) {
			loc1 = F1898_22150(Current, loc2);
			loc1 = RTRV(eif_new_type(1998, 0x00), loc1);
			if ((EIF_BOOLEAN)(loc1 != NULL)) {
				ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_POINTER, EIF_POINTER)) R19788[dtype-1972])(Current, arg1, arg2);
				ti4_2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_POINTER, EIF_POINTER)) R19790[dtype-1972])(Current, arg1, arg2);
				{
					/* INLINED CODE (EV_GAUGE_IMP.on_scroll) */
					/* END INLINED CODE */
				}
				;
				tr1 = *(EIF_REFERENCE *)(RTCW(loc1));
				if ((EIF_BOOLEAN)(tr1 != NULL)) {
					tr1 = F160_10367(RTCW(loc1));
					{
						static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,1475,1508,0xFFFF};
						EIF_TYPE typres0;
						static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
						
						typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
						tr2 = RTLNTS(typres0.id, 2, 1);
					}
					tr3 = F1696_18976(RTCW(loc1));
					ti4_1 = F1657_18657(RTCW(tr3));
					((EIF_TYPED_VALUE *)tr2+1)->it_i4 = ti4_1;
					F977_14409(RTCW(tr1), tr2);
				}
			}
		} else {
			ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_POINTER, EIF_POINTER)) R19788[dtype-1972])(Current, arg1, arg2);
			ti4_2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_POINTER, EIF_POINTER)) R19790[dtype-1972])(Current, arg1, arg2);
			F1913_22739(Current, ti4_1, ti4_2);
		}
	}
	RTLE;
}

/* {EV_CONTAINER_IMP}.on_wm_hscroll */
void F1971_24181 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLIU(5);
	
	RTGC;
	if ((EIF_BOOLEAN)((EIF_INTEGER_32) LOWORD((arg1)) != ((EIF_INTEGER_32) 8L))) {
		loc2 = (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE, EIF_POINTER, EIF_POINTER)) R19786[dtype-1972])(Current, arg1, arg2);
		{
			/* INLINED CODE (ANY.default_pointer) */
			tp1 = (EIF_POINTER)  0;
			/* END INLINED CODE */
		}
		if ((EIF_BOOLEAN)(loc2 != tp1)) {
			loc1 = F1898_22150(Current, loc2);
			loc1 = RTRV(eif_new_type(1998, 0x00), loc1);
			if ((EIF_BOOLEAN)(loc1 != NULL)) {
				ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_POINTER, EIF_POINTER)) R19788[dtype-1972])(Current, arg1, arg2);
				ti4_2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_POINTER, EIF_POINTER)) R19790[dtype-1972])(Current, arg1, arg2);
				{
					/* INLINED CODE (EV_GAUGE_IMP.on_scroll) */
					/* END INLINED CODE */
				}
				;
				tr1 = *(EIF_REFERENCE *)(RTCW(loc1));
				if ((EIF_BOOLEAN)(tr1 != NULL)) {
					tr1 = F160_10367(RTCW(loc1));
					{
						static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,1475,1508,0xFFFF};
						EIF_TYPE typres0;
						static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
						
						typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
						tr2 = RTLNTS(typres0.id, 2, 1);
					}
					tr3 = F1696_18976(RTCW(loc1));
					ti4_1 = F1657_18657(RTCW(tr3));
					((EIF_TYPED_VALUE *)tr2+1)->it_i4 = ti4_1;
					F977_14409(RTCW(tr1), tr2);
				}
			}
		} else {
			ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_POINTER, EIF_POINTER)) R19785[dtype-1972])(Current, arg1, arg2);
			ti4_2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_POINTER, EIF_POINTER)) R19787[dtype-1972])(Current, arg1, arg2);
			F1913_22740(Current, ti4_1, ti4_2);
		}
	}
	RTLE;
}

/* {EV_CONTAINER_IMP}.on_destroy */
void F1971_24182 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {EV_CONTAINER_IMP}.on_notify */
void F1971_24183 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
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
	EIF_REFERENCE loc13 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc14 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc15 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc16 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc17 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc18 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc19 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc20 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc21 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc22 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(25);
	RTLR(0,loc21);
	RTLR(1,Current);
	RTLR(2,arg2);
	RTLR(3,loc1);
	RTLR(4,loc2);
	RTLR(5,loc4);
	RTLR(6,loc5);
	RTLR(7,tr1);
	RTLR(8,loc3);
	RTLR(9,loc13);
	RTLR(10,loc8);
	RTLR(11,loc15);
	RTLR(12,loc16);
	RTLR(13,loc17);
	RTLR(14,loc14);
	RTLR(15,loc9);
	RTLR(16,loc6);
	RTLR(17,loc7);
	RTLR(18,loc19);
	RTLR(19,loc10);
	RTLR(20,loc11);
	RTLR(21,loc12);
	RTLR(22,loc20);
	RTLR(23,loc22);
	RTLR(24,tr2);
	RTLIU(25);
	
	RTGC;
	loc21 = *(EIF_REFERENCE *)(RTCV(F1956_23756(Current)) + _REFACS_41_);
	ti4_1 = F1903_22268(RTCW(arg2));
	if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) -414L))) {
		loc1 = RTLNS(eif_new_type(1390, 0x01).id, 1390, _OBJSIZ_1_1_0_0_0_1_0_0_);
		F1391_16829(RTCW(loc1), arg2);
		loc2 = RTLNS(eif_new_type(1387, 0x01).id, 1387, _OBJSIZ_0_1_0_0_0_1_0_0_);
		tp1 = *(EIF_POINTER *)(RTCW(arg2)+ _PTROFF_0_1_0_0_0_0_);
		F1296_15096(RTCW(loc2), tp1);
		loc4 = F1903_22266(RTCW(arg2));
		loc4 = RTRV(eif_new_type(1994, 0x00), loc4);
		RTCT0("tree /= Void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc4 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		loc5 = F1931_23076(RTCW(loc4));
		RTCT0("tooltip /= Void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc5 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		tp1 = (EIF_POINTER) HWND_TOP;
		F1912_22544(RTCW(loc5), tp1);
		tr1 = *(EIF_REFERENCE *)(RTCW(loc4) + O20025[Dtype(loc4)-1994]);
		tp1 = F1388_16796(RTCW(loc2));
		F1003_3966(RTCW(tr1), tp1);
		tr1 = *(EIF_REFERENCE *)(RTCW(loc4) + O20025[Dtype(loc4)-1994]);
		tb1 = F1003_3956(RTCW(tr1));
		if (tb1) {
			loc3 = *(EIF_REFERENCE *)(RTCW(loc4) + O20025[Dtype(loc4)-1994]);
			loc3 = *(EIF_REFERENCE *)(RTCW(loc3));
			RTCT0("temp_node /= Void", EX_CHECK);
			if ((EIF_BOOLEAN)(loc3 != NULL)) {
				RTCK0;
			} else {
				RTCF0;
			}
			tb1 = '\0';
			tr1 = F516_14185(RTCW(loc3));
			if ((EIF_BOOLEAN)(tr1 != NULL)) {
				tr1 = F516_14185(RTCW(loc3));
				tb2 = F737_2537(RTCW(tr1));
				tb1 = (EIF_BOOLEAN) !tb2;
			}
			if (tb1) {
				tr1 = F516_14185(RTCW(loc3));
				F1391_16835(RTCW(loc1), tr1);
			}
		}
	} else {
		ti4_1 = F1903_22268(RTCW(arg2));
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) -157L))) {
			loc13 = RTLNS(eif_new_type(1391, 0x01).id, 1391, _OBJSIZ_0_1_0_0_0_1_0_0_);
			tp1 = *(EIF_POINTER *)(RTCW(arg2)+ _PTROFF_0_1_0_0_0_0_);
			F1296_15096(RTCW(loc13), tp1);
			loc8 = F1903_22266(RTCW(arg2));
			loc8 = RTRV(eif_new_type(1990, 0x00), loc8);
			if ((EIF_BOOLEAN)(loc8 == NULL)) {
				loc15 = F1903_22266(RTCW(arg2));
				loc15 = RTRV(eif_new_type(1991, 0x00), loc15);
				RTCT0("multi_column_list /= Void", EX_CHECK);
				if ((EIF_BOOLEAN)(loc15 != NULL)) {
					RTCK0;
				} else {
					RTCF0;
				}
				loc5 = F1936_23176(RTCW(loc15));
				ti4_1 = F1392_16856(RTCW(loc13));
				loc16 = F1717_19423(RTCW(loc15), (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)));
				RTCT0("multi_column_list_row /= Void", EX_CHECK);
				if ((EIF_BOOLEAN)(loc16 != NULL)) {
					RTCK0;
				} else {
					RTCF0;
				}
				loc17 = *(EIF_REFERENCE *)(RTCW(loc16) + _REFACS_4_);
				loc14 = RTLNS(eif_new_type(944, 0x01).id, 944, _OBJSIZ_1_0_0_1_0_0_0_0_);
				tr1 = F1960_23820(RTCW(loc17));
				F944_3738(RTCW(loc14), tr1);
			} else {
				loc5 = F1936_23176(RTCW(loc8));
				ti4_1 = F1392_16856(RTCW(loc13));
				loc9 = F1717_19423(RTCW(loc8), (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)));
				RTCT0("list_item /= Void", EX_CHECK);
				if ((EIF_BOOLEAN)(loc9 != NULL)) {
					RTCK0;
				} else {
					RTCF0;
				}
				loc14 = RTLNS(eif_new_type(944, 0x01).id, 944, _OBJSIZ_1_0_0_1_0_0_0_0_);
				tr1 = *(EIF_REFERENCE *)(RTCW(loc9) + _REFACS_3_);
				tr1 = F516_14185(RTCW(tr1));
				F944_3738(RTCW(loc14), tr1);
			}
			RTCT0("tooltip /= Void", EX_CHECK);
			if ((EIF_BOOLEAN)(loc5 != NULL)) {
				RTCK0;
			} else {
				RTCF0;
			}
			tp1 = (EIF_POINTER) HWND_TOP;
			F1912_22544(RTCW(loc5), tp1);
			tp1 = F1392_16854(RTCW(loc13));
			tp2 = F944_3745(RTCW(loc14));
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc14)+ _LNGOFF_1_0_0_0_);
			ti4_2 = F1392_16855(RTCW(loc13));
			ti4_1 = eif_min_int32 (ti4_1,ti4_2);
			memcpy((void *)tp1, (const void *) tp2, (size_t) ti4_1);
			tp1 = F1392_16854(RTCW(loc13));
			ti4_1 = F1392_16855(RTCW(loc13));
			tp1 = RTPOF(tp1,(EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L)));
			memcpy((void *)tp1, (const void *) (EIF_INTEGER_32 *) &(loc18), (size_t) ((EIF_INTEGER_32) 1L));
		} else {
			ti4_1 = F1903_22268(RTCW(arg2));
			if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) -156L))) {
				tp1 = (EIF_POINTER) (LRESULT)((((EIF_INTEGER_32) 1L)));
				F214_11244(Current, tp1);
			} else {
				ti4_1 = F1903_22268(RTCW(arg2));
				if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1794L))) {
					loc6 = F1903_22266(RTCW(arg2));
					loc6 = RTRV(eif_new_type(2009, 0x00), loc6);
					RTCT0("rich_text /= Void", EX_CHECK);
					if ((EIF_BOOLEAN)(loc6 != NULL)) {
						RTCK0;
					} else {
						RTCF0;
					}
					loc7 = RTLNS(eif_new_type(1389, 0x01).id, 1389, _OBJSIZ_0_1_0_0_0_1_0_0_);
					F1390_16822(RTCW(loc7), arg2);
					ti4_1 = F1390_16823(RTCW(loc7));
					tr1 = F1390_16824(RTCW(loc7));
					F2010_25421(RTCW(loc6), ti4_1, tr1);
				} else {
					ti4_1 = F1903_22268(RTCW(arg2));
					if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) -2L))) {
						loc19 = F1903_22266(RTCW(arg2));
						loc19 = RTRV(eif_new_type(1995, 0x00), loc19);
						if ((EIF_BOOLEAN)(loc19 != NULL)) {
							F1996_24987(RTCW(loc19));
						}
					} else {
						ti4_1 = F1903_22268(RTCW(arg2));
						if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) -12L))) {
							loc10 = F1903_22266(RTCW(arg2));
							loc10 = RTRV(eif_new_type(2002, 0x00), loc10);
							if ((EIF_BOOLEAN)(loc10 == NULL)) {
								loc11 = F1903_22266(RTCW(arg2));
								loc11 = RTRV(eif_new_type(2004, 0x00), loc11);
								if ((EIF_BOOLEAN)(loc11 != NULL)) {
									loc12 = (EIF_REFERENCE) loc11;
								}
							} else {
								loc12 = (EIF_REFERENCE) loc10;
							}
							tb1 = '\0';
							if ((EIF_BOOLEAN)(loc12 != NULL)) {
								tb2 = F1910_22408(RTCV(F1956_23756(Current)));
								tb1 = tb2;
							}
							if (tb1) {
								loc20 = RTLNS(eif_new_type(1388, 0x01).id, 1388, _OBJSIZ_0_1_0_0_0_1_0_0_);
								tp1 = *(EIF_POINTER *)(RTCW(arg2)+ _PTROFF_0_1_0_0_0_0_);
								F1296_15096(RTCW(loc20), tp1);
								ti4_1 = F1389_16807(RTCW(loc20));
								if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 3L))) {
									loc22 = RTLNS(eif_new_type(1320, 0x01).id, 1320, _OBJSIZ_0_2_0_3_0_1_0_0_);
									tr1 = F1970_24145(RTCW(loc12));
									F1321_15590(RTCW(loc22), tr1);
									tr1 = F1389_16808(RTCW(loc20));
									tr2 = F1912_22490(RTCW(loc12));
									(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R10490[Dtype(RTCW(loc21))-409])(loc21, loc12, tr1, tr2, loc22);
									tp1 = (EIF_POINTER) (LRESULT)((((EIF_INTEGER_32) 0L)));
									F214_11244(Current, tp1);
									F519_14213(RTCW(loc22));
								}
							}
						}
					}
				}
			}
		}
	}
	RTLE;
}

/* {EV_CONTAINER_IMP}.add_radio_button */
void F1971_24203 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_3_);
	loc1 = RTRV(eif_new_type(2002, 0x00), loc1);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		tr1 = *(EIF_REFERENCE *)(Current + O19793[dtype-1970]);
		tb1 = F736_2537(RTCW(tr1));
		if ((EIF_BOOLEAN) !tb1) {
			F1942_23315(RTCW(loc1));
		}
		F1735_19664(RTCW(loc1), *(EIF_REFERENCE *)(Current + O19793[dtype-1970]));
	}
	RTLE;
}

/* {EV_CONTAINER_IMP}.remove_radio_button */
void F1971_24204 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_3_);
	loc1 = RTRV(eif_new_type(2002, 0x00), loc1);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		F1735_19665(RTCW(loc1));
		F1942_23314(RTCW(loc1));
	}
	RTLE;
}

/* {EV_CONTAINER_IMP}.enable_widget_sensitivity */
void F1971_24205 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,loc2);
	RTLR(3,Current);
	RTLR(4,tr1);
	RTLIU(5);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_3_);
	loc1 = RTRV(eif_new_type(1969, 0x00), loc1);
	RTCT0("widget_imp_not_void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	loc2 = *(EIF_REFERENCE *)(Current + O15892[Dtype(Current)-1695]);
	tb1 = '\0';
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		tr1 = *(EIF_REFERENCE *)(RTCW(loc2) + _REFACS_3_);
		tb2 = F1912_22467(RTCW(tr1));
		tb1 = (EIF_BOOLEAN) !tb2;
	}
	if (tb1) {
		tb1 = *(EIF_BOOLEAN *)(RTCW(loc1) + O16430[Dtype(loc1)-1731]);
		if ((EIF_BOOLEAN) !tb1) {
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R16433[Dtype(RTCW(loc1))-1964])(loc1);
		}
	}
	RTLE;
}

/* {EV_CONTAINER_IMP}.disable_widget_sensitivity */
void F1971_24206 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,loc2);
	RTLR(3,Current);
	RTLR(4,tr1);
	RTLIU(5);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_3_);
	loc1 = RTRV(eif_new_type(1969, 0x00), loc1);
	RTCT0("widget_imp_not_void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	loc2 = *(EIF_REFERENCE *)(Current + O15892[Dtype(Current)-1695]);
	tb1 = '\0';
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		tr1 = *(EIF_REFERENCE *)(RTCW(loc2) + _REFACS_3_);
		tb2 = F1912_22467(RTCW(tr1));
		tb1 = (EIF_BOOLEAN) !tb2;
	}
	if (tb1) {
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R16434[Dtype(RTCW(loc1))-1964])(loc1);
	}
	RTLE;
}

/* {EV_CONTAINER_IMP}.default_process_message */
void F1971_24210 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2, EIF_POINTER arg3)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if ((EIF_BOOLEAN) !F1911_22458(Current, arg1, arg2, arg3)) {
		F1970_24087(Current, arg1, arg2, arg3);
	}
	RTLE;
}

void EIF_Minit1954 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
