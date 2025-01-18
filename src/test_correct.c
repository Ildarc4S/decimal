#include "../include/s21_decimal.h"
#include "../include/_debug.h"

int main() {
    // 79228162514264337593543950335//
    s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
    // -0.4999999999999999999999999999
    s21_decimal decimal2 = {{0x87FFFFFF, 0x1F128130, 0x1027E72F, 0x801C0000}};
    // 79228162514264337593543950335
    // = 79228162514264337593543950334.5000000000000000000000000001
    s21_decimal check = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};

    s21_decimal result = {{0, 0, 0, 0}}; 
    printf("Code:%d\n", s21_add(decimal1, decimal2, &result)); 
    s21_print_decimal_string(result);
    s21_print_decimal_string(check);
}

