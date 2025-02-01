#ifndef BINARY_ARITHMETIC_H
#define BINARY_ARITHMETIC_H

#include "binary_operators.h"
#include "compare.h"
#include "ten_functions.h"
#include "type.h"
#include "utils.h"

void s21_binary_add(s21_big_decimal num_one, s21_big_decimal num_two,
                    s21_big_decimal* result);
void s21_binary_sub(s21_big_decimal num_one, s21_big_decimal num_two,
                    s21_big_decimal* result);
void s21_binary_mul(s21_big_decimal num_one, s21_big_decimal num_two,
                    s21_big_decimal* result);
void s21_binary_div_cel(s21_big_decimal num_one, s21_big_decimal num_two,
                        s21_big_decimal* result, s21_big_decimal* remainder);
void s21_binary_div(s21_big_decimal num_one, s21_big_decimal num_two,
                    s21_big_decimal* result, int* sc);
#endif
