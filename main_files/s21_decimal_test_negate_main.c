#include "./../include/s21_decimal.h"
#include "../tests/_helpers/_debug.h"

int main(void) {
    // 79228162514264337593543950.335
    s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x30000}};
    // -79228162514264337593543950.335
    s21_decimal decimal_check = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80030000}};
    s21_decimal result = {{0, 0, 0, 0}};
    s21_negate(decimal, &result);

    s21_print_decimal_string(result);
    s21_print_decimal_string(decimal_check);

    s21_print_bin_decimal(result);
    s21_print_bin_decimal(decimal_check);
  return 0;
}
