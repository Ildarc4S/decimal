#ifndef BINARY_ARITHMETIC_H
#define BINARY_ARITHMETIC_H
#include "binary_operators.h"
#include "compare.h"
#include "type.h"
#include "utils.h"

#define HEAD_ONE 1 << 31
#define INV_HEAD_ONE (~(1 << 31))

void s21_binary_add(s21_big_decimal num_one, s21_big_decimal num_two,
                    s21_big_decimal* result);
void s21_binary_sub(s21_big_decimal num_one, s21_big_decimal num_two,
                    s21_big_decimal* result);
void s21_binary_mul(s21_big_decimal num_one, s21_big_decimal num_two,
                    s21_big_decimal* result);
void s21_binary_div(s21_big_decimal divider, s21_big_decimal dividend,
                    s21_big_decimal* res);
void set_one_in_res(s21_big_decimal chos, s21_big_decimal* res);
void sub_and_set(s21_big_decimal divider, s21_big_decimal* chos, int sign,
                 int mode);
#endif
