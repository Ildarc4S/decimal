#ifndef ARITHMETIC_H
#define ARITHMETIC_H

#include "type.h"
#include "utils.h"
#include "round.h"
#include "binary_arithmetic.h"
#include "compare.h"

#define S21_POSITIVE 0
#define S21_NEGATIVE 1

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

#endif
