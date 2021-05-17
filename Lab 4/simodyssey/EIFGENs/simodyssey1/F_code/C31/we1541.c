/*
 * Code for class WEL_BITMAP_INFO_HEADER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1541.h"
#include <bmpinfoh.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_BITMAP_INFO_HEADER}.make */
void F1403_17080 (EIF_REFERENCE Current)
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
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	ti4_1 = RTOUCB(EIF_INTEGER_32,357,F1403_17102, (Current));
	cwel_bitmapinfoheader_set_size((tp1), (ti4_1));
	F1403_17092(Current, ((EIF_INTEGER_32) 0L));
	F1403_17093(Current, ((EIF_INTEGER_32) 0L));
	F1403_17094(Current, ((EIF_INTEGER_32) 0L));
	F1403_17095(Current, ((EIF_INTEGER_32) 0L));
	F1403_17096(Current, ((EIF_INTEGER_32) 0L));
	F1403_17097(Current, ((EIF_INTEGER_32) 0L));
	F1403_17098(Current, ((EIF_INTEGER_32) 0L));
	F1403_17099(Current, ((EIF_INTEGER_32) 0L));
	F1403_17100(Current, ((EIF_INTEGER_32) 0L));
	F1403_17101(Current, ((EIF_INTEGER_32) 0L));
	RTLE;
}

/* {WEL_BITMAP_INFO_HEADER}.bit_count */
EIF_INTEGER_32 F1403_17084 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	return (EIF_INTEGER_32) (EIF_INTEGER_32) cwel_bitmapinfoheader_get_bitcount((tp1));
}

/* {WEL_BITMAP_INFO_HEADER}.compression */
EIF_INTEGER_32 F1403_17085 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	return (EIF_INTEGER_32) (EIF_INTEGER_32) cwel_bitmapinfoheader_get_compression((tp1));
}

/* {WEL_BITMAP_INFO_HEADER}.size_image */
EIF_INTEGER_32 F1403_17086 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	return (EIF_INTEGER_32) (EIF_INTEGER_32) cwel_bitmapinfoheader_get_sizeimage((tp1));
}

/* {WEL_BITMAP_INFO_HEADER}.clr_used */
EIF_INTEGER_32 F1403_17089 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	return (EIF_INTEGER_32) (EIF_INTEGER_32) cwel_bitmapinfoheader_get_clrused((tp1));
}

/* {WEL_BITMAP_INFO_HEADER}.color_count */
EIF_INTEGER_32 F1403_17091 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	switch (F1403_17084(Current)) {
		case 0L:
			break;
		case 1L:
			Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
			break;
		case 4L:
			Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 16L);
			break;
		case 8L:
			Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 256L);
			break;
		case 16L:
		case 32L:
			if ((EIF_BOOLEAN)(F1403_17085(Current) == ((EIF_INTEGER_32) 0L))) {
				Result = F1403_17089(Current);
			} else {
				if ((EIF_BOOLEAN)(F1403_17085(Current) == ((EIF_INTEGER_32) 3L))) {
					Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
				}
			}
			break;
		case 24L:
			Result = F1403_17089(Current);
			break;
		default:
			break;
	}
	RTLE;
	return Result;
}

/* {WEL_BITMAP_INFO_HEADER}.set_width */
void F1403_17092 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	cwel_bitmapinfoheader_set_width((tp1), (arg1));
}

/* {WEL_BITMAP_INFO_HEADER}.set_height */
void F1403_17093 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	cwel_bitmapinfoheader_set_height((tp1), (arg1));
}

/* {WEL_BITMAP_INFO_HEADER}.set_planes */
void F1403_17094 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	cwel_bitmapinfoheader_set_planes((tp1), (arg1));
}

/* {WEL_BITMAP_INFO_HEADER}.set_bit_count */
void F1403_17095 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	cwel_bitmapinfoheader_set_bitcount((tp1), (arg1));
}

/* {WEL_BITMAP_INFO_HEADER}.set_compression */
void F1403_17096 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	cwel_bitmapinfoheader_set_compression((tp1), (arg1));
}

/* {WEL_BITMAP_INFO_HEADER}.set_size_image */
void F1403_17097 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	cwel_bitmapinfoheader_set_sizeimage((tp1), (arg1));
}

/* {WEL_BITMAP_INFO_HEADER}.set_x_pels_per_meter */
void F1403_17098 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	cwel_bitmapinfoheader_set_xpelspermeter((tp1), (arg1));
}

/* {WEL_BITMAP_INFO_HEADER}.set_y_pels_per_meter */
void F1403_17099 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	cwel_bitmapinfoheader_set_ypelspermeter((tp1), (arg1));
}

/* {WEL_BITMAP_INFO_HEADER}.set_clr_used */
void F1403_17100 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	cwel_bitmapinfoheader_set_clrused((tp1), (arg1));
}

/* {WEL_BITMAP_INFO_HEADER}.set_clr_important */
void F1403_17101 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	cwel_bitmapinfoheader_set_clrimportant((tp1), (arg1));
}

/* {WEL_BITMAP_INFO_HEADER}.structure_size */
static EIF_INTEGER_32 F1403_17102_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 357)

	
	RTEV;
	RTOTP;
	Result = (EIF_INTEGER_32) sizeof (BITMAPINFOHEADER);
	RTOTE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F1403_17102 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,357,F1403_17102_body,(Current));
}

/* {WEL_BITMAP_INFO_HEADER}.c_size_of_bitmapinfoheader */
EIF_INTEGER_32 F1403_17103 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) sizeof (BITMAPINFOHEADER);
	return Result;
}

/* {WEL_BITMAP_INFO_HEADER}.cwel_bitmapinfoheader_set_size */
void F1403_17104 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	cwel_bitmapinfoheader_set_size((arg1), (arg2));
}

/* {WEL_BITMAP_INFO_HEADER}.cwel_bitmapinfoheader_set_width */
void F1403_17105 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	cwel_bitmapinfoheader_set_width((arg1), (arg2));
}

/* {WEL_BITMAP_INFO_HEADER}.cwel_bitmapinfoheader_set_height */
void F1403_17106 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	cwel_bitmapinfoheader_set_height((arg1), (arg2));
}

/* {WEL_BITMAP_INFO_HEADER}.cwel_bitmapinfoheader_set_planes */
void F1403_17107 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	cwel_bitmapinfoheader_set_planes((arg1), (arg2));
}

/* {WEL_BITMAP_INFO_HEADER}.cwel_bitmapinfoheader_set_bitcount */
void F1403_17108 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	cwel_bitmapinfoheader_set_bitcount((arg1), (arg2));
}

/* {WEL_BITMAP_INFO_HEADER}.cwel_bitmapinfoheader_set_compression */
void F1403_17109 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	cwel_bitmapinfoheader_set_compression((arg1), (arg2));
}

/* {WEL_BITMAP_INFO_HEADER}.cwel_bitmapinfoheader_set_sizeimage */
void F1403_17110 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	cwel_bitmapinfoheader_set_sizeimage((arg1), (arg2));
}

/* {WEL_BITMAP_INFO_HEADER}.cwel_bitmapinfoheader_set_xpelspermeter */
void F1403_17111 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	cwel_bitmapinfoheader_set_xpelspermeter((arg1), (arg2));
}

/* {WEL_BITMAP_INFO_HEADER}.cwel_bitmapinfoheader_set_ypelspermeter */
void F1403_17112 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	cwel_bitmapinfoheader_set_ypelspermeter((arg1), (arg2));
}

/* {WEL_BITMAP_INFO_HEADER}.cwel_bitmapinfoheader_set_clrused */
void F1403_17113 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	cwel_bitmapinfoheader_set_clrused((arg1), (arg2));
}

/* {WEL_BITMAP_INFO_HEADER}.cwel_bitmapinfoheader_set_clrimportant */
void F1403_17114 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	cwel_bitmapinfoheader_set_clrimportant((arg1), (arg2));
}

/* {WEL_BITMAP_INFO_HEADER}.cwel_bitmapinfoheader_get_bitcount */
EIF_INTEGER_32 F1403_17118 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) cwel_bitmapinfoheader_get_bitcount((arg1));
	return Result;
}

/* {WEL_BITMAP_INFO_HEADER}.cwel_bitmapinfoheader_get_compression */
EIF_INTEGER_32 F1403_17119 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) cwel_bitmapinfoheader_get_compression((arg1));
	return Result;
}

/* {WEL_BITMAP_INFO_HEADER}.cwel_bitmapinfoheader_get_sizeimage */
EIF_INTEGER_32 F1403_17120 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) cwel_bitmapinfoheader_get_sizeimage((arg1));
	return Result;
}

/* {WEL_BITMAP_INFO_HEADER}.cwel_bitmapinfoheader_get_clrused */
EIF_INTEGER_32 F1403_17123 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) cwel_bitmapinfoheader_get_clrused((arg1));
	return Result;
}

void EIF_Minit1541 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
