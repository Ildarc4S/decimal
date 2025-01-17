#include "../include/s21_decimal.h"
#include "../include/_debug.h"

int main() {
    // 79228162514264337593543950335
    s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
    // 79228162514264337593543950335
    s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
    // overflow
    // 7922816251426433759354395033.5
    // 7922816251426433759354395033.5000000000000000000000000001
    // 7922816251426433759354395033.5000000000000000000000000000 - trunc
    // 39614081257132168796771975167.5000000000000000000000000000
    s21_decimal check = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};

    s21_decimal result = {{0, 0, 0, 0}}; 
    printf("Code:%d\n", s21_add(decimal1, decimal2, &result)); 
    s21_print_decimal_string(result);
    s21_print_decimal_string(check);
}

