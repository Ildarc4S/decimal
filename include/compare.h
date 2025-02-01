#ifndef COMPARE_H
#define COMPARE_H

#include "type.h"
#include "utils.h"

typedef enum { CODE_LESS = -1, CODE_EQUAL = 0, CODE_MORE = 1 } S21CompareCode;

int s21_is_less(s21_decimal, s21_decimal);
int s21_is_less_or_equal(s21_decimal, s21_decimal);
int s21_is_greater(s21_decimal, s21_decimal);
int s21_is_greater_or_equal(s21_decimal, s21_decimal);
int s21_is_equal(s21_decimal, s21_decimal);
int s21_is_not_equal(s21_decimal, s21_decimal);

int s21_big_sravnivatel(s21_big_decimal num1, s21_big_decimal num2);
#endif
