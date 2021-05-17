/*
 * Code for class WEL_SC_CONSTANTS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F1060_10130(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1060_10131(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1060_10132(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1060_10133(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1060_10134(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1060_10135(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1060_10136(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1060_10137(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1060_10138(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1060_10139(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1060_10140(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1060_10141(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1060_10142(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1060_10143(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1060_10144(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1060_10145(EIF_REFERENCE);
extern void EIF_Minit1060(void);

#ifdef __cplusplus
}
#endif

#include "wel.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_SC_CONSTANTS}.sc_size */
EIF_TYPED_VALUE F1060_10130 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sc_size";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1059, Current, 0, 0, 16510);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1059, Current, 16510);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SC_SIZE;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {WEL_SC_CONSTANTS}.sc_move */
EIF_TYPED_VALUE F1060_10131 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sc_move";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1059, Current, 0, 0, 16511);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1059, Current, 16511);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SC_MOVE;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {WEL_SC_CONSTANTS}.sc_minimize */
EIF_TYPED_VALUE F1060_10132 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sc_minimize";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1059, Current, 0, 0, 16512);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1059, Current, 16512);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SC_MINIMIZE;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {WEL_SC_CONSTANTS}.sc_maximize */
EIF_TYPED_VALUE F1060_10133 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sc_maximize";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1059, Current, 0, 0, 16513);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1059, Current, 16513);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SC_MAXIMIZE;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {WEL_SC_CONSTANTS}.sc_nextwindow */
EIF_TYPED_VALUE F1060_10134 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sc_nextwindow";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1059, Current, 0, 0, 16514);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1059, Current, 16514);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SC_NEXTWINDOW;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {WEL_SC_CONSTANTS}.sc_prevwindow */
EIF_TYPED_VALUE F1060_10135 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sc_prevwindow";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1059, Current, 0, 0, 16515);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1059, Current, 16515);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SC_PREVWINDOW;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {WEL_SC_CONSTANTS}.sc_close */
EIF_TYPED_VALUE F1060_10136 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sc_close";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1059, Current, 0, 0, 16516);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1059, Current, 16516);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SC_CLOSE;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {WEL_SC_CONSTANTS}.sc_vscroll */
EIF_TYPED_VALUE F1060_10137 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sc_vscroll";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1059, Current, 0, 0, 16501);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1059, Current, 16501);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SC_VSCROLL;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {WEL_SC_CONSTANTS}.sc_hscroll */
EIF_TYPED_VALUE F1060_10138 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sc_hscroll";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1059, Current, 0, 0, 16502);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1059, Current, 16502);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SC_HSCROLL;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {WEL_SC_CONSTANTS}.sc_mousemenu */
EIF_TYPED_VALUE F1060_10139 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sc_mousemenu";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1059, Current, 0, 0, 16503);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1059, Current, 16503);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SC_MOUSEMENU;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {WEL_SC_CONSTANTS}.sc_keymenu */
EIF_TYPED_VALUE F1060_10140 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sc_keymenu";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1059, Current, 0, 0, 16504);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1059, Current, 16504);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SC_KEYMENU;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {WEL_SC_CONSTANTS}.sc_arrange */
EIF_TYPED_VALUE F1060_10141 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sc_arrange";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1059, Current, 0, 0, 16505);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1059, Current, 16505);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SC_ARRANGE;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {WEL_SC_CONSTANTS}.sc_restore */
EIF_TYPED_VALUE F1060_10142 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sc_restore";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1059, Current, 0, 0, 16506);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1059, Current, 16506);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SC_RESTORE;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {WEL_SC_CONSTANTS}.sc_tasklist */
EIF_TYPED_VALUE F1060_10143 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sc_tasklist";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1059, Current, 0, 0, 16507);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1059, Current, 16507);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SC_TASKLIST;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {WEL_SC_CONSTANTS}.sc_screensave */
EIF_TYPED_VALUE F1060_10144 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sc_screensave";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1059, Current, 0, 0, 16508);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1059, Current, 16508);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SC_SCREENSAVE;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {WEL_SC_CONSTANTS}.sc_hotkey */
EIF_TYPED_VALUE F1060_10145 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sc_hotkey";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1059, Current, 0, 0, 16509);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1059, Current, 16509);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) SC_HOTKEY;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

void EIF_Minit1060 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
