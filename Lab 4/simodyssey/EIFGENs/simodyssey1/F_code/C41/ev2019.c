/*
 * Code for class EV_DYNAMIC_LIST [G#1]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev2019.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_DYNAMIC_LIST}.item */
EIF_REFERENCE F1630_18246 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O15014[Dtype(Current)-1595]);
	Result = F1716_19388(RTCW(tr1));
	RTLE;
	return Result;
}

/* {EV_DYNAMIC_LIST}.index */
EIF_INTEGER_32 F1630_18247 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O15014[Dtype(Current)-1595]);
	Result = *(EIF_INTEGER_32 *)(RTCW(tr1) + O16224[Dtype(tr1)-1715]);
	RTLE;
	return Result;
}

/* {EV_DYNAMIC_LIST}.cursor */
EIF_REFERENCE F1630_18248 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O15014[Dtype(Current)-1595]);
	Result = F1716_19390(RTCW(tr1));
	RTLE;
	return Result;
}

/* {EV_DYNAMIC_LIST}.i_th */
EIF_REFERENCE F1630_18249 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O15014[Dtype(Current)-1595]);
	Result = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R16227[Dtype(RTCW(tr1))-1730])(tr1, arg1);
	RTLE;
	return Result;
}

/* {EV_DYNAMIC_LIST}.index_of */
EIF_INTEGER_32 F1630_18250 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O15014[Dtype(Current)-1595]);
	Result = F1716_19394(RTCW(tr1), arg1, arg2);
	RTLE;
	return Result;
}

/* {EV_DYNAMIC_LIST}.count */
EIF_INTEGER_32 F1630_18253 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O15014[Dtype(Current)-1595]);
	Result = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16232[Dtype(RTCW(tr1))-1730])(tr1);
	RTLE;
	return Result;
}

/* {EV_DYNAMIC_LIST}.start */
void F1630_18256 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O15014[Dtype(Current)-1595]);
	F1716_19400(RTCW(tr1));
	RTLE;
}

/* {EV_DYNAMIC_LIST}.back */
void F1630_18257 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O15014[Dtype(Current)-1595]);
	F1716_19401(RTCW(tr1));
	RTLE;
}

/* {EV_DYNAMIC_LIST}.forth */
void F1630_18258 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O15014[Dtype(Current)-1595]);
	F1716_19402(RTCW(tr1));
	RTLE;
}

/* {EV_DYNAMIC_LIST}.go_i_th */
void F1630_18259 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O15014[Dtype(Current)-1595]);
	F1716_19403(RTCW(tr1), arg1);
	RTLE;
}

/* {EV_DYNAMIC_LIST}.go_to */
void F1630_18260 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O15014[Dtype(Current)-1595]);
	F1716_19404(RTCW(tr1), arg1);
	RTLE;
}

/* {EV_DYNAMIC_LIST}.append */
void F1630_18262 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O15014[Dtype(Current)-1595]);
	F1716_19406(RTCW(tr1), arg1);
	RTLE;
}

/* {EV_DYNAMIC_LIST}.extend */
void F1630_18264 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O15014[Dtype(Current)-1595]);
	F1716_19407(RTCW(tr1), arg1);
	RTLE;
}

/* {EV_DYNAMIC_LIST}.put_left */
void F1630_18268 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O15014[Dtype(Current)-1595]);
	F1716_19411(RTCW(tr1), arg1);
	RTLE;
}

/* {EV_DYNAMIC_LIST}.put_i_th */
void F1630_18269 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O15014[Dtype(Current)-1595]);
	F1716_19412(RTCW(tr1), arg1, arg2);
	RTLE;
}

/* {EV_DYNAMIC_LIST}.prune */
void F1630_18273 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O15014[Dtype(Current)-1595]);
	F1716_19415(RTCW(tr1), arg1);
	RTLE;
}

/* {EV_DYNAMIC_LIST}.remove */
void F1630_18274 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O15014[Dtype(Current)-1595]);
	F1716_19416(RTCW(tr1));
	RTLE;
}

/* {EV_DYNAMIC_LIST}.wipe_out */
void F1630_18277 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O15014[Dtype(Current)-1595]);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R16254[Dtype(RTCW(tr1))-1730])(tr1);
	RTLE;
}

/* {EV_DYNAMIC_LIST}.dl_append */
void F1630_18281 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	F1630_18262(Current, arg1);
}

/* {EV_DYNAMIC_LIST}.dl_extend */
void F1630_18282 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	F1630_18264(Current, arg1);
}

void EIF_Minit2019 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
