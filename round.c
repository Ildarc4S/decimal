#include "./round.h"

int s21_floor(s21_decimal value, s21_decimal *result) { }
int s21_round(s21_decimal value, s21_decimal *result) { }

int s21_truncate(s21_decimal value, s21_decimal *result) {
  s21_big_decimal big_value;
  s21_decimal_to_big_decimal(value, &big_value);
  int exponent_len = s21_get_big_decimal_scale(big_value);
  while (exponent_len--) {
    s21_div_to_ten(&big_value);
  }
  s21_set_scale(&big_value, exponent_len);
  s21_big_decimal_to_decimal(big_value, result);
  return 0;
}


