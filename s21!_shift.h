#include "s21!_decimal.h"

s21_decimal s21_decimal_shift_left_once(s21_decimal num);
s21_decimal s21_decimal_shift_right_once(s21_decimal num);
s21_decimal s21_decimal_shift_cycle(s21_decimal num, int index,
                                    s21_decimal (*shift_func)(s21_decimal num));