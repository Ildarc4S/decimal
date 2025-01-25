#include "../../../include/arithmetic.h"
#include <check.h>
#include <stdio.h>
#include <stdlib.h>

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

START_TEST(test_is_equal_ok4481) {
    // 0.9999999999999999999999999999
    s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    // 79228162514264337593543950335
    s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4482) {
    // 79228162514264337593543950335
    s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
    // 0.9999999999999999999999999999
    s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4483) {
    // 0.9999999999999999999999999999
    s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    // -79228162514264337593543950335
    s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4484) {
    // -79228162514264337593543950335
    s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
    // 0.9999999999999999999999999999
    s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4485) {
    // 0.9999999999999999999999999999
    s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    // 52818775009509558395695966890
    s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4486) {
    // 52818775009509558395695966890
    s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
    // 0.9999999999999999999999999999
    s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4487) {
    // 0.9999999999999999999999999999
    s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    // -52818775009509558395695966890
    s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4488) {
    // -52818775009509558395695966890
    s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
    // 0.9999999999999999999999999999
    s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4489) {
    // 0.9999999999999999999999999999
    s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    // 52818775009509558395695966891
    s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4490) {
    // 52818775009509558395695966891
    s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
    // 0.9999999999999999999999999999
    s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4491) {
    // 0.9999999999999999999999999999
    s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    // -52818775009509558395695966891
    s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4492) {
    // -52818775009509558395695966891
    s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
    // 0.9999999999999999999999999999
    s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4493) {
    // 0.9999999999999999999999999999
    s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    // 5.281877500950955839569596690
    s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4494) {
    // 5.281877500950955839569596690
    s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
    // 0.9999999999999999999999999999
    s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4495) {
    // 0.9999999999999999999999999999
    s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    // -5.281877500950955839569596690
    s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4496) {
    // -5.281877500950955839569596690
    s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
    // 0.9999999999999999999999999999
    s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4497) {
    // 0.9999999999999999999999999999
    s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    // 5281877500950955839569596689
    s21_decimal decimal2 = {{0x11111111, 0x11111111, 0x11111111, 0x0}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4498) {
    // 5281877500950955839569596689
    s21_decimal decimal1 = {{0x11111111, 0x11111111, 0x11111111, 0x0}};
    // 0.9999999999999999999999999999
    s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4499) {
    // 0.9999999999999999999999999999
    s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    // -5281877500950955839569596689
    s21_decimal decimal2 = {{0x11111111, 0x11111111, 0x11111111, 0x80000000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4500) {
    // -5281877500950955839569596689
    s21_decimal decimal1 = {{0x11111111, 0x11111111, 0x11111111, 0x80000000}};
    // 0.9999999999999999999999999999
    s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4501) {
    // 0.9999999999999999999999999999
    s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    // 5281877500950955839569596689.0
    s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x10000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4502) {
    // 5281877500950955839569596689.0
    s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x10000}};
    // 0.9999999999999999999999999999
    s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4503) {
    // 0.9999999999999999999999999999
    s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    // -5281877500950955839569596689.0
    s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80010000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4504) {
    // -5281877500950955839569596689.0
    s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80010000}};
    // 0.9999999999999999999999999999
    s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4505) {
    // 0.9999999999999999999999999999
    s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    // 7922816251426433759354395033
    s21_decimal decimal2 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4506) {
    // 7922816251426433759354395033
    s21_decimal decimal1 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
    // 0.9999999999999999999999999999
    s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4507) {
    // 0.9999999999999999999999999999
    s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    // -7922816251426433759354395033
    s21_decimal decimal2 = {{0x99999999, 0x99999999, 0x19999999, 0x80000000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4508) {
    // -7922816251426433759354395033
    s21_decimal decimal1 = {{0x99999999, 0x99999999, 0x19999999, 0x80000000}};
    // 0.9999999999999999999999999999
    s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4509) {
    // 0.9999999999999999999999999999
    s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    // 7922816251426433759354395034
    s21_decimal decimal2 = {{0x9999999A, 0x99999999, 0x19999999, 0x0}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4510) {
    // 7922816251426433759354395034
    s21_decimal decimal1 = {{0x9999999A, 0x99999999, 0x19999999, 0x0}};
    // 0.9999999999999999999999999999
    s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4511) {
    // 0.9999999999999999999999999999
    s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    // -7922816251426433759354395034
    s21_decimal decimal2 = {{0x9999999A, 0x99999999, 0x19999999, 0x80000000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4512) {
    // -7922816251426433759354395034
    s21_decimal decimal1 = {{0x9999999A, 0x99999999, 0x19999999, 0x80000000}};
    // 0.9999999999999999999999999999
    s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4513) {
    // 0.9999999999999999999999999999
    s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    // 1.2297829382473034409
    s21_decimal decimal2 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x130000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4514) {
    // 1.2297829382473034409
    s21_decimal decimal1 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x130000}};
    // 0.9999999999999999999999999999
    s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4515) {
    // 0.9999999999999999999999999999
    s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    // -1.2297829382473034409
    s21_decimal decimal2 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x80130000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4516) {
    // -1.2297829382473034409
    s21_decimal decimal1 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x80130000}};
    // 0.9999999999999999999999999999
    s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4517) {
    // 0.9999999999999999999999999999
    s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    // 1.2297829382473034410
    s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x130000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4518) {
    // 1.2297829382473034410
    s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x130000}};
    // 0.9999999999999999999999999999
    s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4519) {
    // 0.9999999999999999999999999999
    s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    // -1.2297829382473034410
    s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80130000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4520) {
    // -1.2297829382473034410
    s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80130000}};
    // 0.9999999999999999999999999999
    s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4521) {
    // 0.9999999999999999999999999999
    s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    // 1.2297829382473034411
    s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x130000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4522) {
    // 1.2297829382473034411
    s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x130000}};
    // 0.9999999999999999999999999999
    s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4523) {
    // 0.9999999999999999999999999999
    s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    // -1.2297829382473034411
    s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x80130000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4524) {
    // -1.2297829382473034411
    s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x80130000}};
    // 0.9999999999999999999999999999
    s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4525) {
    // 0.9999999999999999999999999999
    s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    // 1
    s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x0}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4526) {
    // 1
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x0}};
    // 0.9999999999999999999999999999
    s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4527) {
    // 0.9999999999999999999999999999
    s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    // -1
    s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x80000000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4528) {
    // -1
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80000000}};
    // 0.9999999999999999999999999999
    s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4529) {
    // 0.9999999999999999999999999999
    s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    // 1.0
    s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x10000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4530) {
    // 1.0
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x10000}};
    // 0.9999999999999999999999999999
    s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4531) {
    // 0.9999999999999999999999999999
    s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    // -1.0
    s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x80010000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4532) {
    // -1.0
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x80010000}};
    // 0.9999999999999999999999999999
    s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4533) {
    // 0.9999999999999999999999999999
    s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    // 1.22
    s21_decimal decimal2 = {{0x7A, 0x0, 0x0, 0x20000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4534) {
    // 1.22
    s21_decimal decimal1 = {{0x7A, 0x0, 0x0, 0x20000}};
    // 0.9999999999999999999999999999
    s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4535) {
    // 0.9999999999999999999999999999
    s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    // -1.22
    s21_decimal decimal2 = {{0x7A, 0x0, 0x0, 0x80020000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4536) {
    // -1.22
    s21_decimal decimal1 = {{0x7A, 0x0, 0x0, 0x80020000}};
    // 0.9999999999999999999999999999
    s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4537) {
    // 0.9999999999999999999999999999
    s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    // 1.230001
    s21_decimal decimal2 = {{0x12C4B1, 0x0, 0x0, 0x60000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4538) {
    // 1.230001
    s21_decimal decimal1 = {{0x12C4B1, 0x0, 0x0, 0x60000}};
    // 0.9999999999999999999999999999
    s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4539) {
    // 0.9999999999999999999999999999
    s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    // -1.230001
    s21_decimal decimal2 = {{0x12C4B1, 0x0, 0x0, 0x80060000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4540) {
    // -1.230001
    s21_decimal decimal1 = {{0x12C4B1, 0x0, 0x0, 0x80060000}};
    // 0.9999999999999999999999999999
    s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4541) {
    // 0.9999999999999999999999999999
    s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    // 1.23000
    s21_decimal decimal2 = {{0x1E078, 0x0, 0x0, 0x50000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4542) {
    // 1.23000
    s21_decimal decimal1 = {{0x1E078, 0x0, 0x0, 0x50000}};
    // 0.9999999999999999999999999999
    s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4543) {
    // 0.9999999999999999999999999999
    s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    // -1.23000
    s21_decimal decimal2 = {{0x1E078, 0x0, 0x0, 0x80050000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4544) {
    // -1.23000
    s21_decimal decimal1 = {{0x1E078, 0x0, 0x0, 0x80050000}};
    // 0.9999999999999999999999999999
    s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4545) {
    // 0.9999999999999999999999999999
    s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    // 1431655765
    s21_decimal decimal2 = {{0x55555555, 0x0, 0x0, 0x0}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4546) {
    // 1431655765
    s21_decimal decimal1 = {{0x55555555, 0x0, 0x0, 0x0}};
    // 0.9999999999999999999999999999
    s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4547) {
    // 0.9999999999999999999999999999
    s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    // -1431655765
    s21_decimal decimal2 = {{0x55555555, 0x0, 0x0, 0x80000000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4548) {
    // -1431655765
    s21_decimal decimal1 = {{0x55555555, 0x0, 0x0, 0x80000000}};
    // 0.9999999999999999999999999999
    s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4549) {
    // 0.9999999999999999999999999999
    s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    // 1431655765.00000
    s21_decimal decimal2 = {{0x5554D320, 0x8235, 0x0, 0x50000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4550) {
    // 1431655765.00000
    s21_decimal decimal1 = {{0x5554D320, 0x8235, 0x0, 0x50000}};
    // 0.9999999999999999999999999999
    s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4551) {
    // 0.9999999999999999999999999999
    s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    // -1431655765.00000
    s21_decimal decimal2 = {{0x5554D320, 0x8235, 0x0, 0x80050000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4552) {
    // -1431655765.00000
    s21_decimal decimal1 = {{0x5554D320, 0x8235, 0x0, 0x80050000}};
    // 0.9999999999999999999999999999
    s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4553) {
    // 0.9999999999999999999999999999
    s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    // 1431655765.000000000000000001
    s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4554) {
    // 1431655765.000000000000000001
    s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
    // 0.9999999999999999999999999999
    s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4555) {
    // 0.9999999999999999999999999999
    s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    // -1431655765.000000000000000001
    s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x80120000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4556) {
    // -1431655765.000000000000000001
    s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x80120000}};
    // 0.9999999999999999999999999999
    s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4557) {
    // 0.9999999999999999999999999999
    s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    // 1431655764.999999999999999999
    s21_decimal decimal2 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x120000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4558) {
    // 1431655764.999999999999999999
    s21_decimal decimal1 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x120000}};
    // 0.9999999999999999999999999999
    s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4559) {
    // 0.9999999999999999999999999999
    s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    // -1431655764.999999999999999999
    s21_decimal decimal2 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x80120000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4560) {
    // -1431655764.999999999999999999
    s21_decimal decimal1 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x80120000}};
    // 0.9999999999999999999999999999
    s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4561) {
    // 0.9999999999999999999999999999
    s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    // 0.9999999999999999999999999999
    s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4562) {
    // 0.9999999999999999999999999999
    s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    // 0.9999999999999999999999999999
    s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4563) {
    // 0.9999999999999999999999999999
    s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    // -0.9999999999999999999999999999
    s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x801C0000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4564) {
    // -0.9999999999999999999999999999
    s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x801C0000}};
    // 0.9999999999999999999999999999
    s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4565) {
    // 0.9999999999999999999999999999
    s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    // 0.0000000000000000000000000001
    s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x1C0000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4566) {
    // 0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
    // 0.9999999999999999999999999999
    s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4567) {
    // 0.9999999999999999999999999999
    s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    // -0.0000000000000000000000000001
    s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x801C0000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4568) {
    // -0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x801C0000}};
    // 0.9999999999999999999999999999
    s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4569) {
    // 0.9999999999999999999999999999
    s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    // 0
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x0}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4570) {
    // 0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
    // 0.9999999999999999999999999999
    s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4571) {
    // 0.9999999999999999999999999999
    s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    // -0
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x80000000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4572) {
    // -0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x80000000}};
    // 0.9999999999999999999999999999
    s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4573) {
    // 0.9999999999999999999999999999
    s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    // -0.00000000000000
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x800E0000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4574) {
    // -0.00000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x800E0000}};
    // 0.9999999999999999999999999999
    s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4575) {
    // 0.9999999999999999999999999999
    s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    // 0.00000000000000
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0xE0000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4576) {
    // 0.00000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0xE0000}};
    // 0.9999999999999999999999999999
    s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4577) {
    // 0.9999999999999999999999999999
    s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    // -0.0000000000000000000000000000
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x801C0000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4578) {
    // -0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x801C0000}};
    // 0.9999999999999999999999999999
    s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4579) {
    // 0.9999999999999999999999999999
    s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    // 0.0000000000000000000000000000
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x1C0000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4580) {
    // 0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
    // 0.9999999999999999999999999999
    s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4581) {
    // 0.9999999999999999999999999999
    s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    // -305820564510.46084593589468994
    s21_decimal decimal2 = {{0x64B0BF42, 0x2A3886D9, 0x62D0E25A, 0x80110000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4582) {
    // -305820564510.46084593589468994
    s21_decimal decimal1 = {{0x64B0BF42, 0x2A3886D9, 0x62D0E25A, 0x80110000}};
    // 0.9999999999999999999999999999
    s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4583) {
    // 0.9999999999999999999999999999
    s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    // 305820564510.46084593589468994
    s21_decimal decimal2 = {{0x64B0BF42, 0x2A3886D9, 0x62D0E25A, 0x110000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4584) {
    // 305820564510.46084593589468994
    s21_decimal decimal1 = {{0x64B0BF42, 0x2A3886D9, 0x62D0E25A, 0x110000}};
    // 0.9999999999999999999999999999
    s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4585) {
    // 0.9999999999999999999999999999
    s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    // 5077779.6717425679610094186071
    s21_decimal decimal2 = {{0xA15E6E57, 0xC0C562E8, 0xA41268B3, 0x160000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4586) {
    // 5077779.6717425679610094186071
    s21_decimal decimal1 = {{0xA15E6E57, 0xC0C562E8, 0xA41268B3, 0x160000}};
    // 0.9999999999999999999999999999
    s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4587) {
    // 0.9999999999999999999999999999
    s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    // -5077779.6717425679610094186071
    s21_decimal decimal2 = {{0xA15E6E57, 0xC0C562E8, 0xA41268B3, 0x80160000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4588) {
    // -5077779.6717425679610094186071
    s21_decimal decimal1 = {{0xA15E6E57, 0xC0C562E8, 0xA41268B3, 0x80160000}};
    // 0.9999999999999999999999999999
    s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4589) {
    // 0.9999999999999999999999999999
    s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    // 20786105945010.405849433600269
    s21_decimal decimal2 = {{0x48D7710D, 0x279AE1C0, 0x4329DD25, 0xF0000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4590) {
    // 20786105945010.405849433600269
    s21_decimal decimal1 = {{0x48D7710D, 0x279AE1C0, 0x4329DD25, 0xF0000}};
    // 0.9999999999999999999999999999
    s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4591) {
    // 0.9999999999999999999999999999
    s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    // -20786105945010.405849433600269
    s21_decimal decimal2 = {{0x48D7710D, 0x279AE1C0, 0x4329DD25, 0x800F0000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4592) {
    // -20786105945010.405849433600269
    s21_decimal decimal1 = {{0x48D7710D, 0x279AE1C0, 0x4329DD25, 0x800F0000}};
    // 0.9999999999999999999999999999
    s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4593) {
    // -0.9999999999999999999999999999
    s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x801C0000}};
    // 79228162514264337593543950335
    s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4594) {
    // 79228162514264337593543950335
    s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
    // -0.9999999999999999999999999999
    s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x801C0000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4595) {
    // -0.9999999999999999999999999999
    s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x801C0000}};
    // -79228162514264337593543950335
    s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4596) {
    // -79228162514264337593543950335
    s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
    // -0.9999999999999999999999999999
    s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x801C0000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4597) {
    // -0.9999999999999999999999999999
    s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x801C0000}};
    // 52818775009509558395695966890
    s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4598) {
    // 52818775009509558395695966890
    s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
    // -0.9999999999999999999999999999
    s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x801C0000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4599) {
    // -0.9999999999999999999999999999
    s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x801C0000}};
    // -52818775009509558395695966890
    s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4600) {
    // -52818775009509558395695966890
    s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
    // -0.9999999999999999999999999999
    s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x801C0000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4601) {
    // -0.9999999999999999999999999999
    s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x801C0000}};
    // 52818775009509558395695966891
    s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4602) {
    // 52818775009509558395695966891
    s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
    // -0.9999999999999999999999999999
    s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x801C0000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4603) {
    // -0.9999999999999999999999999999
    s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x801C0000}};
    // -52818775009509558395695966891
    s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4604) {
    // -52818775009509558395695966891
    s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
    // -0.9999999999999999999999999999
    s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x801C0000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4605) {
    // -0.9999999999999999999999999999
    s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x801C0000}};
    // 5.281877500950955839569596690
    s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4606) {
    // 5.281877500950955839569596690
    s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
    // -0.9999999999999999999999999999
    s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x801C0000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4607) {
    // -0.9999999999999999999999999999
    s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x801C0000}};
    // -5.281877500950955839569596690
    s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4608) {
    // -5.281877500950955839569596690
    s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
    // -0.9999999999999999999999999999
    s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x801C0000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4609) {
    // -0.9999999999999999999999999999
    s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x801C0000}};
    // 5281877500950955839569596689
    s21_decimal decimal2 = {{0x11111111, 0x11111111, 0x11111111, 0x0}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4610) {
    // 5281877500950955839569596689
    s21_decimal decimal1 = {{0x11111111, 0x11111111, 0x11111111, 0x0}};
    // -0.9999999999999999999999999999
    s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x801C0000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok2783) {
    // 1.0
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x10000}};
    // 0.00000000000000
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0xE0000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok2784) {
    // 0.00000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0xE0000}};
    // 1.0
    s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x10000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok2785) {
    // 1.0
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x10000}};
    // -0.0000000000000000000000000000
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x801C0000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok2786) {
    // -0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x801C0000}};
    // 1.0
    s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x10000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok2787) {
    // 1.0
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x10000}};
    // 0.0000000000000000000000000000
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x1C0000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok2788) {
    // 0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
    // 1.0
    s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x10000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok2789) {
    // 1.0
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x10000}};
    // -5491184418.5106300524956975593
    s21_decimal decimal2 = {{0x734381E9, 0x8ACE66A, 0xB16E034E, 0x80130000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok2790) {
    // -5491184418.5106300524956975593
    s21_decimal decimal1 = {{0x734381E9, 0x8ACE66A, 0xB16E034E, 0x80130000}};
    // 1.0
    s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x10000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok2791) {
    // 1.0
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x10000}};
    // 5491184418.5106300524956975593
    s21_decimal decimal2 = {{0x734381E9, 0x8ACE66A, 0xB16E034E, 0x130000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok2792) {
    // 5491184418.5106300524956975593
    s21_decimal decimal1 = {{0x734381E9, 0x8ACE66A, 0xB16E034E, 0x130000}};
    // 1.0
    s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x10000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok2793) {
    // 1.0
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x10000}};
    // -518571519399.48581393334040314
    s21_decimal decimal2 = {{0xDB6476FA, 0x9C33420F, 0xA78F3B0F, 0x80110000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok2794) {
    // -518571519399.48581393334040314
    s21_decimal decimal1 = {{0xDB6476FA, 0x9C33420F, 0xA78F3B0F, 0x80110000}};
    // 1.0
    s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x10000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok2795) {
    // 1.0
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x10000}};
    // 518571519399.48581393334040314
    s21_decimal decimal2 = {{0xDB6476FA, 0x9C33420F, 0xA78F3B0F, 0x110000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok2796) {
    // 518571519399.48581393334040314
    s21_decimal decimal1 = {{0xDB6476FA, 0x9C33420F, 0xA78F3B0F, 0x110000}};
    // 1.0
    s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x10000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok2797) {
    // 1.0
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x10000}};
    // -7347194860180725191424.9548934
    s21_decimal decimal2 = {{0x8A5D3486, 0x8A87F668, 0xED66924A, 0x80070000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok2798) {
    // -7347194860180725191424.9548934
    s21_decimal decimal1 = {{0x8A5D3486, 0x8A87F668, 0xED66924A, 0x80070000}};
    // 1.0
    s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x10000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok2799) {
    // 1.0
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x10000}};
    // 7347194860180725191424.9548934
    s21_decimal decimal2 = {{0x8A5D3486, 0x8A87F668, 0xED66924A, 0x70000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok2800) {
    // 7347194860180725191424.9548934
    s21_decimal decimal1 = {{0x8A5D3486, 0x8A87F668, 0xED66924A, 0x70000}};
    // 1.0
    s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x10000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok2801) {
    // -1.0
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x80010000}};
    // 79228162514264337593543950335
    s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
    int check = TEST_COMPARISON_FALSE;

    test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok2802) {
    // 79228162514264337593543950335
    s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
    // -1.0
    s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x80010000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok2803) {
    // -1.0
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x80010000}};
    // -79228162514264337593543950335
    s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok2804) {
    // -79228162514264337593543950335
    s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
    // -1.0
    s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x80010000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok2805) {
    // -1.0
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x80010000}};
    // 52818775009509558395695966890
    s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
    int check = TEST_COMPARISON_FALSE;

    test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok2806) {
    // 52818775009509558395695966890
    s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
    // -1.0
    s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x80010000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok2807) {
    // -1.0
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x80010000}};
    // -52818775009509558395695966890
    s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok2808) {
    // -52818775009509558395695966890
    s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
    // -1.0
    s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x80010000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok2809) {
    // -1.0
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x80010000}};
    // 52818775009509558395695966891
    s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
    int check = TEST_COMPARISON_FALSE;

    test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok2810) {
    // 52818775009509558395695966891
    s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
    // -1.0
    s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x80010000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok2811) {
    // -1.0
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x80010000}};
    // -52818775009509558395695966891
    s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok2812) {
    // -52818775009509558395695966891
    s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
    // -1.0
    s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x80010000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok2813) {
    // -1.0
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x80010000}};
    // 5.281877500950955839569596690
    s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok2814) {
    // 5.281877500950955839569596690
    s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
    // -1.0
    s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x80010000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok2815) {
    // -1.0
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x80010000}};
    // -5.281877500950955839569596690
    s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok2816) {
    // -5.281877500950955839569596690
    s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
    // -1.0
    s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x80010000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok2817) {
    // -1.0
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x80010000}};
    // 5281877500950955839569596689
    s21_decimal decimal2 = {{0x11111111, 0x11111111, 0x11111111, 0x0}};
    int check = TEST_COMPARISON_FALSE;

    test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok2818) {
    // 5281877500950955839569596689
    s21_decimal decimal1 = {{0x11111111, 0x11111111, 0x11111111, 0x0}};
    // -1.0
    s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x80010000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok2819) {
    // -1.0
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x80010000}};
    // -5281877500950955839569596689
    s21_decimal decimal2 = {{0x11111111, 0x11111111, 0x11111111, 0x80000000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok2820) {
    // -5281877500950955839569596689
    s21_decimal decimal1 = {{0x11111111, 0x11111111, 0x11111111, 0x80000000}};
    // -1.0
    s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x80010000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok2821) {
    // -1.0
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x80010000}};
    // 5281877500950955839569596689.0
    s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x10000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok2822) {
    // 5281877500950955839569596689.0
    s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x10000}};
    // -1.0
    s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x80010000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok2823) {
    // -1.0
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x80010000}};
    // -5281877500950955839569596689.0
    s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80010000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok2824) {
    // -5281877500950955839569596689.0
    s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80010000}};
    // -1.0
    s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x80010000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok2825) {
    // -1.0
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x80010000}};
    // 7922816251426433759354395033
    s21_decimal decimal2 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
    int check = TEST_COMPARISON_FALSE;

    test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok2826) {
    // 7922816251426433759354395033
    s21_decimal decimal1 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
    // -1.0
    s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x80010000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok2827) {
    // -1.0
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x80010000}};
    // -7922816251426433759354395033
    s21_decimal decimal2 = {{0x99999999, 0x99999999, 0x19999999, 0x80000000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok2828) {
    // -7922816251426433759354395033
    s21_decimal decimal1 = {{0x99999999, 0x99999999, 0x19999999, 0x80000000}};
    // -1.0
    s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x80010000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok2829) {
    // -1.0
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x80010000}};
    // 7922816251426433759354395034
    s21_decimal decimal2 = {{0x9999999A, 0x99999999, 0x19999999, 0x0}};
    int check = TEST_COMPARISON_FALSE;

    test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok2830) {
    // 7922816251426433759354395034
    s21_decimal decimal1 = {{0x9999999A, 0x99999999, 0x19999999, 0x0}};
    // -1.0
    s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x80010000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok2831) {
    // -1.0
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x80010000}};
    // -7922816251426433759354395034
    s21_decimal decimal2 = {{0x9999999A, 0x99999999, 0x19999999, 0x80000000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok2832) {
    // -7922816251426433759354395034
    s21_decimal decimal1 = {{0x9999999A, 0x99999999, 0x19999999, 0x80000000}};
    // -1.0
    s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x80010000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok2833) {
    // -1.0
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x80010000}};
    // 1.2297829382473034409
    s21_decimal decimal2 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x130000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok2834) {
    // 1.2297829382473034409
    s21_decimal decimal1 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x130000}};
    // -1.0
    s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x80010000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok2835) {
    // -1.0
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x80010000}};
    // -1.2297829382473034409
    s21_decimal decimal2 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x80130000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok2836) {
    // -1.2297829382473034409
    s21_decimal decimal1 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x80130000}};
    // -1.0
    s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x80010000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok2837) {
    // -1.0
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x80010000}};
    // 1.2297829382473034410
    s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x130000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok2838) {
    // 1.2297829382473034410
    s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x130000}};
    // -1.0
    s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x80010000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok2839) {
    // -1.0
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x80010000}};
    // -1.2297829382473034410
    s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80130000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok2840) {
    // -1.2297829382473034410
    s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80130000}};
    // -1.0
    s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x80010000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok2841) {
    // -1.0
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x80010000}};
    // 1.2297829382473034411
    s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x130000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok2842) {
    // 1.2297829382473034411
    s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x130000}};
    // -1.0
    s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x80010000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok2843) {
    // -1.0
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x80010000}};
    // -1.2297829382473034411
    s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x80130000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok2844) {
    // -1.2297829382473034411
    s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x80130000}};
    // -1.0
    s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x80010000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok2845) {
    // -1.0
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x80010000}};
    // 1
    s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x0}};
    int check = TEST_COMPARISON_FALSE;

    test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok2846) {
    // 1
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x0}};
    // -1.0
    s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x80010000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok2847) {
    // -1.0
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x80010000}};
    // -1
    s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x80000000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok2848) {
    // -1
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80000000}};
    // -1.0
    s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x80010000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok2849) {
    // -1.0
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x80010000}};
    // 1.0
    s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x10000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok2850) {
    // 1.0
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x10000}};
    // -1.0
    s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x80010000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok2851) {
    // -1.0
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x80010000}};
    // -1.0
    s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x80010000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok2852) {
    // -1.0
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x80010000}};
    // -1.0
    s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x80010000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok2853) {
    // -1.0
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x80010000}};
    // 1.22
    s21_decimal decimal2 = {{0x7A, 0x0, 0x0, 0x20000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok2854) {
    // 1.22
    s21_decimal decimal1 = {{0x7A, 0x0, 0x0, 0x20000}};
    // -1.0
    s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x80010000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok2855) {
    // -1.0
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x80010000}};
    // -1.22
    s21_decimal decimal2 = {{0x7A, 0x0, 0x0, 0x80020000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok2856) {
    // -1.22
    s21_decimal decimal1 = {{0x7A, 0x0, 0x0, 0x80020000}};
    // -1.0
    s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x80010000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok104) {
    // 19290120297533996546.12653034
    s21_decimal decimal1 = {{0x11EAD3EA, 0xABA39F31, 0x63BA42F, 0x80000}};
    // 79228162514264337593543950335
    s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
    int check = TEST_COMPARISON_FALSE;

    test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok105) {
    // 79228162514264337593543950335
    s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
    // 3.2370474408201521914302817507
    s21_decimal decimal2 = {{0xB219E4E3, 0xE34F18DD, 0x68983A95, 0x1C0000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok106) {
    // 3.2370474408201521914302817507
    s21_decimal decimal1 = {{0xB219E4E3, 0xE34F18DD, 0x68983A95, 0x1C0000}};
    // 79228162514264337593543950335
    s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
    int check = TEST_COMPARISON_FALSE;

    test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok107) {
    // 79228162514264337593543950335
    s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
    // -3.2370474408201521914302817507
    s21_decimal decimal2 = {{0xB219E4E3, 0xE34F18DD, 0x68983A95, 0x801C0000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok108) {
    // -3.2370474408201521914302817507
    s21_decimal decimal1 = {{0xB219E4E3, 0xE34F18DD, 0x68983A95, 0x801C0000}};
    // 79228162514264337593543950335
    s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
    int check = TEST_COMPARISON_FALSE;

    test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok109) {
    // 79228162514264337593543950335
    s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
    // 858826877820029649465.1465162
    s21_decimal decimal2 = {{0x96DCDDCA, 0x5C57756E, 0x1BC00CA7, 0x70000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok110) {
    // 858826877820029649465.1465162
    s21_decimal decimal1 = {{0x96DCDDCA, 0x5C57756E, 0x1BC00CA7, 0x70000}};
    // 79228162514264337593543950335
    s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
    int check = TEST_COMPARISON_FALSE;

    test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok111) {
    // 79228162514264337593543950335
    s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
    // -858826877820029649465.1465162
    s21_decimal decimal2 = {{0x96DCDDCA, 0x5C57756E, 0x1BC00CA7, 0x80070000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok112) {
    // -858826877820029649465.1465162
    s21_decimal decimal1 = {{0x96DCDDCA, 0x5C57756E, 0x1BC00CA7, 0x80070000}};
    // 79228162514264337593543950335
    s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
    int check = TEST_COMPARISON_FALSE;

    test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok113) {
    // -79228162514264337593543950335
    s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
    // 79228162514264337593543950335
    s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
    int check = TEST_COMPARISON_FALSE;

    test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok114) {
    // 79228162514264337593543950335
    s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
    // -79228162514264337593543950335
    s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok115) {
    // -79228162514264337593543950335
    s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
    // -79228162514264337593543950335
    s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok116) {
    // -79228162514264337593543950335
    s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
    // -79228162514264337593543950335
    s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok117) {
    // -79228162514264337593543950335
    s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
    // 52818775009509558395695966890
    s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
    int check = TEST_COMPARISON_FALSE;

    test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok118) {
    // 52818775009509558395695966890
    s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
    // -79228162514264337593543950335
    s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok119) {
    // -79228162514264337593543950335
    s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
    // -52818775009509558395695966890
    s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok120) {
    // -52818775009509558395695966890
    s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
    // -79228162514264337593543950335
    s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok121) {
    // -79228162514264337593543950335
    s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
    // 52818775009509558395695966891
    s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
    int check = TEST_COMPARISON_FALSE;

    test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok122) {
    // 52818775009509558395695966891
    s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
    // -79228162514264337593543950335
    s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok123) {
    // -79228162514264337593543950335
    s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
    // -52818775009509558395695966891
    s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok124) {
    // -52818775009509558395695966891
    s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
    // -79228162514264337593543950335
    s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok125) {
    // -79228162514264337593543950335
    s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
    // 5.281877500950955839569596690
    s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok126) {
    // 5.281877500950955839569596690
    s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
    // -79228162514264337593543950335
    s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok127) {
    // -79228162514264337593543950335
    s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
    // -5.281877500950955839569596690
    s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok128) {
    // -5.281877500950955839569596690
    s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
    // -79228162514264337593543950335
    s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok129) {
    // -79228162514264337593543950335
    s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
    // 5281877500950955839569596689
    s21_decimal decimal2 = {{0x11111111, 0x11111111, 0x11111111, 0x0}};
    int check = TEST_COMPARISON_FALSE;

    test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok130) {
    // 5281877500950955839569596689
    s21_decimal decimal1 = {{0x11111111, 0x11111111, 0x11111111, 0x0}};
    // -79228162514264337593543950335
    s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok131) {
    // -79228162514264337593543950335
    s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
    // -5281877500950955839569596689
    s21_decimal decimal2 = {{0x11111111, 0x11111111, 0x11111111, 0x80000000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok132) {
    // -5281877500950955839569596689
    s21_decimal decimal1 = {{0x11111111, 0x11111111, 0x11111111, 0x80000000}};
    // -79228162514264337593543950335
    s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok133) {
    // -79228162514264337593543950335
    s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
    // 5281877500950955839569596689.0
    s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x10000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok134) {
    // 5281877500950955839569596689.0
    s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x10000}};
    // -79228162514264337593543950335
    s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok135) {
    // -79228162514264337593543950335
    s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
    // -5281877500950955839569596689.0
    s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80010000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok136) {
    // -5281877500950955839569596689.0
    s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80010000}};
    // -79228162514264337593543950335
    s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok137) {
    // -79228162514264337593543950335
    s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
    // 7922816251426433759354395033
    s21_decimal decimal2 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
    int check = TEST_COMPARISON_FALSE;

    test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok138) {
    // 7922816251426433759354395033
    s21_decimal decimal1 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
    // -79228162514264337593543950335
    s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok139) {
    // -79228162514264337593543950335
    s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
    // -7922816251426433759354395033
    s21_decimal decimal2 = {{0x99999999, 0x99999999, 0x19999999, 0x80000000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok140) {
    // -7922816251426433759354395033
    s21_decimal decimal1 = {{0x99999999, 0x99999999, 0x19999999, 0x80000000}};
    // -79228162514264337593543950335
    s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok141) {
    // -79228162514264337593543950335
    s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
    // 7922816251426433759354395034
    s21_decimal decimal2 = {{0x9999999A, 0x99999999, 0x19999999, 0x0}};
    int check = TEST_COMPARISON_FALSE;

    test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok142) {
    // 7922816251426433759354395034
    s21_decimal decimal1 = {{0x9999999A, 0x99999999, 0x19999999, 0x0}};
    // -79228162514264337593543950335
    s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok143) {
    // -79228162514264337593543950335
    s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
    // -7922816251426433759354395034
    s21_decimal decimal2 = {{0x9999999A, 0x99999999, 0x19999999, 0x80000000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok144) {
    // -7922816251426433759354395034
    s21_decimal decimal1 = {{0x9999999A, 0x99999999, 0x19999999, 0x80000000}};
    // -79228162514264337593543950335
    s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok145) {
    // -79228162514264337593543950335
    s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
    // 1.2297829382473034409
    s21_decimal decimal2 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x130000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok146) {
    // 1.2297829382473034409
    s21_decimal decimal1 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x130000}};
    // -79228162514264337593543950335
    s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok147) {
    // -79228162514264337593543950335
    s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
    // -1.2297829382473034409
    s21_decimal decimal2 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x80130000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok148) {
    // -1.2297829382473034409
    s21_decimal decimal1 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x80130000}};
    // -79228162514264337593543950335
    s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok149) {
    // -79228162514264337593543950335
    s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
    // 1.2297829382473034410
    s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x130000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok150) {
    // 1.2297829382473034410
    s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x130000}};
    // -79228162514264337593543950335
    s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok151) {
    // -79228162514264337593543950335
    s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
    // -1.2297829382473034410
    s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80130000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok152) {
    // -1.2297829382473034410
    s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80130000}};
    // -79228162514264337593543950335
    s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok153) {
    // -79228162514264337593543950335
    s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
    // 1.2297829382473034411
    s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x130000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok154) {
    // 1.2297829382473034411
    s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x130000}};
    // -79228162514264337593543950335
    s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok155) {
    // -79228162514264337593543950335
    s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
    // -1.2297829382473034411
    s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x80130000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok156) {
    // -1.2297829382473034411
    s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x80130000}};
    // -79228162514264337593543950335
    s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok157) {
    // -79228162514264337593543950335
    s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
    // 1
    s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x0}};
    int check = TEST_COMPARISON_FALSE;

    test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok158) {
    // 1
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x0}};
    // -79228162514264337593543950335
    s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok159) {
    // -79228162514264337593543950335
    s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
    // -1
    s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x80000000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok160) {
    // -1
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80000000}};
    // -79228162514264337593543950335
    s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok161) {
    // -79228162514264337593543950335
    s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
    // 1.0
    s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x10000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok162) {
    // 1.0
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x10000}};
    // -79228162514264337593543950335
    s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok163) {
    // -79228162514264337593543950335
    s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
    // -1.0
    s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x80010000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok164) {
    // -1.0
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x80010000}};
    // -79228162514264337593543950335
    s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok165) {
    // -79228162514264337593543950335
    s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
    // 1.22
    s21_decimal decimal2 = {{0x7A, 0x0, 0x0, 0x20000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok166) {
    // 1.22
    s21_decimal decimal1 = {{0x7A, 0x0, 0x0, 0x20000}};
    // -79228162514264337593543950335
    s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok167) {
    // -79228162514264337593543950335
    s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
    // -1.22
    s21_decimal decimal2 = {{0x7A, 0x0, 0x0, 0x80020000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok168) {
    // -1.22
    s21_decimal decimal1 = {{0x7A, 0x0, 0x0, 0x80020000}};
    // -79228162514264337593543950335
    s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4002) {
    // 0.9999999999999999999999999999
    s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    // -1431655765.00000
    s21_decimal decimal2 = {{0x5554D320, 0x8235, 0x0, 0x80050000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4003) {
    // -1431655765.00000
    s21_decimal decimal1 = {{0x5554D320, 0x8235, 0x0, 0x80050000}};
    // -0.9999999999999999999999999999
    s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x801C0000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4004) {
    // -0.9999999999999999999999999999
    s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x801C0000}};
    // -1431655765.00000
    s21_decimal decimal2 = {{0x5554D320, 0x8235, 0x0, 0x80050000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4005) {
    // -1431655765.00000
    s21_decimal decimal1 = {{0x5554D320, 0x8235, 0x0, 0x80050000}};
    // 0.0000000000000000000000000001
    s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x1C0000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4006) {
    // 0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
    // -1431655765.00000
    s21_decimal decimal2 = {{0x5554D320, 0x8235, 0x0, 0x80050000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4007) {
    // -1431655765.00000
    s21_decimal decimal1 = {{0x5554D320, 0x8235, 0x0, 0x80050000}};
    // -0.0000000000000000000000000001
    s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x801C0000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4008) {
    // -0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x801C0000}};
    // -1431655765.00000
    s21_decimal decimal2 = {{0x5554D320, 0x8235, 0x0, 0x80050000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4009) {
    // -1431655765.00000
    s21_decimal decimal1 = {{0x5554D320, 0x8235, 0x0, 0x80050000}};
    // 0
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x0}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4010) {
    // 0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
    // -1431655765.00000
    s21_decimal decimal2 = {{0x5554D320, 0x8235, 0x0, 0x80050000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4011) {
    // -1431655765.00000
    s21_decimal decimal1 = {{0x5554D320, 0x8235, 0x0, 0x80050000}};
    // -0
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x80000000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4012) {
    // -0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x80000000}};
    // -1431655765.00000
    s21_decimal decimal2 = {{0x5554D320, 0x8235, 0x0, 0x80050000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4013) {
    // -1431655765.00000
    s21_decimal decimal1 = {{0x5554D320, 0x8235, 0x0, 0x80050000}};
    // -0.00000000000000
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x800E0000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4014) {
    // -0.00000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x800E0000}};
    // -1431655765.00000
    s21_decimal decimal2 = {{0x5554D320, 0x8235, 0x0, 0x80050000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4015) {
    // -1431655765.00000
    s21_decimal decimal1 = {{0x5554D320, 0x8235, 0x0, 0x80050000}};
    // 0.00000000000000
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0xE0000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4016) {
    // 0.00000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0xE0000}};
    // -1431655765.00000
    s21_decimal decimal2 = {{0x5554D320, 0x8235, 0x0, 0x80050000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4017) {
    // -1431655765.00000
    s21_decimal decimal1 = {{0x5554D320, 0x8235, 0x0, 0x80050000}};
    // -0.0000000000000000000000000000
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x801C0000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4018) {
    // -0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x801C0000}};
    // -1431655765.00000
    s21_decimal decimal2 = {{0x5554D320, 0x8235, 0x0, 0x80050000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4019) {
    // -1431655765.00000
    s21_decimal decimal1 = {{0x5554D320, 0x8235, 0x0, 0x80050000}};
    // 0.0000000000000000000000000000
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x1C0000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4020) {
    // 0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
    // -1431655765.00000
    s21_decimal decimal2 = {{0x5554D320, 0x8235, 0x0, 0x80050000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4021) {
    // -1431655765.00000
    s21_decimal decimal1 = {{0x5554D320, 0x8235, 0x0, 0x80050000}};
    // -4.7074769154693434325056864883
    s21_decimal decimal2 = {{0xCEDBC273, 0x56AF422B, 0x981B561D, 0x801C0000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4022) {
    // -4.7074769154693434325056864883
    s21_decimal decimal1 = {{0xCEDBC273, 0x56AF422B, 0x981B561D, 0x801C0000}};
    // -1431655765.00000
    s21_decimal decimal2 = {{0x5554D320, 0x8235, 0x0, 0x80050000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4023) {
    // -1431655765.00000
    s21_decimal decimal1 = {{0x5554D320, 0x8235, 0x0, 0x80050000}};
    // 4.7074769154693434325056864883
    s21_decimal decimal2 = {{0xCEDBC273, 0x56AF422B, 0x981B561D, 0x1C0000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4024) {
    // 4.7074769154693434325056864883
    s21_decimal decimal1 = {{0xCEDBC273, 0x56AF422B, 0x981B561D, 0x1C0000}};
    // -1431655765.00000
    s21_decimal decimal2 = {{0x5554D320, 0x8235, 0x0, 0x80050000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4025) {
    // -1431655765.00000
    s21_decimal decimal1 = {{0x5554D320, 0x8235, 0x0, 0x80050000}};
    // 24054676222594164633554651068
    s21_decimal decimal2 = {{0xCE5807BC, 0xF2D773B6, 0x4DB98FD2, 0x0}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4026) {
    // 24054676222594164633554651068
    s21_decimal decimal1 = {{0xCE5807BC, 0xF2D773B6, 0x4DB98FD2, 0x0}};
    // -1431655765.00000
    s21_decimal decimal2 = {{0x5554D320, 0x8235, 0x0, 0x80050000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4027) {
    // -1431655765.00000
    s21_decimal decimal1 = {{0x5554D320, 0x8235, 0x0, 0x80050000}};
    // -24054676222594164633554651068
    s21_decimal decimal2 = {{0xCE5807BC, 0xF2D773B6, 0x4DB98FD2, 0x80000000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4028) {
    // -24054676222594164633554651068
    s21_decimal decimal1 = {{0xCE5807BC, 0xF2D773B6, 0x4DB98FD2, 0x80000000}};
    // -1431655765.00000
    s21_decimal decimal2 = {{0x5554D320, 0x8235, 0x0, 0x80050000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4029) {
    // -1431655765.00000
    s21_decimal decimal1 = {{0x5554D320, 0x8235, 0x0, 0x80050000}};
    // 30667538544853.855676101018067
    s21_decimal decimal2 = {{0xE333C1D3, 0xC173E715, 0x631797E3, 0xF0000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4030) {
    // 30667538544853.855676101018067
    s21_decimal decimal1 = {{0xE333C1D3, 0xC173E715, 0x631797E3, 0xF0000}};
    // -1431655765.00000
    s21_decimal decimal2 = {{0x5554D320, 0x8235, 0x0, 0x80050000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4031) {
    // -1431655765.00000
    s21_decimal decimal1 = {{0x5554D320, 0x8235, 0x0, 0x80050000}};
    // -30667538544853.855676101018067
    s21_decimal decimal2 = {{0xE333C1D3, 0xC173E715, 0x631797E3, 0x800F0000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4032) {
    // -30667538544853.855676101018067
    s21_decimal decimal1 = {{0xE333C1D3, 0xC173E715, 0x631797E3, 0x800F0000}};
    // -1431655765.00000
    s21_decimal decimal2 = {{0x5554D320, 0x8235, 0x0, 0x80050000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4033) {
    // 1431655765.000000000000000001
    s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
    // 79228162514264337593543950335
    s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4034) {
    // 79228162514264337593543950335
    s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
    // 1431655765.000000000000000001
    s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4035) {
    // 1431655765.000000000000000001
    s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
    // -79228162514264337593543950335
    s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4036) {
    // -79228162514264337593543950335
    s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
    // 1431655765.000000000000000001
    s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4037) {
    // 1431655765.000000000000000001
    s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
    // 52818775009509558395695966890
    s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4038) {
    // 52818775009509558395695966890
    s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
    // 1431655765.000000000000000001
    s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4039) {
    // 1431655765.000000000000000001
    s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
    // -52818775009509558395695966890
    s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4040) {
    // -52818775009509558395695966890
    s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
    // 1431655765.000000000000000001
    s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4041) {
    // 1431655765.000000000000000001
    s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
    // 52818775009509558395695966891
    s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4042) {
    // 52818775009509558395695966891
    s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
    // 1431655765.000000000000000001
    s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4043) {
    // 1431655765.000000000000000001
    s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
    // -52818775009509558395695966891
    s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4044) {
    // -52818775009509558395695966891
    s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
    // 1431655765.000000000000000001
    s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4045) {
    // 1431655765.000000000000000001
    s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
    // 5.281877500950955839569596690
    s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4046) {
    // 5.281877500950955839569596690
    s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
    // 1431655765.000000000000000001
    s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4047) {
    // 1431655765.000000000000000001
    s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
    // -5.281877500950955839569596690
    s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4048) {
    // -5.281877500950955839569596690
    s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
    // 1431655765.000000000000000001
    s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4049) {
    // 1431655765.000000000000000001
    s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
    // 5281877500950955839569596689
    s21_decimal decimal2 = {{0x11111111, 0x11111111, 0x11111111, 0x0}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4050) {
    // 5281877500950955839569596689
    s21_decimal decimal1 = {{0x11111111, 0x11111111, 0x11111111, 0x0}};
    // 1431655765.000000000000000001
    s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4051) {
    // 1431655765.000000000000000001
    s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
    // -5281877500950955839569596689
    s21_decimal decimal2 = {{0x11111111, 0x11111111, 0x11111111, 0x80000000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4052) {
    // -5281877500950955839569596689
    s21_decimal decimal1 = {{0x11111111, 0x11111111, 0x11111111, 0x80000000}};
    // 1431655765.000000000000000001
    s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4053) {
    // 1431655765.000000000000000001
    s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
    // 5281877500950955839569596689.0
    s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x10000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4054) {
    // 5281877500950955839569596689.0
    s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x10000}};
    // 1431655765.000000000000000001
    s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4055) {
    // 1431655765.000000000000000001
    s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
    // -5281877500950955839569596689.0
    s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80010000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4056) {
    // -5281877500950955839569596689.0
    s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80010000}};
    // 1431655765.000000000000000001
    s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4057) {
    // 1431655765.000000000000000001
    s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
    // 7922816251426433759354395033
    s21_decimal decimal2 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4058) {
    // 7922816251426433759354395033
    s21_decimal decimal1 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
    // 1431655765.000000000000000001
    s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4059) {
    // 1431655765.000000000000000001
    s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
    // -7922816251426433759354395033
    s21_decimal decimal2 = {{0x99999999, 0x99999999, 0x19999999, 0x80000000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4060) {
    // -7922816251426433759354395033
    s21_decimal decimal1 = {{0x99999999, 0x99999999, 0x19999999, 0x80000000}};
    // 1431655765.000000000000000001
    s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4061) {
    // 1431655765.000000000000000001
    s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
    // 7922816251426433759354395034
    s21_decimal decimal2 = {{0x9999999A, 0x99999999, 0x19999999, 0x0}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4062) {
    // 7922816251426433759354395034
    s21_decimal decimal1 = {{0x9999999A, 0x99999999, 0x19999999, 0x0}};
    // 1431655765.000000000000000001
    s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4063) {
    // 1431655765.000000000000000001
    s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
    // -7922816251426433759354395034
    s21_decimal decimal2 = {{0x9999999A, 0x99999999, 0x19999999, 0x80000000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4064) {
    // -7922816251426433759354395034
    s21_decimal decimal1 = {{0x9999999A, 0x99999999, 0x19999999, 0x80000000}};
    // 1431655765.000000000000000001
    s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4065) {
    // 1431655765.000000000000000001
    s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
    // 1.2297829382473034409
    s21_decimal decimal2 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x130000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4066) {
    // 1.2297829382473034409
    s21_decimal decimal1 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x130000}};
    // 1431655765.000000000000000001
    s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4067) {
    // 1431655765.000000000000000001
    s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
    // -1.2297829382473034409
    s21_decimal decimal2 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x80130000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4068) {
    // -1.2297829382473034409
    s21_decimal decimal1 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x80130000}};
    // 1431655765.000000000000000001
    s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4069) {
    // 1431655765.000000000000000001
    s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
    // 1.2297829382473034410
    s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x130000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4070) {
    // 1.2297829382473034410
    s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x130000}};
    // 1431655765.000000000000000001
    s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4071) {
    // 1431655765.000000000000000001
    s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
    // -1.2297829382473034410
    s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80130000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4072) {
    // -1.2297829382473034410
    s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80130000}};
    // 1431655765.000000000000000001
    s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4073) {
    // 1431655765.000000000000000001
    s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
    // 1.2297829382473034411
    s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x130000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4074) {
    // 1.2297829382473034411
    s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x130000}};
    // 1431655765.000000000000000001
    s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4075) {
    // 1431655765.000000000000000001
    s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
    // -1.2297829382473034411
    s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x80130000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4076) {
    // -1.2297829382473034411
    s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x80130000}};
    // 1431655765.000000000000000001
    s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4077) {
    // 1431655765.000000000000000001
    s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
    // 1
    s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x0}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4078) {
    // 1
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x0}};
    // 1431655765.000000000000000001
    s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4079) {
    // 1431655765.000000000000000001
    s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
    // -1
    s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x80000000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4080) {
    // -1
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80000000}};
    // 1431655765.000000000000000001
    s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4081) {
    // 1431655765.000000000000000001
    s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
    // 1.0
    s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x10000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4082) {
    // 1.0
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x10000}};
    // 1431655765.000000000000000001
    s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4083) {
    // 1431655765.000000000000000001
    s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
    // -1.0
    s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x80010000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4084) {
    // -1.0
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x80010000}};
    // 1431655765.000000000000000001
    s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4085) {
    // 1431655765.000000000000000001
    s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
    // 1.22
    s21_decimal decimal2 = {{0x7A, 0x0, 0x0, 0x20000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4086) {
    // 1.22
    s21_decimal decimal1 = {{0x7A, 0x0, 0x0, 0x20000}};
    // 1431655765.000000000000000001
    s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4087) {
    // 1431655765.000000000000000001
    s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
    // -1.22
    s21_decimal decimal2 = {{0x7A, 0x0, 0x0, 0x80020000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4088) {
    // -1.22
    s21_decimal decimal1 = {{0x7A, 0x0, 0x0, 0x80020000}};
    // 1431655765.000000000000000001
    s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4089) {
    // 1431655765.000000000000000001
    s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
    // 1.230001
    s21_decimal decimal2 = {{0x12C4B1, 0x0, 0x0, 0x60000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4090) {
    // 1.230001
    s21_decimal decimal1 = {{0x12C4B1, 0x0, 0x0, 0x60000}};
    // 1431655765.000000000000000001
    s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4091) {
    // 1431655765.000000000000000001
    s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
    // -1.230001
    s21_decimal decimal2 = {{0x12C4B1, 0x0, 0x0, 0x80060000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4092) {
    // -1.230001
    s21_decimal decimal1 = {{0x12C4B1, 0x0, 0x0, 0x80060000}};
    // 1431655765.000000000000000001
    s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4093) {
    // 1431655765.000000000000000001
    s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
    // 1.23000
    s21_decimal decimal2 = {{0x1E078, 0x0, 0x0, 0x50000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4094) {
    // 1.23000
    s21_decimal decimal1 = {{0x1E078, 0x0, 0x0, 0x50000}};
    // 1431655765.000000000000000001
    s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4095) {
    // 1431655765.000000000000000001
    s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
    // -1.23000
    s21_decimal decimal2 = {{0x1E078, 0x0, 0x0, 0x80050000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4096) {
    // -1.23000
    s21_decimal decimal1 = {{0x1E078, 0x0, 0x0, 0x80050000}};
    // 1431655765.000000000000000001
    s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4097) {
    // 1431655765.000000000000000001
    s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
    // 1431655765
    s21_decimal decimal2 = {{0x55555555, 0x0, 0x0, 0x0}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4098) {
    // 1431655765
    s21_decimal decimal1 = {{0x55555555, 0x0, 0x0, 0x0}};
    // 1431655765.000000000000000001
    s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4099) {
    // 1431655765.000000000000000001
    s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
    // -1431655765
    s21_decimal decimal2 = {{0x55555555, 0x0, 0x0, 0x80000000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4100) {
    // -1431655765
    s21_decimal decimal1 = {{0x55555555, 0x0, 0x0, 0x80000000}};
    // 1431655765.000000000000000001
    s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4101) {
    // 1431655765.000000000000000001
    s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
    // 1431655765.00000
    s21_decimal decimal2 = {{0x5554D320, 0x8235, 0x0, 0x50000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4102) {
    // 1431655765.00000
    s21_decimal decimal1 = {{0x5554D320, 0x8235, 0x0, 0x50000}};
    // 1431655765.000000000000000001
    s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4103) {
    // 1431655765.000000000000000001
    s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
    // -1431655765.00000
    s21_decimal decimal2 = {{0x5554D320, 0x8235, 0x0, 0x80050000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4104) {
    // -1431655765.00000
    s21_decimal decimal1 = {{0x5554D320, 0x8235, 0x0, 0x80050000}};
    // 1431655765.000000000000000001
    s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4105) {
    // 1431655765.000000000000000001
    s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
    // 1431655765.000000000000000001
    s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4106) {
    // 1431655765.000000000000000001
    s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
    // 1431655765.000000000000000001
    s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4107) {
    // 1431655765.000000000000000001
    s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
    // -1431655765.000000000000000001
    s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x80120000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4108) {
    // -1431655765.000000000000000001
    s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x80120000}};
    // 1431655765.000000000000000001
    s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4109) {
    // 1431655765.000000000000000001
    s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
    // 1431655764.999999999999999999
    s21_decimal decimal2 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x120000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4110) {
    // 1431655764.999999999999999999
    s21_decimal decimal1 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x120000}};
    // 1431655765.000000000000000001
    s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4111) {
    // 1431655765.000000000000000001
    s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
    // -1431655764.999999999999999999
    s21_decimal decimal2 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x80120000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4112) {
    // -1431655764.999999999999999999
    s21_decimal decimal1 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x80120000}};
    // 1431655765.000000000000000001
    s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4113) {
    // 1431655765.000000000000000001
    s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
    // 0.9999999999999999999999999999
    s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4114) {
    // 0.9999999999999999999999999999
    s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    // 1431655765.000000000000000001
    s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4115) {
    // 1431655765.000000000000000001
    s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
    // -0.9999999999999999999999999999
    s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x801C0000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4116) {
    // -0.9999999999999999999999999999
    s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x801C0000}};
    // 1431655765.000000000000000001
    s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4117) {
    // 1431655765.000000000000000001
    s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
    // 0.0000000000000000000000000001
    s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x1C0000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4118) {
    // 0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
    // 1431655765.000000000000000001
    s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4119) {
    // 1431655765.000000000000000001
    s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
    // -0.0000000000000000000000000001
    s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x801C0000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4120) {
    // -0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x801C0000}};
    // 1431655765.000000000000000001
    s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4121) {
    // 1431655765.000000000000000001
    s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
    // 0
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x0}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4122) {
    // 0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
    // 1431655765.000000000000000001
    s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4123) {
    // 1431655765.000000000000000001
    s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
    // -0
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x80000000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4124) {
    // -0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x80000000}};
    // 1431655765.000000000000000001
    s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4125) {
    // 1431655765.000000000000000001
    s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
    // -0.00000000000000
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x800E0000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4126) {
    // -0.00000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x800E0000}};
    // 1431655765.000000000000000001
    s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4127) {
    // 1431655765.000000000000000001
    s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
    // 0.00000000000000
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0xE0000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4128) {
    // 0.00000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0xE0000}};
    // 1431655765.000000000000000001
    s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4129) {
    // 1431655765.000000000000000001
    s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
    // -0.0000000000000000000000000000
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x801C0000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4130) {
    // -0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x801C0000}};
    // 1431655765.000000000000000001
    s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4131) {
    // 1431655765.000000000000000001
    s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
    // 0.0000000000000000000000000000
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x1C0000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4132) {
    // 0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
    // 1431655765.000000000000000001
    s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4133) {
    // 1431655765.000000000000000001
    s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
    // -4.7074769154693434325056864883
    s21_decimal decimal2 = {{0xCEDBC273, 0x56AF422B, 0x981B561D, 0x801C0000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4134) {
    // -4.7074769154693434325056864883
    s21_decimal decimal1 = {{0xCEDBC273, 0x56AF422B, 0x981B561D, 0x801C0000}};
    // 1431655765.000000000000000001
    s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4135) {
    // 1431655765.000000000000000001
    s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
    // 4.7074769154693434325056864883
    s21_decimal decimal2 = {{0xCEDBC273, 0x56AF422B, 0x981B561D, 0x1C0000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4136) {
    // 4.7074769154693434325056864883
    s21_decimal decimal1 = {{0xCEDBC273, 0x56AF422B, 0x981B561D, 0x1C0000}};
    // 1431655765.000000000000000001
    s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4137) {
    // 1431655765.000000000000000001
    s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
    // 24054676222594164633554651068
    s21_decimal decimal2 = {{0xCE5807BC, 0xF2D773B6, 0x4DB98FD2, 0x0}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4138) {
    // 24054676222594164633554651068
    s21_decimal decimal1 = {{0xCE5807BC, 0xF2D773B6, 0x4DB98FD2, 0x0}};
    // 1431655765.000000000000000001
    s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4139) {
    // 1431655765.000000000000000001
    s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
    // -24054676222594164633554651068
    s21_decimal decimal2 = {{0xCE5807BC, 0xF2D773B6, 0x4DB98FD2, 0x80000000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4140) {
    // -24054676222594164633554651068
    s21_decimal decimal1 = {{0xCE5807BC, 0xF2D773B6, 0x4DB98FD2, 0x80000000}};
    // 1431655765.000000000000000001
    s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4141) {
    // 1431655765.000000000000000001
    s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
    // 30667538544853.855676101018067
    s21_decimal decimal2 = {{0xE333C1D3, 0xC173E715, 0x631797E3, 0xF0000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4142) {
    // 30667538544853.855676101018067
    s21_decimal decimal1 = {{0xE333C1D3, 0xC173E715, 0x631797E3, 0xF0000}};
    // 1431655765.000000000000000001
    s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4143) {
    // 1431655765.000000000000000001
    s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
    // -30667538544853.855676101018067
    s21_decimal decimal2 = {{0xE333C1D3, 0xC173E715, 0x631797E3, 0x800F0000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4144) {
    // -30667538544853.855676101018067
    s21_decimal decimal1 = {{0xE333C1D3, 0xC173E715, 0x631797E3, 0x800F0000}};
    // 1431655765.000000000000000001
    s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4145) {
    // -1431655765.000000000000000001
    s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x80120000}};
    // 79228162514264337593543950335
    s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4146) {
    // 79228162514264337593543950335
    s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
    // -1431655765.000000000000000001
    s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x80120000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4147) {
    // -1431655765.000000000000000001
    s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x80120000}};
    // -79228162514264337593543950335
    s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4148) {
    // -79228162514264337593543950335
    s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
    // -1431655765.000000000000000001
    s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x80120000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4149) {
    // -1431655765.000000000000000001
    s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x80120000}};
    // 52818775009509558395695966890
    s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4150) {
    // 52818775009509558395695966890
    s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
    // -1431655765.000000000000000001
    s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x80120000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4151) {
    // -1431655765.000000000000000001
    s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x80120000}};
    // -52818775009509558395695966890
    s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4152) {
    // -52818775009509558395695966890
    s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
    // -1431655765.000000000000000001
    s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x80120000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4153) {
    // -1431655765.000000000000000001
    s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x80120000}};
    // 52818775009509558395695966891
    s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok5000) {
    // -1431655765.00000
    s21_decimal decimal1 = {{0x5554D320, 0x8235, 0x0, 0x80050000}};
    // 0
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x0}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok5001) {
    // 0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
    // 1431655765.000000000000000001
    s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok5002) {
    // 1431655765.000000000000000001
    s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
    // 0
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x0}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok5003) {
    // 0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
    // -1431655765.000000000000000001
    s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x80120000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok5004) {
    // -1431655765.000000000000000001
    s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x80120000}};
    // 0
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x0}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok5005) {
    // 0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
    // 1431655764.999999999999999999
    s21_decimal decimal2 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x120000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok5006) {
    // 1431655764.999999999999999999
    s21_decimal decimal1 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x120000}};
    // 0
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x0}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok5007) {
    // 0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
    // -1431655764.999999999999999999
    s21_decimal decimal2 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x80120000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok5008) {
    // -1431655764.999999999999999999
    s21_decimal decimal1 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x80120000}};
    // 0
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x0}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok5009) {
    // 0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
    // 0.9999999999999999999999999999
    s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok5010) {
    // 0.9999999999999999999999999999
    s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    // 0
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x0}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok5011) {
    // 0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
    // -0.9999999999999999999999999999
    s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x801C0000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok5012) {
    // -0.9999999999999999999999999999
    s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x801C0000}};
    // 0
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x0}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok5013) {
    // 0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
    // 0.0000000000000000000000000001
    s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x1C0000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok5014) {
    // 0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
    // 0
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x0}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok5015) {
    // 0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
    // -0.0000000000000000000000000001
    s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x801C0000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok5016) {
    // -0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x801C0000}};
    // 0
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x0}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok5017) {
    // 0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
    // 0
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x0}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok5018) {
    // 0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
    // 0
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x0}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok5019) {
    // 0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
    // -0
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x80000000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok5020) {
    // -0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x80000000}};
    // 0
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x0}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok5021) {
    // 0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
    // -0.00000000000000
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x800E0000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok5022) {
    // -0.00000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x800E0000}};
    // 0
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x0}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok5023) {
    // 0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
    // 0.00000000000000
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0xE0000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok5024) {
    // 0.00000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0xE0000}};
    // 0
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x0}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok5025) {
    // 0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
    // -0.0000000000000000000000000000
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x801C0000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok5026) {
    // -0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x801C0000}};
    // 0
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x0}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok5027) {
    // 0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
    // 0.0000000000000000000000000000
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x1C0000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok5028) {
    // 0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
    // 0
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x0}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok5029) {
    // 0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
    // -58391.31040040850204230282817
    s21_decimal decimal2 = {{0x9AA5EE41, 0xF3B5B959, 0x12DE0417, 0x80170000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok5030) {
    // -58391.31040040850204230282817
    s21_decimal decimal1 = {{0x9AA5EE41, 0xF3B5B959, 0x12DE0417, 0x80170000}};
    // 0
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x0}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok5031) {
    // 0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
    // 58391.31040040850204230282817
    s21_decimal decimal2 = {{0x9AA5EE41, 0xF3B5B959, 0x12DE0417, 0x170000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok5032) {
    // 58391.31040040850204230282817
    s21_decimal decimal1 = {{0x9AA5EE41, 0xF3B5B959, 0x12DE0417, 0x170000}};
    // 0
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x0}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok5033) {
    // 0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
    // 5596930204637261591.6377658369
    s21_decimal decimal2 = {{0x9B10D401, 0x8F08DC74, 0xB4D8B8B7, 0xA0000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok5034) {
    // 5596930204637261591.6377658369
    s21_decimal decimal1 = {{0x9B10D401, 0x8F08DC74, 0xB4D8B8B7, 0xA0000}};
    // 0
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x0}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok5035) {
    // 0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
    // -5596930204637261591.6377658369
    s21_decimal decimal2 = {{0x9B10D401, 0x8F08DC74, 0xB4D8B8B7, 0x800A0000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok5036) {
    // -5596930204637261591.6377658369
    s21_decimal decimal1 = {{0x9B10D401, 0x8F08DC74, 0xB4D8B8B7, 0x800A0000}};
    // 0
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x0}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok5037) {
    // 0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
    // 47209772988309285293.155713691
    s21_decimal decimal2 = {{0x4A3C829B, 0xD2D8CC92, 0x988B0249, 0x90000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok5038) {
    // 47209772988309285293.155713691
    s21_decimal decimal1 = {{0x4A3C829B, 0xD2D8CC92, 0x988B0249, 0x90000}};
    // 0
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x0}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok5039) {
    // 0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
    // -47209772988309285293.155713691
    s21_decimal decimal2 = {{0x4A3C829B, 0xD2D8CC92, 0x988B0249, 0x80090000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok5040) {
    // -47209772988309285293.155713691
    s21_decimal decimal1 = {{0x4A3C829B, 0xD2D8CC92, 0x988B0249, 0x80090000}};
    // 0
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x0}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok5041) {
    // -0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x80000000}};
    // 79228162514264337593543950335
    s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok5042) {
    // 79228162514264337593543950335
    s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
    // -0
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x80000000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok5043) {
    // -0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x80000000}};
    // -79228162514264337593543950335
    s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok5044) {
    // -79228162514264337593543950335
    s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
    // -0
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x80000000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok5045) {
    // -0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x80000000}};
    // 52818775009509558395695966890
    s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok5046) {
    // 52818775009509558395695966890
    s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
    // -0
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x80000000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok5047) {
    // -0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x80000000}};
    // -52818775009509558395695966890
    s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok5048) {
    // -52818775009509558395695966890
    s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
    // -0
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x80000000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok5049) {
    // -0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x80000000}};
    // 52818775009509558395695966891
    s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok5050) {
    // 52818775009509558395695966891
    s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
    // -0
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x80000000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok5051) {
    // -0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x80000000}};
    // -52818775009509558395695966891
    s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok5052) {
    // -52818775009509558395695966891
    s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
    // -0
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x80000000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok5053) {
    // -0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x80000000}};
    // 5.281877500950955839569596690
    s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok5054) {
    // 5.281877500950955839569596690
    s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
    // -0
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x80000000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok5055) {
    // -0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x80000000}};
    // -5.281877500950955839569596690
    s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok5056) {
    // -5.281877500950955839569596690
    s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
    // -0
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x80000000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok5057) {
    // -0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x80000000}};
    // 5281877500950955839569596689
    s21_decimal decimal2 = {{0x11111111, 0x11111111, 0x11111111, 0x0}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok5058) {
    // 5281877500950955839569596689
    s21_decimal decimal1 = {{0x11111111, 0x11111111, 0x11111111, 0x0}};
    // -0
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x80000000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok5059) {
    // -0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x80000000}};
    // -5281877500950955839569596689
    s21_decimal decimal2 = {{0x11111111, 0x11111111, 0x11111111, 0x80000000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok5060) {
    // -5281877500950955839569596689
    s21_decimal decimal1 = {{0x11111111, 0x11111111, 0x11111111, 0x80000000}};
    // -0
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x80000000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok5061) {
    // -0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x80000000}};
    // 5281877500950955839569596689.0
    s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x10000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok5062) {
    // 5281877500950955839569596689.0
    s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x10000}};
    // -0
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x80000000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok5063) {
    // -0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x80000000}};
    // -5281877500950955839569596689.0
    s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80010000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok5064) {
    // -5281877500950955839569596689.0
    s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80010000}};
    // -0
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x80000000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok5065) {
    // -0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x80000000}};
    // 7922816251426433759354395033
    s21_decimal decimal2 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok5066) {
    // 7922816251426433759354395033
    s21_decimal decimal1 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
    // -0
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x80000000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok5067) {
    // -0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x80000000}};
    // -7922816251426433759354395033
    s21_decimal decimal2 = {{0x99999999, 0x99999999, 0x19999999, 0x80000000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok5068) {
    // -7922816251426433759354395033
    s21_decimal decimal1 = {{0x99999999, 0x99999999, 0x19999999, 0x80000000}};
    // -0
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x80000000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok5069) {
    // -0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x80000000}};
    // 7922816251426433759354395034
    s21_decimal decimal2 = {{0x9999999A, 0x99999999, 0x19999999, 0x0}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok5070) {
    // 7922816251426433759354395034
    s21_decimal decimal1 = {{0x9999999A, 0x99999999, 0x19999999, 0x0}};
    // -0
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x80000000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok5071) {
    // -0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x80000000}};
    // -7922816251426433759354395034
    s21_decimal decimal2 = {{0x9999999A, 0x99999999, 0x19999999, 0x80000000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok5072) {
    // -7922816251426433759354395034
    s21_decimal decimal1 = {{0x9999999A, 0x99999999, 0x19999999, 0x80000000}};
    // -0
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x80000000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok5073) {
    // -0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x80000000}};
    // 1.2297829382473034409
    s21_decimal decimal2 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x130000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok5074) {
    // 1.2297829382473034409
    s21_decimal decimal1 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x130000}};
    // -0
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x80000000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok5075) {
    // -0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x80000000}};
    // -1.2297829382473034409
    s21_decimal decimal2 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x80130000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok5076) {
    // -1.2297829382473034409
    s21_decimal decimal1 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x80130000}};
    // -0
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x80000000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok5077) {
    // -0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x80000000}};
    // 1.2297829382473034410
    s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x130000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok5078) {
    // 1.2297829382473034410
    s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x130000}};
    // -0
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x80000000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok5079) {
    // -0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x80000000}};
    // -1.2297829382473034410
    s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80130000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok5080) {
    // -1.2297829382473034410
    s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80130000}};
    // -0
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x80000000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok5081) {
    // -0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x80000000}};
    // 1.2297829382473034411
    s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x130000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok5082) {
    // 1.2297829382473034411
    s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x130000}};
    // -0
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x80000000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok5083) {
    // -0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x80000000}};
    // -1.2297829382473034411
    s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x80130000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok5084) {
    // -1.2297829382473034411
    s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x80130000}};
    // -0
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x80000000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok5085) {
    // -0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x80000000}};
    // 1
    s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x0}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok5086) {
    // 1
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x0}};
    // -0
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x80000000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok5087) {
    // -0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x80000000}};
    // -1
    s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x80000000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok5088) {
    // -1
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80000000}};
    // -0
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x80000000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok5089) {
    // -0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x80000000}};
    // 1.0
    s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x10000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok5090) {
    // 1.0
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x10000}};
    // -0
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x80000000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok5091) {
    // -0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x80000000}};
    // -1.0
    s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x80010000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok5092) {
    // -1.0
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x80010000}};
    // -0
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x80000000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok5093) {
    // -0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x80000000}};
    // 1.22
    s21_decimal decimal2 = {{0x7A, 0x0, 0x0, 0x20000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok5094) {
    // 1.22
    s21_decimal decimal1 = {{0x7A, 0x0, 0x0, 0x20000}};
    // -0
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x80000000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok5095) {
    // -0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x80000000}};
    // -1.22
    s21_decimal decimal2 = {{0x7A, 0x0, 0x0, 0x80020000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok5096) {
    // -1.22
    s21_decimal decimal1 = {{0x7A, 0x0, 0x0, 0x80020000}};
    // -0
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x80000000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok5097) {
    // -0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x80000000}};
    // 1.230001
    s21_decimal decimal2 = {{0x12C4B1, 0x0, 0x0, 0x60000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok5098) {
    // 1.230001
    s21_decimal decimal1 = {{0x12C4B1, 0x0, 0x0, 0x60000}};
    // -0
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x80000000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok5099) {
    // -0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x80000000}};
    // -1.230001
    s21_decimal decimal2 = {{0x12C4B1, 0x0, 0x0, 0x80060000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok5100) {
    // -1.230001
    s21_decimal decimal1 = {{0x12C4B1, 0x0, 0x0, 0x80060000}};
    // -0
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x80000000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok5101) {
    // -0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x80000000}};
    // 1.23000
    s21_decimal decimal2 = {{0x1E078, 0x0, 0x0, 0x50000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok5102) {
    // 1.23000
    s21_decimal decimal1 = {{0x1E078, 0x0, 0x0, 0x50000}};
    // -0
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x80000000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok5103) {
    // -0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x80000000}};
    // -1.23000
    s21_decimal decimal2 = {{0x1E078, 0x0, 0x0, 0x80050000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok5104) {
    // -1.23000
    s21_decimal decimal1 = {{0x1E078, 0x0, 0x0, 0x80050000}};
    // -0
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x80000000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok5105) {
    // -0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x80000000}};
    // 1431655765
    s21_decimal decimal2 = {{0x55555555, 0x0, 0x0, 0x0}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok5106) {
    // 1431655765
    s21_decimal decimal1 = {{0x55555555, 0x0, 0x0, 0x0}};
    // -0
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x80000000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok5107) {
    // -0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x80000000}};
    // -1431655765
    s21_decimal decimal2 = {{0x55555555, 0x0, 0x0, 0x80000000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok5108) {
    // -1431655765
    s21_decimal decimal1 = {{0x55555555, 0x0, 0x0, 0x80000000}};
    // -0
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x80000000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok5109) {
    // -0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x80000000}};
    // 1431655765.00000
    s21_decimal decimal2 = {{0x5554D320, 0x8235, 0x0, 0x50000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok4900) {
    // -0.9999999999999999999999999999
    s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x801C0000}};
    // -0.0000000000000000000000000001
    s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x801C0000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok4901) {
    // -0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x801C0000}};
    // 0.0000000000000000000000000001
    s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x1C0000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok4902) {
    // 0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
    // -0.0000000000000000000000000001
    s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x801C0000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok4903) {
    // -0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x801C0000}};
    // -0.0000000000000000000000000001
    s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x801C0000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok4904) {
    // -0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x801C0000}};
    // -0.0000000000000000000000000001
    s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x801C0000}};
    int check = TEST_COMPARISON_FALSE;

    test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok4905) {
    // -0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x801C0000}};
    // 0
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x0}};
    int check = TEST_COMPARISON_TRUE;

    test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok4906) {
    // 0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
    // -0.0000000000000000000000000001
    s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x801C0000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok4907) {
    // -0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x801C0000}};
    // -0
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x80000000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok4908) {
    // -0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x80000000}};
    // -0.0000000000000000000000000001
    s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x801C0000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok4909) {
    // -0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x801C0000}};
    // -0.00000000000000
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x800E0000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok4910) {
    // -0.00000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x800E0000}};
    // -0.0000000000000000000000000001
    s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x801C0000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok4911) {
    // -0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x801C0000}};
    // 0.00000000000000
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0xE0000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok4912) {
    // 0.00000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0xE0000}};
    // -0.0000000000000000000000000001
    s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x801C0000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok4913) {
    // -0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x801C0000}};
    // -0.0000000000000000000000000000
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x801C0000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok4914) {
    // -0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x801C0000}};
    // -0.0000000000000000000000000001
    s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x801C0000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok4915) {
    // -0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x801C0000}};
    // 0.0000000000000000000000000000
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x1C0000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok4916) {
    // 0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
    // -0.0000000000000000000000000001
    s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x801C0000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok4917) {
    // -0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x801C0000}};
    // 6267999556702909014823.458183
    s21_decimal decimal2 = {{0x488D587, 0xD365E6A2, 0x1440C488, 0x60000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok4918) {
    // 6267999556702909014823.458183
    s21_decimal decimal1 = {{0x488D587, 0xD365E6A2, 0x1440C488, 0x60000}};
    // -0.0000000000000000000000000001
    s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x801C0000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok4919) {
    // -0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x801C0000}};
    // -6267999556702909014823.458183
    s21_decimal decimal2 = {{0x488D587, 0xD365E6A2, 0x1440C488, 0x80060000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok4920) {
    // -6267999556702909014823.458183
    s21_decimal decimal1 = {{0x488D587, 0xD365E6A2, 0x1440C488, 0x80060000}};
    // -0.0000000000000000000000000001
    s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x801C0000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok4921) {
    // -0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x801C0000}};
    // -38277759856433.92884224284713
    s21_decimal decimal2 = {{0x3457D829, 0xF89B5A0D, 0xC5E4317, 0x800E0000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok4922) {
    // -38277759856433.92884224284713
    s21_decimal decimal1 = {{0x3457D829, 0xF89B5A0D, 0xC5E4317, 0x800E0000}};
    // -0.0000000000000000000000000001
    s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x801C0000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok4923) {
    // -0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x801C0000}};
    // 38277759856433.92884224284713
    s21_decimal decimal2 = {{0x3457D829, 0xF89B5A0D, 0xC5E4317, 0xE0000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok4924) {
    // 38277759856433.92884224284713
    s21_decimal decimal1 = {{0x3457D829, 0xF89B5A0D, 0xC5E4317, 0xE0000}};
    // -0.0000000000000000000000000001
    s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x801C0000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok4925) {
    // -0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x801C0000}};
    // -711.75276875911144204551509824
    s21_decimal decimal2 = {{0x29BED740, 0xCE56818A, 0xE5FACF22, 0x801A0000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok4926) {
    // -711.75276875911144204551509824
    s21_decimal decimal1 = {{0x29BED740, 0xCE56818A, 0xE5FACF22, 0x801A0000}};
    // -0.0000000000000000000000000001
    s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x801C0000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok4927) {
    // -0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x801C0000}};
    // 711.75276875911144204551509824
    s21_decimal decimal2 = {{0x29BED740, 0xCE56818A, 0xE5FACF22, 0x1A0000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok4928) {
    // 711.75276875911144204551509824
    s21_decimal decimal1 = {{0x29BED740, 0xCE56818A, 0xE5FACF22, 0x1A0000}};
    // -0.0000000000000000000000000001
    s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x801C0000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok4929) {
    // 0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
    // 79228162514264337593543950335
    s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
    int check = TEST_COMPARISON_TRUE;

    test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok4930) {
    // 79228162514264337593543950335
    s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
    // 0
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x0}};
    int check = TEST_COMPARISON_TRUE;

    test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok4931) {
    // 0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
    // -79228162514264337593543950335
    s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok4932) {
    // -79228162514264337593543950335
    s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
    // 0
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x0}};
    int check = TEST_COMPARISON_TRUE;

    test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok4933) {
    // 0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
    // 52818775009509558395695966890
    s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
    int check = TEST_COMPARISON_TRUE;

    test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok4934) {
    // 52818775009509558395695966890
    s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
    // 0
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x0}};
    int check = TEST_COMPARISON_TRUE;

    test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok4935) {
    // 0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
    // -52818775009509558395695966890
    s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok4936) {
    // -52818775009509558395695966890
    s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
    // 0
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x0}};
    int check = TEST_COMPARISON_TRUE;

    test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok4937) {
    // 0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
    // 52818775009509558395695966891
    s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
    int check = TEST_COMPARISON_TRUE;

    test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok4938) {
    // 52818775009509558395695966891
    s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
    // 0
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x0}};
    int check = TEST_COMPARISON_TRUE;

    test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok4939) {
    // 0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
    // -52818775009509558395695966891
    s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok4940) {
    // -52818775009509558395695966891
    s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
    // 0
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x0}};
    int check = TEST_COMPARISON_TRUE;

    test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok4941) {
    // 0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
    // 5.281877500950955839569596690
    s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok4942) {
    // 5.281877500950955839569596690
    s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
    // 0
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x0}};
    int check = TEST_COMPARISON_TRUE;

    test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok4943) {
    // 0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
    // -5.281877500950955839569596690
    s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok4944) {
    // -5.281877500950955839569596690
    s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
    // 0
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x0}};
    int check = TEST_COMPARISON_TRUE;

    test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok4945) {
    // 0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
    // 5281877500950955839569596689
    s21_decimal decimal2 = {{0x11111111, 0x11111111, 0x11111111, 0x0}};
    int check = TEST_COMPARISON_TRUE;

    test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok4946) {
    // 5281877500950955839569596689
    s21_decimal decimal1 = {{0x11111111, 0x11111111, 0x11111111, 0x0}};
    // 0
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x0}};
    int check = TEST_COMPARISON_TRUE;

    test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok4947) {
    // 0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
    // -5281877500950955839569596689
    s21_decimal decimal2 = {{0x11111111, 0x11111111, 0x11111111, 0x80000000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok4948) {
    // -5281877500950955839569596689
    s21_decimal decimal1 = {{0x11111111, 0x11111111, 0x11111111, 0x80000000}};
    // 0
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x0}};
    int check = TEST_COMPARISON_TRUE;

    test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok4949) {
    // 0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
    // 5281877500950955839569596689.0
    s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x10000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok4950) {
    // 5281877500950955839569596689.0
    s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x10000}};
    // 0
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x0}};
    int check = TEST_COMPARISON_TRUE;

    test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok4951) {
    // 0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
    // -5281877500950955839569596689.0
    s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80010000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok4952) {
    // -5281877500950955839569596689.0
    s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80010000}};
    // 0
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x0}};
    int check = TEST_COMPARISON_TRUE;

    test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok4953) {
    // 0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
    // 7922816251426433759354395033
    s21_decimal decimal2 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
    int check = TEST_COMPARISON_TRUE;

    test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok4954) {
    // 7922816251426433759354395033
    s21_decimal decimal1 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
    // 0
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x0}};
    int check = TEST_COMPARISON_TRUE;

    test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok4955) {
    // 0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
    // -7922816251426433759354395033
    s21_decimal decimal2 = {{0x99999999, 0x99999999, 0x19999999, 0x80000000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok4956) {
    // -7922816251426433759354395033
    s21_decimal decimal1 = {{0x99999999, 0x99999999, 0x19999999, 0x80000000}};
    // 0
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x0}};
    int check = TEST_COMPARISON_TRUE;

    test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok4957) {
    // 0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
    // 7922816251426433759354395034
    s21_decimal decimal2 = {{0x9999999A, 0x99999999, 0x19999999, 0x0}};
    int check = TEST_COMPARISON_TRUE;

    test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok4958) {
    // 7922816251426433759354395034
    s21_decimal decimal1 = {{0x9999999A, 0x99999999, 0x19999999, 0x0}};
    // 0
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x0}};
    int check = TEST_COMPARISON_TRUE;

    test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok4959) {
    // 0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
    // -7922816251426433759354395034
    s21_decimal decimal2 = {{0x9999999A, 0x99999999, 0x19999999, 0x80000000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok4960) {
    // -7922816251426433759354395034
    s21_decimal decimal1 = {{0x9999999A, 0x99999999, 0x19999999, 0x80000000}};
    // 0
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x0}};
    int check = TEST_COMPARISON_TRUE;

    test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok4961) {
    // 0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
    // 1.2297829382473034409
    s21_decimal decimal2 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x130000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok4962) {
    // 1.2297829382473034409
    s21_decimal decimal1 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x130000}};
    // 0
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x0}};
    int check = TEST_COMPARISON_TRUE;

    test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok4963) {
    // 0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
    // -1.2297829382473034409
    s21_decimal decimal2 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x80130000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok4964) {
    // -1.2297829382473034409
    s21_decimal decimal1 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x80130000}};
    // 0
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x0}};
    int check = TEST_COMPARISON_TRUE;

    test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok4965) {
    // 0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
    // 1.2297829382473034410
    s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x130000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok4966) {
    // 1.2297829382473034410
    s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x130000}};
    // 0
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x0}};
    int check = TEST_COMPARISON_TRUE;

    test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok4967) {
    // 0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
    // -1.2297829382473034410
    s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80130000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok4968) {
    // -1.2297829382473034410
    s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80130000}};
    // 0
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x0}};
    int check = TEST_COMPARISON_TRUE;

    test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok4969) {
    // 0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
    // 1.2297829382473034411
    s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x130000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok4970) {
    // 1.2297829382473034411
    s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x130000}};
    // 0
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x0}};
    int check = TEST_COMPARISON_TRUE;

    test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok4971) {
    // 0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
    // -1.2297829382473034411
    s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x80130000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok4972) {
    // -1.2297829382473034411
    s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x80130000}};
    // 0
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x0}};
    int check = TEST_COMPARISON_TRUE;

    test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok4973) {
    // 0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
    // 1
    s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x0}};
    int check = TEST_COMPARISON_TRUE;

    test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok4974) {
    // 1
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x0}};
    // 0
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x0}};
    int check = TEST_COMPARISON_TRUE;

    test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok4975) {
    // 0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
    // -1
    s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x80000000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok4976) {
    // -1
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80000000}};
    // 0
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x0}};
    int check = TEST_COMPARISON_TRUE;

    test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok4977) {
    // 0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
    // 1.0
    s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x10000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok4978) {
    // 1.0
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x10000}};
    // 0
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x0}};
    int check = TEST_COMPARISON_TRUE;

    test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok4979) {
    // 0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
    // -1.0
    s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x80010000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok4980) {
    // -1.0
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x80010000}};
    // 0
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x0}};
    int check = TEST_COMPARISON_TRUE;

    test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok4981) {
    // 0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
    // 1.22
    s21_decimal decimal2 = {{0x7A, 0x0, 0x0, 0x20000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok4982) {
    // 1.22
    s21_decimal decimal1 = {{0x7A, 0x0, 0x0, 0x20000}};
    // 0
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x0}};
    int check = TEST_COMPARISON_TRUE;

    test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok4983) {
    // 0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
    // -1.22
    s21_decimal decimal2 = {{0x7A, 0x0, 0x0, 0x80020000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok4984) {
    // -1.22
    s21_decimal decimal1 = {{0x7A, 0x0, 0x0, 0x80020000}};
    // 0
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x0}};
    int check = TEST_COMPARISON_TRUE;

    test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok4985) {
    // 0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
    // 1.230001
    s21_decimal decimal2 = {{0x12C4B1, 0x0, 0x0, 0x60000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok4986) {
    // 1.230001
    s21_decimal decimal1 = {{0x12C4B1, 0x0, 0x0, 0x60000}};
    // 0
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x0}};
    int check = TEST_COMPARISON_TRUE;

    test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok4987) {
    // 0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
    // -1.230001
    s21_decimal decimal2 = {{0x12C4B1, 0x0, 0x0, 0x80060000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok4988) {
    // -1.230001
    s21_decimal decimal1 = {{0x12C4B1, 0x0, 0x0, 0x80060000}};
    // 0
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x0}};
    int check = TEST_COMPARISON_TRUE;

    test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok4989) {
    // 0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
    // 1.23000
    s21_decimal decimal2 = {{0x1E078, 0x0, 0x0, 0x50000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok4990) {
    // 1.23000
    s21_decimal decimal1 = {{0x1E078, 0x0, 0x0, 0x50000}};
    // 0
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x0}};
    int check = TEST_COMPARISON_TRUE;

    test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok4991) {
    // 0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
    // -1.23000
    s21_decimal decimal2 = {{0x1E078, 0x0, 0x0, 0x80050000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok4992) {
    // -1.23000
    s21_decimal decimal1 = {{0x1E078, 0x0, 0x0, 0x80050000}};
    // 0
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x0}};
    int check = TEST_COMPARISON_TRUE;

    test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok4993) {
    // 0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
    // 1431655765
    s21_decimal decimal2 = {{0x55555555, 0x0, 0x0, 0x0}};
    int check = TEST_COMPARISON_TRUE;

    test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok4994) {
    // 1431655765
    s21_decimal decimal1 = {{0x55555555, 0x0, 0x0, 0x0}};
    // 0
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x0}};
    int check = TEST_COMPARISON_TRUE;

    test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok4995) {
    // 0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
    // -1431655765
    s21_decimal decimal2 = {{0x55555555, 0x0, 0x0, 0x80000000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok4996) {
    // -1431655765
    s21_decimal decimal1 = {{0x55555555, 0x0, 0x0, 0x80000000}};
    // 0
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x0}};
    int check = TEST_COMPARISON_TRUE;

    test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok4997) {
    // 0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
    // 1431655765.00000
    s21_decimal decimal2 = {{0x5554D320, 0x8235, 0x0, 0x50000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok4998) {
    // 1431655765.00000
    s21_decimal decimal1 = {{0x5554D320, 0x8235, 0x0, 0x50000}};
    // 0
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x0}};
    int check = TEST_COMPARISON_TRUE;

    test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok4999) {
    // 0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
    // -1431655765.00000
    s21_decimal decimal2 = {{0x5554D320, 0x8235, 0x0, 0x80050000}};
    int check = TEST_COMPARISON_TRUE;

    test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok5000) {
    // -1431655765.00000
    s21_decimal decimal1 = {{0x5554D320, 0x8235, 0x0, 0x80050000}};
    // 0
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x0}};
    int check = TEST_COMPARISON_TRUE;

    test_is_not_equal(decimal1, decimal2, check);
}

Suite *is_equal_suite12(void) {
    Suite *s;
    TCase *tc_core;

    s = suite_create("is_equal_suite12");
    tc_core = tcase_create("Core");

tcase_add_test(tc_core, test_is_equal_ok4481);
    tcase_add_test(tc_core, test_is_equal_ok4482);
    tcase_add_test(tc_core, test_is_equal_ok4483);
    tcase_add_test(tc_core, test_is_equal_ok4484);
    tcase_add_test(tc_core, test_is_equal_ok4485);
    tcase_add_test(tc_core, test_is_equal_ok4486);
    tcase_add_test(tc_core, test_is_equal_ok4487);
    tcase_add_test(tc_core, test_is_equal_ok4488);
    tcase_add_test(tc_core, test_is_equal_ok4489);
    tcase_add_test(tc_core, test_is_equal_ok4490);
    tcase_add_test(tc_core, test_is_equal_ok4491);
    tcase_add_test(tc_core, test_is_equal_ok4492);
    tcase_add_test(tc_core, test_is_equal_ok4493);
    tcase_add_test(tc_core, test_is_equal_ok4494);
    tcase_add_test(tc_core, test_is_equal_ok4495);
    tcase_add_test(tc_core, test_is_equal_ok4496);
    tcase_add_test(tc_core, test_is_equal_ok4497);
    tcase_add_test(tc_core, test_is_equal_ok4498);
    tcase_add_test(tc_core, test_is_equal_ok4499);
    tcase_add_test(tc_core, test_is_equal_ok4500);
    tcase_add_test(tc_core, test_is_equal_ok4501);
    tcase_add_test(tc_core, test_is_equal_ok4502);
    tcase_add_test(tc_core, test_is_equal_ok4503);
    tcase_add_test(tc_core, test_is_equal_ok4504);
    tcase_add_test(tc_core, test_is_equal_ok4505);
    tcase_add_test(tc_core, test_is_equal_ok4506);
    tcase_add_test(tc_core, test_is_equal_ok4507);
    tcase_add_test(tc_core, test_is_equal_ok4508);
    tcase_add_test(tc_core, test_is_equal_ok4509);
    tcase_add_test(tc_core, test_is_equal_ok4510);
    tcase_add_test(tc_core, test_is_equal_ok4511);
    tcase_add_test(tc_core, test_is_equal_ok4512);
    tcase_add_test(tc_core, test_is_equal_ok4513);
    tcase_add_test(tc_core, test_is_equal_ok4514);
    tcase_add_test(tc_core, test_is_equal_ok4515);
    tcase_add_test(tc_core, test_is_equal_ok4516);
    tcase_add_test(tc_core, test_is_equal_ok4517);
    tcase_add_test(tc_core, test_is_equal_ok4518);
    tcase_add_test(tc_core, test_is_equal_ok4519);
    tcase_add_test(tc_core, test_is_equal_ok4520);
    tcase_add_test(tc_core, test_is_equal_ok4521);
    tcase_add_test(tc_core, test_is_equal_ok4522);
    tcase_add_test(tc_core, test_is_equal_ok4523);
    tcase_add_test(tc_core, test_is_equal_ok4524);
    tcase_add_test(tc_core, test_is_equal_ok4525);
    tcase_add_test(tc_core, test_is_equal_ok4526);
    tcase_add_test(tc_core, test_is_equal_ok4527);
    tcase_add_test(tc_core, test_is_equal_ok4528);
    tcase_add_test(tc_core, test_is_equal_ok4529);
    tcase_add_test(tc_core, test_is_equal_ok4530);
    tcase_add_test(tc_core, test_is_equal_ok4531);
    tcase_add_test(tc_core, test_is_equal_ok4532);
    tcase_add_test(tc_core, test_is_equal_ok4533);
    tcase_add_test(tc_core, test_is_equal_ok4534);
    tcase_add_test(tc_core, test_is_equal_ok4535);
    tcase_add_test(tc_core, test_is_equal_ok4536);
    tcase_add_test(tc_core, test_is_equal_ok4537);
    tcase_add_test(tc_core, test_is_equal_ok4538);
    tcase_add_test(tc_core, test_is_equal_ok4539);
    tcase_add_test(tc_core, test_is_equal_ok4540);
    tcase_add_test(tc_core, test_is_equal_ok4541);
    tcase_add_test(tc_core, test_is_equal_ok4542);
    tcase_add_test(tc_core, test_is_equal_ok4543);
    tcase_add_test(tc_core, test_is_equal_ok4544);
    tcase_add_test(tc_core, test_is_equal_ok4545);
    tcase_add_test(tc_core, test_is_equal_ok4546);
    tcase_add_test(tc_core, test_is_equal_ok4547);
    tcase_add_test(tc_core, test_is_equal_ok4548);
    tcase_add_test(tc_core, test_is_equal_ok4549);
    tcase_add_test(tc_core, test_is_equal_ok4550);
    tcase_add_test(tc_core, test_is_equal_ok4551);
    tcase_add_test(tc_core, test_is_equal_ok4552);
    tcase_add_test(tc_core, test_is_equal_ok4553);
    tcase_add_test(tc_core, test_is_equal_ok4554);
    tcase_add_test(tc_core, test_is_equal_ok4555);
    tcase_add_test(tc_core, test_is_equal_ok4556);
    tcase_add_test(tc_core, test_is_equal_ok4557);
    tcase_add_test(tc_core, test_is_equal_ok4558);
    tcase_add_test(tc_core, test_is_equal_ok4559);
    tcase_add_test(tc_core, test_is_equal_ok4560);
    tcase_add_test(tc_core, test_is_equal_ok4561);
    tcase_add_test(tc_core, test_is_equal_ok4562);
    tcase_add_test(tc_core, test_is_equal_ok4563);
    tcase_add_test(tc_core, test_is_equal_ok4564);
    tcase_add_test(tc_core, test_is_equal_ok4565);
    tcase_add_test(tc_core, test_is_equal_ok4566);
    tcase_add_test(tc_core, test_is_equal_ok4567);
    tcase_add_test(tc_core, test_is_equal_ok4568);
    tcase_add_test(tc_core, test_is_equal_ok4569);
    tcase_add_test(tc_core, test_is_equal_ok4570);
    tcase_add_test(tc_core, test_is_equal_ok4571);
    tcase_add_test(tc_core, test_is_equal_ok4572);
    tcase_add_test(tc_core, test_is_equal_ok4573);
    tcase_add_test(tc_core, test_is_equal_ok4574);
    tcase_add_test(tc_core, test_is_equal_ok4575);
    tcase_add_test(tc_core, test_is_equal_ok4576);
    tcase_add_test(tc_core, test_is_equal_ok4577);
    tcase_add_test(tc_core, test_is_equal_ok4578);
    tcase_add_test(tc_core, test_is_equal_ok4579);
    tcase_add_test(tc_core, test_is_equal_ok4580);
    tcase_add_test(tc_core, test_is_equal_ok4581);
    tcase_add_test(tc_core, test_is_equal_ok4582);
    tcase_add_test(tc_core, test_is_equal_ok4583);
    tcase_add_test(tc_core, test_is_equal_ok4584);
    tcase_add_test(tc_core, test_is_equal_ok4585);
    tcase_add_test(tc_core, test_is_equal_ok4586);
    tcase_add_test(tc_core, test_is_equal_ok4587);
    tcase_add_test(tc_core, test_is_equal_ok4588);
    tcase_add_test(tc_core, test_is_equal_ok4589);
    tcase_add_test(tc_core, test_is_equal_ok4590);
    tcase_add_test(tc_core, test_is_equal_ok4591);
    tcase_add_test(tc_core, test_is_equal_ok4592);
    tcase_add_test(tc_core, test_is_equal_ok4593);
    tcase_add_test(tc_core, test_is_equal_ok4594);
    tcase_add_test(tc_core, test_is_equal_ok4595);
    tcase_add_test(tc_core, test_is_equal_ok4596);
    tcase_add_test(tc_core, test_is_equal_ok4597);
    tcase_add_test(tc_core, test_is_equal_ok4598);
    tcase_add_test(tc_core, test_is_equal_ok4599);
    tcase_add_test(tc_core, test_is_equal_ok4600);
    tcase_add_test(tc_core, test_is_equal_ok4601);
    tcase_add_test(tc_core, test_is_equal_ok4602);
    tcase_add_test(tc_core, test_is_equal_ok4603);
    tcase_add_test(tc_core, test_is_equal_ok4604);
    tcase_add_test(tc_core, test_is_equal_ok4605);
    tcase_add_test(tc_core, test_is_equal_ok4606);
    tcase_add_test(tc_core, test_is_equal_ok4607);
    tcase_add_test(tc_core, test_is_equal_ok4608);
    tcase_add_test(tc_core, test_is_equal_ok4609);
    tcase_add_test(tc_core, test_is_equal_ok4610);

    suite_add_tcase(s, tc_core);
    return s;
}

Suite *is_greater_or_equal_suite8(void) {
    Suite *s;
    TCase *tc_core;

    s = suite_create("is_greater_or_equal_suite8");
    tc_core = tcase_create("Core");

    tcase_add_test(tc_core, test_is_greater_or_equal_ok2783);
    tcase_add_test(tc_core, test_is_greater_or_equal_ok2784);
    tcase_add_test(tc_core, test_is_greater_or_equal_ok2785);
    tcase_add_test(tc_core, test_is_greater_or_equal_ok2786);
    tcase_add_test(tc_core, test_is_greater_or_equal_ok2787);
    tcase_add_test(tc_core, test_is_greater_or_equal_ok2788);
    tcase_add_test(tc_core, test_is_greater_or_equal_ok2789);
    tcase_add_test(tc_core, test_is_greater_or_equal_ok2790);
    tcase_add_test(tc_core, test_is_greater_or_equal_ok2791);
    tcase_add_test(tc_core, test_is_greater_or_equal_ok2792);
    tcase_add_test(tc_core, test_is_greater_or_equal_ok2793);
    tcase_add_test(tc_core, test_is_greater_or_equal_ok2794);
    tcase_add_test(tc_core, test_is_greater_or_equal_ok2795);
    tcase_add_test(tc_core, test_is_greater_or_equal_ok2796);
    tcase_add_test(tc_core, test_is_greater_or_equal_ok2797);
    tcase_add_test(tc_core, test_is_greater_or_equal_ok2798);
    tcase_add_test(tc_core, test_is_greater_or_equal_ok2799);
    tcase_add_test(tc_core, test_is_greater_or_equal_ok2800);
    tcase_add_test(tc_core, test_is_greater_or_equal_ok2801);
    tcase_add_test(tc_core, test_is_greater_or_equal_ok2802);
    tcase_add_test(tc_core, test_is_greater_or_equal_ok2803);
    tcase_add_test(tc_core, test_is_greater_or_equal_ok2804);
    tcase_add_test(tc_core, test_is_greater_or_equal_ok2805);
    tcase_add_test(tc_core, test_is_greater_or_equal_ok2806);
    tcase_add_test(tc_core, test_is_greater_or_equal_ok2807);
    tcase_add_test(tc_core, test_is_greater_or_equal_ok2808);
    tcase_add_test(tc_core, test_is_greater_or_equal_ok2809);
    tcase_add_test(tc_core, test_is_greater_or_equal_ok2810);
    tcase_add_test(tc_core, test_is_greater_or_equal_ok2811);
    tcase_add_test(tc_core, test_is_greater_or_equal_ok2812);
    tcase_add_test(tc_core, test_is_greater_or_equal_ok2813);
    tcase_add_test(tc_core, test_is_greater_or_equal_ok2814);
    tcase_add_test(tc_core, test_is_greater_or_equal_ok2815);
    tcase_add_test(tc_core, test_is_greater_or_equal_ok2816);
    tcase_add_test(tc_core, test_is_greater_or_equal_ok2817);
    tcase_add_test(tc_core, test_is_greater_or_equal_ok2818);
    tcase_add_test(tc_core, test_is_greater_or_equal_ok2819);
    tcase_add_test(tc_core, test_is_greater_or_equal_ok2820);
    tcase_add_test(tc_core, test_is_greater_or_equal_ok2821);
    tcase_add_test(tc_core, test_is_greater_or_equal_ok2822);
    tcase_add_test(tc_core, test_is_greater_or_equal_ok2823);
    tcase_add_test(tc_core, test_is_greater_or_equal_ok2824);
    tcase_add_test(tc_core, test_is_greater_or_equal_ok2825);
    tcase_add_test(tc_core, test_is_greater_or_equal_ok2826);
    tcase_add_test(tc_core, test_is_greater_or_equal_ok2827);
    tcase_add_test(tc_core, test_is_greater_or_equal_ok2828);
    tcase_add_test(tc_core, test_is_greater_or_equal_ok2829);
    tcase_add_test(tc_core, test_is_greater_or_equal_ok2830);
    tcase_add_test(tc_core, test_is_greater_or_equal_ok2831);
    tcase_add_test(tc_core, test_is_greater_or_equal_ok2832);
    tcase_add_test(tc_core, test_is_greater_or_equal_ok2833);
    tcase_add_test(tc_core, test_is_greater_or_equal_ok2834);
    tcase_add_test(tc_core, test_is_greater_or_equal_ok2835);
    tcase_add_test(tc_core, test_is_greater_or_equal_ok2836);
    tcase_add_test(tc_core, test_is_greater_or_equal_ok2837);
    tcase_add_test(tc_core, test_is_greater_or_equal_ok2838);
    tcase_add_test(tc_core, test_is_greater_or_equal_ok2839);
    tcase_add_test(tc_core, test_is_greater_or_equal_ok2840);
    tcase_add_test(tc_core, test_is_greater_or_equal_ok2841);
    tcase_add_test(tc_core, test_is_greater_or_equal_ok2842);
    tcase_add_test(tc_core, test_is_greater_or_equal_ok2843);
    tcase_add_test(tc_core, test_is_greater_or_equal_ok2844);
    tcase_add_test(tc_core, test_is_greater_or_equal_ok2845);
    tcase_add_test(tc_core, test_is_greater_or_equal_ok2846);
    tcase_add_test(tc_core, test_is_greater_or_equal_ok2847);
    tcase_add_test(tc_core, test_is_greater_or_equal_ok2848);
    tcase_add_test(tc_core, test_is_greater_or_equal_ok2849);
    tcase_add_test(tc_core, test_is_greater_or_equal_ok2850);
    tcase_add_test(tc_core, test_is_greater_or_equal_ok2851);
    tcase_add_test(tc_core, test_is_greater_or_equal_ok2852);
    tcase_add_test(tc_core, test_is_greater_or_equal_ok2853);
    tcase_add_test(tc_core, test_is_greater_or_equal_ok2854);
    tcase_add_test(tc_core, test_is_greater_or_equal_ok2855);
    tcase_add_test(tc_core, test_is_greater_or_equal_ok2856);

       suite_add_tcase(s, tc_core);
    return s;
}

Suite *is_greater_suite1(void) {
    Suite *s;
    TCase *tc_core;

    s = suite_create("is_greater_suite1");
    tc_core = tcase_create("Core");

    tcase_add_test(tc_core, test_is_greater_ok104);
    tcase_add_test(tc_core, test_is_greater_ok105);
    tcase_add_test(tc_core, test_is_greater_ok106);
    tcase_add_test(tc_core, test_is_greater_ok107);
    tcase_add_test(tc_core, test_is_greater_ok108);
    tcase_add_test(tc_core, test_is_greater_ok109);
    tcase_add_test(tc_core, test_is_greater_ok110);
    tcase_add_test(tc_core, test_is_greater_ok111);
    tcase_add_test(tc_core, test_is_greater_ok112);
    tcase_add_test(tc_core, test_is_greater_ok113);
    tcase_add_test(tc_core, test_is_greater_ok114);
    tcase_add_test(tc_core, test_is_greater_ok115);
    tcase_add_test(tc_core, test_is_greater_ok116);
    tcase_add_test(tc_core, test_is_greater_ok117);
    tcase_add_test(tc_core, test_is_greater_ok118);
    tcase_add_test(tc_core, test_is_greater_ok119);
    tcase_add_test(tc_core, test_is_greater_ok120);
    tcase_add_test(tc_core, test_is_greater_ok121);
    tcase_add_test(tc_core, test_is_greater_ok122);
    tcase_add_test(tc_core, test_is_greater_ok123);
    tcase_add_test(tc_core, test_is_greater_ok124);
    tcase_add_test(tc_core, test_is_greater_ok125);
    tcase_add_test(tc_core, test_is_greater_ok126);
    tcase_add_test(tc_core, test_is_greater_ok127);
    tcase_add_test(tc_core, test_is_greater_ok128);
    tcase_add_test(tc_core, test_is_greater_ok129);
    tcase_add_test(tc_core, test_is_greater_ok130);
    tcase_add_test(tc_core, test_is_greater_ok131);
    tcase_add_test(tc_core, test_is_greater_ok132);
    tcase_add_test(tc_core, test_is_greater_ok133);
    tcase_add_test(tc_core, test_is_greater_ok134);
    tcase_add_test(tc_core, test_is_greater_ok135);
    tcase_add_test(tc_core, test_is_greater_ok136);
    tcase_add_test(tc_core, test_is_greater_ok137);
    tcase_add_test(tc_core, test_is_greater_ok138);
    tcase_add_test(tc_core, test_is_greater_ok139);
    tcase_add_test(tc_core, test_is_greater_ok140);
    tcase_add_test(tc_core, test_is_greater_ok141);
    tcase_add_test(tc_core, test_is_greater_ok142);
    tcase_add_test(tc_core, test_is_greater_ok143);
    tcase_add_test(tc_core, test_is_greater_ok144);
    tcase_add_test(tc_core, test_is_greater_ok145);
    tcase_add_test(tc_core, test_is_greater_ok146);
    tcase_add_test(tc_core, test_is_greater_ok147);
    tcase_add_test(tc_core, test_is_greater_ok148);
    tcase_add_test(tc_core, test_is_greater_ok149);
    tcase_add_test(tc_core, test_is_greater_ok150);
    tcase_add_test(tc_core, test_is_greater_ok151);
    tcase_add_test(tc_core, test_is_greater_ok152);
    tcase_add_test(tc_core, test_is_greater_ok153);
    tcase_add_test(tc_core, test_is_greater_ok154);
    tcase_add_test(tc_core, test_is_greater_ok155);
    tcase_add_test(tc_core, test_is_greater_ok156);
    tcase_add_test(tc_core, test_is_greater_ok157);
    tcase_add_test(tc_core, test_is_greater_ok158);
    tcase_add_test(tc_core, test_is_greater_ok159);
    tcase_add_test(tc_core, test_is_greater_ok160);
    tcase_add_test(tc_core, test_is_greater_ok161);
    tcase_add_test(tc_core, test_is_greater_ok162);
    tcase_add_test(tc_core, test_is_greater_ok163);
    tcase_add_test(tc_core, test_is_greater_ok164);
    tcase_add_test(tc_core, test_is_greater_ok165);
    tcase_add_test(tc_core, test_is_greater_ok166);
    tcase_add_test(tc_core, test_is_greater_ok167);
    tcase_add_test(tc_core, test_is_greater_ok168);

      suite_add_tcase(s, tc_core);
    return s;
}

Suite *is_less_or_equal_suite11(void) {
    Suite *s;
    TCase *tc_core;

    s = suite_create("is_less_or_equal_suite11");
    tc_core = tcase_create("Core");

    tcase_add_test(tc_core, test_is_less_or_equal_ok4002);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4003);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4004);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4005);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4006);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4007);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4008);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4009);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4010);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4011);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4012);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4013);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4014);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4015);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4016);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4017);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4018);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4019);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4020);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4021);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4022);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4023);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4024);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4025);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4026);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4027);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4028);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4029);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4030);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4031);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4032);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4033);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4034);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4035);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4036);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4037);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4038);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4039);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4040);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4041);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4042);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4043);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4044);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4045);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4046);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4047);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4048);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4049);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4050);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4051);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4052);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4053);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4054);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4055);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4056);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4057);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4058);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4059);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4060);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4061);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4062);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4063);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4064);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4065);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4066);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4067);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4068);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4069);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4070);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4071);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4072);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4073);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4074);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4075);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4076);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4077);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4078);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4079);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4080);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4081);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4082);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4083);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4084);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4085);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4086);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4087);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4088);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4089);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4090);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4091);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4092);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4093);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4094);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4095);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4096);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4097);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4098);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4099);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4100);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4101);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4102);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4103);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4104);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4105);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4106);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4107);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4108);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4109);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4110);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4111);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4112);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4113);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4114);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4115);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4116);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4117);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4118);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4119);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4120);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4121);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4122);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4123);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4124);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4125);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4126);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4127);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4128);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4129);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4130);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4131);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4132);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4133);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4134);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4135);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4136);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4137);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4138);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4139);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4140);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4141);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4142);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4143);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4144);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4145);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4146);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4147);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4148);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4149);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4150);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4151);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4152);
    tcase_add_test(tc_core, test_is_less_or_equal_ok4153);

        suite_add_tcase(s, tc_core);
    return s;
}

Suite *is_less_suite13(void) {
    Suite *s;
    TCase *tc_core;

    s = suite_create("is_less_suite13");
    tc_core = tcase_create("Core");

tcase_add_test(tc_core, test_is_less_ok5000);
    tcase_add_test(tc_core, test_is_less_ok5001);
    tcase_add_test(tc_core, test_is_less_ok5002);
    tcase_add_test(tc_core, test_is_less_ok5003);
    tcase_add_test(tc_core, test_is_less_ok5004);
    tcase_add_test(tc_core, test_is_less_ok5005);
    tcase_add_test(tc_core, test_is_less_ok5006);
    tcase_add_test(tc_core, test_is_less_ok5007);
    tcase_add_test(tc_core, test_is_less_ok5008);
    tcase_add_test(tc_core, test_is_less_ok5009);
    tcase_add_test(tc_core, test_is_less_ok5010);
    tcase_add_test(tc_core, test_is_less_ok5011);
    tcase_add_test(tc_core, test_is_less_ok5012);
    tcase_add_test(tc_core, test_is_less_ok5013);
    tcase_add_test(tc_core, test_is_less_ok5014);
    tcase_add_test(tc_core, test_is_less_ok5015);
    tcase_add_test(tc_core, test_is_less_ok5016);
    tcase_add_test(tc_core, test_is_less_ok5017);
    tcase_add_test(tc_core, test_is_less_ok5018);
    tcase_add_test(tc_core, test_is_less_ok5019);
    tcase_add_test(tc_core, test_is_less_ok5020);
    tcase_add_test(tc_core, test_is_less_ok5021);
    tcase_add_test(tc_core, test_is_less_ok5022);
    tcase_add_test(tc_core, test_is_less_ok5023);
    tcase_add_test(tc_core, test_is_less_ok5024);
    tcase_add_test(tc_core, test_is_less_ok5025);
    tcase_add_test(tc_core, test_is_less_ok5026);
    tcase_add_test(tc_core, test_is_less_ok5027);
    tcase_add_test(tc_core, test_is_less_ok5028);
    tcase_add_test(tc_core, test_is_less_ok5029);
    tcase_add_test(tc_core, test_is_less_ok5030);
    tcase_add_test(tc_core, test_is_less_ok5031);
    tcase_add_test(tc_core, test_is_less_ok5032);
    tcase_add_test(tc_core, test_is_less_ok5033);
    tcase_add_test(tc_core, test_is_less_ok5034);
    tcase_add_test(tc_core, test_is_less_ok5035);
    tcase_add_test(tc_core, test_is_less_ok5036);
    tcase_add_test(tc_core, test_is_less_ok5037);
    tcase_add_test(tc_core, test_is_less_ok5038);
    tcase_add_test(tc_core, test_is_less_ok5039);
    tcase_add_test(tc_core, test_is_less_ok5040);
    tcase_add_test(tc_core, test_is_less_ok5041);
    tcase_add_test(tc_core, test_is_less_ok5042);
    tcase_add_test(tc_core, test_is_less_ok5043);
    tcase_add_test(tc_core, test_is_less_ok5044);
    tcase_add_test(tc_core, test_is_less_ok5045);
    tcase_add_test(tc_core, test_is_less_ok5046);
    tcase_add_test(tc_core, test_is_less_ok5047);
    tcase_add_test(tc_core, test_is_less_ok5048);
    tcase_add_test(tc_core, test_is_less_ok5049);
    tcase_add_test(tc_core, test_is_less_ok5050);
    tcase_add_test(tc_core, test_is_less_ok5051);
    tcase_add_test(tc_core, test_is_less_ok5052);
    tcase_add_test(tc_core, test_is_less_ok5053);
    tcase_add_test(tc_core, test_is_less_ok5054);
    tcase_add_test(tc_core, test_is_less_ok5055);
    tcase_add_test(tc_core, test_is_less_ok5056);
    tcase_add_test(tc_core, test_is_less_ok5057);
    tcase_add_test(tc_core, test_is_less_ok5058);
    tcase_add_test(tc_core, test_is_less_ok5059);
    tcase_add_test(tc_core, test_is_less_ok5060);
    tcase_add_test(tc_core, test_is_less_ok5061);
    tcase_add_test(tc_core, test_is_less_ok5062);
    tcase_add_test(tc_core, test_is_less_ok5063);
    tcase_add_test(tc_core, test_is_less_ok5064);
    tcase_add_test(tc_core, test_is_less_ok5065);
    tcase_add_test(tc_core, test_is_less_ok5066);
    tcase_add_test(tc_core, test_is_less_ok5067);
    tcase_add_test(tc_core, test_is_less_ok5068);
    tcase_add_test(tc_core, test_is_less_ok5069);
    tcase_add_test(tc_core, test_is_less_ok5070);
    tcase_add_test(tc_core, test_is_less_ok5071);
    tcase_add_test(tc_core, test_is_less_ok5072);
    tcase_add_test(tc_core, test_is_less_ok5073);
    tcase_add_test(tc_core, test_is_less_ok5074);
    tcase_add_test(tc_core, test_is_less_ok5075);
    tcase_add_test(tc_core, test_is_less_ok5076);
    tcase_add_test(tc_core, test_is_less_ok5077);
    tcase_add_test(tc_core, test_is_less_ok5078);
    tcase_add_test(tc_core, test_is_less_ok5079);
    tcase_add_test(tc_core, test_is_less_ok5080);
    tcase_add_test(tc_core, test_is_less_ok5081);
    tcase_add_test(tc_core, test_is_less_ok5082);
    tcase_add_test(tc_core, test_is_less_ok5083);
    tcase_add_test(tc_core, test_is_less_ok5084);
    tcase_add_test(tc_core, test_is_less_ok5085);
    tcase_add_test(tc_core, test_is_less_ok5086);
    tcase_add_test(tc_core, test_is_less_ok5087);
    tcase_add_test(tc_core, test_is_less_ok5088);
    tcase_add_test(tc_core, test_is_less_ok5089);
    tcase_add_test(tc_core, test_is_less_ok5090);
    tcase_add_test(tc_core, test_is_less_ok5091);
    tcase_add_test(tc_core, test_is_less_ok5092);
    tcase_add_test(tc_core, test_is_less_ok5093);
    tcase_add_test(tc_core, test_is_less_ok5094);
    tcase_add_test(tc_core, test_is_less_ok5095);
    tcase_add_test(tc_core, test_is_less_ok5096);
    tcase_add_test(tc_core, test_is_less_ok5097);
    tcase_add_test(tc_core, test_is_less_ok5098);
    tcase_add_test(tc_core, test_is_less_ok5099);
    tcase_add_test(tc_core, test_is_less_ok5100);
    tcase_add_test(tc_core, test_is_less_ok5101);
    tcase_add_test(tc_core, test_is_less_ok5102);
    tcase_add_test(tc_core, test_is_less_ok5103);
    tcase_add_test(tc_core, test_is_less_ok5104);
    tcase_add_test(tc_core, test_is_less_ok5105);
    tcase_add_test(tc_core, test_is_less_ok5106);
    tcase_add_test(tc_core, test_is_less_ok5107);
    tcase_add_test(tc_core, test_is_less_ok5108);
    tcase_add_test(tc_core, test_is_less_ok5109);

        suite_add_tcase(s, tc_core);
    return s;
}

Suite *is_not_equal_suite13(void) {
    Suite *s;
    TCase *tc_core;

    s = suite_create("is_not_equal_suite13");
    tc_core = tcase_create("Core");

    tcase_add_test(tc_core, test_is_not_equal_ok4900);
    tcase_add_test(tc_core, test_is_not_equal_ok4901);
    tcase_add_test(tc_core, test_is_not_equal_ok4902);
    tcase_add_test(tc_core, test_is_not_equal_ok4903);
    tcase_add_test(tc_core, test_is_not_equal_ok4904);
    tcase_add_test(tc_core, test_is_not_equal_ok4905);
    tcase_add_test(tc_core, test_is_not_equal_ok4906);
    tcase_add_test(tc_core, test_is_not_equal_ok4907);
    tcase_add_test(tc_core, test_is_not_equal_ok4908);
    tcase_add_test(tc_core, test_is_not_equal_ok4909);
    tcase_add_test(tc_core, test_is_not_equal_ok4910);
    tcase_add_test(tc_core, test_is_not_equal_ok4911);
    tcase_add_test(tc_core, test_is_not_equal_ok4912);
    tcase_add_test(tc_core, test_is_not_equal_ok4913);
    tcase_add_test(tc_core, test_is_not_equal_ok4914);
    tcase_add_test(tc_core, test_is_not_equal_ok4915);
    tcase_add_test(tc_core, test_is_not_equal_ok4916);
    tcase_add_test(tc_core, test_is_not_equal_ok4917);
    tcase_add_test(tc_core, test_is_not_equal_ok4918);
    tcase_add_test(tc_core, test_is_not_equal_ok4919);
    tcase_add_test(tc_core, test_is_not_equal_ok4920);
    tcase_add_test(tc_core, test_is_not_equal_ok4921);
    tcase_add_test(tc_core, test_is_not_equal_ok4922);
    tcase_add_test(tc_core, test_is_not_equal_ok4923);
    tcase_add_test(tc_core, test_is_not_equal_ok4924);
    tcase_add_test(tc_core, test_is_not_equal_ok4925);
    tcase_add_test(tc_core, test_is_not_equal_ok4926);
    tcase_add_test(tc_core, test_is_not_equal_ok4927);
    tcase_add_test(tc_core, test_is_not_equal_ok4928);
    tcase_add_test(tc_core, test_is_not_equal_ok4929);
    tcase_add_test(tc_core, test_is_not_equal_ok4930);
    tcase_add_test(tc_core, test_is_not_equal_ok4931);
    tcase_add_test(tc_core, test_is_not_equal_ok4932);
    tcase_add_test(tc_core, test_is_not_equal_ok4933);
    tcase_add_test(tc_core, test_is_not_equal_ok4934);
    tcase_add_test(tc_core, test_is_not_equal_ok4935);
    tcase_add_test(tc_core, test_is_not_equal_ok4936);
    tcase_add_test(tc_core, test_is_not_equal_ok4937);
    tcase_add_test(tc_core, test_is_not_equal_ok4938);
    tcase_add_test(tc_core, test_is_not_equal_ok4939);
    tcase_add_test(tc_core, test_is_not_equal_ok4940);
    tcase_add_test(tc_core, test_is_not_equal_ok4941);
    tcase_add_test(tc_core, test_is_not_equal_ok4942);
    tcase_add_test(tc_core, test_is_not_equal_ok4943);
    tcase_add_test(tc_core, test_is_not_equal_ok4944);
    tcase_add_test(tc_core, test_is_not_equal_ok4945);
    tcase_add_test(tc_core, test_is_not_equal_ok4946);
    tcase_add_test(tc_core, test_is_not_equal_ok4947);
    tcase_add_test(tc_core, test_is_not_equal_ok4948);
    tcase_add_test(tc_core, test_is_not_equal_ok4949);
    tcase_add_test(tc_core, test_is_not_equal_ok4950);
    tcase_add_test(tc_core, test_is_not_equal_ok4951);
    tcase_add_test(tc_core, test_is_not_equal_ok4952);
    tcase_add_test(tc_core, test_is_not_equal_ok4953);
    tcase_add_test(tc_core, test_is_not_equal_ok4954);
    tcase_add_test(tc_core, test_is_not_equal_ok4955);
    tcase_add_test(tc_core, test_is_not_equal_ok4956);
    tcase_add_test(tc_core, test_is_not_equal_ok4957);
    tcase_add_test(tc_core, test_is_not_equal_ok4958);
    tcase_add_test(tc_core, test_is_not_equal_ok4959);
    tcase_add_test(tc_core, test_is_not_equal_ok4960);
    tcase_add_test(tc_core, test_is_not_equal_ok4961);
    tcase_add_test(tc_core, test_is_not_equal_ok4962);
    tcase_add_test(tc_core, test_is_not_equal_ok4963);
    tcase_add_test(tc_core, test_is_not_equal_ok4964);
    tcase_add_test(tc_core, test_is_not_equal_ok4965);
    tcase_add_test(tc_core, test_is_not_equal_ok4966);
    tcase_add_test(tc_core, test_is_not_equal_ok4967);
    tcase_add_test(tc_core, test_is_not_equal_ok4968);
    tcase_add_test(tc_core, test_is_not_equal_ok4969);
    tcase_add_test(tc_core, test_is_not_equal_ok4970);
    tcase_add_test(tc_core, test_is_not_equal_ok4971);
    tcase_add_test(tc_core, test_is_not_equal_ok4972);
    tcase_add_test(tc_core, test_is_not_equal_ok4973);
    tcase_add_test(tc_core, test_is_not_equal_ok4974);
    tcase_add_test(tc_core, test_is_not_equal_ok4975);
    tcase_add_test(tc_core, test_is_not_equal_ok4976);
    tcase_add_test(tc_core, test_is_not_equal_ok4977);
    tcase_add_test(tc_core, test_is_not_equal_ok4978);
    tcase_add_test(tc_core, test_is_not_equal_ok4979);
    tcase_add_test(tc_core, test_is_not_equal_ok4980);
    tcase_add_test(tc_core, test_is_not_equal_ok4981);
    tcase_add_test(tc_core, test_is_not_equal_ok4982);
    tcase_add_test(tc_core, test_is_not_equal_ok4983);
    tcase_add_test(tc_core, test_is_not_equal_ok4984);
    tcase_add_test(tc_core, test_is_not_equal_ok4985);
    tcase_add_test(tc_core, test_is_not_equal_ok4986);
    tcase_add_test(tc_core, test_is_not_equal_ok4987);
    tcase_add_test(tc_core, test_is_not_equal_ok4988);
    tcase_add_test(tc_core, test_is_not_equal_ok4989);
    tcase_add_test(tc_core, test_is_not_equal_ok4990);
    tcase_add_test(tc_core, test_is_not_equal_ok4991);
    tcase_add_test(tc_core, test_is_not_equal_ok4992);
    tcase_add_test(tc_core, test_is_not_equal_ok4993);
    tcase_add_test(tc_core, test_is_not_equal_ok4994);
    tcase_add_test(tc_core, test_is_not_equal_ok4995);
    tcase_add_test(tc_core, test_is_not_equal_ok4996);
    tcase_add_test(tc_core, test_is_not_equal_ok4997);
    tcase_add_test(tc_core, test_is_not_equal_ok4998);
    tcase_add_test(tc_core, test_is_not_equal_ok4999);
    tcase_add_test(tc_core, test_is_not_equal_ok5000);

       suite_add_tcase(s, tc_core);
    return s;
}

