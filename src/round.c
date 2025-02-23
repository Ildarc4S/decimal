#include "../include/round.h"
#include "../include/arithmetic.h"

int s21_floor(s21_decimal value, s21_decimal *result) {
  int func_result_code = 0;
  int sign = s21_get_sign(value);

  s21_decimal zero, one, remainder;
  s21_null_decimal(&zero);
  s21_single_decimal(&one);
  s21_null_decimal(&remainder);

  s21_set_sign(&value, 0);
  s21_decimal trunc_value;
  s21_null_decimal(&trunc_value);

  s21_truncate(value, &trunc_value);  
  s21_sub(value, trunc_value, &remainder);

  if (sign == 1 && s21_is_equal(remainder, zero) != 1) {
    s21_add(trunc_value, one, &trunc_value);
  }

  s21_set_sign(&trunc_value, sign);
  *result = trunc_value;
  return func_result_code;
}

int s21_round(s21_decimal value, s21_decimal *result) {
  int func_result_code = 0;
  int sign = s21_get_sign(value);

  s21_decimal remainder;
  s21_null_decimal(&remainder);

  s21_set_sign(&value, 0);
  s21_decimal trunc_value;
  s21_null_decimal(&trunc_value);

  s21_truncate(value, &trunc_value);  
  s21_sub(value, trunc_value, &remainder);
  
  s21_big_decimal big_trunc_value, big_remainder;
  s21_decimal_to_big_decimal(trunc_value, &big_trunc_value);
  s21_decimal_to_big_decimal(remainder, &big_remainder);

  s21_banck_round(&big_trunc_value, big_remainder);
 
  s21_big_decimal_to_decimal(big_trunc_value, result);
  s21_set_sign(result, sign);
  return func_result_code;
}

void s21_banck_round(s21_big_decimal *value, s21_big_decimal remaind) {
  s21_big_decimal five = {{5, 0, 0, 0, 0, 0}};
  s21_set_scale(&five, 1);

  // printf("Round\n");
  // s21_print_bin_big_decimal(remaind);
  // s21_print_bin_big_decimal(*value);
  // s21_print_bin_big_decimal(five);
  if (s21_big_sravnivatel(remaind, five) == 0) {
    // printf("Eq\n");
    if (!s21_is_even(*value)) {
      s21_big_decimal one = {{1, 0, 0, 0, 0, 0, 0}};
      s21_binary_add(*value, one, value);
    }
  } else if (s21_big_sravnivatel(remaind, five) > 0) {
    // printf("Great\n");
    s21_big_decimal one = {{1, 0, 0, 0, 0, 0, 0}};
    s21_binary_add(*value, one, value);
  }
}

void s21_big_decimal_truncate(s21_big_decimal *num) {
  int exponent_len = s21_get_big_decimal_scale(*num);
  /*s21_print_bin_big_decimal(*num);*/
  /*printf("Scale:%d", exponent_len);*/
  while (exponent_len) {
    /*s21_div_to_ten(num);*/
    s21_div_to_ten(num);
    exponent_len--;
  }
  /*printf("POsle\n");*/
  /*s21_print_bin_big_decimal(*num);*/
  s21_set_scale(num, exponent_len);
}

int s21_truncate(s21_decimal value, s21_decimal *result) {
  s21_big_decimal big_value;
  s21_decimal_to_big_decimal(value, &big_value);
  /*s21_print_bin_big_decimal(big_value);*/
  /*printf("\n");*/
  s21_big_decimal_truncate(&big_value);
  s21_print_bin_big_decimal(big_value);
  /*printf("\n");*/

  s21_big_decimal_to_decimal(big_value, result);
  return 0;
}
