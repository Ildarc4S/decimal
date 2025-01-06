#include <stdio.h>
#include "type.h"
#include "./binary_operators.h"
#include "./utils.h"

void s21_big_decimal_add(s21_big_decimal num_one, s21_big_decimal num_two, s21_big_decimal* result) {
  s21_big_decimal temp_decimal = num_one; 
  while (!is_null(temp_decimal)) {
    s21_bin_and(num_one, num_two, &temp_decimal);
    s21_bin_shift_left_one(&temp_decimal);

    s21_bin_xor(num_one, num_two, &num_one);
    num_two = temp_decimal;
  }
  *result = num_one;
}

void s21_decimal_to_big_decimal(s21_decimal num, s21_big_decimal* result) {
  int mask = 0xffffffff;
  for (int i = 0; i < DECIMAL_LENGTH; i++) {
    result->bits[i] = num.bits[i] & mask;
  }
}

void s21_decimal_mult_to_ten(s21_big_decimal* num) {
  s21_big_decimal temp = *num;
  s21_bin_shift_left(num, 3);
  s21_bin_shift_left_one(&temp);
  
  s21_big_decimal_add(*num, temp, num);
}

int main() {
  s21_big_decimal d1 = {1, 0, 0, 0, 0, 0};
  print_bin_big_decimal(d1);
  s21_decimal_mult_to_ten(&d1);
  print_bin_big_decimal(d1);
  return 0;
}
