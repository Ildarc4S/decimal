
#include <stdio.h>

typedef struct {
  int bits[4];
} s21_decimal;

void print_bin(int num);
s21_decimal s21_bin_invert(s21_decimal num);
s21_decimal s21_bin_add(s21_decimal num1, s21_decimal num2);
s21_decimal s21_bin_xor(s21_decimal num1, s21_decimal num2);
int is_null(s21_decimal num);
s21_decimal decimal_shift_left(s21_decimal num, int index);
void print_bin_decimal(s21_decimal decimal);
s21_decimal s21_add(s21_decimal num1, s21_decimal num2);
void sravnitel_operations(int byte1, int byte2, int *result, int *stop);
int s21_sravnivatel(s21_decimal num1, s21_decimal num2);
int s21_is_less(s21_decimal num1, s21_decimal num2);
int s21_is_less_or_equal(s21_decimal num1, s21_decimal num2);
int s21_is_greater(s21_decimal num1, s21_decimal num2);
int s21_is_greater_or_equal(s21_decimal num1, s21_decimal num2);
int s21_is_equal(s21_decimal num1, s21_decimal num2);
int s21_is_not_equal(s21_decimal num1, s21_decimal num2);
s21_decimal s21_abs(s21_decimal num);
int s21_get_sign(s21_decimal num);
s21_decimal s21_sub(s21_decimal num1, s21_decimal num2);
// int s21_floor(s21_decimal value);

s21_decimal s21_div(s21_decimal dividend, s21_decimal divider);
int s21_first_mean_one(s21_decimal number);
