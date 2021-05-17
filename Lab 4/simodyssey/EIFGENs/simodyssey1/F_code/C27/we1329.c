/*
 * Code for class WEL_SHARED_FONTS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1329.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_SHARED_FONTS}.gui_font */
EIF_REFERENCE F502_14137 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_REFERENCE) F502_14139(Current);
}

/* {WEL_SHARED_FONTS}.system_font */
EIF_REFERENCE F502_14138 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_REFERENCE) F502_14139(Current);
}

/* {WEL_SHARED_FONTS}.message_font */
EIF_REFERENCE F502_14139 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc3);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,loc2);
	RTLR(4,tr1);
	RTLIU(5);
	
	RTGC;
	loc3 = *(EIF_REFERENCE *)(RTCV(RTOUCR(351,F502_14144, (Current))));
	if ((EIF_BOOLEAN)(loc3 == NULL)) {
		loc1 = RTLNS(eif_new_type(1873, 0x01).id, 1873, _OBJSIZ_0_0_0_0_0_0_0_0_);
		loc2 = F1874_21501(RTCW(loc1));
		loc3 = RTLNS(eif_new_type(1884, 0x01).id, 1884, _OBJSIZ_0_2_0_3_0_1_0_0_);
		tr1 = F1384_16676(RTCW(loc2));
		F1885_21695(RTCW(loc3), tr1);
		tr1 = RTOUCR(351,F502_14144, (Current));
		F489_1934(RTCW(tr1), loc3);
	}
	RTLE;
	return (EIF_REFERENCE) loc3;
}

/* {WEL_SHARED_FONTS}.menu_font */
EIF_REFERENCE F502_14140 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc3);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,loc2);
	RTLR(4,tr1);
	RTLIU(5);
	
	RTGC;
	loc3 = *(EIF_REFERENCE *)(RTCV(RTOUCR(352,F502_14145, (Current))));
	if ((EIF_BOOLEAN)(loc3 == NULL)) {
		loc1 = RTLNS(eif_new_type(1873, 0x01).id, 1873, _OBJSIZ_0_0_0_0_0_0_0_0_);
		loc2 = F1874_21501(RTCW(loc1));
		loc3 = RTLNS(eif_new_type(1884, 0x01).id, 1884, _OBJSIZ_0_2_0_3_0_1_0_0_);
		tr1 = F1384_16674(RTCW(loc2));
		F1885_21695(RTCW(loc3), tr1);
		tr1 = RTOUCR(352,F502_14145, (Current));
		F489_1934(RTCW(tr1), loc3);
	}
	RTLE;
	return (EIF_REFERENCE) loc3;
}

/* {WEL_SHARED_FONTS}.message_font_cell */
static EIF_REFERENCE F502_14144_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(351)

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEV;
	RTGC;
	RTOTP;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,488,1884,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0.id, 488, _OBJSIZ_1_0_0_0_0_0_0_0_);
	}
	F489_1934(RTCW(tr1), NULL);
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F502_14144 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(351,F502_14144_body,(Current));
}

/* {WEL_SHARED_FONTS}.menu_font_cell */
static EIF_REFERENCE F502_14145_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(352)

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEV;
	RTGC;
	RTOTP;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,488,1884,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0.id, 488, _OBJSIZ_1_0_0_0_0_0_0_0_);
	}
	F489_1934(RTCW(tr1), NULL);
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F502_14145 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(352,F502_14145_body,(Current));
}

/* {WEL_SHARED_FONTS}.status_font_cell */
static EIF_REFERENCE F502_14146_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(353)

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEV;
	RTGC;
	RTOTP;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,488,1884,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0.id, 488, _OBJSIZ_1_0_0_0_0_0_0_0_);
	}
	F489_1934(RTCW(tr1), NULL);
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F502_14146 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(353,F502_14146_body,(Current));
}

/* {WEL_SHARED_FONTS}.caption_font_cell */
static EIF_REFERENCE F502_14147_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(354)

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEV;
	RTGC;
	RTOTP;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,488,1884,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0.id, 488, _OBJSIZ_1_0_0_0_0_0_0_0_);
	}
	F489_1934(RTCW(tr1), NULL);
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F502_14147 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(354,F502_14147_body,(Current));
}

/* {WEL_SHARED_FONTS}.small_caption_font_cell */
static EIF_REFERENCE F502_14148_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(355)

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEV;
	RTGC;
	RTOTP;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,488,1884,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0.id, 488, _OBJSIZ_1_0_0_0_0_0_0_0_);
	}
	F489_1934(RTCW(tr1), NULL);
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F502_14148 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(355,F502_14148_body,(Current));
}

void EIF_Minit1329 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
