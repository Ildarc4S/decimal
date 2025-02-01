#include "../include/arithmetic.h"

int s21_add(s21_decimal value_1, s21_decimal value_2, s21_decimal* result) {
  S21ArithmeticResultCode result_code = CODE_OK;
  int sign_one = s21_get_sign(value_1);
  int sign_two = s21_get_sign(value_2);

  if (sign_one == S21_POSITIVE && sign_two == S21_POSITIVE) {
    result_code = s21_add_util(value_1, value_2, result);
  } else if (sign_one == S21_NEGATIVE && sign_two == S21_NEGATIVE) {
    s21_set_sign(&value_1, 0);
    s21_set_sign(&value_2, 0);
    result_code = s21_add_util(value_1, value_2, result);
    s21_set_sign(result, 1);
    if (result_code == CODE_BIG) {
      result_code = CODE_SMALL;
    }
  } else if (sign_one == S21_POSITIVE && sign_two == S21_NEGATIVE) {
    s21_set_sign(&value_2, 0);
    if (s21_is_greater_or_equal(value_1, value_2)) {
      result_code = s21_sub_util(value_1, value_2, result);
    } else {
      result_code = s21_sub_util(value_2, value_1, result);
      s21_set_sign(result, 1);
    }
  } else if (sign_one == S21_NEGATIVE && sign_two == S21_POSITIVE) {
    s21_set_sign(&value_1, 0);
    if (s21_is_greater_or_equal(value_1, value_2)) {
      result_code = s21_sub_util(value_1, value_2, result);
      s21_set_sign(result, 1);
    } else {
      result_code = s21_sub_util(value_2, value_1, result);
    }
  }
  return result_code;
}
int s21_sub(s21_decimal value_1, s21_decimal value_2, s21_decimal* result) {
  S21ArithmeticResultCode result_code = CODE_OK;

  int sign_one = s21_get_sign(value_1);
  int sign_two = s21_get_sign(value_2);

  if (sign_one == S21_POSITIVE && sign_two == S21_POSITIVE) {
    if (s21_is_greater_or_equal(value_1, value_2)) {
      result_code = s21_sub_util(value_1, value_2, result);
    } else {
      result_code = s21_sub_util(value_2, value_1, result);
      s21_set_sign(result, 1);
    }
  } else if (sign_one == S21_NEGATIVE && sign_two == S21_NEGATIVE) {
    if (s21_is_greater_or_equal(value_1, value_2)) {
      s21_set_sign(&value_1, 0);
      s21_set_sign(&value_2, 0);
      result_code = s21_sub_util(value_2, value_1, result);
    } else {
      s21_set_sign(&value_1, 0);
      s21_set_sign(&value_2, 0);
      result_code = s21_sub_util(value_1, value_2, result);
      s21_set_sign(result, 1);
    }
  } else if (sign_one == S21_POSITIVE && sign_two == S21_NEGATIVE) {
    s21_set_sign(&value_2, 0);
    result_code = s21_add_util(value_1, value_2, result);
  } else if (sign_one == S21_NEGATIVE && sign_two == S21_POSITIVE) {
    s21_set_sign(&value_1, 0);
    result_code = s21_add_util(value_1, value_2, result);
    s21_set_sign(result, 1);
  }

  if (result_code == CODE_BIG && s21_get_sign(*result) == 1) {
    result_code = CODE_SMALL;
  }
  return result_code;
}

int s21_mul(s21_decimal value_1, s21_decimal value_2, s21_decimal* result) {
  S21ArithmeticResultCode result_code = CODE_OK;

  int sign_one = s21_get_sign(value_1);
  int sign_two = s21_get_sign(value_2);

  if (sign_one == S21_POSITIVE && sign_two == S21_POSITIVE) {
    result_code = s21_mul_util(value_1, value_2, result);
  } else if (sign_one == S21_NEGATIVE && sign_two == S21_NEGATIVE) {
    s21_set_sign(&value_1, 0);
    s21_set_sign(&value_2, 0);
    result_code = s21_mul_util(value_1, value_2, result);
  } else if (sign_one == S21_POSITIVE && sign_two == S21_NEGATIVE) {
    s21_set_sign(&value_2, 0);
    result_code = s21_mul_util(value_1, value_2, result);
    s21_set_sign(result, 1);
  } else if (sign_one == S21_NEGATIVE && sign_two == S21_POSITIVE) {
    s21_set_sign(&value_1, 0);
    result_code = s21_mul_util(value_1, value_2, result);
    s21_set_sign(result, 1);
  }
  if (result_code == CODE_BIG && s21_get_sign(*result) == 1) {
    result_code = CODE_SMALL;
  }

  s21_decimal zero;
  s21_null_decimal(&zero);
  if (result_code == CODE_OK && s21_is_not_equal(value_1, zero) &&
      s21_is_not_equal(value_2, zero) && s21_is_equal(*result, zero)) {
    result_code = CODE_SMALL;
  }

  return result_code;
}

int s21_div(s21_decimal value_1, s21_decimal value_2, s21_decimal* result) {
  S21ArithmeticResultCode result_code = CODE_OK;

  int sign_one = s21_get_sign(value_1);
  int sign_two = s21_get_sign(value_2);

  if (s21_is_null_decimal(value_2)) {
    *result = value_1;
    result_code = CODE_ZERO_DIV;
  } else if (s21_is_null_decimal(value_1)) {
    *result = value_1;
    result_code = CODE_OK;
  } else {
    if (sign_one == S21_POSITIVE && sign_two == S21_POSITIVE) {
      result_code = s21_div_util(value_1, value_2, result);
    } else if ((sign_one == S21_NEGATIVE && sign_two == S21_POSITIVE)) {
      s21_set_sign(&value_1, 0);
      result_code = s21_div_util(value_1, value_2, result);
      s21_set_sign(result, 1);
    } else if ((sign_one == S21_POSITIVE && sign_two == S21_NEGATIVE)) {
      s21_set_sign(&value_2, 0);
      result_code = s21_div_util(value_1, value_2, result);
      s21_set_sign(result, 1);
    } else if (sign_one == S21_NEGATIVE && sign_two == S21_NEGATIVE) {
      s21_set_sign(&value_1, 0);
      result_code = s21_div_util(value_1, value_2, result);
    }

    if (result_code == CODE_BIG && s21_get_sign(*result) == 1) {
      result_code = CODE_SMALL;
    }
  }

  return result_code;
}

void s21_div_fractional(s21_big_decimal* num) {
  s21_big_decimal temp = *num;
  s21_div_to_ten(&temp);
  int scale = s21_get_big_decimal_scale(*num);
  scale--;
  while ((s21_get_max_bit(temp) >= 96 && scale > 0) || scale > 28) {
    s21_div_to_ten(&temp);
    s21_div_to_ten(num);
    scale--;
  }

  s21_set_scale(num, ++scale);
}

void s21_round_big_decimal(s21_big_decimal* num,
                           s21_big_decimal num_before_div_fraction) {
  s21_big_decimal remainder;
  s21_null_big_decimal(&remainder);
  s21_div_to_ten(num);

  int scale = s21_get_big_decimal_scale(*num) - 1;
  s21_set_scale(num, scale);

  s21_big_decimal temp_res = *num;
  s21_normalization(&num_before_div_fraction, &temp_res);
  s21_binary_sub(num_before_div_fraction, temp_res, &remainder);
  s21_set_scale(&remainder,
                s21_get_big_decimal_scale(num_before_div_fraction) - scale);
  s21_banck_round(num, remainder);
}

void s21_truncate_and_round_decimal(s21_big_decimal* num) {
  s21_big_decimal num_before_div_fraction = *num;
  s21_div_fractional(num);

  int scale = s21_get_big_decimal_scale(*num);
  if ((s21_get_max_bit(*num) >= 96 && scale > 0) || scale > 28) {
    s21_round_big_decimal(num, num_before_div_fraction);
  }
}

void s21_init_big_decimals(s21_decimal value_1, s21_decimal value_2,
                           s21_big_decimal* big_value_1,
                           s21_big_decimal* big_value_2,
                           s21_big_decimal* big_result) {
  s21_decimal_to_big_decimal(value_1, big_value_1);
  s21_decimal_to_big_decimal(value_2, big_value_2);
  s21_null_big_decimal(big_result);
}

int s21_execute_operation(s21_decimal value_1, s21_decimal value_2,
                          s21_decimal* result,
                          void(s21_bin_operation)(s21_big_decimal,
                                                  s21_big_decimal,
                                                  s21_big_decimal*)) {
  S21ArithmeticResultCode result_code = CODE_OK;
  s21_big_decimal big_value_1, big_value_2, big_result;

  s21_init_big_decimals(value_1, value_2, &big_value_1, &big_value_2,
                        &big_result);

  s21_normalization(&big_value_1, &big_value_2);
  s21_bin_operation(big_value_1, big_value_2, &big_result);

  s21_truncate_and_round_decimal(&big_result);

  if (s21_get_max_bit(big_result) >= 96) {
    result_code = CODE_BIG;
  }

  s21_big_decimal_to_decimal(big_result, result);
  return result_code;
}

int s21_add_util(s21_decimal value_1, s21_decimal value_2,
                 s21_decimal* result) {
  return s21_execute_operation(value_1, value_2, result, s21_binary_add);
}

int s21_sub_util(s21_decimal value_1, s21_decimal value_2,
                 s21_decimal* result) {
  return s21_execute_operation(value_1, value_2, result, s21_binary_sub);
}

int s21_mul_util(s21_decimal value_1, s21_decimal value_2,
                 s21_decimal* result) {
  S21ArithmeticResultCode result_code = CODE_OK;
  s21_big_decimal big_value_1, big_value_2, big_result;

  s21_init_big_decimals(value_1, value_2, &big_value_1, &big_value_2,
                        &big_result);

  int scale_first = s21_get_decimal_scale(value_1);
  int scale_second = s21_get_decimal_scale(value_2);
  scale_first = scale_first + scale_second;

  s21_binary_mul(big_value_1, big_value_2, &big_result);
  s21_set_scale(&big_result, scale_first);

  s21_truncate_and_round_decimal(&big_result);

  if (s21_get_max_bit(big_result) >= 96) {
    result_code = CODE_BIG;
  }

  s21_big_decimal_to_decimal(big_result, result);

  return result_code;
}

int s21_div_util(s21_decimal value_1, s21_decimal value_2,
                 s21_decimal* result) {
  S21ArithmeticResultCode result_code = CODE_OK;
  s21_big_decimal big_value_1, big_value_2, big_result;

  s21_init_big_decimals(value_1, value_2, &big_value_1, &big_value_2,
                        &big_result);

  int scale_from_bin_div = 0;
  s21_binary_div(big_value_1, big_value_2, &big_result, &scale_from_bin_div);
  while (scale_from_bin_div < 0) {
    scale_from_bin_div++;
    s21_mul_to_ten(&big_result);
  }
  s21_set_scale(&big_result, scale_from_bin_div);

  s21_truncate_and_round_decimal(&big_result);

  if (s21_is_null_big_decimal(big_result) &&
      s21_get_big_decimal_scale(big_result) > 1) {
    result_code = CODE_SMALL;
  }

  if (s21_get_max_bit(big_result) >= 96) {
    result_code = CODE_BIG;
  }

  s21_big_decimal_to_decimal(big_result, result);

  return result_code;
}