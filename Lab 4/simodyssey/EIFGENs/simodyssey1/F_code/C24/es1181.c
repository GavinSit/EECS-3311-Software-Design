/*
 * Code for class ES_HTML_GEN_SUITE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "es1181.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {ES_HTML_GEN_SUITE}.make */
void F264_11865 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3, EIF_BOOLEAN arg4)
{
	GTCX
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(3,arg3);
	RTLIU(4);
	
	RTGC;
	F263_11837(Current, arg1, arg2, arg4);
	RTAR(Current, arg3);
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) arg3;
	F264_11866(Current);
	RTLE;
}

/* {ES_HTML_GEN_SUITE}.write_html_report */
void F264_11866 (EIF_REFERENCE Current)
{
	GTCX
	
	
	F263_11839(Current, *(EIF_REFERENCE *)(Current + _REFACS_1_));
}

/* {ES_HTML_GEN_SUITE}.get_statistics */
void F264_11867 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTCFDT;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLR(4,loc3);
	RTLR(5,loc4);
	RTLIU(6);
	
	RTGC;
	RTCT0("attached test_classes as tc", EX_CHECK);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	loc2 = tr1;
	if ((EIF_TRUE)) {
		RTCK0;
	} else {
		RTCF0;
	}
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_1_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_1_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_1_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_1_0_3_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_1_0_4_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_1_0_5_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	F912_3534(loc2);
	for (;;) {
		tb1 = *(EIF_BOOLEAN *)(loc2+ _CHROFF_2_2_);
		if (tb1) break;
		loc1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2258[Dtype(loc2)-818])(loc2);
		RTCT0("attached one_test", EX_CHECK);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		tr1 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_2_);
		loc3 = tr1;
		if (EIF_TEST(loc3)) {
			F912_3534(loc3);
			for (;;) {
				tb2 = *(EIF_BOOLEAN *)(loc3+ _CHROFF_2_2_);
				if (tb2) break;
				RTCT0("attached cases1.item as item1", EX_CHECK);
				tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2258[Dtype(loc3)-818])(loc3);
				loc4 = tr1;
				if ((EIF_TRUE)) {
					RTCK0;
				} else {
					RTCF0;
				}
				tb3 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R11158[Dtype(loc4)-464])(loc4);
				if (tb3) {
					tb3 = *(EIF_BOOLEAN *)(loc4 + O11161[Dtype(loc4)-463]);
					if (tb3) {
						(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_1_0_3_))++;
						(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_1_0_5_))++;
					}
					(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_1_0_2_))++;
				} else {
					tb3 = *(EIF_BOOLEAN *)(loc4 + O11161[Dtype(loc4)-463]);
					if (tb3) {
						(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_1_0_1_))++;
						(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_1_0_5_))++;
					}
					(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_1_0_0_))++;
				}
				(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_1_0_4_))++;
				F912_3536(loc3);
			}
		}
		F912_3536(loc2);
	}
	RTLE;
}

/* {ES_HTML_GEN_SUITE}.write_summary_details */
void F264_11868 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCFDT;
	RTLD;
	
	RTLI(9);
	RTLR(0,loc3);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc4);
	RTLR(4,loc1);
	RTLR(5,tr2);
	RTLR(6,loc5);
	RTLR(7,loc6);
	RTLR(8,loc7);
	RTLIU(9);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	loc3 = tr1;
	if ((EIF_TRUE)) {
		loc4 = F912_3522(loc3);
		loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		for (;;) {
			tb1 = F1078_4353(loc4);
			if (tb1) break;
			loc1 = F1078_4352(loc4);
			loc2++;
			tr1 = F263_11855(Current);
			tr2 = RTMS_EX_H("<tr><td bgcolor=\"#008080\" align=\"center\"><font color=\"#FFCC00\"><b>Test",70,1820928116);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3563[Dtype(RTCW(tr1))-1291])(tr1, tr2);
			tr1 = F263_11855(Current);
			F1292_5179(RTCW(tr1), loc2);
			tr1 = F263_11855(Current);
			tr2 = RTMS_EX_H("</b></font></td>\012<td bgcolor=\"#008080\" align=\"center\" colspan=\"2\"><font color=\"#FFCC00\">",88,814849086);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3563[Dtype(RTCW(tr1))-1291])(tr1, tr2);
			if ((EIF_BOOLEAN)(loc1 != NULL)) {
				tr1 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_3_);
				loc5 = tr1;
				if (EIF_TEST(loc5)) {
					tr1 = F263_11855(Current);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3563[Dtype(RTCW(tr1))-1291])(tr1, loc5);
				}
				tr1 = F263_11855(Current);
				tr2 = RTMS_EX_H("</font></td></tr>",17,624609342);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3563[Dtype(RTCW(tr1))-1291])(tr1, tr2);
				tr1 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_2_);
				loc6 = tr1;
				if (EIF_TEST(loc6)) {
					loc7 = F912_3522(loc6);
					for (;;) {
						tb2 = F1078_4353(loc7);
						if (tb2) break;
						tr1 = F1078_4352(loc7);
						F263_11852(Current, tr1);
						F1078_4355(loc7);
					}
				}
			}
			F1078_4355(loc4);
		}
	}
	RTLE;
}

void EIF_Minit1181 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
