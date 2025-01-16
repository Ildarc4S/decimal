#include "../include/s21_decimal.h"
#include "../include/_debug.h"

int main() {
    s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
    // -0.5
    s21_decimal decimal2 = {{0x5, 0x0, 0x0, 0x80010000}};
    // 79228162514264337593543950334
    s21_decimal check = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};

    s21_decimal result = {{0, 0, 0, 0}}; 
    s21_add(decimal1, decimal2, &result); 
    s21_print_decimal_string(check);
    s21_print_decimal_string(result);
}

