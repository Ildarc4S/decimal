#include <stdio.h>

#include "./arithmetic.h"
#include "./binary_operators.h"
#include "./utils.h"
#include "type.h"

void s21_decimal_to_big_decimal(s21_decimal num, s21_big_decimal* result) {
  int mask = 0xffffffff;
  for (int i = 0; i < DECIMAL_LENGTH; i++) {
    result->bits[i] = num.bits[i] & mask;
  }
}

int iget_max_bit(int num) {
  int res = -1;
  for (int i = 31; i >= 0 && res == -1; i--) {
    if (is_set_bit(num, i)) {
      res = i;
    }
  }
  return res;
}

int del(int n1, int n2) {
  int res = 0;
  int l1 = iget_max_bit(n1);
  int l2 = iget_max_bit(n2);
  int dif = l1 - l2 > 0 ? l1 - l2 : l2 - l1;
  dif += 1;
  printf("%d)\n", dif);
  while (dif) {
    if (n1 >= (n2 << dif)) {
      n1 -= (n2 << dif);
      res |= 1;
    }
    print_bin_num(n1, 31);
    res <<= 1;
    dif--;
  }
  return res;
}

int main() {
  s21_big_decimal d1 = {2, 0, 0, 0, 0, 0, 1 << 16};
  s21_big_decimal d2 = {20, 0, 0, 0, 0, 0, 3 << 16};
  s21_big_decimal res = {{0, 0, 0, 0, 0, 0, 0}};

  int n1 = 0b10100;
  int n2 = 0b1000;

  print_bin_num(del(n1, n2), 31);
  printf("%d", del(n1, n2));
  return 0;
}
// 123.4 = 1234/10^1
// 1.234 = 1234/10^3
//
// normalization
// 123400/10^3
// 1234/10^3
//
// addition
//  123400
//+   1234
//= 124634
