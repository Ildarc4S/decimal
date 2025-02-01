
#include <stdio.h>
#include <stdlib.h>
#include <check.h>
#include "./../s21_decimal.h"

void test_add(s21_decimal decimal1, s21_decimal decimal2, s21_decimal check);
void test_sub(s21_decimal decimal1, s21_decimal decimal2, s21_decimal check);
void test_mul(s21_decimal decimal1, s21_decimal decimal2, s21_decimal check);
void test_div(s21_decimal decimal1, s21_decimal decimal2, s21_decimal check);

void test_negate(s21_decimal decimal, s21_decimal decimal_check);
void test_floor(s21_decimal decimal, s21_decimal decimal_check);
void test_round(s21_decimal decimal, s21_decimal decimal_check);
void test_truncate(s21_decimal decimal, s21_decimal decimal_check);

void test_is_equal(s21_decimal decimal1, s21_decimal decimal2, int check);
void test_is_greater_or_equal(s21_decimal decimal1, s21_decimal decimal2, int check);
void test_is_less(s21_decimal decimal1, s21_decimal decimal2, int check);
void test_is_less_or_equal(s21_decimal decimal1, s21_decimal decimal2, int check);
void test_is_greater(s21_decimal decimal1, s21_decimal decimal2, int check);
void test_is_not_equal(s21_decimal decimal1, s21_decimal decimal2, int check);

void test_from_decimal_to_float(s21_decimal decimal, float check);
void test_from_decimal_to_int(s21_decimal decimal, int check);
void test_from_float_to_decimal(float num, s21_decimal decimal_check);
void test_from_int_to_decimal(int number, s21_decimal decimal_check);

Suite *add_suite(void);
Suite *sub_suite(void);
Suite *div_suite(void);
Suite *mul_suite(void);

Suite *is_less_suite(void);
Suite *is_equal_suite(void);
Suite *is_less_or_equal_suite(void);
Suite *is_greater_suite(void);
Suite *is_greater_or_equal_suite(void);
Suite *is_not_equal_suite(void);

Suite *truncate_suite(void);
Suite *round_suite(void);
Suite *floor_suite(void);
Suite *negate_suite(void);

Suite *from_int_to_decimal_suite(void);
Suite *from_float_to_decimal_suite(void);
Suite *from_decimal_to_int_suite(void);
Suite *from_decimal_to_float_suite(void);

#define TEST_OTHER_OK 0
#define TEST_OTHER_ERROR 1

#define TEST_ARITHMETIC_OK 0
#define TEST_ARITHMETIC_BIG 1
#define TEST_ARITHMETIC_SMALL 2
#define TEST_ARITHMETIC_ZERO_DIV 3

#define TEST_COMPARISON_FALSE 0
#define TEST_COMPARISON_TRUE 1

#define TEST_CONVERSION_OK 0
#define TEST_CONVERSION_ERROR 1