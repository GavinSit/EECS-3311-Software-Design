/*
 * Code for class WEL_CHARACTER_FORMAT
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1870.h"
#include <windows.h>
#include <charfmt.h>
#include <wel.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_CHARACTER_FORMAT}.make */
void F1887_21772 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1337_15830(Current);
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	ti4_1 = F1887_21815(Current);
	cwel_charformat_set_cbsize((tp1), (ti4_1));
	RTLE;
}

/* {WEL_CHARACTER_FORMAT}.face_name */
EIF_REFERENCE F1887_21774 (EIF_REFERENCE Current)
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
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	tp1 = (EIF_POINTER) cwel_charformat_get_szfacename(((CHARFORMAT*) tp1));
	F945_14351(RTCW(loc1), tp1);
	tr1 = F944_3743(RTCW(loc1));
	RTLE;
	return (EIF_REFERENCE) tr1;
}

/* {WEL_CHARACTER_FORMAT}.height_in_pixels */
EIF_INTEGER_32 F1887_21777 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	loc2 = RTLNS(eif_new_type(1310, 0x01).id, 1310, _OBJSIZ_6_2_0_3_0_7_0_0_);
	F1311_15448(RTCW(loc2));
	tp1 = *(EIF_POINTER *)(RTCW(loc2)+ _PTROFF_6_2_0_3_0_0_);
	loc1 = (EIF_INTEGER_32) GetDeviceCaps(((HDC) tp1), ((int) ((EIF_INTEGER_32) 90L)));
	F1311_15449(RTCW(loc2));
	ti4_1 = F1887_21778(Current);
	Result = (EIF_INTEGER_32) MulDiv(((int) loc1), ((int) ti4_1), ((int) ((EIF_INTEGER_32) 1440L)));
	RTLE;
	return Result;
}

/* {WEL_CHARACTER_FORMAT}.height_in_twips */
EIF_INTEGER_32 F1887_21778 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	return (EIF_INTEGER_32) (EIF_INTEGER_32) cwel_charformat_get_yheight((tp1));
}

/* {WEL_CHARACTER_FORMAT}.offset */
EIF_INTEGER_32 F1887_21779 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	return (EIF_INTEGER_32) (EIF_INTEGER_32) cwel_charformat_get_yoffset((tp1));
}

/* {WEL_CHARACTER_FORMAT}.pitch_and_family */
EIF_INTEGER_32 F1887_21780 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	return (EIF_INTEGER_32) (EIF_INTEGER_32) cwel_charformat_get_bpitchandfamily((tp1));
}

/* {WEL_CHARACTER_FORMAT}.text_color */
EIF_REFERENCE F1887_21781 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTGC;
	Result = RTLNS(eif_new_type(1828, 0x01).id, 1828, _OBJSIZ_0_0_0_1_0_0_0_0_);
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	ti4_1 = (EIF_INTEGER_32) cwel_charformat_get_crtextcolor((tp1));
	F1829_20491(RTCW(Result), ti4_1);
	RTLE;
	return Result;
}

/* {WEL_CHARACTER_FORMAT}.max_face_name_length */
static EIF_INTEGER_32 F1887_21782_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 448)

	
	RTEV;
	RTOTP;
	Result = (EIF_INTEGER_32) LF_FACESIZE;
	RTOTE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F1887_21782 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,448,F1887_21782_body,(Current));
}

/* {WEL_CHARACTER_FORMAT}.log_font */
EIF_REFERENCE F1887_21783 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLIU(4);
	
	RTGC;
	loc2 = RTLNS(eif_new_type(1310, 0x01).id, 1310, _OBJSIZ_6_2_0_3_0_7_0_0_);
	F1311_15448(RTCW(loc2));
	tp1 = *(EIF_POINTER *)(RTCW(loc2)+ _PTROFF_6_2_0_3_0_0_);
	loc1 = (EIF_INTEGER_32) GetDeviceCaps(((HDC) tp1), ((int) ((EIF_INTEGER_32) 90L)));
	F1311_15449(RTCW(loc2));
	Result = RTLNS(eif_new_type(1406, 0x01).id, 1406, _OBJSIZ_0_1_0_0_0_1_0_0_);
	ti4_1 = F1887_21778(Current);
	tr1 = F1887_21774(Current);
	F1407_17196(RTCW(Result), (EIF_INTEGER_32) -(EIF_INTEGER_32) MulDiv(((int) loc1), ((int) ti4_1), ((int) ((EIF_INTEGER_32) 1440L))), tr1);
	ti4_1 = F1887_21780(Current);
	F1407_17282(RTCW(Result), ti4_1);
	ti4_1 = F1887_21785(Current);
	if (F1258_14781(Current, ti4_1, ((EIF_INTEGER_32) 1L))) {
		F1407_17245(RTCW(Result), ((EIF_INTEGER_32) 700L));
	} else {
		F1407_17245(RTCW(Result), ((EIF_INTEGER_32) 400L));
	}
	RTLE;
	return Result;
}

/* {WEL_CHARACTER_FORMAT}.mask */
EIF_INTEGER_32 F1887_21784 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	return (EIF_INTEGER_32) (EIF_INTEGER_32) cwel_charformat_get_dwmask((tp1));
}

/* {WEL_CHARACTER_FORMAT}.effects */
EIF_INTEGER_32 F1887_21785 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	return (EIF_INTEGER_32) (EIF_INTEGER_32) cwel_charformat_get_dweffects((tp1));
}

/* {WEL_CHARACTER_FORMAT}.set_default_format */
void F1887_21786 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1887_21797(Current);
	F1887_21799(Current);
	F1887_21801(Current);
	F1887_21803(Current);
	RTLE;
}

/* {WEL_CHARACTER_FORMAT}.set_char_set */
void F1887_21787 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1887_21807(Current, ((EIF_INTEGER_32) 134217728L));
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	cwel_charformat_set_bcharset((tp1), (arg1));
	RTLE;
}

/* {WEL_CHARACTER_FORMAT}.set_face_name */
void F1887_21788 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTGC;
	F1887_21807(Current, ((EIF_INTEGER_32) 536870912L));
	loc1 = RTLNS(eif_new_type(944, 0x01).id, 944, _OBJSIZ_1_0_0_1_0_0_0_0_);
	ti4_1 = RTOUCB(EIF_INTEGER_32,448,F1887_21782, (Current));
	F944_3739(RTCW(loc1), (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)));
	F944_3753(RTCW(loc1), arg1);
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	tp2 = F944_3745(RTCW(loc1));
	cwel_charformat_set_szfacename((tp1), (tp2));
	RTLE;
}

/* {WEL_CHARACTER_FORMAT}.set_height_in_points */
void F1887_21791 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	F1887_21792(Current, (EIF_INTEGER_32) (arg1 * ((EIF_INTEGER_32) 20L)));
}

/* {WEL_CHARACTER_FORMAT}.set_height_in_twips */
void F1887_21792 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1887_21807(Current, ((EIF_INTEGER_32) 0x80000000L));
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	cwel_charformat_set_yheight((tp1), (arg1));
	RTLE;
}

/* {WEL_CHARACTER_FORMAT}.set_offset */
void F1887_21793 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1887_21807(Current, ((EIF_INTEGER_32) 268435456L));
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	cwel_charformat_set_yoffset((tp1), (arg1));
	RTLE;
}

/* {WEL_CHARACTER_FORMAT}.set_pitch_and_family */
void F1887_21794 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	cwel_charformat_set_bpitchandfamily((tp1), (arg1));
}

/* {WEL_CHARACTER_FORMAT}.set_text_color */
void F1887_21795 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	F1887_21807(Current, ((EIF_INTEGER_32) 1073741824L));
	F1887_21811(Current, ((EIF_INTEGER_32) 1073741824L));
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O17154[Dtype(arg1)-1828]);
	cwel_charformat_set_crtextcolor((tp1), (ti4_1));
	RTLE;
}

/* {WEL_CHARACTER_FORMAT}.set_bold */
void F1887_21796 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1887_21807(Current, ((EIF_INTEGER_32) 1L));
	F1887_21810(Current, ((EIF_INTEGER_32) 1L));
	RTLE;
}

/* {WEL_CHARACTER_FORMAT}.unset_bold */
void F1887_21797 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1887_21807(Current, ((EIF_INTEGER_32) 1L));
	F1887_21811(Current, ((EIF_INTEGER_32) 1L));
	RTLE;
}

/* {WEL_CHARACTER_FORMAT}.set_italic */
void F1887_21798 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1887_21807(Current, ((EIF_INTEGER_32) 2L));
	F1887_21810(Current, ((EIF_INTEGER_32) 2L));
	RTLE;
}

/* {WEL_CHARACTER_FORMAT}.unset_italic */
void F1887_21799 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1887_21807(Current, ((EIF_INTEGER_32) 2L));
	F1887_21811(Current, ((EIF_INTEGER_32) 2L));
	RTLE;
}

/* {WEL_CHARACTER_FORMAT}.set_strike_out */
void F1887_21800 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1887_21807(Current, ((EIF_INTEGER_32) 8L));
	F1887_21810(Current, ((EIF_INTEGER_32) 8L));
	RTLE;
}

/* {WEL_CHARACTER_FORMAT}.unset_strike_out */
void F1887_21801 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1887_21807(Current, ((EIF_INTEGER_32) 8L));
	F1887_21811(Current, ((EIF_INTEGER_32) 8L));
	RTLE;
}

/* {WEL_CHARACTER_FORMAT}.set_underline */
void F1887_21802 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1887_21807(Current, ((EIF_INTEGER_32) 4L));
	F1887_21810(Current, ((EIF_INTEGER_32) 4L));
	RTLE;
}

/* {WEL_CHARACTER_FORMAT}.unset_underline */
void F1887_21803 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1887_21807(Current, ((EIF_INTEGER_32) 4L));
	F1887_21811(Current, ((EIF_INTEGER_32) 4L));
	RTLE;
}

/* {WEL_CHARACTER_FORMAT}.set_mask */
void F1887_21806 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	cwel_charformat_set_dwmask((tp1), (arg1));
}

/* {WEL_CHARACTER_FORMAT}.add_mask */
void F1887_21807 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	ti4_1 = F1887_21784(Current);
	ti4_1 = F1258_14779(Current, ti4_1, arg1);
	F1887_21806(Current, ti4_1);
	RTLE;
}

/* {WEL_CHARACTER_FORMAT}.set_effects */
void F1887_21809 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	cwel_charformat_set_dweffects((tp1), (arg1));
}

/* {WEL_CHARACTER_FORMAT}.add_effects */
void F1887_21810 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	ti4_1 = F1887_21785(Current);
	ti4_1 = F1258_14779(Current, ti4_1, arg1);
	F1887_21809(Current, ti4_1);
	RTLE;
}

/* {WEL_CHARACTER_FORMAT}.remove_effects */
void F1887_21811 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	ti4_1 = F1887_21785(Current);
	ti4_1 = F1258_14780(Current, ti4_1, arg1);
	F1887_21809(Current, ti4_1);
	RTLE;
}

/* {WEL_CHARACTER_FORMAT}.structure_size */
EIF_INTEGER_32 F1887_21815 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R18083[Dtype(Current)-1886])(Current);
}

/* {WEL_CHARACTER_FORMAT}.c_structure_size */
EIF_INTEGER_32 F1887_21816 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) sizeof (CHARFORMAT);
	return Result;
}

/* {WEL_CHARACTER_FORMAT}.cwel_charformat_set_cbsize */
void F1887_21817 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	cwel_charformat_set_cbsize((arg1), (arg2));
}

/* {WEL_CHARACTER_FORMAT}.cwel_charformat_set_dwmask */
void F1887_21818 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	cwel_charformat_set_dwmask((arg1), (arg2));
}

/* {WEL_CHARACTER_FORMAT}.cwel_charformat_set_dweffects */
void F1887_21819 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	cwel_charformat_set_dweffects((arg1), (arg2));
}

/* {WEL_CHARACTER_FORMAT}.cwel_charformat_set_yheight */
void F1887_21820 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	cwel_charformat_set_yheight((arg1), (arg2));
}

/* {WEL_CHARACTER_FORMAT}.cwel_charformat_set_yoffset */
void F1887_21821 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	cwel_charformat_set_yoffset((arg1), (arg2));
}

/* {WEL_CHARACTER_FORMAT}.cwel_charformat_set_crtextcolor */
void F1887_21822 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	cwel_charformat_set_crtextcolor((arg1), (arg2));
}

/* {WEL_CHARACTER_FORMAT}.cwel_charformat_set_bcharset */
void F1887_21823 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	cwel_charformat_set_bcharset((arg1), (arg2));
}

/* {WEL_CHARACTER_FORMAT}.cwel_charformat_set_bpitchandfamily */
void F1887_21824 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	cwel_charformat_set_bpitchandfamily((arg1), (arg2));
}

/* {WEL_CHARACTER_FORMAT}.cwel_charformat_set_szfacename */
void F1887_21825 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	
	cwel_charformat_set_szfacename((arg1), (arg2));
}

/* {WEL_CHARACTER_FORMAT}.cwel_charformat_get_dwmask */
EIF_INTEGER_32 F1887_21826 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) cwel_charformat_get_dwmask((arg1));
	return Result;
}

/* {WEL_CHARACTER_FORMAT}.cwel_charformat_get_dweffects */
EIF_INTEGER_32 F1887_21827 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) cwel_charformat_get_dweffects((arg1));
	return Result;
}

/* {WEL_CHARACTER_FORMAT}.cwel_charformat_get_yheight */
EIF_INTEGER_32 F1887_21828 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) cwel_charformat_get_yheight((arg1));
	return Result;
}

/* {WEL_CHARACTER_FORMAT}.cwel_charformat_get_yoffset */
EIF_INTEGER_32 F1887_21829 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) cwel_charformat_get_yoffset((arg1));
	return Result;
}

/* {WEL_CHARACTER_FORMAT}.cwel_charformat_get_crtextcolor */
EIF_INTEGER_32 F1887_21830 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) cwel_charformat_get_crtextcolor((arg1));
	return Result;
}

/* {WEL_CHARACTER_FORMAT}.cwel_charformat_get_bpitchandfamily */
EIF_INTEGER_32 F1887_21832 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) cwel_charformat_get_bpitchandfamily((arg1));
	return Result;
}

/* {WEL_CHARACTER_FORMAT}.cwel_charformat_get_szfacename */
EIF_POINTER F1887_21833 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = (EIF_POINTER) cwel_charformat_get_szfacename(((CHARFORMAT*) arg1));
	return Result;
}

/* {WEL_CHARACTER_FORMAT}.lf_facesize */
EIF_INTEGER_32 F1887_21834 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) LF_FACESIZE;
	return Result;
}

void EIF_Minit1870 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
