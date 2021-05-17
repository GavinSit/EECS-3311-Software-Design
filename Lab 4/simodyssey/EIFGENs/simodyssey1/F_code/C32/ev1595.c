/*
 * Code for class EV_PARAGRAPH_FORMAT
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1595.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_PARAGRAPH_FORMAT}.initialize */
void F1600_17820 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1600_17830(Current);
	F1596_17751(Current);
	RTLE;
}

/* {EV_PARAGRAPH_FORMAT}.enable_left_alignment */
void F1600_17830 (EIF_REFERENCE Current)
{
	GTCX
	
	
	F1600_17834(Current, ((EIF_INTEGER_32) 1L));
}

/* {EV_PARAGRAPH_FORMAT}.set_alignment */
void F1600_17834 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	F1884_21689(RTCW(tr1), arg1);
	RTLE;
}

/* {EV_PARAGRAPH_FORMAT}.create_interface_objects */
void F1600_17841 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {EV_PARAGRAPH_FORMAT}.create_implementation */
void F1600_17842 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(1883, 0x01).id, 1883, _OBJSIZ_1_2_0_0_0_1_0_0_);
	F1884_21683(RTCW(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	RTLE;
}

void EIF_Minit1595 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
