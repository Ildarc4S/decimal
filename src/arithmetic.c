#include "../include/arithmetic.h"

#include "../include/compare.h"

int s21_add(s21_decimal value_1, s21_decimal value_2, s21_decimal* result) {
  ARITH_INIT;

  ARITH_SIGNS(
      // POS && POS
      result_code = s21_add_util(value_1, value_2, result),
      // POS && NEG
      s21_set_sign(&value_2, 0);
      if (s21_is_greater_or_equal(value_1, value_2)) {
        result_code = s21_sub_util(value_1, value_2, result);
      } else {
        result_code = s21_sub_util(value_2, value_1, result);
        s21_set_sign(result, 1);
      } if (is_null_dec(value_1) && is_null_dec(value_2) &&
            s21_get_decimal_scale(value_2) != 0 &&
            s21_get_decimal_scale(value_1) == 0) { s21_set_sign(result, 1); },
      // NEG && POS
      s21_set_sign(&value_1, 0);
      if (s21_is_greater_or_equal(value_1, value_2)) {
        result_code = s21_sub_util(value_1, value_2, result);
        s21_set_sign(result, 1);
        if (is_null_dec(value_1) && is_null_dec(value_2) &&
            s21_get_decimal_scale(value_2) != 0 &&
            s21_get_decimal_scale(value_1) == 0) {
          s21_set_sign(result, 0);
        }
      } else { result_code = s21_sub_util(value_2, value_1, result); },
      // NEG && NEG
      SET_ZEROS_SIGNS;
      result_code = s21_add_util(value_1, value_2, result);
      s21_set_sign(result, 1);
      if (result_code == kCodeBig) { result_code = kCodeSmall; })

  ARITH_RETURN;
}

int s21_sub(s21_decimal value_1, s21_decimal value_2, s21_decimal* result) {
  ARITH_INIT;

  ARITH_SIGNS(
      // POS && POS
      if (s21_is_greater_or_equal(value_1, value_2)) {
        result_code = s21_sub_util(value_1, value_2, result);
      } else {
        result_code = s21_sub_util(value_2, value_1, result);
        s21_set_sign(result, 1);
      },
      // POS && NEG
      s21_set_sign(&value_2, 0);
      result_code = s21_add_util(value_1, value_2, result),
      // NEG && POS
      s21_set_sign(&value_1, 0);
      result_code = s21_add_util(value_1, value_2, result);
      s21_set_sign(result, 1),
      // NEG && NEG
      if (s21_is_greater_or_equal(value_1, value_2)) {
        SET_ZEROS_SIGNS;
        result_code = s21_sub_util(value_2, value_1, result);
      } else {
        SET_ZEROS_SIGNS;
        result_code = s21_sub_util(value_1, value_2, result);
        s21_set_sign(result, 1);
      })

  CODE_BIG_AND_NEG;
  ARITH_RETURN;
}

int s21_mul(s21_decimal value_1, s21_decimal value_2, s21_decimal* result) {
  ARITH_INIT;

  ARITH_SIGNS(
      // POS && POS
      result_code = s21_mul_util(value_1, value_2, result),
      // POS && NEG
      s21_set_sign(&value_2, 0);
      result_code = s21_mul_util(value_1, value_2, result);
      s21_set_sign(result, 1),
      // NEG && POS
      s21_set_sign(&value_1, 0);
      result_code = s21_mul_util(value_1, value_2, result);
      s21_set_sign(result, 1),
      // NEG && NEG
      SET_ZEROS_SIGNS;
      result_code = s21_mul_util(value_1, value_2, result);)

  CODE_BIG_AND_NEG;

  s21_decimal zero;
  s21_null_decimal(&zero);
  if (result_code == kCodeOK && s21_is_not_equal(value_1, zero) &&
      s21_is_not_equal(value_2, zero) && s21_is_equal(*result, zero)) {
    result_code = kCodeSmall;
  }

  ARITH_RETURN;
}

int s21_div(s21_decimal value_1, s21_decimal value_2, s21_decimal* result) {
  ARITH_INIT;

  if (is_null_dec(value_2)) {
    *result = value_1;
    return kCodeZerroDiv;
  }

  if (is_null_dec(value_1)) {
    *result = value_1;
    return kCodeOK;
  }

  ARITH_SIGNS(
      // POS && POS
      result_code = s21_div_util(value_1, value_2, result),
      // POS && NEG
      s21_set_sign(&value_2, 0);
      result_code = s21_div_util(value_1, value_2, result);
      s21_set_sign(result, 1),
      // NEG && POS
      s21_set_sign(&value_1, 0);
      result_code = s21_div_util(value_1, value_2, result);
      s21_set_sign(result, 1),
      // NEG && NEG
      s21_set_sign(&value_1, 0);
      result_code = s21_div_util(value_1, value_2, result);)

  CODE_BIG_AND_NEG;
  ARITH_RETURN;
}

int s21_add_util(s21_decimal value_1, s21_decimal value_2,
                 s21_decimal* result) {
  UTIL_INIT;
  s21_normalization(&big_value_1, &big_value_2);
  s21_binary_add(big_value_1, big_value_2, &big_result);
  CROPPING;
  ROUNDING;
  UTIL_RETURN;
}

int s21_sub_util(s21_decimal value_1, s21_decimal value_2,
                 s21_decimal* result) {
  UTIL_INIT;
  s21_normalization(&big_value_1, &big_value_2);
  s21_binary_sub(big_value_1, big_value_2, &big_result);
  CROPPING;
  ROUNDING;
  UTIL_RETURN;
}

int s21_mul_util(s21_decimal value_1, s21_decimal value_2,
                 s21_decimal* result) {
  UTIL_INIT;
  int scale_first = s21_get_decimal_scale(value_1);
  int scale_second = s21_get_decimal_scale(value_2);
  scale_first = scale_first + scale_second;
  s21_binary_mul(big_value_1, big_value_2, &big_result);
  s21_set_scale(&big_result, scale_first);
  CROPPING;
  ROUNDING;
  UTIL_RETURN;
}

int s21_div_util(s21_decimal value_1, s21_decimal value_2,
                 s21_decimal* result) {
  UTIL_INIT;
  if (s21_is_null_dec(value_2)) {
    return kCodeZerroDiv;
  }
  int sc = 0;
  s21_binary_div(big_value_1, big_value_2, &big_result, &sc);
  while (sc < 0) {
    sc++;
    s21_mul_to_ten(&big_result);
  }
  s21_set_scale(&big_result, sc);
  CROPPING;
  ROUNDING;
  if (s21_is_null_big_dec(big_result) &&
      (s21_get_big_decimal_scale(big_result) > 1)) {
    result_code = kCodeSmall;
  }
  UTIL_RETURN;
}

void s21_normalization(s21_big_decimal* num_one, s21_big_decimal* num_two) {
  int scale_one = s21_get_big_decimal_scale(*num_one);
  int scale_two = s21_get_big_decimal_scale(*num_two);

  while (scale_one < scale_two) {
    scale_one++;
    s21_mul_to_ten(num_one);
  }

  while (scale_one > scale_two) {
    scale_two++;
    s21_mul_to_ten(num_two);
  }

  s21_set_scale(num_one, scale_one);
  s21_set_scale(num_two, scale_two);
}
