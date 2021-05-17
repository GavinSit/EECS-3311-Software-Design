/*
 * Code for class UC_STRING_EQUALITY_TESTER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "uc1377.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {UC_STRING_EQUALITY_TESTER}.test */
EIF_BOOLEAN F1157_14542 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 == arg2)) {
		RTLE;
		return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	} else {
		if ((EIF_BOOLEAN)(arg1 == NULL)) {
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		} else {
			if ((EIF_BOOLEAN)(arg2 == NULL)) {
				RTLE;
				return (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			} else {
				tr1 = RTOUCR(244,F1156_14541, (Current));
				Result = F1266_14931(RTCW(tr1), arg1, arg2);
			}
		}
	}
	RTLE;
	return Result;
}

void EIF_Minit1377 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
