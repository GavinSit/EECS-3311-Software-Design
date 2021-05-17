/*
 * Code for class ROUTINE [G#1]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ro255.h"
#include "eif_built_in.h"
#include "eif_misc.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {ROUTINE}.operands */
EIF_REFERENCE F1552_6458 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {ROUTINE}.hash_code */
EIF_INTEGER_32 F1552_6460 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current + O4616[dtype-1551]);
	Result = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (tp1)));
	ti4_1 = *(EIF_INTEGER_32 *)(Current + O4620[dtype-1551]);
	ti4_1 = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (ti4_1)));
	Result = eif_bit_xor(Result,ti4_1);
	RTLE;
	return Result;
}

/* {ROUTINE}.is_equal */
EIF_BOOLEAN F1552_6465 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN tb5;
	EIF_BOOLEAN tb6;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	Result = '\0';
	tb1 = '\0';
	tb2 = '\0';
	tb3 = '\0';
	tb4 = '\0';
	tb5 = '\0';
	tb6 = '\0';
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_1_);
	if (RTEQ(*(EIF_REFERENCE *)(Current + _REFACS_1_), tr1)) {
		tr1 = *(EIF_REFERENCE *)(RTCW(arg1));
		tb6 = RTEQ(*(EIF_REFERENCE *)(Current), tr1);
	}
	if (tb6) {
		tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_2_);
		tb5 = RTEQ(*(EIF_REFERENCE *)(Current + _REFACS_2_), tr1);
	}
	if (tb5) {
		tp1 = *(EIF_POINTER *)(RTCW(arg1) + O4616[Dtype(arg1)-1551]);
		tb4 = (EIF_BOOLEAN)(*(EIF_POINTER *)(Current + O4616[dtype-1551]) == tp1);
	}
	if (tb4) {
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O4620[Dtype(arg1)-1551]);
		tb3 = (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O4620[dtype-1551]) == ti4_1);
	}
	if (tb3) {
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O4622[Dtype(arg1)-1551]);
		tb2 = (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O4622[dtype-1551]) == ti4_1);
	}
	if (tb2) {
		tp1 = *(EIF_POINTER *)(RTCW(arg1) + O4619[Dtype(arg1)-1551]);
		tb1 = (EIF_BOOLEAN)(*(EIF_POINTER *)(Current + O4619[dtype-1551]) == tp1);
	}
	if (tb1) {
		tp1 = *(EIF_POINTER *)(RTCW(arg1) + O4617[Dtype(arg1)-1551]);
		Result = (EIF_BOOLEAN)(*(EIF_POINTER *)(Current + O4617[dtype-1551]) == tp1);
	}
	RTLE;
	return Result;
}

/* {ROUTINE}.valid_operands */
EIF_BOOLEAN F1552_6466 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN uarg1;
	EIF_BOOLEAN uarg;
	RTS_SD;
	RTS_SDC;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,loc3);
	RTLIU(4);
	
	RTGC;
	uarg1 = (EIF_BOOLEAN) RTS_OU (arg1);
	uarg = uarg1;
	if (uarg) {
		RTS_RC;
		RTS_RS (arg1);
		RTS_RW;
	}
	if ((EIF_BOOLEAN)(arg1 == NULL)) {
		ti4_1 = *(EIF_INTEGER_32 *)(Current + O4608[dtype-1551]);
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L));
	} else {
		if (RTS_CI (EIF_TRUE, arg1)) {
			RTS_BI (arg1);
			ti4_1 = (EIF_INTEGER_32) eif_builtin_TUPLE_count (arg1);
			RTS_EI;
		} else {
			RTS_AC (0, arg1);
			RTS_CALL (F1476_5346, eif_scr1, 0, &(ti4_1));
		}
		if ((EIF_BOOLEAN) (ti4_1 >= *(EIF_INTEGER_32 *)(Current + O4608[dtype-1551]))) {
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			for (;;) {
				if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc1 > *(EIF_INTEGER_32 *)(Current + O4608[dtype-1551])) || (EIF_BOOLEAN) !Result)) break;
				if (RTS_CI (EIF_TRUE, arg1)) {
					RTS_BI (arg1);
					tu1_1 = (EIF_NATURAL_8) eif_builtin_TUPLE_item_code (arg1, loc1);
					RTS_EI;
				} else {
					RTS_AC (1, arg1);
					RTS_AA (loc1, it_i4, SK_INT32, 1);
					RTS_CALL (F1476_5422, eif_scr2, 0, &(tu1_1));
				}
				loc2 = (EIF_INTEGER_32) tu1_1;
				loc4 = F1552_6490(Current, loc1);
				switch (loc2) {
					case 1L:
						tr1 = RTLNTY2(eif_new_type(1493, 0x00), 0x00);
						ti4_1 = (EIF_INTEGER_32) eif_builtin_TYPE_type_id (tr1);
						Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(loc4 == ti4_1);
						break;
					case 2L:
						tr1 = RTLNTY2(eif_new_type(1487, 0x00), 0x00);
						ti4_1 = (EIF_INTEGER_32) eif_builtin_TYPE_type_id (tr1);
						Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(loc4 == ti4_1);
						break;
					case 14L:
						tr1 = RTLNTY2(eif_new_type(1484, 0x00), 0x00);
						ti4_1 = (EIF_INTEGER_32) eif_builtin_TYPE_type_id (tr1);
						Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(loc4 == ti4_1);
						break;
					case 6L:
						tr1 = RTLNTY2(eif_new_type(1478, 0x00), 0x00);
						ti4_1 = (EIF_INTEGER_32) eif_builtin_TYPE_type_id (tr1);
						Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(loc4 == ti4_1);
						break;
					case 7L:
						tr1 = RTLNTY2(eif_new_type(1511, 0x00), 0x00);
						ti4_1 = (EIF_INTEGER_32) eif_builtin_TYPE_type_id (tr1);
						Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(loc4 == ti4_1);
						break;
					case 8L:
						tr1 = RTLNTY2(eif_new_type(1508, 0x00), 0x00);
						ti4_1 = (EIF_INTEGER_32) eif_builtin_TYPE_type_id (tr1);
						Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(loc4 == ti4_1);
						break;
					case 9L:
						tr1 = RTLNTY2(eif_new_type(1490, 0x00), 0x00);
						ti4_1 = (EIF_INTEGER_32) eif_builtin_TYPE_type_id (tr1);
						Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(loc4 == ti4_1);
						break;
					case 10L:
						tr1 = RTLNTY2(eif_new_type(1499, 0x00), 0x00);
						ti4_1 = (EIF_INTEGER_32) eif_builtin_TYPE_type_id (tr1);
						Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(loc4 == ti4_1);
						break;
					case 11L:
						tr1 = RTLNTY2(eif_new_type(1505, 0x00), 0x00);
						ti4_1 = (EIF_INTEGER_32) eif_builtin_TYPE_type_id (tr1);
						Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(loc4 == ti4_1);
						break;
					case 12L:
						tr1 = RTLNTY2(eif_new_type(1502, 0x00), 0x00);
						ti4_1 = (EIF_INTEGER_32) eif_builtin_TYPE_type_id (tr1);
						Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(loc4 == ti4_1);
						break;
					case 13L:
						tr1 = RTLNTY2(eif_new_type(1514, 0x00), 0x00);
						ti4_1 = (EIF_INTEGER_32) eif_builtin_TYPE_type_id (tr1);
						Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(loc4 == ti4_1);
						break;
					case 5L:
						tr1 = RTLNTY2(eif_new_type(1550, 0x00), 0x00);
						ti4_1 = (EIF_INTEGER_32) eif_builtin_TYPE_type_id (tr1);
						Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(loc4 == ti4_1);
						break;
					case 4L:
						tr1 = RTLNTY2(eif_new_type(1481, 0x00), 0x00);
						ti4_1 = (EIF_INTEGER_32) eif_builtin_TYPE_type_id (tr1);
						Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(loc4 == ti4_1);
						break;
					case 3L:
						tr1 = RTLNTY2(eif_new_type(1496, 0x00), 0x00);
						ti4_1 = (EIF_INTEGER_32) eif_builtin_TYPE_type_id (tr1);
						Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(loc4 == ti4_1);
						break;
					case 0L:
						if (RTS_CI (EIF_TRUE, arg1)) {
							RTS_BI (arg1);
							loc3 = F1476_5317(RTCW(arg1), loc1);
							RTS_EI;
						} else {
							RTS_AC (1, arg1);
							RTS_AA (loc1, it_i4, SK_INT32, 1);
							RTS_CALL (F1476_5317, eif_scr3, 0, &(loc3));
						}
						if (F507_1984(Current, loc4)) {
							Result = '\0';
							if ((EIF_BOOLEAN)(loc3 != NULL)) {
								tr1 = RTCCL(loc3);
								ti4_1 = (EIF_INTEGER_32) eif_builtin_ISE_RUNTIME_dynamic_type (tr1);
								Result = F507_1974(Current, ti4_1, loc4);
							}
						} else {
							Result = '\01';
							if (!(EIF_BOOLEAN)(loc3 == NULL)) {
								tr1 = RTCCL(loc3);
								ti4_1 = (EIF_INTEGER_32) eif_builtin_ISE_RUNTIME_dynamic_type (tr1);
								Result = F507_1974(Current, ti4_1, loc4);
							}
						}
						break;
					default:
						Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
						break;
				}
				loc1++;
			}
		}
	}
	if ((EIF_BOOLEAN) (Result && (EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current + O4607[dtype-1551]))) {
		Result = '\0';
		tb1 = '\0';
		if ((EIF_BOOLEAN)(arg1 != NULL)) {
			if (RTS_CI (EIF_TRUE, arg1)) {
				RTS_BI (arg1);
				tb2 = F1476_5349(RTCW(arg1));
				RTS_EI;
			} else {
				RTS_AC (0, arg1);
				RTS_CALL (F1476_5349, eif_scr4, 0, &(tb2));
			}
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if (tb1) {
			if (RTS_CI (EIF_TRUE, arg1)) {
				RTS_BI (arg1);
				tr1 = F1476_5317(RTCW(arg1), ((EIF_INTEGER_32) 1L));
				RTS_EI;
			} else {
				RTS_AC (1, arg1);
				RTS_AA (((EIF_INTEGER_32) 1L), it_i4, SK_INT32, 1);
				RTS_CALL (F1476_5317, eif_scr3, 0, &(tr1));
			}
			Result = (EIF_BOOLEAN)(tr1 != NULL);
		}
	}
	if (uarg) {
		RTS_RD;
	}
	RTLE;
	return Result;
}

/* {ROUTINE}.set_operands */
void F1552_6470 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
}

/* {ROUTINE}.copy */
void F1552_6472 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTCFDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 != Current)) {
		eif_builtin_ANY_standard_copy (Current, arg1);
		tr1 = *(EIF_REFERENCE *)(Current);
		loc1 = tr1;
		if (EIF_TEST(loc1)) {
			tr1 = F1_14(loc1);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
		}
	}
	RTLE;
}

/* {ROUTINE}.flexible_call */
void F1552_6475 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN uarg1;
	EIF_BOOLEAN uarg;
	RTS_SD;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCFDT;
	RTCDT;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,loc1);
	RTLR(3,loc2);
	RTLR(4,tr1);
	RTLIU(5);
	
	RTGC;
	uarg1 = (EIF_BOOLEAN) RTS_OU (arg1);
	uarg = uarg1;
	if (uarg) {
		RTS_RC;
		RTS_RS (arg1);
		RTS_RW;
	}
	if ((EIF_BOOLEAN) !(EIF_BOOLEAN)(arg1 != NULL)) {
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4611[dtype-1552])(Current, loc1);
	} else {
		RTCT0("from_precondition", EX_CHECK);
		tr1 = RTLNTY2(eif_gen_param(dftype, 1), 0x00);
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3877[Dtype(tr1)-1422])(tr1);
		tr1 = F507_1979(Current, ti4_1, arg1);
		loc2 = tr1;
		loc2 = RTRV(eif_gen_param(dftype, 1),loc2);
		if (EIF_TEST(loc2)) {
			RTCK0;
		} else {
			RTCF0;
		}
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4611[dtype-1552])(Current, loc2);
	}
	if (uarg) {
		RTS_RD;
	}
	RTLE;
}

/* {ROUTINE}.correct_mismatch */
void F1552_6476 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {ROUTINE}.closed_count */
EIF_INTEGER_32 F1552_6478 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		ti4_1 = (EIF_INTEGER_32) eif_builtin_TUPLE_count (loc1);
		RTLE;
		return (EIF_INTEGER_32) ti4_1;
	}
	RTLE;
	return (EIF_INTEGER_32) 0;
}

/* {ROUTINE}.set_rout_disp_final */
void F1552_6487 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3, EIF_REFERENCE arg4, EIF_BOOLEAN arg5, EIF_INTEGER_32 arg6)
{
	GTCX
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg4);
	RTLIU(2);
	
	RTGC;
	*(EIF_POINTER *)(Current + O4616[dtype-1551]) = (EIF_POINTER) arg1;
	*(EIF_POINTER *)(Current + O4619[dtype-1551]) = (EIF_POINTER) arg2;
	*(EIF_POINTER *)(Current + O4617[dtype-1551]) = (EIF_POINTER) arg3;
	RTAR(Current, arg4);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) arg4;
	*(EIF_BOOLEAN *)(Current + O4607[dtype-1551]) = (EIF_BOOLEAN) arg5;
	*(EIF_INTEGER_32 *)(Current + O4608[dtype-1551]) = (EIF_INTEGER_32) arg6;
	RTLE;
}

/* {ROUTINE}.open_operand_type */
EIF_INTEGER_32 F1552_6490 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCFDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	if ((EIF_BOOLEAN)(loc1 == NULL)) {
		{
			static EIF_TYPE_INDEX typarr0[] = {924,1508,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			loc1 = RTLNSMART(typres0.id);
		}
		F925_3186(RTCW(loc1), ((EIF_INTEGER_32) -1L), ((EIF_INTEGER_32) 1L), *(EIF_INTEGER_32 *)(Current + O4608[Dtype(Current)-1551]));
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) loc1;
	}
	Result = F925_3191(RTCW(loc1), arg1);
	if ((EIF_BOOLEAN)(Result == ((EIF_INTEGER_32) -1L))) {
		tr1 = RTLNTY2(eif_gen_param(dftype, 1), 0x00);
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R3876[Dtype(tr1)-1422])(tr1, arg1);
		Result = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3877[Dtype(RTCW(tr1))-1422])(tr1);
		F925_3210(RTCW(loc1), Result, arg1);
	}
	RTLE;
	return Result;
}

void EIF_Minit255 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
