#include "./s21_decimal.h"

int main() {
  s21_decimal value_1 = {{0xffffffff, 0, 0, 0}};
  s21_decimal value_2 = {{3489660928, 0, 0, 0}};

  print_bin_decimal(value_1);
  printf("\n");
  print_bin_decimal(value_1);
  printf("\n");
  s21_decimal res = s21_sub(value_1, value_2);
  print_bin_decimal(res);

  return 0;
}
