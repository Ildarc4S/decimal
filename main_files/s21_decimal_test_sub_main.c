#include "./../include/s21_decimal.h"
#include "../tests/_helpers/_debug.h"

int main(void) {
 // -79228162514264337593543950335
    s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
    // 79228162514264337593543950335
    s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
    // overflow
  s21_decimal result = {{0, 0, 0, 0}};
  s21_sub(decimal1, decimal2, &result);
  s21_print_decimal_string(decimal1);
  s21_print_decimal_string(decimal2);
  s21_print_decimal_string(result);
  return 0;
}
