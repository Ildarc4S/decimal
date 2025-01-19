#include "../include/s21_decimal.h"
#include "../include/_debug.h"

int main() {
    // 0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
    // -0.0000000000000000000000000000
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x801C0000}};
    // -0.0000000000000000000000000000
    s21_decimal check = {{0x0, 0x0, 0x0, 0x801C0000}};

    s21_decimal result = {{0, 0, 0, 0}};

    printf("Code:%d\n", s21_add(decimal1, decimal2, &result)); 
    s21_print_bin_decimal(result);
    s21_print_decimal_string(result);
    s21_print_decimal_string(check);
}

