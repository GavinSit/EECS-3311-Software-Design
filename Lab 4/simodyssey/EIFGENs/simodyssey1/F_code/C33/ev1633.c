/*
 * Code for class EV_CELL
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1633.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_CELL}.is_empty */
EIF_BOOLEAN F1639_18407 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	Result = F1639_18409(Current);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) !Result;
	RTLE;
	return Result;
}

/* {EV_CELL}.extendible */
EIF_BOOLEAN F1639_18408 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	Result = F1639_18409(Current);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) !Result;
	RTLE;
	return Result;
}

/* {EV_CELL}.full */
EIF_BOOLEAN F1639_18409 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	Result = '\0';
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	tr1 = *(EIF_REFERENCE *)(RTCW(tr1) + O19844[Dtype(tr1)-1976]);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		Result = (EIF_BOOLEAN) !F1596_17746(Current);
	}
	RTLE;
	return Result;
}

/* {EV_CELL}.prunable */
EIF_BOOLEAN F1639_18410 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	Result = F1596_17746(Current);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) !Result;
	RTLE;
	return Result;
}

/* {EV_CELL}.readable */
EIF_BOOLEAN F1639_18412 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	Result = '\0';
	if (F1639_18409(Current)) {
		Result = (EIF_BOOLEAN) !F1596_17746(Current);
	}
	RTLE;
	return Result;
}

/* {EV_CELL}.count */
EIF_INTEGER_32 F1639_18413 (EIF_REFERENCE Current)
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
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	Result = F1977_24330(RTCW(tr1));
	RTLE;
	return Result;
}

/* {EV_CELL}.prune */
void F1639_18414 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	if ((EIF_BOOLEAN)(F1633_18330(Current) == arg1)) {
		F1639_18415(Current);
	}
	RTLE;
}

/* {EV_CELL}.wipe_out */
void F1639_18415 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	F1977_24339(RTCW(tr1), NULL);
	RTLE;
}

/* {EV_CELL}.linear_representation */
EIF_REFERENCE F1639_18416 (EIF_REFERENCE Current)
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
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,911,0xFF01,1631,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		loc1 = RTLNS(typres0.id, 911, _OBJSIZ_2_3_0_1_0_0_0_0_);
	}
	F912_3515(RTCW(loc1));
	if (F1639_18412(Current)) {
		tr1 = F1633_18330(Current);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2222[Dtype(RTCW(loc1))-818])(loc1, tr1);
	}
	RTLE;
	return (EIF_REFERENCE) loc1;
}

/* {EV_CELL}.implementation */
EIF_REFERENCE F1639_18417 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_3_);
}


/* {EV_CELL}.create_implementation */
void F1639_18418 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(1978, 0x01).id, 1978, _OBJSIZ_62_25_6_7_0_2_0_3_);
	F1979_24383(RTCW(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	RTLE;
}

void EIF_Minit1633 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
