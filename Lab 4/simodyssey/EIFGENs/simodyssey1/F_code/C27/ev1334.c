/*
 * Code for class EV_APPLICATION_HANDLER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1334.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_APPLICATION_HANDLER}.make */
void F515_14180 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_BOOLEAN uarg1;
	EIF_BOOLEAN uarg;
	RTS_SD;
	RTS_SDC;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	uarg1 = (EIF_BOOLEAN) RTS_OU (arg1);
	uarg = uarg1;
	if (uarg) {
		RTS_RC;
		RTS_RS (arg1);
		RTS_RW;
	}
	if (RTS_CI (EIF_TRUE, arg1)) {
		RTS_BI (arg1);
		tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_1_);
		RTS_EI;
	} else {
		RTS_AC (0, arg1);
		RTS_CALL (NULL, eif_sca8, 0 + _REFACS_1_, &(tr1));
	}
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	if (uarg) {
		RTS_RD;
	}
	RTLE;
}

/* {EV_APPLICATION_HANDLER}.launch */
void F515_14181 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current);
	for (;;) {
		if (F515_14183(Current, loc1)) break;
		F515_14182(Current, loc1);
	}
	RTLE;
}

/* {EV_APPLICATION_HANDLER}.process_application_event_queue */
void F515_14182 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_BOOLEAN uarg1;
	EIF_BOOLEAN uarg;
	RTS_SD;
	RTS_SDC;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	uarg1 = (EIF_BOOLEAN) RTS_OU (arg1);
	uarg = uarg1;
	if (uarg) {
		RTS_RC;
		RTS_RS (arg1);
		RTS_RW;
	}
	if (RTS_CI (EIF_FALSE, arg1)) {
		RTS_BI (arg1);
		F1714_19283(RTCW(arg1), (EIF_BOOLEAN) 1);
		RTS_EI;
	} else {
		RTS_AC (1, arg1);
		RTS_AA ((EIF_BOOLEAN) 1, it_b, SK_BOOL, 1);
		RTS_CALL (F1714_19283, eif_scr9, 0, NULL);
	}
	if (uarg) {
		RTS_RD;
	}
	RTLE;
}

/* {EV_APPLICATION_HANDLER}.is_application_destroyed */
EIF_BOOLEAN F515_14183 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_BOOLEAN uarg1;
	EIF_BOOLEAN uarg;
	RTS_SD;
	RTS_SDC;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	uarg1 = (EIF_BOOLEAN) RTS_OU (arg1);
	uarg = uarg1;
	if (uarg) {
		RTS_RC;
		RTS_RS (arg1);
		RTS_RW;
	}
	if (RTS_CI (EIF_TRUE, arg1)) {
		RTS_BI (arg1);
		tb1 = F1696_18975(RTCW(arg1));
		RTS_EI;
	} else {
		RTS_AC (0, arg1);
		RTS_CALL (F1696_18975, eif_scr4, 0, &(tb1));
	}
	if (uarg) {
		RTS_RD;
	}
	RTLE;
	return (EIF_BOOLEAN) tb1;
}

void EIF_Minit1334 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
