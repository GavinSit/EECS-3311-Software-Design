/*
 * Code for class ES_HTML_GEN
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "es1180.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {ES_HTML_GEN}.make_gen */
void F263_11837 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_BOOLEAN arg3)
{
	GTCX
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg2);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTGC;
	RTAR(Current, arg2);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) arg2;
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_4_0_) = (EIF_BOOLEAN) arg3;
	RTLE;
}

/* {ES_HTML_GEN}.write_summary */
void F263_11839 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	F264_11867(Current);
	tr1 = RTLNSMART(eif_new_type(1291, 1).id);
	F1291_4901(RTCW(tr1), arg1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
	F1291_4972(RTCV(F263_11855(Current)));
	F263_11841(Current);
	F264_11868(Current);
	F263_11842(Current);
	F1291_4988(RTCV(F263_11855(Current)));
	RTLE;
}

/* {ES_HTML_GEN}.write_summary_start */
void F263_11841 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,loc1);
	RTLR(4,loc2);
	RTLR(5,loc3);
	RTLIU(6);
	
	RTGC;
	tr1 = F263_11855(Current);
	tr2 = RTMS_EX_H("<html>\012<head>\012<base target=\"main\">\012</head>\012",43,320077578);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3563[Dtype(RTCW(tr1))-1291])(tr1, tr2);
	tr1 = F263_11855(Current);
	tr2 = RTMS_EX_H("<body>\012",7,2013467146);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3563[Dtype(RTCW(tr1))-1291])(tr1, tr2);
	loc1 = RTLNS(eif_new_type(1878, 0x01).id, 1878, _OBJSIZ_0_0_0_1_0_0_0_0_);
	F1879_21556(RTCW(loc1));
	loc2 = RTLNS(eif_new_type(1876, 0x01).id, 1876, _OBJSIZ_0_0_0_1_0_0_0_1_);
	F1877_21519(RTCW(loc2));
	tr1 = F263_11855(Current);
	tr2 = RTMS_EX_H("<p align=\"center\"><b>Test Run:",30,572081466);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3562[Dtype(RTCW(tr1))-1291])(tr1, tr2);
	tr1 = F263_11855(Current);
	tr2 = F1879_21592(RTCW(loc1));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3563[Dtype(RTCW(tr1))-1291])(tr1, tr2);
	tr1 = F263_11855(Current);
	tr2 = RTMS_EX_H("   ",3,2105376);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3562[Dtype(RTCW(tr1))-1291])(tr1, tr2);
	tr1 = F263_11855(Current);
	tr2 = F1877_21544(RTCW(loc2));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3562[Dtype(RTCW(tr1))-1291])(tr1, tr2);
	tr1 = F263_11855(Current);
	tr2 = RTMS_EX_H("</b></p>",8,1250314558);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3562[Dtype(RTCW(tr1))-1291])(tr1, tr2);
	tr1 = F263_11855(Current);
	tr2 = RTMS_EX_H("<font color=\"blue\">",19,1460859454);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3563[Dtype(RTCW(tr1))-1291])(tr1, tr2);
	tr1 = F263_11855(Current);
	tr2 = RTMS_EX_H("<H2  align=\"center\">",20,2072449598);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3563[Dtype(RTCW(tr1))-1291])(tr1, tr2);
	RTCT0("attached test_name as tn", EX_CHECK);
	tr1 = *(EIF_REFERENCE *)(Current);
	loc3 = tr1;
	if ((EIF_TRUE)) {
		RTCK0;
	} else {
		RTCF0;
	}
	tr1 = F263_11855(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3563[Dtype(RTCW(tr1))-1291])(tr1, loc3);
	tr1 = F263_11855(Current);
	tr2 = RTMS_EX_H("</H2>",5,793721406);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3563[Dtype(RTCW(tr1))-1291])(tr1, tr2);
	tr1 = F263_11855(Current);
	tr2 = RTMS_EX_H("</font>",7,2096970302);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3563[Dtype(RTCW(tr1))-1291])(tr1, tr2);
	tr1 = F263_11855(Current);
	tr2 = RTMS_EX_H("<p align=\"center\">Note: * indicates a violation test case</p>",61,584390974);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3563[Dtype(RTCW(tr1))-1291])(tr1, tr2);
	tr1 = F263_11855(Current);
	tr2 = RTMS_EX_H("\012",1,10);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3563[Dtype(RTCW(tr1))-1291])(tr1, tr2);
	tr1 = F263_11855(Current);
	tr2 = RTMS_EX_H("<table border=1 align=\"center\">",31,968239422);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3563[Dtype(RTCW(tr1))-1291])(tr1, tr2);
	tr1 = F263_11855(Current);
	tr2 = RTMS_EX_H("\012",1,10);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3563[Dtype(RTCW(tr1))-1291])(tr1, tr2);
	if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_1_0_4_) > ((EIF_INTEGER_32) 0L))) {
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_1_0_5_) == *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_1_0_4_))) {
			tr1 = F263_11855(Current);
			tr2 = RTMS_EX_H("<tr><td bgcolor=\"#00FF00\" colspan=\"3\">&nbsp;</td></tr>",54,2143633982);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3563[Dtype(RTCW(tr1))-1291])(tr1, tr2);
			tr1 = F263_11855(Current);
			tr2 = RTMS_EX_H("<tr><td align=\"center\" colspan=\"3\">",35,2085210430);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3563[Dtype(RTCW(tr1))-1291])(tr1, tr2);
			tr1 = F263_11855(Current);
			tr2 = RTMS_EX_H("PASSED (",8,1847720744);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3563[Dtype(RTCW(tr1))-1291])(tr1, tr2);
			tr1 = F263_11855(Current);
			F1292_5179(RTCW(tr1), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_1_0_5_));
			tr1 = F263_11855(Current);
			tr2 = RTMS_EX_H(" out of ",8,816120864);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3563[Dtype(RTCW(tr1))-1291])(tr1, tr2);
			tr1 = F263_11855(Current);
			F1292_5179(RTCW(tr1), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_1_0_4_));
		} else {
			tr1 = F263_11855(Current);
			tr2 = RTMS_EX_H("<tr><td bgcolor=\"#FF0000\" colspan=\"3\">&nbsp;</td></tr>",54,780514878);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3563[Dtype(RTCW(tr1))-1291])(tr1, tr2);
			tr1 = F263_11855(Current);
			tr2 = RTMS_EX_H("<tr><td align=\"center\" colspan=\"3\">",35,2085210430);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3563[Dtype(RTCW(tr1))-1291])(tr1, tr2);
			tr1 = F263_11855(Current);
			tr2 = RTMS_EX_H("FAILED (",8,1825702184);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3563[Dtype(RTCW(tr1))-1291])(tr1, tr2);
			tr1 = F263_11855(Current);
			F1292_5179(RTCW(tr1), (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_1_0_4_) - *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_1_0_5_)));
			tr1 = F263_11855(Current);
			tr2 = RTMS_EX_H(" failed & ",10,651154208);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3563[Dtype(RTCW(tr1))-1291])(tr1, tr2);
			tr1 = F263_11855(Current);
			F1292_5179(RTCW(tr1), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_1_0_5_));
			tr1 = F263_11855(Current);
			tr2 = RTMS_EX_H(" passed out of ",15,466756896);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3563[Dtype(RTCW(tr1))-1291])(tr1, tr2);
			tr1 = F263_11855(Current);
			F1292_5179(RTCW(tr1), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_1_0_4_));
		}
		tr1 = F263_11855(Current);
		tr2 = RTMS_EX_H(")</td></tr>\012",12,297132298);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3563[Dtype(RTCW(tr1))-1291])(tr1, tr2);
	}
	tr1 = F263_11855(Current);
	tr2 = RTMS_EX_H("<tr><td align=\"center\" bgcolor=\"#000080\"><font color=\"#FFCC00\">",63,2141862718);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3563[Dtype(RTCW(tr1))-1291])(tr1, tr2);
	tr1 = F263_11855(Current);
	tr2 = RTMS_EX_H("<b>Case Type</b></font></td>",28,616182846);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3563[Dtype(RTCW(tr1))-1291])(tr1, tr2);
	tr1 = F263_11855(Current);
	tr2 = RTMS_EX_H("\012",1,10);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3563[Dtype(RTCW(tr1))-1291])(tr1, tr2);
	tr1 = F263_11855(Current);
	tr2 = RTMS_EX_H("<td align=\"center\" bgcolor=\"#000080\"><font color=\"#FFCC00\">",59,35017278);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3563[Dtype(RTCW(tr1))-1291])(tr1, tr2);
	tr1 = F263_11855(Current);
	tr2 = RTMS_EX_H("<b>Passed</b></font></td>",25,201947710);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3563[Dtype(RTCW(tr1))-1291])(tr1, tr2);
	tr1 = F263_11855(Current);
	tr2 = RTMS_EX_H("\012",1,10);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3563[Dtype(RTCW(tr1))-1291])(tr1, tr2);
	tr1 = F263_11855(Current);
	tr2 = RTMS_EX_H("<td align=\"center\" bgcolor=\"#000080\"><font color=\"#FFCC00\">",59,35017278);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3563[Dtype(RTCW(tr1))-1291])(tr1, tr2);
	tr1 = F263_11855(Current);
	tr2 = RTMS_EX_H("<b>Total</b></font></td></tr>",29,56921918);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3563[Dtype(RTCW(tr1))-1291])(tr1, tr2);
	tr1 = F263_11855(Current);
	tr2 = RTMS_EX_H("\012",1,10);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3563[Dtype(RTCW(tr1))-1291])(tr1, tr2);
	tr1 = RTMS_EX_H("Violation",9,854041710);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_1_0_3_);
	ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_1_0_2_);
	F263_11845(Current, tr1, ti4_1, ti4_2);
	tr1 = RTMS_EX_H("Boolean",7,896881518);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_1_0_1_);
	ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_1_0_0_);
	F263_11845(Current, tr1, ti4_1, ti4_2);
	tr1 = RTMS_EX_H("All Cases",9,1933345907);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_1_0_5_);
	ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_1_0_4_);
	F263_11845(Current, tr1, ti4_1, ti4_2);
	tr1 = F263_11855(Current);
	tr2 = RTMS_EX_H("<tr><td align=\"center\" bgcolor=\"#000080\"><font color=\"#FFCC00\">",63,2141862718);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3563[Dtype(RTCW(tr1))-1291])(tr1, tr2);
	tr1 = F263_11855(Current);
	tr2 = RTMS_EX_H("<b>State</b></font></td>",24,1358843198);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3563[Dtype(RTCW(tr1))-1291])(tr1, tr2);
	tr1 = F263_11855(Current);
	tr2 = RTMS_EX_H("\012",1,10);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3563[Dtype(RTCW(tr1))-1291])(tr1, tr2);
	tr1 = F263_11855(Current);
	tr2 = RTMS_EX_H("<td align=\"center\" bgcolor=\"#000080\"><font color=\"#FFCC00\">",59,35017278);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3563[Dtype(RTCW(tr1))-1291])(tr1, tr2);
	tr1 = F263_11855(Current);
	tr2 = RTMS_EX_H("<b>Contract Violation</b></font></td>",37,761447230);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3563[Dtype(RTCW(tr1))-1291])(tr1, tr2);
	tr1 = F263_11855(Current);
	tr2 = RTMS_EX_H("\012",1,10);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3563[Dtype(RTCW(tr1))-1291])(tr1, tr2);
	tr1 = F263_11855(Current);
	tr2 = RTMS_EX_H("<td align=\"center\" bgcolor=\"#000080\"><font color=\"#FFCC00\">",59,35017278);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3563[Dtype(RTCW(tr1))-1291])(tr1, tr2);
	tr1 = F263_11855(Current);
	tr2 = RTMS_EX_H("<b>Test Name</b></font></td></tr>",33,1031722558);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3563[Dtype(RTCW(tr1))-1291])(tr1, tr2);
	tr1 = F263_11855(Current);
	tr2 = RTMS_EX_H("\012",1,10);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3563[Dtype(RTCW(tr1))-1291])(tr1, tr2);
	RTLE;
}

/* {ES_HTML_GEN}.write_summary_end */
void F263_11842 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTGC;
	tr1 = F263_11855(Current);
	tr2 = RTMS_EX_H("</table>",8,1927501886);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3563[Dtype(RTCW(tr1))-1291])(tr1, tr2);
	tr1 = F263_11855(Current);
	tr2 = RTMS_EX_H("</body>\012",8,1926616330);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3563[Dtype(RTCW(tr1))-1291])(tr1, tr2);
	tr1 = F263_11855(Current);
	tr2 = RTMS_EX_H("</html>\012",8,2088594186);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3563[Dtype(RTCW(tr1))-1291])(tr1, tr2);
	RTLE;
}

/* {ES_HTML_GEN}.write_statistics */
void F263_11845 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,arg1);
	RTLIU(4);
	
	RTGC;
	tr1 = F263_11855(Current);
	tr2 = RTMS_EX_H("<tr>",4,1014264382);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3563[Dtype(RTCW(tr1))-1291])(tr1, tr2);
	tr1 = F263_11855(Current);
	tr2 = RTMS_EX_H("<td align=\"center\"><font color=\"blue\"><b>",41,228391998);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3563[Dtype(RTCW(tr1))-1291])(tr1, tr2);
	tr1 = F263_11855(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3563[Dtype(RTCW(tr1))-1291])(tr1, arg1);
	tr1 = F263_11855(Current);
	tr2 = RTMS_EX_H("</b></font></td>\012",17,38666506);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3563[Dtype(RTCW(tr1))-1291])(tr1, tr2);
	tr1 = F263_11855(Current);
	tr2 = RTMS_EX_H("<td align=\"center\">",19,1780042814);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3563[Dtype(RTCW(tr1))-1291])(tr1, tr2);
	tr1 = F263_11855(Current);
	F1292_5179(RTCW(tr1), arg2);
	tr1 = F263_11855(Current);
	tr2 = RTMS_EX_H("</td>",5,796617790);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3563[Dtype(RTCW(tr1))-1291])(tr1, tr2);
	tr1 = F263_11855(Current);
	tr2 = RTMS_EX_H("<td align=\"center\">",19,1780042814);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3563[Dtype(RTCW(tr1))-1291])(tr1, tr2);
	tr1 = F263_11855(Current);
	F1292_5179(RTCW(tr1), arg3);
	tr1 = F263_11855(Current);
	tr2 = RTMS_EX_H("</td>",5,796617790);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3563[Dtype(RTCW(tr1))-1291])(tr1, tr2);
	tr1 = F263_11855(Current);
	tr2 = RTMS_EX_H("</tr>\012",6,2071969802);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3563[Dtype(RTCW(tr1))-1291])(tr1, tr2);
	RTLE;
}

/* {ES_HTML_GEN}.write_passed_case */
void F263_11847 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,arg1);
	RTLR(4,loc1);
	RTLIU(5);
	
	RTGC;
	tr1 = F263_11855(Current);
	tr2 = RTMS_EX_H("<td><font color=\"green\"><b>PASSED</b></font></td>\012",50,747275018);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3563[Dtype(RTCW(tr1))-1291])(tr1, tr2);
	tr1 = F263_11855(Current);
	tr2 = RTMS_EX_H("<td align=\"center\">",19,1780042814);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3563[Dtype(RTCW(tr1))-1291])(tr1, tr2);
	tb1 = *(EIF_BOOLEAN *)(RTCW(arg1) + O11162[Dtype(arg1)-463]);
	if (tb1) {
		tr1 = F263_11855(Current);
		tr2 = RTMS_EX_H("<font color=\"blue\">CAUGHT</font>",32,816111422);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3563[Dtype(RTCW(tr1))-1291])(tr1, tr2);
	} else {
		tr1 = F263_11855(Current);
		tr2 = RTMS_EX_H("NONE",4,1313820229);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3563[Dtype(RTCW(tr1))-1291])(tr1, tr2);
	}
	tr1 = F263_11855(Current);
	tr2 = RTMS_EX_H("</td>\012",6,2071052298);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3563[Dtype(RTCW(tr1))-1291])(tr1, tr2);
	tr1 = F263_11855(Current);
	tr2 = RTMS_EX_H("<td>",4,1014260798);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3563[Dtype(RTCW(tr1))-1291])(tr1, tr2);
	loc1 = arg1;
	loc1 = RTRV(eif_new_type(464, 0x01),loc1);
	if (EIF_TEST(loc1)) {
		tr1 = F263_11855(Current);
		tr2 = RTMS_EX_H("*",1,42);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3563[Dtype(RTCW(tr1))-1291])(tr1, tr2);
	}
	tr1 = F263_11855(Current);
	tr2 = *(EIF_REFERENCE *)(RTCW(arg1));
	tr2 = F263_11851(Current, tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3563[Dtype(RTCW(tr1))-1291])(tr1, tr2);
	tr1 = F263_11855(Current);
	tr2 = RTMS_EX_H("</td>\012",6,2071052298);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3563[Dtype(RTCW(tr1))-1291])(tr1, tr2);
	RTLE;
}

/* {ES_HTML_GEN}.write_failed_case */
void F263_11848 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(10);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,arg1);
	RTLR(4,loc2);
	RTLR(5,tr3);
	RTLR(6,loc3);
	RTLR(7,loc1);
	RTLR(8,loc4);
	RTLR(9,loc5);
	RTLIU(10);
	
	RTGC;
	tr1 = F263_11855(Current);
	tr2 = RTMS_EX_H("<td><font color=\"red\"><b>FAILED</b></font></td>\012",48,121789706);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3563[Dtype(RTCW(tr1))-1291])(tr1, tr2);
	tr1 = F263_11855(Current);
	tr2 = RTMS_EX_H("<td align=\"center\">",19,1780042814);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3563[Dtype(RTCW(tr1))-1291])(tr1, tr2);
	tb1 = *(EIF_BOOLEAN *)(RTCW(arg1) + O11162[Dtype(arg1)-463]);
	if (tb1) {
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_4_0_)) {
			RTCT0("attached one_case.meaning (one_case.violation_type) as m", EX_CHECK);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O11166[Dtype(arg1)-463]);
			tr1 = F463_1382(RTCW(arg1), ti4_1);
			loc2 = tr1;
			if (EIF_TEST(loc2)) {
				RTCK0;
			} else {
				RTCF0;
			}
			tr1 = F263_11855(Current);
			tr2 = RTMS_EX_H("<font color=\"blue\">",19,1460859454);
			tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(tr2)-1560])(tr2, loc2);
			tr3 = RTMS_EX_H("</font>",7,2096970302);
			tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr2))-1560])(tr2, tr3);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3563[Dtype(RTCW(tr1))-1291])(tr1, tr2);
			tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_2_);
			loc3 = tr1;
			if ((EIF_TRUE)) {
				loc1 = F1_14(loc3);
				tr1 = RTMS_EX_H("\012",1,10);
				tr2 = RTMS_EX_H("<br>",4,1013084734);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R4810[Dtype(RTCW(loc1))-1560])(loc1, tr1, tr2);
				tr1 = F263_11855(Current);
				tr2 = RTMS_EX_H("<p align=\"left\">",16,528720446);
				tr3 = RTMS_EX_H("<font color=\"blue\" face=\"Courier\">",34,1754199358);
				tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(tr2)-1560])(tr2, tr3);
				tr3 = RTMS_EX_H("<font size=\"1\">",15,526120254);
				tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr2))-1560])(tr2, tr3);
				tr3 = RTMS_EX_H("\012",1,10);
				tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr2))-1560])(tr2, tr3);
				tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr2))-1560])(tr2, loc1);
				tr3 = RTMS_EX_H("\012",1,10);
				tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr2))-1560])(tr2, tr3);
				tr3 = RTMS_EX_H("</font>",7,2096970302);
				tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr2))-1560])(tr2, tr3);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3563[Dtype(RTCW(tr1))-1291])(tr1, tr2);
			}
		} else {
			RTCT0("attached one_case.meaning (one_case.violation_type) as m", EX_CHECK);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O11166[Dtype(arg1)-463]);
			tr1 = F463_1382(RTCW(arg1), ti4_1);
			loc4 = tr1;
			if (EIF_TEST(loc4)) {
				RTCK0;
			} else {
				RTCF0;
			}
			tr1 = F263_11855(Current);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3563[Dtype(RTCW(tr1))-1291])(tr1, loc4);
		}
	} else {
		tr1 = F263_11855(Current);
		tr2 = RTMS_EX_H("NONE",4,1313820229);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3563[Dtype(RTCW(tr1))-1291])(tr1, tr2);
	}
	tr1 = F263_11855(Current);
	tr2 = RTMS_EX_H("</td>\012",6,2071052298);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3563[Dtype(RTCW(tr1))-1291])(tr1, tr2);
	tr1 = F263_11855(Current);
	tr2 = RTMS_EX_H("<td>",4,1014260798);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3563[Dtype(RTCW(tr1))-1291])(tr1, tr2);
	loc5 = arg1;
	loc5 = RTRV(eif_new_type(464, 0x01),loc5);
	if (EIF_TEST(loc5)) {
		tr1 = F263_11855(Current);
		tr2 = RTMS_EX_H("*",1,42);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3563[Dtype(RTCW(tr1))-1291])(tr1, tr2);
	}
	tr1 = F263_11855(Current);
	tr2 = *(EIF_REFERENCE *)(RTCW(arg1));
	tr2 = F263_11851(Current, tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3563[Dtype(RTCW(tr1))-1291])(tr1, tr2);
	tr1 = F263_11855(Current);
	tr2 = RTMS_EX_H("</td>\012",6,2071052298);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3563[Dtype(RTCW(tr1))-1291])(tr1, tr2);
	RTLE;
}

/* {ES_HTML_GEN}.wrap_line */
EIF_REFERENCE F263_11850 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,loc3);
	RTLR(1,arg1);
	RTLR(2,Result);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTGC;
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) ' ';
	loc3 = F1558_6588(RTCW(arg1), tw1);
	Result = RTLNS(eif_new_type(1560, 0x01).id, 1560, _OBJSIZ_1_1_0_3_0_0_0_0_);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
	ti4_2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2269[Dtype(RTCW(loc3))-818])(loc3);
	F1559_6605(RTCW(Result), (EIF_INTEGER_32) (ti4_1 + ti4_2));
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R2292[Dtype(RTCW(loc3))-911])(loc3);
	for (;;) {
		tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2306[Dtype(RTCW(loc3))-911])(loc3);
		if (tb1) break;
		tb2 = '\01';
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2258[Dtype(RTCW(loc3))-818])(loc3);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_1_1_0_2_);
		if (!(EIF_BOOLEAN) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 + ti4_1) + ((EIF_INTEGER_32) 1L)) <= ((EIF_INTEGER_32) 100L))) {
			tb2 = (EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 0L));
		}
		if (tb2) {
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2258[Dtype(RTCW(loc3))-818])(loc3);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, tr1);
			F1561_6746(RTCW(Result), (EIF_CHARACTER_8) ' ');
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2258[Dtype(RTCW(loc3))-818])(loc3);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_1_1_0_2_);
			loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 + ti4_1) + ((EIF_INTEGER_32) 1L));
			loc2++;
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R2308[Dtype(RTCW(loc3))-911])(loc3);
		} else {
			tr1 = RTMS_EX_H("<br>",4,1013084734);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, tr1);
			loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
			loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		}
	}
	RTLE;
	return Result;
}

/* {ES_HTML_GEN}.wrap_html_comments */
EIF_REFERENCE F263_11851 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc2 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Result);
	RTLR(3,loc3);
	RTLR(4,tr1);
	RTLR(5,Current);
	RTLIU(6);
	
	RTGC;
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
	if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 100L))) {
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\012';
		loc1 = F1558_6588(RTCW(arg1), tw1);
		Result = RTLNS(eif_new_type(1560, 0x01).id, 1560, _OBJSIZ_1_1_0_3_0_0_0_0_);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
		F1559_6605(RTCW(Result), ti4_1);
		loc2 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2163[Dtype(RTCW(loc1))-849])(loc1);
		loc3 = (EIF_REFERENCE) tr1;
		for (;;) {
			tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3146[Dtype(loc3)-1026])(loc3);
			if (tb1) break;
			if ((EIF_BOOLEAN) !loc2) {
				tr1 = RTMS_EX_H("<br>",4,1013084734);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, tr1);
			}
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3145[Dtype(loc3)-1026])(loc3);
			tr1 = F263_11850(Current, tr1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, tr1);
			loc2 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R3147[Dtype(loc3)-1026])(loc3);
		}
	} else {
		RTLE;
		return (EIF_REFERENCE) arg1;
	}
	RTLE;
	return Result;
}

/* {ES_HTML_GEN}.write_one_case_details */
void F263_11852 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,arg1);
	RTLIU(4);
	
	RTGC;
	tr1 = F263_11855(Current);
	tr2 = RTMS_EX_H("<tr>",4,1014264382);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3563[Dtype(RTCW(tr1))-1291])(tr1, tr2);
	tb1 = *(EIF_BOOLEAN *)(RTCW(arg1) + O11161[Dtype(arg1)-463]);
	if (tb1) {
		F263_11847(Current, arg1);
	} else {
		F263_11848(Current, arg1);
	}
	tr1 = F263_11855(Current);
	tr2 = RTMS_EX_H("</tr>\012",6,2071969802);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3563[Dtype(RTCW(tr1))-1291])(tr1, tr2);
	RTLE;
}

/* {ES_HTML_GEN}.output_file */
EIF_REFERENCE F263_11855 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLIU(4);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	loc1 = tr1;
	if ((EIF_TRUE)) {
		RTLE;
		return (EIF_REFERENCE) loc1;
	} else {
		Result = RTLNS(eif_new_type(1291, 0x01).id, 1291, _OBJSIZ_3_7_2_4_1_1_2_1_);
		tr1 = RTMS_EX_H("default_output",14,1402748020);
		F1291_4901(RTCW(Result), tr1);
	}
	RTLE;
	return Result;
}

void EIF_Minit1180 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
