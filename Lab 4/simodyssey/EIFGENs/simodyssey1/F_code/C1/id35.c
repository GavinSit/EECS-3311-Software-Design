/*
 * Code for class IDENTIFIED_ROUTINES
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "id35.h"
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

/* {IDENTIFIED_ROUTINES}.eif_id_object */
EIF_REFERENCE F518_870 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Result);
	RTLIU(1);
	Result = (EIF_REFERENCE) eif_id_object(arg1);
	
	RTLE;
	return Result;
}

/* {IDENTIFIED_ROUTINES}.eif_object_id */
EIF_INTEGER_32 F518_871 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,arg1);
	RTLIU(1);
	
	{
		EIF_OBJECT larg1 = &arg1;Result = (EIF_INTEGER_32) eif_object_id(larg1);
		
	}
	RTLE;
	return Result;
}

/* {IDENTIFIED_ROUTINES}.eif_object_id_free */
void F518_872 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	eif_object_id_free(arg1);
	
}

void EIF_Minit35 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
