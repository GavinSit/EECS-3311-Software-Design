/*
 * Code for class WEL_MSG_BOX
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1414.h"
#include <wel.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_MSG_BOX}.make */
void F1259_14782 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 9L);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTLE;
}

/* {WEL_MSG_BOX}.information_message_box */
void F1259_14783 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,arg2);
	RTLR(3,arg3);
	RTLR(4,Current);
	RTLIU(5);
	
	RTGC;
	loc1 = RTLNS(eif_new_type(1349, 0x01).id, 1349, _OBJSIZ_0_1_0_0_0_1_0_0_);
	F1350_16060(RTCW(loc1), arg1, arg2, arg3, (EIF_INTEGER_32) (((EIF_INTEGER_32) 64L) + ((EIF_INTEGER_32) 0L)), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_1_), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_2_));
	tp1 = *(EIF_POINTER *)(RTCW(loc1)+ _PTROFF_0_1_0_0_0_0_);
	ti4_1 = (EIF_INTEGER_32) MessageBoxIndirect(((LPMSGBOXPARAMS) tp1));
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_) = (EIF_INTEGER_32) ti4_1;
	RTLE;
}

/* {WEL_MSG_BOX}.cwin_message_box_indirect */
EIF_INTEGER_32 F1259_14794 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) MessageBoxIndirect(((LPMSGBOXPARAMS) arg1));
	return Result;
}

void EIF_Minit1414 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
