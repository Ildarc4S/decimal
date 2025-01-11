#ifndef ROUND_H
#define ROUND_H

#include "./type.h"
#include "./arithmetic.h"
#include "./utils.h"
#include "./compare.h"

int s21_floor(s21_decimal value, s21_decimal *result);
int s21_round(s21_decimal value, s21_decimal *result);
int s21_truncate(s21_decimal value, s21_decimal *result);

#endif
