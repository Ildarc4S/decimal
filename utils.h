#ifndef UTILS_H
#define UTILS_H

#include "./type.h"
#include <stdio.h>

int s21_is_null(s21_big_decimal num);
void s21_null_decimal(s21_decimal* num);
int s21_is_set_bit(int num, int index); 

int s21_get_sign(s21_decimal num);
int s21_get_scale(s21_big_decimal num);
int s21_get_bit(s21_decimal num, int bit);
int s21_get_max_bit(s21_big_decimal num); 

void s21_set_sign(s21_decimal* num, int sign_value);
void s21_set_scale(s21_big_decimal* num, int scale_value);
void s21_set_bit(s21_decimal* num, int bit, int value);

int s21_negate(s21_decimal value, s21_decimal *result);

void s21_print_bin_num(int num, int symbol_count);
void s21_print_bin_decimal(s21_decimal num);
void s21_print_bin_big_decimal(s21_big_decimal num);

void s21_normalization(s21_big_decimal* num_one, s21_big_decimal* num_two);
#endif
