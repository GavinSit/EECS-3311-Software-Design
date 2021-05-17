/*
 * Code for class ISE_EXCEPTION_MANAGER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "is53.h"
#include "eif_built_in.h"
#include "eif_except.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {ISE_EXCEPTION_MANAGER}.last_exception */
EIF_REFERENCE F380_1220 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTGC;
	Result = *(EIF_REFERENCE *)(RTCV(RTOUCR(5,F380_1238, (Current))));
	RTLE;
	return Result;
}

/* {ISE_EXCEPTION_MANAGER}.raise */
void F380_1221 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc3);
	RTLIU(4);
	
	RTGC;
	tb1 = F424_1435(RTCW(arg1));
	if ((EIF_BOOLEAN) !tb1) {
		if ((EIF_BOOLEAN) EIF_TEST(eif_is_in_rescue())) {
			tr1 = F380_1220(Current);
			F424_1439(RTCW(arg1), tr1);
		}
		F380_1232(Current, arg1);
		{
			/* INLINED CODE (ANY.default_pointer) */
			tp1 = (EIF_POINTER)  0;
			/* END INLINED CODE */
		}
		loc1 = tp1;
		tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_3_);
		loc3 = tr1;
		if (EIF_TEST(loc3)) {
			loc2 = F548_1913(loc3);
		} else {
			{
				/* INLINED CODE (ANY.default_pointer) */
				tp1 = (EIF_POINTER)  0;
				/* END INLINED CODE */
			}
			loc2 = tp1;
		}
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R1314[Dtype(RTCW(arg1))-423])(arg1);
		eif_builtin_ISE_EXCEPTION_MANAGER_developer_raise (ti4_1, loc1, loc2);
	}
	RTLE;
}

/* {ISE_EXCEPTION_MANAGER}.is_ignored */
EIF_BOOLEAN F380_1227 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTGC;
	tr1 = RTOUCR(6,F380_1234, (Current));
	ti4_1 = (EIF_INTEGER_32) eif_builtin_TYPE_type_id (arg1);
	Result = F1002_3931(RTCW(tr1), ti4_1);
	RTLE;
	return Result;
}

/* {ISE_EXCEPTION_MANAGER}.type_of_code */
EIF_REFERENCE F380_1229 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLIU(2);
	
	RTGC;
	switch (arg1) {
		case 1L:
			tr1 = RTLNTY2(eif_new_type(448, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 2L:
			tr1 = RTLNTY2(eif_new_type(442, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 3L:
			tr1 = RTLNTY2(eif_new_type(457, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 4L:
			tr1 = RTLNTY2(eif_new_type(458, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 5L:
			tr1 = RTLNTY2(eif_new_type(427, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 6L:
			tr1 = RTLNTY2(eif_new_type(461, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 7L:
			tr1 = RTLNTY2(eif_new_type(460, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 8L:
			tr1 = RTLNTY2(eif_new_type(450, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 9L:
			tr1 = RTLNTY2(eif_new_type(451, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 10L:
			tr1 = RTLNTY2(eif_new_type(459, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 11L:
			tr1 = RTLNTY2(eif_new_type(456, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 12L:
			tr1 = RTLNTY2(eif_new_type(431, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 13L:
			tr1 = RTLNTY2(eif_new_type(437, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 14L:
			tr1 = RTLNTY2(eif_new_type(434, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 15L:
			tr1 = RTLNTY2(eif_new_type(442, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 16L:
			tr1 = RTLNTY2(eif_new_type(433, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 17L:
			tr1 = RTLNTY2(eif_new_type(453, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 18L:
			tr1 = RTLNTY2(eif_new_type(441, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 19L:
			tr1 = RTLNTY2(eif_new_type(449, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 20L:
			tr1 = RTLNTY2(eif_new_type(435, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 21L:
			tr1 = RTLNTY2(eif_new_type(446, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 22L:
			tr1 = RTLNTY2(eif_new_type(430, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 23L:
			tr1 = RTLNTY2(eif_new_type(445, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 24L:
			tr1 = RTLNTY2(eif_new_type(424, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 25L:
			tr1 = RTLNTY2(eif_new_type(437, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 26L:
			tr1 = RTLNTY2(eif_new_type(454, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 27L:
			tr1 = RTLNTY2(eif_new_type(446, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 28L:
			tr1 = RTLNTY2(eif_new_type(429, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 29L:
			tr1 = RTLNTY2(eif_new_type(460, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 30L:
			tr1 = RTLNTY2(eif_new_type(438, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 31L:
			tr1 = RTLNTY2(eif_new_type(444, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		default:
			Result = (EIF_REFERENCE) NULL;
			break;
	}
	RTLE;
	return Result;
}

/* {ISE_EXCEPTION_MANAGER}.exception_from_code */
EIF_REFERENCE F380_1230 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(5);
	RTLR(0,Result);
	RTLR(1,loc3);
	RTLR(2,Current);
	RTLR(3,loc1);
	RTLR(4,loc2);
	RTLIU(5);
	
	RTGC;
	switch (arg1) {
		case 1L:
			Result = RTLNS(eif_new_type(448, 0x01).id, 448, _OBJSIZ_5_1_0_1_0_0_0_0_);
			break;
		case 2L:
			loc3 = *(EIF_REFERENCE *)(RTCV(RTOUCR(7,F380_1239, (Current))));
			F443_1495(RTCW(loc3), ((EIF_INTEGER_32) 2L));
			Result = (EIF_REFERENCE) loc3;
			break;
		case 3L:
			Result = RTLNS(eif_new_type(457, 0x01).id, 457, _OBJSIZ_5_1_0_1_0_0_0_0_);
			break;
		case 4L:
			Result = RTLNS(eif_new_type(458, 0x01).id, 458, _OBJSIZ_5_1_0_1_0_0_0_0_);
			break;
		case 5L:
			Result = RTLNS(eif_new_type(427, 0x01).id, 427, _OBJSIZ_5_1_0_1_0_0_0_0_);
			break;
		case 6L:
			Result = RTLNS(eif_new_type(461, 0x01).id, 461, _OBJSIZ_5_2_0_1_0_0_0_0_);
			break;
		case 7L:
			Result = RTLNS(eif_new_type(460, 0x01).id, 460, _OBJSIZ_5_1_0_1_0_0_0_0_);
			break;
		case 8L:
			Result = RTLNS(eif_new_type(450, 0x01).id, 450, _OBJSIZ_7_1_0_1_0_0_0_0_);
			break;
		case 9L:
			Result = RTLNS(eif_new_type(451, 0x01).id, 451, _OBJSIZ_5_1_0_1_0_0_0_0_);
			break;
		case 10L:
			Result = RTLNS(eif_new_type(459, 0x01).id, 459, _OBJSIZ_5_1_0_1_0_0_0_0_);
			break;
		case 11L:
			Result = RTLNS(eif_new_type(456, 0x01).id, 456, _OBJSIZ_5_1_0_1_0_0_0_0_);
			break;
		case 12L:
			Result = RTLNS(eif_new_type(431, 0x01).id, 431, _OBJSIZ_5_1_0_2_0_0_0_0_);
			break;
		case 13L:
			loc1 = RTLNS(eif_new_type(437, 0x01).id, 437, _OBJSIZ_5_1_0_2_0_0_0_0_);
			F438_1487(RTCW(loc1), ((EIF_INTEGER_32) 13L));
			Result = (EIF_REFERENCE) loc1;
			break;
		case 14L:
			Result = RTLNS(eif_new_type(434, 0x01).id, 434, _OBJSIZ_5_1_0_1_0_0_0_0_);
			break;
		case 15L:
			loc3 = *(EIF_REFERENCE *)(RTCV(RTOUCR(7,F380_1239, (Current))));
			F443_1495(RTCW(loc3), ((EIF_INTEGER_32) 15L));
			Result = (EIF_REFERENCE) loc3;
			break;
		case 16L:
			Result = RTLNS(eif_new_type(433, 0x01).id, 433, _OBJSIZ_5_1_0_1_0_0_0_0_);
			break;
		case 17L:
			Result = RTLNS(eif_new_type(453, 0x01).id, 453, _OBJSIZ_5_1_0_1_0_0_0_0_);
			break;
		case 18L:
			Result = RTLNS(eif_new_type(441, 0x01).id, 441, _OBJSIZ_5_1_0_1_0_0_0_0_);
			break;
		case 19L:
			Result = RTLNS(eif_new_type(449, 0x01).id, 449, _OBJSIZ_5_1_0_1_0_0_0_0_);
			break;
		case 20L:
			Result = RTLNS(eif_new_type(435, 0x01).id, 435, _OBJSIZ_5_1_0_1_0_0_0_0_);
			break;
		case 21L:
			loc2 = RTLNS(eif_new_type(446, 0x01).id, 446, _OBJSIZ_5_1_0_3_0_0_0_0_);
			F447_1505(RTCW(loc2), ((EIF_INTEGER_32) 21L));
			Result = (EIF_REFERENCE) loc2;
			break;
		case 22L:
			Result = RTLNS(eif_new_type(430, 0x01).id, 430, _OBJSIZ_5_1_0_2_0_0_0_0_);
			break;
		case 23L:
			Result = RTLNS(eif_new_type(445, 0x01).id, 445, _OBJSIZ_5_1_0_1_0_0_0_0_);
			break;
		case 24L:
			Result = RTLNS(eif_new_type(424, 0x01).id, 424, _OBJSIZ_5_1_0_1_0_0_0_0_);
			break;
		case 25L:
			loc1 = RTLNS(eif_new_type(437, 0x01).id, 437, _OBJSIZ_5_1_0_2_0_0_0_0_);
			F438_1487(RTCW(loc1), ((EIF_INTEGER_32) 25L));
			Result = (EIF_REFERENCE) loc1;
			break;
		case 26L:
			Result = RTLNS(eif_new_type(454, 0x01).id, 454, _OBJSIZ_5_1_0_1_0_0_0_0_);
			break;
		case 27L:
			loc2 = RTLNS(eif_new_type(446, 0x01).id, 446, _OBJSIZ_5_1_0_3_0_0_0_0_);
			F447_1505(RTCW(loc2), ((EIF_INTEGER_32) 27L));
			Result = (EIF_REFERENCE) loc2;
			break;
		case 28L:
			Result = RTLNS(eif_new_type(429, 0x01).id, 429, _OBJSIZ_6_1_0_3_0_0_0_0_);
			break;
		case 29L:
			Result = RTLNS(eif_new_type(460, 0x01).id, 460, _OBJSIZ_5_1_0_1_0_0_0_0_);
			break;
		case 30L:
			Result = RTLNS(eif_new_type(438, 0x01).id, 438, _OBJSIZ_5_1_0_1_0_0_0_0_);
			break;
		case 31L:
			Result = RTLNS(eif_new_type(444, 0x01).id, 444, _OBJSIZ_5_1_0_1_0_0_0_0_);
			break;
	}
	RTLE;
	return Result;
}

/* {ISE_EXCEPTION_MANAGER}.exception_data */
EIF_REFERENCE F380_1231 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTGC;
	Result = *(EIF_REFERENCE *)(RTCV(RTOUCR(8,F380_1237, (Current))));
	RTLE;
	return Result;
}

/* {ISE_EXCEPTION_MANAGER}.set_last_exception */
void F380_1232 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	tr1 = RTOUCR(5,F380_1238, (Current));
	F489_1934(RTCW(tr1), arg1);
	RTLE;
}

/* {ISE_EXCEPTION_MANAGER}.set_exception_data */
void F380_1233 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_BOOLEAN arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_REFERENCE arg5, EIF_REFERENCE arg6, EIF_REFERENCE arg7, EIF_REFERENCE arg8, EIF_REFERENCE arg9, EIF_REFERENCE arg10, EIF_INTEGER_32 arg11, EIF_BOOLEAN arg12)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
	RTLI(11);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,arg5);
	RTLR(4,arg6);
	RTLR(5,arg7);
	RTLR(6,arg8);
	RTLR(7,arg9);
	RTLR(8,arg10);
	RTLR(9,loc1);
	RTLR(10,loc2);
	RTLIU(11);
	
	RTGC;
	tr1 = RTOUCR(8,F380_1237, (Current));
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,11,1475,1508,1508,1508,0xFF01,1560,0xFF01,1560,0xFF01,1560,0xFF01,1560,0xFF01,1560,0xFF01,1560,1508,1493,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr2 = RTLNTS(typres0.id, 12, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_i4 = arg1;
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = arg3;
	((EIF_TYPED_VALUE *)tr2+3)->it_i4 = arg4;
	((EIF_TYPED_VALUE *)tr2+4)->it_r = arg5;
	RTAR(tr2,arg5);
	((EIF_TYPED_VALUE *)tr2+5)->it_r = arg6;
	RTAR(tr2,arg6);
	((EIF_TYPED_VALUE *)tr2+6)->it_r = arg7;
	RTAR(tr2,arg7);
	((EIF_TYPED_VALUE *)tr2+7)->it_r = arg8;
	RTAR(tr2,arg8);
	((EIF_TYPED_VALUE *)tr2+8)->it_r = arg9;
	RTAR(tr2,arg9);
	((EIF_TYPED_VALUE *)tr2+9)->it_r = arg10;
	RTAR(tr2,arg10);
	((EIF_TYPED_VALUE *)tr2+10)->it_i4 = arg11;
	((EIF_TYPED_VALUE *)tr2+11)->it_b = arg12;
	F489_1934(RTCW(tr1), tr2);
	if (arg2) {
		tr1 = F380_1241(Current);
		loc1 = tr1;
		if (EIF_TEST(loc1)) {
			F380_1232(Current, loc1);
		}
	} else {
		RTCT0("last_exception_attached", EX_CHECK);
		tr1 = F380_1220(Current);
		loc2 = tr1;
		if (EIF_TEST(loc2)) {
			RTCK0;
		} else {
			RTCF0;
		}
		F424_1446(loc2, arg10);
		F424_1440(loc2, arg6);
		F424_1444(loc2, arg7);
	}
	RTLE;
}

/* {ISE_EXCEPTION_MANAGER}.ignored_exceptions */
static EIF_REFERENCE F380_1234_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(6)

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEV;
	RTGC;
	RTOTP;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1001,1508,1508,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0.id, 1001, _OBJSIZ_4_3_0_10_0_0_0_0_);
	}
	F1002_3924(RTCW(tr1), ((EIF_INTEGER_32) 0L));
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F380_1234 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(6,F380_1234_body,(Current));
}

/* {ISE_EXCEPTION_MANAGER}.unignorable_exceptions */
static EIF_REFERENCE F380_1235_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(9)

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEV;
	RTGC;
	RTOTP;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1001,1508,1508,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0.id, 1001, _OBJSIZ_4_3_0_10_0_0_0_0_);
	}
	F1002_3924(RTCW(tr1), ((EIF_INTEGER_32) 1L));
	Result = (EIF_REFERENCE) tr1;
	tr1 = RTLNTY2(eif_new_type(448, 0x01), 0x01);
	loc1 = (EIF_INTEGER_32) eif_builtin_TYPE_type_id (tr1);
	F1002_3971(RTCW(Result), loc1, loc1);
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F380_1235 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(9,F380_1235_body,(Current));
}

/* {ISE_EXCEPTION_MANAGER}.unraisable_exceptions */
static EIF_REFERENCE F380_1236_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(10)

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEV;
	RTGC;
	RTOTP;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1001,1508,1508,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0.id, 1001, _OBJSIZ_4_3_0_10_0_0_0_0_);
	}
	F1002_3924(RTCW(tr1), ((EIF_INTEGER_32) 2L));
	Result = (EIF_REFERENCE) tr1;
	tr1 = RTLNTY2(eif_new_type(450, 0x01), 0x01);
	loc1 = (EIF_INTEGER_32) eif_builtin_TYPE_type_id (tr1);
	F1002_3971(RTCW(Result), loc1, loc1);
	tr1 = RTLNTY2(eif_new_type(438, 0x01), 0x01);
	loc1 = (EIF_INTEGER_32) eif_builtin_TYPE_type_id (tr1);
	F1002_3971(RTCW(Result), loc1, loc1);
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F380_1236 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(10,F380_1236_body,(Current));
}

/* {ISE_EXCEPTION_MANAGER}.exception_data_cell */
static EIF_REFERENCE F380_1237_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(8)

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEV;
	RTGC;
	RTOTP;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,488,0xFFF9,11,1475,1508,1508,1508,0xFF01,1560,0xFF01,1560,0xFF01,1560,0xFF01,1560,0xFF01,1560,0xFF01,1560,1508,1493,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0.id, 488, _OBJSIZ_1_0_0_0_0_0_0_0_);
	}
	F489_1934(RTCW(tr1), NULL);
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F380_1237 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(8,F380_1237_body,(Current));
}

/* {ISE_EXCEPTION_MANAGER}.last_exception_cell */
static EIF_REFERENCE F380_1238_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(5)

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEV;
	RTGC;
	RTOTP;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,488,423,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0.id, 488, _OBJSIZ_1_0_0_0_0_0_0_0_);
	}
	F489_1934(RTCW(tr1), NULL);
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F380_1238 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(5,F380_1238_body,(Current));
}

/* {ISE_EXCEPTION_MANAGER}.no_memory_exception_object_cell */
static EIF_REFERENCE F380_1239_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(7)

	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEV;
	RTGC;
	RTOTP;
	loc1 = RTLNS(eif_new_type(442, 0x01).id, 442, _OBJSIZ_5_1_0_2_0_0_0_0_);
	tr1 = RTLNS(eif_new_type(1560, 0x01).id, 1560, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F1559_6605(RTCW(tr1), ((EIF_INTEGER_32) 4096L));
	F424_1446(RTCW(loc1), tr1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,488,0xFF01,442,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0.id, 488, _OBJSIZ_1_0_0_0_0_0_0_0_);
	}
	F489_1934(RTCW(tr1), loc1);
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F380_1239 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(7,F380_1239_body,(Current));
}

/* {ISE_EXCEPTION_MANAGER}.is_code_ignored */
EIF_BOOLEAN F380_1240 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTCFDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	tr1 = F380_1229(Current, arg1);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		RTLE;
		return (EIF_BOOLEAN) F380_1227(Current, loc1);
	} else {
		RTLE;
		return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}/* NOTREACHED */
	
}

/* {ISE_EXCEPTION_MANAGER}.exception_from_data */
EIF_REFERENCE F380_1241 (EIF_REFERENCE Current)
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
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCFDT;
	RTLD;
	
	RTLI(12);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc3);
	RTLR(4,loc4);
	RTLR(5,loc1);
	RTLR(6,loc5);
	RTLR(7,loc6);
	RTLR(8,loc7);
	RTLR(9,loc8);
	RTLR(10,loc9);
	RTLR(11,loc10);
	RTLIU(12);
	
	RTGC;
	tb1 = '\0';
	tr1 = F380_1231(Current);
	loc2 = tr1;
	if (EIF_TEST(loc2)) {
		ti4_1 = eif_integer_32_item(loc2,1);
		tr1 = F380_1230(Current, ti4_1);
		loc3 = tr1;
		tb1 = EIF_TEST(loc3);
	}
	if (tb1) {
		loc4 = loc3;
		loc4 = RTRV(eif_new_type(450, 0x01),loc4);
		if (EIF_TEST(loc4)) {
			loc1 = F380_1220(Current);
			if ((EIF_BOOLEAN)(loc1 != NULL)) {
				F424_1439(loc3, loc1);
			}
			tr1 = eif_boxed_item(loc2,7);
			F451_1515(loc4, tr1);
			tr1 = eif_boxed_item(loc2,8);
			F451_1516(loc4, tr1);
		} else {
			loc5 = loc3;
			loc5 = RTRV(eif_new_type(438, 0x01),loc5);
			if (EIF_TEST(loc5)) {
				loc1 = F380_1220(Current);
				if ((EIF_BOOLEAN)(loc1 != NULL)) {
					F424_1439(loc3, loc1);
				}
			} else {
				loc6 = loc3;
				loc6 = RTRV(eif_new_type(461, 0x01),loc6);
				if (EIF_TEST(loc6)) {
					tb1 = eif_boolean_item(loc2,11);
					F462_1534(loc6, tb1);
				} else {
					loc7 = loc3;
					loc7 = RTRV(eif_new_type(431, 0x01),loc7);
					if (EIF_TEST(loc7)) {
						ti4_1 = eif_integer_32_item(loc2,2);
						F432_1478(loc7, ti4_1);
					} else {
						loc8 = loc3;
						loc8 = RTRV(eif_new_type(446, 0x01),loc8);
						if (EIF_TEST(loc8)) {
							ti4_1 = eif_integer_32_item(loc2,3);
							F447_1504(loc8, ti4_1);
						} else {
							loc9 = loc3;
							loc9 = RTRV(eif_new_type(430, 0x01),loc9);
							if (EIF_TEST(loc9)) {
								ti4_1 = eif_integer_32_item(loc2,3);
								F431_1474(loc9, ti4_1);
							} else {
								loc10 = loc3;
								loc10 = RTRV(eif_new_type(429, 0x01),loc10);
								if (EIF_TEST(loc10)) {
									ti4_1 = eif_integer_32_item(loc2,2);
									F430_1456(loc10, ti4_1);
									tr1 = eif_boxed_item(loc2,4);
									F430_1461(loc10, tr1);
								}
							}
						}
					}
				}
				if ((EIF_BOOLEAN) EIF_TEST(eif_is_in_rescue())) {
					loc1 = F380_1220(Current);
				}
				if ((EIF_BOOLEAN)(loc1 == NULL)) {
					loc1 = (EIF_REFERENCE) loc3;
				}
				F424_1439(loc3, loc1);
			}
		}
		tr1 = eif_boxed_item(loc2,9);
		F424_1446(loc3, tr1);
		tr1 = eif_boxed_item(loc2,4);
		F424_1432(loc3, tr1);
		tr1 = eif_boxed_item(loc2,5);
		F424_1440(loc3, tr1);
		tr1 = eif_boxed_item(loc2,6);
		F424_1444(loc3, tr1);
		RTLE;
		return (EIF_REFERENCE) loc3;
	}
	RTLE;
	return (EIF_REFERENCE) 0;
}

/* {ISE_EXCEPTION_MANAGER}.once_raise */
void F380_1242 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLR(4,loc3);
	RTLIU(5);
	
	RTGC;
	tb1 = F424_1435(RTCW(arg1));
	if ((EIF_BOOLEAN) !tb1) {
		if ((EIF_BOOLEAN) EIF_TEST(eif_is_in_rescue())) {
			tr1 = F424_1425(RTCW(arg1));
			tr2 = F380_1220(Current);
			F424_1439(RTCW(tr1), tr2);
		}
		F380_1232(Current, arg1);
		{
			/* INLINED CODE (ANY.default_pointer) */
			tp1 = (EIF_POINTER)  0;
			/* END INLINED CODE */
		}
		loc1 = tp1;
		tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_3_);
		loc3 = tr1;
		if (EIF_TEST(loc3)) {
			loc2 = F548_1913(loc3);
		} else {
			{
				/* INLINED CODE (ANY.default_pointer) */
				tp1 = (EIF_POINTER)  0;
				/* END INLINED CODE */
			}
			loc2 = tp1;
		}
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R1314[Dtype(RTCW(arg1))-423])(arg1);
		eif_builtin_ISE_EXCEPTION_MANAGER_developer_raise (ti4_1, loc1, loc2);
	}
	RTLE;
}

/* {ISE_EXCEPTION_MANAGER}.init_exception_manager */
void F380_1243 (EIF_REFERENCE Current)
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
		tr1 = RTOUCR(6,F380_1234, (Current));
		/* END INLINED CODE */
	}
	;
	{
		/* INLINED CODE (ANY.do_nothing) */
		tr1 = RTOUCR(9,F380_1235, (Current));
		/* END INLINED CODE */
	}
	;
	{
		/* INLINED CODE (ANY.do_nothing) */
		tr1 = RTOUCR(10,F380_1236, (Current));
		/* END INLINED CODE */
	}
	;
	{
		/* INLINED CODE (ANY.do_nothing) */
		tr1 = RTOUCR(8,F380_1237, (Current));
		/* END INLINED CODE */
	}
	;
	{
		/* INLINED CODE (ANY.do_nothing) */
		tr1 = RTOUCR(5,F380_1238, (Current));
		/* END INLINED CODE */
	}
	;
	{
		/* INLINED CODE (ANY.do_nothing) */
		tr1 = RTOUCR(7,F380_1239, (Current));
		/* END INLINED CODE */
	}
	;
	RTLE;
}

/* {ISE_EXCEPTION_MANAGER}.free_preallocated_trace */
void F380_1244 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(RTCV(RTOUCR(7,F380_1239, (Current))));
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		F424_1432(RTCW(loc1), NULL);
	}
	RTLE;
}

/* {ISE_EXCEPTION_MANAGER}.developer_raise */
void F380_1245 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2, EIF_POINTER arg3)
{
	GTCX
	
	
	eif_builtin_ISE_EXCEPTION_MANAGER_developer_raise (arg1, arg2, arg3);
}

/* {ISE_EXCEPTION_MANAGER}.in_rescue */
EIF_BOOLEAN F380_1246 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	Result = (EIF_BOOLEAN) EIF_TEST(eif_is_in_rescue());
	
	return Result;
}

void EIF_Minit53 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
