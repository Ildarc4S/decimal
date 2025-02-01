#ifndef BINARY_OPERATORS_H
#define BINARY_OPERATORS_H

#include "type.h"

int s21_bin_operator_and(int num_one, int num_two);
int s21_bin_operator_or(int num_one, int num_two);
int s21_bin_operator_xor(int num_one, int num_two);
void s21_bin_operators_cycle(s21_big_decimal num_one, s21_big_decimal num_two,
                             s21_big_decimal* result,
                             int (*bin_operator)(int num_one, int num_two));

void s21_bin_and(s21_big_decimal num_one, s21_big_decimal num_two,
                 s21_big_decimal* result);
void s21_bin_or(s21_big_decimal num_one, s21_big_decimal num_two,
                s21_big_decimal* result);
void s21_bin_xor(s21_big_decimal num_one, s21_big_decimal num_two,
                 s21_big_decimal* result);

void s21_bin_invert_ne(s21_big_decimal* num);
void s21_bin_invert(s21_big_decimal* num);
void s21_bin_shift_left_one(s21_big_decimal* num);
void s21_bin_shift_left(s21_big_decimal* num, int shift);

#endif
