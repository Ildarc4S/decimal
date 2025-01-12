#include "s21_decimal.h"

int main() {
  s21_decimal n1 = {{200, 0, 0, 0}};
  s21_decimal n2 = {{300, 0, 0, 0}};
  
  s21_set_decimal_scale(&n1, 2); // 200 / 10^2 = 2.00
  s21_set_decimal_scale(&n2, 4); // 300 / 10^4 = 0.03

  s21_print_bin_decimal(n1);
  s21_print_bin_decimal(n2);

  printf("%d\n",s21_add(n1, n2, &n1)); // 2.00 + 0.03 = 2.03 =  20300 / 10^4
  
  s21_print_bin_decimal(n1);
  printf("%d\n", s21_get_decimal_scale(n1));
}
