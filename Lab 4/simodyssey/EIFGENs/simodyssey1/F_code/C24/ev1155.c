/*
 * Code for class EV_BUTTON_ACTION_SEQUENCES_I
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1155.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_BUTTON_ACTION_SEQUENCES_I}.select_actions */
EIF_REFERENCE F232_11528 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLIU(4);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		RTLE;
		return (EIF_REFERENCE) loc1;
	} else {
		Result = RTLNS(eif_new_type(996, 0x01).id, 996, _OBJSIZ_9_2_0_2_0_0_0_0_);
		F976_4196(RTCW(Result));
		{
			/* INLINED CODE (EV_BUTTON_ACTION_SEQUENCES_I.init_select_actions) */
			/* END INLINED CODE */
		}
		;
		RTAR(Current, Result);
		*(EIF_REFERENCE *)(Current + _REFACS_5_) = (EIF_REFERENCE) Result;
	}
	RTLE;
	return Result;
}

/* {EV_BUTTON_ACTION_SEQUENCES_I}.init_select_actions */
void F232_11530 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTGC;
}

void EIF_Minit1155 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
