/*
 * Code for class WEL_LOG_FONT
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1545.h"
#include <wel.h>
#include "wel.h"
#include <logfont.h>
#include "eif_misc.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_LOG_FONT}.make */
void F1407_17196 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg2);
	RTLIU(2);
	
	RTGC;
	F1337_15830(Current);
	F1407_17241(Current, arg1);
	F1407_17242(Current, ((EIF_INTEGER_32) 0L));
	F1407_17243(Current, ((EIF_INTEGER_32) 0L));
	F1407_17245(Current, ((EIF_INTEGER_32) 0L));
	F1407_17247(Current);
	F1407_17249(Current);
	F1407_17251(Current);
	F1407_17253(Current);
	F1407_17260(Current);
	F1407_17265(Current);
	F1407_17268(Current);
	F1407_17272(Current);
	F1407_17276(Current);
	F1407_17283(Current, arg2);
	RTLE;
}

/* {WEL_LOG_FONT}.make_by_font */
void F1407_17197 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	F1337_15830(Current);
	tp1 = *(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_0_2_0_3_0_0_);
	ti4_1 = RTOUCB(EIF_INTEGER_32,329,F1407_17285, (Current));
	tp2 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	GetObject(((HGDIOBJ) tp1), ((int) ti4_1), ((LPVOID) tp2));
	RTLE;
}

/* {WEL_LOG_FONT}.make_with_pointer */
void F1407_17198 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1337_15830(Current);
	ti4_1 = RTOUCB(EIF_INTEGER_32,329,F1407_17285, (Current));
	F1337_15833(Current, arg1, ti4_1);
	RTLE;
}

/* {WEL_LOG_FONT}.update_by_font */
void F1407_17199 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_0_2_0_3_0_0_);
	ti4_1 = RTOUCB(EIF_INTEGER_32,329,F1407_17285, (Current));
	tp2 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	GetObject(((HGDIOBJ) tp1), ((int) ti4_1), ((LPVOID) tp2));
	RTLE;
}

/* {WEL_LOG_FONT}.height */
EIF_INTEGER_32 F1407_17200 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	return (EIF_INTEGER_32) (EIF_INTEGER_32) cwel_log_font_get_height((tp1));
}

/* {WEL_LOG_FONT}.width */
EIF_INTEGER_32 F1407_17202 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	return (EIF_INTEGER_32) (EIF_INTEGER_32) cwel_log_font_get_width((tp1));
}

/* {WEL_LOG_FONT}.weight */
EIF_INTEGER_32 F1407_17205 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	return (EIF_INTEGER_32) (EIF_INTEGER_32) cwel_log_font_get_weight((tp1));
}

/* {WEL_LOG_FONT}.italic */
EIF_BOOLEAN F1407_17206 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	ti4_1 = (EIF_INTEGER_32) cwel_log_font_get_italic((tp1));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L));
	RTLE;
	return Result;
}

/* {WEL_LOG_FONT}.char_set */
EIF_INTEGER_32 F1407_17209 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	return (EIF_INTEGER_32) (EIF_INTEGER_32) cwel_log_font_get_charset((tp1));
}

/* {WEL_LOG_FONT}.pitch */
EIF_INTEGER_32 F1407_17213 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	return (EIF_INTEGER_32) (EIF_INTEGER_32) cwel_log_font_get_pitch((tp1));
}

/* {WEL_LOG_FONT}.family */
EIF_INTEGER_32 F1407_17214 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	return (EIF_INTEGER_32) (EIF_INTEGER_32) cwel_log_font_get_family((tp1));
}

/* {WEL_LOG_FONT}.pitch_and_family */
EIF_INTEGER_32 F1407_17215 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	return (EIF_INTEGER_32) (EIF_INTEGER_32) cwel_log_font_get_pitchandfamily((tp1));
}

/* {WEL_LOG_FONT}.face_name */
EIF_REFERENCE F1407_17216 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	loc1 = RTLNS(eif_new_type(944, 0x01).id, 944, _OBJSIZ_1_0_0_1_0_0_0_0_);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	tp1 = (EIF_POINTER) cwel_log_font_get_facename((tp1));
	F945_14351(RTCW(loc1), tp1);
	tr1 = F944_3743(RTCW(loc1));
	RTLE;
	return (EIF_REFERENCE) tr1;
}

/* {WEL_LOG_FONT}.set_height */
void F1407_17241 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	cwel_log_font_set_height((tp1), (arg1));
}

/* {WEL_LOG_FONT}.set_width */
void F1407_17242 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	cwel_log_font_set_width((tp1), (arg1));
}

/* {WEL_LOG_FONT}.set_escapement */
void F1407_17243 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	cwel_log_font_set_escapement((tp1), (arg1));
}

/* {WEL_LOG_FONT}.set_weight */
void F1407_17245 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	cwel_log_font_set_weight((tp1), (arg1));
}

/* {WEL_LOG_FONT}.set_italic */
void F1407_17246 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	cwel_log_font_set_italic((tp1), (((EIF_INTEGER_32) 1L)));
}

/* {WEL_LOG_FONT}.set_not_italic */
void F1407_17247 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	cwel_log_font_set_italic((tp1), (((EIF_INTEGER_32) 0L)));
}

/* {WEL_LOG_FONT}.set_not_underlined */
void F1407_17249 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	cwel_log_font_set_underline((tp1), (((EIF_INTEGER_32) 0L)));
}

/* {WEL_LOG_FONT}.set_not_strike_out */
void F1407_17251 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	cwel_log_font_set_strikeout((tp1), (((EIF_INTEGER_32) 0L)));
}

/* {WEL_LOG_FONT}.set_char_set */
void F1407_17252 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	cwel_log_font_set_charset((tp1), (arg1));
}

/* {WEL_LOG_FONT}.set_default_character_set */
void F1407_17253 (EIF_REFERENCE Current)
{
	GTCX
	
	
	F1407_17252(Current, ((EIF_INTEGER_32) 1L));
}

/* {WEL_LOG_FONT}.set_out_precision */
void F1407_17258 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	cwel_log_font_set_outprecision((tp1), (arg1));
}

/* {WEL_LOG_FONT}.set_default_output_precision */
void F1407_17260 (EIF_REFERENCE Current)
{
	GTCX
	
	
	F1407_17258(Current, ((EIF_INTEGER_32) 0L));
}

/* {WEL_LOG_FONT}.set_clip_precision */
void F1407_17264 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	cwel_log_font_set_clipprecision((tp1), (arg1));
}

/* {WEL_LOG_FONT}.set_default_clipping_precision */
void F1407_17265 (EIF_REFERENCE Current)
{
	GTCX
	
	
	F1407_17264(Current, ((EIF_INTEGER_32) 0L));
}

/* {WEL_LOG_FONT}.set_quality */
void F1407_17267 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	cwel_log_font_set_quality((tp1), (arg1));
}

/* {WEL_LOG_FONT}.set_default_quality */
void F1407_17268 (EIF_REFERENCE Current)
{
	GTCX
	
	
	F1407_17267(Current, ((EIF_INTEGER_32) 0L));
}

/* {WEL_LOG_FONT}.set_pitch */
void F1407_17271 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	tp2 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	ti4_1 = (EIF_INTEGER_32) cwel_log_font_get_family((tp2));
	ti4_1 = eif_bit_or(arg1,ti4_1);
	cwel_log_font_set_pitchandfamily((tp1), (ti4_1));
	RTLE;
}

/* {WEL_LOG_FONT}.set_default_pitch */
void F1407_17272 (EIF_REFERENCE Current)
{
	GTCX
	
	
	F1407_17271(Current, ((EIF_INTEGER_32) 0L));
}

/* {WEL_LOG_FONT}.set_fixed_pitch */
void F1407_17273 (EIF_REFERENCE Current)
{
	GTCX
	
	
	F1407_17271(Current, ((EIF_INTEGER_32) 1L));
}

/* {WEL_LOG_FONT}.set_variable_pitch */
void F1407_17274 (EIF_REFERENCE Current)
{
	GTCX
	
	
	F1407_17271(Current, ((EIF_INTEGER_32) 2L));
}

/* {WEL_LOG_FONT}.set_family */
void F1407_17275 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	tp2 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	ti4_1 = (EIF_INTEGER_32) cwel_log_font_get_pitch((tp2));
	ti4_1 = eif_bit_or(ti4_1,arg1);
	cwel_log_font_set_pitchandfamily((tp1), (ti4_1));
	RTLE;
}

/* {WEL_LOG_FONT}.set_dont_care_family */
void F1407_17276 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	ti4_1 = (EIF_INTEGER_32) FF_DONTCARE;
	F1407_17275(Current, ti4_1);
	RTLE;
}

/* {WEL_LOG_FONT}.set_roman_family */
void F1407_17277 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	ti4_1 = (EIF_INTEGER_32) FF_ROMAN;
	F1407_17275(Current, ti4_1);
	RTLE;
}

/* {WEL_LOG_FONT}.set_swiss_family */
void F1407_17278 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	ti4_1 = (EIF_INTEGER_32) FF_SWISS;
	F1407_17275(Current, ti4_1);
	RTLE;
}

/* {WEL_LOG_FONT}.set_modern_family */
void F1407_17279 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	ti4_1 = (EIF_INTEGER_32) FF_MODERN;
	F1407_17275(Current, ti4_1);
	RTLE;
}

/* {WEL_LOG_FONT}.set_script_family */
void F1407_17280 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	ti4_1 = (EIF_INTEGER_32) FF_SCRIPT;
	F1407_17275(Current, ti4_1);
	RTLE;
}

/* {WEL_LOG_FONT}.set_pitch_and_family */
void F1407_17282 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	cwel_log_font_set_pitchandfamily((tp1), (arg1));
}

/* {WEL_LOG_FONT}.set_face_name */
void F1407_17283 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTGC;
	loc1 = RTLNS(eif_new_type(944, 0x01).id, 944, _OBJSIZ_1_0_0_1_0_0_0_0_);
	F944_3738(RTCW(loc1), arg1);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	tp2 = F944_3745(RTCW(loc1));
	cwel_log_font_set_facename((tp1), (tp2));
	RTLE;
}

/* {WEL_LOG_FONT}.structure_size */
static EIF_INTEGER_32 F1407_17285_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 329)

	
	RTEV;
	RTOTP;
	Result = (EIF_INTEGER_32) sizeof (LOGFONT);
	RTOTE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F1407_17285 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,329,F1407_17285_body,(Current));
}

/* {WEL_LOG_FONT}.c_size_of_log_font */
EIF_INTEGER_32 F1407_17288 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) sizeof (LOGFONT);
	return Result;
}

/* {WEL_LOG_FONT}.cwel_log_font_set_height */
void F1407_17289 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	cwel_log_font_set_height((arg1), (arg2));
}

/* {WEL_LOG_FONT}.cwel_log_font_set_width */
void F1407_17290 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	cwel_log_font_set_width((arg1), (arg2));
}

/* {WEL_LOG_FONT}.cwel_log_font_set_escapement */
void F1407_17291 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	cwel_log_font_set_escapement((arg1), (arg2));
}

/* {WEL_LOG_FONT}.cwel_log_font_set_weight */
void F1407_17293 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	cwel_log_font_set_weight((arg1), (arg2));
}

/* {WEL_LOG_FONT}.cwel_log_font_set_italic */
void F1407_17294 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	cwel_log_font_set_italic((arg1), (arg2));
}

/* {WEL_LOG_FONT}.cwel_log_font_set_underline */
void F1407_17295 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	cwel_log_font_set_underline((arg1), (arg2));
}

/* {WEL_LOG_FONT}.cwel_log_font_set_strikeout */
void F1407_17296 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	cwel_log_font_set_strikeout((arg1), (arg2));
}

/* {WEL_LOG_FONT}.cwel_log_font_set_charset */
void F1407_17297 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	cwel_log_font_set_charset((arg1), (arg2));
}

/* {WEL_LOG_FONT}.cwel_log_font_set_outprecision */
void F1407_17298 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	cwel_log_font_set_outprecision((arg1), (arg2));
}

/* {WEL_LOG_FONT}.cwel_log_font_set_clipprecision */
void F1407_17299 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	cwel_log_font_set_clipprecision((arg1), (arg2));
}

/* {WEL_LOG_FONT}.cwel_log_font_set_quality */
void F1407_17300 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	cwel_log_font_set_quality((arg1), (arg2));
}

/* {WEL_LOG_FONT}.cwel_log_font_set_pitchandfamily */
void F1407_17301 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	cwel_log_font_set_pitchandfamily((arg1), (arg2));
}

/* {WEL_LOG_FONT}.cwel_log_font_set_facename */
void F1407_17302 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	
	cwel_log_font_set_facename((arg1), (arg2));
}

/* {WEL_LOG_FONT}.cwel_log_font_get_height */
EIF_INTEGER_32 F1407_17303 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) cwel_log_font_get_height((arg1));
	return Result;
}

/* {WEL_LOG_FONT}.cwel_log_font_get_width */
EIF_INTEGER_32 F1407_17304 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) cwel_log_font_get_width((arg1));
	return Result;
}

/* {WEL_LOG_FONT}.cwel_log_font_get_weight */
EIF_INTEGER_32 F1407_17307 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) cwel_log_font_get_weight((arg1));
	return Result;
}

/* {WEL_LOG_FONT}.cwel_log_font_get_italic */
EIF_INTEGER_32 F1407_17308 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) cwel_log_font_get_italic((arg1));
	return Result;
}

/* {WEL_LOG_FONT}.cwel_log_font_get_charset */
EIF_INTEGER_32 F1407_17311 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) cwel_log_font_get_charset((arg1));
	return Result;
}

/* {WEL_LOG_FONT}.cwel_log_font_get_pitchandfamily */
EIF_INTEGER_32 F1407_17315 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) cwel_log_font_get_pitchandfamily((arg1));
	return Result;
}

/* {WEL_LOG_FONT}.cwel_log_font_get_pitch */
EIF_INTEGER_32 F1407_17316 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) cwel_log_font_get_pitch((arg1));
	return Result;
}

/* {WEL_LOG_FONT}.cwel_log_font_get_family */
EIF_INTEGER_32 F1407_17317 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) cwel_log_font_get_family((arg1));
	return Result;
}

/* {WEL_LOG_FONT}.cwel_log_font_get_facename */
EIF_POINTER F1407_17318 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = (EIF_POINTER) cwel_log_font_get_facename((arg1));
	return Result;
}

/* {WEL_LOG_FONT}.cwin_get_object */
void F1407_17319 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3)
{
	GTCX
	
	
	GetObject(((HGDIOBJ) arg1), ((int) arg2), ((LPVOID) arg3));
}

void EIF_Minit1545 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
