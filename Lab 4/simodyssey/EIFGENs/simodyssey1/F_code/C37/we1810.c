/*
 * Code for class WEL_IDENTIFIED
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1810.h"
#include "eif_built_in.h"
#include "eif_object_id.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_IDENTIFIED}.eif_current_object_id */
EIF_INTEGER_32 F1827_20472 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) eif_builtin_WEL_IDENTIFIED_eif_current_object_id (Current);
	return Result;
}

/* {WEL_IDENTIFIED}.eif_id_object */
EIF_REFERENCE F1827_20473 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = (EIF_REFERENCE) eif_id_object(arg1);
	loc1 = RTCCL(tr1);
	loc1 = RTRV(eif_new_type(1911, 0),loc1);
	if (EIF_TEST(loc1)) {
		RTLE;
		return (EIF_REFERENCE) loc1;
	}
	RTLE;
	return (EIF_REFERENCE) 0;
}

void EIF_Minit1810 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
