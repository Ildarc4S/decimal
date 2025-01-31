#include "./../s21_decimal.h"
#include "../tests/_helpers/_debug.h"

int main(void) {
    // 79228162514264337593543950335
    s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
    // 0
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x0}};
    // 79228162514264337593543950335
    s21_decimal check = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};

    s21_decimal result = {{0, 0, 0, 0}};
    s21_add(decimal1, decimal2, &result);
    s21_print_decimal_string(result);
    s21_print_decimal_string(check);

  s21_print_bin_decimal(result);
  s21_print_bin_decimal(check);
    return 0;
}
