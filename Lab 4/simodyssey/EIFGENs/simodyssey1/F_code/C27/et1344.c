/*
 * Code for class ETF_ROOT_INTERFACE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "et1344.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {ETF_ROOT_INTERFACE}.make */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
void F567_14313 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTED;
	EIF_BOOLEAN EIF_VOLATILE loc1 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE EIF_VOLATILE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE saved_except = (EIF_REFERENCE) 0;
	RTS_SDX;
	EIF_REFERENCE  EIF_VOLATILE tr1 = NULL;
	EIF_REFERENCE  EIF_VOLATILE tr2 = NULL;
	EIF_INTEGER_32  EIF_VOLATILE ti4_1;
	EIF_BOOLEAN  EIF_VOLATILE tb1;
	RTLD;
	RTXD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,loc2);
	RTLR(4,saved_except);
	RTLIU(5);
	RTXSLS;
	
	RTEV;
	RTGC;
	RTE_T
	F566_14270(Current);
	if (loc1) {
	} else {
		tb1 = '\01';
		if (!(EIF_BOOLEAN)(F568_14314(Current) == ((EIF_INTEGER_32) 2L))) {
			tb1 = (EIF_BOOLEAN)(F568_14314(Current) == ((EIF_INTEGER_32) 4L));
		}
		if (tb1) {
			F265_11870(Current);
		} else {
			tb1 = '\01';
			if (!(EIF_BOOLEAN)(F568_14314(Current) == ((EIF_INTEGER_32) 3L))) {
				tb1 = (EIF_BOOLEAN)(F568_14314(Current) == ((EIF_INTEGER_32) 5L));
			}
			if (tb1) {
				F265_11871(Current);
			}
		}
		switch (F568_14314(Current)) {
			case 1L:
				if ((EIF_BOOLEAN)(F565_2432(Current) == ((EIF_INTEGER_32) 0L))) {
					F568_14315(Current);
					F267_11877(Current);
					F267_11875(Current);
				} else {
					tr1 = RTOUCR(0,F1_24, (Current));
					tr2 = RTMS_EX_H("Error: current mode is ESpec test (no command line arguments).",62,1104404782);
					F125_145(RTCW(tr1), tr2);
				}
				break;
			case 2L:
			case 3L:
				if ((EIF_BOOLEAN)(F565_2432(Current) == ((EIF_INTEGER_32) 0L))) {
					F265_11874(Current);
				} else {
					tr1 = RTOUCR(0,F1_24, (Current));
					tr2 = RTMS_EX_H("Error: current mode is ETF GUI (no command line arguments).",59,595118382);
					F125_145(RTCW(tr1), tr2);
				}
				break;
			case 4L:
			case 5L:
				F566_14269(Current);
				break;
			default:
				break;
		}
	}
	RTE_E
	RTXSC;
	RTS_SRR
	tb1 = '\0';
	if (F463_1387(Current)) {
		ti4_1 = F463_1392(Current);
		tr1 = F463_1382(Current, ti4_1);
		loc2 = tr1;
		tb1 = EIF_TEST(loc2);
	}
	if (tb1) {
		tr1 = RTMS_EX_H("\012You quit the session. Bye ...\012",31,1878088714);
		F1_27(Current, tr1);
		loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		RTER;
	}
	/* NOTREACHED */
	RTE_EE
	RTEOK;
	RTLE;
}
#undef EIF_VOLATILE
#define EIF_VOLATILE

void EIF_Minit1344 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
