/*
 * Code for class REFLECTOR
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "re130.h"
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

/* {REFLECTOR}.field_conforms_to */
EIF_BOOLEAN F507_1974 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	
	RTGC;
	ti4_1 = (EIF_INTEGER_32) eif_builtin_ISE_RUNTIME_detachable_type (arg2);
	Result = (EIF_BOOLEAN) eif_builtin_ISE_RUNTIME_type_conforms_to (arg1, ti4_1);
	return Result;
}

/* {REFLECTOR}.new_tuple_from_tuple */
EIF_REFERENCE F507_1979 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN uarg2;
	EIF_BOOLEAN uarg;
	RTS_SD;
	RTS_SDC;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,arg2);
	RTLR(2,Result);
	RTLR(3,loc2);
	RTLR(4,tr1);
	RTLIU(5);
	
	RTGC;
	uarg2 = (EIF_BOOLEAN) RTS_OU (arg2);
	uarg = uarg2;
	if (uarg) {
		RTS_RC;
		RTS_RS (arg2);
		RTS_RW;
	}
	Result = F507_2003(Current, arg1);
	loc1 = (EIF_INTEGER_32) eif_builtin_TUPLE_count (Result);
	if (RTS_CI (EIF_TRUE, arg2)) {
		RTS_BI (arg2);
		ti4_1 = (EIF_INTEGER_32) eif_builtin_TUPLE_count (arg2);
		RTS_EI;
	} else {
		RTS_AC (0, arg2);
		RTS_CALL (F1476_5346, eif_scr1, 0, &(ti4_1));
	}
	if ((EIF_BOOLEAN) (loc1 <= ti4_1)) {
		if (RTS_CI (EIF_TRUE, arg2)) {
			RTS_BI (arg2);
			tb1 = (EIF_BOOLEAN) eif_builtin_TUPLE_object_comparison (arg2);
			RTS_EI;
		} else {
			RTS_AC (0, arg2);
			RTS_CALL (F1476_5339, eif_scr4, 0, &(tb1));
		}
		if (tb1) {
			F1476_5341(RTCW(Result));
		}
		for (;;) {
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc1 <= ((EIF_INTEGER_32) 0L)) || (EIF_BOOLEAN) !(EIF_BOOLEAN)(Result != NULL))) break;
			if (RTS_CI (EIF_TRUE, arg2)) {
				RTS_BI (arg2);
				loc2 = F1476_5317(RTCW(arg2), loc1);
				RTS_EI;
			} else {
				RTS_AC (1, arg2);
				RTS_AA (loc1, it_i4, SK_INT32, 1);
				RTS_CALL (F1476_5317, eif_scr3, 0, &(loc2));
			}
			tr1 = RTCCL(loc2);
			tb1 = F1476_5345(RTCW(Result), tr1, loc1);
			if (tb1) {
				tr1 = RTCCL(loc2);
				F1476_5350(RTCW(Result), tr1, loc1);
			} else {
				Result = (EIF_REFERENCE) NULL;
			}
			loc1--;
		}
	} else {
		if (uarg) {
			RTS_RD;
		}
		RTLE;
		return (EIF_REFERENCE) NULL;
	}
	if (uarg) {
		RTS_RD;
	}
	RTLE;
	return Result;
}

/* {REFLECTOR}.is_tuple_type */
EIF_BOOLEAN F507_1983 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	
	Result = (EIF_BOOLEAN) eif_builtin_REFLECTOR_is_tuple_type (arg1);
	return Result;
}

/* {REFLECTOR}.is_attached_type */
EIF_BOOLEAN F507_1984 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN) eif_builtin_ISE_RUNTIME_is_attached_type (arg1);
}

/* {REFLECTOR}.c_new_tuple_instance_of */
EIF_REFERENCE F507_2003 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Result);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("c_new_tuple_instance_of", 506, Current, 0, 1, 1924);
	Result = (EIF_REFERENCE) eif_builtin_REFLECTOR_c_new_tuple_instance_of (arg1);
	if (!Result) {RTEC(EN_FAIL);}
	RTLE;
	RTEE;
	return Result;
}

void EIF_Minit130 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
