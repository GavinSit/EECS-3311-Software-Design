/*
 * Code for class YY_BUFFER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "yy1172.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {YY_BUFFER}.make */
void F255_11745 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTGC;
	loc2 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
	loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 2L));
	loc1 = F255_11768(Current, loc2);
	F1280_15026(RTCW(loc1), arg1, ((EIF_INTEGER_32) 1L));
	F1280_15024(RTCW(loc1), (EIF_CHARACTER_8) '\000', (EIF_INTEGER_32) (loc2 - ((EIF_INTEGER_32) 1L)));
	F1280_15024(RTCW(loc1), (EIF_CHARACTER_8) '\000', loc2);
	F255_11746(Current, loc1);
	RTLE;
}

/* {YY_BUFFER}.make_from_buffer */
void F255_11746 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	ti4_1 = F1280_15022(RTCW(arg1));
	*(EIF_INTEGER_32 *)(Current + O9526[dtype-254]) = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 2L));
	*(EIF_INTEGER_32 *)(Current + O9525[dtype-254]) = (EIF_INTEGER_32) *(EIF_INTEGER_32 *)(Current + O9526[dtype-254]);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
	*(EIF_INTEGER_32 *)(Current + O9530[dtype-254]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*(EIF_INTEGER_32 *)(Current + O9528[dtype-254]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*(EIF_INTEGER_32 *)(Current + O9529[dtype-254]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*(EIF_INTEGER_32 *)(Current + O9527[dtype-254]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*(EIF_BOOLEAN *)(Current + O9531[dtype-254]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTLE;
}

/* {YY_BUFFER}.set_position */
void F255_11757 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	*(EIF_INTEGER_32 *)(Current + O9527[dtype-254]) = (EIF_INTEGER_32) arg1;
	*(EIF_INTEGER_32 *)(Current + O9528[dtype-254]) = (EIF_INTEGER_32) arg2;
	*(EIF_INTEGER_32 *)(Current + O9529[dtype-254]) = (EIF_INTEGER_32) arg3;
	RTLE;
}

/* {YY_BUFFER}.set_index */
void F255_11758 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	*(EIF_INTEGER_32 *)(Current + O9530[Dtype(Current)-254]) = (EIF_INTEGER_32) arg1;
}

/* {YY_BUFFER}.fill */
void F255_11763 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_BOOLEAN *)(Current + O9536[Dtype(Current)-254]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
}

/* {YY_BUFFER}.flush */
void F255_11764 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	F1280_15024(RTCW(tr1), (EIF_CHARACTER_8) '\000', ((EIF_INTEGER_32) 1L));
	tr1 = *(EIF_REFERENCE *)(Current);
	F1280_15024(RTCW(tr1), (EIF_CHARACTER_8) '\000', ((EIF_INTEGER_32) 2L));
	*(EIF_INTEGER_32 *)(Current + O9525[dtype-254]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*(EIF_INTEGER_32 *)(Current + O9530[dtype-254]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*(EIF_INTEGER_32 *)(Current + O9528[dtype-254]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*(EIF_INTEGER_32 *)(Current + O9529[dtype-254]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*(EIF_INTEGER_32 *)(Current + O9527[dtype-254]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*(EIF_BOOLEAN *)(Current + O9531[dtype-254]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	*(EIF_BOOLEAN *)(Current + O9536[dtype-254]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTLE;
}

/* {YY_BUFFER}.compact_left */
void F255_11766 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	loc1 = *(EIF_INTEGER_32 *)(Current + O9525[dtype-254]);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + O9530[dtype-254]);
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 - ti4_1) + ((EIF_INTEGER_32) 1L));
	if ((EIF_BOOLEAN) (loc1 >= *(EIF_INTEGER_32 *)(Current + O9526[dtype-254]))) {
		F255_11769(Current);
	}
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O9530[dtype-254]) != ((EIF_INTEGER_32) 1L))) {
		tr1 = *(EIF_REFERENCE *)(Current);
		F1280_15028(RTCW(tr1), *(EIF_INTEGER_32 *)(Current + O9530[dtype-254]), ((EIF_INTEGER_32) 1L), (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 2L)));
		*(EIF_INTEGER_32 *)(Current + O9530[dtype-254]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		*(EIF_INTEGER_32 *)(Current + O9525[dtype-254]) = (EIF_INTEGER_32) loc1;
	}
	RTLE;
}

/* {YY_BUFFER}.new_default_buffer */
EIF_REFERENCE F255_11768 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(1);
	RTLR(0,tr1);
	RTLIU(1);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(1279, 0x01).id, 1279, _OBJSIZ_2_0_0_0_0_0_0_0_);
	F1280_15019(RTCW(tr1), arg1);
	RTLE;
	return (EIF_REFERENCE) tr1;
}

/* {YY_BUFFER}.resize */
void F255_11769 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O9526[dtype-254]) == ((EIF_INTEGER_32) 0L))) {
		ti4_1 = RTOUCB(EIF_INTEGER_32,193,F255_11770, (Current));
		*(EIF_INTEGER_32 *)(Current + O9526[dtype-254]) = (EIF_INTEGER_32) ti4_1;
	} else {
		(*(EIF_INTEGER_32 *)(Current + O9526[dtype-254])) *= ((EIF_INTEGER_32) 2L);
	}
	tr1 = *(EIF_REFERENCE *)(Current);
	ti4_1 = F1280_15022(RTCW(tr1));
	if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current + O9526[dtype-254]) + ((EIF_INTEGER_32) 2L)) > ti4_1)) {
		tr1 = *(EIF_REFERENCE *)(Current);
		F1280_15030(RTCW(tr1), (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current + O9526[dtype-254]) + ((EIF_INTEGER_32) 2L)));
	}
	RTLE;
}

/* {YY_BUFFER}.default_capacity */
static EIF_INTEGER_32 F255_11770_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 193)

	
	RTEV;
	RTOTP;
	Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 16384L);
	RTOTE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F255_11770 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,193,F255_11770_body,(Current));
}

void EIF_Minit1172 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
