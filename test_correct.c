#include "s21_decimal.h"
#include "_debug.h"

void s21_binary_subtract(s21_big_decimal num1, s21_big_decimal num2, s21_big_decimal* result) {
    int borrow = 0; 
    for (int i = 0; i < BIG_DECIMAL_LENGTH - 1; i++) {
        int sub = num1.bits[i] - num2.bits[i] - borrow; 
        borrow = (num1.bits[i] < num2.bits[i] + borrow) ? 1 : 0; 
        result->bits[i] = sub; 
    }
}

int main() {

    // 792281625142643375935439503350
    //                              5
    // 792281625142643375935439503345

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

