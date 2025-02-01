#ifndef ROUND_H
#define ROUND_H

#include "arithmetic.h"
#include "binary_arithmetic.h"
#include "compare.h"
#include "ten_functions.h"
#include "type.h"
#include "utils.h"

typedef enum { CODE_ROUND_OK = 0, CODE_ROUND_ERROR = 1 } S21RoundResultCode;

int s21_floor(s21_decimal value, s21_decimal *result);
int s21_round(s21_decimal value, s21_decimal *result);
void s21_banck_round(s21_big_decimal *value, s21_big_decimal remaind);
int s21_truncate(s21_decimal value, s21_decimal *result);
void s21_big_decimal_truncate(s21_big_decimal *num);

#endif
