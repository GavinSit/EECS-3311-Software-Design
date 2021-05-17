/*
 * Code for class C_DATE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "c_1040.h"
#include <string.h>
#include <time.h>
#include "eif_time.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F87_9969
static void inline_F87_9969 (EIF_POINTER arg1)
{
	#ifdef EIF_WINDOWS
    			static const uint64_t EPOCH = ((uint64_t) 116444736000000000ULL);

				SYSTEMTIME  system_time;
				FILETIME    file_time;
				uint64_t    time;
				struct timeval *tp = (struct timeval *) arg1;

				GetSystemTime (&system_time );
				SystemTimeToFileTime (&system_time, &file_time );
				time = ((uint64_t) file_time.dwLowDateTime );
				time += ((uint64_t) file_time.dwHighDateTime) << 32;

				tp->tv_sec  = (long) ((time - EPOCH) / 10000000L);
				tp->tv_usec = (long) (system_time.wMilliseconds * 1000);
			#else
				gettimeofday((struct timeval *) arg1, NULL);
			#endif
	;
}
#define INLINE_F87_9969
#endif
#ifndef INLINE_F87_9973
static void inline_F87_9973 (EIF_POINTER arg1, EIF_POINTER arg2)
{
	*(time_t *) arg2 = (((struct timeval *)arg1)->tv_sec);
	;
}
#define INLINE_F87_9973
#endif
#ifndef INLINE_F87_9977
static EIF_POINTER inline_F87_9977 (EIF_POINTER arg1)
{
	return (EIF_POINTER) (gmtime ((time_t *) arg1))
	;
}
#define INLINE_F87_9977
#endif
#ifndef INLINE_F87_9976
static EIF_POINTER inline_F87_9976 (EIF_POINTER arg1)
{
	return (EIF_POINTER) (localtime ((time_t *) arg1))
	;
}
#define INLINE_F87_9976
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {C_DATE}.default_create */
void F87_9957 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	F87_9960(Current);
	RTLE;
}

/* {C_DATE}.update */
void F87_9960 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_POINTER loc3 = (EIF_POINTER) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	ti4_1 = (EIF_INTEGER_32) sizeof(struct timeval);
	tp1 = malloc((size_t)ti4_1);
	loc1 = (EIF_POINTER) tp1;
	ti4_1 = (EIF_INTEGER_32) sizeof(time_t);
	tp1 = malloc((size_t)ti4_1);
	loc3 = (EIF_POINTER) tp1;
	inline_F87_9969(loc1);
	inline_F87_9973(loc1, loc3);
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_)) {
		loc2 = inline_F87_9977(loc3);
	} else {
		loc2 = inline_F87_9976(loc3);
	}
	tr1 = RTLNSMART(eif_new_type(1283, 1).id);
	ti4_1 = (EIF_INTEGER_32) sizeof(struct tm);
	F1284_4470(RTCW(tr1), loc2, ti4_1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	loc4 = (EIF_INTEGER_32) (((struct timeval *)loc1)->tv_usec);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc4 < ((EIF_INTEGER_32) 0L)) || (EIF_BOOLEAN) (loc4 > ((EIF_INTEGER_32) 999999L)))) {
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	} else {
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) = (EIF_INTEGER_32) loc4;
	}
	free(loc3);
	free(loc1);
	RTLE;
}

/* {C_DATE}.year_now */
EIF_INTEGER_32 F87_9961 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	tp1 = *(EIF_POINTER *)(RTCW(tr1)+ _PTROFF_0_1_0_1_0_0_);
	Result = (EIF_INTEGER_32) (((struct tm *)tp1)->tm_year);
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (((EIF_INTEGER_32) 1900L) + Result);
	RTLE;
	return Result;
}

/* {C_DATE}.month_now */
EIF_INTEGER_32 F87_9962 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	tp1 = *(EIF_POINTER *)(RTCW(tr1)+ _PTROFF_0_1_0_1_0_0_);
	Result = (EIF_INTEGER_32) (((struct tm *)tp1)->tm_mon);
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result + ((EIF_INTEGER_32) 1L));
	RTLE;
	return Result;
}

/* {C_DATE}.day_now */
EIF_INTEGER_32 F87_9963 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	tp1 = *(EIF_POINTER *)(RTCW(tr1)+ _PTROFF_0_1_0_1_0_0_);
	Result = (EIF_INTEGER_32) (((struct tm *)tp1)->tm_mday);
	RTLE;
	return Result;
}

/* {C_DATE}.hour_now */
EIF_INTEGER_32 F87_9964 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	tp1 = *(EIF_POINTER *)(RTCW(tr1)+ _PTROFF_0_1_0_1_0_0_);
	Result = (EIF_INTEGER_32) (((struct tm *)tp1)->tm_hour);
	RTLE;
	return Result;
}

/* {C_DATE}.minute_now */
EIF_INTEGER_32 F87_9965 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	tp1 = *(EIF_POINTER *)(RTCW(tr1)+ _PTROFF_0_1_0_1_0_0_);
	Result = (EIF_INTEGER_32) (((struct tm *)tp1)->tm_min);
	RTLE;
	return Result;
}

/* {C_DATE}.second_now */
EIF_INTEGER_32 F87_9966 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	tp1 = *(EIF_POINTER *)(RTCW(tr1)+ _PTROFF_0_1_0_1_0_0_);
	Result = (EIF_INTEGER_32) (((struct tm *)tp1)->tm_sec);
	if ((EIF_BOOLEAN) (Result > ((EIF_INTEGER_32) 59L))) {
		RTLE;
		return (EIF_INTEGER_32) ((EIF_INTEGER_32) 59L);
	}
	RTLE;
	return Result;
}

/* {C_DATE}.millisecond_now */
EIF_INTEGER_32 F87_9967 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) / ((EIF_INTEGER_32) 1000L));
}

/* {C_DATE}.gettimeofday */
void F87_9969 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	
	inline_F87_9969 ((EIF_POINTER) arg1);
}

/* {C_DATE}.timeval_structure_size */
EIF_INTEGER_32 F87_9970 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) sizeof(struct timeval);
	return Result;
}

/* {C_DATE}.time_t_structure_size */
EIF_INTEGER_32 F87_9971 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) sizeof(time_t);
	return Result;
}

/* {C_DATE}.tm_structure_size */
EIF_INTEGER_32 F87_9972 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) sizeof(struct tm);
	return Result;
}

/* {C_DATE}.get_time */
void F87_9973 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	
	inline_F87_9973 ((EIF_POINTER) arg1, (EIF_POINTER) arg2);
}

/* {C_DATE}.get_micro */
EIF_INTEGER_32 F87_9974 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) (((struct timeval *)arg1)->tv_usec);
	
	return Result;
}

/* {C_DATE}.localtime */
EIF_POINTER F87_9976 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = inline_F87_9976 ((EIF_POINTER) arg1);
	return Result;
}

/* {C_DATE}.gmtime */
EIF_POINTER F87_9977 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = inline_F87_9977 ((EIF_POINTER) arg1);
	return Result;
}

/* {C_DATE}.get_tm_year */
EIF_INTEGER_32 F87_9978 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) (((struct tm *)arg1)->tm_year);
	
	return Result;
}

/* {C_DATE}.get_tm_mon */
EIF_INTEGER_32 F87_9979 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) (((struct tm *)arg1)->tm_mon);
	
	return Result;
}

/* {C_DATE}.get_tm_mday */
EIF_INTEGER_32 F87_9980 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) (((struct tm *)arg1)->tm_mday);
	
	return Result;
}

/* {C_DATE}.get_tm_hour */
EIF_INTEGER_32 F87_9981 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) (((struct tm *)arg1)->tm_hour);
	
	return Result;
}

/* {C_DATE}.get_tm_min */
EIF_INTEGER_32 F87_9982 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) (((struct tm *)arg1)->tm_min);
	
	return Result;
}

/* {C_DATE}.get_tm_sec */
EIF_INTEGER_32 F87_9983 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) (((struct tm *)arg1)->tm_sec);
	
	return Result;
}

void EIF_Minit1040 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
