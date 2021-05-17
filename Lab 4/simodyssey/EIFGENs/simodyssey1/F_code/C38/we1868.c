/*
 * Code for class WEL_FONT
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1868.h"
#include <wingdi.h>
#include <wel.h>
#include "wel.h"
#include "eif_misc.h"
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

/* {WEL_FONT}.make_indirect */
void F1885_21695 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_0_1_0_0_0_0_);
	tp1 = (EIF_POINTER) CreateFontIndirect(((LOGFONT *) tp1));
	*(EIF_POINTER *)(Current+ _PTROFF_0_2_0_3_0_0_) = (EIF_POINTER) tp1;
	{
		/* INLINED CODE (WEL_GDI_ANY.gdi_make) */
		/* END INLINED CODE */
	}
	;
	RTLE;
}

/* {WEL_FONT}.set_indirect */
void F1885_21698 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_2_0_3_0_0_);
	loc1 = (EIF_BOOLEAN) EIF_TEST(DeleteObject(((HGDIOBJ) tp1)));
	*(EIF_POINTER *)(Current+ _PTROFF_0_2_0_3_0_0_) = (EIF_POINTER) loc2;
	tp1 = *(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_0_1_0_0_0_0_);
	tp1 = (EIF_POINTER) CreateFontIndirect(((LOGFONT *) tp1));
	*(EIF_POINTER *)(Current+ _PTROFF_0_2_0_3_0_0_) = (EIF_POINTER) tp1;
	RTLE;
}

/* {WEL_FONT}.log_font */
EIF_REFERENCE F1885_21699 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(1406, 0x01).id, 1406, _OBJSIZ_0_1_0_0_0_1_0_0_);
	F1407_17197(RTCW(tr1), Current);
	RTLE;
	return (EIF_REFERENCE) tr1;
}

/* {WEL_FONT}.width */
EIF_INTEGER_32 F1885_21700 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	tr1 = RTMS_EX_H("x",1,120);
	Result = F1885_21703(Current, tr1);
	RTLE;
	return Result;
}

/* {WEL_FONT}.height */
EIF_INTEGER_32 F1885_21701 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	loc1 = RTLNS(eif_new_type(1310, 0x01).id, 1310, _OBJSIZ_6_2_0_3_0_7_0_0_);
	F1311_15448(RTCW(loc1));
	ti4_1 = F1407_17200(RTCV(F1885_21699(Current)));
	Result = F1883_21675(Current, loc1, (EIF_INTEGER_32) -ti4_1);
	F1311_15449(RTCW(loc1));
	RTLE;
	return Result;
}

/* {WEL_FONT}.point */
EIF_INTEGER_32 F1885_21702 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	loc1 = RTLNS(eif_new_type(1310, 0x01).id, 1310, _OBJSIZ_6_2_0_3_0_7_0_0_);
	F1311_15448(RTCW(loc1));
	ti4_1 = F1407_17200(RTCV(F1885_21699(Current)));
	Result = F1883_21671(Current, loc1, (EIF_INTEGER_32) -ti4_1);
	F1311_15449(RTCW(loc1));
	RTLE;
	return Result;
}

/* {WEL_FONT}.string_width */
EIF_INTEGER_32 F1885_21703 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	tr1 = F1885_21706(Current, arg1);
	Result = eif_integer_32_item(RTCW(tr1),1);
	RTLE;
	return Result;
}

/* {WEL_FONT}.string_height */
EIF_INTEGER_32 F1885_21704 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	tr1 = F1885_21706(Current, arg1);
	Result = eif_integer_32_item(RTCW(tr1),2);
	RTLE;
	return Result;
}

/* {WEL_FONT}.string_size_extended */
EIF_REFERENCE F1885_21705 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_POINTER loc9 = (EIF_POINTER) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc11 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc13 = (EIF_REFERENCE) 0;
	EIF_POINTER loc14 = (EIF_POINTER) 0;
	EIF_NATURAL_32 loc15 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 loc16 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc17 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc18 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc19 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc20 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc21 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc22 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc23 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc24 = (EIF_BOOLEAN) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_32 tu4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(8);
	RTLR(0,arg1);
	RTLR(1,loc3);
	RTLR(2,Current);
	RTLR(3,loc21);
	RTLR(4,loc10);
	RTLR(5,loc13);
	RTLR(6,loc12);
	RTLR(7,Result);
	RTLIU(8);
	
	RTGC;
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4681[Dtype(RTCW(arg1))-1560])(arg1);
	if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	} else {
		loc3 = RTOUCR(322,F1885_21707, (Current));
		F1311_15448(RTCW(loc3));
		F1306_15264(RTCW(loc3), Current);
		loc5 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4681[Dtype(RTCW(arg1))-1560])(arg1);
		loc21 = RTOUCR(323,F1885_21708, (Current));
		F1404_17127(RTCW(loc21), loc3);
		ti4_1 = F1404_17146(RTCW(loc21));
		ti4_2 = (EIF_INTEGER_32) TMPF_TRUETYPE;
		if (F1258_14781(Current, ti4_1, ti4_2)) {
			loc22 = F1404_17128(RTCW(loc21));
			loc24 = (EIF_BOOLEAN) (EIF_BOOLEAN) (loc5 < ((EIF_INTEGER_32) 48L));
			loc10 = RTOUCR(324,F1885_21709, (Current));
			loc11 = RTOUCB(EIF_INTEGER_32,325,F1382_16648, (RTCW(loc10)));
			if ((EIF_BOOLEAN) !loc24) {
				loc13 = RTLNS(eif_new_type(1283, 0x01).id, 1283, _OBJSIZ_0_1_0_1_0_1_1_0_);
				F1284_4468(RTCW(loc13), (EIF_INTEGER_32) (((EIF_INTEGER_32) 256L) * loc11));
				tp1 = *(EIF_POINTER *)(RTCW(loc3)+ _PTROFF_6_2_0_3_0_0_);
				tp2 = *(EIF_POINTER *)(RTCW(loc13)+ _PTROFF_0_1_0_1_0_0_);
				GetCharABCWidths(((HDC) tp1), ((UINT) (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L)), ((UINT) (EIF_NATURAL_32) ((EIF_INTEGER_32) 255L)), ((LPABC) tp2));
				loc14 = *(EIF_POINTER *)(RTCW(loc13)+ _PTROFF_0_1_0_1_0_0_);
			}
			loc9 = *(EIF_POINTER *)(RTCW(loc3)+ _PTROFF_6_2_0_3_0_0_);
			loc6 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1000L);
			loc7 = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1000L);
			loc4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
			for (;;) {
				if ((EIF_BOOLEAN) (loc4 > loc5)) break;
				loc15 = (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4644[Dtype(RTCW(arg1))-1560])(arg1, loc4);
				ti4_1 = (EIF_INTEGER_32) ((EIF_CHARACTER_8) '\012');
				tu4_1 = (EIF_NATURAL_32) ti4_1;
				if ((EIF_BOOLEAN)(loc15 == tu4_1)) {
					ti4_1 = eif_max_int32 (loc1,loc19);
					loc1 = (EIF_INTEGER_32) ti4_1;
					ti4_1 = eif_max_int32 (loc7,(EIF_INTEGER_32) (loc19 - loc8));
					loc7 = (EIF_INTEGER_32) ti4_1;
					loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
					loc19 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
					loc2 += loc22;
					loc23 = (EIF_INTEGER_32) loc4;
				} else {
					if ((EIF_BOOLEAN) (loc24 || (EIF_BOOLEAN) (loc15 > (EIF_NATURAL_32) ((EIF_INTEGER_32) 255L)))) {
						tp1 = *(EIF_POINTER *)(RTCW(loc3)+ _PTROFF_6_2_0_3_0_0_);
						tp2 = *(EIF_POINTER *)(RTCW(loc10)+ _PTROFF_0_1_0_0_0_0_);
						GetCharABCWidths(((HDC) tp1), ((UINT) loc15), ((UINT) loc15), ((LPABC) tp2));
					} else {
						loc10 = RTLNS(eif_new_type(1381, 0x01).id, 1381, _OBJSIZ_0_1_0_0_0_1_0_0_);
						ti4_1 = (EIF_INTEGER_32) loc15;
						tp1 = RTPOF(loc14,(EIF_INTEGER_32) (ti4_1 * loc11));
						F1296_15096(RTCW(loc10), tp1);
					}
					loc16 = F1382_16649(RTCW(loc10));
					loc17 = F1382_16650(RTCW(loc10));
					loc18 = F1382_16651(RTCW(loc10));
					loc20 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc16 + loc17) + loc18);
					ti4_1 = eif_min_int32 ((EIF_INTEGER_32) (loc8 + loc20),((EIF_INTEGER_32) 1000L));
					loc8 = (EIF_INTEGER_32) ti4_1;
					ti4_1 = eif_min_int32 (loc8,loc18);
					loc8 = (EIF_INTEGER_32) ti4_1;
					loc19 += loc20;
					if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc23 == (EIF_INTEGER_32) (loc4 - ((EIF_INTEGER_32) 1L))) || (EIF_BOOLEAN)(loc4 == ((EIF_INTEGER_32) 1L)))) {
						ti4_1 = eif_min_int32 (loc6,loc16);
						loc6 = (EIF_INTEGER_32) ti4_1;
					}
				}
				loc4++;
			}
			loc2 += loc22;
			ti4_1 = eif_max_int32 (loc1,loc19);
			loc1 = (EIF_INTEGER_32) ti4_1;
			ti4_1 = eif_max_int32 (loc7,(EIF_INTEGER_32) (loc19 - loc8));
			loc7 = (EIF_INTEGER_32) ti4_1;
			loc7 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 - loc7);
		} else {
			loc12 = RTOUCR(326,F468_13503, (Current));
			F1408_17334(RTCW(loc12), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 32767L), ((EIF_INTEGER_32) 32767L));
			ti4_1 = eif_bit_or(((EIF_INTEGER_32) 1024L),((EIF_INTEGER_32) 64L));
			ti4_1 = eif_bit_or(ti4_1,((EIF_INTEGER_32) 2048L));
			F1306_15278(RTCW(loc3), arg1, loc12, ti4_1);
			loc1 = F1408_17332(RTCW(loc12));
			loc2 = F1408_17333(RTCW(loc12));
		}
		F1306_15270(RTCW(loc3));
		F1311_15450(RTCW(loc3));
	}
	Result = RTOUCR(327,F1885_21710, (Current));
	
	eif_put_integer_32_item(RTCW(Result),1,loc1);
	
	eif_put_integer_32_item(RTCW(Result),2,loc2);
	
	eif_put_integer_32_item(RTCW(Result),3,loc6);
	
	eif_put_integer_32_item(RTCW(Result),4,loc7);
	RTLE;
	return Result;
}

/* {WEL_FONT}.string_size */
EIF_REFERENCE F1885_21706 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,loc4);
	RTLR(2,Current);
	RTLR(3,loc3);
	RTLR(4,Result);
	RTLIU(5);
	
	RTGC;
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4681[Dtype(RTCW(arg1))-1560])(arg1);
	if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	} else {
		loc4 = RTOUCR(326,F468_13503, (Current));
		F1408_17334(RTCW(loc4), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 32767L), ((EIF_INTEGER_32) 32767L));
		loc3 = RTOUCR(322,F1885_21707, (Current));
		F1311_15448(RTCW(loc3));
		F1306_15264(RTCW(loc3), Current);
		ti4_1 = eif_bit_or(((EIF_INTEGER_32) 1024L),((EIF_INTEGER_32) 64L));
		ti4_1 = eif_bit_or(ti4_1,((EIF_INTEGER_32) 2048L));
		F1306_15278(RTCW(loc3), arg1, loc4, ti4_1);
		loc1 = F1408_17332(RTCW(loc4));
		loc2 = F1408_17333(RTCW(loc4));
		F1306_15270(RTCW(loc3));
		F1311_15450(RTCW(loc3));
	}
	Result = RTOUCR(328,F1885_21711, (Current));
	
	eif_put_integer_32_item(RTCW(Result),1,loc1);
	
	eif_put_integer_32_item(RTCW(Result),2,loc2);
	RTLE;
	return Result;
}

/* {WEL_FONT}.reusable_screen_dc */
static EIF_REFERENCE F1885_21707_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(322)

	RTLI(1);
	RTLR(0,tr1);
	RTLIU(1);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(eif_new_type(1310, 0x01).id, 1310, _OBJSIZ_6_2_0_3_0_7_0_0_);
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1885_21707 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(322,F1885_21707_body,(Current));
}

/* {WEL_FONT}.reusable_text_metric */
static EIF_REFERENCE F1885_21708_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(323)

	RTLI(1);
	RTLR(0,tr1);
	RTLIU(1);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(eif_new_type(1403, 0x01).id, 1403, _OBJSIZ_0_1_0_0_0_1_0_0_);
	F1404_17125(RTCW(tr1));
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1885_21708 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(323,F1885_21708_body,(Current));
}

/* {WEL_FONT}.reusable_abc_struct */
static EIF_REFERENCE F1885_21709_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(324)

	RTLI(1);
	RTLR(0,tr1);
	RTLIU(1);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(eif_new_type(1381, 0x01).id, 1381, _OBJSIZ_0_1_0_0_0_1_0_0_);
	F1337_15830(RTCW(tr1));
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1885_21709 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(324,F1885_21709_body,(Current));
}

/* {WEL_FONT}.reusable_string_size_extended_tuple */
static EIF_REFERENCE F1885_21710_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(327)

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEV;
	RTGC;
	RTOTP;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,4,1475,1508,1508,1508,1508,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNTS(typres0.id, 5, 1);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_i4 = ((EIF_INTEGER_32) 0L);
	((EIF_TYPED_VALUE *)tr1+2)->it_i4 = ((EIF_INTEGER_32) 0L);
	((EIF_TYPED_VALUE *)tr1+3)->it_i4 = ((EIF_INTEGER_32) 0L);
	((EIF_TYPED_VALUE *)tr1+4)->it_i4 = ((EIF_INTEGER_32) 0L);
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1885_21710 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(327,F1885_21710_body,(Current));
}

/* {WEL_FONT}.reusable_string_size_tuple */
static EIF_REFERENCE F1885_21711_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(328)

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEV;
	RTGC;
	RTOTP;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,1475,1508,1508,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNTS(typres0.id, 3, 1);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_i4 = ((EIF_INTEGER_32) 0L);
	((EIF_TYPED_VALUE *)tr1+2)->it_i4 = ((EIF_INTEGER_32) 0L);
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1885_21711 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(328,F1885_21711_body,(Current));
}

/* {WEL_FONT}.cwin_create_font_indirect */
EIF_POINTER F1885_21715 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = (EIF_POINTER) CreateFontIndirect(((LOGFONT *) arg1));
	return Result;
}

void EIF_Minit1868 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
