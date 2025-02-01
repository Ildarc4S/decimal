#include "s21_tests.h"

START_TEST(test_is_equal1) {
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x0}};
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x0}};
  int check = TEST_COMPARISON_TRUE;
  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal2) {
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x0}};
  s21_decimal decimal2 = {{0x2, 0x0, 0x0, 0x0}};
  int check = TEST_COMPARISON_FALSE;
  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal3) {
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80000000}};
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x0}};
  int check = TEST_COMPARISON_FALSE;
  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal4) {
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x0}};
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x80000000}};
  int check = TEST_COMPARISON_FALSE;
  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal5) {
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x80000000}};
  s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
  int check = TEST_COMPARISON_FALSE;
  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal6) {
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x10000}};
  s21_decimal decimal2 = {{0x2, 0x0, 0x0, 0x10000}};
  int check = TEST_COMPARISON_FALSE;
  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal7) {
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80010000}};
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x10000}};
  int check = TEST_COMPARISON_FALSE;
  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal8) {
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x10000}};
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x80010000}};
  int check = TEST_COMPARISON_FALSE;
  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal9) {
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TEST_COMPARISON_TRUE;
  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal10) {
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  s21_decimal decimal2 = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TEST_COMPARISON_FALSE;
  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal11) {
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TEST_COMPARISON_FALSE;
  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal12) {
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = TEST_COMPARISON_FALSE;
  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal13) {
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x0}};
  int check = TEST_COMPARISON_TRUE;
  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal14) {
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x0}};
  int check = TEST_COMPARISON_FALSE;
  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal15) {
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x80000000}};
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x0}};
  int check = TEST_COMPARISON_TRUE;
  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal16) {
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x80000000}};
  int check = TEST_COMPARISON_TRUE;
  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal17) {
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x1C0000}};
  int check = TEST_COMPARISON_TRUE;
  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal18) {
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
  s21_decimal decimal2 = {{0x2, 0x0, 0x0, 0x1C0000}};
  int check = TEST_COMPARISON_FALSE;
  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal19) {
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x801C0000}};
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x1C0000}};
  int check = TEST_COMPARISON_FALSE;
  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal20) {
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x801C0000}};
  int check = TEST_COMPARISON_FALSE;
  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal1) {
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x0}};
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x0}};
  int check = TEST_COMPARISON_TRUE;
  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal2) {
  s21_decimal decimal1 = {{0x2, 0x0, 0x0, 0x0}};
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x0}};
  int check = TEST_COMPARISON_TRUE;
  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal3) {
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x0}};
  s21_decimal decimal2 = {{0x2, 0x0, 0x0, 0x0}};
  int check = TEST_COMPARISON_FALSE;
  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal4) {
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80000000}};
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x0}};
  int check = TEST_COMPARISON_FALSE;
  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal5) {
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x0}};
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x80000000}};
  int check = TEST_COMPARISON_TRUE;
  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal6) {
  s21_decimal decimal1 = {{0x99999999, 0x99999999, 0x19999999, 0x80000000}};
  s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x80010000}};
  int check = TEST_COMPARISON_FALSE;
  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal7) {
  s21_decimal decimal1 = {{0x2, 0x0, 0x0, 0x10000}};
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x10000}};
  int check = TEST_COMPARISON_TRUE;
  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal8) {
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x10000}};
  s21_decimal decimal2 = {{0x2, 0x0, 0x0, 0x10000}};
  int check = TEST_COMPARISON_FALSE;
  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal9) {
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80010000}};
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x10000}};
  int check = TEST_COMPARISON_FALSE;
  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal10) {
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x10000}};
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x80010000}};
  int check = TEST_COMPARISON_TRUE;
  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal11) {
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TEST_COMPARISON_TRUE;
  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal12) {
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  s21_decimal decimal2 = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TEST_COMPARISON_TRUE;
  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal13) {
  s21_decimal decimal1 = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TEST_COMPARISON_FALSE;
  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal14) {
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TEST_COMPARISON_FALSE;
  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal15) {
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = TEST_COMPARISON_TRUE;
  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal16) {
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x0}};
  int check = TEST_COMPARISON_TRUE;
  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal17) {
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x0}};
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x0}};
  int check = TEST_COMPARISON_TRUE;
  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal18) {
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x0}};
  int check = TEST_COMPARISON_FALSE;
  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal19) {
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x80000000}};
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x0}};
  int check = TEST_COMPARISON_TRUE;
  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal20) {
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x80000000}};
  int check = TEST_COMPARISON_TRUE;
  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_1) {
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
  s21_decimal decimal2 = {{0x4A3C829B, 0xD2D8CC92, 0x988B0249, 0x80090000}};
  int check = TEST_COMPARISON_FALSE;
  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_2) {
  s21_decimal decimal1 = {{0x4A3C829B, 0xD2D8CC92, 0x988B0249, 0x80090000}};
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x0}};
  int check = TEST_COMPARISON_TRUE;
  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_3) {
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x80000000}};
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TEST_COMPARISON_TRUE;
  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_4) {
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x80000000}};
  int check = TEST_COMPARISON_FALSE;
  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_5) {
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x80000000}};
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = TEST_COMPARISON_FALSE;
  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_6) {
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x80000000}};
  int check = TEST_COMPARISON_TRUE;
  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_7) {
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x80000000}};
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARISON_TRUE;
  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_8) {
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x80000000}};
  int check = TEST_COMPARISON_FALSE;
  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_9) {
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x80000000}};
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARISON_FALSE;
  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_10) {
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x80000000}};
  int check = TEST_COMPARISON_TRUE;
  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_11) {
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x80000000}};
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TEST_COMPARISON_TRUE;
  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_12) {
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x80000000}};
  int check = TEST_COMPARISON_FALSE;
  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_13) {
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x80000000}};
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TEST_COMPARISON_FALSE;
  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_14) {
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x80000000}};
  int check = TEST_COMPARISON_TRUE;
  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_15) {
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x80000000}};
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  int check = TEST_COMPARISON_TRUE;
  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_16) {
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x80000000}};
  int check = TEST_COMPARISON_FALSE;
  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_17) {
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x80000000}};
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
  int check = TEST_COMPARISON_FALSE;
  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_18) {
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x80000000}};
  int check = TEST_COMPARISON_TRUE;
  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_19) {
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x80000000}};
  s21_decimal decimal2 = {{0x11111111, 0x11111111, 0x11111111, 0x0}};
  int check = TEST_COMPARISON_TRUE;
  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_20) {
  s21_decimal decimal1 = {{0x11111111, 0x11111111, 0x11111111, 0x0}};
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x80000000}};
  int check = TEST_COMPARISON_FALSE;
  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal1) {
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x800E0000}};
  s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
  int check = TEST_COMPARISON_TRUE;
  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal2) {
  s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0xE0000}};
  int check = TEST_COMPARISON_FALSE;
  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal3) {
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0xE0000}};
  s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
  int check = TEST_COMPARISON_TRUE;
  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal4) {
  s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x801C0000}};
  int check = TEST_COMPARISON_FALSE;
  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal5) {
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x801C0000}};
  s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
  int check = TEST_COMPARISON_TRUE;
  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal6) {
  s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x1C0000}};
  int check = TEST_COMPARISON_FALSE;
  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal7) {
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
  s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
  int check = TEST_COMPARISON_TRUE;
  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal8) {
  s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
  s21_decimal decimal2 = {{0xCEDBC273, 0x56AF422B, 0x981B561D, 0x801C0000}};
  int check = TEST_COMPARISON_FALSE;
  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal9) {
  s21_decimal decimal1 = {{0xCEDBC273, 0x56AF422B, 0x981B561D, 0x801C0000}};
  s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
  int check = TEST_COMPARISON_TRUE;
  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal10) {
  s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
  s21_decimal decimal2 = {{0xCEDBC273, 0x56AF422B, 0x981B561D, 0x1C0000}};
  int check = TEST_COMPARISON_FALSE;
  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal11) {
  s21_decimal decimal1 = {{0xCEDBC273, 0x56AF422B, 0x981B561D, 0x1C0000}};
  s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
  int check = TEST_COMPARISON_TRUE;
  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal12) {
  s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
  s21_decimal decimal2 = {{0xCE5807BC, 0xF2D773B6, 0x4DB98FD2, 0x0}};
  int check = TEST_COMPARISON_TRUE;
  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal13) {
  s21_decimal decimal1 = {{0xCE5807BC, 0xF2D773B6, 0x4DB98FD2, 0x0}};
  s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
  int check = TEST_COMPARISON_FALSE;
  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal14) {
  s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
  s21_decimal decimal2 = {{0xCE5807BC, 0xF2D773B6, 0x4DB98FD2, 0x80000000}};
  int check = TEST_COMPARISON_FALSE;
  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal15) {
  s21_decimal decimal1 = {{0xCE5807BC, 0xF2D773B6, 0x4DB98FD2, 0x80000000}};
  s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
  int check = TEST_COMPARISON_TRUE;
  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal16) {
  s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
  s21_decimal decimal2 = {{0xE333C1D3, 0xC173E715, 0x631797E3, 0xF0000}};
  int check = TEST_COMPARISON_TRUE;
  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal17) {
  s21_decimal decimal1 = {{0xE333C1D3, 0xC173E715, 0x631797E3, 0xF0000}};
  s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
  int check = TEST_COMPARISON_FALSE;
  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal18) {
  s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
  s21_decimal decimal2 = {{0xE333C1D3, 0xC173E715, 0x631797E3, 0x800F0000}};
  int check = TEST_COMPARISON_FALSE;
  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal19) {
  s21_decimal decimal1 = {{0xE333C1D3, 0xC173E715, 0x631797E3, 0x800F0000}};
  s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
  int check = TEST_COMPARISON_TRUE;
  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal20) {
  s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x80120000}};
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TEST_COMPARISON_TRUE;
  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater1) {
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x10000}};
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = TEST_COMPARISON_TRUE;
  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater2) {
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80010000}};
  int check = TEST_COMPARISON_FALSE;
  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater3) {
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80010000}};
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = TEST_COMPARISON_TRUE;
  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater4) {
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  s21_decimal decimal2 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
  int check = TEST_COMPARISON_FALSE;
  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater5) {
  s21_decimal decimal1 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = TEST_COMPARISON_TRUE;
  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater6) {
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  s21_decimal decimal2 = {{0x99999999, 0x99999999, 0x19999999, 0x80000000}};
  int check = TEST_COMPARISON_FALSE;
  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater7) {
  s21_decimal decimal1 = {{0x99999999, 0x99999999, 0x19999999, 0x80000000}};
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = TEST_COMPARISON_TRUE;
  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater8) {
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  s21_decimal decimal2 = {{0x9999999A, 0x99999999, 0x19999999, 0x0}};
  int check = TEST_COMPARISON_FALSE;
  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater9) {
  s21_decimal decimal1 = {{0x9999999A, 0x99999999, 0x19999999, 0x0}};
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = TEST_COMPARISON_TRUE;
  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater10) {
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  s21_decimal decimal2 = {{0x9999999A, 0x99999999, 0x19999999, 0x80000000}};
  int check = TEST_COMPARISON_FALSE;
  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater11) {
  s21_decimal decimal1 = {{0x9999999A, 0x99999999, 0x19999999, 0x80000000}};
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = TEST_COMPARISON_TRUE;
  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater12) {
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  s21_decimal decimal2 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x130000}};
  int check = TEST_COMPARISON_FALSE;
  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater13) {
  s21_decimal decimal1 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x130000}};
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = TEST_COMPARISON_TRUE;
  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater14) {
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  s21_decimal decimal2 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x80130000}};
  int check = TEST_COMPARISON_FALSE;
  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater15) {
  s21_decimal decimal1 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x80130000}};
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = TEST_COMPARISON_TRUE;
  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater16) {
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x130000}};
  int check = TEST_COMPARISON_FALSE;
  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater17) {
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x130000}};
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = TEST_COMPARISON_TRUE;
  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater18) {
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80130000}};
  int check = TEST_COMPARISON_FALSE;
  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater19) {
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80130000}};
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = TEST_COMPARISON_TRUE;
  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater20) {
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x0}};
  int check = TEST_COMPARISON_FALSE;
  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_1) {
  s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x801C0000}};
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x801C0000}};
  int check = TEST_COMPARISON_TRUE;
  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_2) {
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x801C0000}};
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x1C0000}};
  int check = TEST_COMPARISON_TRUE;
  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_3) {
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x801C0000}};
  int check = TEST_COMPARISON_TRUE;
  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_4) {
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x801C0000}};
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x801C0000}};
  int check = TEST_COMPARISON_FALSE;
  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_5) {
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x801C0000}};
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x801C0000}};
  int check = TEST_COMPARISON_FALSE;
  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_6) {
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x801C0000}};
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x0}};
  int check = TEST_COMPARISON_TRUE;
  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_7) {
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x801C0000}};
  int check = TEST_COMPARISON_TRUE;
  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_8) {
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x801C0000}};
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x80000000}};
  int check = TEST_COMPARISON_TRUE;
  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_9) {
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x80000000}};
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x801C0000}};
  int check = TEST_COMPARISON_TRUE;
  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_10) {
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x801C0000}};
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x800E0000}};
  int check = TEST_COMPARISON_TRUE;
  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_11) {
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x800E0000}};
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x801C0000}};
  int check = TEST_COMPARISON_TRUE;
  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_12) {
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x801C0000}};
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0xE0000}};
  int check = TEST_COMPARISON_TRUE;
  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_13) {
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0xE0000}};
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x801C0000}};
  int check = TEST_COMPARISON_TRUE;
  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_14) {
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x801C0000}};
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x801C0000}};
  int check = TEST_COMPARISON_TRUE;
  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_15) {
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x801C0000}};
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x801C0000}};
  int check = TEST_COMPARISON_TRUE;
  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_16) {
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x801C0000}};
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x1C0000}};
  int check = TEST_COMPARISON_TRUE;
  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_17) {
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x801C0000}};
  int check = TEST_COMPARISON_TRUE;
  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_18) {
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x801C0000}};
  s21_decimal decimal2 = {{0x488D587, 0xD365E6A2, 0x1440C488, 0x60000}};
  int check = TEST_COMPARISON_TRUE;
  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_19) {
  s21_decimal decimal1 = {{0x488D587, 0xD365E6A2, 0x1440C488, 0x60000}};
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x801C0000}};
  int check = TEST_COMPARISON_TRUE;
  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_20) {
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x801C0000}};
  s21_decimal decimal2 = {{0x488D587, 0xD365E6A2, 0x1440C488, 0x80060000}};
  int check = TEST_COMPARISON_TRUE;
  test_is_not_equal(decimal1, decimal2, check);
}

Suite *is_equal_suite(void) {
  Suite *s;
  TCase *tc_core;

  s = suite_create("is_equal_suite");
  tc_core = tcase_create("Core");

  tcase_add_test(tc_core, test_is_equal1);
  tcase_add_test(tc_core, test_is_equal2);
  tcase_add_test(tc_core, test_is_equal3);
  tcase_add_test(tc_core, test_is_equal4);
  tcase_add_test(tc_core, test_is_equal5);
  tcase_add_test(tc_core, test_is_equal6);
  tcase_add_test(tc_core, test_is_equal7);
  tcase_add_test(tc_core, test_is_equal8);
  tcase_add_test(tc_core, test_is_equal9);
  tcase_add_test(tc_core, test_is_equal10);
  tcase_add_test(tc_core, test_is_equal11);
  tcase_add_test(tc_core, test_is_equal12);
  tcase_add_test(tc_core, test_is_equal13);
  tcase_add_test(tc_core, test_is_equal14);
  tcase_add_test(tc_core, test_is_equal15);
  tcase_add_test(tc_core, test_is_equal16);
  tcase_add_test(tc_core, test_is_equal17);
  tcase_add_test(tc_core, test_is_equal18);
  tcase_add_test(tc_core, test_is_equal19);
  tcase_add_test(tc_core, test_is_equal20);

  suite_add_tcase(s, tc_core);
  return s;
}

Suite *is_greater_or_equal_suite(void) {
  Suite *s;
  TCase *tc_core;

  s = suite_create("is_greater_or_equal_suite");
  tc_core = tcase_create("Core");

  tcase_add_test(tc_core, test_is_greater_or_equal1);
  tcase_add_test(tc_core, test_is_greater_or_equal2);
  tcase_add_test(tc_core, test_is_greater_or_equal3);
  tcase_add_test(tc_core, test_is_greater_or_equal4);
  tcase_add_test(tc_core, test_is_greater_or_equal5);
  tcase_add_test(tc_core, test_is_greater_or_equal6);
  tcase_add_test(tc_core, test_is_greater_or_equal7);
  tcase_add_test(tc_core, test_is_greater_or_equal8);
  tcase_add_test(tc_core, test_is_greater_or_equal9);
  tcase_add_test(tc_core, test_is_greater_or_equal10);
  tcase_add_test(tc_core, test_is_greater_or_equal11);
  tcase_add_test(tc_core, test_is_greater_or_equal12);
  tcase_add_test(tc_core, test_is_greater_or_equal13);
  tcase_add_test(tc_core, test_is_greater_or_equal14);
  tcase_add_test(tc_core, test_is_greater_or_equal15);
  tcase_add_test(tc_core, test_is_greater_or_equal16);
  tcase_add_test(tc_core, test_is_greater_or_equal17);
  tcase_add_test(tc_core, test_is_greater_or_equal18);
  tcase_add_test(tc_core, test_is_greater_or_equal19);
  tcase_add_test(tc_core, test_is_greater_or_equal20);

  suite_add_tcase(s, tc_core);
  return s;
}

Suite *is_less_suite(void) {
  Suite *s;
  TCase *tc_core;

  s = suite_create("is_less_suite");
  tc_core = tcase_create("Core");

  tcase_add_test(tc_core, test_is_less_1);
  tcase_add_test(tc_core, test_is_less_2);
  tcase_add_test(tc_core, test_is_less_3);
  tcase_add_test(tc_core, test_is_less_4);
  tcase_add_test(tc_core, test_is_less_5);
  tcase_add_test(tc_core, test_is_less_6);
  tcase_add_test(tc_core, test_is_less_7);
  tcase_add_test(tc_core, test_is_less_8);
  tcase_add_test(tc_core, test_is_less_9);
  tcase_add_test(tc_core, test_is_less_10);
  tcase_add_test(tc_core, test_is_less_11);
  tcase_add_test(tc_core, test_is_less_12);
  tcase_add_test(tc_core, test_is_less_13);
  tcase_add_test(tc_core, test_is_less_14);
  tcase_add_test(tc_core, test_is_less_15);
  tcase_add_test(tc_core, test_is_less_16);
  tcase_add_test(tc_core, test_is_less_17);
  tcase_add_test(tc_core, test_is_less_18);
  tcase_add_test(tc_core, test_is_less_19);
  tcase_add_test(tc_core, test_is_less_20);

  suite_add_tcase(s, tc_core);
  return s;
}

Suite *is_less_or_equal_suite(void) {
  Suite *s;
  TCase *tc_core;

  s = suite_create("is_less_or_equal_suite");
  tc_core = tcase_create("Core");

  tcase_add_test(tc_core, test_is_less_or_equal1);
  tcase_add_test(tc_core, test_is_less_or_equal2);
  tcase_add_test(tc_core, test_is_less_or_equal3);
  tcase_add_test(tc_core, test_is_less_or_equal4);
  tcase_add_test(tc_core, test_is_less_or_equal5);
  tcase_add_test(tc_core, test_is_less_or_equal6);
  tcase_add_test(tc_core, test_is_less_or_equal7);
  tcase_add_test(tc_core, test_is_less_or_equal8);
  tcase_add_test(tc_core, test_is_less_or_equal9);
  tcase_add_test(tc_core, test_is_less_or_equal10);
  tcase_add_test(tc_core, test_is_less_or_equal11);
  tcase_add_test(tc_core, test_is_less_or_equal12);
  tcase_add_test(tc_core, test_is_less_or_equal13);
  tcase_add_test(tc_core, test_is_less_or_equal14);
  tcase_add_test(tc_core, test_is_less_or_equal15);
  tcase_add_test(tc_core, test_is_less_or_equal16);
  tcase_add_test(tc_core, test_is_less_or_equal17);
  tcase_add_test(tc_core, test_is_less_or_equal18);
  tcase_add_test(tc_core, test_is_less_or_equal19);
  tcase_add_test(tc_core, test_is_less_or_equal20);

  suite_add_tcase(s, tc_core);
  return s;
}

Suite *is_not_equal_suite(void) {
  Suite *s;
  TCase *tc_core;

  s = suite_create("is_not_equal_suite");
  tc_core = tcase_create("Core");

  tcase_add_test(tc_core, test_is_not_equal_1);
  tcase_add_test(tc_core, test_is_not_equal_2);
  tcase_add_test(tc_core, test_is_not_equal_3);
  tcase_add_test(tc_core, test_is_not_equal_4);
  tcase_add_test(tc_core, test_is_not_equal_5);
  tcase_add_test(tc_core, test_is_not_equal_6);
  tcase_add_test(tc_core, test_is_not_equal_7);
  tcase_add_test(tc_core, test_is_not_equal_8);
  tcase_add_test(tc_core, test_is_not_equal_9);
  tcase_add_test(tc_core, test_is_not_equal_10);
  tcase_add_test(tc_core, test_is_not_equal_11);
  tcase_add_test(tc_core, test_is_not_equal_12);
  tcase_add_test(tc_core, test_is_not_equal_13);
  tcase_add_test(tc_core, test_is_not_equal_14);
  tcase_add_test(tc_core, test_is_not_equal_15);
  tcase_add_test(tc_core, test_is_not_equal_16);
  tcase_add_test(tc_core, test_is_not_equal_17);
  tcase_add_test(tc_core, test_is_not_equal_18);
  tcase_add_test(tc_core, test_is_not_equal_19);
  tcase_add_test(tc_core, test_is_not_equal_20);

  suite_add_tcase(s, tc_core);
  return s;
}

Suite *is_greater_suite(void) {
  Suite *s;
  TCase *tc_core;

  s = suite_create("is_greater_suite");
  tc_core = tcase_create("Core");

  tcase_add_test(tc_core, test_is_greater1);
  tcase_add_test(tc_core, test_is_greater2);
  tcase_add_test(tc_core, test_is_greater3);
  tcase_add_test(tc_core, test_is_greater4);
  tcase_add_test(tc_core, test_is_greater5);
  tcase_add_test(tc_core, test_is_greater6);
  tcase_add_test(tc_core, test_is_greater7);
  tcase_add_test(tc_core, test_is_greater8);
  tcase_add_test(tc_core, test_is_greater9);
  tcase_add_test(tc_core, test_is_greater10);
  tcase_add_test(tc_core, test_is_greater11);
  tcase_add_test(tc_core, test_is_greater12);
  tcase_add_test(tc_core, test_is_greater13);
  tcase_add_test(tc_core, test_is_greater14);
  tcase_add_test(tc_core, test_is_greater15);
  tcase_add_test(tc_core, test_is_greater16);
  tcase_add_test(tc_core, test_is_greater17);
  tcase_add_test(tc_core, test_is_greater18);
  tcase_add_test(tc_core, test_is_greater19);
  tcase_add_test(tc_core, test_is_greater20);

  suite_add_tcase(s, tc_core);
  return s;
}

void test_is_equal(s21_decimal decimal1, s21_decimal decimal2, int check) {
  int code = s21_is_equal(decimal1, decimal2);

  ck_assert_int_eq(code, check);
}

void test_is_greater_or_equal(s21_decimal decimal1, s21_decimal decimal2,
                              int check) {
  int code = s21_is_greater_or_equal(decimal1, decimal2);

  ck_assert_int_eq(code, check);
}

void test_is_greater(s21_decimal decimal1, s21_decimal decimal2, int check) {
  int code = s21_is_greater(decimal1, decimal2);

  ck_assert_int_eq(code, check);
}

void test_is_less_or_equal(s21_decimal decimal1, s21_decimal decimal2,
                           int check) {
  int code = s21_is_less_or_equal(decimal1, decimal2);

  ck_assert_int_eq(code, check);
}

void test_is_less(s21_decimal decimal1, s21_decimal decimal2, int check) {
  int code = s21_is_less(decimal1, decimal2);

  ck_assert_int_eq(code, check);
}

void test_is_not_equal(s21_decimal decimal1, s21_decimal decimal2, int check) {
  int code = s21_is_not_equal(decimal1, decimal2);

  ck_assert_int_eq(code, check);
}
