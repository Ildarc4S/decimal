#include "./../include/s21_decimal.h"
#include "../tests/_helpers/_debug.h"

int main(void) {
    // -0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x801C0000}};
    // 79228162514264337593543950335
    s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
    // -0.0000000000000000000000000000
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x801C0000}};
    s21_decimal result = {{0x0, 0x0, 0x0, 0x0}};

  printf("Code:%d\n", s21_div(decimal1, decimal2, &result));
  printf("%d\n", s21_get_decimal_scale(result));
  s21_print_bin_decimal(result);
  s21_print_decimal_string(result);
  s21_print_decimal_string(decimal_check);
  // s21_print_bin_big_decimal(rem);
  return 0;
}

// 18446744073709551615999999999