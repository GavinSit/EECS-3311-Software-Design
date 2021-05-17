/*
 * Class ES_TEST_CASE
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static const EIF_TYPE_INDEX egt_0_1000 [] = {0xFF01,232,0xFFFF};
static const EIF_TYPE_INDEX egt_1_1000 [] = {0xFF01,245,999,0xFFFF};
static const EIF_TYPE_INDEX egt_2_1000 [] = {0xFF01,999,0xFFFF};
static const EIF_TYPE_INDEX egt_3_1000 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_4_1000 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_5_1000 [] = {0xFF01,999,0xFFFF};
static const EIF_TYPE_INDEX egt_6_1000 [] = {0xFF01,999,0xFFFF};
static const EIF_TYPE_INDEX egt_7_1000 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_8_1000 [] = {0xFF01,14,0xFFFF};
static const EIF_TYPE_INDEX egt_9_1000 [] = {0xFF01,232,0xFFFF};
static const EIF_TYPE_INDEX egt_10_1000 [] = {0xFF01,232,0xFFFF};
static const EIF_TYPE_INDEX egt_11_1000 [] = {0xFF01,15,0xFFFF};
static const EIF_TYPE_INDEX egt_12_1000 [] = {0xFF01,999,0xFFFF};
static const EIF_TYPE_INDEX egt_13_1000 [] = {0xFF01,51,0xFFFF};
static const EIF_TYPE_INDEX egt_14_1000 [] = {0xFF01,232,0xFFFF};
static const EIF_TYPE_INDEX egt_15_1000 [] = {0xFF01,232,0xFFFF};
static const EIF_TYPE_INDEX egt_16_1000 [] = {0xFF01,232,0xFFFF};
static const EIF_TYPE_INDEX egt_17_1000 [] = {0xFF01,254,0xFF01,0xFFF9,0,186,0xFFFF};


static const struct desc_info desc_1000[] = {
	{EIF_GENERIC(NULL), 0xFFFFFFFF, 0xFFFFFFFF},
	{EIF_GENERIC(egt_0_1000), 0, 0xFFFFFFFF},
	{EIF_GENERIC(egt_1_1000), 1, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 2, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 3, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 4, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 5, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 6, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 7, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 8, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 9, 0xFFFFFFFF},
	{EIF_GENERIC(egt_2_1000), 10, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 11, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 12, 0xFFFFFFFF},
	{EIF_GENERIC(egt_3_1000), 13, 0xFFFFFFFF},
	{EIF_GENERIC(egt_4_1000), 14, 0xFFFFFFFF},
	{EIF_GENERIC(egt_5_1000), 15, 0xFFFFFFFF},
	{EIF_GENERIC(egt_6_1000), 16, 0xFFFFFFFF},
	{EIF_GENERIC(egt_7_1000), 17, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 18, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 19, 0xFFFFFFFF},
	{EIF_GENERIC(egt_8_1000), 20, 0xFFFFFFFF},
	{EIF_GENERIC(egt_9_1000), 21, 0xFFFFFFFF},
	{EIF_GENERIC(egt_10_1000), 22, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 23, 0xFFFFFFFF},
	{EIF_GENERIC(egt_11_1000), 24, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 25, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 26, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 27, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x07CF /*999*/), 28, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01C7 /*227*/), 29, 0xFFFFFFFF},
	{EIF_GENERIC(egt_12_1000), 30, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 929, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 930, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 931, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 932, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 933, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 934, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 935, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 936, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 937, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 938, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 939, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 940, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 941, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 942, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 943, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 944, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 945, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 946, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 947, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 948, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 949, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 950, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 951, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 952, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 953, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 954, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 955, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 956, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 957, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 925, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 926, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 927, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 928, 0xFFFFFFFF},
	{EIF_GENERIC(egt_13_1000), 1317, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01D1 /*232*/), 1330, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 1331, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 1332, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 1333, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01D1 /*232*/), 1334, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 1335, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 1336, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01D1 /*232*/), 1337, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01D1 /*232*/), 1338, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01D1 /*232*/), 1339, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 1340, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01D1 /*232*/), 1341, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01D1 /*232*/), 1342, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 1318, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01D1 /*232*/), 1319, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01D1 /*232*/), 1320, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 1321, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 1322, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 1323, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 1324, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 1325, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 1326, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 1327, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 1328, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 1329, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 0x00, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 0x00, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 0x00, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 13845, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 13846, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 13847, 32},
	{EIF_NON_GENERIC(0x0197 /*203*/), 13848, 33},
	{EIF_GENERIC(egt_14_1000), 13849, 0},
	{EIF_GENERIC(egt_15_1000), 13850, 8},
	{EIF_GENERIC(egt_16_1000), 13842, 16},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 13843, 36},
	{EIF_GENERIC(egt_17_1000), 13844, 24},
};
void Init1000(void)
{
	IDSC(desc_1000, 0, 999);
	IDSC(desc_1000 + 1, 1, 999);
	IDSC(desc_1000 + 32, 193, 999);
	IDSC(desc_1000 + 65, 233, 999);
	IDSC(desc_1000 + 66, 103, 999);
	IDSC(desc_1000 + 91, 373, 999);
}


#ifdef __cplusplus
}
#endif
