/*
 * Code for class EV_GDI_OBJECT
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1559.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_GDI_OBJECT}.value */
EIF_INTEGER_32 F1516_17604 (EIF_REFERENCE Current)
{
	GTCX
	RTCDT;
	
	
	return (EIF_INTEGER_32) (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current + O14875[dtype-1515]) * *(EIF_INTEGER_32 *)(Current + O14876[dtype-1515]));
}

/* {EV_GDI_OBJECT}.update */
void F1516_17606 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current + O14875[dtype-1515]) < ((EIF_INTEGER_32) 2147483646L))) {
		(*(EIF_INTEGER_32 *)(Current + O14875[dtype-1515]))++;
	}
	*(EIF_INTEGER_32 *)(Current + O14876[dtype-1515]) = (EIF_INTEGER_32) arg1;
	RTLE;
}

/* {EV_GDI_OBJECT}.set_item */
void F1516_17607 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
	F519_14211(RTCW(arg1));
	RTLE;
}

/* {EV_GDI_OBJECT}.delete */
void F1516_17608 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		F519_14210(loc1);
	}
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) NULL;
	RTLE;
}

void EIF_Minit1559 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
