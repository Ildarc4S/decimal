#include "./../include/s21_decimal.h"
#include "../tests/_helpers/_debug.h"

int main(void) {
    // 79228162514264337593543950335
    s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
    // 79228162514264337593543950334
    s21_decimal decimal2 = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
    // 1
    s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x0}};
    s21_decimal result = {{0x0, 0x0, 0x0, 0x0}};

  s21_div(decimal1, decimal2, &result);
  printf("%d\n", s21_get_decimal_scale(result));
  s21_print_bin_decimal(result);
  // s21_print_bin_big_decimal(rem);
  return 0;
}