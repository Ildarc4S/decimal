#include "s21_tests.h"

START_TEST(test_from_decimal_to_float_1) {
  s21_decimal decimal = {{0x0, 0x0, 0xAAAAAAAA, 0x801C0000}};
  float check = -5.2818774997211729013222932480f;
  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_2) {
  s21_decimal decimal = {{0x33333333, 0x73333333, 0x2D3A06D3, 0x1B0000}};
  float check = 13.996975374261108188504077107f;
  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_3) {
  s21_decimal decimal = {{0x33333333, 0x73333333, 0x2D3A06D3, 0x801B0000}};
  float check = -13.996975374261108188504077107f;
  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_4) {
  s21_decimal decimal = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x0}};
  float check = 12297829382473034410.0f;
  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_5) {
  s21_decimal decimal = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80000000}};
  float check = -12297829382473034410.0f;
  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_6) {
  s21_decimal decimal = {{0xAAAAA9FA, 0xAAAAAAAA, 0xB0, 0x20000}};
  float check = 32589247863553541186.50f;
  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_7) {
  s21_decimal decimal = {{0xAAAAA9FA, 0xAAAAAAAA, 0xB0, 0x80020000}};
  float check = -32589247863553541186.50f;
  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_8) {
  s21_decimal decimal = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x10000}};
  float check = 1229782938247303441.0f;
  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_9) {
  s21_decimal decimal = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80010000}};
  float check = -1229782938247303441.0f;
  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_10) {
  s21_decimal decimal = {{0xAAAAA9FA, 0xAAAAAAAA, 0xB0, 0x30000}};
  float check = 3258924786355354118.650f;
  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_11) {
  s21_decimal decimal = {{0xAAAAA9FA, 0xAAAAAAAA, 0xB0, 0x80030000}};
  float check = -3258924786355354118.650f;
  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_12) {
  s21_decimal decimal = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0xB0000}};
  float check = 122978293.82473034410f;
  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_13) {
  s21_decimal decimal = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x800B0000}};
  float check = -122978293.82473034410f;
  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_14) {
  s21_decimal decimal = {{0xAAAAA9FA, 0xAAAAAAAA, 0xB0, 0xD0000}};
  float check = 325892478.6355354118650f;
  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_15) {
  s21_decimal decimal = {{0xAAAAA9FA, 0xAAAAAAAA, 0xB0, 0x800D0000}};
  float check = -325892478.6355354118650f;
  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_16) {
  s21_decimal decimal = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x130000}};
  float check = 1.2297829382473034410f;
  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_17) {
  s21_decimal decimal = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80130000}};
  float check = -1.2297829382473034410f;
  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_18) {
  s21_decimal decimal = {{0xAAAAA9FA, 0xAAAAAAAA, 0xB0, 0x150000}};
  float check = 3.258924786355354118650f;
  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_19) {
  s21_decimal decimal = {{0xAAAAA9FA, 0xAAAAAAAA, 0xB0, 0x80150000}};
  float check = -3.258924786355354118650f;
  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_20) {
  s21_decimal decimal = {{0x0, 0xAAAAAAAA, 0x0, 0x0}};
  float check = 12297829379609722880.0f;
  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_float_to_decimal1) {
  float f = -1.9376137E-12;
  s21_decimal decimal_check = {{0x1D90CE, 0x0, 0x0, 0x80120000}};
  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal2) {
  float f = 6.28786967E-10;
  s21_decimal decimal_check = {{0x99833, 0x0, 0x0, 0xF0000}};
  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal3) {
  float f = -6.28786967E-10;
  s21_decimal decimal_check = {{0x99833, 0x0, 0x0, 0x800F0000}};
  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal4) {
  float num = -6.28786967E-10;
  int code = s21_from_float_to_decimal(num, NULL);

  ck_assert_int_eq(code, TEST_CONVERSION_ERROR);
}

START_TEST(test_from_float_to_decimal5) {
  float f = 1.0 / 0.0;
  s21_decimal decimal_check = {{0x99833, 0x0, 0x0, 0x800F0000}};
  int code = s21_from_float_to_decimal(f, &decimal_check);
  ck_assert_int_eq(code, TEST_CONVERSION_ERROR);
}

START_TEST(test_from_float_to_decimal6) {
  float f = 1.0531192E-14;
  s21_decimal decimal_check = {{0x1011BF, 0x0, 0x0, 0x140000}};
  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal7) {
  float f = -1.0531192E-14;
  s21_decimal decimal_check = {{0x1011BF, 0x0, 0x0, 0x80140000}};
  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal8) {
  float f = 1.79615123E-25;
  s21_decimal decimal_check = {{0x704, 0x0, 0x0, 0x1C0000}};
  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal9) {
  float f = -1.79615123E-25;
  s21_decimal decimal_check = {{0x704, 0x0, 0x0, 0x801C0000}};
  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal10) {
  float f = 2.3376424E-06;
  s21_decimal decimal_check = {{0x23AB6A, 0x0, 0x0, 0xC0000}};
  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal11) {
  float f = -2.3376424E-06;
  s21_decimal decimal_check = {{0x23AB6A, 0x0, 0x0, 0x800C0000}};
  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal12) {
  float f = 2.57119381E+12;
  s21_decimal decimal_check = {{0xA71AE280, 0x256, 0x0, 0x0}};
  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal13) {
  float f = -2.57119381E+12;
  s21_decimal decimal_check = {{0xA71AE280, 0x256, 0x0, 0x80000000}};
  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal14) {
  float f = 7.04551938E+14;
  s21_decimal decimal_check = {{0x45B9AF00, 0x280C9, 0x0, 0x0}};
  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal15) {
  float f = -7.04551938E+14;
  s21_decimal decimal_check = {{0x45B9AF00, 0x280C9, 0x0, 0x80000000}};
  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal16) {
  float f = 3.42087291E-23;
  s21_decimal decimal_check = {{0x53847, 0x0, 0x0, 0x1C0000}};
  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal17) {
  float f = -3.42087291E-23;
  s21_decimal decimal_check = {{0x53847, 0x0, 0x0, 0x801C0000}};
  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal18) {
  float f = 9.9840353E-12;
  s21_decimal decimal_check = {{0x985823, 0x0, 0x0, 0x120000}};
  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal19) {
  float f = -9.9840353E-12;
  s21_decimal decimal_check = {{0x985823, 0x0, 0x0, 0x80120000}};
  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal20) {
  float f = 2.79144812;
  s21_decimal decimal_check = {{0x2A9818, 0x0, 0x0, 0x60000}};
  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_decimal_to_int1) {
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80170000}};
  int check = -792281;
  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int2) {
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x180000}};
  int check = 79228;
  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int3) {
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80180000}};
  int check = -79228;
  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int4) {
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x190000}};
  int check = 7922;
  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int5) {
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80190000}};
  int check = -7922;
  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int6) {
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x1A0000}};
  int check = 792;
  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int7) {
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x801A0000}};
  int check = -792;
  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int8) {
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x1B0000}};
  int check = 79;
  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int9) {
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x801B0000}};
  int check = -79;
  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int10) {
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x1C0000}};
  int check = 7;
  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int11) {
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x801C0000}};
  int check = -7;
  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int12) {
  s21_decimal decimal = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x140000}};
  int check = 528187750;
  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int13) {
  s21_decimal decimal = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80140000}};
  int check = -528187750;
  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int14) {
  s21_decimal decimal = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x1C0000}};
  int check = 5;
  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int15) {
  s21_decimal decimal = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x801C0000}};
  int check = -5;
  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int16) {
  s21_decimal decimal = {{0x0, 0xAAAAAAAA, 0xAAAAAAAA, 0x140000}};
  int check = 528187750;
  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int17) {
  s21_decimal decimal = {{0x0, 0xAAAAAAAA, 0xAAAAAAAA, 0x80140000}};
  int check = -528187750;
  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int18) {
  s21_decimal decimal = {{0x0, 0xAAAAAAAA, 0xAAAAAAAA, 0x1C0000}};
  int check = 5;
  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int19) {
  s21_decimal decimal = {{0x0, 0xAAAAAAAA, 0xAAAAAAAA, 0x801C0000}};
  int check = -5;
  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int20) {
  s21_decimal decimal = {{0xAAAAAAAA, 0x0, 0xAAAAAAAA, 0x140000}};
  int check = 528187749;
  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_int_to_decimal_1) {
  int number = -2147483648;
  s21_decimal decimal_check = {{0x80000000, 0x0, 0x0, 0x80000000}};
  test_from_int_to_decimal(number, decimal_check);
}

START_TEST(test_from_int_to_decimal_2) {
  int number = -2147483647;
  s21_decimal decimal_check = {{0x7FFFFFFF, 0x0, 0x0, 0x80000000}};
  test_from_int_to_decimal(number, decimal_check);
}

START_TEST(test_from_int_to_decimal_3) {
  int number = -214748364;
  s21_decimal decimal_check = {{0xCCCCCCC, 0x0, 0x0, 0x80000000}};
  test_from_int_to_decimal(number, decimal_check);
}

START_TEST(test_from_int_to_decimal_4) {
  int number = -214748;
  s21_decimal decimal_check = {{0x346DC, 0x0, 0x0, 0x80000000}};
  test_from_int_to_decimal(number, decimal_check);
}

START_TEST(test_from_int_to_decimal_5) {
  int number = -1000;
  s21_decimal decimal_check = {{0x3E8, 0x0, 0x0, 0x80000000}};
  test_from_int_to_decimal(number, decimal_check);
}

START_TEST(test_from_int_to_decimal_6) {
  int number = -1;
  s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x80000000}};
  test_from_int_to_decimal(number, decimal_check);
}

START_TEST(test_from_int_to_decimal_7) {
  int number = 0;
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};
  test_from_int_to_decimal(number, decimal_check);
}

START_TEST(test_from_int_to_decimal_8) {
  int number = 1;
  s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x0}};
  test_from_int_to_decimal(number, decimal_check);
}

START_TEST(test_from_int_to_decimal_9) {
  int number = 1000;
  s21_decimal decimal_check = {{0x3E8, 0x0, 0x0, 0x0}};
  test_from_int_to_decimal(number, decimal_check);
}

START_TEST(test_from_int_to_decimal_10) {
  int number = 214748;
  s21_decimal decimal_check = {{0x346DC, 0x0, 0x0, 0x0}};
  test_from_int_to_decimal(number, decimal_check);
}

START_TEST(test_from_int_to_decimal_11) {
  int number = 214748364;
  s21_decimal decimal_check = {{0xCCCCCCC, 0x0, 0x0, 0x0}};
  test_from_int_to_decimal(number, decimal_check);
}

START_TEST(test_from_int_to_decimal_12) {
  int number = 2147483646;
  s21_decimal decimal_check = {{0x7FFFFFFE, 0x0, 0x0, 0x0}};
  test_from_int_to_decimal(number, decimal_check);
}

START_TEST(test_from_int_to_decimal_13) {
  int number = 2147483647;
  s21_decimal decimal_check = {{0x7FFFFFFF, 0x0, 0x0, 0x0}};
  test_from_int_to_decimal(number, decimal_check);
}
START_TEST(test_from_int_to_decimal_14) {
  int number = -123456789;
  s21_decimal decimal_check = {{0x75BCD15, 0x0, 0x0, 0x80000000}};
  test_from_int_to_decimal(number, decimal_check);
}

START_TEST(test_from_int_to_decimal_15) {
  int number = 123456789;
  s21_decimal decimal_check = {{0x75BCD15, 0x0, 0x0, 0x0}};
  test_from_int_to_decimal(number, decimal_check);
}

START_TEST(test_from_int_to_decimal_16) {
  int number = -999999999;
  s21_decimal decimal_check = {{0x3B9AC9FF, 0x0, 0x0, 0x80000000}};
  test_from_int_to_decimal(number, decimal_check);
}

START_TEST(test_from_int_to_decimal_17) {
  int number = 999999999;
  s21_decimal decimal_check = {{0x3B9AC9FF, 0x0, 0x0, 0x0}};
  test_from_int_to_decimal(number, decimal_check);
}

START_TEST(test_from_int_to_decimal_18) {
  int number = -12345;
  s21_decimal decimal_check = {{0x3039, 0x0, 0x0, 0x80000000}};
  test_from_int_to_decimal(number, decimal_check);
}

START_TEST(test_from_int_to_decimal_19) {
  int number = 12345;
  s21_decimal decimal_check = {{0x3039, 0x0, 0x0, 0x0}};
  test_from_int_to_decimal(number, decimal_check);
}

START_TEST(test_from_int_to_decimal_20) {
  int number = -67890;
  s21_decimal decimal_check = {{0x10932, 0x0, 0x0, 0x80000000}};
  test_from_int_to_decimal(number, decimal_check);
}

Suite *from_decimal_to_float_suite(void) {
  Suite *s;
  TCase *tc_core;

  s = suite_create("from_decimal_to_float_suite");
  tc_core = tcase_create("Core");

  tcase_add_test(tc_core, test_from_decimal_to_float_1);
  tcase_add_test(tc_core, test_from_decimal_to_float_2);
  tcase_add_test(tc_core, test_from_decimal_to_float_3);
  tcase_add_test(tc_core, test_from_decimal_to_float_4);
  tcase_add_test(tc_core, test_from_decimal_to_float_5);
  tcase_add_test(tc_core, test_from_decimal_to_float_6);
  tcase_add_test(tc_core, test_from_decimal_to_float_7);
  tcase_add_test(tc_core, test_from_decimal_to_float_8);
  tcase_add_test(tc_core, test_from_decimal_to_float_9);
  tcase_add_test(tc_core, test_from_decimal_to_float_10);
  tcase_add_test(tc_core, test_from_decimal_to_float_11);
  tcase_add_test(tc_core, test_from_decimal_to_float_12);
  tcase_add_test(tc_core, test_from_decimal_to_float_13);
  tcase_add_test(tc_core, test_from_decimal_to_float_14);
  tcase_add_test(tc_core, test_from_decimal_to_float_15);
  tcase_add_test(tc_core, test_from_decimal_to_float_16);
  tcase_add_test(tc_core, test_from_decimal_to_float_17);
  tcase_add_test(tc_core, test_from_decimal_to_float_18);
  tcase_add_test(tc_core, test_from_decimal_to_float_19);
  tcase_add_test(tc_core, test_from_decimal_to_float_20);

  suite_add_tcase(s, tc_core);
  return s;
}
Suite *from_float_to_decimal_suite(void) {
  Suite *s;
  TCase *tc_core;

  s = suite_create("from_float_ro_decimal_suite");
  tc_core = tcase_create("Core");

  tcase_add_test(tc_core, test_from_float_to_decimal1);
  tcase_add_test(tc_core, test_from_float_to_decimal2);
  tcase_add_test(tc_core, test_from_float_to_decimal3);
  tcase_add_test(tc_core, test_from_float_to_decimal4);
  tcase_add_test(tc_core, test_from_float_to_decimal5);
  tcase_add_test(tc_core, test_from_float_to_decimal6);
  tcase_add_test(tc_core, test_from_float_to_decimal7);
  tcase_add_test(tc_core, test_from_float_to_decimal8);
  tcase_add_test(tc_core, test_from_float_to_decimal9);
  tcase_add_test(tc_core, test_from_float_to_decimal10);
  tcase_add_test(tc_core, test_from_float_to_decimal11);
  tcase_add_test(tc_core, test_from_float_to_decimal12);
  tcase_add_test(tc_core, test_from_float_to_decimal13);
  tcase_add_test(tc_core, test_from_float_to_decimal14);
  tcase_add_test(tc_core, test_from_float_to_decimal15);
  tcase_add_test(tc_core, test_from_float_to_decimal16);
  tcase_add_test(tc_core, test_from_float_to_decimal17);
  tcase_add_test(tc_core, test_from_float_to_decimal18);
  tcase_add_test(tc_core, test_from_float_to_decimal19);
  tcase_add_test(tc_core, test_from_float_to_decimal20);

  suite_add_tcase(s, tc_core);
  return s;
}
Suite *from_int_to_decimal_suite(void) {
  Suite *s;
  TCase *tc_core;

  s = suite_create("from_int_to_decimal_suite");
  tc_core = tcase_create("Core");

  tcase_add_test(tc_core, test_from_int_to_decimal_1);
  tcase_add_test(tc_core, test_from_int_to_decimal_2);
  tcase_add_test(tc_core, test_from_int_to_decimal_3);
  tcase_add_test(tc_core, test_from_int_to_decimal_4);
  tcase_add_test(tc_core, test_from_int_to_decimal_5);
  tcase_add_test(tc_core, test_from_int_to_decimal_6);
  tcase_add_test(tc_core, test_from_int_to_decimal_7);
  tcase_add_test(tc_core, test_from_int_to_decimal_8);
  tcase_add_test(tc_core, test_from_int_to_decimal_9);
  tcase_add_test(tc_core, test_from_int_to_decimal_10);
  tcase_add_test(tc_core, test_from_int_to_decimal_11);
  tcase_add_test(tc_core, test_from_int_to_decimal_12);
  tcase_add_test(tc_core, test_from_int_to_decimal_13);
  tcase_add_test(tc_core, test_from_int_to_decimal_14);
  tcase_add_test(tc_core, test_from_int_to_decimal_15);
  tcase_add_test(tc_core, test_from_int_to_decimal_16);
  tcase_add_test(tc_core, test_from_int_to_decimal_17);
  tcase_add_test(tc_core, test_from_int_to_decimal_18);
  tcase_add_test(tc_core, test_from_int_to_decimal_19);
  tcase_add_test(tc_core, test_from_int_to_decimal_20);

  suite_add_tcase(s, tc_core);
  return s;
}
Suite *from_decimal_to_int_suite(void) {
  Suite *s;
  TCase *tc_core;

  s = suite_create("from_decimal_to_int_suite");
  tc_core = tcase_create("Core");

  tcase_add_test(tc_core, test_from_decimal_to_int1);
  tcase_add_test(tc_core, test_from_decimal_to_int2);
  tcase_add_test(tc_core, test_from_decimal_to_int3);
  tcase_add_test(tc_core, test_from_decimal_to_int4);
  tcase_add_test(tc_core, test_from_decimal_to_int5);
  tcase_add_test(tc_core, test_from_decimal_to_int6);
  tcase_add_test(tc_core, test_from_decimal_to_int7);
  tcase_add_test(tc_core, test_from_decimal_to_int8);
  tcase_add_test(tc_core, test_from_decimal_to_int9);
  tcase_add_test(tc_core, test_from_decimal_to_int10);
  tcase_add_test(tc_core, test_from_decimal_to_int11);
  tcase_add_test(tc_core, test_from_decimal_to_int12);
  tcase_add_test(tc_core, test_from_decimal_to_int13);
  tcase_add_test(tc_core, test_from_decimal_to_int14);
  tcase_add_test(tc_core, test_from_decimal_to_int15);
  tcase_add_test(tc_core, test_from_decimal_to_int16);
  tcase_add_test(tc_core, test_from_decimal_to_int17);
  tcase_add_test(tc_core, test_from_decimal_to_int18);
  tcase_add_test(tc_core, test_from_decimal_to_int19);
  tcase_add_test(tc_core, test_from_decimal_to_int20);

  suite_add_tcase(s, tc_core);
  return s;
}

void test_from_decimal_to_float(s21_decimal decimal, float check) {
  float result;
  int code = s21_from_decimal_to_float(decimal, &result);

  ck_assert_float_eq(result, check);
  ck_assert_int_eq(code, TEST_CONVERSION_OK);
}

void test_from_decimal_to_int(s21_decimal decimal, int check) {
  int result;
  int code = s21_from_decimal_to_int(decimal, &result);

  ck_assert_int_eq(result, check);
  ck_assert_int_eq(code, TEST_CONVERSION_OK);
}

void test_from_float_to_decimal(float num, s21_decimal decimal_check) {
  s21_decimal result;
  int code = s21_from_float_to_decimal(num, &result);

  ck_assert_int_eq(code, TEST_CONVERSION_OK);
  ck_assert_int_eq(s21_is_equal(result, decimal_check), 1);
}

void test_from_int_to_decimal(int number, s21_decimal decimal_check) {
  s21_decimal result;
  int code = s21_from_int_to_decimal(number, &result);
  int sign_check = s21_get_sign(decimal_check);
  int sign_result = s21_get_sign(result);

  ck_assert_int_eq(code, TEST_CONVERSION_OK);
  ck_assert_int_eq(s21_is_equal(result, decimal_check), 1);
  ck_assert_int_eq(sign_check, sign_result);
}
