#include "./s21_decimal.h"

int main() {
  s21_decimal value_1 = {{0, 0, 13, (1 << 31)}};
  s21_decimal value_2 = {{0, 0, 14, 1 << 31}};
  s21_decimal result;
  print_bin_decimal(value_1);
  printf("\n");
  print_bin_decimal(value_2);
  printf("\n");
  s21_decimal res = s21_sub(value_1, value_2);
  print_bin_decimal(res);

  printf("(%d)", s21_mul(10,20));
  print_bin(1 << 1);
  return 0;
}
