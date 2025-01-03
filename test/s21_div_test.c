#include "../s21!_arithmetic_operators.h"
#include "../s21!_comparison.h"
#include "../s21!_decimal.h"
#include "s21_test.h"

void div_test_template(s21_decimal dividend, s21_decimal divider,
                       s21_decimal expec_res) {
  s21_decimal res = s21_div(dividend, divider);
  int eq = s21_is_equal(expec_res, res);
  ck_assert_int_eq(eq, 1);
}

#define DIV_TEST(name, sb_res_macr, dividend_macr, divider_macr) \
  START_TEST(name) {                                             \
    s21_decimal expec_res = sb_res_macr;                         \
    s21_decimal dividend = dividend_macr;                        \
    s21_decimal divider = divider_macr;                          \
    div_test_template(dividend, divider, expec_res);             \
  }                                                              \
  END_TEST

DIV_TEST(test_1, ((s21_decimal){{0, 0, 0, 0}}),
         ((s21_decimal){{434213, 0, 0, 0}}), ((s21_decimal){{12312, 0, 0, 0}}))

DIV_TEST(test_2, ((s21_decimal){{0, 0, 0, 0}}),
         ((s21_decimal){{434213, 0, 0, 0}}), ((s21_decimal){{12312, 0, 0, 0}}))

DIV_TEST(test_3, ((s21_decimal){{0, 0, 0, 0}}),
         ((s21_decimal){{434213, 0, 0, 0}}), ((s21_decimal){{12312, 0, 0, 0}}))

DIV_TEST(test_4, ((s21_decimal){{0, 0, 0, 0}}),
         ((s21_decimal){{434213, 0, 0, 0}}), ((s21_decimal){{12312, 0, 0, 0}}))

DIV_TEST(test_5, ((s21_decimal){{0, 0, 0, 0}}),
         ((s21_decimal){{434213, 0, 0, 0}}), ((s21_decimal){{12312, 0, 0, 0}}))

DIV_TEST(test_6, ((s21_decimal){{0, 0, 0, 0}}),
         ((s21_decimal){{434213, 0, 0, 0}}), ((s21_decimal){{12312, 0, 0, 0}}))

DIV_TEST(test_7, ((s21_decimal){{0, 0, 0, 0}}),
         ((s21_decimal){{434213, 0, 0, 0}}), ((s21_decimal){{12312, 0, 0, 0}}))

DIV_TEST(test_8, ((s21_decimal){{0, 0, 0, 0}}),
         ((s21_decimal){{434213, 0, 0, 0}}), ((s21_decimal){{12312, 0, 0, 0}}))

Suite *div_test_fun(void) {
  Suite *div_suite = suite_create("DECIMAL");
  TCase *div_tcase = tcase_create("DIV_AR");

  tcase_add_test(div_tcase, test_1);

  suite_add_tcase(div_suite, div_tcase);
  return div_suite;
}
