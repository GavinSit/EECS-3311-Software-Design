/*
 * Code for class MUTEX
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "mu178.h"
#include "eif_built_in.h"
#include <eif_threads.h>
#include "eif_threads.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F274_1129
static EIF_POINTER inline_F274_1129 (void)
{
	return eif_thr_thread_id();
	;
}
#define INLINE_F274_1129
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {MUTEX}.make */
void F1285_4708 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tp1 = (EIF_POINTER) eif_thr_mutex_create();
	*(EIF_POINTER *)(Current+ _PTROFF_0_0_0_0_0_1_) = (EIF_POINTER) tp1;
	RTLE;
}

/* {MUTEX}.is_set */
EIF_BOOLEAN F1285_4710 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	Result = '\01';
	{
		/* INLINED CODE (ANY.default_pointer) */
		tp1 = (EIF_POINTER)  0;
		/* END INLINED CODE */
	}
	if (!(EIF_BOOLEAN)(*(EIF_POINTER *)(Current+ _PTROFF_0_0_0_0_0_1_) != tp1)) {
		Result = (EIF_BOOLEAN) !(EIF_BOOLEAN) eif_builtin_PLATFORM_is_thread_capable;
	}
	RTLE;
	return Result;
}

/* {MUTEX}.lock */
void F1285_4711 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_0_0_0_0_1_);
	F1285_4720(Current, tp1);
	tp1 = inline_F274_1129();
	*(EIF_POINTER *)(Current+ _PTROFF_0_0_0_0_0_0_) = (EIF_POINTER) tp1;
	RTLE;
}

/* {MUTEX}.try_lock */
EIF_BOOLEAN F1285_4712 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_0_0_0_0_1_);
	Result = F1285_4722(Current, tp1);
	if (Result) {
		tp1 = inline_F274_1129();
		*(EIF_POINTER *)(Current+ _PTROFF_0_0_0_0_0_0_) = (EIF_POINTER) tp1;
	}
	RTLE;
	return Result;
}

/* {MUTEX}.unlock */
void F1285_4713 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	{
		/* INLINED CODE (ANY.default_pointer) */
		tp1 = (EIF_POINTER)  0;
		/* END INLINED CODE */
	}
	tp2 = tp1;
	*(EIF_POINTER *)(Current+ _PTROFF_0_0_0_0_0_0_) = (EIF_POINTER) tp2;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_0_0_0_0_1_);
	eif_thr_mutex_unlock(tp1);
	RTLE;
}

/* {MUTEX}.destroy */
void F1285_4714 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_0_0_0_0_1_);
	eif_thr_mutex_destroy(tp1);
	{
		/* INLINED CODE (ANY.default_pointer) */
		tp1 = (EIF_POINTER)  0;
		/* END INLINED CODE */
	}
	tp2 = tp1;
	*(EIF_POINTER *)(Current+ _PTROFF_0_0_0_0_0_1_) = (EIF_POINTER) tp2;
	RTLE;
}

/* {MUTEX}.dispose */
void F1285_4717 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tb1 = '\0';
	if (F1285_4710(Current)) {
		tb2 = '\01';
		{
			/* INLINED CODE (ANY.default_pointer) */
			tp1 = (EIF_POINTER)  0;
			/* END INLINED CODE */
		}
		if (!(EIF_BOOLEAN)(*(EIF_POINTER *)(Current+ _PTROFF_0_0_0_0_0_0_) == tp1)) {
			tb2 = (EIF_BOOLEAN)(*(EIF_POINTER *)(Current+ _PTROFF_0_0_0_0_0_0_) == inline_F274_1129());
		}
		tb1 = tb2;
	}
	if (tb1) {
		F1285_4714(Current);
	}
	RTLE;
}

/* {MUTEX}.eif_thr_mutex_create */
EIF_POINTER F1285_4719 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) eif_thr_mutex_create();
	
	return Result;
}

/* {MUTEX}.eif_thr_mutex_lock */
void F1285_4720 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	
	EIF_ENTER_C;eif_thr_mutex_lock(arg1);
	
	EIF_EXIT_C;
	RTGC;
}

/* {MUTEX}.eif_thr_mutex_unlock */
void F1285_4721 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	eif_thr_mutex_unlock(arg1);
	
}

/* {MUTEX}.eif_thr_mutex_trylock */
EIF_BOOLEAN F1285_4722 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	
	EIF_ENTER_C;Result = (EIF_BOOLEAN) EIF_TEST(eif_thr_mutex_trylock(arg1));
	
	EIF_EXIT_C;
	RTGC;
	return Result;
}

/* {MUTEX}.eif_thr_mutex_destroy */
void F1285_4723 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	eif_thr_mutex_destroy(arg1);
	
}

void EIF_Minit178 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
