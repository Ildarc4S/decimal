#include "./utils.h"
#include "./binary_operators.h"
#include <check.h>

START_TEST(test_bin_xor) {
  s21_big_decimal num1 = {{1, 1, 0, 0, 0, 0, 0}};
  s21_big_decimal num2 = {{1, 0, 1, 0, 0, 0, 0}};
  s21_big_decimal res = {{0, 0, 0, 0, 0, 0, 0}};
  s21_big_decimal correct_res = {{0, 1, 1, 0, 0, 0, 0}};
  s21_bin_xor(num1, num2, &res);

  ck_assert_mem_eq(&res, &correct_res, sizeof(int)*7);
} END_TEST

START_TEST(test_bin_or) {
  s21_big_decimal num1 = {{1, 1, 0, 0, 0, 0, 0}};
  s21_big_decimal num2 = {{1, 0, 1, 0, 0, 0, 0}};
  s21_big_decimal res = {{0, 0, 0, 0, 0, 0, 0}};
  s21_big_decimal correct_res = {{1, 1, 1, 0, 0, 0, 0}};
  s21_bin_or(num1, num2, &res);
  
  ck_assert_mem_eq(&res, &correct_res, sizeof(int)*7);
} END_TEST

START_TEST(test_bin_and) {
  s21_big_decimal num1 = {{1, 1, 0, 0, 0, 0, 0}};
  s21_big_decimal num2 = {{1, 0, 1, 0, 0, 0, 0}};
  s21_big_decimal res = {{0, 0, 0, 0, 0, 0, 0}};
  s21_big_decimal correct_res = {{1, 0, 0, 0, 0, 0, 0}};
  s21_bin_and(num1, num2, &res);

  ck_assert_mem_eq(&res, &correct_res, sizeof(int)*7);
} END_TEST

START_TEST(test_bin_invert) {
  s21_big_decimal res = {{~0, ~0, 0, 0, 0, 0, 0}};
  s21_big_decimal correct_res = {{0, 0, ~0, ~0, ~0, ~0, 0}};
  s21_bin_invert(&res);

  ck_assert_mem_eq(&res, &correct_res, sizeof(int)*7);
 } END_TEST

START_TEST(test_bin_shift_one) {
  s21_big_decimal res = {{1<<31|1<<30, 1<<31|1, 1<<31, 1<<31, 1<<31, 1<<31, 0}};
  s21_big_decimal correct_res = {{1<<31, 1|1<<1, 1, 1, 1, 1, 0}};
  s21_bin_shift_left_one(&res);

  ck_assert_mem_eq(&res, &correct_res, sizeof(int)*7);
 } END_TEST


Suite *createSuite() {
    Suite *suite = suite_create("My Suita binary test");
    TCase *tc_core = tcase_create("Core");

    tcase_add_test(tc_core, test_bin_xor);
    tcase_add_test(tc_core, test_bin_or);
    tcase_add_test(tc_core, test_bin_and);
    tcase_add_test(tc_core, test_bin_invert);
    tcase_add_test(tc_core, test_bin_shift_one);
    
    suite_add_tcase(suite, tc_core);
    return suite;
}

int main() {
    int number_failed;
    SRunner *sr;

    Suite *suite = createSuite();

    sr = srunner_create(suite);
    srunner_run_all(sr, CK_NORMAL);

    number_failed = srunner_ntests_failed(sr);
    
    srunner_free(sr);
    return (number_failed == 0) ? 0 : 1;
}


/*int main() {*/
  /*printf("[TEST XOR]\n");*/
  /*s21_big_decimal num1 = {1, 1, 0, 0, 0, 0, 0,};*/
  /*s21_big_decimal num2 = {1, 0, 1, 0, 0, 0, 0,};*/
  /*s21_big_decimal res = {0, 0, 0, 0, 0, 0, 0,};*/
  /*s21_bin_xor(num1, num2, &res);*/
  /*print_bin_big_decimal(num1);*/
  /*print_bin_big_decimal(num2);*/
  /*print_bin_big_decimal(res);*/

  /*printf("[TEST OR]\n");*/
  /*s21_big_decimal num_or_1 = {1, 1, 0, 0, 0, 0, 0,};*/
  /*s21_big_decimal num_or_2 = {1, 0, 1, 0, 0, 0, 0,};*/
  /*s21_big_decimal res_or = {0, 0, 0, 0, 0, 0, 0,};*/
  /*s21_bin_or(num_or_1, num_or_2, &res_or);*/
  /*print_bin_big_decimal(num_or_1);*/
  /*print_bin_big_decimal(num_or_2);*/
  /*print_bin_big_decimal(res_or);*/
/*}*/
