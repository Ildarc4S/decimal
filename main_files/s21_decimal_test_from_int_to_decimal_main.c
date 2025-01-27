#include "./../include/s21_decimal.h"
#include "../tests/_helpers/_debug.h"

int main(void) {
    int number = -2147483647;
    // Converted the Int32 value -2147483647 to the Decimal value -2147483647.
    s21_decimal decimal_check = {{0x7FFFFFFF, 0x0, 0x0, 0x80000000}};
    s21_decimal res = {{0, 0, 0, 0}};
    s21_from_int_to_decimal(number, &res);
    s21_print_decimal_string(res);
  return 0;
}
