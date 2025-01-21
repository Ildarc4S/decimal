#include "./../include/s21_decimal.h"
#include "../tests/_helpers/_debug.h"

int main(void) {
    // -7922816251426433759354395033.5
    s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
    // -7922816251426433759354395033
    s21_decimal decimal_check = {{0x99999999, 0x99999999, 0x19999999, 0x80000000}};
    s21_decimal result = {{0, 0, 0, 0}};

    s21_truncate(decimal, &result);
    s21_print_bin_decimal(result);
    s21_print_bin_decimal(decimal_check);
  return 0;
}
