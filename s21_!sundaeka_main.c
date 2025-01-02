#include "s21!_arithmetic_operators.h"
#include "s21!_decimal.h"

/**
 * @author majorswe arniefle sundaeka
 * @brief main-функция для тестирования кода
 */
int main() {
  s21_decimal value_1 = {{167, 0, 0, 0}};
  // s21_decimal value_1 = {{4294967295, 0, 0, 0}};
  // s21_decimal value_1 = {{2147483647, 0, 0, 0}};
  s21_decimal value_2 = {{167, 0, 0, 0}};
  s21_print_bin_decimal(value_1);
  s21_print_bin_decimal(value_2);

  s21_decimal res = {{0, 0, 0, 0}};
  res = s21_div(value_1, value_2);
  s21_print_bin_decimal(res);

  // print_bin_decimal(decimal_shift_cycle(value_1, 4,
  // decimal_shift_right_once)); value_1.bits[0] >>= 1;
  // print_bin_decimal(value_1);
  return 0;
}
