#ifndef ARITHMETIC_H
#define ARITHMETIC_H

#include "binary_arithmetic.h"
#include "compare.h"
#include "round.h"
#include "type.h"
#include "utils.h"

#define POSITIVE 0
#define NEGATIVE 1

typedef enum {
  kCodeOK = 0,
  kCodeBig = 1,
  kCodeSmall = 2,
  kCodeZerroDiv = 3,
  // kCodeError = 4
} S21ArithmeticResultCode;

int s21_add(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);
int s21_sub(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);
int s21_mul(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);
int s21_div(s21_decimal value_1, s21_decimal value_2, s21_decimal *result,
            s21_decimal *remainder);

int s21_add_util(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);
int s21_sub_util(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);
int s21_mul_util(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);
int s21_div_util(s21_decimal value_1, s21_decimal value_2, s21_decimal *result,
                 s21_decimal *remainder);
void s21_normalization(s21_big_decimal *num_one, s21_big_decimal *num_two);

#endif
