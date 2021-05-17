/*
 * Code for class EV_CHARACTER_FORMAT_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1872.h"
#include "redit.h"
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

/* {EV_CHARACTER_FORMAT_IMP}.make */
void F1889_21857 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLIU(3);
	
	RTGC;
	F1887_21772(Current);
	F1887_21786(Current);
	tr1 = RTLNS(eif_new_type(1828, 0x01).id, 1828, _OBJSIZ_0_0_0_1_0_0_0_0_);
	F1829_20489(RTCW(tr1), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L));
	F1887_21795(Current, tr1);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_1_2_0_1_0_0_);
	tr1 = RTLNS(eif_new_type(1828, 0x01).id, 1828, _OBJSIZ_0_0_0_1_0_0_0_0_);
	F1829_20489(RTCW(tr1), ((EIF_INTEGER_32) 255L), ((EIF_INTEGER_32) 255L), ((EIF_INTEGER_32) 255L));
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1) + O17154[Dtype(tr1)-1828]);
	(((CHARFORMAT2 *)tp1)->crBackColor = (EIF_INTEGER)(ti4_1));
	loc1 = RTOUCR(341,F1889_21869, (Current));
	F1696_18990(Current, (EIF_BOOLEAN) 1);
	RTLE;
}

/* {EV_CHARACTER_FORMAT_IMP}.color */
EIF_REFERENCE F1889_21858 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLIU(3);
	
	RTGC;
	loc1 = F1887_21781(Current);
	Result = RTLNS(eif_new_type(1602, 0x01).id, 1602, _OBJSIZ_2_0_0_0_0_0_0_0_);
	ti4_1 = F1829_20494(RTCW(loc1));
	ti4_2 = F1829_20495(RTCW(loc1));
	ti4_3 = F1829_20496(RTCW(loc1));
	F1603_17888(RTCW(Result), ti4_1, ti4_2, ti4_3);
	RTLE;
	return Result;
}

/* {EV_CHARACTER_FORMAT_IMP}.background_color */
EIF_REFERENCE F1889_21859 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLIU(3);
	
	RTGC;
	loc1 = F1888_21838(Current);
	Result = RTLNS(eif_new_type(1602, 0x01).id, 1602, _OBJSIZ_2_0_0_0_0_0_0_0_);
	ti4_1 = F1829_20494(RTCW(loc1));
	ti4_2 = F1829_20495(RTCW(loc1));
	ti4_3 = F1829_20496(RTCW(loc1));
	F1603_17888(RTCW(Result), ti4_1, ti4_2, ti4_3);
	RTLE;
	return Result;
}

/* {EV_CHARACTER_FORMAT_IMP}.font */
EIF_REFERENCE F1889_21860 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(5);
	RTLR(0,Result);
	RTLR(1,loc1);
	RTLR(2,loc2);
	RTLR(3,Current);
	RTLR(4,tr1);
	RTLIU(5);
	
	RTGC;
	Result = RTLNS(eif_new_type(1601, 0x01).id, 1601, _OBJSIZ_2_0_0_0_0_0_0_0_);
	F1596_17742(RTCW(Result));
	loc1 = *(EIF_REFERENCE *)(RTCW(Result) + _REFACS_1_);
	loc1 = RTRV(eif_new_type(1885, 0x00), loc1);
	RTCT0("font_imp /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	loc2 = RTLNS(eif_new_type(1884, 0x01).id, 1884, _OBJSIZ_0_2_0_3_0_1_0_0_);
	tr1 = F1887_21783(Current);
	F1885_21695(RTCW(loc2), tr1);
	F1886_21743(RTCW(loc1), loc2);
	if ((EIF_BOOLEAN)(F1889_21872(Current) == ((EIF_INTEGER_32) 11L))) {
		F1886_21726(RTCW(loc1), ((EIF_INTEGER_32) 11L));
	}
	if (F1889_21871(Current)) {
		F1886_21725(RTCW(loc1), ((EIF_INTEGER_32) 8L));
	}
	RTLE;
	return Result;
}

/* {EV_CHARACTER_FORMAT_IMP}.effects */
EIF_REFERENCE F1889_21861 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,loc2);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLIU(3);
	
	RTGC;
	loc2 = RTLNS(eif_new_type(1310, 0x01).id, 1310, _OBJSIZ_6_2_0_3_0_7_0_0_);
	F1311_15448(RTCW(loc2));
	Result = RTLNS(eif_new_type(59, 0x01).id, 59, _OBJSIZ_0_2_0_1_0_0_0_0_);
	loc1 = F1887_21785(Current);
	if (F1258_14781(Current, loc1, ((EIF_INTEGER_32) 8L))) {
		F60_9657(RTCW(Result));
	}
	if (F1258_14781(Current, loc1, ((EIF_INTEGER_32) 4L))) {
		F60_9659(RTCW(Result));
	}
	ti4_1 = F1889_21873(Current);
	F60_9661(RTCW(Result), ti4_1);
	F1311_15449(RTCW(loc2));
	RTLE;
	return Result;
}

/* {EV_CHARACTER_FORMAT_IMP}.set_font */
void F1889_21862 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,Current);
	RTLR(4,loc2);
	RTLIU(5);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_1_);
	loc1 = RTRV(eif_new_type(1885, 0x00), loc1);
	RTCT0("font_imp /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	tr1 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_3_);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		tr1 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_3_);
		F1887_21788(Current, tr1);
	}
	loc2 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_2_);
	loc2 = F1885_21699(RTCW(loc2));
	ti4_1 = F1407_17215(RTCW(loc2));
	F1887_21794(Current, ti4_1);
	ti4_1 = F1886_21723(RTCW(loc1));
	F1887_21791(Current, ti4_1);
	ti4_1 = F1407_17209(RTCW(loc2));
	F1887_21787(Current, ti4_1);
	ti4_1 = F1407_17205(RTCW(loc2));
	if ((EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 700L))) {
		F1887_21796(Current);
	} else {
		F1887_21797(Current);
	}
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_4_2_0_2_);
	if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 11L))) {
		F1887_21798(Current);
	} else {
		F1887_21799(Current);
	}
	F1296_15104(RTCW(loc2));
	RTLE;
}

/* {EV_CHARACTER_FORMAT_IMP}.set_color */
void F1889_21863 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_1_);
	loc1 = RTRV(eif_new_type(1829, 0x00), loc1);
	RTCT0("color_imp /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	F1887_21795(Current, loc1);
	RTLE;
}

/* {EV_CHARACTER_FORMAT_IMP}.set_background_color */
void F1889_21864 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_1_);
	loc1 = RTRV(eif_new_type(1829, 0x00), loc1);
	RTCT0("color_imp /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	F1888_21841(Current, loc1);
	RTLE;
}

/* {EV_CHARACTER_FORMAT_IMP}.set_effects */
void F1889_21865 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTGC;
	loc1 = RTLNS(eif_new_type(1310, 0x01).id, 1310, _OBJSIZ_6_2_0_3_0_7_0_0_);
	F1311_15448(RTCW(loc1));
	tb1 = *(EIF_BOOLEAN *)(RTCW(arg1)+ _CHROFF_0_1_);
	if (tb1) {
		F1887_21802(Current);
	} else {
		F1887_21803(Current);
	}
	tb1 = *(EIF_BOOLEAN *)(RTCW(arg1)+ _CHROFF_0_0_);
	if (tb1) {
		F1887_21800(Current);
	} else {
		F1887_21801(Current);
	}
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_0_2_0_0_);
	ti4_1 = F1883_21671(Current, loc1, (EIF_INTEGER_32) (ti4_1 * ((EIF_INTEGER_32) 20L)));
	F1887_21793(Current, ti4_1);
	F1311_15449(RTCW(loc1));
	RTLE;
}

/* {EV_CHARACTER_FORMAT_IMP}.name */
EIF_REFERENCE F1889_21866 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_REFERENCE) F1887_21774(Current);
}

/* {EV_CHARACTER_FORMAT_IMP}.family */
EIF_INTEGER_32 F1889_21867 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	loc1 = F1887_21783(Current);
	loc2 = F1407_17214(RTCW(loc1));
	loc3 = F1407_17213(RTCW(loc1));
	if ((EIF_BOOLEAN)(loc2 == *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_2_0_0_))) {
		RTLE;
		return (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	} else {
		if ((EIF_BOOLEAN)(loc2 == (EIF_INTEGER_32) FF_ROMAN)) {
			Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
		} else {
			if ((EIF_BOOLEAN)(loc2 == (EIF_INTEGER_32) FF_SWISS)) {
				Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
			} else {
				if ((EIF_BOOLEAN)(loc2 == (EIF_INTEGER_32) FF_MODERN)) {
					if ((EIF_BOOLEAN)(loc3 == ((EIF_INTEGER_32) 2L))) {
						RTLE;
						return (EIF_INTEGER_32) ((EIF_INTEGER_32) 5L);
					} else {
						RTLE;
						return (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
					}
				} else {
					RTLE;
					return (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
				}
			}
		}
	}
	RTLE;
	return Result;
}

/* {EV_CHARACTER_FORMAT_IMP}.default_wel_log_font */
static EIF_REFERENCE F1889_21869_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(341)

	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(eif_new_type(1406, 0x01).id, 1406, _OBJSIZ_0_1_0_0_0_1_0_0_);
	tr2 = F502_14137(Current);
	F1407_17197(RTCW(tr1), tr2);
	Result = (EIF_REFERENCE) tr1;
	ti4_1 = F1407_17214(RTCW(Result));
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_2_0_0_) = (EIF_INTEGER_32) ti4_1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1889_21869 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(341,F1889_21869_body,(Current));
}

/* {EV_CHARACTER_FORMAT_IMP}.is_bold */
EIF_BOOLEAN F1889_21871 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	ti4_1 = F1887_21785(Current);
	Result = F1258_14781(Current, ti4_1, ((EIF_INTEGER_32) 1L));
	RTLE;
	return Result;
}

/* {EV_CHARACTER_FORMAT_IMP}.shape */
EIF_INTEGER_32 F1889_21872 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	ti4_1 = F1887_21785(Current);
	if (F1258_14781(Current, ti4_1, ((EIF_INTEGER_32) 2L))) {
		RTLE;
		return (EIF_INTEGER_32) ((EIF_INTEGER_32) 11L);
	} else {
		RTLE;
		return (EIF_INTEGER_32) ((EIF_INTEGER_32) 10L);
	}/* NOTREACHED */
	
}

/* {EV_CHARACTER_FORMAT_IMP}.vertical_offset */
EIF_INTEGER_32 F1889_21873 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	loc1 = RTLNS(eif_new_type(1310, 0x01).id, 1310, _OBJSIZ_6_2_0_3_0_7_0_0_);
	F1311_15448(RTCW(loc1));
	ti4_1 = F1887_21779(Current);
	Result = F1883_21670(Current, loc1, ti4_1, ((EIF_INTEGER_32) 20L));
	F1311_15449(RTCW(loc1));
	RTLE;
	return Result;
}

/* {EV_CHARACTER_FORMAT_IMP}.height */
EIF_INTEGER_32 F1889_21874 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) F1887_21777(Current);
}

/* {EV_CHARACTER_FORMAT_IMP}.fcolor */
EIF_INTEGER_32 F1889_21875 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = F1887_21781(Current);
	Result = *(EIF_INTEGER_32 *)(RTCW(tr1) + O17154[Dtype(tr1)-1828]);
	RTLE;
	return Result;
}

/* {EV_CHARACTER_FORMAT_IMP}.bcolor */
EIF_INTEGER_32 F1889_21876 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = F1888_21838(Current);
	Result = *(EIF_INTEGER_32 *)(RTCW(tr1) + O17154[Dtype(tr1)-1828]);
	RTLE;
	return Result;
}

/* {EV_CHARACTER_FORMAT_IMP}.is_striked_out */
EIF_BOOLEAN F1889_21878 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	ti4_1 = F1887_21785(Current);
	Result = F1258_14781(Current, ti4_1, ((EIF_INTEGER_32) 8L));
	RTLE;
	return Result;
}

/* {EV_CHARACTER_FORMAT_IMP}.is_underlined */
EIF_BOOLEAN F1889_21879 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	ti4_1 = F1887_21785(Current);
	Result = F1258_14781(Current, ti4_1, ((EIF_INTEGER_32) 4L));
	RTLE;
	return Result;
}

/* {EV_CHARACTER_FORMAT_IMP}.destroy */
void F1889_21880 (EIF_REFERENCE Current)
{
	GTCX
	
	
	F1337_15837(Current);
}

void EIF_Minit1872 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
