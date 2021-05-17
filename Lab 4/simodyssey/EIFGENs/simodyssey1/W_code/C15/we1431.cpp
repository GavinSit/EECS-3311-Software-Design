/*
 * Code for class WEL_COM_ISTREAM
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F1431_15032(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1431_15033(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1431_15034(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1431_15035(EIF_REFERENCE);
extern void F1431_15036(EIF_REFERENCE);
extern void F1431_15037(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1431_15038(EIF_REFERENCE);
extern void F1431_15039(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1431_15040(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1431_15041(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1431_15042(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1431_15043(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1431_15044(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1431_15045(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1431_15046(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1431_15047(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1431_15048(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1431_15049(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1431_15050(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1431_15051(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1431_15052(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1431_15053(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1431_15054(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1431_15055(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1431_15056(EIF_REFERENCE);
extern void EIF_Minit1431(void);

#ifdef __cplusplus
}
#endif

#include <windows.h>
#include <Shlwapi.h>
#include <Objidl.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F1431_15043
static EIF_NATURAL_32 inline_F1431_15043 (EIF_POINTER arg1, EIF_POINTER* arg2)
{
	{
	IStream **l_stream = (IStream **) arg2;
	return SHCreateStreamOnFileW ((const WCHAR *)arg1, STGM_READWRITE, l_stream);
}
	;
}
#define INLINE_F1431_15043
#endif
#ifndef INLINE_F1431_15044
static EIF_POINTER inline_F1431_15044 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_NATURAL_32 arg3)
{
	{
				typedef IStream* (__stdcall *tSHCreateMemStream)(const BYTE *, UINT);
				static tSHCreateMemStream pSHCreateMemStream = NULL;
				HMODULE hShlWapi = (HMODULE)arg1;
				IStream *Result = NULL;

				if ((!pSHCreateMemStream) && hShlWapi) {
					pSHCreateMemStream = (tSHCreateMemStream) GetProcAddress(hShlWapi, "SHCreateMemStream");
					if (!pSHCreateMemStream) {
						pSHCreateMemStream = (tSHCreateMemStream) GetProcAddress(hShlWapi, (LPCSTR) 12);
					}
				}
				if (pSHCreateMemStream) {
					return pSHCreateMemStream ((const BYTE *)arg2, (UINT)arg3);
				} else {
					return NULL;
				}
			}
	;
}
#define INLINE_F1431_15044
#endif
#ifndef INLINE_F1431_15045
static void inline_F1431_15045 (EIF_POINTER arg1)
{
	{
	IStream *l_item = (IStream *)arg1;
	l_item->Release();
}
	;
}
#define INLINE_F1431_15045
#endif
#ifndef INLINE_F1431_15046
static EIF_NATURAL_32 inline_F1431_15046 (EIF_POINTER arg1)
{
	{
	IStream *l_item = (IStream *)arg1;
	return l_item->Commit(STGC_DEFAULT);
}
	;
}
#define INLINE_F1431_15046
#endif
#ifndef INLINE_F1431_15047
static EIF_NATURAL_32 inline_F1431_15047 (EIF_POINTER arg1, EIF_POINTER* arg2)
{
	{
	IStream *l_item = (IStream *)arg1;
	return l_item->Clone((IStream **)arg2);
}
	;
}
#define INLINE_F1431_15047
#endif
#ifndef INLINE_F1431_15048
static EIF_NATURAL_32 inline_F1431_15048 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_NATURAL_64 arg3, EIF_NATURAL_64* arg4, EIF_NATURAL_64* arg5)
{
	{
	HRESULT l_result;
	IStream *l_item = (IStream *)arg2;
	ULARGE_INTEGER l_cb;
	l_cb.QuadPart = (ULONGLONG) arg3;
	ULARGE_INTEGER l_pcbRead; 
	ULARGE_INTEGER l_pcbWritten;
	
	l_result = l_item->CopyTo((IStream *)l_item, l_cb, &l_pcbRead, &l_pcbWritten);
	
	*((ULONGLONG *)arg4) = l_pcbRead.QuadPart;
	*((ULONGLONG *)arg5) = l_pcbWritten.QuadPart;
	
	return l_result;
}
	;
}
#define INLINE_F1431_15048
#endif
#ifndef INLINE_F1431_15049
static EIF_NATURAL_32 inline_F1431_15049 (EIF_POINTER arg1, EIF_NATURAL_64 arg2)
{
	{
	IStream *l_item = (IStream *)arg1;
	ULARGE_INTEGER libNewSize;
	libNewSize.QuadPart = (ULONGLONG) arg2;
	
	return l_item->SetSize(libNewSize);
}
	;
}
#define INLINE_F1431_15049
#endif
#ifndef INLINE_F1431_15050
static EIF_NATURAL_32 inline_F1431_15050 (EIF_POINTER arg1, EIF_POINTER arg2)
{
	{
				IStream *l_item = (IStream *)arg1;
				STATSTG *l_pstatstg = (STATSTG *)arg2;

				return l_item->Stat(l_pstatstg, STATFLAG_DEFAULT);
			}
	;
}
#define INLINE_F1431_15050
#endif
#ifndef INLINE_F1431_15051
static EIF_NATURAL_32 inline_F1431_15051 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_NATURAL_32 arg3, EIF_NATURAL_32* arg4)
{
	{
				IStream *l_item = (IStream *)arg1;
				VOID *l_pointer_to_write = (VOID *)arg2;
				ULONG l_cb = (ULONG)arg3;
				ULONG l_pcbRead;
				HRESULT l_result;

				l_result = l_item->Read (l_pointer_to_write, l_cb, &l_pcbRead);
				*((EIF_NATURAL_32 *)arg4) = (EIF_NATURAL_32)l_pcbRead;

				return l_result;
			}
	;
}
#define INLINE_F1431_15051
#endif
#ifndef INLINE_F1431_15053
static EIF_NATURAL_32 inline_F1431_15053 (EIF_POINTER arg1, EIF_INTEGER_64 arg2, EIF_NATURAL_32 arg3, EIF_NATURAL_64* arg4)
{
	{
	IStream *l_item = (IStream *)arg1;
	DWORD l_dwOrigin = (DWORD)arg3;
	LARGE_INTEGER l_dlibMove;
	HRESULT l_result;
	ULARGE_INTEGER l_plibNewPosition;
	
	l_dlibMove.QuadPart = (LONGLONG)arg2;
	
	l_result = l_item->Seek (l_dlibMove, l_dwOrigin, &l_plibNewPosition);
	
	*((ULONGLONG *)(arg4)) = l_plibNewPosition.QuadPart;
	
	return l_result;
}
	;
}
#define INLINE_F1431_15053
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_COM_ISTREAM}.create_istream_from_file */
void F1431_15032 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "create_istream_from_file";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_NATURAL_32 loc3 = (EIF_NATURAL_32) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 tu4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLR(4,Current);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_POINTER, &loc2);
	RTLU(SK_UINT32, &loc3);
	
	RTEAA(l_feature_name, 1430, Current, 3, 1, 21705);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1430, Current, 21705);
	RTCC(arg1, 1430, l_feature_name, 1, eif_new_type(229, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(1, 0xF8000543, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(1347, 0x01).id);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2819, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(2,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(3, 0x38000000, 1, 0); /* loc3 */
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2826, "item", loc1))(loc1)).it_p);
	up1 = tp1;
	up2 = (EIF_POINTER *) &(loc2);
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(12475, dtype))(Current, up1x, up2x)).it_n4);
	loc3 = (EIF_NATURAL_32) tu4_1;
	if (RTAL & CK_CHECK) {
		RTHOOK(4);
		RTCT("l_com_result = {WEL_COM_HRESULT}.s_ok", EX_CHECK);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5033, 962))(Current)).it_n4);
		if ((EIF_BOOLEAN)(loc3 == tu4_1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTHOOK(5);
	RTDBGAA(Current, dtype, 12467, 0x40000000, 1); /* item */
	*(EIF_POINTER *)(Current + RTWA(12467, dtype)) = (EIF_POINTER) loc2;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef arg1
}

/* {WEL_COM_ISTREAM}.create_istream_from_memory */
void F1431_15033 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "create_istream_from_memory";
	RTEX;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_n4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_n4 = * (EIF_NATURAL_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_UINT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1430, Current, 0, 2, 21706);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1430, Current, 21706);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_pointer", EX_PRE);
		tb1 = '\01';
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
		if ((EIF_BOOLEAN)(arg1 == tp1)) {
			tb1 = (EIF_BOOLEAN)(arg2 == (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L));
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 12467, 0x40000000, 1); /* item */
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(12473, dtype))(Current)).it_p);
	up1 = tp1;
	up2 = arg1;
	uu4_1 = arg2;
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(12476, dtype))(Current, up1x, up2x, uu4_1x)).it_p);
	*(EIF_POINTER *)(Current + RTWA(12467, dtype)) = (EIF_POINTER) tp1;
	if (RTAL & CK_CHECK) {
		RTHOOK(3);
		RTCT("success", EX_CHECK);
		tp1 = *(EIF_POINTER *)(Current + RTWA(12467, dtype));
		tp2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
		if ((EIF_BOOLEAN)(tp1 != tp2)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef up2
#undef uu4_1
#undef arg2
#undef arg1
}

/* {WEL_COM_ISTREAM}.item */
EIF_TYPED_VALUE F1431_15034 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_POINTER;
	r.it_p = *(EIF_POINTER *)(Current + RTWA(12467,Dtype(Current)));
	return r;
}


/* {WEL_COM_ISTREAM}.stat */
EIF_TYPED_VALUE F1431_15035 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "stat";
	RTEX;
	EIF_NATURAL_32 loc1 = (EIF_NATURAL_32) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 tu4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_UINT32, &loc1);
	
	RTEAA(l_feature_name, 1430, Current, 1, 0, 21683);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1430, Current, 21683);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid", EX_PRE);
		tp1 = *(EIF_POINTER *)(Current + RTWA(12467, dtype));
		tp2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
		RTTE((EIF_BOOLEAN)(tp1 != tp2), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0xF80003C1, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(961, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(5027, Dtype(tr1)))(tr1);
	RTNHOOK(2,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(1, 0x38000000, 1, 0); /* loc1 */
	tp1 = *(EIF_POINTER *)(Current + RTWA(12467, dtype));
	up1 = tp1;
	tr1 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5030, "item", Result))(Result)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	RTNHOOK(3,1);
	tp2 = *(EIF_POINTER *)(tr1 + RTVA(3282, "item", tr1));
	up2 = tp2;
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(12482, dtype))(Current, up1x, up2x)).it_n4);
	loc1 = (EIF_NATURAL_32) tu4_1;
	if (RTAL & CK_CHECK) {
		RTHOOK(4);
		RTCT("l_result = {WEL_COM_HRESULT}.s_ok", EX_CHECK);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5033, 962))(Current)).it_n4);
		if ((EIF_BOOLEAN)(loc1 == tu4_1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef up2
}

/* {WEL_COM_ISTREAM}.commit */
void F1431_15036 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "commit";
	RTEX;
	EIF_NATURAL_32 loc1 = (EIF_NATURAL_32) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_NATURAL_32 tu4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_UINT32, &loc1);
	
	RTEAA(l_feature_name, 1430, Current, 1, 0, 21684);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1430, Current, 21684);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tp1 = *(EIF_POINTER *)(Current + RTWA(12467, dtype));
	tp2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
	if ((EIF_BOOLEAN)(tp1 != tp2)) {
		RTHOOK(2);
		RTDBGAL(1, 0x38000000, 1, 0); /* loc1 */
		tp1 = *(EIF_POINTER *)(Current + RTWA(12467, dtype));
		up1 = tp1;
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(12478, dtype))(Current, up1x)).it_n4);
		loc1 = (EIF_NATURAL_32) tu4_1;
		if (RTAL & CK_CHECK) {
			RTHOOK(3);
			RTCT("l_result = {WEL_COM_HRESULT}.s_ok", EX_CHECK);
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5033, 962))(Current)).it_n4);
			if ((EIF_BOOLEAN)(loc1 == tu4_1)) {
				RTCK;
			} else {
				RTCF;
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
}

/* {WEL_COM_ISTREAM}.set_size */
void F1431_15037 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_size";
	RTEX;
	EIF_NATURAL_32 loc1 = (EIF_NATURAL_32) 0;
#define arg1 arg1x.it_n8
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE uu8_1x = {{0}, SK_UINT64};
#define uu8_1 uu8_1x.it_n8
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_NATURAL_32 tu4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n8 = * (EIF_NATURAL_64 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_UINT64,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_UINT32, &loc1);
	
	RTEAA(l_feature_name, 1430, Current, 1, 1, 21685);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1430, Current, 21685);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tp1 = *(EIF_POINTER *)(Current + RTWA(12467, dtype));
	tp2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
	if ((EIF_BOOLEAN)(tp1 != tp2)) {
		RTHOOK(2);
		RTDBGAL(1, 0x38000000, 1, 0); /* loc1 */
		tp1 = *(EIF_POINTER *)(Current + RTWA(12467, dtype));
		up1 = tp1;
		uu8_1 = arg1;
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(12481, dtype))(Current, up1x, uu8_1x)).it_n4);
		loc1 = (EIF_NATURAL_32) tu4_1;
		if (RTAL & CK_CHECK) {
			RTHOOK(3);
			RTCT("l_result = {WEL_COM_HRESULT}.s_ok", EX_CHECK);
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5033, 962))(Current)).it_n4);
			if ((EIF_BOOLEAN)(loc1 == tu4_1)) {
				RTCK;
			} else {
				RTCF;
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef uu8_1
#undef arg1
}

/* {WEL_COM_ISTREAM}.read_all */
EIF_TYPED_VALUE F1431_15038 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "read_all";
	RTEX;
	EIF_NATURAL_64 loc1 = (EIF_NATURAL_64) 0;
	EIF_NATURAL_32 loc2 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc3 = (EIF_NATURAL_32) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE up3x = {{0}, SK_POINTER};
#define up3 up3x.it_p
	EIF_TYPED_VALUE ui8_1x = {{0}, SK_INT64};
#define ui8_1 ui8_1x.it_i8
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_64 tu8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_UINT64, &loc1);
	RTLU(SK_UINT32, &loc2);
	RTLU(SK_UINT32, &loc3);
	
	RTEAA(l_feature_name, 1430, Current, 3, 0, 21686);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1430, Current, 21686);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0x3C000000, 1, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(12468, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	tu8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5029, "cb_size", tr1))(tr1)).it_n8);
	loc1 = (EIF_NATURAL_64) tu8_1;
	if (RTAL & CK_CHECK) {
		RTHOOK(2);
		RTCT("not_too_big", EX_CHECK);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4426, 218))(Current)).it_i4);
		tu8_1 = (EIF_NATURAL_64) ti4_1;
		if ((EIF_BOOLEAN) (loc1 <= tu8_1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTHOOK(3);
	RTDBGAL(0, 0xF80000AB, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(171, 0x01).id);
	ti4_1 = (EIF_INTEGER_32) loc1;
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3276, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(3,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	ui8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(12472, dtype))(Current, ui8_1x);
	RTHOOK(5);
	RTDBGAL(2, 0x38000000, 1, 0); /* loc2 */
	tp1 = *(EIF_POINTER *)(Current + RTWA(12467, dtype));
	up1 = tp1;
	tp2 = *(EIF_POINTER *)(Result + RTVA(3282, "item", Result));
	up2 = tp2;
	tu4_1 = (EIF_NATURAL_32) loc1;
	uu4_1 = tu4_1;
	up3 = (EIF_NATURAL_32 *) &(loc3);
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(12483, dtype))(Current, up1x, up2x, uu4_1x, up3x)).it_n4);
	loc2 = (EIF_NATURAL_32) tu4_1;
	if (RTAL & CK_CHECK) {
		RTHOOK(6);
		RTCT("l_com_result = {WEL_COM_HRESULT}.s_ok", EX_CHECK);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5033, 962))(Current)).it_n4);
		if ((EIF_BOOLEAN)(loc2 == tu4_1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	if (RTAL & CK_CHECK) {
		RTHOOK(7);
		RTCT("l_acutal_read = l_bytes_count.as_natural_32", EX_CHECK);
		tu4_1 = (EIF_NATURAL_32) loc1;
		if ((EIF_BOOLEAN)(loc3 == tu4_1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef up2
#undef up3
#undef ui8_1
#undef ui4_1
#undef uu4_1
}

/* {WEL_COM_ISTREAM}.seek_from_beginning */
void F1431_15039 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "seek_from_beginning";
	RTEX;
	EIF_NATURAL_64 loc1 = (EIF_NATURAL_64) 0;
	EIF_NATURAL_32 loc2 = (EIF_NATURAL_32) 0;
#define arg1 arg1x.it_i8
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ui8_1x = {{0}, SK_INT64};
#define ui8_1 ui8_1x.it_i8
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_NATURAL_32 tu4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i8 = * (EIF_INTEGER_64 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT64,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_UINT64, &loc1);
	RTLU(SK_UINT32, &loc2);
	
	RTEAA(l_feature_name, 1430, Current, 2, 1, 21687);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1430, Current, 21687);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tp1 = *(EIF_POINTER *)(Current + RTWA(12467, dtype));
	tp2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
	if ((EIF_BOOLEAN)(tp1 != tp2)) {
		RTHOOK(2);
		RTDBGAL(2, 0x38000000, 1, 0); /* loc2 */
		tp1 = *(EIF_POINTER *)(Current + RTWA(12467, dtype));
		up1 = tp1;
		ui8_1 = arg1;
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(12486, dtype))(Current)).it_n4);
		uu4_1 = tu4_1;
		up2 = (EIF_NATURAL_64 *) &(loc1);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(12485, dtype))(Current, up1x, ui8_1x, uu4_1x, up2x)).it_n4);
		loc2 = (EIF_NATURAL_32) tu4_1;
		if (RTAL & CK_CHECK) {
			RTHOOK(3);
			RTCT("l_result = {WEL_COM_HRESULT}.s_ok", EX_CHECK);
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5033, 962))(Current)).it_n4);
			if ((EIF_BOOLEAN)(loc2 == tu4_1)) {
				RTCK;
			} else {
				RTCF;
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef up1
#undef up2
#undef ui8_1
#undef uu4_1
#undef arg1
}

/* {WEL_COM_ISTREAM}.dispose */
void F1431_15040 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "dispose";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1430, Current, 0, 0, 21688);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1430, Current, 21688);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tp1 = *(EIF_POINTER *)(Current + RTWA(12467, dtype));
	tp2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
	if ((EIF_BOOLEAN)(tp1 != tp2)) {
		RTHOOK(2);
		tp1 = *(EIF_POINTER *)(Current + RTWA(12467, dtype));
		up1 = tp1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(12477, dtype))(Current, up1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef up1
}

/* {WEL_COM_ISTREAM}.shlwapi_handle */
EIF_TYPED_VALUE F1431_15041 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "shlwapi_handle";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,ur1);
	RTLIU(5);
	RTLU (SK_POINTER, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1430, Current, 1, 0, 21689);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1430, Current, 21689);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF80005A1, 0, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(12474, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	if ((EIF_BOOLEAN)(loc1 == NULL)) {
		RTHOOK(3);
		RTDBGAL(1, 0xF80005A1, 0, 0); /* loc1 */
		tr1 = RTLN(eif_new_type(1441, 0x01).id);
		tr2 = RTMS_EX_H("shlwapi.dll",11,1718638956);
		ur1 = tr2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(12611, Dtype(tr1)))(tr1, ur1x);
		RTNHOOK(3,1);
		loc1 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(4);
		RTDBGAA(Current, dtype, 12474, 0xF80005A1, 0); /* shlwapi_dll */
		tr1 = RTCCL(loc1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(12474, dtype)) = (EIF_REFERENCE) tr1;
	}
	RTHOOK(5);
	RTDBGAL(0, 0x40000000, 1,0); /* Result */
	tp1 = *(EIF_POINTER *)(loc1 + RTVA(12527, "item", loc1));
	Result = (EIF_POINTER) tp1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_POINTER; r.it_p = Result; return r; }
#undef up1
#undef ur1
}

/* {WEL_COM_ISTREAM}.shlwapi_dll */
EIF_TYPED_VALUE F1431_15042 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(12474,Dtype(Current)));
	return r;
}


/* {WEL_COM_ISTREAM}.c_sh_create_stream_on_file */
EIF_TYPED_VALUE F1431_15043 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "c_sh_create_stream_on_file";
	RTEX;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_p
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_p = * (EIF_POINTER* *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_UINT32, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_POINTER,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1430, Current, 0, 2, 21691);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1430, Current, 21691);
	RTIV(Current, RTAL);
	Result = inline_F1431_15043 ((EIF_POINTER) arg1, (EIF_POINTER*) arg2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT32; r.it_n4 = Result; return r; }
#undef arg2
#undef arg1
}

/* {WEL_COM_ISTREAM}.c_sh_create_mem_stream */
EIF_TYPED_VALUE F1431_15044 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "c_sh_create_mem_stream";
	RTEX;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_p
#define arg3 arg3x.it_n4
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_n4 = * (EIF_NATURAL_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_p = * (EIF_POINTER *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_POINTER, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_POINTER,&arg2);
	RTLU(SK_UINT32,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1430, Current, 0, 3, 21692);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1430, Current, 21692);
	RTIV(Current, RTAL);
	Result = inline_F1431_15044 ((EIF_POINTER) arg1, (EIF_POINTER) arg2, (EIF_NATURAL_32) arg3);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_POINTER; r.it_p = Result; return r; }
#undef arg3
#undef arg2
#undef arg1
}

/* {WEL_COM_ISTREAM}.c_release */
void F1431_15045 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "c_release";
	RTEX;
#define arg1 arg1x.it_p
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1430, Current, 0, 1, 21693);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1430, Current, 21693);
	RTIV(Current, RTAL);
	inline_F1431_15045 ((EIF_POINTER) arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {WEL_COM_ISTREAM}.c_commit */
EIF_TYPED_VALUE F1431_15046 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "c_commit";
	RTEX;
#define arg1 arg1x.it_p
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_UINT32, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1430, Current, 0, 1, 21694);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1430, Current, 21694);
	RTIV(Current, RTAL);
	Result = inline_F1431_15046 ((EIF_POINTER) arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT32; r.it_n4 = Result; return r; }
#undef arg1
}

/* {WEL_COM_ISTREAM}.c_clone */
EIF_TYPED_VALUE F1431_15047 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "c_clone";
	RTEX;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_p
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_p = * (EIF_POINTER* *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_UINT32, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_POINTER,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1430, Current, 0, 2, 21695);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1430, Current, 21695);
	RTIV(Current, RTAL);
	Result = inline_F1431_15047 ((EIF_POINTER) arg1, (EIF_POINTER*) arg2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT32; r.it_n4 = Result; return r; }
#undef arg2
#undef arg1
}

/* {WEL_COM_ISTREAM}.c_copy_to */
EIF_TYPED_VALUE F1431_15048 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x)
{
	GTCX
	char *l_feature_name = "c_copy_to";
	RTEX;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_p
#define arg3 arg3x.it_n8
#define arg4 arg4x.it_p
#define arg5 arg5x.it_p
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg5x.type & SK_HEAD) == SK_REF) arg5x.it_p = * (EIF_NATURAL_64* *) arg5x.it_r;
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_p = * (EIF_NATURAL_64* *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_n8 = * (EIF_NATURAL_64 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_p = * (EIF_POINTER *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_UINT32, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_POINTER,&arg2);
	RTLU(SK_UINT64,&arg3);
	RTLU(SK_POINTER,&arg4);
	RTLU(SK_POINTER,&arg5);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1430, Current, 0, 5, 21696);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1430, Current, 21696);
	RTIV(Current, RTAL);
	Result = inline_F1431_15048 ((EIF_POINTER) arg1, (EIF_POINTER) arg2, (EIF_NATURAL_64) arg3, (EIF_NATURAL_64*) arg4, (EIF_NATURAL_64*) arg5);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(7);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT32; r.it_n4 = Result; return r; }
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {WEL_COM_ISTREAM}.c_set_size */
EIF_TYPED_VALUE F1431_15049 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "c_set_size";
	RTEX;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_n8
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_n8 = * (EIF_NATURAL_64 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_UINT32, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_UINT64,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1430, Current, 0, 2, 21697);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1430, Current, 21697);
	RTIV(Current, RTAL);
	Result = inline_F1431_15049 ((EIF_POINTER) arg1, (EIF_NATURAL_64) arg2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT32; r.it_n4 = Result; return r; }
#undef arg2
#undef arg1
}

/* {WEL_COM_ISTREAM}.c_stat */
EIF_TYPED_VALUE F1431_15050 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "c_stat";
	RTEX;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_p
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_p = * (EIF_POINTER *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_UINT32, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_POINTER,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1430, Current, 0, 2, 21698);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1430, Current, 21698);
	RTIV(Current, RTAL);
	Result = inline_F1431_15050 ((EIF_POINTER) arg1, (EIF_POINTER) arg2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT32; r.it_n4 = Result; return r; }
#undef arg2
#undef arg1
}

/* {WEL_COM_ISTREAM}.c_read */
EIF_TYPED_VALUE F1431_15051 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "c_read";
	RTEX;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_p
#define arg3 arg3x.it_n4
#define arg4 arg4x.it_p
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_p = * (EIF_NATURAL_32* *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_n4 = * (EIF_NATURAL_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_p = * (EIF_POINTER *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_UINT32, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_POINTER,&arg2);
	RTLU(SK_UINT32,&arg3);
	RTLU(SK_POINTER,&arg4);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1430, Current, 0, 4, 21699);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1430, Current, 21699);
	RTIV(Current, RTAL);
	Result = inline_F1431_15051 ((EIF_POINTER) arg1, (EIF_POINTER) arg2, (EIF_NATURAL_32) arg3, (EIF_NATURAL_32*) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT32; r.it_n4 = Result; return r; }
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {WEL_COM_ISTREAM}.c_istream_write */
void F1431_15052 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "c_istream_write";
	RTEX;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1430, Current, 0, 0, 21700);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1430, Current, 21700);
	RTIV(Current, RTAL);
	if (RTAL & CK_CHECK) {
		RTHOOK(1);
		RTCT("not_implemented", EX_CHECK);
			RTCF;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {WEL_COM_ISTREAM}.c_seek */
EIF_TYPED_VALUE F1431_15053 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "c_seek";
	RTEX;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_i8
#define arg3 arg3x.it_n4
#define arg4 arg4x.it_p
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_p = * (EIF_NATURAL_64* *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_n4 = * (EIF_NATURAL_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i8 = * (EIF_INTEGER_64 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_UINT32, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_INT64,&arg2);
	RTLU(SK_UINT32,&arg3);
	RTLU(SK_POINTER,&arg4);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1430, Current, 0, 4, 21701);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1430, Current, 21701);
	RTIV(Current, RTAL);
	Result = inline_F1431_15053 ((EIF_POINTER) arg1, (EIF_INTEGER_64) arg2, (EIF_NATURAL_32) arg3, (EIF_NATURAL_64*) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT32; r.it_n4 = Result; return r; }
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {WEL_COM_ISTREAM}.stream_seek_set */
EIF_TYPED_VALUE F1431_15054 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT32;
	r.it_n4 = (EIF_NATURAL_32) ((EIF_NATURAL_32) 0U);
	return r;
}

/* {WEL_COM_ISTREAM}.stream_seek_cur */
EIF_TYPED_VALUE F1431_15055 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT32;
	r.it_n4 = (EIF_NATURAL_32) ((EIF_NATURAL_32) 1U);
	return r;
}

/* {WEL_COM_ISTREAM}.stream_seek_end */
EIF_TYPED_VALUE F1431_15056 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT32;
	r.it_n4 = (EIF_NATURAL_32) ((EIF_NATURAL_32) 2U);
	return r;
}

void EIF_Minit1431 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
