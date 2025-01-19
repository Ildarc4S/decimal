#include "../include/s21_decimal.h"
#include "../include/_debug.h"

int main() {
    // 7922816251426433759354395034.9999999999999999999999999000
    //                             0.999999999999999999999999000
    s21_decimal decimal1 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
    // 1.9999999999999999999999999000
    s21_decimal decimal2 = {{0x1FFFFC18, 0x7C4A04C2, 0x409F9CBC, 0x1C0000}};
    // 7922816251426433759354395035
    s21_decimal check = {{0x9999999B, 0x99999999, 0x19999999, 0x0}};

    s21_decimal result = {{0, 0, 0, 0}}; 
    printf("Code:%d\n", s21_add(decimal1, decimal2, &result)); 
    s21_print_decimal_string(result);
    s21_print_decimal_string(check);
}

