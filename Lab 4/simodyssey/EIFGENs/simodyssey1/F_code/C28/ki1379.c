/*
 * Code for class KI_CHARACTER_OUTPUT_STREAM
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ki1379.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {KI_CHARACTER_OUTPUT_STREAM}.put_integer */
void F1159_14546 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_64 ti8_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	ti8_1 = (EIF_INTEGER_64) arg1;
	F1159_14550(Current, ti8_1);
	RTLE;
}

/* {KI_CHARACTER_OUTPUT_STREAM}.put_integer_64 */
void F1159_14550 (EIF_REFERENCE Current, EIF_INTEGER_64 arg1)
{
	GTCX
	EIF_INTEGER_64 loc1 = (EIF_INTEGER_64) 0;
	EIF_INTEGER_64 loc2 = (EIF_INTEGER_64) 0;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 == (EIF_INTEGER_64) ((EIF_INTEGER_32) 0L))) {
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R8047[dtype-1162])(Current, (EIF_CHARACTER_8) '0');
	} else {
		if ((EIF_BOOLEAN) (arg1 < (EIF_INTEGER_64) ((EIF_INTEGER_32) 0L))) {
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R8047[dtype-1162])(Current, (EIF_CHARACTER_8) '-');
			loc1 = (EIF_INTEGER_64) (EIF_INTEGER_64) -((EIF_INTEGER_64) (arg1 + (EIF_INTEGER_64) ((EIF_INTEGER_32) 1L)));
			loc2 = (EIF_INTEGER_64) (EIF_INTEGER_64) (loc1 / (EIF_INTEGER_64) ((EIF_INTEGER_32) 10L));
			switch ((EIF_INTEGER_64) (loc1 % (EIF_INTEGER_64) ((EIF_INTEGER_32) 10L))) {
				case RTI64C(0):
					if ((EIF_BOOLEAN)(loc2 != (EIF_INTEGER_64) ((EIF_INTEGER_32) 0L))) {
						F1159_14550(Current, loc2);
					}
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R8047[dtype-1162])(Current, (EIF_CHARACTER_8) '1');
					break;
				case RTI64C(1):
					if ((EIF_BOOLEAN)(loc2 != (EIF_INTEGER_64) ((EIF_INTEGER_32) 0L))) {
						F1159_14550(Current, loc2);
					}
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R8047[dtype-1162])(Current, (EIF_CHARACTER_8) '2');
					break;
				case RTI64C(2):
					if ((EIF_BOOLEAN)(loc2 != (EIF_INTEGER_64) ((EIF_INTEGER_32) 0L))) {
						F1159_14550(Current, loc2);
					}
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R8047[dtype-1162])(Current, (EIF_CHARACTER_8) '3');
					break;
				case RTI64C(3):
					if ((EIF_BOOLEAN)(loc2 != (EIF_INTEGER_64) ((EIF_INTEGER_32) 0L))) {
						F1159_14550(Current, loc2);
					}
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R8047[dtype-1162])(Current, (EIF_CHARACTER_8) '4');
					break;
				case RTI64C(4):
					if ((EIF_BOOLEAN)(loc2 != (EIF_INTEGER_64) ((EIF_INTEGER_32) 0L))) {
						F1159_14550(Current, loc2);
					}
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R8047[dtype-1162])(Current, (EIF_CHARACTER_8) '5');
					break;
				case RTI64C(5):
					if ((EIF_BOOLEAN)(loc2 != (EIF_INTEGER_64) ((EIF_INTEGER_32) 0L))) {
						F1159_14550(Current, loc2);
					}
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R8047[dtype-1162])(Current, (EIF_CHARACTER_8) '6');
					break;
				case RTI64C(6):
					if ((EIF_BOOLEAN)(loc2 != (EIF_INTEGER_64) ((EIF_INTEGER_32) 0L))) {
						F1159_14550(Current, loc2);
					}
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R8047[dtype-1162])(Current, (EIF_CHARACTER_8) '7');
					break;
				case RTI64C(7):
					if ((EIF_BOOLEAN)(loc2 != (EIF_INTEGER_64) ((EIF_INTEGER_32) 0L))) {
						F1159_14550(Current, loc2);
					}
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R8047[dtype-1162])(Current, (EIF_CHARACTER_8) '8');
					break;
				case RTI64C(8):
					if ((EIF_BOOLEAN)(loc2 != (EIF_INTEGER_64) ((EIF_INTEGER_32) 0L))) {
						F1159_14550(Current, loc2);
					}
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R8047[dtype-1162])(Current, (EIF_CHARACTER_8) '9');
					break;
				case RTI64C(9):
					F1159_14550(Current, (EIF_INTEGER_64) (loc2 + (EIF_INTEGER_64) ((EIF_INTEGER_32) 1L)));
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R8047[dtype-1162])(Current, (EIF_CHARACTER_8) '0');
					break;
				default:
					RTEC(EN_WHEN);
			}
		} else {
			loc1 = (EIF_INTEGER_64) arg1;
			loc2 = (EIF_INTEGER_64) (EIF_INTEGER_64) (loc1 / (EIF_INTEGER_64) ((EIF_INTEGER_32) 10L));
			if ((EIF_BOOLEAN)(loc2 != (EIF_INTEGER_64) ((EIF_INTEGER_32) 0L))) {
				F1159_14550(Current, loc2);
			}
			switch ((EIF_INTEGER_64) (loc1 % (EIF_INTEGER_64) ((EIF_INTEGER_32) 10L))) {
				case RTI64C(0):
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R8047[dtype-1162])(Current, (EIF_CHARACTER_8) '0');
					break;
				case RTI64C(1):
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R8047[dtype-1162])(Current, (EIF_CHARACTER_8) '1');
					break;
				case RTI64C(2):
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R8047[dtype-1162])(Current, (EIF_CHARACTER_8) '2');
					break;
				case RTI64C(3):
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R8047[dtype-1162])(Current, (EIF_CHARACTER_8) '3');
					break;
				case RTI64C(4):
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R8047[dtype-1162])(Current, (EIF_CHARACTER_8) '4');
					break;
				case RTI64C(5):
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R8047[dtype-1162])(Current, (EIF_CHARACTER_8) '5');
					break;
				case RTI64C(6):
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R8047[dtype-1162])(Current, (EIF_CHARACTER_8) '6');
					break;
				case RTI64C(7):
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R8047[dtype-1162])(Current, (EIF_CHARACTER_8) '7');
					break;
				case RTI64C(8):
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R8047[dtype-1162])(Current, (EIF_CHARACTER_8) '8');
					break;
				case RTI64C(9):
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R8047[dtype-1162])(Current, (EIF_CHARACTER_8) '9');
					break;
				default:
					RTEC(EN_WHEN);
			}
		}
	}
	RTLE;
}

void EIF_Minit1379 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
