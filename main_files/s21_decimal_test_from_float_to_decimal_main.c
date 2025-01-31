
#include "./../include/s21_decimal.h"
#include "./../include/ten_functions.h"
#include "../tests/_helpers/_debug.h"


#include <stdio.h>
#include <stdlib.h> 
#include <math.h>

int main(void) {
    float f = 1.97090056E-22;
    // 0.0000000000000000000000000179
    // 0.0000000000000000000001970901
    // 0.0000000000000000000000197091
    s21_decimal decimal_check = {{0x7CE629, 0x0, 0x0, 0x80190000}};

    s21_decimal res = {{0, 0, 0, 0}};
    printf("%d\n", s21_from_float_to_decimal(f, &res));

    s21_print_decimal_string(res);

    s21_print_bin_decimal(res);
    s21_print_bin_decimal(decimal_check);
  return 0;
}