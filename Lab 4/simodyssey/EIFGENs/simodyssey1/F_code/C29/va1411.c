/*
 * Code for class VALUE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "va1411.h"
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

/* {VALUE}.make */
void F1257_14732 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_) = (EIF_INTEGER_32) arg2;
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
	RTLE;
}

/* {VALUE}.clone_me */
EIF_REFERENCE F1257_14733 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,Result);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTGC;
	Result= RTLN(eif_new_type(1256, 0x00).id);
	nstcall = -1, F1257_14734(Result);
	loc1 = RTLNS(eif_new_type(1560, 0x01).id, 1560, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F1559_6607(RTCW(loc1), *(EIF_REFERENCE *)(Current));
	tr1 = RTLNS(eif_new_type(1256, 0x00).id, 1256, _OBJSIZ_1_0_0_1_0_0_0_0_);
	F1257_14732(RTCW(tr1), loc1, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_));
	tr1 = (tr1);
	RTXA(tr1, Result);
	RTLE;
	return Result;
}

/* {VALUE}.default_create */
void F1257_14734 (EIF_REFERENCE Current)
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
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 35L);
	loc1 = RTMS_EX_H("0",1,48);
	tr1 = F1_14(loc1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {VALUE}.make_from_string */
void F1257_14735 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 35L);
	tr1 = F1_14(arg1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	F1257_14774(Current);
	RTLE;
}

/* {VALUE}.is_equal */
EIF_BOOLEAN F1257_14737 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	struct eif_ex_1410 sloc5;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) sloc5.data;
	struct eif_ex_1410 sloc6;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) sloc6.data;
	struct eif_ex_1410 sarg1;
	EIF_REFERENCE earg1 = (EIF_REFERENCE) sarg1.data;
	
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	memcpy (&sarg1.overhead, HEADER(arg1), _OBJSIZ_1_0_0_1_0_0_0_0_ + OVERHEAD);
	sarg1.overhead.ov_flags = EO_EXP | EO_STACK;
	sarg1.overhead.ov_size = 0;
	
	memset (&sloc5.overhead, 0, OVERHEAD + _OBJSIZ_1_0_0_1_0_0_0_0_);
	sloc5.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc5.overhead, eif_new_type(1256, 0x00).id);
	memset (&sloc6.overhead, 0, OVERHEAD + _OBJSIZ_1_0_0_1_0_0_0_0_);
	sloc6.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc6.overhead, eif_new_type(1256, 0x00).id);
	RTLI(5);
	RTLR(0,earg1);
	RTLR(1,loc5);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,loc6);
	RTLIU(5);
	
	RTGC;
	nstcall = -1, F1257_14734(loc5);
	nstcall = -1, F1257_14734(loc6);
	tr1 = F1257_14733(Current);
	tr1 = RTRCL(tr1);
	RTXA(tr1, loc5);
	tr1 = F1257_14733(RTCW(earg1));
	tr1 = RTRCL(tr1);
	RTXA(tr1, loc6);
	tr1 = RTRCL(loc6);
	F1257_14777(RTCW(loc5), tr1);
	tr1 = RTRCL(loc6);
	F1257_14778(RTCW(loc5), tr1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		tb1 = '\01';
		tr1 = *(EIF_REFERENCE *)(RTCW(loc5));
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_1_1_0_2_);
		if (!(EIF_BOOLEAN) (loc1 > ti4_1)) {
			tr1 = *(EIF_REFERENCE *)(RTCW(loc6));
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_1_1_0_2_);
			tb1 = (EIF_BOOLEAN) (loc2 > ti4_1);
		}
		if (tb1) break;
		tr1 = *(EIF_REFERENCE *)(RTCW(loc5));
		tc1 = (eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2556[Dtype(RTCW(tr1))-849])(tr1, loc1));
		loc3 = F1257_14775(Current, tc1);
		tr1 = *(EIF_REFERENCE *)(RTCW(loc6));
		tc1 = (eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2556[Dtype(RTCW(tr1))-849])(tr1, loc2));
		loc4 = F1257_14775(Current, tc1);
		if ((EIF_BOOLEAN)(loc3 != loc4)) {
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			tr1 = *(EIF_REFERENCE *)(RTCW(loc5));
			loc1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_1_1_0_2_);
			loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L));
		}
		loc1++;
		loc2++;
	}
	RTLE;
	return Result;
}

/* {VALUE}.is_less */
EIF_BOOLEAN F1257_14738 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	struct eif_ex_1410 sloc5;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) sloc5.data;
	struct eif_ex_1410 sloc6;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) sloc6.data;
	struct eif_ex_1410 sarg1;
	EIF_REFERENCE earg1 = (EIF_REFERENCE) sarg1.data;
	
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	memcpy (&sarg1.overhead, HEADER(arg1), _OBJSIZ_1_0_0_1_0_0_0_0_ + OVERHEAD);
	sarg1.overhead.ov_flags = EO_EXP | EO_STACK;
	sarg1.overhead.ov_size = 0;
	
	memset (&sloc5.overhead, 0, OVERHEAD + _OBJSIZ_1_0_0_1_0_0_0_0_);
	sloc5.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc5.overhead, eif_new_type(1256, 0x00).id);
	memset (&sloc6.overhead, 0, OVERHEAD + _OBJSIZ_1_0_0_1_0_0_0_0_);
	sloc6.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc6.overhead, eif_new_type(1256, 0x00).id);
	RTLI(5);
	RTLR(0,earg1);
	RTLR(1,loc5);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,loc6);
	RTLIU(5);
	
	RTGC;
	nstcall = -1, F1257_14734(loc5);
	nstcall = -1, F1257_14734(loc6);
	tr1 = F1257_14733(Current);
	tr1 = RTRCL(tr1);
	RTXA(tr1, loc5);
	tr1 = F1257_14733(RTCW(earg1));
	tr1 = RTRCL(tr1);
	RTXA(tr1, loc6);
	tb1 = '\0';
	tr1 = *(EIF_REFERENCE *)(RTCW(loc5));
	tc1 = (eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2556[Dtype(RTCW(tr1))-849])(tr1, ((EIF_INTEGER_32) 1L)));
	if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '-')) {
		tr1 = *(EIF_REFERENCE *)(RTCW(loc6));
		tc1 = (eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2556[Dtype(RTCW(tr1))-849])(tr1, ((EIF_INTEGER_32) 1L)));
		tb1 = (EIF_BOOLEAN)(tc1 != (EIF_CHARACTER_8) '-');
	}
	if (tb1) {
		RTLE;
		return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	} else {
		tb1 = '\0';
		tr1 = *(EIF_REFERENCE *)(RTCW(loc5));
		tc1 = (eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2556[Dtype(RTCW(tr1))-849])(tr1, ((EIF_INTEGER_32) 1L)));
		if ((EIF_BOOLEAN)(tc1 != (EIF_CHARACTER_8) '-')) {
			tr1 = *(EIF_REFERENCE *)(RTCW(loc6));
			tc1 = (eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2556[Dtype(RTCW(tr1))-849])(tr1, ((EIF_INTEGER_32) 1L)));
			tb1 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '-');
		}
		if (tb1) {
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		} else {
			tb1 = '\0';
			tr1 = *(EIF_REFERENCE *)(RTCW(loc5));
			tc1 = (eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2556[Dtype(RTCW(tr1))-849])(tr1, ((EIF_INTEGER_32) 1L)));
			if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '-')) {
				tr1 = *(EIF_REFERENCE *)(RTCW(loc6));
				tc1 = (eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2556[Dtype(RTCW(tr1))-849])(tr1, ((EIF_INTEGER_32) 1L)));
				tb1 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '-');
			}
			if (tb1) {
				F1257_14763(RTCW(loc5));
				F1257_14763(RTCW(loc6));
				tr1 = RTRCL(loc5);
				Result = F1257_14738(RTCW(loc6), tr1);
			} else {
				tr1 = RTRCL(loc6);
				F1257_14777(RTCW(loc5), tr1);
				tr1 = RTRCL(loc6);
				F1257_14778(RTCW(loc5), tr1);
				Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
				loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				for (;;) {
					tb1 = '\01';
					tr1 = *(EIF_REFERENCE *)(RTCW(loc5));
					ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_1_1_0_2_);
					if (!(EIF_BOOLEAN) (loc1 > ti4_1)) {
						tr1 = *(EIF_REFERENCE *)(RTCW(loc6));
						ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_1_1_0_2_);
						tb1 = (EIF_BOOLEAN) (loc2 > ti4_1);
					}
					if (tb1) break;
					tr1 = *(EIF_REFERENCE *)(RTCW(loc5));
					tc1 = (eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2556[Dtype(RTCW(tr1))-849])(tr1, loc1));
					loc3 = F1257_14775(Current, tc1);
					tr1 = *(EIF_REFERENCE *)(RTCW(loc6));
					tc1 = (eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2556[Dtype(RTCW(tr1))-849])(tr1, loc2));
					loc4 = F1257_14775(Current, tc1);
					if ((EIF_BOOLEAN) (loc3 < loc4)) {
						Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
						tr1 = *(EIF_REFERENCE *)(RTCW(loc5));
						loc1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_1_1_0_2_);
						loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L));
					} else {
						if ((EIF_BOOLEAN) (loc3 > loc4)) {
							Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
							tr1 = *(EIF_REFERENCE *)(RTCW(loc5));
							loc1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_1_1_0_2_);
							loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L));
						}
					}
					loc1++;
					loc2++;
				}
			}
		}
	}
	RTLE;
	return Result;
}

/* {VALUE}.plus */
EIF_REFERENCE F1257_14739 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 loc9 = (EIF_CHARACTER_8) 0;
	struct eif_ex_1410 sloc10;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) sloc10.data;
	struct eif_ex_1410 sloc11;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) sloc11.data;
	struct eif_ex_1410 sarg1;
	EIF_REFERENCE earg1 = (EIF_REFERENCE) sarg1.data;
	
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	memcpy (&sarg1.overhead, HEADER(arg1), _OBJSIZ_1_0_0_1_0_0_0_0_ + OVERHEAD);
	sarg1.overhead.ov_flags = EO_EXP | EO_STACK;
	sarg1.overhead.ov_size = 0;
	
	memset (&sloc10.overhead, 0, OVERHEAD + _OBJSIZ_1_0_0_1_0_0_0_0_);
	sloc10.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc10.overhead, eif_new_type(1256, 0x00).id);
	memset (&sloc11.overhead, 0, OVERHEAD + _OBJSIZ_1_0_0_1_0_0_0_0_);
	sloc11.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc11.overhead, eif_new_type(1256, 0x00).id);
	RTLI(8);
	RTLR(0,earg1);
	RTLR(1,Result);
	RTLR(2,loc10);
	RTLR(3,Current);
	RTLR(4,tr1);
	RTLR(5,loc11);
	RTLR(6,loc2);
	RTLR(7,loc1);
	RTLIU(8);
	
	RTGC;
	nstcall = -1, F1257_14734(loc10);
	nstcall = -1, F1257_14734(loc11);
	Result= RTLN(eif_new_type(1256, 0x00).id);
	nstcall = -1, F1257_14734(Result);
	tr1 = F1257_14733(Current);
	tr1 = RTRCL(tr1);
	RTXA(tr1, loc10);
	tr1 = F1257_14733(RTCW(earg1));
	tr1 = RTRCL(tr1);
	RTXA(tr1, loc11);
	tb1 = '\0';
	tr1 = *(EIF_REFERENCE *)(RTCW(loc10));
	tc1 = (eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2556[Dtype(RTCW(tr1))-849])(tr1, ((EIF_INTEGER_32) 1L)));
	if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '-')) {
		tr1 = *(EIF_REFERENCE *)(RTCW(loc11));
		tc1 = (eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2556[Dtype(RTCW(tr1))-849])(tr1, ((EIF_INTEGER_32) 1L)));
		tb1 = (EIF_BOOLEAN)(tc1 != (EIF_CHARACTER_8) '-');
	}
	if (tb1) {
		tr1 = RTLNS(eif_new_type(1256, 0x00).id, 1256, _OBJSIZ_1_0_0_1_0_0_0_0_);
		F1257_14734(RTCW(tr1));
		tr1 = (tr1);
		RTXA(tr1, Result);
		F1257_14763(RTCW(loc10));
		tr1 = RTRCL(loc10);
		tr1 = F1257_14741(RTCW(loc11), tr1);
		tr1 = F1257_14733(RTCW(tr1));
		tr1 = RTRCL(tr1);
		RTXA(tr1, Result);
	} else {
		tb1 = '\0';
		tr1 = *(EIF_REFERENCE *)(RTCW(loc10));
		tc1 = (eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2556[Dtype(RTCW(tr1))-849])(tr1, ((EIF_INTEGER_32) 1L)));
		if ((EIF_BOOLEAN)(tc1 != (EIF_CHARACTER_8) '-')) {
			tr1 = *(EIF_REFERENCE *)(RTCW(loc11));
			tc1 = (eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2556[Dtype(RTCW(tr1))-849])(tr1, ((EIF_INTEGER_32) 1L)));
			tb1 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '-');
		}
		if (tb1) {
			tr1 = RTLNS(eif_new_type(1256, 0x00).id, 1256, _OBJSIZ_1_0_0_1_0_0_0_0_);
			F1257_14734(RTCW(tr1));
			tr1 = (tr1);
			RTXA(tr1, Result);
			F1257_14763(RTCW(loc11));
			tr1 = RTRCL(loc11);
			tr1 = F1257_14741(RTCW(loc10), tr1);
			tr1 = F1257_14733(RTCW(tr1));
			tr1 = RTRCL(tr1);
			RTXA(tr1, Result);
		} else {
			tb1 = '\0';
			tr1 = *(EIF_REFERENCE *)(RTCW(loc10));
			tc1 = (eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2556[Dtype(RTCW(tr1))-849])(tr1, ((EIF_INTEGER_32) 1L)));
			if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '-')) {
				tr1 = *(EIF_REFERENCE *)(RTCW(loc11));
				tc1 = (eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2556[Dtype(RTCW(tr1))-849])(tr1, ((EIF_INTEGER_32) 1L)));
				tb1 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '-');
			}
			if (tb1) {
				tr1 = RTLNS(eif_new_type(1256, 0x00).id, 1256, _OBJSIZ_1_0_0_1_0_0_0_0_);
				F1257_14734(RTCW(tr1));
				tr1 = (tr1);
				RTXA(tr1, Result);
				F1257_14763(RTCW(loc10));
				F1257_14763(RTCW(loc11));
				tr1 = RTRCL(loc11);
				tr1 = F1257_14739(RTCW(loc10), tr1);
				tr1 = F1257_14733(RTCW(tr1));
				tr1 = RTRCL(tr1);
				RTXA(tr1, Result);
				F1257_14763(RTCW(Result));
			} else {
				tr1 = RTRCL(loc11);
				F1257_14777(RTCW(loc10), tr1);
				tr1 = RTRCL(loc11);
				F1257_14778(RTCW(loc10), tr1);
				loc2 = RTMS_EX_H("",0,0);
				loc1 = F1_14(loc2);
				tr1 = *(EIF_REFERENCE *)(RTCW(loc10));
				loc4 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_1_1_0_2_);
				tr1 = *(EIF_REFERENCE *)(RTCW(loc11));
				loc5 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_1_1_0_2_);
				for (;;) {
					if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc4 < ((EIF_INTEGER_32) 1L)) || (EIF_BOOLEAN) (loc5 < ((EIF_INTEGER_32) 1L)))) break;
					loc9 = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '0';
					tb1 = '\0';
					tr1 = *(EIF_REFERENCE *)(RTCW(loc10));
					tc1 = (eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2556[Dtype(RTCW(tr1))-849])(tr1, loc4));
					if ((EIF_BOOLEAN)(tc1 != (EIF_CHARACTER_8) '.')) {
						tr1 = *(EIF_REFERENCE *)(RTCW(loc11));
						tc1 = (eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2556[Dtype(RTCW(tr1))-849])(tr1, loc5));
						tb1 = (EIF_BOOLEAN)(tc1 != (EIF_CHARACTER_8) '.');
					}
					if (tb1) {
						tr1 = *(EIF_REFERENCE *)(RTCW(loc10));
						tc1 = (eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2556[Dtype(RTCW(tr1))-849])(tr1, loc4));
						loc6 = F1257_14775(Current, tc1);
						tr1 = *(EIF_REFERENCE *)(RTCW(loc11));
						tc1 = (eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2556[Dtype(RTCW(tr1))-849])(tr1, loc5));
						loc7 = F1257_14775(Current, tc1);
						loc8 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc3 + loc6) + loc7);
						if ((EIF_BOOLEAN) (loc8 >= ((EIF_INTEGER_32) 10L))) {
							loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc8 / ((EIF_INTEGER_32) 10L));
							loc8 -= ((EIF_INTEGER_32) 10L);
						} else {
							loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
						}
						loc9 = F1257_14776(Current, loc8);
					} else {
						tb1 = '\0';
						tr1 = *(EIF_REFERENCE *)(RTCW(loc10));
						tc1 = (eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2556[Dtype(RTCW(tr1))-849])(tr1, loc4));
						if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '.')) {
							tr1 = *(EIF_REFERENCE *)(RTCW(loc11));
							tc1 = (eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2556[Dtype(RTCW(tr1))-849])(tr1, loc5));
							tb1 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '.');
						}
						if (tb1) {
							loc9 = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '.';
						}
					}
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8, EIF_INTEGER_32)) R4828[Dtype(RTCW(loc1))-1560])(loc1, loc9, ((EIF_INTEGER_32) 1L));
					loc4--;
					loc5--;
				}
				if ((EIF_BOOLEAN) (loc3 > ((EIF_INTEGER_32) 0L))) {
					tc1 = F1257_14776(Current, loc3);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8, EIF_INTEGER_32)) R4828[Dtype(RTCW(loc1))-1560])(loc1, tc1, ((EIF_INTEGER_32) 1L));
				}
				tr1 = RTLNS(eif_new_type(1256, 0x00).id, 1256, _OBJSIZ_1_0_0_1_0_0_0_0_);
				F1257_14735(RTCW(tr1), loc1);
				tr1 = (tr1);
				RTXA(tr1, Result);
			}
		}
	}
	RTLE;
	return Result;
}

/* {VALUE}.minus */
EIF_REFERENCE F1257_14741 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	struct eif_ex_1410 sloc3;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) sloc3.data;
	struct eif_ex_1410 sloc4;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) sloc4.data;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc9 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc10 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc11 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 loc12 = (EIF_CHARACTER_8) 0;
	struct eif_ex_1410 sarg1;
	EIF_REFERENCE earg1 = (EIF_REFERENCE) sarg1.data;
	
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	memcpy (&sarg1.overhead, HEADER(arg1), _OBJSIZ_1_0_0_1_0_0_0_0_ + OVERHEAD);
	sarg1.overhead.ov_flags = EO_EXP | EO_STACK;
	sarg1.overhead.ov_size = 0;
	
	memset (&sloc3.overhead, 0, OVERHEAD + _OBJSIZ_1_0_0_1_0_0_0_0_);
	sloc3.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc3.overhead, eif_new_type(1256, 0x00).id);
	memset (&sloc4.overhead, 0, OVERHEAD + _OBJSIZ_1_0_0_1_0_0_0_0_);
	sloc4.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc4.overhead, eif_new_type(1256, 0x00).id);
	RTLI(9);
	RTLR(0,earg1);
	RTLR(1,Result);
	RTLR(2,loc3);
	RTLR(3,Current);
	RTLR(4,tr1);
	RTLR(5,loc4);
	RTLR(6,loc2);
	RTLR(7,loc1);
	RTLR(8,tr2);
	RTLIU(9);
	
	RTGC;
	nstcall = -1, F1257_14734(loc3);
	nstcall = -1, F1257_14734(loc4);
	Result= RTLN(eif_new_type(1256, 0x00).id);
	nstcall = -1, F1257_14734(Result);
	tr1 = F1257_14733(Current);
	tr1 = RTRCL(tr1);
	RTXA(tr1, loc3);
	tr1 = F1257_14733(RTCW(earg1));
	tr1 = RTRCL(tr1);
	RTXA(tr1, loc4);
	tb1 = '\0';
	tr1 = *(EIF_REFERENCE *)(RTCW(loc3));
	tc1 = (eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2556[Dtype(RTCW(tr1))-849])(tr1, ((EIF_INTEGER_32) 1L)));
	if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '-')) {
		tr1 = *(EIF_REFERENCE *)(RTCW(loc4));
		tc1 = (eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2556[Dtype(RTCW(tr1))-849])(tr1, ((EIF_INTEGER_32) 1L)));
		tb1 = (EIF_BOOLEAN)(tc1 != (EIF_CHARACTER_8) '-');
	}
	if (tb1) {
		tr1 = RTLNS(eif_new_type(1256, 0x00).id, 1256, _OBJSIZ_1_0_0_1_0_0_0_0_);
		F1257_14734(RTCW(tr1));
		tr1 = (tr1);
		RTXA(tr1, Result);
		F1257_14763(RTCW(loc3));
		tr1 = RTRCL(loc4);
		tr1 = F1257_14739(RTCW(loc3), tr1);
		tr1 = F1257_14733(RTCW(tr1));
		tr1 = RTRCL(tr1);
		RTXA(tr1, Result);
		F1257_14763(RTCW(Result));
	} else {
		tb1 = '\0';
		tr1 = *(EIF_REFERENCE *)(RTCW(loc3));
		tc1 = (eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2556[Dtype(RTCW(tr1))-849])(tr1, ((EIF_INTEGER_32) 1L)));
		if ((EIF_BOOLEAN)(tc1 != (EIF_CHARACTER_8) '-')) {
			tr1 = *(EIF_REFERENCE *)(RTCW(loc4));
			tc1 = (eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2556[Dtype(RTCW(tr1))-849])(tr1, ((EIF_INTEGER_32) 1L)));
			tb1 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '-');
		}
		if (tb1) {
			tr1 = RTLNS(eif_new_type(1256, 0x00).id, 1256, _OBJSIZ_1_0_0_1_0_0_0_0_);
			F1257_14734(RTCW(tr1));
			tr1 = (tr1);
			RTXA(tr1, Result);
			F1257_14763(RTCW(loc4));
			tr1 = RTRCL(loc4);
			tr1 = F1257_14739(RTCW(loc3), tr1);
			tr1 = F1257_14733(RTCW(tr1));
			tr1 = RTRCL(tr1);
			RTXA(tr1, Result);
		} else {
			tb1 = '\0';
			tr1 = *(EIF_REFERENCE *)(RTCW(loc3));
			tc1 = (eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2556[Dtype(RTCW(tr1))-849])(tr1, ((EIF_INTEGER_32) 1L)));
			if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '-')) {
				tr1 = *(EIF_REFERENCE *)(RTCW(loc4));
				tc1 = (eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2556[Dtype(RTCW(tr1))-849])(tr1, ((EIF_INTEGER_32) 1L)));
				tb1 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '-');
			}
			if (tb1) {
				tr1 = RTLNS(eif_new_type(1256, 0x00).id, 1256, _OBJSIZ_1_0_0_1_0_0_0_0_);
				F1257_14734(RTCW(tr1));
				tr1 = (tr1);
				RTXA(tr1, Result);
				F1257_14763(RTCW(loc4));
				tr1 = RTRCL(loc4);
				tr1 = F1257_14739(RTCW(loc3), tr1);
				tr1 = F1257_14733(RTCW(tr1));
				tr1 = RTRCL(tr1);
				RTXA(tr1, Result);
			} else {
				tr1 = RTRCL(loc4);
				tb1 = F1257_14738(RTCW(loc3), tr1);
				if (tb1) {
					tr1 = RTRCL(loc3);
					tr1 = F1257_14741(RTCW(loc4), tr1);
					tr1 = F1257_14733(RTCW(tr1));
					tr1 = RTRCL(tr1);
					RTXA(tr1, Result);
					F1257_14763(RTCW(Result));
				} else {
					tr1 = RTRCL(loc4);
					F1257_14777(RTCW(loc3), tr1);
					tr1 = RTRCL(loc4);
					F1257_14778(RTCW(loc3), tr1);
					loc2 = RTMS_EX_H("",0,0);
					loc1 = F1_14(loc2);
					tr1 = *(EIF_REFERENCE *)(RTCW(loc3));
					loc5 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_1_1_0_2_);
					tr1 = *(EIF_REFERENCE *)(RTCW(loc4));
					loc6 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_1_1_0_2_);
					for (;;) {
						if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc5 < ((EIF_INTEGER_32) 1L)) || (EIF_BOOLEAN) (loc6 < ((EIF_INTEGER_32) 1L)))) break;
						loc12 = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '0';
						tb1 = '\0';
						tr1 = *(EIF_REFERENCE *)(RTCW(loc3));
						tc1 = (eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2556[Dtype(RTCW(tr1))-849])(tr1, loc5));
						if ((EIF_BOOLEAN)(tc1 != (EIF_CHARACTER_8) '.')) {
							tr1 = *(EIF_REFERENCE *)(RTCW(loc4));
							tc1 = (eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2556[Dtype(RTCW(tr1))-849])(tr1, loc6));
							tb1 = (EIF_BOOLEAN)(tc1 != (EIF_CHARACTER_8) '.');
						}
						if (tb1) {
							tr1 = *(EIF_REFERENCE *)(RTCW(loc3));
							tc1 = (eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2556[Dtype(RTCW(tr1))-849])(tr1, loc5));
							loc7 = F1257_14775(Current, tc1);
							tr1 = *(EIF_REFERENCE *)(RTCW(loc4));
							tc1 = (eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2556[Dtype(RTCW(tr1))-849])(tr1, loc6));
							loc8 = F1257_14775(Current, tc1);
							if ((EIF_BOOLEAN) (loc7 < loc8)) {
								loc10 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc5 - ((EIF_INTEGER_32) 1L));
								for (;;) {
									if ((EIF_BOOLEAN) (loc10 < ((EIF_INTEGER_32) 1L))) break;
									tr1 = *(EIF_REFERENCE *)(RTCW(loc3));
									tc1 = (eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2556[Dtype(RTCW(tr1))-849])(tr1, loc10));
									if ((EIF_BOOLEAN)(tc1 != (EIF_CHARACTER_8) '.')) {
										tr1 = *(EIF_REFERENCE *)(RTCW(loc3));
										tc1 = (eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2556[Dtype(RTCW(tr1))-849])(tr1, loc10));
										loc9 = F1257_14775(Current, tc1);
										if ((EIF_BOOLEAN) (loc9 > ((EIF_INTEGER_32) 0L))) {
											tr1 = *(EIF_REFERENCE *)(RTCW(loc3));
											tc1 = F1257_14776(Current, (EIF_INTEGER_32) (loc9 - ((EIF_INTEGER_32) 1L)));
											(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R2255[Dtype(RTCW(tr1))-918])(tr1, (EIF_REFERENCE) &tc1, (EIF_REFERENCE) &loc10);
											loc11 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc10 + ((EIF_INTEGER_32) 1L));
											for (;;) {
												if ((EIF_BOOLEAN) (loc11 > (EIF_INTEGER_32) (loc5 - ((EIF_INTEGER_32) 1L)))) break;
												tr1 = *(EIF_REFERENCE *)(RTCW(loc3));
												tc1 = (eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2556[Dtype(RTCW(tr1))-849])(tr1, loc11));
												if ((EIF_BOOLEAN)(tc1 != (EIF_CHARACTER_8) '.')) {
													tr1 = *(EIF_REFERENCE *)(RTCW(loc3));
													tr2 = *(EIF_REFERENCE *)(RTCW(loc3));
													tc1 = (eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2556[Dtype(RTCW(tr2))-849])(tr2, loc11));
													ti4_1 = F1257_14775(Current, tc1);
													tc1 = F1257_14776(Current, (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 9L)));
													(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R2255[Dtype(RTCW(tr1))-918])(tr1, (EIF_REFERENCE) &tc1, (EIF_REFERENCE) &loc11);
												}
												loc11++;
											}
											loc7 += ((EIF_INTEGER_32) 10L);
											loc10 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
										}
									}
									loc10--;
								}
							}
							loc12 = F1257_14776(Current, (EIF_INTEGER_32) (loc7 - loc8));
						} else {
							tb1 = '\0';
							tr1 = *(EIF_REFERENCE *)(RTCW(loc3));
							tc1 = (eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2556[Dtype(RTCW(tr1))-849])(tr1, loc5));
							if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '.')) {
								tr1 = *(EIF_REFERENCE *)(RTCW(loc4));
								tc1 = (eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2556[Dtype(RTCW(tr1))-849])(tr1, loc6));
								tb1 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '.');
							}
							if (tb1) {
								loc12 = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '.';
							}
						}
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8, EIF_INTEGER_32)) R4828[Dtype(RTCW(loc1))-1560])(loc1, loc12, ((EIF_INTEGER_32) 1L));
						loc5--;
						loc6--;
					}
					tr1 = RTLNS(eif_new_type(1256, 0x00).id, 1256, _OBJSIZ_1_0_0_1_0_0_0_0_);
					F1257_14735(RTCW(tr1), loc1);
					tr1 = (tr1);
					RTXA(tr1, Result);
				}
			}
		}
	}
	RTLE;
	return Result;
}

/* {VALUE}.precise_out */
EIF_REFERENCE F1257_14758 (EIF_REFERENCE Current)
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
	tr1 = *(EIF_REFERENCE *)(Current);
	Result = F1_14(tr1);
	RTLE;
	return Result;
}

/* {VALUE}.out */
EIF_REFERENCE F1257_14759 (EIF_REFERENCE Current)
{
	GTCX
	struct eif_ex_1410 sloc1;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) sloc1.data;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	memset (&sloc1.overhead, 0, OVERHEAD + _OBJSIZ_1_0_0_1_0_0_0_0_);
	sloc1.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc1.overhead, eif_new_type(1256, 0x00).id);
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc6);
	RTLR(4,Result);
	RTLIU(5);
	
	RTGC;
	nstcall = -1, F1257_14734(loc1);
	tr1 = F1257_14733(Current);
	tr1 = RTRCL(tr1);
	RTXA(tr1, loc1);
	loc5 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	F1257_14762(RTCW(loc1), loc5);
	tr1 = *(EIF_REFERENCE *)(RTCW(loc1));
	loc4 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_CHARACTER_8, EIF_INTEGER_32)) R4747[Dtype(RTCW(tr1))-1560])(tr1, (EIF_CHARACTER_8) '.', ((EIF_INTEGER_32) 1L));
	if ((EIF_BOOLEAN)(loc4 == ((EIF_INTEGER_32) 0L))) {
		tr1 = *(EIF_REFERENCE *)(RTCW(loc1));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R4825[Dtype(RTCW(tr1))-1560])(tr1, (EIF_CHARACTER_8) '.');
		loc6 = RTLNS(eif_new_type(1560, 0x01).id, 1560, _OBJSIZ_1_1_0_3_0_0_0_0_);
		F1559_6606(RTCW(loc6), (EIF_CHARACTER_8) '0', loc5);
		tr1 = *(EIF_REFERENCE *)(RTCW(loc1));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4823[Dtype(RTCW(tr1))-1560])(tr1, loc6);
	} else {
		tr1 = *(EIF_REFERENCE *)(RTCW(loc1));
		loc2 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_1_1_0_2_);
		loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 - loc4);
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc5 - loc2);
		if ((EIF_BOOLEAN) (loc3 > ((EIF_INTEGER_32) 0L))) {
			loc6 = RTLNS(eif_new_type(1560, 0x01).id, 1560, _OBJSIZ_1_1_0_3_0_0_0_0_);
			F1559_6606(RTCW(loc6), (EIF_CHARACTER_8) '0', loc3);
			tr1 = *(EIF_REFERENCE *)(RTCW(loc1));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4823[Dtype(RTCW(tr1))-1560])(tr1, loc6);
		}
	}
	Result = *(EIF_REFERENCE *)(RTCW(loc1));
	Result = F1_14(Result);
	RTLE;
	return Result;
}

/* {VALUE}.round */
void F1257_14762 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc2 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	struct eif_ex_1410 sloc5;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) sloc5.data;
	struct eif_ex_1410 sloc6;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) sloc6.data;
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER_8 tc1;
	RTLD;
	
	memset (&sloc5.overhead, 0, OVERHEAD + _OBJSIZ_1_0_0_1_0_0_0_0_);
	sloc5.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc5.overhead, eif_new_type(1256, 0x00).id);
	memset (&sloc6.overhead, 0, OVERHEAD + _OBJSIZ_1_0_0_1_0_0_0_0_);
	sloc6.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc6.overhead, eif_new_type(1256, 0x00).id);
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc3);
	RTLR(3,loc5);
	RTLR(4,loc6);
	RTLR(5,loc4);
	RTLIU(6);
	
	RTGC;
	nstcall = -1, F1257_14734(loc5);
	nstcall = -1, F1257_14734(loc6);
	tr1 = *(EIF_REFERENCE *)(Current);
	loc1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_CHARACTER_8, EIF_INTEGER_32)) R4747[Dtype(RTCW(tr1))-1560])(tr1, (EIF_CHARACTER_8) '.', ((EIF_INTEGER_32) 1L));
	if ((EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 0L))) {
		loc2 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		tr1 = *(EIF_REFERENCE *)(Current);
		tc1 = (eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2556[Dtype(RTCW(tr1))-849])(tr1, ((EIF_INTEGER_32) 1L)));
		if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '-')) {
			F1257_14763(Current);
			loc2 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
		loc3 = RTLNS(eif_new_type(1560, 0x01).id, 1560, _OBJSIZ_1_1_0_3_0_0_0_0_);
		F1559_6606(RTCW(loc3), (EIF_CHARACTER_8) '0', arg1);
		tr1 = RTMS_EX_H("5",1,53);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(loc3))-1560])(loc3, tr1);
		tr1 = RTMS_EX_H("0.",2,12334);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R4827[Dtype(RTCW(loc3))-1560])(loc3, tr1, ((EIF_INTEGER_32) 1L));
		tr1 = RTLNS(eif_new_type(1256, 0x00).id, 1256, _OBJSIZ_1_0_0_1_0_0_0_0_);
		F1257_14735(RTCW(tr1), loc3);
		tr1 = (tr1);
		RTXA(tr1, loc5);
		tr1 = RTRCL(loc5);
		tr1 = F1257_14739(Current, tr1);
		tr1 = RTRCL(tr1);
		RTXA(tr1, loc6);
		tr1 = *(EIF_REFERENCE *)(RTCW(loc6));
		loc1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_CHARACTER_8, EIF_INTEGER_32)) R4747[Dtype(RTCW(tr1))-1560])(tr1, (EIF_CHARACTER_8) '.', ((EIF_INTEGER_32) 1L));
		if ((EIF_BOOLEAN)(loc1 != ((EIF_INTEGER_32) 0L))) {
			loc4 = *(EIF_REFERENCE *)(RTCW(loc6));
			loc4 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4722[Dtype(RTCW(loc4))-1560])(loc4, ((EIF_INTEGER_32) 1L), (EIF_INTEGER_32) (loc1 + arg1));
		} else {
			loc4 = F1257_14758(RTCW(loc6));
		}
		tr1 = F1_14(loc4);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
		if (loc2) {
			F1257_14763(Current);
		}
	}
	F1257_14774(Current);
	RTLE;
}

/* {VALUE}.negate */
void F1257_14763 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_8 tc1;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	tc1 = (eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2556[Dtype(RTCW(tr1))-849])(tr1, ((EIF_INTEGER_32) 1L)));
	if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '-')) {
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = *(EIF_REFERENCE *)(Current);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr2)+ _LNGOFF_1_1_0_2_);
		loc1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4722[Dtype(RTCW(tr1))-1560])(tr1, ((EIF_INTEGER_32) 2L), ti4_1);
		tr1 = F1_14(loc1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	} else {
		tr1 = *(EIF_REFERENCE *)(Current);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8, EIF_INTEGER_32)) R4828[Dtype(RTCW(tr1))-1560])(tr1, (EIF_CHARACTER_8) '-', ((EIF_INTEGER_32) 1L));
	}
	RTLE;
}

/* {VALUE}.normalize */
void F1257_14774 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc6 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc7 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc8 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc13 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_CHARACTER_8 tc1;
	RTLD;
	
	RTLI(8);
	RTLR(0,loc11);
	RTLR(1,loc13);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,loc9);
	RTLR(5,loc10);
	RTLR(6,loc12);
	RTLR(7,tr2);
	RTLIU(8);
	
	RTGC;
	loc11 = RTMS_EX_H("",0,0);
	loc13 = RTMS_EX_H("0",1,48);
	loc6 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	loc7 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		tr1 = *(EIF_REFERENCE *)(Current);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_1_1_0_2_);
		if ((EIF_BOOLEAN) (loc1 > ti4_1)) break;
		tr1 = *(EIF_REFERENCE *)(Current);
		tc1 = (eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2556[Dtype(RTCW(tr1))-849])(tr1, loc1));
		if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '-')) {
			loc6 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		} else {
			tr1 = *(EIF_REFERENCE *)(Current);
			tc1 = (eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2556[Dtype(RTCW(tr1))-849])(tr1, loc1));
			if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '.')) {
				if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 1L)) || loc6)) {
					loc7 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				}
			}
		}
		loc1++;
	}
	if (loc7) {
		loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		if (loc6) {
			loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
		}
		tr1 = *(EIF_REFERENCE *)(Current);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8, EIF_INTEGER_32)) R4828[Dtype(RTCW(tr1))-1560])(tr1, (EIF_CHARACTER_8) '0', loc2);
	}
	if (loc6) {
		F1257_14763(Current);
	}
	tr1 = *(EIF_REFERENCE *)(Current);
	loc3 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_CHARACTER_8, EIF_INTEGER_32)) R4747[Dtype(RTCW(tr1))-1560])(tr1, (EIF_CHARACTER_8) '.', ((EIF_INTEGER_32) 1L));
	if ((EIF_BOOLEAN)(loc3 == ((EIF_INTEGER_32) 0L))) {
		loc8 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		tr1 = *(EIF_REFERENCE *)(Current);
		loc9 = F1_14(tr1);
		loc10 = F1_14(loc11);
	} else {
		loc8 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		tr1 = *(EIF_REFERENCE *)(Current);
		loc12 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4722[Dtype(RTCW(tr1))-1560])(tr1, ((EIF_INTEGER_32) 1L), (EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L)));
		loc9 = F1_14(loc12);
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = *(EIF_REFERENCE *)(Current);
		ti4_2 = *(EIF_INTEGER_32 *)(RTCW(tr2)+ _LNGOFF_1_1_0_2_);
		loc12 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4722[Dtype(RTCW(tr1))-1560])(tr1, (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L)), ti4_2);
		loc10 = F1_14(loc12);
	}
	tb1 = F743_2537(RTCW(loc9));
	if ((EIF_BOOLEAN) !tb1) {
		loc4 = *(EIF_INTEGER_32 *)(RTCW(loc9)+ _LNGOFF_1_1_0_2_);
		loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc4 + ((EIF_INTEGER_32) 1L));
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			ti4_2 = *(EIF_INTEGER_32 *)(RTCW(loc9)+ _LNGOFF_1_1_0_2_);
			if ((EIF_BOOLEAN) (loc1 > ti4_2)) break;
			tc1 = (eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2556[Dtype(RTCW(loc9))-849])(loc9, loc1));
			if ((EIF_BOOLEAN)(tc1 != (EIF_CHARACTER_8) '0')) {
				loc4 = (EIF_INTEGER_32) loc1;
				loc1 = *(EIF_INTEGER_32 *)(RTCW(loc9)+ _LNGOFF_1_1_0_2_);
				loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L));
			}
			loc1++;
		}
		ti4_3 = *(EIF_INTEGER_32 *)(RTCW(loc9)+ _LNGOFF_1_1_0_2_);
		if ((EIF_BOOLEAN)(loc4 == (EIF_INTEGER_32) (ti4_3 + ((EIF_INTEGER_32) 1L)))) {
			loc9 = F1_14(loc13);
		} else {
			ti4_3 = *(EIF_INTEGER_32 *)(RTCW(loc9)+ _LNGOFF_1_1_0_2_);
			loc12 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4722[Dtype(RTCW(loc9))-1560])(loc9, loc4, ti4_3);
			loc9 = F1_14(loc12);
		}
	}
	tb1 = F743_2537(RTCW(loc10));
	if ((EIF_BOOLEAN) !tb1) {
		loc5 = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
		loc1 = *(EIF_INTEGER_32 *)(RTCW(loc10)+ _LNGOFF_1_1_0_2_);
		for (;;) {
			if ((EIF_BOOLEAN) (loc1 < ((EIF_INTEGER_32) 1L))) break;
			tc1 = (eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2556[Dtype(RTCW(loc10))-849])(loc10, loc1));
			if ((EIF_BOOLEAN)(tc1 != (EIF_CHARACTER_8) '0')) {
				loc5 = (EIF_INTEGER_32) loc1;
				loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
			}
			loc1--;
		}
		if ((EIF_BOOLEAN)(loc5 == ((EIF_INTEGER_32) -1L))) {
			loc10 = F1_14(loc11);
		} else {
			loc12 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4722[Dtype(RTCW(loc10))-1560])(loc10, ((EIF_INTEGER_32) 1L), loc5);
			loc10 = F1_14(loc12);
		}
	}
	tr1 = F1_14(loc9);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	tb1 = '\0';
	if (loc8) {
		tb2 = F743_2537(RTCW(loc10));
		tb1 = (EIF_BOOLEAN) !tb2;
	}
	if (tb1) {
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = RTMS_EX_H(".",1,46);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(tr1))-1560])(tr1, tr2);
		tr1 = *(EIF_REFERENCE *)(Current);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(tr1))-1560])(tr1, loc10);
	}
	tb1 = '\0';
	if (loc6) {
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = RTMS_EX_H("0",1,48);
		tb2 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R11[Dtype(RTCW(tr1))-0])(tr1, tr2);
		tb1 = (EIF_BOOLEAN) !tb2;
	}
	if (tb1) {
		tr1 = *(EIF_REFERENCE *)(Current);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8, EIF_INTEGER_32)) R4828[Dtype(RTCW(tr1))-1560])(tr1, (EIF_CHARACTER_8) '-', ((EIF_INTEGER_32) 1L));
	}
	RTLE;
}

/* {VALUE}.todigit */
EIF_INTEGER_32 F1257_14775 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1)
{
	GTCX
	EIF_CHARACTER_8 loc1 = (EIF_CHARACTER_8) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	RTGC;
	loc1 = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '0';
	Result = (EIF_INTEGER_32) (arg1);
	ti4_1 = (EIF_INTEGER_32) (loc1);
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result - ti4_1);
	return Result;
}

/* {VALUE}.tochar */
EIF_CHARACTER_8 F1257_14776 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_CHARACTER_8 loc1 = (EIF_CHARACTER_8) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	
	
	RTGC;
	loc1 = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '0';
	ti4_1 = (EIF_INTEGER_32) (loc1);
	Result = (EIF_CHARACTER_8) (EIF_INTEGER_32) (ti4_1 + arg1);
	return Result;
}

/* {VALUE}.aligndecimal */
void F1257_14777 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	struct eif_ex_1410 sarg1;
	EIF_REFERENCE earg1 = (EIF_REFERENCE) sarg1.data;
	
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	memcpy (&sarg1.overhead, HEADER(arg1), _OBJSIZ_1_0_0_1_0_0_0_0_ + OVERHEAD);
	sarg1.overhead.ov_flags = EO_EXP | EO_STACK;
	sarg1.overhead.ov_size = 0;
	
	RTLI(4);
	RTLR(0,earg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc7);
	RTLIU(4);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	loc1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_CHARACTER_8, EIF_INTEGER_32)) R4747[Dtype(RTCW(tr1))-1560])(tr1, (EIF_CHARACTER_8) '.', ((EIF_INTEGER_32) 1L));
	tr1 = *(EIF_REFERENCE *)(RTCW(earg1));
	loc2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_CHARACTER_8, EIF_INTEGER_32)) R4747[Dtype(RTCW(tr1))-1560])(tr1, (EIF_CHARACTER_8) '.', ((EIF_INTEGER_32) 1L));
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc1 != ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN)(loc2 != ((EIF_INTEGER_32) 0L)))) {
		tr1 = *(EIF_REFERENCE *)(Current);
		loc3 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_1_1_0_2_);
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 - loc1);
		tr1 = *(EIF_REFERENCE *)(RTCW(earg1));
		loc4 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_1_1_0_2_);
		loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc4 - loc2);
		if ((EIF_BOOLEAN)(loc3 != loc4)) {
			loc7 = (EIF_REFERENCE) NULL;
			if ((EIF_BOOLEAN) (loc3 < loc4)) {
				loc7 = *(EIF_REFERENCE *)(Current);
			} else {
				loc7 = *(EIF_REFERENCE *)(RTCW(earg1));
			}
			loc5 = eif_abs_int32 ((EIF_INTEGER_32) (loc3 - loc4));
			loc6 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			for (;;) {
				if ((EIF_BOOLEAN) (loc6 > loc5)) break;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R4825[Dtype(RTCW(loc7))-1560])(loc7, (EIF_CHARACTER_8) '0');
				loc6++;
			}
		}
	} else {
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc1 != ((EIF_INTEGER_32) 0L)) || (EIF_BOOLEAN)(loc2 != ((EIF_INTEGER_32) 0L)))) {
			if ((EIF_BOOLEAN)(loc1 != ((EIF_INTEGER_32) 0L))) {
				tr1 = *(EIF_REFERENCE *)(Current);
				loc3 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_1_1_0_2_);
				loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 - loc1);
			} else {
				loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
			}
			if ((EIF_BOOLEAN)(loc2 != ((EIF_INTEGER_32) 0L))) {
				tr1 = *(EIF_REFERENCE *)(RTCW(earg1));
				loc4 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_1_1_0_2_);
				loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc4 - loc2);
			} else {
				loc4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
			}
			loc7 = (EIF_REFERENCE) NULL;
			if ((EIF_BOOLEAN) (loc3 < loc4)) {
				loc7 = *(EIF_REFERENCE *)(Current);
			} else {
				loc7 = *(EIF_REFERENCE *)(RTCW(earg1));
			}
			loc5 = eif_abs_int32 ((EIF_INTEGER_32) (loc3 - loc4));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R4825[Dtype(RTCW(loc7))-1560])(loc7, (EIF_CHARACTER_8) '.');
			loc6 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			for (;;) {
				if ((EIF_BOOLEAN) (loc6 > loc5)) break;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R4825[Dtype(RTCW(loc7))-1560])(loc7, (EIF_CHARACTER_8) '0');
				loc6++;
			}
		}
	}
	RTLE;
}

/* {VALUE}.alignwhole */
void F1257_14778 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc9 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc10 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc11 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
	struct eif_ex_1410 sarg1;
	EIF_REFERENCE earg1 = (EIF_REFERENCE) sarg1.data;
	
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER_8 tc1;
	RTLD;
	memcpy (&sarg1.overhead, HEADER(arg1), _OBJSIZ_1_0_0_1_0_0_0_0_ + OVERHEAD);
	sarg1.overhead.ov_flags = EO_EXP | EO_STACK;
	sarg1.overhead.ov_size = 0;
	
	RTLI(4);
	RTLR(0,earg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc12);
	RTLIU(4);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	loc1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_CHARACTER_8, EIF_INTEGER_32)) R4747[Dtype(RTCW(tr1))-1560])(tr1, (EIF_CHARACTER_8) '.', ((EIF_INTEGER_32) 1L));
	tr1 = *(EIF_REFERENCE *)(RTCW(earg1));
	loc2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_CHARACTER_8, EIF_INTEGER_32)) R4747[Dtype(RTCW(tr1))-1560])(tr1, (EIF_CHARACTER_8) '.', ((EIF_INTEGER_32) 1L));
	tr1 = *(EIF_REFERENCE *)(Current);
	tc1 = (eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2556[Dtype(RTCW(tr1))-849])(tr1, ((EIF_INTEGER_32) 1L)));
	loc10 = (EIF_BOOLEAN) (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '-');
	tr1 = *(EIF_REFERENCE *)(RTCW(earg1));
	tc1 = (eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2556[Dtype(RTCW(tr1))-849])(tr1, ((EIF_INTEGER_32) 1L)));
	loc11 = (EIF_BOOLEAN) (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '-');
	if ((EIF_BOOLEAN)(loc1 != ((EIF_INTEGER_32) 0L))) {
		if (loc10) {
			loc5 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		} else {
			loc5 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		}
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 - loc5) - ((EIF_INTEGER_32) 1L));
	} else {
		tr1 = *(EIF_REFERENCE *)(Current);
		loc3 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_1_1_0_2_);
	}
	if ((EIF_BOOLEAN)(loc2 != ((EIF_INTEGER_32) 0L))) {
		if (loc11) {
			loc6 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		} else {
			loc6 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		}
		loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc2 - loc6) - ((EIF_INTEGER_32) 1L));
	} else {
		tr1 = *(EIF_REFERENCE *)(RTCW(earg1));
		loc4 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_1_1_0_2_);
	}
	if ((EIF_BOOLEAN)(loc3 != loc4)) {
		loc12 = (EIF_REFERENCE) NULL;
		if ((EIF_BOOLEAN) (loc3 < loc4)) {
			loc12 = *(EIF_REFERENCE *)(Current);
		} else {
			loc12 = *(EIF_REFERENCE *)(RTCW(earg1));
		}
		loc7 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		tc1 = (eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2556[Dtype(RTCW(loc12))-849])(loc12, ((EIF_INTEGER_32) 1L)));
		if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '-')) {
			loc7++;
		}
		loc8 = eif_abs_int32 ((EIF_INTEGER_32) (loc3 - loc4));
		loc9 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			if ((EIF_BOOLEAN) (loc9 > loc8)) break;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8, EIF_INTEGER_32)) R4828[Dtype(RTCW(loc12))-1560])(loc12, (EIF_CHARACTER_8) '0', loc7);
			loc9++;
		}
	}
	RTLE;
}

void EIF_Minit1411 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
