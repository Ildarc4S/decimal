#include "./s21_decimal.h"

int main() {
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
  return 0;
}
