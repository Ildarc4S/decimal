#ifndef ARITHMETIC_H
#define ARITHMETIC_H

#include "binary_arithmetic.h"
#include "compare.h"
#include "round.h"
#include "type.h"
#include "utils.h"

#define POSITIVE 0
#define NEGATIVE 1

#define ARITH_SIGNS(case_1, case_2, case_3, case_4)            \
  if (frst_sign == POSITIVE && scnd_sign == POSITIVE) {        \
    case_1;                                                    \
  } else if (frst_sign == POSITIVE && scnd_sign == NEGATIVE) { \
    case_2;                                                    \
  } else if (frst_sign == NEGATIVE && scnd_sign == POSITIVE) { \
    case_3;                                                    \
  } else if (frst_sign == NEGATIVE && scnd_sign == NEGATIVE) { \
    case_4;                                                    \
  }

#define ARITH_INIT                               \
  S21ArithmeticResultCode result_code = kCodeOK; \
  int frst_sign = s21_get_sign(value_1);         \
  int scnd_sign = s21_get_sign(value_2);

#define ARITH_RETURN return result_code;

#define UTIL_RETURN                               \
  s21_big_decimal_to_decimal(big_result, result); \
  return result_code;

#define SET_ZEROS_SIGNS      \
  s21_set_sign(&value_1, 0); \
  s21_set_sign(&value_2, 0);

#define CODE_BIG_AND_NEG                                       \
  if (result_code == kCodeBig && s21_get_sign(*result) == 1) { \
    result_code = kCodeSmall;                                  \
  }

#define ROUNDING                                                              \
  if ((s21_get_max_bit(big_result) >= 96 && scale > 0) || scale > 28) {       \
    s21_big_decimal remainder;                                                \
    s21_null_big_decimal(&remainder);                                         \
    s21_div_to_ten(&big_result);                                              \
    scale--;                                                                  \
    s21_set_scale(&big_result, scale);                                        \
    s21_big_decimal temp_res = big_result;                                    \
    s21_normalization(&trunc_temp, &temp_res);                                \
    s21_binary_sub(trunc_temp, temp_res, &remainder);                         \
    s21_set_scale(&remainder, s21_get_big_decimal_scale(trunc_temp) - scale); \
    s21_banck_round(&big_result, remainder);                                  \
  }                                                                           \
  if (s21_get_max_bit(big_result) >= 96) {                                    \
    result_code = kCodeBig;                                                   \
  }

#define UTIL_INIT                                       \
  S21ArithmeticResultCode result_code = kCodeOK;        \
  s21_big_decimal big_value_1, big_value_2, big_result; \
  s21_decimal_to_big_decimal(value_1, &big_value_1);    \
  s21_decimal_to_big_decimal(value_2, &big_value_2);    \
  s21_null_big_decimal(&big_result);

#define CROPPING                                                     \
  s21_big_decimal trunc_temp = big_result;                           \
  s21_big_decimal temp = big_result;                                 \
  s21_div_to_ten(&temp);                                             \
  int scale = s21_get_big_decimal_scale(big_result);                 \
  scale--;                                                           \
  while ((s21_get_max_bit(temp) >= 96 && scale > 0) || scale > 28) { \
    s21_div_to_ten(&temp);                                           \
    s21_div_to_ten(&big_result);                                     \
    scale--;                                                         \
  }                                                                  \
  s21_set_scale(&big_result, ++scale);

typedef enum {
  kCodeOK = 0,
  kCodeBig = 1,
  kCodeSmall = 2,
  kCodeZerroDiv = 3,
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
