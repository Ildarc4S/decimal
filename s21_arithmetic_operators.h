#include "s21_comparison.h"
#include "s21_decimal.h"
#include "s21_utility_fncs/s21_auxiliary_fncs.h"
#include "s21_utility_fncs/s21_binary_operations.h"
#include "s21_utility_fncs/s21_dec_bdec_convers.h"
#include "s21_utility_fncs/s21_shift.h"

#define OK 0
#define DEC_IS_BIG 1
#define DEC_IS_SMALL 2
#define DIV_ON_ZERO 3

#define INF_P\
s21_decimal

s21_decimal s21_add(s21_decimal num1, s21_decimal num2);
s21_decimal s21_sub(s21_decimal num1, s21_decimal num2);
int s21_div(s21_decimal dividend, s21_decimal divider, s21_decimal *res);