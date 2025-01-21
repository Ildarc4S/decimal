#include "./../include/s21_decimal.h"
#include "../tests/_helpers/_debug.h"

int main(void) {
 // 26409387504754779197847983445
    s21_decimal decimal1 = {{0x55555555, 0x55555555, 0x55555555, 0x0}};
    // 0.4999999999999999999999999999
    s21_decimal decimal2 = {{0x87FFFFFF, 0x1F128130, 0x1027E72F, 0x1C0000}};
    // 13204693752377389598923991720
  s21_decimal result = {{0, 0, 0, 0}};
  s21_mul(decimal1, decimal2, &result);
  s21_print_decimal_string(decimal1);
  s21_print_decimal_string(decimal2);
  s21_print_decimal_string(result);
  return 0;
}