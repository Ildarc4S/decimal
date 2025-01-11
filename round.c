#include "./round.h"

/*
 *
 * Нет операций s21_sub s21_add и сравнений
 */

int s21_floor(s21_decimal value, s21_decimal *result) {
  int func_result_code = 0;
  int sign = s21_get_sign(value);

  s21_decimal zero, one;
  s21_null_decimal(&zero);
  s21_single_decimal(&one);

  s21_decimal temp_value = value;

  s21_truncate(temp_value, &temp_value);
  s21_sub(value, temp_value, &value);
  
  if (sign == 1 && s21_is_greater(value, zero)) {
    s21_add(value, one, &value);
  }
  
  s21_set_sign(&value, sign);
  *result = value;
  return func_result_code;
}

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


