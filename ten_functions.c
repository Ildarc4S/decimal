#include "ten_functions.h"

void s21_mul_to_ten(s21_big_decimal* num) {
  s21_big_decimal temp = *num;
  s21_bin_shift_left(num, 3);
  s21_bin_shift_left_one(&temp);

  s21_binary_add(*num, temp, num);
}

// Fix return result
int s21_div_to_ten(s21_big_decimal* num) {
  s21_big_decimal big_ten_decimal = {{10, 0, 0, 0, 0, 0}};
  s21_binary_div(*num, big_ten_decimal, num);
  return 0;
}
