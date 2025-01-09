#include <stdio.h>
#include "type.h"
#include "./binary_operators.h"
#include "./utils.h"
#include "./arithmetic.h"

void s21_decimal_to_big_decimal(s21_decimal num, s21_big_decimal* result) {
  int mask = 0xffffffff;
  for (int i = 0; i < DECIMAL_LENGTH; i++) {
    result->bits[i] = num.bits[i] & mask;
  }
}

int main() {
  s21_big_decimal d1 = {2, 0, 0, 0, 0, 0, 1<<16};
  s21_big_decimal d2 = {20, 0, 0, 0, 0, 0, 3<<16};
  s21_big_decimal res = {{0,0,0,0,0,0,0}}; 
  print_bin_big_decimal(d1);
  print_bin_big_decimal(d2);
 
  s21_mul_to_ten(&d2);
  s21_div_to_ten(&d2);

  s21_normalization(&d1, &d2);

  print_bin_big_decimal(d1);
  print_bin_big_decimal(d2);
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
