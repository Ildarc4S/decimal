#include "./s21_decimal.h"

int main() {
  s21_decimal value_1 = {12, 0, 0, 00000000};
  s21_decimal value_2 = {13, 0, 0, };
  s21_decimal result;
  //   print_bin_decimal(value_1);
  //   printf("\n");
  // print_bin_decimal(value_2);
  // printf("\n");mal res = s21_sub(value_1, value_2);
  // print_bin_decimal(res);

  // value_1 = decimal_shift_left(value_1, 1);
  //   print_bin_decimal(value_1);
  //   printf("%d\n", s21_is_less(value_1, value_2));

  printf("%d\n", s21_floor(value_1));
  printf("%d", s21_floor(value_2));
  return 0;
}
