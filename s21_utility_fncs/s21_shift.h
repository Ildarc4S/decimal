#include "../s21_decimal.h"

s21_big_decimal s21_decimal_shift_left_once(s21_big_decimal num);
s21_big_decimal s21_decimal_shift_right_once(s21_big_decimal num);
s21_big_decimal s21_decimal_shift_cycle(
    s21_big_decimal num, int index,
    s21_big_decimal (*shift_func)(s21_big_decimal num));