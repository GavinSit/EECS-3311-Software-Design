/*
 * Code for class UC_V510_CTYPE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "uc1807.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {UC_V510_CTYPE}.lower_code */
EIF_INTEGER_32 F1824_20467 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,tr4);
	RTLIU(5);
	
	RTGC;
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg1 / ((EIF_INTEGER_32) 65536L));
	loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg1 % ((EIF_INTEGER_32) 65536L));
	loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc4 / ((EIF_INTEGER_32) 256L));
	loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc4 % ((EIF_INTEGER_32) 256L));
	tr1 = RTOUCR(520,F1823_20465, (Current));
	/* INLINED CODE (SPECIAL.item) */
	tr3 = *((EIF_REFERENCE *)RTCW(tr1) + (loc1));
	/* END INLINED CODE */
	tr1 = tr3;
	/* INLINED CODE (SPECIAL.item) */
	tr3 = *((EIF_REFERENCE *)RTCW(tr1) + (loc2));
	/* END INLINED CODE */
	tr1 = tr3;
	Result = F925_3191(RTCW(tr1), (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L)));
	if ((EIF_BOOLEAN)(Result == ((EIF_INTEGER_32) -1L))) {
		RTLE;
		return (EIF_INTEGER_32) arg1;
	}
	RTLE;
	return Result;
}

/* {UC_V510_CTYPE}.upper_code */
EIF_INTEGER_32 F1824_20468 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,tr4);
	RTLIU(5);
	
	RTGC;
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg1 / ((EIF_INTEGER_32) 65536L));
	loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg1 % ((EIF_INTEGER_32) 65536L));
	loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc4 / ((EIF_INTEGER_32) 256L));
	loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc4 % ((EIF_INTEGER_32) 256L));
	tr1 = RTOUCR(521,F1822_20441, (Current));
	/* INLINED CODE (SPECIAL.item) */
	tr3 = *((EIF_REFERENCE *)RTCW(tr1) + (loc1));
	/* END INLINED CODE */
	tr1 = tr3;
	/* INLINED CODE (SPECIAL.item) */
	tr3 = *((EIF_REFERENCE *)RTCW(tr1) + (loc2));
	/* END INLINED CODE */
	tr1 = tr3;
	Result = F925_3191(RTCW(tr1), (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L)));
	if ((EIF_BOOLEAN)(Result == ((EIF_INTEGER_32) -1L))) {
		RTLE;
		return (EIF_INTEGER_32) arg1;
	}
	RTLE;
	return Result;
}

void EIF_Minit1807 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
