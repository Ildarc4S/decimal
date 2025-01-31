#include "./tests_main.h"

#include "include/s21_decimal.h"

Suite *add_suite1(void);
Suite *div_suite0(void);
Suite *div_suite1(void);
Suite *mul_suite0(void);
Suite *mul_suite1(void);
Suite *sub_suite1(void);

// Suite *is_equal_suite1(void);
// Suite *is_greater_suite1(void);
// Suite *is_greater_or_equal_suite1(void);
// Suite *is_less_suite1(void);
// Suite *is_less_or_equal_suite1(void);
// Suite *is_not_equal_suite1(void);

// Suite *negate_suite1(void);
// Suite *truncate_suite1(void);
// Suite *floor_suite1(void);
// Suite *round_suite1(void);

// Suite *from_int_to_decimal_suite(void);
// Suite *from_float_to_decimal_suite(void);
// Suite *from_decimal_to_float_suite0(void);
// Suite *from_decimal_to_float_suite1(void);
// Suite *from_decimal_to_int_suite0(void);
// Suite *from_decimal_to_int_suite1(void);
// Suite *from_decimal_to_int_suite2(void);
// Suite *test_from_float_to_decimal_s(void);

int main(void) {
  int failed_count;
  SRunner *sr;

  sr = srunner_create(NULL);

//   srunner_add_suite(sr, from_int_to_decimal_suite());
//   srunner_add_suite(sr, from_float_to_decimal_suite());
//   srunner_add_suite(sr, test_from_float_to_decimal_s());
//   srunner_add_suite(sr, from_decimal_to_int_suite0());
//   srunner_add_suite(sr, from_decimal_to_int_suite1());
//   srunner_add_suite(sr, from_decimal_to_int_suite2());
//   srunner_add_suite(sr, from_decimal_to_float_suite0());
//   srunner_add_suite(sr, from_decimal_to_float_suite1());

//   srunner_add_suite(sr, is_equal_suite1());
//   srunner_add_suite(sr, is_greater_suite1());
//   srunner_add_suite(sr, is_greater_or_equal_suite1());
//   srunner_add_suite(sr, is_less_suite1());
//   srunner_add_suite(sr, is_less_or_equal_suite1());
//   srunner_add_suite(sr, is_not_equal_suite1());

//   srunner_add_suite(sr, add_suite1());
  srunner_add_suite(sr, div_suite0());
  srunner_add_suite(sr, div_suite1());
//   srunner_add_suite(sr, mul_suite0());
//   srunner_add_suite(sr, mul_suite1());
//   srunner_add_suite(sr, sub_suite1());

//   srunner_add_suite(sr, negate_suite1());
//   srunner_add_suite(sr, truncate_suite1());
//   srunner_add_suite(sr, floor_suite1());
//   srunner_add_suite(sr, round_suite1());

  srunner_set_fork_status(sr, CK_NOFORK);
  srunner_run_all(sr, CK_NORMAL);
  failed_count = srunner_ntests_failed(sr);
  srunner_free(sr);

  return !failed_count ? EXIT_SUCCESS : EXIT_FAILURE;
}