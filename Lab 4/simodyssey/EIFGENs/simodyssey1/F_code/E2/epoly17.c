#include "epoly17.h"
#include "../E1/eoffsets.h"


#ifdef __cplusplus
extern "C" {
#endif

char *(*R9657[301])();
void R9657_init () {
	R9657[0] = (char *(*)()) F268_11899;
	R9657[2] = (char *(*)()) F269_11918;
	R9657[300] = (char *(*)()) F268_11899;
}

static EIF_TYPE_INDEX Y9782_pgtype0[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y9782_pgtype1[] = {0xFF01,1320,0xFFFF};
static EIF_TYPE_INDEX Y9782_pgtype2[] = {0xFF01,1318,0xFFFF};
EIF_TYPE_INDEX *Y9782_gen_type [262];
EIF_TYPE_INDEX Y9782 [262];
void Y9782_init (void)
{
	egc_routines_types [9782] = Y9782;
	egc_routines_gen_types [9782] = Y9782_gen_type;
	egc_routines_offset [9782] = 275;
	Y9782_gen_type [0] = Y9782_pgtype0;
	Y9782_gen_type [260] = Y9782_pgtype1;
	Y9782_gen_type [261] = Y9782_pgtype2;
	Y9782[260] = 1320;
	Y9782[261] = 1318;
}

char *(*R10485[851])();
void R10485_init () {
	R10485[0] = (char *(*)()) F410_13300;
	R10485[850] = (char *(*)()) F1260_14795;
}

char *(*R10486[851])();
void R10486_init () {
	R10486[0] = (char *(*)()) F410_13301;
	R10486[850] = (char *(*)()) F1260_14796;
}

char *(*R10488[851])();
void R10488_init () {
	R10488[0] = (char *(*)()) F410_13303;
	R10488[850] = (char *(*)()) F1260_14798;
}

char *(*R10489[851])();
void R10489_init () {
	R10489[0] = (char *(*)()) F410_13305;
	R10489[850] = (char *(*)()) F1260_14800;
}

char *(*R10490[851])();
void R10490_init () {
	R10490[0] = (char *(*)()) F410_13306;
	R10490[850] = (char *(*)()) F1260_14799;
}

char *(*R10492[851])();
void R10492_init () {
	R10492[0] = (char *(*)()) F410_13308;
	R10492[850] = (char *(*)()) F1260_14802;
}

char *(*R10493[851])();
void R10493_init () {
	R10493[0] = (char *(*)()) F410_13309;
	R10493[850] = (char *(*)()) F1260_14803;
}

char *(*R10494[851])();
void R10494_init () {
	R10494[0] = (char *(*)()) F410_13310;
	R10494[850] = (char *(*)()) F1260_14804;
}

char *(*R10495[851])();
void R10495_init () {
	R10495[0] = (char *(*)()) F410_13311;
	R10495[850] = (char *(*)()) F1260_14805;
}

char *(*R10496[851])();
void R10496_init () {
	R10496[0] = (char *(*)()) F410_13312;
	R10496[850] = (char *(*)()) F1260_14806;
}

char *(*R10519[574])();
void R10519_init () {
	R10519[0] = (char *(*)()) F1275_14990;
	R10519[1] = (char *(*)()) F1276_15004;
	{long i; for (i = 570; i < 574; i++) R10519[i] = (char *(*)()) F1844_20867;}
}

char *(*R10525[574])();
void R10525_init () {
	R10525[0] = (char *(*)()) F1275_14984;
	R10525[1] = (char *(*)()) F1276_15003;
	{long i; for (i = 570; i < 574; i++) R10525[i] = (char *(*)()) F1277_15015;}
}


#ifdef __cplusplus
}
#endif
