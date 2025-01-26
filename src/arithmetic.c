#include "../include/arithmetic.h"

#include "../include/compare.h"

int is_null_dec(s21_decimal num) {
  return num.bits[0] == 0 && num.bits[1] == 0 && num.bits[2] == 0;
}

int s21_add(s21_decimal value_1, s21_decimal value_2, s21_decimal* result) {
  S21ArithmeticResultCode result_code = kCodeOK;
  if (result == NULL) {
    return 4;
  } else {
    int sign_one = s21_get_sign(value_1);
    int sign_two = s21_get_sign(value_2);

    if (sign_one == POSITIVE && sign_two == POSITIVE) {
      result_code = s21_add_util(value_1, value_2, result);
    } else if (sign_one == NEGATIVE && sign_two == NEGATIVE) {
      s21_set_sign(&value_1, 0);
      s21_set_sign(&value_2, 0);
      result_code = s21_add_util(value_1, value_2, result);
      s21_set_sign(result, 1);
      if (result_code == kCodeBig) {
        result_code = kCodeSmall;
      }
    } else if (sign_one == POSITIVE && sign_two == NEGATIVE) {
      s21_set_sign(&value_2, 0);
      if (s21_is_greater_or_equal(value_1, value_2)) {
        result_code = s21_sub_util(value_1, value_2, result);
      } else {
        result_code = s21_sub_util(value_2, value_1, result);
        s21_set_sign(result, 1);
      }
      if (is_null_dec(value_1) && is_null_dec(value_2) &&
          s21_get_decimal_scale(value_2) != 0 &&
          s21_get_decimal_scale(value_1) == 0) {
        s21_set_sign(result, 1);
      }
    } else if (sign_one == NEGATIVE && sign_two == POSITIVE) {
      s21_set_sign(&value_1, 0);
      if (s21_is_greater_or_equal(value_1, value_2)) {
        result_code = s21_sub_util(value_1, value_2, result);
        s21_set_sign(result, 1);
        if (is_null_dec(value_1) && is_null_dec(value_2) &&
            s21_get_decimal_scale(value_2) != 0 &&
            s21_get_decimal_scale(value_1) == 0) {
          s21_set_sign(result, 0);
        }
      } else {
        result_code = s21_sub_util(value_2, value_1, result);
      }
    }
  }
  return result_code;
}
int s21_sub(s21_decimal value_1, s21_decimal value_2, s21_decimal* result) {
  S21ArithmeticResultCode result_code = kCodeOK;

  int sign_one = s21_get_sign(value_1);
  int sign_two = s21_get_sign(value_2);

  if (sign_one == POSITIVE && sign_two == POSITIVE) {
    if (s21_is_greater_or_equal(value_1, value_2)) {
      result_code = s21_sub_util(value_1, value_2, result);
    } else {
      result_code = s21_sub_util(value_2, value_1, result);
      s21_set_sign(result, 1);
    }
  } else if (sign_one == NEGATIVE && sign_two == NEGATIVE) {
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
  } else if (sign_one == POSITIVE && sign_two == NEGATIVE) {
    s21_set_sign(&value_2, 0);
    result_code = s21_add_util(value_1, value_2, result);
  } else if (sign_one == NEGATIVE && sign_two == POSITIVE) {
    s21_set_sign(&value_1, 0);
    result_code = s21_add_util(value_1, value_2, result);
    s21_set_sign(result, 1);
  }

  if (result_code == kCodeBig && s21_get_sign(*result) == 1) {
    result_code = kCodeSmall;
  }
  return result_code;
}

int s21_mul(s21_decimal value_1, s21_decimal value_2, s21_decimal* result) {
  S21ArithmeticResultCode result_code = kCodeOK;

  int sign_one = s21_get_sign(value_1);
  int sign_two = s21_get_sign(value_2);

  if (sign_one == POSITIVE && sign_two == POSITIVE) {
    result_code = s21_mul_util(value_1, value_2, result);
  } else if (sign_one == NEGATIVE &&
             sign_two == NEGATIVE) {  // -3-(-2) = -3 + 2 = -1
    s21_set_sign(&value_1, 0);
    s21_set_sign(&value_2, 0);
    result_code = s21_mul_util(value_1, value_2, result);
  } else if (sign_one == POSITIVE && sign_two == NEGATIVE) {
    s21_set_sign(&value_2, 0);
    result_code = s21_mul_util(value_1, value_2, result);
    s21_set_sign(result, 1);
  } else if (sign_one == NEGATIVE && sign_two == POSITIVE) {
    s21_set_sign(&value_1, 0);
    result_code = s21_mul_util(value_1, value_2, result);
    s21_set_sign(result, 1);
  }
  if (result_code == kCodeBig && s21_get_sign(*result) == 1) {
    result_code = kCodeSmall;
  }

  s21_decimal zero;
  s21_null_decimal(&zero);
  if (result_code == kCodeOK && s21_is_not_equal(value_1, zero) &&
      s21_is_not_equal(value_2, zero) && s21_is_equal(*result, zero)) {
    result_code = kCodeSmall;
  }

  return result_code;
}

int s21_div(s21_decimal value_1, s21_decimal value_2, s21_decimal* result) {
  S21ArithmeticResultCode result_code = kCodeOK;

  int sign_one = s21_get_sign(value_1);
  int sign_two = s21_get_sign(value_2);

  if (sign_one == POSITIVE && sign_two == POSITIVE) {
    result_code = s21_div_util(value_1, value_2, result);
  } else if ((sign_one == NEGATIVE && sign_two == POSITIVE)) {
    s21_set_sign(&value_1, 0);
    result_code = s21_div_util(value_1, value_2, result);
    s21_set_sign(result, 1);
  } else if ((sign_one == POSITIVE && sign_two == NEGATIVE)) {
    s21_set_sign(&value_2, 0);
    result_code = s21_div_util(value_1, value_2, result);
    s21_set_sign(result, 1);
  } else if (sign_one == NEGATIVE && sign_two == NEGATIVE) {
    s21_set_sign(&value_1, 0);
    result_code = s21_div_util(value_1, value_2, result);
  }

  if (result_code == kCodeBig && s21_get_sign(*result) == 1) {
    result_code = kCodeSmall;
  }

  return result_code;
}

int s21_add_util(s21_decimal value_1, s21_decimal value_2,
                 s21_decimal* result) {
  S21ArithmeticResultCode result_code = kCodeOK;
  s21_big_decimal big_value_1, big_value_2, big_result;

  s21_decimal_to_big_decimal(value_1, &big_value_1);
  s21_decimal_to_big_decimal(value_2, &big_value_2);
  s21_decimal_to_big_decimal(*result, &big_result);

  if (s21_is_null(big_value_2)) {
    return kCodeZerroDiv;
  }

  s21_normalization(&big_value_1, &big_value_2);
  s21_binary_add(big_value_1, big_value_2, &big_result);

  s21_big_decimal trunc_temp = big_result;

  s21_big_decimal temp = big_result;
  s21_div_to_ten(&temp);
  int scale = s21_get_big_decimal_scale(big_result);
  scale--;
  while (s21_get_max_bit(temp) >= 96 && scale > 0) {
    s21_div_to_ten(&temp);
    s21_div_to_ten(&big_result);
    scale--;
  }

  s21_set_scale(&big_result, ++scale);

  if (s21_get_max_bit(big_result) >= 96 && scale > 0) {
    s21_big_decimal remainder;
    s21_null_big_decimal(&remainder);
    s21_div_to_ten(&big_result);
    scale--;
    s21_set_scale(&big_result, scale);
    s21_big_decimal temp_res = big_result;
    s21_normalization(&trunc_temp, &temp_res);
    s21_binary_sub(trunc_temp, temp_res, &remainder);
    s21_set_scale(&remainder, s21_get_big_decimal_scale(trunc_temp) - scale);
    s21_banck_round(&big_result, remainder);
  }
  if (s21_get_max_bit(big_result) >= 96) {
    result_code = kCodeBig;
  }

  s21_big_decimal_to_decimal(big_result, result);
  return result_code;
}

int s21_sub_util(s21_decimal value_1, s21_decimal value_2,
                 s21_decimal* result) {
  S21ArithmeticResultCode result_code = kCodeOK;
  s21_big_decimal big_value_1, big_value_2, big_result;

  s21_decimal_to_big_decimal(value_1, &big_value_1);
  s21_decimal_to_big_decimal(value_2, &big_value_2);
  s21_decimal_to_big_decimal(*result, &big_result);

  s21_normalization(&big_value_1, &big_value_2);
  s21_binary_sub(big_value_1, big_value_2, &big_result);

  s21_big_decimal trunc_temp = big_result;

  s21_big_decimal temp = big_result;
  s21_div_to_ten(&temp);
  int scale = s21_get_big_decimal_scale(big_result);
  scale--;
  while (s21_get_max_bit(temp) >= 96 && scale > 0) {
    s21_div_to_ten(&temp);
    s21_div_to_ten(&big_result);
    scale--;
  }

  s21_set_scale(&big_result, ++scale);

  if (s21_get_max_bit(big_result) >= 96 && scale > 0) {
    s21_big_decimal remainder;
    s21_null_big_decimal(&remainder);
    s21_div_to_ten(&big_result);
    scale--;
    s21_set_scale(&big_result, scale);
    s21_big_decimal temp_res = big_result;
    s21_normalization(&trunc_temp, &temp_res);
    s21_binary_sub(trunc_temp, temp_res, &remainder);
    s21_set_scale(&remainder, s21_get_big_decimal_scale(trunc_temp) - scale);
    s21_banck_round(&big_result, remainder);
  }

  if (s21_get_max_bit(big_result) >= 96) {
    result_code = kCodeBig;
  }

  s21_big_decimal_to_decimal(big_result, result);
  return result_code;
}

int s21_mul_util(s21_decimal value_1, s21_decimal value_2,
                 s21_decimal* result) {
  S21ArithmeticResultCode result_code = kCodeOK;
  s21_big_decimal big_value_1, big_value_2;

  s21_decimal_to_big_decimal(value_1, &big_value_1);
  s21_decimal_to_big_decimal(value_2, &big_value_2);

  s21_big_decimal big_result;
  s21_null_big_decimal(&big_result);

  int scale_first = s21_get_decimal_scale(value_1);
  int scale_second = s21_get_decimal_scale(value_2);
  scale_first = scale_first + scale_second;

  s21_binary_mul(big_value_1, big_value_2, &big_result);
  s21_set_scale(&big_result, scale_first);

  s21_print_bin_big_decimal(big_result);

  s21_big_decimal trunc_temp = big_result;

  s21_big_decimal temp = big_result;
  s21_div_to_ten(&temp);
  int scale = s21_get_big_decimal_scale(big_result);
  scale--;

  int flag = 0;
  while ((s21_get_max_bit(temp) >= 96 && scale > 0) || scale > 28) {
    if (s21_get_max_bit(temp) < 96) {
      flag = 1;
    }
    s21_div_to_ten(&temp);
    s21_div_to_ten(&big_result);
    scale--;
  }

  s21_print_bin_big_decimal(big_result);

  s21_set_scale(&big_result, ++scale);

  //
  if ((s21_get_max_bit(big_result) >= 96 && scale > 0) || scale > 28) {
    s21_big_decimal remainder;
    s21_null_big_decimal(&remainder);
    s21_div_to_ten(&big_result);
    scale--;
    s21_set_scale(&big_result, scale);

    s21_print_bin_big_decimal(big_result);

    s21_big_decimal temp_res = big_result;

    s21_normalization(&trunc_temp, &temp_res);
    s21_binary_sub(trunc_temp, temp_res, &remainder);

    s21_print_bin_big_decimal(remainder);

    s21_set_scale(&remainder, s21_get_big_decimal_scale(trunc_temp) - scale);
    s21_banck_round(&big_result, remainder);
    s21_print_bin_big_decimal(big_result);
  }

  if (s21_get_max_bit(big_result) >= 96) {
    result_code = kCodeBig;
  }

  s21_big_decimal_to_decimal(big_result, result);

  return result_code;
}

int s21_div_util(s21_decimal value_1, s21_decimal value_2,
                 s21_decimal* result) {
  S21ArithmeticResultCode result_code = kCodeOK;
  s21_big_decimal big_value_1, big_value_2;

  if (value_2.bits[0] == 0 && value_2.bits[1] == 0 && value_2.bits[2] == 0) {
    return kCodeZerroDiv;
  }

  s21_decimal_to_big_decimal(value_1, &big_value_1);
  s21_decimal_to_big_decimal(value_2, &big_value_2);

  s21_big_decimal big_result;
  s21_null_big_decimal(&big_result);




  s21_binary_div(big_value_1, big_value_2, &big_result);

  // s21_print_bin_big_decimal(big_result);

  s21_big_decimal trunc_temp = big_result;

  s21_big_decimal temp = big_result;
  s21_div_to_ten(&temp);
  int scale = s21_get_big_decimal_scale(big_result);
  scale--;

  while ((s21_get_max_bit(temp) >= 96 && scale > 0) || scale > 28) {
    s21_div_to_ten(&temp);
    s21_div_to_ten(&big_result);
    scale--;
  }

  s21_set_scale(&big_result, ++scale);

  if ((s21_get_max_bit(big_result) >= 96 && scale > 0) || scale > 28) {
    s21_big_decimal remainder;
    s21_null_big_decimal(&remainder);
    s21_div_to_ten(&big_result);
    scale--;

    s21_set_scale(&big_result, scale);

    // s21_print_bin_big_decimal(big_result);

    s21_big_decimal temp_res = big_result;

    s21_normalization(&trunc_temp, &temp_res);
    s21_binary_sub(trunc_temp, temp_res, &remainder);

    // s21_print_bin_big_decimal(remainder);

    s21_set_scale(&remainder, s21_get_big_decimal_scale(trunc_temp) - scale);
    s21_banck_round(&big_result, remainder);
    // s21_print_bin_big_decimal(big_result);
  }

  if (big_result.bits[0] == 0 && big_result.bits[1] == 0 &&
      big_result.bits[2] == 0 && big_result.bits[1] == 0 &&
      big_result.bits[2] == 0 && big_result.bits[3] == 0 &&
      big_result.bits[4] == 0 && big_result.bits[5] == 0 &&
      big_result.bits[6] != 0) {
    result_code = kCodeSmall;
  }

  if (s21_get_max_bit(big_result) >= 96) {
    result_code = kCodeBig;
  }

  s21_big_decimal_to_decimal(big_result, result);

  return result_code;
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
