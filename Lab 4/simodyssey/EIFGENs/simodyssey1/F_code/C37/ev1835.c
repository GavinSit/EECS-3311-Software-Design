/*
 * Code for class EV_SHARED_IMAGE_LIST_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1835.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_SHARED_IMAGE_LIST_IMP}.get_imagelist_with_size */
EIF_REFERENCE F1852_20974 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
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
	tr1 = RTOUCR(481,F1852_20982, (Current));
	Result = F1852_20980(Current, tr1, arg1, arg2);
	RTLE;
	return Result;
}

/* {EV_SHARED_IMAGE_LIST_IMP}.get_toolbar_default_imagelist_with_size */
EIF_REFERENCE F1852_20976 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
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
	tr1 = RTOUCR(482,F1852_20983, (Current));
	Result = F1852_20980(Current, tr1, arg1, arg2);
	RTLE;
	return Result;
}

/* {EV_SHARED_IMAGE_LIST_IMP}.destroy_toolbar_default_imagelist */
void F1852_20977 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	tr1 = RTOUCR(482,F1852_20983, (Current));
	F1852_20981(Current, tr1, arg1);
	RTLE;
}

/* {EV_SHARED_IMAGE_LIST_IMP}.get_toolbar_hot_imagelist_with_size */
EIF_REFERENCE F1852_20978 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
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
	tr1 = RTOUCR(483,F1852_20984, (Current));
	Result = F1852_20980(Current, tr1, arg1, arg2);
	RTLE;
	return Result;
}

/* {EV_SHARED_IMAGE_LIST_IMP}.destroy_toolbar_hot_imagelist */
void F1852_20979 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	tr1 = RTOUCR(483,F1852_20984, (Current));
	F1852_20981(Current, tr1, arg1);
	RTLE;
}

/* {EV_SHARED_IMAGE_LIST_IMP}.get_specific_imagelist_with_size */
EIF_REFERENCE F1852_20980 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,loc2);
	RTLR(2,loc1);
	RTLIU(3);
	
	RTGC;
	F951_4104(RTCW(arg1));
	for (;;) {
		tb1 = '\01';
		if (!(EIF_BOOLEAN)(loc2 != NULL)) {
			tb2 = F882_3332(RTCW(arg1));
			tb1 = tb2;
		}
		if (tb1) break;
		loc1 = F951_4078(RTCW(arg1));
		tb2 = '\0';
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_4_3_0_4_);
		if ((EIF_BOOLEAN)(ti4_1 == arg2)) {
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_4_3_0_4_);
			tb2 = (EIF_BOOLEAN)(ti4_1 == arg2);
		}
		if (tb2) {
			loc2 = (EIF_REFERENCE) loc1;
			F519_14211(RTCW(loc2));
		}
		F951_4106(RTCW(arg1));
	}
	if ((EIF_BOOLEAN)(loc2 == NULL)) {
		loc2 = RTLNS(eif_new_type(1299, 0x01).id, 1299, _OBJSIZ_4_3_0_6_0_1_0_0_);
		F1300_15153(RTCW(loc2), arg2, arg3);
		F519_14209(RTCW(loc2));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2222[Dtype(RTCW(arg1))-818])(arg1, loc2);
	}
	RTLE;
	return (EIF_REFERENCE) loc2;
}

/* {EV_SHARED_IMAGE_LIST_IMP}.destroy_specific_imagelist */
void F1852_20981 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg2);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	F519_14210(RTCW(arg2));
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_4_3_0_0_);
	if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L))) {
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2225[Dtype(RTCW(arg1))-950])(arg1, arg2);
		F519_14210(RTCW(arg2));
	}
	RTLE;
}

/* {EV_SHARED_IMAGE_LIST_IMP}.classic_imagelists */
static EIF_REFERENCE F1852_20982_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(481)

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEV;
	RTGC;
	RTOTP;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,950,0xFF01,1299,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0.id, 950, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	F951_4073(RTCW(tr1), ((EIF_INTEGER_32) 2L));
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1852_20982 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(481,F1852_20982_body,(Current));
}

/* {EV_SHARED_IMAGE_LIST_IMP}.toolbar_default_imagelists */
static EIF_REFERENCE F1852_20983_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(482)

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEV;
	RTGC;
	RTOTP;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,950,0xFF01,1299,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0.id, 950, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	F951_4073(RTCW(tr1), ((EIF_INTEGER_32) 2L));
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1852_20983 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(482,F1852_20983_body,(Current));
}

/* {EV_SHARED_IMAGE_LIST_IMP}.toolbar_hot_imagelists */
static EIF_REFERENCE F1852_20984_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(483)

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEV;
	RTGC;
	RTOTP;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,950,0xFF01,1299,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0.id, 950, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	F951_4073(RTCW(tr1), ((EIF_INTEGER_32) 2L));
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1852_20984 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(483,F1852_20984_body,(Current));
}

void EIF_Minit1835 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
