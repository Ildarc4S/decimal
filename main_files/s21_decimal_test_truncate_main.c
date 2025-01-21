#include "./../include/s21_decimal.h"
#include "../tests/_helpers/_debug.h"

void divide_by_10(s21_big_decimal* num) {
  unsigned long long remainder = 0;
  for (int i = 5; i >= 0; i--) {
    unsigned long value = (remainder << 32) + num->bits[i];
    num->bits[i] = (value / 10);
    remainder = value % 10;
  }
}

int main(void) {
    // -7922816251426433759354395033.5
    s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
    // -7922816251426433759354395033
    s21_decimal decimal_check = {{0x99999999, 0x99999999, 0x19999999, 0x80000000}};
    s21_decimal result = {{0, 0, 0, 0}};
    s21_big_decimal big_value;
    s21_decimal_to_big_decimal(decimal, &big_value);
    divide_by_10(&big_value);
    s21_print_bin_decimal(result);
    s21_print_bin_big_decimal(big_value);
    s21_print_bin_decimal(decimal_check);
  return 0;
}
