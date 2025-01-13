#include "s21_decimal.h"

int main() {
    // 79228162514264337593543950335
    s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
    // -79228162514264337593543950335
    s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
    s21_decimal res = {{0,0,0,0}}; 
  /*s21_set_decimal_scale(&n1, 3); // 200 / 10^3 = 0.2 */
   s21_print_bin_decimal(decimal1);
  s21_print_bin_decimal(decimal2);
  /*s21_set_decimal_scale(&n2, 4); // 300 / 10^4 = 0.03*/
  printf("Sravn:%d\n", s21_is_greater_or_equal(decimal1, decimal1));
  /*printf("Sravn1:%d\n", s21_is_greater_or_equal(decimal1, decimal2));*/
  /*// I don`t know how to delete zero in number end*/
  //  2000
  //   300
  //  2300
  s21_print_bin_decimal(decimal1);
  s21_print_bin_decimal(decimal2);
  
  printf("Code:%d\n", s21_add(decimal1, decimal2, &res));

  s21_print_bin_decimal(res);
}
