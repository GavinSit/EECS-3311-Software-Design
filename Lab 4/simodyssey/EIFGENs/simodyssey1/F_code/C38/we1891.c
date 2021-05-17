/*
 * Code for class WEL_DISPATCHER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1891.h"
#include "disptchr.h"
#include "../C38/we1890.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_DISPATCHER}.make */
void F1908_22363 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1907_22356(Current);
	cwel_set_window_procedure_address(((EIF_POINTER) F1907_22359));
	cwel_set_dialog_procedure_address(((EIF_POINTER) F1907_22360));
	F1908_22367(Current, Current);
	RTLE;
}

/* {WEL_DISPATCHER}.dispose */
void F1908_22364 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	cwel_release_dispatcher_object;
	F1908_22367(Current, NULL);
	RTLE;
}

/* {WEL_DISPATCHER}.cwel_set_window_procedure_address */
void F1908_22365 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	
	cwel_set_window_procedure_address((arg1));
}

/* {WEL_DISPATCHER}.cwel_set_dialog_procedure_address */
void F1908_22366 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	
	cwel_set_dialog_procedure_address((arg1));
}

/* {WEL_DISPATCHER}.cwel_set_dispatcher_object */
void F1908_22367 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,arg1);
	RTLIU(1);
	
	{
		EIF_OBJECT larg1 = &arg1;
		cwel_set_dispatcher_object(((EIF_OBJECT) larg1));
	}
	RTLE;
}

/* {WEL_DISPATCHER}.cwel_release_dispatcher_object */
void F1908_22368 (EIF_REFERENCE Current)
{
	GTCX
	
	
	cwel_release_dispatcher_object;
}

void EIF_Minit1891 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
