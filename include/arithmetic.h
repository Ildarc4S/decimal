#ifndef ARITHMETIC_H
#define ARITHMETIC_H

#include "binary_arithmetic.h"
#include "compare.h"
#include "round.h"
#include "type.h"
#include "utils.h"

typedef enum {
  CODE_OK = 0,
  CODE_BIG = 1,
  CODE_SMALL = 2,
  CODE_ZERO_DIV = 3
} S21ArithmeticResultCode;

int s21_add(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);
int s21_sub(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);
int s21_mul(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);
int s21_div(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);

int s21_add_util(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);
int s21_sub_util(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);
int s21_mul_util(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);
int s21_div_util(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);

void s21_truncate_and_round_decimal(s21_big_decimal *num);

#endif
