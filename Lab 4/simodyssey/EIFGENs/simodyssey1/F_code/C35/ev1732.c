/*
 * Code for class EV_PIXMAPABLE_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1732.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_PIXMAPABLE_IMP}.pixmap_imp */
EIF_REFERENCE F1743_19689 (EIF_REFERENCE Current)
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
	tr1 = *(EIF_REFERENCE *)(Current + O16470[Dtype(Current)-1742]);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		Result = *(EIF_REFERENCE *)(loc1 + _REFACS_3_);
		RTLE;
		return RTRV(eif_new_type(413, 0x00), Result);
	}
	RTLE;
	return Result;
}

/* {EV_PIXMAPABLE_IMP}.set_pixmap */
void F1743_19690 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	tr1 = F1_14(arg1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + O16470[Dtype(Current)-1742]) = (EIF_REFERENCE) tr1;
	RTLE;
}

void EIF_Minit1732 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
