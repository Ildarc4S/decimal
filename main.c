#include "./s21_decimal.h"

int main() {
<<<<<<< HEAD
  s21_decimal value_1 = {{0, 0, 13, (1 << 31)}};
  s21_decimal value_2 = {{0, 0, 14, 1 << 31}};
  s21_decimal result;
  print_bin_decimal(value_1);
  printf("\n");
  print_bin_decimal(value_1);
  printf("\n");
  s21_decimal res = s21_sub(value_1, value_2);
  print_bin_decimal(res);

  printf("(%d)", s21_mul(10,20));
  print_bin(1 << 1);
=======
  s21_decimal value_1 = {5, 0, 0, 1<<31};
  s21_decimal value_2 = {7, 0, 0, 0};
  s21_decimal result;
  print_bin_decimal(value_1);
  printf("\n");
  print_bin_decimal(value_2);
  printf("\n"); 
  s21_decimal res = s21_sub(value_1, value_2);
  print_bin_decimal(res);
  
  printf("< %d\n", s21_is_less(value_1, value_2));
  printf("<= %d\n", s21_is_less_or_equal(value_1, value_2));
  printf("> %d\n", s21_is_greater(value_1, value_2));
  printf(">= %d\n", s21_is_greater_or_equal(value_1, value_2));
  printf("== %d\n", s21_is_equal(value_1, value_2));
  printf("!= %d\n", s21_is_not_equal(value_1, value_2));
>>>>>>> origin/majorswe
  return 0;
}
