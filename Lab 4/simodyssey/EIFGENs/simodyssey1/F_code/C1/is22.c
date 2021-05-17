/*
 * Code for class ISE_RUNTIME
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "is22.h"
#include "eif_built_in.h"
#include "eif_copy.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {ISE_RUNTIME}.check_assert */
EIF_BOOLEAN F129_525 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	Result = (EIF_BOOLEAN) EIF_TEST(c_check_assert(arg1));
	
	return Result;
}

/* {ISE_RUNTIME}.type_conforms_to */
EIF_BOOLEAN F129_529 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	
	Result = (EIF_BOOLEAN) eif_builtin_ISE_RUNTIME_type_conforms_to (arg1, arg2);
	return Result;
}

/* {ISE_RUNTIME}.dynamic_type */
EIF_INTEGER_32 F129_531 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_BOOLEAN uarg1;
	EIF_BOOLEAN uarg;
	RTS_SD;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	uarg1 = (EIF_BOOLEAN) RTS_OU (arg1);
	uarg = uarg1;
	if (uarg) {
		RTS_RC;
		RTS_RS (arg1);
		RTS_RW;
	}
	Result = (EIF_INTEGER_32) eif_builtin_ISE_RUNTIME_dynamic_type (arg1);
	if (uarg) {
		RTS_RD;
	}
	RTLE;
	return Result;
}

/* {ISE_RUNTIME}.is_attached_type */
EIF_BOOLEAN F129_534 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	
	Result = (EIF_BOOLEAN) eif_builtin_ISE_RUNTIME_is_attached_type (arg1);
	return Result;
}

/* {ISE_RUNTIME}.detachable_type */
EIF_INTEGER_32 F129_535 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) eif_builtin_ISE_RUNTIME_detachable_type (arg1);
	return Result;
}

void EIF_Minit22 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
