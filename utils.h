#ifndef UTILS_H
#define UTILS_H

#include "./type.h"
#include <stdio.h>

int is_null(s21_big_decimal num);
void null_decimal(s21_decimal* num);
int is_set_bit(int num, int index); 

int get_sign(s21_decimal num);
int get_scale(s21_big_decimal num);
int get_bit(s21_decimal num, int bit);
int get_max_bit(s21_big_decimal num); 

void set_sign(s21_decimal* num, int sign_value);
void set_scale(s21_decimal* num, int scale_value);
void set_bit(s21_decimal* num, int bit, int value);

void print_bin_num(int num, int symbol_count);
void print_bin_decimal(s21_decimal num);
void print_bin_big_decimal(s21_big_decimal num);

#endif
