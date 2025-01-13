#ifndef ARITHMETIC_H
#define ARITHMETIC_H

#include "./type.h"
#include "./binary_operators.h"
#include "./utils.h"

#define POSITIVE 0
#define NEGATIVE 1

typedef enum {
  kCodeOK = 0,
  kCodeBig = 1,
  kCodeSmall = 2,
  kCodeZerroDiv = 3,
  // kCodeError = 4 
} S21ArithmeticResultCode;

int s21_add(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);
int s21_sub(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);
int s21_mul(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);
int s21_div(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);

int s21_add_util(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);
int s21_sub_util(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);
int s21_mul_util(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);
int s21_div_util(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);

void s21_binary_add(s21_big_decimal num_one, s21_big_decimal num_two, s21_big_decimal* result); 
void s21_binary_sub(s21_big_decimal num_one, s21_big_decimal num_two, s21_big_decimal* result); 
void s21_binary_mul(s21_big_decimal num_one, s21_big_decimal num_two, s21_big_decimal* result); 
void s21_binary_div(s21_big_decimal num_one, s21_big_decimal num_two, s21_big_decimal* result); 

void s21_mul_to_ten(s21_big_decimal* num);
int s21_div_to_ten(s21_big_decimal* num); 

#endif
