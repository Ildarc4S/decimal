#include "s21_arithmetic_operators.h"
#include "s21_decimal.h"

/**
 * @author majorswe arniefle sundaeka
 * @brief main-функция для тестирования кода
 */
int main() {
  s21_decimal num_1 = {{167, 0, 0, 0}};
  // s21_decimal num_1 = {{4294967295, 0, 0, 0}};
  // s21_decimal num_1 = {{2147483647, 0, 0, 0}};
  s21_decimal num_2 = {{167, 0, 0, 0}};
  s21_print_bin_decimal(num_1);
  s21_print_bin_decimal(num_2);

  s21_decimal res;
  int z = s21_div(num_1, num_2, &res);
  s21_print_bin_decimal(res);
  printf("\n%d", z);

  // print_bin_decimal(decimal_shift_cycle(num_1, 4,
  // decimal_shift_right_once)); num_1.bits[0] >>= 1;
  // print_bin_decimal(num_1);
  return 0;
}
