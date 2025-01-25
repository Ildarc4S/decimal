#include "../../../include/arithmetic.h"
#include <check.h>
#include <stdio.h>
#include <stdlib.h>


Suite *from_decimal_to_float_suite2(void);
Suite *from_decimal_to_int_suite2(void);
Suite *from_float_to_decimal_suite6(void);
Suite *from_int_to_decimal_suite(void);


void test_from_int_to_decimal(int number, s21_decimal decimal_check);
void test_from_float_to_decimal(int f, s21_decimal decimal_check);
void test_from_decimal_to_int(s21_decimal decimal, int check);
void test_from_decimal_to_int_fail(s21_decimal decimal);
void test_from_decimal_to_float(s21_decimal decimal, int check);


START_TEST(test_from_decimal_to_float_ok282) {
    // -5.2818774997211729013222932480
    s21_decimal decimal = {{0x0, 0x0, 0xAAAAAAAA, 0x801C0000}};
    int check = -1062664924;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok283) {
    // 13.996975374261108188504077107
    s21_decimal decimal = {{0x33333333, 0x73333333, 0x2D3A06D3, 0x1B0000}};
    int check = 1096807324;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok284) {
    // -13.996975374261108188504077107
    s21_decimal decimal = {{0x33333333, 0x73333333, 0x2D3A06D3, 0x801B0000}};
    int check = -1050676324;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok285) {
    // 12297829382473034410
    s21_decimal decimal = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x0}};
    int check = 1596631723;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok286) {
    // -12297829382473034410
    s21_decimal decimal = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80000000}};
    int check = -550851925;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok287) {
    // 32589247863553541186.50
    s21_decimal decimal = {{0xAAAAA9FA, 0xAAAAAAAA, 0xB0, 0x20000}};
    int check = 1608655394;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok288) {
    // -32589247863553541186.50
    s21_decimal decimal = {{0xAAAAA9FA, 0xAAAAAAAA, 0xB0, 0x80020000}};
    int check = -538828254;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok289) {
    // 1229782938247303441.0
    s21_decimal decimal = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x10000}};
    int check = 1569228937;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok290) {
    // -1229782938247303441.0
    s21_decimal decimal = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80010000}};
    int check = -578254711;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok291) {
    // 3258924786355354118.650
    s21_decimal decimal = {{0xAAAAA9FA, 0xAAAAAAAA, 0xB0, 0x30000}};
    int check = 1580525595;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok292) {
    // -3258924786355354118.650
    s21_decimal decimal = {{0xAAAAA9FA, 0xAAAAAAAA, 0xB0, 0x80030000}};
    int check = -566958053;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok293) {
    // 122978293.82473034410
    s21_decimal decimal = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0xB0000}};
    int check = 1290440703;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok294) {
    // -122978293.82473034410
    s21_decimal decimal = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x800B0000}};
    int check = -857042945;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok295) {
    // 325892478.6355354118650
    s21_decimal decimal = {{0xAAAAA9FA, 0xAAAAAAAA, 0xB0, 0xD0000}};
    int check = 1302029772;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok296) {
    // -325892478.6355354118650
    s21_decimal decimal = {{0xAAAAA9FA, 0xAAAAAAAA, 0xB0, 0x800D0000}};
    int check = -845453876;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok297) {
    // 1.2297829382473034410
    s21_decimal decimal = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x130000}};
    int check = 1067280775;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok298) {
    // -1.2297829382473034410
    s21_decimal decimal = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80130000}};
    int check = -1080202873;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok299) {
    // 3.258924786355354118650
    s21_decimal decimal = {{0xAAAAA9FA, 0xAAAAAAAA, 0xB0, 0x150000}};
    int check = 1079022137;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok300) {
    // -3.258924786355354118650
    s21_decimal decimal = {{0xAAAAA9FA, 0xAAAAAAAA, 0xB0, 0x80150000}};
    int check = -1068461511;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok301) {
    // 12297829379609722880
    s21_decimal decimal = {{0x0, 0xAAAAAAAA, 0x0, 0x0}};
    int check = 1596631723;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok302) {
    // -12297829379609722880
    s21_decimal decimal = {{0x0, 0xAAAAAAAA, 0x0, 0x80000000}};
    int check = -550851925;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok303) {
    // 32589247855965765632.00
    s21_decimal decimal = {{0x0, 0xAAAAA9FA, 0xB0, 0x20000}};
    int check = 1608655394;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok304) {
    // -32589247855965765632.00
    s21_decimal decimal = {{0x0, 0xAAAAA9FA, 0xB0, 0x80020000}};
    int check = -538828254;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok305) {
    // 1229782937960972288.0
    s21_decimal decimal = {{0x0, 0xAAAAAAAA, 0x0, 0x10000}};
    int check = 1569228937;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok306) {
    // -1229782937960972288.0
    s21_decimal decimal = {{0x0, 0xAAAAAAAA, 0x0, 0x80010000}};
    int check = -578254711;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok307) {
    // 3258924785596576563.200
    s21_decimal decimal = {{0x0, 0xAAAAA9FA, 0xB0, 0x30000}};
    int check = 1580525595;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok308) {
    // -3258924785596576563.200
    s21_decimal decimal = {{0x0, 0xAAAAA9FA, 0xB0, 0x80030000}};
    int check = -566958053;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok309) {
    // 122978293.79609722880
    s21_decimal decimal = {{0x0, 0xAAAAAAAA, 0x0, 0xB0000}};
    int check = 1290440703;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok310) {
    // -122978293.79609722880
    s21_decimal decimal = {{0x0, 0xAAAAAAAA, 0x0, 0x800B0000}};
    int check = -857042945;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok311) {
    // 325892478.5596576563200
    s21_decimal decimal = {{0x0, 0xAAAAA9FA, 0xB0, 0xD0000}};
    int check = 1302029772;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok312) {
    // -325892478.5596576563200
    s21_decimal decimal = {{0x0, 0xAAAAA9FA, 0xB0, 0x800D0000}};
    int check = -845453876;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok313) {
    // 1.2297829379609722880
    s21_decimal decimal = {{0x0, 0xAAAAAAAA, 0x0, 0x130000}};
    int check = 1067280775;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok314) {
    // -1.2297829379609722880
    s21_decimal decimal = {{0x0, 0xAAAAAAAA, 0x0, 0x80130000}};
    int check = -1080202873;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok315) {
    // 3.258924785596576563200
    s21_decimal decimal = {{0x0, 0xAAAAA9FA, 0xB0, 0x150000}};
    int check = 1079022137;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok316) {
    // -3.258924785596576563200
    s21_decimal decimal = {{0x0, 0xAAAAA9FA, 0xB0, 0x80150000}};
    int check = -1068461511;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok317) {
    // 2863311530
    s21_decimal decimal = {{0xAAAAAAAA, 0x0, 0x0, 0x0}};
    int check = 1328196267;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok318) {
    // -2863311530
    s21_decimal decimal = {{0xAAAAAAAA, 0x0, 0x0, 0x80000000}};
    int check = -819287381;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok319) {
    // 7587775554.50
    s21_decimal decimal = {{0xAAAAA9FA, 0xB0, 0x0, 0x20000}};
    int check = 1340219938;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok320) {
    // -7587775554.50
    s21_decimal decimal = {{0xAAAAA9FA, 0xB0, 0x0, 0x80020000}};
    int check = -807263710;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok321) {
    // 286331153.0
    s21_decimal decimal = {{0xAAAAAAAA, 0x0, 0x0, 0x10000}};
    int check = 1300793481;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok322) {
    // -286331153.0
    s21_decimal decimal = {{0xAAAAAAAA, 0x0, 0x0, 0x80010000}};
    int check = -846690167;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok323) {
    // 758777555.450
    s21_decimal decimal = {{0xAAAAA9FA, 0xB0, 0x0, 0x30000}};
    int check = 1312090139;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok324) {
    // -758777555.450
    s21_decimal decimal = {{0xAAAAA9FA, 0xB0, 0x0, 0x80030000}};
    int check = -835393509;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok325) {
    // 286331.1530
    s21_decimal decimal = {{0xAAAAAAAA, 0x0, 0x0, 0x40000}};
    int check = 1217122149;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok326) {
    // -286331.1530
    s21_decimal decimal = {{0xAAAAAAAA, 0x0, 0x0, 0x80040000}};
    int check = -930361499;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok327) {
    // 758777.555450
    s21_decimal decimal = {{0xAAAAA9FA, 0xB0, 0x0, 0x60000}};
    int check = 1228488601;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok328) {
    // -758777.555450
    s21_decimal decimal = {{0xAAAAA9FA, 0xB0, 0x0, 0x80060000}};
    int check = -918995047;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok329) {
    // 2.863311530
    s21_decimal decimal = {{0xAAAAAAAA, 0x0, 0x0, 0x90000}};
    int check = 1077362815;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok330) {
    // -2.863311530
    s21_decimal decimal = {{0xAAAAAAAA, 0x0, 0x0, 0x80090000}};
    int check = -1070120833;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok331) {
    // 7.58777555450
    s21_decimal decimal = {{0xAAAAA9FA, 0xB0, 0x0, 0xB0000}};
    int check = 1089654543;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok332) {
    // -7.58777555450
    s21_decimal decimal = {{0xAAAAA9FA, 0xB0, 0x0, 0x800B0000}};
    int check = -1057829105;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok333) {
    // 26409387504754779197847983445
    s21_decimal decimal = {{0x55555555, 0x55555555, 0x55555555, 0x0}};
    int check = 1856678571;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok334) {
    // -26409387504754779197847983445
    s21_decimal decimal = {{0x55555555, 0x55555555, 0x55555555, 0x80000000}};
    int check = -290805077;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok335) {
    // 2640938750475477919784798344.5
    s21_decimal decimal = {{0x55555555, 0x55555555, 0x55555555, 0x10000}};
    int check = 1829275785;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok336) {
    // -2640938750475477919784798344.5
    s21_decimal decimal = {{0x55555555, 0x55555555, 0x55555555, 0x80010000}};
    int check = -318207863;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok337) {
    // 6998487688760016487429715612.9
    s21_decimal decimal = {{0x22222221, 0x22222222, 0xE2222222, 0x10000}};
    int check = 1840572443;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok338) {
    // -6998487688760016487429715612.9
    s21_decimal decimal = {{0x22222221, 0x22222222, 0xE2222222, 0x80010000}};
    int check = -306911205;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok339) {
    // 264093875.04754779197847983445
    s21_decimal decimal = {{0x55555555, 0x55555555, 0x55555555, 0x140000}};
    int check = 1299962891;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok340) {
    // -264093875.04754779197847983445
    s21_decimal decimal = {{0x55555555, 0x55555555, 0x55555555, 0x80140000}};
    int check = -847520757;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok341) {
    // 699848768.87600164874297156129
    s21_decimal decimal = {{0x22222221, 0x22222222, 0xE2222222, 0x140000}};
    int check = 1311169377;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok342) {
    // -699848768.87600164874297156129
    s21_decimal decimal = {{0x22222221, 0x22222222, 0xE2222222, 0x80140000}};
    int check = -836314271;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok343) {
    // 2.6409387504754779197847983445
    s21_decimal decimal = {{0x55555555, 0x55555555, 0x55555555, 0x1C0000}};
    int check = 1076430116;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok344) {
    // -2.6409387504754779197847983445
    s21_decimal decimal = {{0x55555555, 0x55555555, 0x55555555, 0x801C0000}};
    int check = -1071053532;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok345) {
    // 6.9984876887600164874297156129
    s21_decimal decimal = {{0x22222221, 0x22222222, 0xE2222222, 0x1C0000}};
    int check = 1088418716;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok346) {
    // -6.9984876887600164874297156129
    s21_decimal decimal = {{0x22222221, 0x22222222, 0xE2222222, 0x801C0000}};
    int check = -1059064932;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok347) {
    // 26409387504754779196416327680
    s21_decimal decimal = {{0x0, 0x55555555, 0x55555555, 0x0}};
    int check = 1856678571;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok348) {
    // -26409387504754779196416327680
    s21_decimal decimal = {{0x0, 0x55555555, 0x55555555, 0x80000000}};
    int check = -290805077;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok349) {
    // 69984876887600164870503268352
    s21_decimal decimal = {{0x40000000, 0x22222221, 0xE2222222, 0x0}};
    int check = 1868702242;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok350) {
    // -69984876887600164870503268352
    s21_decimal decimal = {{0x40000000, 0x22222221, 0xE2222222, 0x80000000}};
    int check = -278781406;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok351) {
    // 2640938750475477919641632768.0
    s21_decimal decimal = {{0x0, 0x55555555, 0x55555555, 0x10000}};
    int check = 1829275785;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok352) {
    // -2640938750475477919641632768.0
    s21_decimal decimal = {{0x0, 0x55555555, 0x55555555, 0x80010000}};
    int check = -318207863;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok353) {
    // 6998487688760016487050326835.2
    s21_decimal decimal = {{0x40000000, 0x22222221, 0xE2222222, 0x10000}};
    int check = 1840572443;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok354) {
    // -6998487688760016487050326835.2
    s21_decimal decimal = {{0x40000000, 0x22222221, 0xE2222222, 0x80010000}};
    int check = -306911205;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok355) {
    // 264093875.04754779196416327680
    s21_decimal decimal = {{0x0, 0x55555555, 0x55555555, 0x140000}};
    int check = 1299962891;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok356) {
    // -264093875.04754779196416327680
    s21_decimal decimal = {{0x0, 0x55555555, 0x55555555, 0x80140000}};
    int check = -847520757;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok357) {
    // 699848768.87600164870503268352
    s21_decimal decimal = {{0x40000000, 0x22222221, 0xE2222222, 0x140000}};
    int check = 1311169377;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok358) {
    // -699848768.87600164870503268352
    s21_decimal decimal = {{0x40000000, 0x22222221, 0xE2222222, 0x80140000}};
    int check = -836314271;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok359) {
    // 2.6409387504754779196416327680
    s21_decimal decimal = {{0x0, 0x55555555, 0x55555555, 0x1C0000}};
    int check = 1076430116;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok360) {
    // -2.6409387504754779196416327680
    s21_decimal decimal = {{0x0, 0x55555555, 0x55555555, 0x801C0000}};
    int check = -1071053532;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok361) {
    // 6.9984876887600164870503268352
    s21_decimal decimal = {{0x40000000, 0x22222221, 0xE2222222, 0x1C0000}};
    int check = 1088418716;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok362) {
    // -6.9984876887600164870503268352
    s21_decimal decimal = {{0x40000000, 0x22222221, 0xE2222222, 0x801C0000}};
    int check = -1059064932;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok363) {
    // 26409387498605864508043122005
    s21_decimal decimal = {{0x55555555, 0x0, 0x55555555, 0x0}};
    int check = 1856678571;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok364) {
    // -26409387498605864508043122005
    s21_decimal decimal = {{0x55555555, 0x0, 0x55555555, 0x80000000}};
    int check = -290805077;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok365) {
    // 69984876871305540946314273313
    s21_decimal decimal = {{0xE2222221, 0x40000000, 0xE2222221, 0x0}};
    int check = 1868702242;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok366) {
    // -69984876871305540946314273313
    s21_decimal decimal = {{0xE2222221, 0x40000000, 0xE2222221, 0x80000000}};
    int check = -278781406;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok367) {
    // 2640938749860586450804312200.5
    s21_decimal decimal = {{0x55555555, 0x0, 0x55555555, 0x10000}};
    int check = 1829275785;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok368) {
    // -2640938749860586450804312200.5
    s21_decimal decimal = {{0x55555555, 0x0, 0x55555555, 0x80010000}};
    int check = -318207863;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok369) {
    // 6998487687130554094631427331.3
    s21_decimal decimal = {{0xE2222221, 0x40000000, 0xE2222221, 0x10000}};
    int check = 1840572443;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok370) {
    // -6998487687130554094631427331.3
    s21_decimal decimal = {{0xE2222221, 0x40000000, 0xE2222221, 0x80010000}};
    int check = -306911205;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok371) {
    // 264093874.98605864508043122005
    s21_decimal decimal = {{0x55555555, 0x0, 0x55555555, 0x140000}};
    int check = 1299962891;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok372) {
    // -264093874.98605864508043122005
    s21_decimal decimal = {{0x55555555, 0x0, 0x55555555, 0x80140000}};
    int check = -847520757;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok373) {
    // 699848768.71305540946314273313
    s21_decimal decimal = {{0xE2222221, 0x40000000, 0xE2222221, 0x140000}};
    int check = 1311169377;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok374) {
    // -699848768.71305540946314273313
    s21_decimal decimal = {{0xE2222221, 0x40000000, 0xE2222221, 0x80140000}};
    int check = -836314271;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok375) {
    // 2.6409387498605864508043122005
    s21_decimal decimal = {{0x55555555, 0x0, 0x55555555, 0x1C0000}};
    int check = 1076430116;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok376) {
    // -2.6409387498605864508043122005
    s21_decimal decimal = {{0x55555555, 0x0, 0x55555555, 0x801C0000}};
    int check = -1071053532;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok377) {
    // 6.9984876871305540946314273313
    s21_decimal decimal = {{0xE2222221, 0x40000000, 0xE2222221, 0x1C0000}};
    int check = 1088418716;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok378) {
    // -6.9984876871305540946314273313
    s21_decimal decimal = {{0xE2222221, 0x40000000, 0xE2222221, 0x801C0000}};
    int check = -1059064932;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok379) {
    // 26409387498605864506611466240
    s21_decimal decimal = {{0x0, 0x0, 0x55555555, 0x0}};
    int check = 1856678571;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok380) {
    // -26409387498605864506611466240
    s21_decimal decimal = {{0x0, 0x0, 0x55555555, 0x80000000}};
    int check = -290805077;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok381) {
    // 69984876871305540942520385536
    s21_decimal decimal = {{0x0, 0x40000000, 0xE2222221, 0x0}};
    int check = 1868702242;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok382) {
    // -69984876871305540942520385536
    s21_decimal decimal = {{0x0, 0x40000000, 0xE2222221, 0x80000000}};
    int check = -278781406;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok383) {
    // 2640938749860586450661146624.0
    s21_decimal decimal = {{0x0, 0x0, 0x55555555, 0x10000}};
    int check = 1829275785;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok384) {
    // -2640938749860586450661146624.0
    s21_decimal decimal = {{0x0, 0x0, 0x55555555, 0x80010000}};
    int check = -318207863;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok385) {
    // 6998487687130554094252038553.6
    s21_decimal decimal = {{0x0, 0x40000000, 0xE2222221, 0x10000}};
    int check = 1840572443;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok386) {
    // -6998487687130554094252038553.6
    s21_decimal decimal = {{0x0, 0x40000000, 0xE2222221, 0x80010000}};
    int check = -306911205;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok387) {
    // 264093874.98605864506611466240
    s21_decimal decimal = {{0x0, 0x0, 0x55555555, 0x140000}};
    int check = 1299962891;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok388) {
    // -264093874.98605864506611466240
    s21_decimal decimal = {{0x0, 0x0, 0x55555555, 0x80140000}};
    int check = -847520757;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok389) {
    // 699848768.71305540942520385536
    s21_decimal decimal = {{0x0, 0x40000000, 0xE2222221, 0x140000}};
    int check = 1311169377;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok390) {
    // -699848768.71305540942520385536
    s21_decimal decimal = {{0x0, 0x40000000, 0xE2222221, 0x80140000}};
    int check = -836314271;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok391) {
    // 2.6409387498605864506611466240
    s21_decimal decimal = {{0x0, 0x0, 0x55555555, 0x1C0000}};
    int check = 1076430116;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok392) {
    // -2.6409387498605864506611466240
    s21_decimal decimal = {{0x0, 0x0, 0x55555555, 0x801C0000}};
    int check = -1071053532;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok393) {
    // 6.9984876871305540942520385536
    s21_decimal decimal = {{0x0, 0x40000000, 0xE2222221, 0x1C0000}};
    int check = 1088418716;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok394) {
    // -6.9984876871305540942520385536
    s21_decimal decimal = {{0x0, 0x40000000, 0xE2222221, 0x801C0000}};
    int check = -1059064932;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok395) {
    // 6148914691236517205
    s21_decimal decimal = {{0x55555555, 0x55555555, 0x0, 0x0}};
    int check = 1588243115;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok396) {
    // -6148914691236517205
    s21_decimal decimal = {{0x55555555, 0x55555555, 0x0, 0x80000000}};
    int check = -559240533;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok397) {
    // 16294623931776770593.25
    s21_decimal decimal = {{0x555554FD, 0x55555555, 0x58, 0x20000}};
    int check = 1600266786;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok398) {
    // -16294623931776770593.25
    s21_decimal decimal = {{0x555554FD, 0x55555555, 0x58, 0x80020000}};
    int check = -547216862;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok399) {
    // 614891469123651720.5
    s21_decimal decimal = {{0x55555555, 0x55555555, 0x0, 0x10000}};
    int check = 1560840329;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok400) {
    // -614891469123651720.5
    s21_decimal decimal = {{0x55555555, 0x55555555, 0x0, 0x80010000}};
    int check = -586643319;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok401) {
    // 1629462393177677059.325
    s21_decimal decimal = {{0x555554FD, 0x55555555, 0x58, 0x30000}};
    int check = 1572136987;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok402) {
    // -1629462393177677059.325
    s21_decimal decimal = {{0x555554FD, 0x55555555, 0x58, 0x80030000}};
    int check = -575346661;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok403) {
    // 6148914.691236517205
    s21_decimal decimal = {{0x55555555, 0x55555555, 0x0, 0xC0000}};
    int check = 1253811813;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok404) {
    // -6148914.691236517205
    s21_decimal decimal = {{0x55555555, 0x55555555, 0x0, 0x800C0000}};
    int check = -893671835;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok405) {
    // 16294623.93177677059325
    s21_decimal decimal = {{0x555554FD, 0x55555555, 0x58, 0xE0000}};
    int check = 1266197216;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok406) {
    // -16294623.93177677059325
    s21_decimal decimal = {{0x555554FD, 0x55555555, 0x58, 0x800E0000}};
    int check = -881286432;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok407) {
    // 6.148914691236517205
    s21_decimal decimal = {{0x55555555, 0x55555555, 0x0, 0x120000}};
    int check = 1086637033;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok408) {
    // -6.148914691236517205
    s21_decimal decimal = {{0x55555555, 0x55555555, 0x0, 0x80120000}};
    int check = -1060846615;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok409) {
    // 16.29462393177677059325
    s21_decimal decimal = {{0x555554FD, 0x55555555, 0x58, 0x140000}};
    int check = 1099062116;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok410) {
    // -16.29462393177677059325
    s21_decimal decimal = {{0x555554FD, 0x55555555, 0x58, 0x80140000}};
    int check = -1048421532;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok411) {
    // 6148914689804861440
    s21_decimal decimal = {{0x0, 0x55555555, 0x0, 0x0}};
    int check = 1588243115;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok412) {
    // -6148914689804861440
    s21_decimal decimal = {{0x0, 0x55555555, 0x0, 0x80000000}};
    int check = -559240533;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok413) {
    // 16294623927982882816.00
    s21_decimal decimal = {{0x0, 0x555554FD, 0x58, 0x20000}};
    int check = 1600266786;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok414) {
    // -16294623927982882816.00
    s21_decimal decimal = {{0x0, 0x555554FD, 0x58, 0x80020000}};
    int check = -547216862;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok415) {
    // 614891468980486144.0
    s21_decimal decimal = {{0x0, 0x55555555, 0x0, 0x10000}};
    int check = 1560840329;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok416) {
    // -614891468980486144.0
    s21_decimal decimal = {{0x0, 0x55555555, 0x0, 0x80010000}};
    int check = -586643319;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok417) {
    // 1629462392798288281.600
    s21_decimal decimal = {{0x0, 0x555554FD, 0x58, 0x30000}};
    int check = 1572136987;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok418) {
    // -1629462392798288281.600
    s21_decimal decimal = {{0x0, 0x555554FD, 0x58, 0x80030000}};
    int check = -575346661;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok419) {
    // 6148914.689804861440
    s21_decimal decimal = {{0x0, 0x55555555, 0x0, 0xC0000}};
    int check = 1253811813;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok420) {
    // -6148914.689804861440
    s21_decimal decimal = {{0x0, 0x55555555, 0x0, 0x800C0000}};
    int check = -893671835;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok421) {
    // 16294623.92798288281600
    s21_decimal decimal = {{0x0, 0x555554FD, 0x58, 0xE0000}};
    int check = 1266197216;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok422) {
    // -16294623.92798288281600
    s21_decimal decimal = {{0x0, 0x555554FD, 0x58, 0x800E0000}};
    int check = -881286432;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok423) {
    // 6.148914689804861440
    s21_decimal decimal = {{0x0, 0x55555555, 0x0, 0x120000}};
    int check = 1086637033;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok424) {
    // -6.148914689804861440
    s21_decimal decimal = {{0x0, 0x55555555, 0x0, 0x80120000}};
    int check = -1060846615;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok425) {
    // 16.29462392798288281600
    s21_decimal decimal = {{0x0, 0x555554FD, 0x58, 0x140000}};
    int check = 1099062116;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok426) {
    // -16.29462392798288281600
    s21_decimal decimal = {{0x0, 0x555554FD, 0x58, 0x80140000}};
    int check = -1048421532;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok427) {
    // 1431655765
    s21_decimal decimal = {{0x55555555, 0x0, 0x0, 0x0}};
    int check = 1319807659;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok428) {
    // -1431655765
    s21_decimal decimal = {{0x55555555, 0x0, 0x0, 0x80000000}};
    int check = -827675989;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok429) {
    // 3793887777.25
    s21_decimal decimal = {{0x555554FD, 0x58, 0x0, 0x20000}};
    int check = 1331831330;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok430) {
    // -3793887777.25
    s21_decimal decimal = {{0x555554FD, 0x58, 0x0, 0x80020000}};
    int check = -815652318;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok431) {
    // 143165576.5
    s21_decimal decimal = {{0x55555555, 0x0, 0x0, 0x10000}};
    int check = 1292404873;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok432) {
    // -143165576.5
    s21_decimal decimal = {{0x55555555, 0x0, 0x0, 0x80010000}};
    int check = -855078775;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok433) {
    // 379388777.725
    s21_decimal decimal = {{0x555554FD, 0x58, 0x0, 0x30000}};
    int check = 1303701531;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok434) {
    // -379388777.725
    s21_decimal decimal = {{0x555554FD, 0x58, 0x0, 0x80030000}};
    int check = -843782117;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok435) {
    // 143165.5765
    s21_decimal decimal = {{0x55555555, 0x0, 0x0, 0x40000}};
    int check = 1208733541;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok436) {
    // -143165.5765
    s21_decimal decimal = {{0x55555555, 0x0, 0x0, 0x80040000}};
    int check = -938750107;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok437) {
    // 379388.777725
    s21_decimal decimal = {{0x555554FD, 0x58, 0x0, 0x60000}};
    int check = 1220099993;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok438) {
    // -379388.777725
    s21_decimal decimal = {{0x555554FD, 0x58, 0x0, 0x80060000}};
    int check = -927383655;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok439) {
    // 1.431655765
    s21_decimal decimal = {{0x55555555, 0x0, 0x0, 0x90000}};
    int check = 1068974207;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok440) {
    // -1.431655765
    s21_decimal decimal = {{0x55555555, 0x0, 0x0, 0x80090000}};
    int check = -1078509441;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok441) {
    // 3.79388777725
    s21_decimal decimal = {{0x555554FD, 0x58, 0x0, 0xB0000}};
    int check = 1081265935;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok442) {
    // -3.79388777725
    s21_decimal decimal = {{0x555554FD, 0x58, 0x0, 0x800B0000}};
    int check = -1066217713;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok443) {
    // 18446744078004518913
    s21_decimal decimal = {{0x1, 0x1, 0x1, 0x0}};
    int check = 1602224128;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok444) {
    // -18446744078004518913
    s21_decimal decimal = {{0x1, 0x1, 0x1, 0x80000000}};
    int check = -545259520;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok445) {
    // 48883871806711975119.45
    s21_decimal decimal = {{0x109, 0x109, 0x109, 0x20000}};
    int check = 1613339034;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok446) {
    // -48883871806711975119.45
    s21_decimal decimal = {{0x109, 0x109, 0x109, 0x80020000}};
    int check = -534144614;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok447) {
    // 1844674407800451891.3
    s21_decimal decimal = {{0x1, 0x1, 0x1, 0x10000}};
    int check = 1573702861;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok448) {
    // -1844674407800451891.3
    s21_decimal decimal = {{0x1, 0x1, 0x1, 0x80010000}};
    int check = -573780787;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok449) {
    // 4888387180671197511.945
    s21_decimal decimal = {{0x109, 0x109, 0x109, 0x30000}};
    int check = 1585950228;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok450) {
    // -4888387180671197511.945
    s21_decimal decimal = {{0x109, 0x109, 0x109, 0x80030000}};
    int check = -561533420;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok451) {
    // 184467440.78004518913
    s21_decimal decimal = {{0x1, 0x1, 0x1, 0xB0000}};
    int check = 1294986239;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok452) {
    // -184467440.78004518913
    s21_decimal decimal = {{0x1, 0x1, 0x1, 0x800B0000}};
    int check = -852497409;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok453) {
    // 488838718.0671197511945
    s21_decimal decimal = {{0x109, 0x109, 0x109, 0xD0000}};
    int check = 1307121842;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok454) {
    // -488838718.0671197511945
    s21_decimal decimal = {{0x109, 0x109, 0x109, 0x800D0000}};
    int check = -840361806;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok455) {
    // 1.8446744078004518913
    s21_decimal decimal = {{0x1, 0x1, 0x1, 0x130000}};
    int check = 1072438858;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok456) {
    // -1.8446744078004518913
    s21_decimal decimal = {{0x1, 0x1, 0x1, 0x80130000}};
    int check = -1075044790;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok457) {
    // 4.888387180671197511945
    s21_decimal decimal = {{0x109, 0x109, 0x109, 0x150000}};
    int check = 1083993515;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok458) {
    // -4.888387180671197511945
    s21_decimal decimal = {{0x109, 0x109, 0x109, 0x80150000}};
    int check = -1063490133;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok459) {
    // 18446744078004518912
    s21_decimal decimal = {{0x0, 0x1, 0x1, 0x0}};
    int check = 1602224128;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok460) {
    // -18446744078004518912
    s21_decimal decimal = {{0x0, 0x1, 0x1, 0x80000000}};
    int check = -545259520;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok461) {
    // 48883871806711975116.80
    s21_decimal decimal = {{0x0, 0x109, 0x109, 0x20000}};
    int check = 1613339034;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok462) {
    // -48883871806711975116.80
    s21_decimal decimal = {{0x0, 0x109, 0x109, 0x80020000}};
    int check = -534144614;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok463) {
    // 1844674407800451891.2
    s21_decimal decimal = {{0x0, 0x1, 0x1, 0x10000}};
    int check = 1573702861;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok464) {
    // -1844674407800451891.2
    s21_decimal decimal = {{0x0, 0x1, 0x1, 0x80010000}};
    int check = -573780787;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok465) {
    // 4888387180671197511.680
    s21_decimal decimal = {{0x0, 0x109, 0x109, 0x30000}};
    int check = 1585950228;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok466) {
    // -4888387180671197511.680
    s21_decimal decimal = {{0x0, 0x109, 0x109, 0x80030000}};
    int check = -561533420;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok467) {
    // 18446744.078004518912
    s21_decimal decimal = {{0x0, 0x1, 0x1, 0xC0000}};
    int check = 1267514572;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok468) {
    // -18446744.078004518912
    s21_decimal decimal = {{0x0, 0x1, 0x1, 0x800C0000}};
    int check = -879969076;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok469) {
    // 48883871.80671197511680
    s21_decimal decimal = {{0x0, 0x109, 0x109, 0xE0000}};
    int check = 1278900776;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok470) {
    // -48883871.80671197511680
    s21_decimal decimal = {{0x0, 0x109, 0x109, 0x800E0000}};
    int check = -868582872;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok471) {
    // 1.8446744078004518912
    s21_decimal decimal = {{0x0, 0x1, 0x1, 0x130000}};
    int check = 1072438858;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok472) {
    // -1.8446744078004518912
    s21_decimal decimal = {{0x0, 0x1, 0x1, 0x80130000}};
    int check = -1075044790;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok473) {
    // 4.888387180671197511680
    s21_decimal decimal = {{0x0, 0x109, 0x109, 0x150000}};
    int check = 1083993515;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok474) {
    // -4.888387180671197511680
    s21_decimal decimal = {{0x0, 0x109, 0x109, 0x80150000}};
    int check = -1063490133;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok475) {
    // 18446744073709551617
    s21_decimal decimal = {{0x1, 0x0, 0x1, 0x0}};
    int check = 1602224128;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok476) {
    // -18446744073709551617
    s21_decimal decimal = {{0x1, 0x0, 0x1, 0x80000000}};
    int check = -545259520;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok477) {
    // 48883871795330311785.05
    s21_decimal decimal = {{0x109, 0x0, 0x109, 0x20000}};
    int check = 1613339034;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok478) {
    // -48883871795330311785.05
    s21_decimal decimal = {{0x109, 0x0, 0x109, 0x80020000}};
    int check = -534144614;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok479) {
    // 1844674407370955161.7
    s21_decimal decimal = {{0x1, 0x0, 0x1, 0x10000}};
    int check = 1573702861;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok480) {
    // -1844674407370955161.7
    s21_decimal decimal = {{0x1, 0x0, 0x1, 0x80010000}};
    int check = -573780787;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok481) {
    // 4888387179533031178.505
    s21_decimal decimal = {{0x109, 0x0, 0x109, 0x30000}};
    int check = 1585950228;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok482) {
    // -4888387179533031178.505
    s21_decimal decimal = {{0x109, 0x0, 0x109, 0x80030000}};
    int check = -561533420;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok483) {
    // 1844674.4073709551617
    s21_decimal decimal = {{0x1, 0x0, 0x1, 0xD0000}};
    int check = 1239494163;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok484) {
    // -1844674.4073709551617
    s21_decimal decimal = {{0x1, 0x0, 0x1, 0x800D0000}};
    int check = -907989485;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok485) {
    // 4888387.179533031178505
    s21_decimal decimal = {{0x109, 0x0, 0x109, 0xF0000}};
    int check = 1251290758;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok486) {
    // -4888387.179533031178505
    s21_decimal decimal = {{0x109, 0x0, 0x109, 0x800F0000}};
    int check = -896192890;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok487) {
    // 1.8446744073709551617
    s21_decimal decimal = {{0x1, 0x0, 0x1, 0x130000}};
    int check = 1072438858;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok488) {
    // -1.8446744073709551617
    s21_decimal decimal = {{0x1, 0x0, 0x1, 0x80130000}};
    int check = -1075044790;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok489) {
    // 4.888387179533031178505
    s21_decimal decimal = {{0x109, 0x0, 0x109, 0x150000}};
    int check = 1083993515;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok490) {
    // -4.888387179533031178505
    s21_decimal decimal = {{0x109, 0x0, 0x109, 0x80150000}};
    int check = -1063490133;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok491) {
    // 18446744073709551616
    s21_decimal decimal = {{0x0, 0x0, 0x1, 0x0}};
    int check = 1602224128;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok492) {
    // -18446744073709551616
    s21_decimal decimal = {{0x0, 0x0, 0x1, 0x80000000}};
    int check = -545259520;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok493) {
    // 48883871795330311782.40
    s21_decimal decimal = {{0x0, 0x0, 0x109, 0x20000}};
    int check = 1613339034;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok494) {
    // -48883871795330311782.40
    s21_decimal decimal = {{0x0, 0x0, 0x109, 0x80020000}};
    int check = -534144614;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok495) {
    // 1844674407370955161.6
    s21_decimal decimal = {{0x0, 0x0, 0x1, 0x10000}};
    int check = 1573702861;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok496) {
    // -1844674407370955161.6
    s21_decimal decimal = {{0x0, 0x0, 0x1, 0x80010000}};
    int check = -573780787;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok497) {
    // 4888387179533031178.240
    s21_decimal decimal = {{0x0, 0x0, 0x109, 0x30000}};
    int check = 1585950228;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok498) {
    // -4888387179533031178.240
    s21_decimal decimal = {{0x0, 0x0, 0x109, 0x80030000}};
    int check = -561533420;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok499) {
    // 184467.44073709551616
    s21_decimal decimal = {{0x0, 0x0, 0x1, 0xE0000}};
    int check = 1211376860;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok500) {
    // -184467.44073709551616
    s21_decimal decimal = {{0x0, 0x0, 0x1, 0x800E0000}};
    int check = -936106788;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok501) {
    // 488838.7179533031178240
    s21_decimal decimal = {{0x0, 0x0, 0x109, 0x100000}};
    int check = 1223602391;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok502) {
    // -488838.7179533031178240
    s21_decimal decimal = {{0x0, 0x0, 0x109, 0x80100000}};
    int check = -923881257;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok503) {
    // 1.8446744073709551616
    s21_decimal decimal = {{0x0, 0x0, 0x1, 0x130000}};
    int check = 1072438858;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok504) {
    // -1.8446744073709551616
    s21_decimal decimal = {{0x0, 0x0, 0x1, 0x80130000}};
    int check = -1075044790;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok505) {
    // 4.888387179533031178240
    s21_decimal decimal = {{0x0, 0x0, 0x109, 0x150000}};
    int check = 1083993515;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok506) {
    // -4.888387179533031178240
    s21_decimal decimal = {{0x0, 0x0, 0x109, 0x80150000}};
    int check = -1063490133;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok507) {
    // 4294967297
    s21_decimal decimal = {{0x1, 0x1, 0x0, 0x0}};
    int check = 1333788672;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok508) {
    // -4294967297
    s21_decimal decimal = {{0x1, 0x1, 0x0, 0x80000000}};
    int check = -813694976;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok509) {
    // 11381663337.05
    s21_decimal decimal = {{0x109, 0x109, 0x0, 0x20000}};
    int check = 1344903578;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok510) {
    // -11381663337.05
    s21_decimal decimal = {{0x109, 0x109, 0x0, 0x80020000}};
    int check = -802580070;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok511) {
    // 429496729.7
    s21_decimal decimal = {{0x1, 0x1, 0x0, 0x10000}};
    int check = 1305267405;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok512) {
    // -429496729.7
    s21_decimal decimal = {{0x1, 0x1, 0x0, 0x80010000}};
    int check = -842216243;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok513) {
    // 1138166333.705
    s21_decimal decimal = {{0x109, 0x109, 0x0, 0x30000}};
    int check = 1317514772;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok514) {
    // -1138166333.705
    s21_decimal decimal = {{0x109, 0x109, 0x0, 0x80030000}};
    int check = -829968876;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok515) {
    // 42949672.97
    s21_decimal decimal = {{0x1, 0x1, 0x0, 0x20000}};
    int check = 1277417226;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok516) {
    // -42949672.97
    s21_decimal decimal = {{0x1, 0x1, 0x0, 0x80020000}};
    int check = -870066422;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok517) {
    // 113816633.3705
    s21_decimal decimal = {{0x109, 0x109, 0x0, 0x40000}};
    int check = 1289295495;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok518) {
    // -113816633.3705
    s21_decimal decimal = {{0x109, 0x109, 0x0, 0x80040000}};
    int check = -858188153;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok519) {
    // 429496.7297
    s21_decimal decimal = {{0x1, 0x1, 0x0, 0x40000}};
    int check = 1221703447;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok520) {
    // -429496.7297
    s21_decimal decimal = {{0x1, 0x1, 0x0, 0x80040000}};
    int check = -925780201;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok521) {
    // 1138166.333705
    s21_decimal decimal = {{0x109, 0x109, 0x0, 0x60000}};
    int check = 1233842099;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok522) {
    // -1138166.333705
    s21_decimal decimal = {{0x109, 0x109, 0x0, 0x80060000}};
    int check = -913641549;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok523) {
    // 4.294967297
    s21_decimal decimal = {{0x1, 0x1, 0x0, 0x90000}};
    int check = 1082749023;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok524) {
    // -4.294967297
    s21_decimal decimal = {{0x1, 0x1, 0x0, 0x80090000}};
    int check = -1064734625;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok525) {
    // 11.38166333705
    s21_decimal decimal = {{0x109, 0x109, 0x0, 0xB0000}};
    int check = 1094064971;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok526) {
    // -11.38166333705
    s21_decimal decimal = {{0x109, 0x109, 0x0, 0x800B0000}};
    int check = -1053418677;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok527) {
    // 42.94967297
    s21_decimal decimal = {{0x1, 0x1, 0x0, 0x80000}};
    int check = 1110166647;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok528) {
    // -42.94967297
    s21_decimal decimal = {{0x1, 0x1, 0x0, 0x80080000}};
    int check = -1037317001;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok529) {
    // 113.8166333705
    s21_decimal decimal = {{0x109, 0x109, 0x0, 0xA0000}};
    int check = 1122214430;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok530) {
    // -113.8166333705
    s21_decimal decimal = {{0x109, 0x109, 0x0, 0x800A0000}};
    int check = -1025269218;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok531) {
    // 4294967296
    s21_decimal decimal = {{0x0, 0x1, 0x0, 0x0}};
    int check = 1333788672;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok532) {
    // -4294967296
    s21_decimal decimal = {{0x0, 0x1, 0x0, 0x80000000}};
    int check = -813694976;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok533) {
    // 11381663334.40
    s21_decimal decimal = {{0x0, 0x109, 0x0, 0x20000}};
    int check = 1344903578;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok534) {
    // -11381663334.40
    s21_decimal decimal = {{0x0, 0x109, 0x0, 0x80020000}};
    int check = -802580070;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok535) {
    // 429496729.6
    s21_decimal decimal = {{0x0, 0x1, 0x0, 0x10000}};
    int check = 1305267405;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok536) {
    // -429496729.6
    s21_decimal decimal = {{0x0, 0x1, 0x0, 0x80010000}};
    int check = -842216243;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok537) {
    // 1138166333.440
    s21_decimal decimal = {{0x0, 0x109, 0x0, 0x30000}};
    int check = 1317514772;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok538) {
    // -1138166333.440
    s21_decimal decimal = {{0x0, 0x109, 0x0, 0x80030000}};
    int check = -829968876;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok539) {
    // 42949672.96
    s21_decimal decimal = {{0x0, 0x1, 0x0, 0x20000}};
    int check = 1277417226;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok540) {
    // -42949672.96
    s21_decimal decimal = {{0x0, 0x1, 0x0, 0x80020000}};
    int check = -870066422;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok541) {
    // 113816633.3440
    s21_decimal decimal = {{0x0, 0x109, 0x0, 0x40000}};
    int check = 1289295495;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok542) {
    // -113816633.3440
    s21_decimal decimal = {{0x0, 0x109, 0x0, 0x80040000}};
    int check = -858188153;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok543) {
    // 4294967.296
    s21_decimal decimal = {{0x0, 0x1, 0x0, 0x30000}};
    int check = 1250103919;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok544) {
    // -4294967.296
    s21_decimal decimal = {{0x0, 0x1, 0x0, 0x80030000}};
    int check = -897379729;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok545) {
    // 11381663.33440
    s21_decimal decimal = {{0x0, 0x109, 0x0, 0x50000}};
    int check = 1261284255;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok546) {
    // -11381663.33440
    s21_decimal decimal = {{0x0, 0x109, 0x0, 0x80050000}};
    int check = -886199393;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok547) {
    // 4.294967296
    s21_decimal decimal = {{0x0, 0x1, 0x0, 0x90000}};
    int check = 1082749023;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok548) {
    // -4.294967296
    s21_decimal decimal = {{0x0, 0x1, 0x0, 0x80090000}};
    int check = -1064734625;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok549) {
    // 11.38166333440
    s21_decimal decimal = {{0x0, 0x109, 0x0, 0xB0000}};
    int check = 1094064971;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok550) {
    // -11.38166333440
    s21_decimal decimal = {{0x0, 0x109, 0x0, 0x800B0000}};
    int check = -1053418677;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok551) {
    // 42.94967296
    s21_decimal decimal = {{0x0, 0x1, 0x0, 0x80000}};
    int check = 1110166647;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok552) {
    // -42.94967296
    s21_decimal decimal = {{0x0, 0x1, 0x0, 0x80080000}};
    int check = -1037317001;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok553) {
    // 113.8166333440
    s21_decimal decimal = {{0x0, 0x109, 0x0, 0xA0000}};
    int check = 1122214430;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok554) {
    // -113.8166333440
    s21_decimal decimal = {{0x0, 0x109, 0x0, 0x800A0000}};
    int check = -1025269218;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok555) {
    // 0.1
    s21_decimal decimal = {{0x1, 0x0, 0x0, 0x10000}};
    int check = 1036831949;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok556) {
    // -0.1
    s21_decimal decimal = {{0x1, 0x0, 0x0, 0x80010000}};
    int check = -1110651699;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok557) {
    // 0.265
    s21_decimal decimal = {{0x109, 0x0, 0x0, 0x30000}};
    int check = 1049079316;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok558) {
    // -0.265
    s21_decimal decimal = {{0x109, 0x0, 0x0, 0x80030000}};
    int check = -1098404332;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok559) {
    // 0.0000000000001
    s21_decimal decimal = {{0x1, 0x0, 0x0, 0xD0000}};
    int check = 702623251;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok560) {
    // -0.0000000000001
    s21_decimal decimal = {{0x1, 0x0, 0x0, 0x800D0000}};
    int check = -1444860397;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok561) {
    // 0.000000000000265
    s21_decimal decimal = {{0x109, 0x0, 0x0, 0xF0000}};
    int check = 714419846;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok562) {
    // -0.000000000000265
    s21_decimal decimal = {{0x109, 0x0, 0x0, 0x800F0000}};
    int check = -1433063802;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok563) {
    // 0.00000000000001
    s21_decimal decimal = {{0x1, 0x0, 0x0, 0xE0000}};
    int check = 674505948;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok564) {
    // -0.00000000000001
    s21_decimal decimal = {{0x1, 0x0, 0x0, 0x800E0000}};
    int check = -1472977700;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok565) {
    // 0.0000000000000265
    s21_decimal decimal = {{0x109, 0x0, 0x0, 0x100000}};
    int check = 686731479;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok566) {
    // -0.0000000000000265
    s21_decimal decimal = {{0x109, 0x0, 0x0, 0x80100000}};
    int check = -1460752169;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok567) {
    // 0.000000000000000000000000001
    s21_decimal decimal = {{0x1, 0x0, 0x0, 0x1B0000}};
    int check = 312374482;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok568) {
    // -0.000000000000000000000000001
    s21_decimal decimal = {{0x1, 0x0, 0x0, 0x801B0000}};
    int check = -1835109166;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok569) {
    // 0.0000000000000000000000000026
    s21_decimal decimal = {{0x1A, 0x0, 0x0, 0x1C0000}};
    int check = 323878468;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok570) {
    // -0.0000000000000000000000000026
    s21_decimal decimal = {{0x1A, 0x0, 0x0, 0x801C0000}};
    int check = -1823605180;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok571) {
    // 0.0000000000000000000000000001
    s21_decimal decimal = {{0x1, 0x0, 0x0, 0x1C0000}};
    int check = 285050806;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok572) {
    // -0.0000000000000000000000000001
    s21_decimal decimal = {{0x1, 0x0, 0x0, 0x801C0000}};
    int check = -1862432842;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok573) {
    // 0.0000000000000000000000000003
    s21_decimal decimal = {{0x3, 0x0, 0x0, 0x1C0000}};
    int check = 297674184;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok574) {
    // -0.0000000000000000000000000003
    s21_decimal decimal = {{0x3, 0x0, 0x0, 0x801C0000}};
    int check = -1849809464;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok575) {
    // 39614081266355540835774234624
    s21_decimal decimal = {{0x80000000, 0x80000000, 0x80000000, 0x0}};
    int check = 1862270976;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok576) {
    // -39614081266355540835774234624
    s21_decimal decimal = {{0x80000000, 0x80000000, 0x80000000, 0x80000000}};
    int check = -285212672;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok577) {
    // 3961408126635554083577423462.4
    s21_decimal decimal = {{0x80000000, 0x80000000, 0x80000000, 0x10000}};
    int check = 1833749709;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok578) {
    // -3961408126635554083577423462.4
    s21_decimal decimal = {{0x80000000, 0x80000000, 0x80000000, 0x80010000}};
    int check = -313733939;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok579) {
    // 10497731535584218321480172175
    s21_decimal decimal = {{0xF8F5C28F, 0xDA3D70A3, 0x21EB851E, 0x0}};
    int check = 1845997076;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok580) {
    // -10497731535584218321480172175
    s21_decimal decimal = {{0xF8F5C28F, 0xDA3D70A3, 0x21EB851E, 0x80000000}};
    int check = -301486572;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok581) {
    // 396140812.66355540835774234624
    s21_decimal decimal = {{0x80000000, 0x80000000, 0x80000000, 0x140000}};
    int check = 1304225032;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok582) {
    // -396140812.66355540835774234624
    s21_decimal decimal = {{0x80000000, 0x80000000, 0x80000000, 0x80140000}};
    int check = -843258616;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok583) {
    // 1049773153.5584218321480172175
    s21_decimal decimal = {{0xF8F5C28F, 0xDA3D70A3, 0x21EB851E, 0x130000}};
    int check = 1316636946;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok584) {
    // -1049773153.5584218321480172175
    s21_decimal decimal = {{0xF8F5C28F, 0xDA3D70A3, 0x21EB851E, 0x80130000}};
    int check = -830846702;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok585) {
    // 3.9614081266355540835774234624
    s21_decimal decimal = {{0x80000000, 0x80000000, 0x80000000, 0x1C0000}};
    int check = 1081968566;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok586) {
    // -3.9614081266355540835774234624
    s21_decimal decimal = {{0x80000000, 0x80000000, 0x80000000, 0x801C0000}};
    int check = -1065515082;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok587) {
    // 10.497731535584218321480172175
    s21_decimal decimal = {{0xF8F5C28F, 0xDA3D70A3, 0x21EB851E, 0x1B0000}};
    int check = 1093138101;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok588) {
    // -10.497731535584218321480172175
    s21_decimal decimal = {{0xF8F5C28F, 0xDA3D70A3, 0x21EB851E, 0x801B0000}};
    int check = -1054345547;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok589) {
    // 39614081266355540833626750976
    s21_decimal decimal = {{0x0, 0x80000000, 0x80000000, 0x0}};
    int check = 1862270976;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok590) {
    // -39614081266355540833626750976
    s21_decimal decimal = {{0x0, 0x80000000, 0x80000000, 0x80000000}};
    int check = -285212672;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok591) {
    // 3961408126635554083362675097.6
    s21_decimal decimal = {{0x0, 0x80000000, 0x80000000, 0x10000}};
    int check = 1833749709;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok592) {
    // -3961408126635554083362675097.6
    s21_decimal decimal = {{0x0, 0x80000000, 0x80000000, 0x80010000}};
    int check = -313733939;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok593) {
    // 10497731535584218320911089009
    s21_decimal decimal = {{0xD70A3D71, 0xDA3D70A3, 0x21EB851E, 0x0}};
    int check = 1845997076;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok594) {
    // -10497731535584218320911089009
    s21_decimal decimal = {{0xD70A3D71, 0xDA3D70A3, 0x21EB851E, 0x80000000}};
    int check = -301486572;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok595) {
    // 39614081.266355540833626750976
    s21_decimal decimal = {{0x0, 0x80000000, 0x80000000, 0x150000}};
    int check = 1276583328;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok596) {
    // -39614081.266355540833626750976
    s21_decimal decimal = {{0x0, 0x80000000, 0x80000000, 0x80150000}};
    int check = -870900320;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok597) {
    // 104977315.35584218320911089009
    s21_decimal decimal = {{0xD70A3D71, 0xDA3D70A3, 0x21EB851E, 0x140000}};
    int check = 1288190580;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok598) {
    // -104977315.35584218320911089009
    s21_decimal decimal = {{0xD70A3D71, 0xDA3D70A3, 0x21EB851E, 0x80140000}};
    int check = -859293068;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok599) {
    // 3.9614081266355540833626750976
    s21_decimal decimal = {{0x0, 0x80000000, 0x80000000, 0x1C0000}};
    int check = 1081968566;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok600) {
    // -3.9614081266355540833626750976
    s21_decimal decimal = {{0x0, 0x80000000, 0x80000000, 0x801C0000}};
    int check = -1065515082;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok601) {
    // 10.497731535584218320911089009
    s21_decimal decimal = {{0xD70A3D71, 0xDA3D70A3, 0x21EB851E, 0x1B0000}};
    int check = 1093138101;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok602) {
    // -10.497731535584218320911089009
    s21_decimal decimal = {{0xD70A3D71, 0xDA3D70A3, 0x21EB851E, 0x801B0000}};
    int check = -1054345547;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok603) {
    // 39614081257132168798919458816
    s21_decimal decimal = {{0x80000000, 0x0, 0x80000000, 0x0}};
    int check = 1862270976;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok604) {
    // -39614081257132168798919458816
    s21_decimal decimal = {{0x80000000, 0x0, 0x80000000, 0x80000000}};
    int check = -285212672;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok605) {
    // 3961408125713216879891945881.6
    s21_decimal decimal = {{0x80000000, 0x0, 0x80000000, 0x10000}};
    int check = 1833749709;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok606) {
    // -3961408125713216879891945881.6
    s21_decimal decimal = {{0x80000000, 0x0, 0x80000000, 0x80010000}};
    int check = -313733939;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok607) {
    // 10497731533140024731713656586
    s21_decimal decimal = {{0x40A3D70A, 0xB851EB85, 0x21EB851E, 0x0}};
    int check = 1845997076;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok608) {
    // -10497731533140024731713656586
    s21_decimal decimal = {{0x40A3D70A, 0xB851EB85, 0x21EB851E, 0x80000000}};
    int check = -301486572;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok609) {
    // 3961408.1257132168798919458816
    s21_decimal decimal = {{0x80000000, 0x0, 0x80000000, 0x160000}};
    int check = 1248971009;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok610) {
    // -3961408.1257132168798919458816
    s21_decimal decimal = {{0x80000000, 0x0, 0x80000000, 0x80160000}};
    int check = -898512639;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok611) {
    // 10497731.533140024731713656586
    s21_decimal decimal = {{0x40A3D70A, 0xB851EB85, 0x21EB851E, 0x150000}};
    int check = 1260400324;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok612) {
    // -10497731.533140024731713656586
    s21_decimal decimal = {{0x40A3D70A, 0xB851EB85, 0x21EB851E, 0x80150000}};
    int check = -887083324;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok613) {
    // 3.9614081257132168798919458816
    s21_decimal decimal = {{0x80000000, 0x0, 0x80000000, 0x1C0000}};
    int check = 1081968566;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok614) {
    // -3.9614081257132168798919458816
    s21_decimal decimal = {{0x80000000, 0x0, 0x80000000, 0x801C0000}};
    int check = -1065515082;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok615) {
    // 10.497731533140024731713656586
    s21_decimal decimal = {{0x40A3D70A, 0xB851EB85, 0x21EB851E, 0x1B0000}};
    int check = 1093138101;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok616) {
    // -10.497731533140024731713656586
    s21_decimal decimal = {{0x40A3D70A, 0xB851EB85, 0x21EB851E, 0x801B0000}};
    int check = -1054345547;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok617) {
    // 39614081257132168796771975168
    s21_decimal decimal = {{0x0, 0x0, 0x80000000, 0x0}};
    int check = 1862270976;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok618) {
    // -39614081257132168796771975168
    s21_decimal decimal = {{0x0, 0x0, 0x80000000, 0x80000000}};
    int check = -285212672;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok619) {
    // 3961408125713216879677197516.8
    s21_decimal decimal = {{0x0, 0x0, 0x80000000, 0x10000}};
    int check = 1833749709;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok620) {
    // -3961408125713216879677197516.8
    s21_decimal decimal = {{0x0, 0x0, 0x80000000, 0x80010000}};
    int check = -313733939;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok621) {
    // 10497731533140024731144573420
    s21_decimal decimal = {{0x1EB851EC, 0xB851EB85, 0x21EB851E, 0x0}};
    int check = 1845997076;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok622) {
    // -10497731533140024731144573420
    s21_decimal decimal = {{0x1EB851EC, 0xB851EB85, 0x21EB851E, 0x80000000}};
    int check = -301486572;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok623) {
    // 396140.81257132168796771975168
    s21_decimal decimal = {{0x0, 0x0, 0x80000000, 0x170000}};
    int check = 1220636058;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok624) {
    // -396140.81257132168796771975168
    s21_decimal decimal = {{0x0, 0x0, 0x80000000, 0x80170000}};
    int check = -926847590;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok625) {
    // 1049773.1533140024731144573420
    s21_decimal decimal = {{0x1EB851EC, 0xB851EB85, 0x21EB851E, 0x160000}};
    int check = 1233134953;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok626) {
    // -1049773.1533140024731144573420
    s21_decimal decimal = {{0x1EB851EC, 0xB851EB85, 0x21EB851E, 0x80160000}};
    int check = -914348695;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok627) {
    // 3.9614081257132168796771975168
    s21_decimal decimal = {{0x0, 0x0, 0x80000000, 0x1C0000}};
    int check = 1081968566;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok628) {
    // -3.9614081257132168796771975168
    s21_decimal decimal = {{0x0, 0x0, 0x80000000, 0x801C0000}};
    int check = -1065515082;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok629) {
    // 10.497731533140024731144573420
    s21_decimal decimal = {{0x1EB851EC, 0xB851EB85, 0x21EB851E, 0x1B0000}};
    int check = 1093138101;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok630) {
    // -10.497731533140024731144573420
    s21_decimal decimal = {{0x1EB851EC, 0xB851EB85, 0x21EB851E, 0x801B0000}};
    int check = -1054345547;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok631) {
    // 9223372039002259456
    s21_decimal decimal = {{0x80000000, 0x80000000, 0x0, 0x0}};
    int check = 1593835520;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok632) {
    // -9223372039002259456
    s21_decimal decimal = {{0x80000000, 0x80000000, 0x0, 0x80000000}};
    int check = -553648128;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok633) {
    // 24441935903355987558.40
    s21_decimal decimal = {{0x80000000, 0x80000084, 0x84, 0x20000}};
    int check = 1604950426;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok634) {
    // -24441935903355987558.40
    s21_decimal decimal = {{0x80000000, 0x80000084, 0x84, 0x80020000}};
    int check = -542533222;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok635) {
    // 922337203900225945.6
    s21_decimal decimal = {{0x80000000, 0x80000000, 0x0, 0x10000}};
    int check = 1565314253;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok636) {
    // -922337203900225945.6
    s21_decimal decimal = {{0x80000000, 0x80000000, 0x0, 0x80010000}};
    int check = -582169395;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok637) {
    // 2444193590335598755.840
    s21_decimal decimal = {{0x80000000, 0x80000084, 0x84, 0x30000}};
    int check = 1577561620;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok638) {
    // -2444193590335598755.840
    s21_decimal decimal = {{0x80000000, 0x80000084, 0x84, 0x80030000}};
    int check = -569922028;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok639) {
    // 922337203.9002259456
    s21_decimal decimal = {{0x80000000, 0x80000000, 0x0, 0xA0000}};
    int check = 1314645759;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok640) {
    // -922337203.9002259456
    s21_decimal decimal = {{0x80000000, 0x80000000, 0x0, 0x800A0000}};
    int check = -832837889;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok641) {
    // 2444193590.335598755840
    s21_decimal decimal = {{0x80000000, 0x80000084, 0x84, 0xC0000}};
    int check = 1326559087;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok642) {
    // -2444193590.335598755840
    s21_decimal decimal = {{0x80000000, 0x80000084, 0x84, 0x800C0000}};
    int check = -820924561;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok643) {
    // 9.223372039002259456
    s21_decimal decimal = {{0x80000000, 0x80000000, 0x0, 0x120000}};
    int check = 1091801839;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok644) {
    // -9.223372039002259456
    s21_decimal decimal = {{0x80000000, 0x80000000, 0x0, 0x80120000}};
    int check = -1055681809;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok645) {
    // 24.44193590335598755840
    s21_decimal decimal = {{0x80000000, 0x80000084, 0x84, 0x140000}};
    int check = 1103333654;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok646) {
    // -24.44193590335598755840
    s21_decimal decimal = {{0x80000000, 0x80000084, 0x84, 0x80140000}};
    int check = -1044149994;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok647) {
    // 9223372036854775808
    s21_decimal decimal = {{0x0, 0x80000000, 0x0, 0x0}};
    int check = 1593835520;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok648) {
    // -9223372036854775808
    s21_decimal decimal = {{0x0, 0x80000000, 0x0, 0x80000000}};
    int check = -553648128;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok649) {
    // 24441935897665155891.20
    s21_decimal decimal = {{0x0, 0x80000000, 0x84, 0x20000}};
    int check = 1604950426;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok650) {
    // -24441935897665155891.20
    s21_decimal decimal = {{0x0, 0x80000000, 0x84, 0x80020000}};
    int check = -542533222;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok651) {
    // 922337203685477580.8
    s21_decimal decimal = {{0x0, 0x80000000, 0x0, 0x10000}};
    int check = 1565314253;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok652) {
    // -922337203685477580.8
    s21_decimal decimal = {{0x0, 0x80000000, 0x0, 0x80010000}};
    int check = -582169395;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok653) {
    // 2444193589766515589.120
    s21_decimal decimal = {{0x0, 0x80000000, 0x84, 0x30000}};
    int check = 1577561620;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok654) {
    // -2444193589766515589.120
    s21_decimal decimal = {{0x0, 0x80000000, 0x84, 0x80030000}};
    int check = -569922028;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok655) {
    // 92233720.36854775808
    s21_decimal decimal = {{0x0, 0x80000000, 0x0, 0xB0000}};
    int check = 1286597631;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok656) {
    // -92233720.36854775808
    s21_decimal decimal = {{0x0, 0x80000000, 0x0, 0x800B0000}};
    int check = -860886017;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok657) {
    // 244419358.9766515589120
    s21_decimal decimal = {{0x0, 0x80000000, 0x84, 0xD0000}};
    int check = 1298733234;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok658) {
    // -244419358.9766515589120
    s21_decimal decimal = {{0x0, 0x80000000, 0x84, 0x800D0000}};
    int check = -848750414;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok659) {
    // 9.223372036854775808
    s21_decimal decimal = {{0x0, 0x80000000, 0x0, 0x120000}};
    int check = 1091801839;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok660) {
    // -9.223372036854775808
    s21_decimal decimal = {{0x0, 0x80000000, 0x0, 0x80120000}};
    int check = -1055681809;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok661) {
    // 24.44193589766515589120
    s21_decimal decimal = {{0x0, 0x80000000, 0x84, 0x140000}};
    int check = 1103333654;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok662) {
    // -24.44193589766515589120
    s21_decimal decimal = {{0x0, 0x80000000, 0x84, 0x80140000}};
    int check = -1044149994;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok663) {
    // 2147483648
    s21_decimal decimal = {{0x80000000, 0x0, 0x0, 0x0}};
    int check = 1325400064;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok664) {
    // -2147483648
    s21_decimal decimal = {{0x80000000, 0x0, 0x0, 0x80000000}};
    int check = -822083584;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok665) {
    // 5690831667.20
    s21_decimal decimal = {{0x80000000, 0x84, 0x0, 0x20000}};
    int check = 1336514970;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok666) {
    // -5690831667.20
    s21_decimal decimal = {{0x80000000, 0x84, 0x0, 0x80020000}};
    int check = -810968678;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok667) {
    // 214748364.8
    s21_decimal decimal = {{0x80000000, 0x0, 0x0, 0x10000}};
    int check = 1296878797;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok668) {
    // -214748364.8
    s21_decimal decimal = {{0x80000000, 0x0, 0x0, 0x80010000}};
    int check = -850604851;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok669) {
    // 569083166.720
    s21_decimal decimal = {{0x80000000, 0x84, 0x0, 0x30000}};
    int check = 1309126164;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok670) {
    // -569083166.720
    s21_decimal decimal = {{0x80000000, 0x84, 0x0, 0x80030000}};
    int check = -838357484;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok671) {
    // 21474836.48
    s21_decimal decimal = {{0x80000000, 0x0, 0x0, 0x20000}};
    int check = 1269028618;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok672) {
    // -21474836.48
    s21_decimal decimal = {{0x80000000, 0x0, 0x0, 0x80020000}};
    int check = -878455030;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok673) {
    // 56908316.6720
    s21_decimal decimal = {{0x80000000, 0x84, 0x0, 0x40000}};
    int check = 1280906887;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok674) {
    // -56908316.6720
    s21_decimal decimal = {{0x80000000, 0x84, 0x0, 0x80040000}};
    int check = -866576761;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok675) {
    // 214748.3648
    s21_decimal decimal = {{0x80000000, 0x0, 0x0, 0x40000}};
    int check = 1213314839;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok676) {
    // -214748.3648
    s21_decimal decimal = {{0x80000000, 0x0, 0x0, 0x80040000}};
    int check = -934168809;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok677) {
    // 569083.166720
    s21_decimal decimal = {{0x80000000, 0x84, 0x0, 0x60000}};
    int check = 1225453491;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok678) {
    // -569083.166720
    s21_decimal decimal = {{0x80000000, 0x84, 0x0, 0x80060000}};
    int check = -922030157;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok679) {
    // 21.47483648
    s21_decimal decimal = {{0x80000000, 0x0, 0x0, 0x80000}};
    int check = 1101778039;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok680) {
    // -21.47483648
    s21_decimal decimal = {{0x80000000, 0x0, 0x0, 0x80080000}};
    int check = -1045705609;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok681) {
    // 56.9083166720
    s21_decimal decimal = {{0x80000000, 0x84, 0x0, 0xA0000}};
    int check = 1113825822;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok682) {
    // -56.9083166720
    s21_decimal decimal = {{0x80000000, 0x84, 0x0, 0x800A0000}};
    int check = -1033657826;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok683) {
    // 2.147483648
    s21_decimal decimal = {{0x80000000, 0x0, 0x0, 0x90000}};
    int check = 1074360415;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok684) {
    // -2.147483648
    s21_decimal decimal = {{0x80000000, 0x0, 0x0, 0x80090000}};
    int check = -1073123233;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok685) {
    // 5.69083166720
    s21_decimal decimal = {{0x80000000, 0x84, 0x0, 0xB0000}};
    int check = 1085676363;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok686) {
    // -5.69083166720
    s21_decimal decimal = {{0x80000000, 0x84, 0x0, 0x800B0000}};
    int check = -1061807285;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok687) {
    // 156064767562212695305426944
    s21_decimal decimal = {{0x811800, 0x811800, 0x811800, 0x0}};
    int check = 1795233792;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok688) {
    // -156064767562212695305426944
    s21_decimal decimal = {{0x811800, 0x811800, 0x811800, 0x80000000}};
    int check = -352249856;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok689) {
    // 413571634039863642559381401.60
    s21_decimal decimal = {{0x85A1D800, 0x85A1D800, 0x85A1D800, 0x20000}};
    int check = 1806371994;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok690) {
    // -413571634039863642559381401.60
    s21_decimal decimal = {{0x85A1D800, 0x85A1D800, 0x85A1D800, 0x80020000}};
    int check = -341111654;

    test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok180) {
    // 2.147483648
    s21_decimal decimal = {{0x80000000, 0x0, 0x0, 0x90000}};
    int check = 2;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok181) {
    // -2.147483648
    s21_decimal decimal = {{0x80000000, 0x0, 0x0, 0x80090000}};
    int check = -2;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok182) {
    // 1560647.67562212695305426944
    s21_decimal decimal = {{0x811800, 0x811800, 0x811800, 0x140000}};
    int check = 1560647;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok183) {
    // -1560647.67562212695305426944
    s21_decimal decimal = {{0x811800, 0x811800, 0x811800, 0x80140000}};
    int check = -1560647;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok184) {
    // 1.56064767562212695305426944
    s21_decimal decimal = {{0x811800, 0x811800, 0x811800, 0x1A0000}};
    int check = 1;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok185) {
    // -1.56064767562212695305426944
    s21_decimal decimal = {{0x811800, 0x811800, 0x811800, 0x801A0000}};
    int check = -1;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok186) {
    // 15606476.7562212695296966656
    s21_decimal decimal = {{0x0, 0x811800, 0x811800, 0x130000}};
    int check = 15606476;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok187) {
    // -15606476.7562212695296966656
    s21_decimal decimal = {{0x0, 0x811800, 0x811800, 0x80130000}};
    int check = -15606476;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok188) {
    // 1.56064767562212695296966656
    s21_decimal decimal = {{0x0, 0x811800, 0x811800, 0x1A0000}};
    int check = 1;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok189) {
    // -1.56064767562212695296966656
    s21_decimal decimal = {{0x0, 0x811800, 0x811800, 0x801A0000}};
    int check = -1;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok190) {
    // 156064.767525876035030685696
    s21_decimal decimal = {{0x811800, 0x0, 0x811800, 0x150000}};
    int check = 156064;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok191) {
    // -156064.767525876035030685696
    s21_decimal decimal = {{0x811800, 0x0, 0x811800, 0x80150000}};
    int check = -156064;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok192) {
    // 1.56064767525876035030685696
    s21_decimal decimal = {{0x811800, 0x0, 0x811800, 0x1A0000}};
    int check = 1;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok193) {
    // -1.56064767525876035030685696
    s21_decimal decimal = {{0x811800, 0x0, 0x811800, 0x801A0000}};
    int check = -1;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok194) {
    // 15606.4767525876035022225408
    s21_decimal decimal = {{0x0, 0x0, 0x811800, 0x160000}};
    int check = 15606;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok195) {
    // -15606.4767525876035022225408
    s21_decimal decimal = {{0x0, 0x0, 0x811800, 0x80160000}};
    int check = -15606;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok196) {
    // 1.56064767525876035022225408
    s21_decimal decimal = {{0x0, 0x0, 0x811800, 0x1A0000}};
    int check = 1;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok197) {
    // -1.56064767525876035022225408
    s21_decimal decimal = {{0x0, 0x0, 0x811800, 0x801A0000}};
    int check = -1;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok198) {
    // 363366602.83201536
    s21_decimal decimal = {{0x811800, 0x811800, 0x0, 0x80000}};
    int check = 363366602;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok199) {
    // -363366602.83201536
    s21_decimal decimal = {{0x811800, 0x811800, 0x0, 0x80080000}};
    int check = -363366602;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok200) {
    // 3.6336660283201536
    s21_decimal decimal = {{0x811800, 0x811800, 0x0, 0x100000}};
    int check = 3;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok201) {
    // -3.6336660283201536
    s21_decimal decimal = {{0x811800, 0x811800, 0x0, 0x80100000}};
    int check = -3;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok202) {
    // 3633666.0274741248
    s21_decimal decimal = {{0x0, 0x811800, 0x0, 0xA0000}};
    int check = 3633666;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok203) {
    // -3633666.0274741248
    s21_decimal decimal = {{0x0, 0x811800, 0x0, 0x800A0000}};
    int check = -3633666;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok204) {
    // 363366602.74741248
    s21_decimal decimal = {{0x0, 0x811800, 0x0, 0x80000}};
    int check = 363366602;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok205) {
    // -363366602.74741248
    s21_decimal decimal = {{0x0, 0x811800, 0x0, 0x80080000}};
    int check = -363366602;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok206) {
    // 36.336660274741248
    s21_decimal decimal = {{0x0, 0x811800, 0x0, 0xF0000}};
    int check = 36;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok207) {
    // -36.336660274741248
    s21_decimal decimal = {{0x0, 0x811800, 0x0, 0x800F0000}};
    int check = -36;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok208) {
    // 3.6336660274741248
    s21_decimal decimal = {{0x0, 0x811800, 0x0, 0x100000}};
    int check = 3;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok209) {
    // -3.6336660274741248
    s21_decimal decimal = {{0x0, 0x811800, 0x0, 0x80100000}};
    int check = -3;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok210) {
    // 8460288
    s21_decimal decimal = {{0x811800, 0x0, 0x0, 0x0}};
    int check = 8460288;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok211) {
    // -8460288
    s21_decimal decimal = {{0x811800, 0x0, 0x0, 0x80000000}};
    int check = -8460288;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok212) {
    // 846028.8
    s21_decimal decimal = {{0x811800, 0x0, 0x0, 0x10000}};
    int check = 846028;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok213) {
    // -846028.8
    s21_decimal decimal = {{0x811800, 0x0, 0x0, 0x80010000}};
    int check = -846028;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok214) {
    // 84602.88
    s21_decimal decimal = {{0x811800, 0x0, 0x0, 0x20000}};
    int check = 84602;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok215) {
    // -84602.88
    s21_decimal decimal = {{0x811800, 0x0, 0x0, 0x80020000}};
    int check = -84602;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok216) {
    // 8460.288
    s21_decimal decimal = {{0x811800, 0x0, 0x0, 0x30000}};
    int check = 8460;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok217) {
    // -8460.288
    s21_decimal decimal = {{0x811800, 0x0, 0x0, 0x80030000}};
    int check = -8460;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok218) {
    // 84.60288
    s21_decimal decimal = {{0x811800, 0x0, 0x0, 0x50000}};
    int check = 84;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok219) {
    // -84.60288
    s21_decimal decimal = {{0x811800, 0x0, 0x0, 0x80050000}};
    int check = -84;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok220) {
    // 8.460288
    s21_decimal decimal = {{0x811800, 0x0, 0x0, 0x60000}};
    int check = 8;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok221) {
    // -8.460288
    s21_decimal decimal = {{0x811800, 0x0, 0x0, 0x80060000}};
    int check = -8;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok222) {
    // 792281625.14264337593543950335
    s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x140000}};
    int check = 792281625;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok223) {
    // -792281625.14264337593543950335
    s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80140000}};
    int check = -792281625;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok224) {
    // 7.9228162514264337593543950335
    s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x1C0000}};
    int check = 7;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok225) {
    // -7.9228162514264337593543950335
    s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x801C0000}};
    int check = -7;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok226) {
    // 79228162.514264337589248983040
    s21_decimal decimal = {{0x0, 0xFFFFFFFF, 0xFFFFFFFF, 0x150000}};
    int check = 79228162;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok227) {
    // -79228162.514264337589248983040
    s21_decimal decimal = {{0x0, 0xFFFFFFFF, 0xFFFFFFFF, 0x80150000}};
    int check = -79228162;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok228) {
    // 7.9228162514264337589248983040
    s21_decimal decimal = {{0x0, 0xFFFFFFFF, 0xFFFFFFFF, 0x1C0000}};
    int check = 7;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok229) {
    // -7.9228162514264337589248983040
    s21_decimal decimal = {{0x0, 0xFFFFFFFF, 0xFFFFFFFF, 0x801C0000}};
    int check = -7;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok230) {
    // 7922816.2495817593524129366015
    s21_decimal decimal = {{0xFFFFFFFF, 0x0, 0xFFFFFFFF, 0x160000}};
    int check = 7922816;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok231) {
    // -7922816.2495817593524129366015
    s21_decimal decimal = {{0xFFFFFFFF, 0x0, 0xFFFFFFFF, 0x80160000}};
    int check = -7922816;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok232) {
    // 7.9228162495817593524129366015
    s21_decimal decimal = {{0xFFFFFFFF, 0x0, 0xFFFFFFFF, 0x1C0000}};
    int check = 7;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok233) {
    // -7.9228162495817593524129366015
    s21_decimal decimal = {{0xFFFFFFFF, 0x0, 0xFFFFFFFF, 0x801C0000}};
    int check = -7;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok234) {
    // 792281.62495817593519834398720
    s21_decimal decimal = {{0x0, 0x0, 0xFFFFFFFF, 0x170000}};
    int check = 792281;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok235) {
    // -792281.62495817593519834398720
    s21_decimal decimal = {{0x0, 0x0, 0xFFFFFFFF, 0x80170000}};
    int check = -792281;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok236) {
    // 7.9228162495817593519834398720
    s21_decimal decimal = {{0x0, 0x0, 0xFFFFFFFF, 0x1C0000}};
    int check = 7;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok237) {
    // -7.9228162495817593519834398720
    s21_decimal decimal = {{0x0, 0x0, 0xFFFFFFFF, 0x801C0000}};
    int check = -7;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok238) {
    // 184467440.73709551615
    s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0x0, 0xB0000}};
    int check = 184467440;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok239) {
    // -184467440.73709551615
    s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0x0, 0x800B0000}};
    int check = -184467440;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok240) {
    // 184.46744073709551615
    s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0x0, 0x110000}};
    int check = 184;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok241) {
    // -184.46744073709551615
    s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0x0, 0x80110000}};
    int check = -184;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok242) {
    // 1.8446744073709551615
    s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0x0, 0x130000}};
    int check = 1;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok243) {
    // -1.8446744073709551615
    s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0x0, 0x80130000}};
    int check = -1;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok244) {
    // 18446744.069414584320
    s21_decimal decimal = {{0x0, 0xFFFFFFFF, 0x0, 0xC0000}};
    int check = 18446744;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok245) {
    // -18446744.069414584320
    s21_decimal decimal = {{0x0, 0xFFFFFFFF, 0x0, 0x800C0000}};
    int check = -18446744;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok246) {
    // 184.46744069414584320
    s21_decimal decimal = {{0x0, 0xFFFFFFFF, 0x0, 0x110000}};
    int check = 184;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok247) {
    // -184.46744069414584320
    s21_decimal decimal = {{0x0, 0xFFFFFFFF, 0x0, 0x80110000}};
    int check = -184;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok248) {
    // 1.8446744069414584320
    s21_decimal decimal = {{0x0, 0xFFFFFFFF, 0x0, 0x130000}};
    int check = 1;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok249) {
    // -1.8446744069414584320
    s21_decimal decimal = {{0x0, 0xFFFFFFFF, 0x0, 0x80130000}};
    int check = -1;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok250) {
    // 429496729.5
    s21_decimal decimal = {{0xFFFFFFFF, 0x0, 0x0, 0x10000}};
    int check = 429496729;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok251) {
    // -429496729.5
    s21_decimal decimal = {{0xFFFFFFFF, 0x0, 0x0, 0x80010000}};
    int check = -429496729;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok252) {
    // 42949672.95
    s21_decimal decimal = {{0xFFFFFFFF, 0x0, 0x0, 0x20000}};
    int check = 42949672;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok253) {
    // -42949672.95
    s21_decimal decimal = {{0xFFFFFFFF, 0x0, 0x0, 0x80020000}};
    int check = -42949672;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok254) {
    // 42949.67295
    s21_decimal decimal = {{0xFFFFFFFF, 0x0, 0x0, 0x50000}};
    int check = 42949;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok255) {
    // -42949.67295
    s21_decimal decimal = {{0xFFFFFFFF, 0x0, 0x0, 0x80050000}};
    int check = -42949;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok256) {
    // 42.94967295
    s21_decimal decimal = {{0xFFFFFFFF, 0x0, 0x0, 0x80000}};
    int check = 42;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok257) {
    // -42.94967295
    s21_decimal decimal = {{0xFFFFFFFF, 0x0, 0x0, 0x80080000}};
    int check = -42;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok258) {
    // 4.294967295
    s21_decimal decimal = {{0xFFFFFFFF, 0x0, 0x0, 0x90000}};
    int check = 4;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok259) {
    // -4.294967295
    s21_decimal decimal = {{0xFFFFFFFF, 0x0, 0x0, 0x80090000}};
    int check = -4;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok260) {
    // 1.0
    s21_decimal decimal = {{0xA, 0x0, 0x0, 0x10000}};
    int check = 1;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok261) {
    // -1.0
    s21_decimal decimal = {{0xA, 0x0, 0x0, 0x80010000}};
    int check = -1;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok262) {
    // 1.00
    s21_decimal decimal = {{0x64, 0x0, 0x0, 0x20000}};
    int check = 1;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok263) {
    // -1.00
    s21_decimal decimal = {{0x64, 0x0, 0x0, 0x80020000}};
    int check = -1;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok264) {
    // 1.000
    s21_decimal decimal = {{0x3E8, 0x0, 0x0, 0x30000}};
    int check = 1;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok265) {
    // -1.000
    s21_decimal decimal = {{0x3E8, 0x0, 0x0, 0x80030000}};
    int check = -1;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok266) {
    // 1.0000000000
    s21_decimal decimal = {{0x540BE400, 0x2, 0x0, 0xA0000}};
    int check = 1;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok267) {
    // -1.0000000000
    s21_decimal decimal = {{0x540BE400, 0x2, 0x0, 0x800A0000}};
    int check = -1;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok268) {
    // 1.0000000000000000
    s21_decimal decimal = {{0x6FC10000, 0x2386F2, 0x0, 0x100000}};
    int check = 1;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok269) {
    // -1.0000000000000000
    s21_decimal decimal = {{0x6FC10000, 0x2386F2, 0x0, 0x80100000}};
    int check = -1;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok270) {
    // 1.00000000000000000000000
    s21_decimal decimal = {{0xF6800000, 0x2C7E14A, 0x152D, 0x170000}};
    int check = 1;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok271) {
    // -1.00000000000000000000000
    s21_decimal decimal = {{0xF6800000, 0x2C7E14A, 0x152D, 0x80170000}};
    int check = -1;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok272) {
    // 1.000000000000000000000000000
    s21_decimal decimal = {{0xE8000000, 0x9FD0803C, 0x33B2E3C, 0x1B0000}};
    int check = 1;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok273) {
    // -1.000000000000000000000000000
    s21_decimal decimal = {{0xE8000000, 0x9FD0803C, 0x33B2E3C, 0x801B0000}};
    int check = -1;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok274) {
    // 1.0000000000000000000000000000
    s21_decimal decimal = {{0x10000000, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    int check = 1;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok275) {
    // -1.0000000000000000000000000000
    s21_decimal decimal = {{0x10000000, 0x3E250261, 0x204FCE5E, 0x801C0000}};
    int check = -1;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok276) {
    // 1.1
    s21_decimal decimal = {{0xB, 0x0, 0x0, 0x10000}};
    int check = 1;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok277) {
    // -1.1
    s21_decimal decimal = {{0xB, 0x0, 0x0, 0x80010000}};
    int check = -1;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok278) {
    // 12.12
    s21_decimal decimal = {{0x4BC, 0x0, 0x0, 0x20000}};
    int check = 12;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok279) {
    // -12.12
    s21_decimal decimal = {{0x4BC, 0x0, 0x0, 0x80020000}};
    int check = -12;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok280) {
    // 123.123
    s21_decimal decimal = {{0x1E0F3, 0x0, 0x0, 0x30000}};
    int check = 123;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok281) {
    // -123.123
    s21_decimal decimal = {{0x1E0F3, 0x0, 0x0, 0x80030000}};
    int check = -123;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok282) {
    // 1234.1234
    s21_decimal decimal = {{0xBC4FF2, 0x0, 0x0, 0x40000}};
    int check = 1234;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok283) {
    // -1234.1234
    s21_decimal decimal = {{0xBC4FF2, 0x0, 0x0, 0x80040000}};
    int check = -1234;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok284) {
    // 12345.12345
    s21_decimal decimal = {{0x499529D9, 0x0, 0x0, 0x50000}};
    int check = 12345;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok285) {
    // -12345.12345
    s21_decimal decimal = {{0x499529D9, 0x0, 0x0, 0x80050000}};
    int check = -12345;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok286) {
    // 123456.123456
    s21_decimal decimal = {{0xBE8EF240, 0x1C, 0x0, 0x60000}};
    int check = 123456;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok287) {
    // -123456.123456
    s21_decimal decimal = {{0xBE8EF240, 0x1C, 0x0, 0x80060000}};
    int check = -123456;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok288) {
    // 1234567.1234567
    s21_decimal decimal = {{0x73593407, 0xB3A, 0x0, 0x70000}};
    int check = 1234567;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok289) {
    // -1234567.1234567
    s21_decimal decimal = {{0x73593407, 0xB3A, 0x0, 0x80070000}};
    int check = -1234567;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok290) {
    // 1234567890.1234567890
    s21_decimal decimal = {{0xEB1F0AD2, 0xAB54A98C, 0x0, 0xA0000}};
    int check = 1234567890;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok291) {
    // -1234567890.1234567890
    s21_decimal decimal = {{0xEB1F0AD2, 0xAB54A98C, 0x0, 0x800A0000}};
    int check = -1234567890;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok292) {
    // 99
    s21_decimal decimal = {{0x63, 0x0, 0x0, 0x0}};
    int check = 99;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok293) {
    // -99
    s21_decimal decimal = {{0x63, 0x0, 0x0, 0x80000000}};
    int check = -99;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok294) {
    // 9.9
    s21_decimal decimal = {{0x63, 0x0, 0x0, 0x10000}};
    int check = 9;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok295) {
    // -9.9
    s21_decimal decimal = {{0x63, 0x0, 0x0, 0x80010000}};
    int check = -9;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok296) {
    // 99.99
    s21_decimal decimal = {{0x270F, 0x0, 0x0, 0x20000}};
    int check = 99;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok297) {
    // -99.99
    s21_decimal decimal = {{0x270F, 0x0, 0x0, 0x80020000}};
    int check = -99;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok298) {
    // 999.999
    s21_decimal decimal = {{0xF423F, 0x0, 0x0, 0x30000}};
    int check = 999;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok299) {
    // -999.999
    s21_decimal decimal = {{0xF423F, 0x0, 0x0, 0x80030000}};
    int check = -999;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok300) {
    // 9999.9999
    s21_decimal decimal = {{0x5F5E0FF, 0x0, 0x0, 0x40000}};
    int check = 9999;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok301) {
    // -9999.9999
    s21_decimal decimal = {{0x5F5E0FF, 0x0, 0x0, 0x80040000}};
    int check = -9999;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok302) {
    // 99999.99999
    s21_decimal decimal = {{0x540BE3FF, 0x2, 0x0, 0x50000}};
    int check = 99999;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok303) {
    // -99999.99999
    s21_decimal decimal = {{0x540BE3FF, 0x2, 0x0, 0x80050000}};
    int check = -99999;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok304) {
    // 999999.999999
    s21_decimal decimal = {{0xD4A50FFF, 0xE8, 0x0, 0x60000}};
    int check = 999999;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok305) {
    // -999999.999999
    s21_decimal decimal = {{0xD4A50FFF, 0xE8, 0x0, 0x80060000}};
    int check = -999999;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok306) {
    // 9999999.9999999
    s21_decimal decimal = {{0x107A3FFF, 0x5AF3, 0x0, 0x70000}};
    int check = 9999999;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok307) {
    // -9999999.9999999
    s21_decimal decimal = {{0x107A3FFF, 0x5AF3, 0x0, 0x80070000}};
    int check = -9999999;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok308) {
    // 99999999.99999999
    s21_decimal decimal = {{0x6FC0FFFF, 0x2386F2, 0x0, 0x80000}};
    int check = 99999999;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok309) {
    // -99999999.99999999
    s21_decimal decimal = {{0x6FC0FFFF, 0x2386F2, 0x0, 0x80080000}};
    int check = -99999999;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok310) {
    // 999999999.999999999
    s21_decimal decimal = {{0xA763FFFF, 0xDE0B6B3, 0x0, 0x90000}};
    int check = 999999999;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok311) {
    // -999999999.999999999
    s21_decimal decimal = {{0xA763FFFF, 0xDE0B6B3, 0x0, 0x80090000}};
    int check = -999999999;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok312) {
    // 9
    s21_decimal decimal = {{0x9, 0x0, 0x0, 0x0}};
    int check = 9;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok313) {
    // -9
    s21_decimal decimal = {{0x9, 0x0, 0x0, 0x80000000}};
    int check = -9;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok314) {
    // 0.9
    s21_decimal decimal = {{0x9, 0x0, 0x0, 0x10000}};
    int check = 0;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok315) {
    // -0.9
    s21_decimal decimal = {{0x9, 0x0, 0x0, 0x80010000}};
    int check = 0;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok316) {
    // 0.99
    s21_decimal decimal = {{0x63, 0x0, 0x0, 0x20000}};
    int check = 0;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok317) {
    // -0.99
    s21_decimal decimal = {{0x63, 0x0, 0x0, 0x80020000}};
    int check = 0;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok318) {
    // 0.999
    s21_decimal decimal = {{0x3E7, 0x0, 0x0, 0x30000}};
    int check = 0;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok319) {
    // -0.999
    s21_decimal decimal = {{0x3E7, 0x0, 0x0, 0x80030000}};
    int check = 0;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok320) {
    // 0.9999
    s21_decimal decimal = {{0x270F, 0x0, 0x0, 0x40000}};
    int check = 0;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok321) {
    // -0.9999
    s21_decimal decimal = {{0x270F, 0x0, 0x0, 0x80040000}};
    int check = 0;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok322) {
    // 0.99999
    s21_decimal decimal = {{0x1869F, 0x0, 0x0, 0x50000}};
    int check = 0;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok323) {
    // -0.99999
    s21_decimal decimal = {{0x1869F, 0x0, 0x0, 0x80050000}};
    int check = 0;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok324) {
    // 0.999999
    s21_decimal decimal = {{0xF423F, 0x0, 0x0, 0x60000}};
    int check = 0;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok325) {
    // -0.999999
    s21_decimal decimal = {{0xF423F, 0x0, 0x0, 0x80060000}};
    int check = 0;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok326) {
    // 0.9999999
    s21_decimal decimal = {{0x98967F, 0x0, 0x0, 0x70000}};
    int check = 0;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok327) {
    // -0.9999999
    s21_decimal decimal = {{0x98967F, 0x0, 0x0, 0x80070000}};
    int check = 0;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok328) {
    // 0.99999999
    s21_decimal decimal = {{0x5F5E0FF, 0x0, 0x0, 0x80000}};
    int check = 0;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok329) {
    // -0.99999999
    s21_decimal decimal = {{0x5F5E0FF, 0x0, 0x0, 0x80080000}};
    int check = 0;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok330) {
    // 0.999999999
    s21_decimal decimal = {{0x3B9AC9FF, 0x0, 0x0, 0x90000}};
    int check = 0;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok331) {
    // -0.999999999
    s21_decimal decimal = {{0x3B9AC9FF, 0x0, 0x0, 0x80090000}};
    int check = 0;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok332) {
    // 0.9999999999
    s21_decimal decimal = {{0x540BE3FF, 0x2, 0x0, 0xA0000}};
    int check = 0;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok333) {
    // -0.9999999999
    s21_decimal decimal = {{0x540BE3FF, 0x2, 0x0, 0x800A0000}};
    int check = 0;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok334) {
    // 0.99999999999999999999
    s21_decimal decimal = {{0x630FFFFF, 0x6BC75E2D, 0x5, 0x140000}};
    int check = 0;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok335) {
    // -0.99999999999999999999
    s21_decimal decimal = {{0x630FFFFF, 0x6BC75E2D, 0x5, 0x80140000}};
    int check = 0;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok336) {
    // -0
    s21_decimal decimal = {{0x0, 0x0, 0x0, 0x80000000}};
    int check = 0;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok337) {
    // 0
    s21_decimal decimal = {{0x0, 0x0, 0x0, 0x0}};
    int check = 0;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok338) {
    // -0.0
    s21_decimal decimal = {{0x0, 0x0, 0x0, 0x80010000}};
    int check = 0;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok339) {
    // 0.0
    s21_decimal decimal = {{0x0, 0x0, 0x0, 0x10000}};
    int check = 0;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok340) {
    // -0.00
    s21_decimal decimal = {{0x0, 0x0, 0x0, 0x80020000}};
    int check = 0;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok341) {
    // 0.00
    s21_decimal decimal = {{0x0, 0x0, 0x0, 0x20000}};
    int check = 0;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok342) {
    // -0.00000000000000
    s21_decimal decimal = {{0x0, 0x0, 0x0, 0x800E0000}};
    int check = 0;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok343) {
    // 0.00000000000000
    s21_decimal decimal = {{0x0, 0x0, 0x0, 0xE0000}};
    int check = 0;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok344) {
    // -0.000000000000000000000000000
    s21_decimal decimal = {{0x0, 0x0, 0x0, 0x801B0000}};
    int check = 0;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok345) {
    // 0.000000000000000000000000000
    s21_decimal decimal = {{0x0, 0x0, 0x0, 0x1B0000}};
    int check = 0;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok346) {
    // -0.0000000000000000000000000000
    s21_decimal decimal = {{0x0, 0x0, 0x0, 0x801C0000}};
    int check = 0;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok347) {
    // 0.0000000000000000000000000000
    s21_decimal decimal = {{0x0, 0x0, 0x0, 0x1C0000}};
    int check = 0;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok348) {
    // 2147483646
    s21_decimal decimal = {{0x7FFFFFFE, 0x0, 0x0, 0x0}};
    int check = 2147483646;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok349) {
    // -2147483646
    s21_decimal decimal = {{0x7FFFFFFE, 0x0, 0x0, 0x80000000}};
    int check = -2147483646;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok350) {
    // 2147483646.00
    s21_decimal decimal = {{0xFFFFFF38, 0x31, 0x0, 0x20000}};
    int check = 2147483646;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok351) {
    // -2147483646.00
    s21_decimal decimal = {{0xFFFFFF38, 0x31, 0x0, 0x80020000}};
    int check = -2147483646;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok352) {
    // 2147483646.99
    s21_decimal decimal = {{0xFFFFFF9B, 0x31, 0x0, 0x20000}};
    int check = 2147483646;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok353) {
    // -2147483646.99
    s21_decimal decimal = {{0xFFFFFF9B, 0x31, 0x0, 0x80020000}};
    int check = -2147483646;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok354) {
    // 2147483646.999999999999999999
    s21_decimal decimal = {{0x589BFFFF, 0xC5D1494C, 0x6F05B59, 0x120000}};
    int check = 2147483646;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok355) {
    // -2147483646.999999999999999999
    s21_decimal decimal = {{0x589BFFFF, 0xC5D1494C, 0x6F05B59, 0x80120000}};
    int check = -2147483646;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok356) {
    // 21474836.46
    s21_decimal decimal = {{0x7FFFFFFE, 0x0, 0x0, 0x20000}};
    int check = 21474836;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok357) {
    // -21474836.46
    s21_decimal decimal = {{0x7FFFFFFE, 0x0, 0x0, 0x80020000}};
    int check = -21474836;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok358) {
    // 214.7483646
    s21_decimal decimal = {{0x7FFFFFFE, 0x0, 0x0, 0x70000}};
    int check = 214;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok359) {
    // -214.7483646
    s21_decimal decimal = {{0x7FFFFFFE, 0x0, 0x0, 0x80070000}};
    int check = -214;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok360) {
    // 2.147483646
    s21_decimal decimal = {{0x7FFFFFFE, 0x0, 0x0, 0x90000}};
    int check = 2;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok361) {
    // -2.147483646
    s21_decimal decimal = {{0x7FFFFFFE, 0x0, 0x0, 0x80090000}};
    int check = -2;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok362) {
    // 0.2147483646
    s21_decimal decimal = {{0x7FFFFFFE, 0x0, 0x0, 0xA0000}};
    int check = 0;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok363) {
    // -0.2147483646
    s21_decimal decimal = {{0x7FFFFFFE, 0x0, 0x0, 0x800A0000}};
    int check = 0;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok364) {
    // 0.0000000000000000002147483646
    s21_decimal decimal = {{0x7FFFFFFE, 0x0, 0x0, 0x1C0000}};
    int check = 0;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok365) {
    // -0.0000000000000000002147483646
    s21_decimal decimal = {{0x7FFFFFFE, 0x0, 0x0, 0x801C0000}};
    int check = 0;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok366) {
    // 2147483647
    s21_decimal decimal = {{0x7FFFFFFF, 0x0, 0x0, 0x0}};
    int check = 2147483647;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok367) {
    // -2147483647
    s21_decimal decimal = {{0x7FFFFFFF, 0x0, 0x0, 0x80000000}};
    int check = -2147483647;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok368) {
    // 2147483647.00
    s21_decimal decimal = {{0xFFFFFF9C, 0x31, 0x0, 0x20000}};
    int check = 2147483647;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok369) {
    // -2147483647.00
    s21_decimal decimal = {{0xFFFFFF9C, 0x31, 0x0, 0x80020000}};
    int check = -2147483647;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok370) {
    // 2147483647.99
    s21_decimal decimal = {{0xFFFFFFFF, 0x31, 0x0, 0x20000}};
    int check = 2147483647;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok371) {
    // -2147483647.99
    s21_decimal decimal = {{0xFFFFFFFF, 0x31, 0x0, 0x80020000}};
    int check = -2147483647;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok372) {
    // 2147483647.999999999999999999
    s21_decimal decimal = {{0xFFFFFFFF, 0xD3B1FFFF, 0x6F05B59, 0x120000}};
    int check = 2147483647;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok373) {
    // -2147483647.999999999999999999
    s21_decimal decimal = {{0xFFFFFFFF, 0xD3B1FFFF, 0x6F05B59, 0x80120000}};
    int check = -2147483647;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok374) {
    // 21474836.47
    s21_decimal decimal = {{0x7FFFFFFF, 0x0, 0x0, 0x20000}};
    int check = 21474836;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok375) {
    // -21474836.47
    s21_decimal decimal = {{0x7FFFFFFF, 0x0, 0x0, 0x80020000}};
    int check = -21474836;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok376) {
    // 214.7483647
    s21_decimal decimal = {{0x7FFFFFFF, 0x0, 0x0, 0x70000}};
    int check = 214;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok377) {
    // -214.7483647
    s21_decimal decimal = {{0x7FFFFFFF, 0x0, 0x0, 0x80070000}};
    int check = -214;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok378) {
    // 2.147483647
    s21_decimal decimal = {{0x7FFFFFFF, 0x0, 0x0, 0x90000}};
    int check = 2;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok379) {
    // -2.147483647
    s21_decimal decimal = {{0x7FFFFFFF, 0x0, 0x0, 0x80090000}};
    int check = -2;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok380) {
    // 0.2147483647
    s21_decimal decimal = {{0x7FFFFFFF, 0x0, 0x0, 0xA0000}};
    int check = 0;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok381) {
    // -0.2147483647
    s21_decimal decimal = {{0x7FFFFFFF, 0x0, 0x0, 0x800A0000}};
    int check = 0;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok382) {
    // 0.0000000000000000002147483647
    s21_decimal decimal = {{0x7FFFFFFF, 0x0, 0x0, 0x1C0000}};
    int check = 0;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok383) {
    // -0.0000000000000000002147483647
    s21_decimal decimal = {{0x7FFFFFFF, 0x0, 0x0, 0x801C0000}};
    int check = 0;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok384) {
    // -2147483648
    s21_decimal decimal = {{0x80000000, 0x0, 0x0, 0x80000000}};
    int check = -2147483648;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok385) {
    // -2147483648.00
    s21_decimal decimal = {{0x0, 0x32, 0x0, 0x80020000}};
    int check = -2147483648;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok386) {
    // -2147483648.99
    s21_decimal decimal = {{0x63, 0x32, 0x0, 0x80020000}};
    int check = -2147483648;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok387) {
    // -2147483648.999999999999999999
    s21_decimal decimal = {{0xA763FFFF, 0xE192B6B3, 0x6F05B59, 0x80120000}};
    int check = -2147483648;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok388) {
    // 21474836.48
    s21_decimal decimal = {{0x80000000, 0x0, 0x0, 0x20000}};
    int check = 21474836;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok389) {
    // -21474836.48
    s21_decimal decimal = {{0x80000000, 0x0, 0x0, 0x80020000}};
    int check = -21474836;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok390) {
    // 214.7483648
    s21_decimal decimal = {{0x80000000, 0x0, 0x0, 0x70000}};
    int check = 214;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok391) {
    // -214.7483648
    s21_decimal decimal = {{0x80000000, 0x0, 0x0, 0x80070000}};
    int check = -214;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok392) {
    // 2.147483648
    s21_decimal decimal = {{0x80000000, 0x0, 0x0, 0x90000}};
    int check = 2;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok393) {
    // -2.147483648
    s21_decimal decimal = {{0x80000000, 0x0, 0x0, 0x80090000}};
    int check = -2;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok394) {
    // 0.2147483648
    s21_decimal decimal = {{0x80000000, 0x0, 0x0, 0xA0000}};
    int check = 0;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok395) {
    // -0.2147483648
    s21_decimal decimal = {{0x80000000, 0x0, 0x0, 0x800A0000}};
    int check = 0;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok396) {
    // 0.0000000000000000002147483648
    s21_decimal decimal = {{0x80000000, 0x0, 0x0, 0x1C0000}};
    int check = 0;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok397) {
    // -0.0000000000000000002147483648
    s21_decimal decimal = {{0x80000000, 0x0, 0x0, 0x801C0000}};
    int check = 0;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok398) {
    // -202378.6784
    s21_decimal decimal = {{0x78A08920, 0x0, 0x0, 0x80040000}};
    int check = -202378;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok399) {
    // 202378.6784
    s21_decimal decimal = {{0x78A08920, 0x0, 0x0, 0x40000}};
    int check = 202378;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok400) {
    // 1157199323
    s21_decimal decimal = {{0x44F975DB, 0x0, 0x0, 0x0}};
    int check = 1157199323;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok401) {
    // -1157199323
    s21_decimal decimal = {{0x44F975DB, 0x0, 0x0, 0x80000000}};
    int check = -1157199323;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok402) {
    // -1047971123
    s21_decimal decimal = {{0x3E76C533, 0x0, 0x0, 0x80000000}};
    int check = -1047971123;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok403) {
    // 1047971123
    s21_decimal decimal = {{0x3E76C533, 0x0, 0x0, 0x0}};
    int check = 1047971123;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok404) {
    // 1635973982
    s21_decimal decimal = {{0x6182FB5E, 0x0, 0x0, 0x0}};
    int check = 1635973982;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok405) {
    // -1635973982
    s21_decimal decimal = {{0x6182FB5E, 0x0, 0x0, 0x80000000}};
    int check = -1635973982;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok406) {
    // 1664922502
    s21_decimal decimal = {{0x633CB386, 0x0, 0x0, 0x0}};
    int check = 1664922502;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok407) {
    // -1664922502
    s21_decimal decimal = {{0x633CB386, 0x0, 0x0, 0x80000000}};
    int check = -1664922502;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok408) {
    // -1562427032
    s21_decimal decimal = {{0x5D20BE98, 0x0, 0x0, 0x80000000}};
    int check = -1562427032;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok409) {
    // 1562427032
    s21_decimal decimal = {{0x5D20BE98, 0x0, 0x0, 0x0}};
    int check = 1562427032;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok410) {
    // 18415446
    s21_decimal decimal = {{0x118FF56, 0x0, 0x0, 0x0}};
    int check = 18415446;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok411) {
    // -18415446
    s21_decimal decimal = {{0x118FF56, 0x0, 0x0, 0x80000000}};
    int check = -18415446;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok412) {
    // 2043799125
    s21_decimal decimal = {{0x79D1E655, 0x0, 0x0, 0x0}};
    int check = 2043799125;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok413) {
    // -2043799125
    s21_decimal decimal = {{0x79D1E655, 0x0, 0x0, 0x80000000}};
    int check = -2043799125;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok414) {
    // -699081605
    s21_decimal decimal = {{0x29AB2385, 0x0, 0x0, 0x80000000}};
    int check = -699081605;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok415) {
    // 699081605
    s21_decimal decimal = {{0x29AB2385, 0x0, 0x0, 0x0}};
    int check = 699081605;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok416) {
    // 7206047.80
    s21_decimal decimal = {{0x2AF38E6C, 0x0, 0x0, 0x20000}};
    int check = 7206047;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok417) {
    // -7206047.80
    s21_decimal decimal = {{0x2AF38E6C, 0x0, 0x0, 0x80020000}};
    int check = -7206047;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok418) {
    // -405011.4826
    s21_decimal decimal = {{0xF167D90A, 0x0, 0x0, 0x80040000}};
    int check = -405011;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok419) {
    // 405011.4826
    s21_decimal decimal = {{0xF167D90A, 0x0, 0x0, 0x40000}};
    int check = 405011;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok420) {
    // 0.0000000002899686912
    s21_decimal decimal = {{0xACD5B600, 0x0, 0x0, 0x130000}};
    int check = 0;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok421) {
    // -0.0000000002899686912
    s21_decimal decimal = {{0xACD5B600, 0x0, 0x0, 0x80130000}};
    int check = 0;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok422) {
    // -806251761
    s21_decimal decimal = {{0x300E6CF1, 0x0, 0x0, 0x80000000}};
    int check = -806251761;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok423) {
    // 806251761
    s21_decimal decimal = {{0x300E6CF1, 0x0, 0x0, 0x0}};
    int check = 806251761;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok424) {
    // -961415253
    s21_decimal decimal = {{0x394E0855, 0x0, 0x0, 0x80000000}};
    int check = -961415253;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok425) {
    // 961415253
    s21_decimal decimal = {{0x394E0855, 0x0, 0x0, 0x0}};
    int check = 961415253;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok426) {
    // 1362812644
    s21_decimal decimal = {{0x513ADEE4, 0x0, 0x0, 0x0}};
    int check = 1362812644;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok427) {
    // -1362812644
    s21_decimal decimal = {{0x513ADEE4, 0x0, 0x0, 0x80000000}};
    int check = -1362812644;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok428) {
    // 744018023
    s21_decimal decimal = {{0x2C58D067, 0x0, 0x0, 0x0}};
    int check = 744018023;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok429) {
    // -744018023
    s21_decimal decimal = {{0x2C58D067, 0x0, 0x0, 0x80000000}};
    int check = -744018023;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok430) {
    // -669134488
    s21_decimal decimal = {{0x27E22E98, 0x0, 0x0, 0x80000000}};
    int check = -669134488;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok431) {
    // 669134488
    s21_decimal decimal = {{0x27E22E98, 0x0, 0x0, 0x0}};
    int check = 669134488;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok432) {
    // 1135755779
    s21_decimal decimal = {{0x43B24203, 0x0, 0x0, 0x0}};
    int check = 1135755779;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok433) {
    // -1135755779
    s21_decimal decimal = {{0x43B24203, 0x0, 0x0, 0x80000000}};
    int check = -1135755779;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok434) {
    // -1066687460
    s21_decimal decimal = {{0x3F945BE4, 0x0, 0x0, 0x80000000}};
    int check = -1066687460;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok435) {
    // 1066687460
    s21_decimal decimal = {{0x3F945BE4, 0x0, 0x0, 0x0}};
    int check = 1066687460;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok436) {
    // 1775.200759
    s21_decimal decimal = {{0x69CF69F7, 0x0, 0x0, 0x60000}};
    int check = 1775;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok437) {
    // -1775.200759
    s21_decimal decimal = {{0x69CF69F7, 0x0, 0x0, 0x80060000}};
    int check = -1775;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok438) {
    // 2049377039
    s21_decimal decimal = {{0x7A27030F, 0x0, 0x0, 0x0}};
    int check = 2049377039;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok439) {
    // -2049377039
    s21_decimal decimal = {{0x7A27030F, 0x0, 0x0, 0x80000000}};
    int check = -2049377039;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok440) {
    // 644156872
    s21_decimal decimal = {{0x26650DC8, 0x0, 0x0, 0x0}};
    int check = 644156872;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok441) {
    // -644156872
    s21_decimal decimal = {{0x26650DC8, 0x0, 0x0, 0x80000000}};
    int check = -644156872;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok442) {
    // 411899256
    s21_decimal decimal = {{0x188D1578, 0x0, 0x0, 0x0}};
    int check = 411899256;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok443) {
    // -411899256
    s21_decimal decimal = {{0x188D1578, 0x0, 0x0, 0x80000000}};
    int check = -411899256;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok444) {
    // -0.0000000000000000321044217
    s21_decimal decimal = {{0x1322BEF9, 0x0, 0x0, 0x80190000}};
    int check = 0;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok445) {
    // 0.0000000000000000321044217
    s21_decimal decimal = {{0x1322BEF9, 0x0, 0x0, 0x190000}};
    int check = 0;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok446) {
    // 0.000000000000000003809359548
    s21_decimal decimal = {{0xE30E36BC, 0x0, 0x0, 0x1B0000}};
    int check = 0;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok447) {
    // -0.000000000000000003809359548
    s21_decimal decimal = {{0xE30E36BC, 0x0, 0x0, 0x801B0000}};
    int check = 0;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok448) {
    // -0.000000000002807144663
    s21_decimal decimal = {{0xA751A0D7, 0x0, 0x0, 0x80150000}};
    int check = 0;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok449) {
    // 0.000000000002807144663
    s21_decimal decimal = {{0xA751A0D7, 0x0, 0x0, 0x150000}};
    int check = 0;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok450) {
    // 1802612012
    s21_decimal decimal = {{0x6B71AD2C, 0x0, 0x0, 0x0}};
    int check = 1802612012;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok451) {
    // -1802612012
    s21_decimal decimal = {{0x6B71AD2C, 0x0, 0x0, 0x80000000}};
    int check = -1802612012;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok452) {
    // 1498496264
    s21_decimal decimal = {{0x59513D08, 0x0, 0x0, 0x0}};
    int check = 1498496264;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok453) {
    // -1498496264
    s21_decimal decimal = {{0x59513D08, 0x0, 0x0, 0x80000000}};
    int check = -1498496264;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok454) {
    // 0.000000001060195434
    s21_decimal decimal = {{0x3F314C6A, 0x0, 0x0, 0x120000}};
    int check = 0;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok455) {
    // -0.000000001060195434
    s21_decimal decimal = {{0x3F314C6A, 0x0, 0x0, 0x80120000}};
    int check = 0;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok456) {
    // -346.3980837
    s21_decimal decimal = {{0xCE782725, 0x0, 0x0, 0x80070000}};
    int check = -346;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok457) {
    // 346.3980837
    s21_decimal decimal = {{0xCE782725, 0x0, 0x0, 0x70000}};
    int check = 346;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok458) {
    // -0.0000000000000000000791281307
    s21_decimal decimal = {{0x2F29FE9B, 0x0, 0x0, 0x801C0000}};
    int check = 0;

    test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok459) {
    // 0.0000000000000000000791281307
    s21_decimal decimal = {{0x2F29FE9B, 0x0, 0x0, 0x1C0000}};
    int check = 0;

    test_from_decimal_to_int(decimal, check);

}

START_TEST(test_from_float_to_decimal_ok1970) {
    // -234230.063
    int f = -932921980;
    // -234230.1
    s21_decimal decimal_check = {{0x23BD9D, 0x0, 0x0, 0x80010000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok1971) {
    // 2.67943988E+13
    int f = 1438839925;
    // 26794400000000
    s21_decimal decimal_check = {{0x8EB1A800, 0x185E, 0x0, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok1972) {
    // -2.67943988E+13
    int f = -708643723;
    // -26794400000000
    s21_decimal decimal_check = {{0x8EB1A800, 0x185E, 0x0, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok1973) {
    // 5.02389341E-24
    int f = 415390267;
    // 0.0000000000000000000000050239
    s21_decimal decimal_check = {{0xC43F, 0x0, 0x0, 0x1C0000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok1974) {
    // -5.02389341E-24
    int f = -1732093381;
    // -0.0000000000000000000000050239
    s21_decimal decimal_check = {{0xC43F, 0x0, 0x0, 0x801C0000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok1975) {
    // 3.10225183E-21
    int f = 493512263;
    // 0.000000000000000000003102252
    s21_decimal decimal_check = {{0x2F562C, 0x0, 0x0, 0x1B0000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok1976) {
    // -3.10225183E-21
    int f = -1653971385;
    // -0.000000000000000000003102252
    s21_decimal decimal_check = {{0x2F562C, 0x0, 0x0, 0x801B0000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok1977) {
    // 1.9376137E-12
    int f = 738744562;
    // 0.000000000001937614
    s21_decimal decimal_check = {{0x1D90CE, 0x0, 0x0, 0x120000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok1978) {
    // -1.9376137E-12
    int f = -1408739086;
    // -0.000000000001937614
    s21_decimal decimal_check = {{0x1D90CE, 0x0, 0x0, 0x80120000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok1979) {
    // 6.28786967E-10
    int f = 808244979;
    // 0.000000000628787
    s21_decimal decimal_check = {{0x99833, 0x0, 0x0, 0xF0000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok1980) {
    // -6.28786967E-10
    int f = -1339238669;
    // -0.000000000628787
    s21_decimal decimal_check = {{0x99833, 0x0, 0x0, 0x800F0000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok1981) {
    // 0.0611746721
    int f = 1031443019;
    // 0.06117467
    s21_decimal decimal_check = {{0x5D585B, 0x0, 0x0, 0x80000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok1982) {
    // -0.0611746721
    int f = -1116040629;
    // -0.06117467
    s21_decimal decimal_check = {{0x5D585B, 0x0, 0x0, 0x80080000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok1983) {
    // 1.0531192E-14
    int f = 675133069;
    // 0.00000000000001053119
    s21_decimal decimal_check = {{0x1011BF, 0x0, 0x0, 0x140000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok1984) {
    // -1.0531192E-14
    int f = -1472350579;
    // -0.00000000000001053119
    s21_decimal decimal_check = {{0x1011BF, 0x0, 0x0, 0x80140000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok1985) {
    // 1.79615123E-25
    int f = 375282254;
    // 0.0000000000000000000000001796
    s21_decimal decimal_check = {{0x704, 0x0, 0x0, 0x1C0000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok1986) {
    // -1.79615123E-25
    int f = -1772201394;
    // -0.0000000000000000000000001796
    s21_decimal decimal_check = {{0x704, 0x0, 0x0, 0x801C0000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok1987) {
    // 2.3376424E-06
    int f = 907862116;
    // 0.000002337642
    s21_decimal decimal_check = {{0x23AB6A, 0x0, 0x0, 0xC0000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok1988) {
    // -2.3376424E-06
    int f = -1239621532;
    // -0.000002337642
    s21_decimal decimal_check = {{0x23AB6A, 0x0, 0x0, 0x800C0000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok1989) {
    // 2.57119381E+12
    int f = 1410705862;
    // 2571194000000
    s21_decimal decimal_check = {{0xA71AE280, 0x256, 0x0, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok1990) {
    // -2.57119381E+12
    int f = -736777786;
    // -2571194000000
    s21_decimal decimal_check = {{0xA71AE280, 0x256, 0x0, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok1991) {
    // 7.04551938E+14
    int f = 1478505042;
    // 704551900000000
    s21_decimal decimal_check = {{0x45B9AF00, 0x280C9, 0x0, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok1992) {
    // -7.04551938E+14
    int f = -668978606;
    // -704551900000000
    s21_decimal decimal_check = {{0x45B9AF00, 0x280C9, 0x0, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok1993) {
    // 3.42087291E-23
    int f = 438660187;
    // 0.0000000000000000000000342087
    s21_decimal decimal_check = {{0x53847, 0x0, 0x0, 0x1C0000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok1994) {
    // -3.42087291E-23
    int f = -1708823461;
    // -0.0000000000000000000000342087
    s21_decimal decimal_check = {{0x53847, 0x0, 0x0, 0x801C0000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok1995) {
    // 9.9840353E-12
    int f = 758096921;
    // 0.000000000009984035
    s21_decimal decimal_check = {{0x985823, 0x0, 0x0, 0x120000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok1996) {
    // -9.9840353E-12
    int f = -1389386727;
    // -0.000000000009984035
    s21_decimal decimal_check = {{0x985823, 0x0, 0x0, 0x80120000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok1997) {
    // 2.79144812
    int f = 1077061398;
    // 2.791448
    s21_decimal decimal_check = {{0x2A9818, 0x0, 0x0, 0x60000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok1998) {
    // -2.79144812
    int f = -1070422250;
    // -2.791448
    s21_decimal decimal_check = {{0x2A9818, 0x0, 0x0, 0x80060000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok1999) {
    // 6.18437859E+22
    int f = 1699842287;
    // 61843790000000000000000
    s21_decimal decimal_check = {{0xBEFB0000, 0x8EFEAE8E, 0xD18, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2000) {
    // -6.18437859E+22
    int f = -447641361;
    // -61843790000000000000000
    s21_decimal decimal_check = {{0xBEFB0000, 0x8EFEAE8E, 0xD18, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2001) {
    // 7.92281578E+28
    int f = 1870659583;
    // 79228160000000000000000000000
    s21_decimal decimal_check = {{0x20000000, 0xB392B21A, 0xFFFFFF77, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2002) {
    // -7.92281578E+28
    int f = -276824065;
    // -79228160000000000000000000000
    s21_decimal decimal_check = {{0x20000000, 0xB392B21A, 0xFFFFFF77, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2003) {
    // 7.92281531E+28
    int f = 1870659582;
    // 79228150000000000000000000000
    s21_decimal decimal_check = {{0x6DC00000, 0x99B1E85F, 0xFFFFFD59, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2004) {
    // -7.92281531E+28
    int f = -276824066;
    // -79228150000000000000000000000
    s21_decimal decimal_check = {{0x6DC00000, 0x99B1E85F, 0xFFFFFD59, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2005) {
    // 7.92281483E+28
    int f = 1870659581;
    // 79228150000000000000000000000
    s21_decimal decimal_check = {{0x6DC00000, 0x99B1E85F, 0xFFFFFD59, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2006) {
    // -7.92281483E+28
    int f = -276824067;
    // -79228150000000000000000000000
    s21_decimal decimal_check = {{0x6DC00000, 0x99B1E85F, 0xFFFFFD59, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2007) {
    // 7.92281436E+28
    int f = 1870659580;
    // 79228140000000000000000000000
    s21_decimal decimal_check = {{0xBB800000, 0x7FD11EA4, 0xFFFFFB3B, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2008) {
    // -7.92281436E+28
    int f = -276824068;
    // -79228140000000000000000000000
    s21_decimal decimal_check = {{0xBB800000, 0x7FD11EA4, 0xFFFFFB3B, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2009) {
    // 7.92281389E+28
    int f = 1870659579;
    // 79228140000000000000000000000
    s21_decimal decimal_check = {{0xBB800000, 0x7FD11EA4, 0xFFFFFB3B, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2010) {
    // -7.92281389E+28
    int f = -276824069;
    // -79228140000000000000000000000
    s21_decimal decimal_check = {{0xBB800000, 0x7FD11EA4, 0xFFFFFB3B, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2011) {
    // 7.92281342E+28
    int f = 1870659578;
    // 79228130000000000000000000000
    s21_decimal decimal_check = {{0x9400000, 0x65F054EA, 0xFFFFF91D, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2012) {
    // -7.92281342E+28
    int f = -276824070;
    // -79228130000000000000000000000
    s21_decimal decimal_check = {{0x9400000, 0x65F054EA, 0xFFFFF91D, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2013) {
    // 7.92281295E+28
    int f = 1870659577;
    // 79228130000000000000000000000
    s21_decimal decimal_check = {{0x9400000, 0x65F054EA, 0xFFFFF91D, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2014) {
    // -7.92281295E+28
    int f = -276824071;
    // -79228130000000000000000000000
    s21_decimal decimal_check = {{0x9400000, 0x65F054EA, 0xFFFFF91D, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2015) {
    // 7.92281247E+28
    int f = 1870659576;
    // 79228120000000000000000000000
    s21_decimal decimal_check = {{0x57000000, 0x4C0F8B2F, 0xFFFFF6FF, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2016) {
    // -7.92281247E+28
    int f = -276824072;
    // -79228120000000000000000000000
    s21_decimal decimal_check = {{0x57000000, 0x4C0F8B2F, 0xFFFFF6FF, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2017) {
    // 7.9228087E+28
    int f = 1870659568;
    // 79228090000000000000000000000
    s21_decimal decimal_check = {{0x40400000, 0xFE6D2DFF, 0xFFFFF0A4, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2018) {
    // -7.9228087E+28
    int f = -276824080;
    // -79228090000000000000000000000
    s21_decimal decimal_check = {{0x40400000, 0xFE6D2DFF, 0xFFFFF0A4, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2019) {
    // 7.92280114E+28
    int f = 1870659552;
    // 79228010000000000000000000000
    s21_decimal decimal_check = {{0xAE400000, 0x2F66E029, 0xFFFFDFB4, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2020) {
    // -7.92280114E+28
    int f = -276824096;
    // -79228010000000000000000000000
    s21_decimal decimal_check = {{0xAE400000, 0x2F66E029, 0xFFFFDFB4, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2021) {
    // 7.92278603E+28
    int f = 1870659520;
    // 79227860000000000000000000000
    s21_decimal decimal_check = {{0x3C800000, 0xAB3B0E39, 0xFFFFBFF0, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2022) {
    // -7.92278603E+28
    int f = -276824128;
    // -79227860000000000000000000000
    s21_decimal decimal_check = {{0x3C800000, 0xAB3B0E39, 0xFFFFBFF0, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2023) {
    // 6.60234672E+28
    int f = 1867863381;
    // 66023470000000000000000000000
    s21_decimal decimal_check = {{0xC00000, 0x739A8254, 0xD5555598, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2024) {
    // -6.60234672E+28
    int f = -279620267;
    // -66023470000000000000000000000
    s21_decimal decimal_check = {{0xC00000, 0x739A8254, 0xD5555598, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2025) {
    // 5.94211219E+28
    int f = 1866465280;
    // 59421120000000000000000000000
    s21_decimal decimal_check = {{0x98000000, 0xC6AE0593, 0xBFFFFF99, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2026) {
    // -5.94211219E+28
    int f = -281018368;
    // -59421120000000000000000000000
    s21_decimal decimal_check = {{0x98000000, 0xC6AE0593, 0xBFFFFF99, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2027) {
    // 5.28187719E+28
    int f = 1865067178;
    // 52818770000000000000000000000
    s21_decimal decimal_check = {{0x2F400000, 0x19C188D3, 0xAAAAA99B, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2028) {
    // -5.28187719E+28
    int f = -282416470;
    // -52818770000000000000000000000
    s21_decimal decimal_check = {{0x2F400000, 0x19C188D3, 0xAAAAA99B, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2029) {
    // 3.96140813E+28
    int f = 1862270976;
    // 39614080000000000000000000000
    s21_decimal decimal_check = {{0x10000000, 0xD9C9590D, 0x7FFFFFBB, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2030) {
    // -3.96140813E+28
    int f = -285212672;
    // -39614080000000000000000000000
    s21_decimal decimal_check = {{0x10000000, 0xD9C9590D, 0x7FFFFFBB, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2031) {
    // 1.65058668E+28
    int f = 1851086165;
    // 16505870000000000000000000000
    s21_decimal decimal_check = {{0xACC00000, 0xA35ED303, 0x355555ED, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2032) {
    // -1.65058668E+28
    int f = -296397483;
    // -16505870000000000000000000000
    s21_decimal decimal_check = {{0xACC00000, 0xA35ED303, 0x355555ED, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2033) {
    // 1.3204693E+28
    int f = 1848289962;
    // 13204690000000000000000000000
    s21_decimal decimal_check = {{0x1F400000, 0x3FF82FC6, 0x2AAAA9DF, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2034) {
    // -1.3204693E+28
    int f = -299193686;
    // -13204690000000000000000000000
    s21_decimal decimal_check = {{0x1F400000, 0x3FF82FC6, 0x2AAAA9DF, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2035) {
    // 1.03161667E+27
    int f = 1817531733;
    // 1031617000000000000000000000
    s21_decimal decimal_check = {{0xF6A00000, 0xA0EF22E8, 0x3555565, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2036) {
    // -1.03161667E+27
    int f = -329951915;
    // -1031617000000000000000000000
    s21_decimal decimal_check = {{0xF6A00000, 0xA0EF22E8, 0x3555565, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2037) {
    // 8.2529331E+26
    int f = 1814735530;
    // 825293300000000000000000000
    s21_decimal decimal_check = {{0xCF500000, 0x709C67CB, 0x2AAAAA7, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2038) {
    // -8.2529331E+26
    int f = -332748118;
    // -825293300000000000000000000
    s21_decimal decimal_check = {{0xCF500000, 0x709C67CB, 0x2AAAAA7, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2039) {
    // 4.02975264E+24
    int f = 1750422869;
    // 4029753000000000000000000
    s21_decimal decimal_check = {{0x19440000, 0x590D4990, 0x35555, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2040) {
    // -4.02975264E+24
    int f = -397060779;
    // -4029753000000000000000000
    s21_decimal decimal_check = {{0x19440000, 0x590D4990, 0x35555, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2041) {
    // 2.41785164E+24
    int f = 1744830464;
    // 2417852000000000000000000
    s21_decimal decimal_check = {{0xFD700000, 0x501B713, 0x20000, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2042) {
    // -2.41785164E+24
    int f = -402653184;
    // -2417852000000000000000000
    s21_decimal decimal_check = {{0xFD700000, 0x501B713, 0x20000, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2043) {
    // 2.4178515E+24
    int f = 1744830463;
    // 2417851000000000000000000
    s21_decimal decimal_check = {{0x560C0000, 0xF7210060, 0x1FFFF, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2044) {
    // -2.4178515E+24
    int f = -402653185;
    // -2417851000000000000000000
    s21_decimal decimal_check = {{0x560C0000, 0xF7210060, 0x1FFFF, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2045) {
    // 2.41785135E+24
    int f = 1744830462;
    // 2417851000000000000000000
    s21_decimal decimal_check = {{0x560C0000, 0xF7210060, 0x1FFFF, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2046) {
    // -2.41785135E+24
    int f = -402653186;
    // -2417851000000000000000000
    s21_decimal decimal_check = {{0x560C0000, 0xF7210060, 0x1FFFF, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2047) {
    // 3.22380199E+24
    int f = 1747626666;
    // 3223802000000000000000000
    s21_decimal decimal_check = {{0x37A80000, 0xA81724F8, 0x2AAAA, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2048) {
    // -3.22380199E+24
    int f = -399856982;
    // -3223802000000000000000000
    s21_decimal decimal_check = {{0x37A80000, 0xA81724F8, 0x2AAAA, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2049) {
    // 2.01487632E+24
    int f = 1742034261;
    // 2014876000000000000000000
    s21_decimal decimal_check = {{0x38F00000, 0xA596496E, 0x1AAAA, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2050) {
    // -2.01487632E+24
    int f = -405449387;
    // -2014876000000000000000000
    s21_decimal decimal_check = {{0x38F00000, 0xA596496E, 0x1AAAA, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2051) {
    // 1.611901E+24
    int f = 1739238058;
    // 1611901000000000000000000
    s21_decimal decimal_check = {{0x1BD40000, 0x540B927C, 0x15555, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2052) {
    // -1.611901E+24
    int f = -408245590;
    // -1611901000000000000000000
    s21_decimal decimal_check = {{0x1BD40000, 0x540B927C, 0x15555, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2053) {
    // 9.44473297E+21
    int f = 1677721600;
    // 9444733000000000000000
    s21_decimal decimal_check = {{0xF16C8000, 0x1F28, 0x200, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2054) {
    // -9.44473297E+21
    int f = -469762048;
    // -9444733000000000000000
    s21_decimal decimal_check = {{0xF16C8000, 0x1F28, 0x200, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2055) {
    // 9.4447324E+21
    int f = 1677721599;
    // 9444732000000000000000
    s21_decimal decimal_check = {{0x4CA60000, 0xFFFC91AA, 0x1FF, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2056) {
    // -9.4447324E+21
    int f = -469762049;
    // -9444732000000000000000
    s21_decimal decimal_check = {{0x4CA60000, 0xFFFC91AA, 0x1FF, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2057) {
    // 9.44473184E+21
    int f = 1677721598;
    // 9444732000000000000000
    s21_decimal decimal_check = {{0x4CA60000, 0xFFFC91AA, 0x1FF, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2058) {
    // -9.44473184E+21
    int f = -469762050;
    // -9444732000000000000000
    s21_decimal decimal_check = {{0x4CA60000, 0xFFFC91AA, 0x1FF, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2059) {
    // 7.87061062E+21
    int f = 1674925397;
    // 7870611000000000000000
    s21_decimal decimal_check = {{0x39FB8000, 0xAAAB5C37, 0x1AA, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2060) {
    // -7.87061062E+21
    int f = -472558251;
    // -7870611000000000000000
    s21_decimal decimal_check = {{0x39FB8000, 0xAAAB5C37, 0x1AA, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2061) {
    // 6.29648827E+21
    int f = 1672129194;
    // 6296488000000000000000
    s21_decimal decimal_check = {{0xDDC40000, 0x55530BC6, 0x155, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2062) {
    // -6.29648827E+21
    int f = -475354454;
    // -6296488000000000000000
    s21_decimal decimal_check = {{0xDDC40000, 0x55530BC6, 0x155, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2063) {
    // 5.9029581E+20
    int f = 1644167168;
    // 590295800000000000000
    s21_decimal decimal_check = {{0x2D078000, 0xFFFFF694, 0x1F, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2064) {
    // -5.9029581E+20
    int f = -503316480;
    // -590295800000000000000
    s21_decimal decimal_check = {{0x2D078000, 0xFFFFF694, 0x1F, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2065) {
    // 5.90295775E+20
    int f = 1644167167;
    // 590295800000000000000
    s21_decimal decimal_check = {{0x2D078000, 0xFFFFF694, 0x1F, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2066) {
    // -5.90295775E+20
    int f = -503316481;
    // -590295800000000000000
    s21_decimal decimal_check = {{0x2D078000, 0xFFFFF694, 0x1F, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2067) {
    // 5.9029574E+20
    int f = 1644167166;
    // 590295700000000000000
    s21_decimal decimal_check = {{0x1C8D4000, 0xFFFF9BA1, 0x1F, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2068) {
    // -5.9029574E+20
    int f = -503316482;
    // -590295700000000000000
    s21_decimal decimal_check = {{0x1C8D4000, 0xFFFF9BA1, 0x1F, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2069) {
    // 4.91913164E+20
    int f = 1641370965;
    // 491913200000000000000
    s21_decimal decimal_check = {{0xD5AF0000, 0xAAAAC121, 0x1A, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2070) {
    // -4.91913164E+20
    int f = -506112683;
    // -491913200000000000000
    s21_decimal decimal_check = {{0xD5AF0000, 0xAAAAC121, 0x1A, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2071) {
    // 3.93530517E+20
    int f = 1638574762;
    // 393530500000000000000
    s21_decimal decimal_check = {{0x6DDC4000, 0x555530BC, 0x15, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2072) {
    // -3.93530517E+20
    int f = -508908886;
    // -393530500000000000000
    s21_decimal decimal_check = {{0x6DDC4000, 0x555530BC, 0x15, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2073) {
    // 1.47573953E+20
    int f = 1627389952;
    // 147574000000000000000
    s21_decimal decimal_check = {{0x937F0000, 0x2B1E, 0x8, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2074) {
    // -1.47573953E+20
    int f = -520093696;
    // -147574000000000000000
    s21_decimal decimal_check = {{0x937F0000, 0x2B1E, 0x8, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2075) {
    // 1.47573944E+20
    int f = 1627389951;
    // 147573900000000000000
    s21_decimal decimal_check = {{0x8304C000, 0xFFFFD02B, 0x7, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2076) {
    // -1.47573944E+20
    int f = -520093697;
    // -147573900000000000000
    s21_decimal decimal_check = {{0x8304C000, 0xFFFFD02B, 0x7, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2077) {
    // 1.47573935E+20
    int f = 1627389950;
    // 147573900000000000000
    s21_decimal decimal_check = {{0x8304C000, 0xFFFFD02B, 0x7, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2078) {
    // -1.47573935E+20
    int f = -520093698;
    // -147573900000000000000
    s21_decimal decimal_check = {{0x8304C000, 0xFFFFD02B, 0x7, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2079) {
    // 1.22978291E+20
    int f = 1624593749;
    // 122978300000000000000
    s21_decimal decimal_check = {{0x756BC000, 0xAAAAB048, 0x6, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2080) {
    // -1.22978291E+20
    int f = -522889899;
    // -122978300000000000000
    s21_decimal decimal_check = {{0x756BC000, 0xAAAAB048, 0x6, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2081) {
    // 9.83826292E+19
    int f = 1621797546;
    // 98382630000000000000
    s21_decimal decimal_check = {{0x42B06000, 0x555550BB, 0x5, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2082) {
    // -9.83826292E+19
    int f = -525686102;
    // -98382630000000000000
    s21_decimal decimal_check = {{0x42B06000, 0x555550BB, 0x5, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2083) {
    // 6.14891454E+19
    int f = 1616205141;
    // 61489150000000000000
    s21_decimal decimal_check = {{0x3AB5E000, 0x55555824, 0x3, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2084) {
    // -6.14891454E+19
    int f = -531278507;
    // -61489150000000000000
    s21_decimal decimal_check = {{0x3AB5E000, 0x55555824, 0x3, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2085) {
    // 3.68934881E+19
    int f = 1610612736;
    // 36893490000000000000
    s21_decimal decimal_check = {{0x566D2000, 0x1AF, 0x2, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2086) {
    // -3.68934881E+19
    int f = -536870912;
    // -36893490000000000000
    s21_decimal decimal_check = {{0x566D2000, 0x1AF, 0x2, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2087) {
    // 3.68934859E+19
    int f = 1610612735;
    // 36893490000000000000
    s21_decimal decimal_check = {{0x566D2000, 0x1AF, 0x2, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2088) {
    // -3.68934859E+19
    int f = -536870913;
    // -36893490000000000000
    s21_decimal decimal_check = {{0x566D2000, 0x1AF, 0x2, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2089) {
    // 3.68934837E+19
    int f = 1610612734;
    // 36893480000000000000
    s21_decimal decimal_check = {{0x7FA8000, 0xFFFFF897, 0x1, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2090) {
    // -3.68934837E+19
    int f = -536870914;
    // -36893480000000000000
    s21_decimal decimal_check = {{0x7FA8000, 0xFFFFF897, 0x1, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2091) {
    // 3.07445727E+19
    int f = 1607816533;
    // 30744570000000000000
    s21_decimal decimal_check = {{0xF621A000, 0xAAAAA785, 0x1, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2092) {
    // -3.07445727E+19
    int f = -539667115;
    // -30744570000000000000
    s21_decimal decimal_check = {{0xF621A000, 0xAAAAA785, 0x1, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2093) {
    // 2.76701161E+19
    int f = 1606418432;
    // 27670120000000000000
    s21_decimal decimal_check = {{0x946E8000, 0x80000389, 0x1, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2094) {
    // -2.76701161E+19
    int f = -541065216;
    // -27670120000000000000
    s21_decimal decimal_check = {{0x946E8000, 0x80000389, 0x1, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2095) {
    // 2.45956573E+19
    int f = 1605020330;
    // 24595660000000000000
    s21_decimal decimal_check = {{0xE448C000, 0x55555674, 0x1, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2096) {
    // -2.45956573E+19
    int f = -542463318;
    // -24595660000000000000
    s21_decimal decimal_check = {{0xE448C000, 0x55555674, 0x1, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2097) {
    // 8.58993459E+09
    int f = 1342177280;
    // 8589935000
    s21_decimal decimal_check = {{0x198, 0x2, 0x0, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2098) {
    // -8.58993459E+09
    int f = -805306368;
    // -8589935000
    s21_decimal decimal_check = {{0x198, 0x2, 0x0, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2099) {
    // 8.58993408E+09
    int f = 1342177279;
    // 8589934000
    s21_decimal decimal_check = {{0xFFFFFDB0, 0x1, 0x0, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2100) {
    // -8.58993408E+09
    int f = -805306369;
    // -8589934000
    s21_decimal decimal_check = {{0xFFFFFDB0, 0x1, 0x0, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2101) {
    // 8.58993357E+09
    int f = 1342177278;
    // 8589934000
    s21_decimal decimal_check = {{0xFFFFFDB0, 0x1, 0x0, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2102) {
    // -8.58993357E+09
    int f = -805306370;
    // -8589934000
    s21_decimal decimal_check = {{0xFFFFFDB0, 0x1, 0x0, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2103) {
    // 7.15827866E+09
    int f = 1339381077;
    // 7158279000
    s21_decimal decimal_check = {{0xAAAAAB58, 0x1, 0x0, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2104) {
    // -7.15827866E+09
    int f = -808102571;
    // -7158279000
    s21_decimal decimal_check = {{0xAAAAAB58, 0x1, 0x0, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2105) {
    // 6.44245094E+09
    int f = 1337982976;
    // 6442451000
    s21_decimal decimal_check = {{0x80000038, 0x1, 0x0, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2106) {
    // -6.44245094E+09
    int f = -809500672;
    // -6442451000
    s21_decimal decimal_check = {{0x80000038, 0x1, 0x0, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2107) {
    // 5.72662272E+09
    int f = 1336584874;
    // 5726623000
    s21_decimal decimal_check = {{0x55555518, 0x1, 0x0, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2108) {
    // -5.72662272E+09
    int f = -810898774;
    // -5726623000
    s21_decimal decimal_check = {{0x55555518, 0x1, 0x0, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2109) {
    // 5131067.5
    int f = 1251776119;
    // 5131068
    s21_decimal decimal_check = {{0x4E4B3C, 0x0, 0x0, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2110) {
    // -5131067.5
    int f = -895707529;
    // -5131068
    s21_decimal decimal_check = {{0x4E4B3C, 0x0, 0x0, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2111) {
    // 5131067
    int f = 1251776118;
    // 5131067
    s21_decimal decimal_check = {{0x4E4B3B, 0x0, 0x0, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2112) {
    // -5131067
    int f = -895707530;
    // -5131067
    s21_decimal decimal_check = {{0x4E4B3B, 0x0, 0x0, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2113) {
    // 5131066.5
    int f = 1251776117;
    // 5131066
    s21_decimal decimal_check = {{0x4E4B3A, 0x0, 0x0, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2114) {
    // -5131066.5
    int f = -895707531;
    // -5131066
    s21_decimal decimal_check = {{0x4E4B3A, 0x0, 0x0, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2115) {
    // 1131071.13
    int f = 1233785337;
    // 1131071
    s21_decimal decimal_check = {{0x11423F, 0x0, 0x0, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2116) {
    // -1131071.13
    int f = -913698311;
    // -1131071
    s21_decimal decimal_check = {{0x11423F, 0x0, 0x0, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2117) {
    // 1131071
    int f = 1233785336;
    // 1131071
    s21_decimal decimal_check = {{0x11423F, 0x0, 0x0, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2118) {
    // -1131071
    int f = -913698312;
    // -1131071
    s21_decimal decimal_check = {{0x11423F, 0x0, 0x0, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2119) {
    // 1131070.88
    int f = 1233785335;
    // 1131071
    s21_decimal decimal_check = {{0x11423F, 0x0, 0x0, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2120) {
    // -1131070.88
    int f = -913698313;
    // -1131071
    s21_decimal decimal_check = {{0x11423F, 0x0, 0x0, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2121) {
    // 131071.992
    int f = 1207959551;
    // 131072
    s21_decimal decimal_check = {{0x20000, 0x0, 0x0, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2122) {
    // -131071.992
    int f = -939524097;
    // -131072
    s21_decimal decimal_check = {{0x20000, 0x0, 0x0, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2123) {
    // 131071.008
    int f = 1207959425;
    // 131071
    s21_decimal decimal_check = {{0x1FFFF, 0x0, 0x0, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2124) {
    // -131071.008
    int f = -939524223;
    // -131071
    s21_decimal decimal_check = {{0x1FFFF, 0x0, 0x0, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2125) {
    // 131071
    int f = 1207959424;
    // 131071
    s21_decimal decimal_check = {{0x1FFFF, 0x0, 0x0, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2126) {
    // -131071
    int f = -939524224;
    // -131071
    s21_decimal decimal_check = {{0x1FFFF, 0x0, 0x0, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2127) {
    // 131070.992
    int f = 1207959423;
    // 131071
    s21_decimal decimal_check = {{0x1FFFF, 0x0, 0x0, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2128) {
    // -131070.992
    int f = -939524225;
    // -131071
    s21_decimal decimal_check = {{0x1FFFF, 0x0, 0x0, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2129) {
    // 109226.664
    int f = 1205163349;
    // 109226.7
    s21_decimal decimal_check = {{0x10AAAB, 0x0, 0x0, 0x10000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2130) {
    // -109226.664
    int f = -942320299;
    // -109226.7
    s21_decimal decimal_check = {{0x10AAAB, 0x0, 0x0, 0x80010000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2131) {
    // 98304.0078
    int f = 1203765249;
    // 98304.01
    s21_decimal decimal_check = {{0x960001, 0x0, 0x0, 0x20000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2132) {
    // -98304.0078
    int f = -943718399;
    // -98304.01
    s21_decimal decimal_check = {{0x960001, 0x0, 0x0, 0x80020000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2133) {
    // 98304
    int f = 1203765248;
    // 98304
    s21_decimal decimal_check = {{0x18000, 0x0, 0x0, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2134) {
    // -98304
    int f = -943718400;
    // -98304
    s21_decimal decimal_check = {{0x18000, 0x0, 0x0, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2135) {
    // 98303.9922
    int f = 1203765247;
    // 98303.99
    s21_decimal decimal_check = {{0x95FFFF, 0x0, 0x0, 0x20000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2136) {
    // -98303.9922
    int f = -943718401;
    // -98303.99
    s21_decimal decimal_check = {{0x95FFFF, 0x0, 0x0, 0x80020000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2137) {
    // 87381.3281
    int f = 1202367146;
    // 87381.33
    s21_decimal decimal_check = {{0x855555, 0x0, 0x0, 0x20000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2138) {
    // -87381.3281
    int f = -945116502;
    // -87381.33
    s21_decimal decimal_check = {{0x855555, 0x0, 0x0, 0x80020000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2139) {
    // 87381.0078
    int f = 1202367105;
    // 87381.01
    s21_decimal decimal_check = {{0x855535, 0x0, 0x0, 0x20000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2140) {
    // -87381.0078
    int f = -945116543;
    // -87381.01
    s21_decimal decimal_check = {{0x855535, 0x0, 0x0, 0x80020000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2141) {
    // 87381
    int f = 1202367104;
    // 87381
    s21_decimal decimal_check = {{0x15555, 0x0, 0x0, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2142) {
    // -87381
    int f = -945116544;
    // -87381
    s21_decimal decimal_check = {{0x15555, 0x0, 0x0, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2143) {
    // 87380.9922
    int f = 1202367103;
    // 87380.99
    s21_decimal decimal_check = {{0x855533, 0x0, 0x0, 0x20000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2144) {
    // -87380.9922
    int f = -945116545;
    // -87380.99
    s21_decimal decimal_check = {{0x855533, 0x0, 0x0, 0x80020000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2145) {
    // 50000.0039
    int f = 1195593729;
    // 50000
    s21_decimal decimal_check = {{0xC350, 0x0, 0x0, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2146) {
    // -50000.0039
    int f = -951889919;
    // -50000
    s21_decimal decimal_check = {{0xC350, 0x0, 0x0, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2147) {
    // 50000
    int f = 1195593728;
    // 50000
    s21_decimal decimal_check = {{0xC350, 0x0, 0x0, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2148) {
    // -50000
    int f = -951889920;
    // -50000
    s21_decimal decimal_check = {{0xC350, 0x0, 0x0, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2149) {
    // 49999.9961
    int f = 1195593727;
    // 50000
    s21_decimal decimal_check = {{0xC350, 0x0, 0x0, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2150) {
    // -49999.9961
    int f = -951889921;
    // -50000
    s21_decimal decimal_check = {{0xC350, 0x0, 0x0, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2151) {
    // 32000.002
    int f = 1190789121;
    // 32000
    s21_decimal decimal_check = {{0x7D00, 0x0, 0x0, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2152) {
    // -32000.002
    int f = -956694527;
    // -32000
    s21_decimal decimal_check = {{0x7D00, 0x0, 0x0, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2153) {
    // 32000
    int f = 1190789120;
    // 32000
    s21_decimal decimal_check = {{0x7D00, 0x0, 0x0, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2154) {
    // -32000
    int f = -956694528;
    // -32000
    s21_decimal decimal_check = {{0x7D00, 0x0, 0x0, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2155) {
    // 31999.998
    int f = 1190789119;
    // 32000
    s21_decimal decimal_check = {{0x7D00, 0x0, 0x0, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2156) {
    // -31999.998
    int f = -956694529;
    // -32000
    s21_decimal decimal_check = {{0x7D00, 0x0, 0x0, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2157) {
    // 1024.00012
    int f = 1149239297;
    // 1024
    s21_decimal decimal_check = {{0x400, 0x0, 0x0, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2158) {
    // -1024.00012
    int f = -998244351;
    // -1024
    s21_decimal decimal_check = {{0x400, 0x0, 0x0, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2159) {
    // 1024
    int f = 1149239296;
    // 1024
    s21_decimal decimal_check = {{0x400, 0x0, 0x0, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2160) {
    // -1024
    int f = -998244352;
    // -1024
    s21_decimal decimal_check = {{0x400, 0x0, 0x0, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2161) {
    // 1023.99994
    int f = 1149239295;
    // 1024
    s21_decimal decimal_check = {{0x400, 0x0, 0x0, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2162) {
    // -1023.99994
    int f = -998244353;
    // -1024
    s21_decimal decimal_check = {{0x400, 0x0, 0x0, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2163) {
    // 512.000061
    int f = 1140850689;
    // 512.0001
    s21_decimal decimal_check = {{0x4E2001, 0x0, 0x0, 0x40000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2164) {
    // -512.000061
    int f = -1006632959;
    // -512.0001
    s21_decimal decimal_check = {{0x4E2001, 0x0, 0x0, 0x80040000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2165) {
    // 512
    int f = 1140850688;
    // 512
    s21_decimal decimal_check = {{0x200, 0x0, 0x0, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2166) {
    // -512
    int f = -1006632960;
    // -512
    s21_decimal decimal_check = {{0x200, 0x0, 0x0, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2167) {
    // 511.999969
    int f = 1140850687;
    // 512
    s21_decimal decimal_check = {{0x200, 0x0, 0x0, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2168) {
    // -511.999969
    int f = -1006632961;
    // -512
    s21_decimal decimal_check = {{0x200, 0x0, 0x0, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2169) {
    // 511.999939
    int f = 1140850686;
    // 511.9999
    s21_decimal decimal_check = {{0x4E1FFF, 0x0, 0x0, 0x40000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2170) {
    // -511.999939
    int f = -1006632962;
    // -511.9999
    s21_decimal decimal_check = {{0x4E1FFF, 0x0, 0x0, 0x80040000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2171) {
    // 426.666656
    int f = 1138054485;
    // 426.6667
    s21_decimal decimal_check = {{0x411AAB, 0x0, 0x0, 0x40000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2172) {
    // -426.666656
    int f = -1009429163;
    // -426.6667
    s21_decimal decimal_check = {{0x411AAB, 0x0, 0x0, 0x80040000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2173) {
    // 384
    int f = 1136656384;
    // 384
    s21_decimal decimal_check = {{0x180, 0x0, 0x0, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2174) {
    // -384
    int f = -1010827264;
    // -384
    s21_decimal decimal_check = {{0x180, 0x0, 0x0, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2175) {
    // 341.333313
    int f = 1135258282;
    // 341.3333
    s21_decimal decimal_check = {{0x341555, 0x0, 0x0, 0x40000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2176) {
    // -341.333313
    int f = -1012225366;
    // -341.3333
    s21_decimal decimal_check = {{0x341555, 0x0, 0x0, 0x80040000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2177) {
    // 64.0000076
    int f = 1115684865;
    // 64.00001
    s21_decimal decimal_check = {{0x61A801, 0x0, 0x0, 0x50000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2178) {
    // -64.0000076
    int f = -1031798783;
    // -64.00001
    s21_decimal decimal_check = {{0x61A801, 0x0, 0x0, 0x80050000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2179) {
    // 64
    int f = 1115684864;
    // 64
    s21_decimal decimal_check = {{0x40, 0x0, 0x0, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2180) {
    // -64
    int f = -1031798784;
    // -64
    s21_decimal decimal_check = {{0x40, 0x0, 0x0, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2181) {
    // 63.9999962
    int f = 1115684863;
    // 64
    s21_decimal decimal_check = {{0x40, 0x0, 0x0, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2182) {
    // -63.9999962
    int f = -1031798785;
    // -64
    s21_decimal decimal_check = {{0x40, 0x0, 0x0, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2183) {
    // 32
    int f = 1107296256;
    // 32
    s21_decimal decimal_check = {{0x20, 0x0, 0x0, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2184) {
    // -32
    int f = -1040187392;
    // -32
    s21_decimal decimal_check = {{0x20, 0x0, 0x0, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2185) {
    // 31.9999981
    int f = 1107296255;
    // 32
    s21_decimal decimal_check = {{0x20, 0x0, 0x0, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2186) {
    // -31.9999981
    int f = -1040187393;
    // -32
    s21_decimal decimal_check = {{0x20, 0x0, 0x0, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2187) {
    // 31.9999962
    int f = 1107296254;
    // 32
    s21_decimal decimal_check = {{0x20, 0x0, 0x0, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2188) {
    // -31.9999962
    int f = -1040187394;
    // -32
    s21_decimal decimal_check = {{0x20, 0x0, 0x0, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2189) {
    // 26.666666
    int f = 1104500053;
    // 26.66667
    s21_decimal decimal_check = {{0x28B0AB, 0x0, 0x0, 0x50000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2190) {
    // -26.666666
    int f = -1042983595;
    // -26.66667
    s21_decimal decimal_check = {{0x28B0AB, 0x0, 0x0, 0x80050000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2191) {
    // 24
    int f = 1103101952;
    // 24
    s21_decimal decimal_check = {{0x18, 0x0, 0x0, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2192) {
    // -24
    int f = -1044381696;
    // -24
    s21_decimal decimal_check = {{0x18, 0x0, 0x0, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2193) {
    // 21.3333321
    int f = 1101703850;
    // 21.33333
    s21_decimal decimal_check = {{0x208D55, 0x0, 0x0, 0x50000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2194) {
    // -21.3333321
    int f = -1045779798;
    // -21.33333
    s21_decimal decimal_check = {{0x208D55, 0x0, 0x0, 0x80050000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2195) {
    // 16.0000019
    int f = 1098907649;
    // 16
    s21_decimal decimal_check = {{0x10, 0x0, 0x0, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2196) {
    // -16.0000019
    int f = -1048575999;
    // -16
    s21_decimal decimal_check = {{0x10, 0x0, 0x0, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2197) {
    // 16
    int f = 1098907648;
    // 16
    s21_decimal decimal_check = {{0x10, 0x0, 0x0, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2198) {
    // -16
    int f = -1048576000;
    // -16
    s21_decimal decimal_check = {{0x10, 0x0, 0x0, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2199) {
    // 15.999999
    int f = 1098907647;
    // 16
    s21_decimal decimal_check = {{0x10, 0x0, 0x0, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2200) {
    // -15.999999
    int f = -1048576001;
    // -16
    s21_decimal decimal_check = {{0x10, 0x0, 0x0, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2201) {
    // 10.9803553
    int f = 1093644169;
    // 10.98036
    s21_decimal decimal_check = {{0x10C134, 0x0, 0x0, 0x50000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2202) {
    // -10.9803553
    int f = -1053839479;
    // -10.98036
    s21_decimal decimal_check = {{0x10C134, 0x0, 0x0, 0x80050000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2203) {
    // 9.00000095
    int f = 1091567617;
    // 9.000001
    s21_decimal decimal_check = {{0x895441, 0x0, 0x0, 0x60000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2204) {
    // -9.00000095
    int f = -1055916031;
    // -9.000001
    s21_decimal decimal_check = {{0x895441, 0x0, 0x0, 0x80060000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2205) {
    // 9
    int f = 1091567616;
    // 9
    s21_decimal decimal_check = {{0x9, 0x0, 0x0, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2206) {
    // -9
    int f = -1055916032;
    // -9
    s21_decimal decimal_check = {{0x9, 0x0, 0x0, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2207) {
    // 8.99999905
    int f = 1091567615;
    // 8.999999
    s21_decimal decimal_check = {{0x89543F, 0x0, 0x0, 0x60000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2208) {
    // -8.99999905
    int f = -1055916033;
    // -8.999999
    s21_decimal decimal_check = {{0x89543F, 0x0, 0x0, 0x80060000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2209) {
    // 8
    int f = 1090519040;
    // 8
    s21_decimal decimal_check = {{0x8, 0x0, 0x0, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2210) {
    // -8
    int f = -1056964608;
    // -8
    s21_decimal decimal_check = {{0x8, 0x0, 0x0, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2211) {
    // 7.99999952
    int f = 1090519039;
    // 8
    s21_decimal decimal_check = {{0x8, 0x0, 0x0, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2212) {
    // -7.99999952
    int f = -1056964609;
    // -8
    s21_decimal decimal_check = {{0x8, 0x0, 0x0, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2213) {
    // 6.66666651
    int f = 1087722837;
    // 6.666667
    s21_decimal decimal_check = {{0x65B9AB, 0x0, 0x0, 0x60000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2214) {
    // -6.66666651
    int f = -1059760811;
    // -6.666667
    s21_decimal decimal_check = {{0x65B9AB, 0x0, 0x0, 0x80060000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2215) {
    // 6
    int f = 1086324736;
    // 6
    s21_decimal decimal_check = {{0x6, 0x0, 0x0, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2216) {
    // -6
    int f = -1061158912;
    // -6
    s21_decimal decimal_check = {{0x6, 0x0, 0x0, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2217) {
    // 5.33333302
    int f = 1084926634;
    // 5.333333
    s21_decimal decimal_check = {{0x516155, 0x0, 0x0, 0x60000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2218) {
    // -5.33333302
    int f = -1062557014;
    // -5.333333
    s21_decimal decimal_check = {{0x516155, 0x0, 0x0, 0x80060000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2219) {
    // 4
    int f = 1082130432;
    // 4
    s21_decimal decimal_check = {{0x4, 0x0, 0x0, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2220) {
    // -4
    int f = -1065353216;
    // -4
    s21_decimal decimal_check = {{0x4, 0x0, 0x0, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2221) {
    // 3.99999976
    int f = 1082130431;
    // 4
    s21_decimal decimal_check = {{0x4, 0x0, 0x0, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2222) {
    // -3.99999976
    int f = -1065353217;
    // -4
    s21_decimal decimal_check = {{0x4, 0x0, 0x0, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2223) {
    // 3.99999952
    int f = 1082130430;
    // 4
    s21_decimal decimal_check = {{0x4, 0x0, 0x0, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2224) {
    // -3.99999952
    int f = -1065353218;
    // -4
    s21_decimal decimal_check = {{0x4, 0x0, 0x0, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2225) {
    // 3.33333325
    int f = 1079334229;
    // 3.333333
    s21_decimal decimal_check = {{0x32DCD5, 0x0, 0x0, 0x60000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2226) {
    // -3.33333325
    int f = -1068149419;
    // -3.333333
    s21_decimal decimal_check = {{0x32DCD5, 0x0, 0x0, 0x80060000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2227) {
    // 3
    int f = 1077936128;
    // 3
    s21_decimal decimal_check = {{0x3, 0x0, 0x0, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2228) {
    // -3
    int f = -1069547520;
    // -3
    s21_decimal decimal_check = {{0x3, 0x0, 0x0, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2229) {
    // 2.66666651
    int f = 1076538026;
    // 2.666667
    s21_decimal decimal_check = {{0x28B0AB, 0x0, 0x0, 0x60000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2230) {
    // -2.66666651
    int f = -1070945622;
    // -2.666667
    s21_decimal decimal_check = {{0x28B0AB, 0x0, 0x0, 0x80060000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2231) {
    // 2.00000024
    int f = 1073741825;
    // 2
    s21_decimal decimal_check = {{0x2, 0x0, 0x0, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2232) {
    // -2.00000024
    int f = -1073741823;
    // -2
    s21_decimal decimal_check = {{0x2, 0x0, 0x0, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2233) {
    // 2
    int f = 1073741824;
    // 2
    s21_decimal decimal_check = {{0x2, 0x0, 0x0, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2234) {
    // -2
    int f = -1073741824;
    // -2
    s21_decimal decimal_check = {{0x2, 0x0, 0x0, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2235) {
    // 1.99999988
    int f = 1073741823;
    // 2
    s21_decimal decimal_check = {{0x2, 0x0, 0x0, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2236) {
    // -1.99999988
    int f = -1073741825;
    // -2
    s21_decimal decimal_check = {{0x2, 0x0, 0x0, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2237) {
    // 1.50000012
    int f = 1069547521;
    // 1.5
    s21_decimal decimal_check = {{0xF, 0x0, 0x0, 0x10000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2238) {
    // -1.50000012
    int f = -1077936127;
    // -1.5
    s21_decimal decimal_check = {{0xF, 0x0, 0x0, 0x80010000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2239) {
    // 1.5
    int f = 1069547520;
    // 1.5
    s21_decimal decimal_check = {{0xF, 0x0, 0x0, 0x10000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2240) {
    // -1.5
    int f = -1077936128;
    // -1.5
    s21_decimal decimal_check = {{0xF, 0x0, 0x0, 0x80010000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2241) {
    // 1.49999988
    int f = 1069547519;
    // 1.5
    s21_decimal decimal_check = {{0xF, 0x0, 0x0, 0x10000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2242) {
    // -1.49999988
    int f = -1077936129;
    // -1.5
    s21_decimal decimal_check = {{0xF, 0x0, 0x0, 0x80010000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2243) {
    // 1
    int f = 1065353216;
    // 1
    s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2244) {
    // -1
    int f = -1082130432;
    // -1
    s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2245) {
    // 1
    int f = 1065353216;
    // 1
    s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2246) {
    // -1
    int f = -1082130432;
    // -1
    s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2247) {
    // 1.00000012
    int f = 1065353217;
    // 1
    s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2248) {
    // -1.00000012
    int f = -1082130431;
    // -1
    s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2249) {
    // 1
    int f = 1065353216;
    // 1
    s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2250) {
    // -1
    int f = -1082130432;
    // -1
    s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2251) {
    // 1.00000012
    int f = 1065353217;
    // 1
    s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2252) {
    // -1.00000012
    int f = -1082130431;
    // -1
    s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2253) {
    // 1
    int f = 1065353216;
    // 1
    s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2254) {
    // -1
    int f = -1082130432;
    // -1
    s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2255) {
    // 1.00000012
    int f = 1065353217;
    // 1
    s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2256) {
    // -1.00000012
    int f = -1082130431;
    // -1
    s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2257) {
    // 1
    int f = 1065353216;
    // 1
    s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2258) {
    // -1
    int f = -1082130432;
    // -1
    s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2259) {
    // 1.00000024
    int f = 1065353218;
    // 1
    s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2260) {
    // -1.00000024
    int f = -1082130430;
    // -1
    s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2261) {
    // 1.00000012
    int f = 1065353217;
    // 1
    s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2262) {
    // -1.00000012
    int f = -1082130431;
    // -1
    s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2263) {
    // 1.00000024
    int f = 1065353218;
    // 1
    s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2264) {
    // -1.00000024
    int f = -1082130430;
    // -1
    s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2265) {
    // 1.00000012
    int f = 1065353217;
    // 1
    s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2266) {
    // -1.00000012
    int f = -1082130431;
    // -1
    s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2267) {
    // 1.00000024
    int f = 1065353218;
    // 1
    s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2268) {
    // -1.00000024
    int f = -1082130430;
    // -1
    s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2269) {
    // 1.00000012
    int f = 1065353217;
    // 1
    s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2270) {
    // -1.00000012
    int f = -1082130431;
    // -1
    s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2271) {
    // 1.00000024
    int f = 1065353218;
    // 1
    s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2272) {
    // -1.00000024
    int f = -1082130430;
    // -1
    s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2273) {
    // 1.00000024
    int f = 1065353218;
    // 1
    s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2274) {
    // -1.00000024
    int f = -1082130430;
    // -1
    s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2275) {
    // 2.76701183E+19
    int f = 1606418433;
    // 27670120000000000000
    s21_decimal decimal_check = {{0x946E8000, 0x80000389, 0x1, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2276) {
    // -2.76701183E+19
    int f = -541065215;
    // -27670120000000000000
    s21_decimal decimal_check = {{0x946E8000, 0x80000389, 0x1, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2277) {
    // 2.76701161E+19
    int f = 1606418432;
    // 27670120000000000000
    s21_decimal decimal_check = {{0x946E8000, 0x80000389, 0x1, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2278) {
    // -2.76701161E+19
    int f = -541065216;
    // -27670120000000000000
    s21_decimal decimal_check = {{0x946E8000, 0x80000389, 0x1, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2279) {
    // 2.76701161E+19
    int f = 1606418432;
    // 27670120000000000000
    s21_decimal decimal_check = {{0x946E8000, 0x80000389, 0x1, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2280) {
    // -2.76701161E+19
    int f = -541065216;
    // -27670120000000000000
    s21_decimal decimal_check = {{0x946E8000, 0x80000389, 0x1, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2281) {
    // 2.76701161E+19
    int f = 1606418432;
    // 27670120000000000000
    s21_decimal decimal_check = {{0x946E8000, 0x80000389, 0x1, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2282) {
    // -2.76701161E+19
    int f = -541065216;
    // -27670120000000000000
    s21_decimal decimal_check = {{0x946E8000, 0x80000389, 0x1, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2283) {
    // 87381.3359
    int f = 1202367147;
    // 87381.34
    s21_decimal decimal_check = {{0x855556, 0x0, 0x0, 0x20000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2284) {
    // -87381.3359
    int f = -945116501;
    // -87381.34
    s21_decimal decimal_check = {{0x855556, 0x0, 0x0, 0x80020000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2285) {
    // 87381.3359
    int f = 1202367147;
    // 87381.34
    s21_decimal decimal_check = {{0x855556, 0x0, 0x0, 0x20000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2286) {
    // -87381.3359
    int f = -945116501;
    // -87381.34
    s21_decimal decimal_check = {{0x855556, 0x0, 0x0, 0x80020000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2287) {
    // 87381.3281
    int f = 1202367146;
    // 87381.33
    s21_decimal decimal_check = {{0x855555, 0x0, 0x0, 0x20000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2288) {
    // -87381.3281
    int f = -945116502;
    // -87381.33
    s21_decimal decimal_check = {{0x855555, 0x0, 0x0, 0x80020000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2289) {
    // 87381.3281
    int f = 1202367146;
    // 87381.33
    s21_decimal decimal_check = {{0x855555, 0x0, 0x0, 0x20000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2290) {
    // -87381.3281
    int f = -945116502;
    // -87381.33
    s21_decimal decimal_check = {{0x855555, 0x0, 0x0, 0x80020000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2291) {
    // 32.0000038
    int f = 1107296257;
    // 32
    s21_decimal decimal_check = {{0x20, 0x0, 0x0, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2292) {
    // -32.0000038
    int f = -1040187391;
    // -32
    s21_decimal decimal_check = {{0x20, 0x0, 0x0, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2293) {
    // 32.0000038
    int f = 1107296257;
    // 32
    s21_decimal decimal_check = {{0x20, 0x0, 0x0, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2294) {
    // -32.0000038
    int f = -1040187391;
    // -32
    s21_decimal decimal_check = {{0x20, 0x0, 0x0, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2295) {
    // 32
    int f = 1107296256;
    // 32
    s21_decimal decimal_check = {{0x20, 0x0, 0x0, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2296) {
    // -32
    int f = -1040187392;
    // -32
    s21_decimal decimal_check = {{0x20, 0x0, 0x0, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2297) {
    // 32
    int f = 1107296256;
    // 32
    s21_decimal decimal_check = {{0x20, 0x0, 0x0, 0x0}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2298) {
    // -32
    int f = -1040187392;
    // -32
    s21_decimal decimal_check = {{0x20, 0x0, 0x0, 0x80000000}};

    test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_int_to_decimal_ok1) {
    int number = -2147483648;
    // Converted the Int32 value -2147483648 to the Decimal value -2147483648.
    s21_decimal decimal_check = {{0x80000000, 0x0, 0x0, 0x80000000}};

    test_from_int_to_decimal(number, decimal_check);
}

START_TEST(test_from_int_to_decimal_ok2) {
    int number = -2147483647;
    // Converted the Int32 value -2147483647 to the Decimal value -2147483647.
    s21_decimal decimal_check = {{0x7FFFFFFF, 0x0, 0x0, 0x80000000}};

    test_from_int_to_decimal(number, decimal_check);
}

START_TEST(test_from_int_to_decimal_ok3) {
    int number = -214748364;
    // Converted the Int32 value -214748364 to the Decimal value -214748364.
    s21_decimal decimal_check = {{0xCCCCCCC, 0x0, 0x0, 0x80000000}};

    test_from_int_to_decimal(number, decimal_check);
}

START_TEST(test_from_int_to_decimal_ok4) {
    int number = -214748;
    // Converted the Int32 value -214748 to the Decimal value -214748.
    s21_decimal decimal_check = {{0x346DC, 0x0, 0x0, 0x80000000}};

    test_from_int_to_decimal(number, decimal_check);
}

START_TEST(test_from_int_to_decimal_ok5) {
    int number = -1000;
    // Converted the Int32 value -1000 to the Decimal value -1000.
    s21_decimal decimal_check = {{0x3E8, 0x0, 0x0, 0x80000000}};

    test_from_int_to_decimal(number, decimal_check);
}

START_TEST(test_from_int_to_decimal_ok6) {
    int number = -1;
    // Converted the Int32 value -1 to the Decimal value -1.
    s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x80000000}};

    test_from_int_to_decimal(number, decimal_check);
}

START_TEST(test_from_int_to_decimal_ok7) {
    int number = 0;
    // Converted the Int32 value 0 to the Decimal value 0.
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_from_int_to_decimal(number, decimal_check);
}

START_TEST(test_from_int_to_decimal_ok8) {
    int number = 1;
    // Converted the Int32 value 1 to the Decimal value 1.
    s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x0}};

    test_from_int_to_decimal(number, decimal_check);
}

START_TEST(test_from_int_to_decimal_ok9) {
    int number = 1000;
    // Converted the Int32 value 1000 to the Decimal value 1000.
    s21_decimal decimal_check = {{0x3E8, 0x0, 0x0, 0x0}};

    test_from_int_to_decimal(number, decimal_check);
}

START_TEST(test_from_int_to_decimal_ok10) {
    int number = 214748;
    // Converted the Int32 value 214748 to the Decimal value 214748.
    s21_decimal decimal_check = {{0x346DC, 0x0, 0x0, 0x0}};

    test_from_int_to_decimal(number, decimal_check);
}

START_TEST(test_from_int_to_decimal_ok11) {
    int number = 214748364;
    // Converted the Int32 value 214748364 to the Decimal value 214748364.
    s21_decimal decimal_check = {{0xCCCCCCC, 0x0, 0x0, 0x0}};

    test_from_int_to_decimal(number, decimal_check);
}

START_TEST(test_from_int_to_decimal_ok12) {
    int number = 2147483646;
    // Converted the Int32 value 2147483646 to the Decimal value 2147483646.
    s21_decimal decimal_check = {{0x7FFFFFFE, 0x0, 0x0, 0x0}};

    test_from_int_to_decimal(number, decimal_check);
}

START_TEST(test_from_int_to_decimal_ok13) {
    int number = 2147483647;
    // Converted the Int32 value 2147483647 to the Decimal value 2147483647.
    s21_decimal decimal_check = {{0x7FFFFFFF, 0x0, 0x0, 0x0}};

    test_from_int_to_decimal(number, decimal_check);
}

Suite *from_decimal_to_float_suite2(void) {
    Suite *s;
    TCase *tc_core;

    s = suite_create("from_decimal_to_float2");
    tc_core = tcase_create("Core");

    tcase_add_test(tc_core, test_from_decimal_to_float_ok282);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok283);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok284);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok285);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok286);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok287);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok288);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok289);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok290);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok291);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok292);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok293);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok294);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok295);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok296);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok297);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok298);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok299);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok300);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok301);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok302);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok303);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok304);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok305);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok306);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok307);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok308);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok309);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok310);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok311);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok312);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok313);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok314);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok315);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok316);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok317);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok318);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok319);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok320);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok321);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok322);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok323);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok324);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok325);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok326);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok327);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok328);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok329);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok330);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok331);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok332);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok333);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok334);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok335);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok336);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok337);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok338);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok339);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok340);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok341);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok342);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok343);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok344);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok345);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok346);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok347);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok348);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok349);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok350);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok351);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok352);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok353);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok354);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok355);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok356);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok357);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok358);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok359);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok360);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok361);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok362);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok363);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok364);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok365);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok366);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok367);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok368);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok369);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok370);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok371);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok372);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok373);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok374);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok375);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok376);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok377);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok378);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok379);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok380);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok381);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok382);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok383);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok384);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok385);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok386);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok387);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok388);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok389);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok390);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok391);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok392);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok393);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok394);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok395);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok396);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok397);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok398);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok399);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok400);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok401);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok402);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok403);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok404);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok405);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok406);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok407);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok408);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok409);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok410);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok411);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok412);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok413);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok414);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok415);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok416);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok417);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok418);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok419);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok420);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok421);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok422);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok423);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok424);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok425);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok426);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok427);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok428);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok429);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok430);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok431);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok432);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok433);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok434);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok435);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok436);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok437);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok438);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok439);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok440);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok441);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok442);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok443);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok444);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok445);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok446);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok447);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok448);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok449);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok450);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok451);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok452);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok453);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok454);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok455);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok456);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok457);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok458);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok459);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok460);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok461);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok462);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok463);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok464);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok465);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok466);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok467);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok468);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok469);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok470);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok471);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok472);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok473);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok474);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok475);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok476);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok477);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok478);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok479);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok480);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok481);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok482);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok483);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok484);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok485);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok486);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok487);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok488);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok489);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok490);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok491);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok492);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok493);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok494);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok495);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok496);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok497);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok498);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok499);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok500);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok501);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok502);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok503);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok504);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok505);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok506);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok507);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok508);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok509);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok510);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok511);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok512);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok513);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok514);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok515);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok516);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok517);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok518);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok519);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok520);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok521);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok522);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok523);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok524);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok525);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok526);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok527);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok528);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok529);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok530);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok531);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok532);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok533);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok534);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok535);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok536);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok537);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok538);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok539);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok540);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok541);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok542);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok543);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok544);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok545);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok546);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok547);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok548);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok549);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok550);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok551);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok552);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok553);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok554);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok555);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok556);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok557);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok558);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok559);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok560);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok561);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok562);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok563);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok564);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok565);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok566);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok567);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok568);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok569);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok570);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok571);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok572);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok573);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok574);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok575);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok576);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok577);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok578);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok579);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok580);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok581);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok582);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok583);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok584);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok585);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok586);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok587);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok588);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok589);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok590);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok591);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok592);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok593);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok594);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok595);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok596);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok597);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok598);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok599);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok600);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok601);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok602);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok603);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok604);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok605);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok606);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok607);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok608);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok609);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok610);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok611);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok612);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok613);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok614);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok615);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok616);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok617);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok618);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok619);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok620);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok621);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok622);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok623);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok624);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok625);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok626);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok627);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok628);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok629);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok630);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok631);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok632);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok633);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok634);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok635);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok636);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok637);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok638);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok639);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok640);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok641);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok642);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok643);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok644);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok645);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok646);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok647);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok648);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok649);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok650);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok651);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok652);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok653);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok654);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok655);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok656);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok657);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok658);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok659);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok660);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok661);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok662);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok663);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok664);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok665);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok666);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok667);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok668);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok669);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok670);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok671);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok672);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok673);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok674);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok675);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok676);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok677);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok678);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok679);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok680);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok681);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok682);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok683);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok684);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok685);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok686);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok687);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok688);
    tcase_add_test(tc_core, test_from_decimal_to_float_ok689);
       
    suite_add_tcase(s, tc_core);
    return s;
}

Suite *from_decimal_to_int_suite2(void) {
    Suite *s;
    TCase *tc_core;

    s = suite_create("from_decimal_to_int1");
    tc_core = tcase_create("Core");

    tcase_add_test(tc_core, test_from_decimal_to_int_ok180);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok181);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok182);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok183);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok184);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok185);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok186);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok187);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok188);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok189);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok190);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok191);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok192);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok193);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok194);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok195);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok196);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok197);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok198);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok199);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok200);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok201);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok202);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok203);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok204);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok205);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok206);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok207);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok208);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok209);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok210);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok211);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok212);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok213);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok214);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok215);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok216);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok217);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok218);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok219);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok220);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok221);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok222);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok223);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok224);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok225);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok226);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok227);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok228);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok229);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok230);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok231);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok232);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok233);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok234);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok235);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok236);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok237);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok238);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok239);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok240);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok241);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok242);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok243);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok244);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok245);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok246);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok247);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok248);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok249);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok250);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok251);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok252);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok253);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok254);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok255);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok256);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok257);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok258);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok259);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok260);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok261);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok262);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok263);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok264);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok265);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok266);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok267);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok268);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok269);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok270);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok271);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok272);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok273);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok274);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok275);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok276);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok277);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok278);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok279);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok280);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok281);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok282);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok283);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok284);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok285);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok286);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok287);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok288);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok289);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok290);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok291);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok292);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok293);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok294);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok295);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok296);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok297);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok298);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok299);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok300);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok301);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok302);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok303);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok304);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok305);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok306);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok307);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok308);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok309);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok310);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok311);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok312);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok313);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok314);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok315);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok316);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok317);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok318);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok319);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok320);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok321);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok322);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok323);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok324);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok325);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok326);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok327);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok328);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok329);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok330);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok331);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok332);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok333);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok334);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok335);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok336);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok337);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok338);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok339);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok340);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok341);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok342);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok343);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok344);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok345);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok346);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok347);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok348);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok349);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok350);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok351);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok352);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok353);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok354);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok355);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok356);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok357);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok358);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok359);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok360);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok361);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok362);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok363);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok364);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok365);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok366);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok367);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok368);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok369);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok370);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok371);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok372);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok373);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok374);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok375);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok376);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok377);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok378);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok379);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok380);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok381);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok382);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok383);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok384);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok385);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok386);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok387);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok388);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok389);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok390);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok391);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok392);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok393);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok394);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok395);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok396);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok397);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok398);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok399);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok400);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok401);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok402);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok403);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok404);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok405);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok406);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok407);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok408);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok409);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok410);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok411);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok412);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok413);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok414);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok415);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok416);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok417);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok418);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok419);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok420);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok421);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok422);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok423);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok424);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok425);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok426);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok427);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok428);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok429);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok430);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok431);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok432);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok433);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok434);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok435);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok436);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok437);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok438);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok439);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok440);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok441);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok442);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok443);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok444);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok445);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok446);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok447);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok448);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok449);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok450);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok451);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok452);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok453);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok454);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok455);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok456);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok457);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok458);
    tcase_add_test(tc_core, test_from_decimal_to_int_ok459);

    suite_add_tcase(s, tc_core);
    return s;
}

Suite *from_float_to_decimal_suite6(void) {
    Suite *s;
    TCase *tc_core;

    tcase_add_test(tc_core, test_from_float_to_decimal_ok1970);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok1971);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok1972);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok1973);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok1974);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok1975);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok1976);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok1977);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok1978);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok1979);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok1980);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok1981);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok1982);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok1983);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok1984);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok1985);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok1986);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok1987);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok1988);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok1989);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok1990);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok1991);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok1992);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok1993);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok1994);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok1995);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok1996);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok1997);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok1998);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok1999);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2000);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2001);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2002);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2003);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2004);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2005);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2006);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2007);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2008);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2009);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2010);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2011);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2012);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2013);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2014);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2015);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2016);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2017);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2018);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2019);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2020);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2021);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2022);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2023);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2024);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2025);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2026);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2027);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2028);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2029);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2030);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2031);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2032);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2033);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2034);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2035);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2036);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2037);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2038);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2039);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2040);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2041);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2042);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2043);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2044);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2045);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2046);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2047);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2048);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2049);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2050);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2051);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2052);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2053);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2054);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2055);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2056);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2057);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2058);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2059);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2060);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2061);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2062);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2063);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2064);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2065);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2066);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2067);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2068);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2069);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2070);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2071);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2072);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2073);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2074);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2075);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2076);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2077);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2078);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2079);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2080);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2081);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2082);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2083);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2084);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2085);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2086);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2087);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2088);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2089);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2090);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2091);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2092);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2093);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2094);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2095);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2096);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2097);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2098);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2099);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2100);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2101);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2102);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2103);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2104);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2105);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2106);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2107);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2108);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2109);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2110);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2111);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2112);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2113);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2114);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2115);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2116);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2117);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2118);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2119);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2120);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2121);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2122);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2123);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2124);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2125);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2126);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2127);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2128);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2129);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2130);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2131);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2132);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2133);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2134);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2135);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2136);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2137);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2138);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2139);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2140);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2141);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2142);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2143);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2144);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2145);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2146);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2147);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2148);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2149);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2150);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2151);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2152);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2153);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2154);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2155);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2156);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2157);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2158);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2159);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2160);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2161);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2162);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2163);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2164);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2165);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2166);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2167);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2168);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2169);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2170);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2171);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2172);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2173);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2174);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2175);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2176);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2177);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2178);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2179);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2180);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2181);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2182);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2183);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2184);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2185);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2186);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2187);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2188);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2189);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2190);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2191);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2192);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2193);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2194);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2195);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2196);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2197);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2198);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2199);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2200);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2201);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2202);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2203);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2204);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2205);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2206);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2207);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2208);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2209);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2210);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2211);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2212);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2213);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2214);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2215);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2216);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2217);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2218);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2219);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2220);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2221);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2222);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2223);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2224);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2225);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2226);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2227);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2228);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2229);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2230);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2231);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2232);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2233);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2234);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2235);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2236);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2237);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2238);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2239);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2240);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2241);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2242);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2243);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2244);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2245);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2246);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2247);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2248);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2249);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2250);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2251);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2252);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2253);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2254);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2255);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2256);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2257);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2258);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2259);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2260);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2261);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2262);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2263);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2264);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2265);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2266);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2267);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2268);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2269);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2270);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2271);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2272);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2273);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2274);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2275);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2276);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2277);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2278);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2279);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2280);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2281);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2282);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2283);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2284);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2285);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2286);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2287);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2288);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2289);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2290);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2291);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2292);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2293);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2294);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2295);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2296);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2297);
    tcase_add_test(tc_core, test_from_float_to_decimal_ok2298);

    suite_add_tcase(s, tc_core);
    return s;
}

Suite *from_int_to_decimal_suite(void) {
    Suite *s;
    TCase *tc_core;

    s = suite_create("from_int_to_decimal");
    tc_core = tcase_create("Core");

    tcase_add_test(tc_core, test_from_int_to_decimal_ok1);
    tcase_add_test(tc_core, test_from_int_to_decimal_ok2);
    tcase_add_test(tc_core, test_from_int_to_decimal_ok3);
    tcase_add_test(tc_core, test_from_int_to_decimal_ok4);
    tcase_add_test(tc_core, test_from_int_to_decimal_ok5);
    tcase_add_test(tc_core, test_from_int_to_decimal_ok6);
    tcase_add_test(tc_core, test_from_int_to_decimal_ok7);
    tcase_add_test(tc_core, test_from_int_to_decimal_ok8);
    tcase_add_test(tc_core, test_from_int_to_decimal_ok9);
    tcase_add_test(tc_core, test_from_int_to_decimal_ok10);
    tcase_add_test(tc_core, test_from_int_to_decimal_ok11);
    tcase_add_test(tc_core, test_from_int_to_decimal_ok12);
    tcase_add_test(tc_core, test_from_int_to_decimal_ok13);
    
    suite_add_tcase(s, tc_core);
    return s;
}
