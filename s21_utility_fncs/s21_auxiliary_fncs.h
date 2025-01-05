#include "../s21_decimal.h"

s21_decimal s21_dec_init();
s21_big_decimal s21_big_dec_init();
void s21_print_bin(int num);
int s21_first_mean_one(s21_big_decimal num);
void s21_print_bin_decimal(s21_decimal decimal);
int s21_is_null(s21_decimal num);
int s21_get_sign(s21_decimal num);
s21_decimal s21_abs(s21_decimal num);
void s21_sravnitel_operations(int byte1, int byte2, int *result, int *stop);
int s21_sravnivatel(s21_decimal num1, s21_decimal num2);
int s21_get_exponent_dec(s21_decimal value);