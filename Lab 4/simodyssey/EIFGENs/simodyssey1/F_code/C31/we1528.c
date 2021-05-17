/*
 * Code for class WEL_RICH_EDIT_SELCHANGE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1528.h"
#include "redit.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_RICH_EDIT_SELCHANGE}.make_by_nmhdr */
void F1390_16822 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_0_1_0_0_0_0_);
	F1296_15096(Current, tp1);
	RTLE;
}

/* {WEL_RICH_EDIT_SELCHANGE}.selection_type */
EIF_INTEGER_32 F1390_16823 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	return (EIF_INTEGER_32) (EIF_INTEGER_32) (((SELCHANGE *)tp1)->seltyp);
}

/* {WEL_RICH_EDIT_SELCHANGE}.character_range */
EIF_REFERENCE F1390_16824 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTGC;
	Result = RTLNS(eif_new_type(1405, 0x01).id, 1405, _OBJSIZ_0_1_0_0_0_1_0_0_);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	tp1 = (EIF_POINTER) &(((SELCHANGE *)tp1)->chrg);
	F1296_15096(RTCW(Result), tp1);
	RTLE;
	return Result;
}

/* {WEL_RICH_EDIT_SELCHANGE}.structure_size */
static EIF_INTEGER_32 F1390_16825_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 409)

	
	RTEV;
	RTOTP;
	Result = (EIF_INTEGER_32) sizeof (SELCHANGE);
	RTOTE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F1390_16825 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,409,F1390_16825_body,(Current));
}

/* {WEL_RICH_EDIT_SELCHANGE}.c_size_of_edit_selchange */
EIF_INTEGER_32 F1390_16826 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) sizeof (SELCHANGE);
	return Result;
}

/* {WEL_RICH_EDIT_SELCHANGE}.cwel_selchange_get_seltyp */
EIF_INTEGER_32 F1390_16827 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) (((SELCHANGE *)arg1)->seltyp);
	
	return Result;
}

/* {WEL_RICH_EDIT_SELCHANGE}.cwel_selchange_get_chrg */
EIF_POINTER F1390_16828 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) &(((SELCHANGE *)arg1)->chrg);
	
	return Result;
}

void EIF_Minit1528 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
