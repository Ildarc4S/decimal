#include "s21_decimal.h"

int main() {
  s21_decimal n1 = {{300, 0, 0, 0}};
  s21_decimal n2 = {{300, 0, 0, 0}};
  
  /*s21_set_decimal_scale(&n1, 3); // 200 / 10^3 = 0.2 */
  /*s21_set_decimal_scale(&n2, 4); // 300 / 10^4 = 0.03*/

// I don`t know how to delete zero in number end
//  2000
//   300
//  2300

  s21_print_bin_decimal(n1);
  s21_print_bin_decimal(n2);

  printf("Code: %d\n",s21_add(n1, n2, &n1)); // 0.2 + 0.03 = 0.23 =  230 / 10^3
  
  s21_print_bin_decimal(n1);
  printf("%d\n", s21_get_decimal_scale(n1));
}
