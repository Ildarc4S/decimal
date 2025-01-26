#include "../tests/_helpers/_debug.h"
#include "./../include/s21_decimal.h"

int main(void) {
  // 1.9999999999999999999999999000
  s21_decimal decimal1 = {{0x1FFFFC18, 0x7C4A04C2, 0x409F9CBC, 0x1C0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 0
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};
  s21_decimal result = {{0x0, 0x0, 0x0, 0x0}};

  // s21_print_bin_decimal(decimal1);
  // s21_print_bin_decimal(decimal2);

  printf("Code:%d\n", s21_div(decimal1, decimal2, &result));
  printf("%d\n", s21_get_decimal_scale(result));
  s21_print_bin_decimal(result);
  // s21_print_decimal_string(result);
  // s21_print_decimal_string(decimal_check);
  // s21_print_bin_big_decimal(rem);
  return 0;
}