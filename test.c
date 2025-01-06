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

void s21_normalization(s21_big_decimal* num_one, s21_big_decimal* num_two) {
  int scale_one = get_scale(*num_one);
  int scale_two = get_scale(*num_two);
  printf("Scale: {%d, %d}\n\n", scale_one, scale_two);

  while (scale_one < scale_two) {
    scale_one++;
    s21_decimal_mult_to_ten(num_one);
  }
  while (scale_one > scale_two) {
    scale_two++;
    s21_decimal_mult_to_ten(num_two);
  }
  printf("After normalization:\n\n");
  printf("Scale: {%d, %d}\n\n", scale_one, scale_two);
}


int main() {
  s21_big_decimal d1 = {1234, 0, 0, 0, 0, 0, 1<<16};
  s21_big_decimal d2 = {1234, 0, 0, 0, 0, 0, 3<<16};
  printf("Before normalization:\n\n");
  print_bin_big_decimal(d1);
  print_bin_big_decimal(d2);
  
  s21_normalization(&d1, &d2);
  
  print_bin_big_decimal(d1);
  print_bin_big_decimal(d2);
  
  s21_big_decimal res;
  s21_big_decimal_add(d1, d2, &res);
  
  printf("Result of the addition:\n");
  print_bin_big_decimal(res);
  return 0;
}
// 123.4 = 1234/10^1
// 1.234 = 1234/10^3
//
//normalization
// 123400/10^3
// 1234/10^3
//
//addition
//  123400
//+   1234
//= 124634
