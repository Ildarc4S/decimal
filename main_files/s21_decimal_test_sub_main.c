#include "../tests/_helpers/_debug.h"
#include "./../include/s21_decimal.h"

int main(void) {
  // -7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
  // -0
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x80000000}};
  // -7922816251426433759354395033.5
  s21_decimal check = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};

  s21_decimal result = {{0, 0, 0, 0}};
  s21_sub(decimal1, decimal2, &result);

  s21_print_decimal_string(decimal1);
  s21_print_decimal_string(decimal2);

  s21_print_decimal_string(result);
  s21_print_decimal_string(check);

  s21_print_bin_decimal(result);
  s21_print_bin_decimal(check);
  return 0;
}
