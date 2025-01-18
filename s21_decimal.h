#ifndef S21_DECIMAL_H
#define S21_DECIMAL_H
#include <stdio.h>

#include "s21_utils/s21_utils.h"
/**
 * ОСНОВНОЙ h-файл
 *
 * здесь будут представлены основные структуры, макросы
 */

#define HEAD_ONE 1 << 31

typedef struct {
  unsigned int bits[4];
} s21_decimal;

typedef struct {
  unsigned int bits[7];
} s21_big_decimal;

#define OK 0
#define DEC_IS_BIG 1
#define DEC_IS_SMALL 2
#define DIV_ON_ZERO 3

#define INF_P\
s21_decimal

s21_decimal s21_add(s21_decimal num1, s21_decimal num2);
s21_decimal s21_sub(s21_decimal num1, s21_decimal num2);
int s21_div(s21_decimal dividend, s21_decimal divider, s21_decimal *res);

int s21_is_less(s21_decimal num1, s21_decimal num2);
int s21_is_less_or_equal(s21_decimal num1, s21_decimal num2);
int s21_is_greater(s21_decimal num1, s21_decimal num2);
int s21_is_greater_or_equal(s21_decimal num1, s21_decimal num2);
int s21_is_equal(s21_decimal num1, s21_decimal num2);
int s21_is_not_equal(s21_decimal num1, s21_decimal num2);

// int s21_floor(s21_decimal value);

#endif  // S21_DECIMAL_H