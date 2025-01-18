#include "../include/s21_decimal.h"
#include "../include/_debug.h"

int main() {
    // 26409387504754779197847983445
    s21_decimal decimal1 = {{0x55555555, 0x55555555, 0x55555555, 0x0}};
    // 0.5000000000000000000000000001
    s21_decimal decimal2 = {{0x88000001, 0x1F128130, 0x1027E72F, 0x1C0000}};
    // 13204693752377389598923991725

    s21_decimal result = {{0, 0, 0, 0}}; 
    // s21_big_decimal d1, d2;
    // s21_decimal_to_big_decimal(decimal1, &d1);
    // s21_decimal_to_big_decimal(decimal2, &d2);
    // s21_big_decimal res;
    // s21_null_big_decimal(&res);

    // s21_mul_util(decimal1, decimal2, &result);
    // s21_print_bin_big_decimal(res);
    printf("Code:%d\n", s21_mul(decimal1, decimal2, &result)); 
    
    s21_print_decimal_string(result);
    // s21_print_decimal_s  tring(check);
}