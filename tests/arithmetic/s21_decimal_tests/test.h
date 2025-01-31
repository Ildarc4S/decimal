#ifndef SRC_TESTS_TEST_H_
#define SRC_TESTS_TEST_H_

#include <check.h>

// #include "./../include/.h"

#define TEST_ARITHMETIC_OK 0
#define TEST_ARITHMETIC_BIG 1
#define TEST_ARITHMETIC_SMALL 2
#define TEST_ARITHMETIC_ZERO_DIV 3

Suite *add_suite9(void);
Suite *div_suite9(void);
Suite *mul_suite1(void);
Suite *sub_suite8(void);

void test_add(s21_decimal decimal1, s21_decimal decimal2, s21_decimal check);
void test_div(s21_decimal decimal1, s21_decimal decimal2, s21_decimal check);
void test_mul(s21_decimal decimal1, s21_decimal decimal2, s21_decimal check);
void test_sub(s21_decimal decimal1, s21_decimal decimal2, s21_decimal check);

#define TEST_COMPARISON_FALSE 0
#define TEST_COMPARISON_TRUE 1

Suite *is_equal_suite12(void);
Suite *is_greater_or_equal_suite8(void);
Suite *is_greater_suite1(void);
Suite *is_less_or_equal_suite11(void);
Suite *is_less_suite13(void);
Suite *is_not_equal_suite13(void);

void test_is_equal(s21_decimal decimal1, s21_decimal decimal2, int check);
void test_is_greater_or_equal(s21_decimal decimal1, s21_decimal decimal2, int check);
void test_is_greater(s21_decimal decimal1, s21_decimal decimal2, int check);
void test_is_less_or_equal(s21_decimal decimal1, s21_decimal decimal2, int check);
void test_is_less(s21_decimal decimal1, s21_decimal decimal2, int check);
void test_is_not_equal(s21_decimal decimal1, s21_decimal decimal2, int check);

Suite *from_decimal_to_float_suite2(void);
Suite *from_decimal_to_int_suite2(void);
Suite *from_float_to_decimal_suite6(void);
Suite *from_int_to_decimal_suite(void);


void test_from_int_to_decimal(int number, s21_decimal decimal_check);
void test_from_float_to_decimal(int f, s21_decimal decimal_check);
void test_from_decimal_to_int(s21_decimal decimal, int check);
void test_from_decimal_to_int_fail(s21_decimal decimal);
void test_from_decimal_to_float(s21_decimal decimal, int check);

Suite *floor_suite1(void);
Suite *negate_suite3(void);
Suite *round_suite1(void);
Suite *truncate_suite2(void);

void test_floor(s21_decimal decimal, s21_decimal decimal_check);
void test_round(s21_decimal decimal, s21_decimal decimal_check);
void test_truncate(s21_decimal decimal, s21_decimal decimal_check);
void test_negate(s21_decimal decimal, s21_decimal decimal_check);


void test_add(s21_decimal decimal1, s21_decimal decimal2, s21_decimal check) {
    s21_decimal result;
    int code = s21_add(decimal1, decimal2, &result);

    #if defined(__DEBUG)
    printf("---------------------------------\n");
    printf("\n\nTests:\n");
    s21_print_decimal_bits(decimal1);
    s21_print_decimal_string(decimal1);
    s21_print_decimal_bits(decimal2);
    s21_print_decimal_string(decimal2);
    printf("\ncheck:\n");
    s21_print_decimal_bits(check);
    s21_print_decimal_string(check);
    printf("\nres:\n");
    s21_print_decimal_bits(result);
    s21_print_decimal_string(result);
    printf("---------------------------------\n\n\n\n");
    #endif

    ck_assert_int_eq(s21_is_equal(result, check), 1);
    ck_assert_int_eq(code, TEST_ARITHMETIC_OK);
}

void test_div(s21_decimal decimal1, s21_decimal decimal2, s21_decimal check) {
    s21_decimal result;
    int code = s21_div(decimal1, decimal2, &result);
    #if defined(__DEBUG)
    printf("---------------------------------\n");
    printf("\n\nTests:\n");
    s21_print_decimal_bits(decimal1);
    s21_print_decimal_string(decimal1);
    s21_print_decimal_bits(decimal2);
    s21_print_decimal_string(decimal2);
    printf("\ncheck:\n");
    s21_print_decimal_bits(check);
    s21_print_decimal_string(check);
    printf("\nres:\n");
    s21_print_decimal_bits(result);
    s21_print_decimal_string(result);
    printf("---------------------------------\n");
    #endif
    ck_assert_int_eq(s21_is_equal(result, check), 1);
    ck_assert_int_eq(code, TEST_ARITHMETIC_OK);
}

void test_sub(s21_decimal decimal1, s21_decimal decimal2, s21_decimal check) {
    s21_decimal result;
    int code = s21_sub(decimal1, decimal2, &result);
    #if defined(__DEBUG)
    printf("---------------------------------\n");
    printf("\n\nTests:\n");
    s21_print_decimal_bits(decimal1);
    s21_print_decimal_string(decimal1);
    s21_print_decimal_bits(decimal2);
    s21_print_decimal_string(decimal2);
    printf("\ncheck:\n");
    s21_print_decimal_bits(check);
    s21_print_decimal_string(check);
    printf("\nres:\n");
    s21_print_decimal_bits(result);
    s21_print_decimal_string(result);
    printf("---------------------------------\n");
    #endif
    ck_assert_int_eq(s21_is_equal(result, check), 1);
    ck_assert_int_eq(code, TEST_ARITHMETIC_OK);
}

void test_is_equal(s21_decimal decimal1, s21_decimal decimal2, int check) {
    int code = s21_is_equal(decimal1, decimal2);

    #if defined(__DEBUG)
    printf("---------------------------------\n");
    printf("Tests:\n");
    s21_print_decimal_bits(decimal1);
    s21_print_decimal_string(decimal1);
    s21_print_decimal_bits(decimal2);
    s21_print_decimal_string(decimal2);
    printf("Check: %d\n", check);
    printf("Result: %d\n", code);
    printf("---------------------------------\n");
    #endif

    ck_assert_int_eq(code, check);
}

void test_is_greater_or_equal(s21_decimal decimal1, s21_decimal decimal2, int check) {
    int code = s21_is_greater_or_equal(decimal1, decimal2);

    #if defined(__DEBUG)
    printf("---------------------------------\n");
    printf("Tests:\n");
    s21_print_decimal_bits(decimal1);
    s21_print_decimal_string(decimal1);
    s21_print_decimal_bits(decimal2);
    s21_print_decimal_string(decimal2);
    printf("Check: %d\n", check);
    printf("Result: %d\n", code);
    printf("---------------------------------\n");
    #endif

    ck_assert_int_eq(code, check);
}


void test_is_greater(s21_decimal decimal1, s21_decimal decimal2, int check) {
    int code = s21_is_greater(decimal1, decimal2);

    #if defined(__DEBUG)
    printf("---------------------------------\n");
    printf("Tests:\n");
    s21_print_decimal_bits(decimal1);
    s21_print_decimal_string(decimal1);
    s21_print_decimal_bits(decimal2);
    s21_print_decimal_string(decimal2);
    printf("Check: %d\n", check);
    printf("Result: %d\n", code);
    printf("---------------------------------\n");
    #endif

    ck_assert_int_eq(code, check);
}

void test_is_less_or_equal(s21_decimal decimal1, s21_decimal decimal2, int check) {
    int code = s21_is_less_or_equal(decimal1, decimal2);

    #if defined(__DEBUG)
    printf("---------------------------------\n");
    printf("Tests:\n");
    s21_print_decimal_bits(decimal1);
    s21_print_decimal_string(decimal1);
    s21_print_decimal_bits(decimal2);
    s21_print_decimal_string(decimal2);
    printf("Check: %d\n", check);
    printf("Result: %d\n", code);
    printf("---------------------------------\n");
    #endif

    ck_assert_int_eq(code, check);
}

void test_is_less(s21_decimal decimal1, s21_decimal decimal2, int check) {
    int code = s21_is_less_or_equal(decimal1, decimal2);

    #if defined(__DEBUG)
    printf("---------------------------------\n");
    printf("Tests:\n");
    s21_print_decimal_bits(decimal1);
    s21_print_decimal_string(decimal1);
    s21_print_decimal_bits(decimal2);
    s21_print_decimal_string(decimal2);
    printf("Check: %d\n", check);
    printf("Result: %d\n", code);
    printf("---------------------------------\n");
    #endif

    ck_assert_int_eq(code, check);
}

void test_is_not_equal(s21_decimal decimal1, s21_decimal decimal2, int check) {
    int code = s21_is_less_or_equal(decimal1, decimal2);

    #if defined(__DEBUG)
    printf("---------------------------------\n");
    printf("Tests:\n");
    s21_print_decimal_bits(decimal1);
    s21_print_decimal_string(decimal1);
    s21_print_decimal_bits(decimal2);
    s21_print_decimal_string(decimal2);
    printf("Check: %d\n", check);
    printf("Result: %d\n", code);
    printf("---------------------------------\n");
    #endif

    ck_assert_int_eq(code, check);
}

void test_from_decimal_to_float(s21_decimal decimal1, s21_decimal decimal2, int check) {
    int code = s21_is_less_or_equal(decimal1, decimal2);

    #if defined(__DEBUG)
    printf("---------------------------------\n");
    printf("Tests:\n");
    s21_print_decimal_bits(decimal1);
    s21_print_decimal_string(decimal1);
    s21_print_decimal_bits(decimal2);
    s21_print_decimal_string(decimal2);
    printf("Check: %d\n", check);
    printf("Result: %d\n", code);
    printf("---------------------------------\n");
    #endif

    ck_assert_int_eq(code, check);
}

void test_from_decimal_to_ints21_decimal decimal1, s21_decimal decimal2, int check) {
    int code = s21_is_less_or_equal(decimal1, decimal2);

    #if defined(__DEBUG)
    printf("---------------------------------\n");
    printf("Tests:\n");
    s21_print_decimal_bits(decimal1);
    s21_print_decimal_string(decimal1);
    s21_print_decimal_bits(decimal2);
    s21_print_decimal_string(decimal2);
    printf("Check: %d\n", check);
    printf("Result: %d\n", code);
    printf("---------------------------------\n");
    #endif

    ck_assert_int_eq(code, check);
}

void test_from_float_to_decimal(s21_decimal decimal1, s21_decimal decimal2, int check) {
    int code = s21_is_less_or_equal(decimal1, decimal2);

    #if defined(__DEBUG)
    printf("---------------------------------\n");
    printf("Tests:\n");
    s21_print_decimal_bits(decimal1);
    s21_print_decimal_string(decimal1);
    s21_print_decimal_bits(decimal2);
    s21_print_decimal_string(decimal2);
    printf("Check: %d\n", check);
    printf("Result: %d\n", code);
    printf("---------------------------------\n");
    #endif

    ck_assert_int_eq(code, check);
}

void test_from_int_to_decimal(s21_decimal decimal1, s21_decimal decimal2, int check) {
    int code = s21_is_less_or_equal(decimal1, decimal2);

    #if defined(__DEBUG)
    printf("---------------------------------\n");
    printf("Tests:\n");
    s21_print_decimal_bits(decimal1);
    s21_print_decimal_string(decimal1);
    s21_print_decimal_bits(decimal2);
    s21_print_decimal_string(decimal2);
    printf("Check: %d\n", check);
    printf("Result: %d\n", code);
    printf("---------------------------------\n");
    #endif

    ck_assert_int_eq(code, check);
}

void test_floor(s21_decimal decimal1, s21_decimal decimal2, int check) {
    int code = s21_is_less_or_equal(decimal1, decimal2);

    #if defined(__DEBUG)
    printf("---------------------------------\n");
    printf("Tests:\n");
    s21_print_decimal_bits(decimal1);
    s21_print_decimal_string(decimal1);
    s21_print_decimal_bits(decimal2);
    s21_print_decimal_string(decimal2);
    printf("Check: %d\n", check);
    printf("Result: %d\n", code);
    printf("---------------------------------\n");
    #endif

    ck_assert_int_eq(code, check);
}

void test_negate(s21_decimal decimal1, s21_decimal decimal2, int check) {
    int code = s21_is_less_or_equal(decimal1, decimal2);

    #if defined(__DEBUG)
    printf("---------------------------------\n");
    printf("Tests:\n");
    s21_print_decimal_bits(decimal1);
    s21_print_decimal_string(decimal1);
    s21_print_decimal_bits(decimal2);
    s21_print_decimal_string(decimal2);
    printf("Check: %d\n", check);
    printf("Result: %d\n", code);
    printf("---------------------------------\n");
    #endif

    ck_assert_int_eq(code, check);
}

void test_round(s21_decimal decimal1, s21_decimal decimal2, int check) {
    int code = s21_is_less_or_equal(decimal1, decimal2);

    #if defined(__DEBUG)
    printf("---------------------------------\n");
    printf("Tests:\n");
    s21_print_decimal_bits(decimal1);
    s21_print_decimal_string(decimal1);
    s21_print_decimal_bits(decimal2);
    s21_print_decimal_string(decimal2);
    printf("Check: %d\n", check);
    printf("Result: %d\n", code);
    printf("---------------------------------\n");
    #endif

    ck_assert_int_eq(code, check);
}

void test_truncate(s21_decimal decimal1, s21_decimal decimal2, int check) {
    int code = s21_is_less_or_equal(decimal1, decimal2);

    #if defined(__DEBUG)
    printf("---------------------------------\n");
    printf("Tests:\n");
    s21_print_decimal_bits(decimal1);
    s21_print_decimal_string(decimal1);
    s21_print_decimal_bits(decimal2);
    s21_print_decimal_string(decimal2);
    printf("Check: %d\n", check);
    printf("Result: %d\n", code);
    printf("---------------------------------\n");
    #endif

    ck_assert_int_eq(code, check);
}