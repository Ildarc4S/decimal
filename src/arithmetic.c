#include "../include/arithmetic.h"

int s21_add(s21_decimal value_1, s21_decimal value_2, s21_decimal* result) {
  S21ArithmeticResultCode result_code = kCodeOK;
  if (result == NULL) {
  /*result_code = kCodeError; */
  /*} else if (!s21_is_correct_decimal(value_1) ||
   * !s21_is_correct_decimal(value_2)) {*/
  /*result_code = kCodeError;*/
  /*} else {*/
  /*s21_null_decimal(result);*/
  /*if (s21_get_decimal_scale(value_1) > 28 && s21_get_sign(value_1)) {*/
  /*result_code = kCodeBig; */
  /*} else {*/
    return 4;
  } else {
  int sign_one = s21_get_sign(value_1);
  int sign_two = s21_get_sign(value_2);

  if (sign_one == POSITIVE && sign_two == POSITIVE) {
    result_code = s21_add_util(value_1, value_2, result);
  } else if (sign_one == NEGATIVE && sign_two == NEGATIVE) {
    result_code = s21_add_util(value_1, value_2, result);
  } else if (sign_one == POSITIVE && sign_two == NEGATIVE) {
    /*printf("PN\n");*/
    s21_set_sign(&value_2, 0);
    /*printf("Val2:\n");*/
    /*s21_print_bin_decimal(value_2);*/
    if (s21_is_greater_or_equal(value_1, value_2)) { // 4 - 2 = sub(4,2) 
      /*printf("YES, great\n");*/
      result_code = s21_sub_util(value_1, value_2, result);
    } else {
      result_code = s21_sub_util(value_2, value_1, result);
      s21_set_sign(result, 1);
    }
  } else if (sign_one == NEGATIVE && sign_two == POSITIVE) {
    s21_set_sign(&value_1, 0);
    if (s21_is_greater_or_equal(value_1, value_2)) {
      result_code = s21_sub_util(value_1, value_2, result);
      s21_set_decimal_scale(result, 1);
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
      s21_set_decimal_scale(result, 1);
    }
  } else if (sign_one == NEGATIVE &&
             sign_two == NEGATIVE) {  // -3-(-2) = -3 + 2 = -1
    if (s21_is_greater_or_equal(value_1, value_2)) {
      result_code = s21_add_util(value_2, value_1, result);
    } else {
      result_code = s21_add_util(value_1, value_2, result);
      s21_set_decimal_scale(result, 1);
    }
  } else if (sign_one == POSITIVE && sign_two == NEGATIVE) {
    result_code = s21_add_util(value_1, value_2, result);
  } else if (sign_one == NEGATIVE && sign_two == POSITIVE) {
    result_code = s21_add_util(value_1, value_2, result);
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
    result_code = s21_mul_util(value_1, value_2, result);
  } else if (sign_one == POSITIVE && sign_two == NEGATIVE) {
    result_code = s21_mul_util(value_1, value_2, result);
    s21_set_decimal_scale(result, 1);
  } else if (sign_one == NEGATIVE && sign_two == POSITIVE) {
    result_code = s21_mul_util(value_1, value_2, result);
    s21_set_decimal_scale(result, 1);
  }

  return result_code;
}

int s21_div(s21_decimal value_1, s21_decimal value_2, s21_decimal* result) {}

int s21_add_util(s21_decimal value_1, s21_decimal value_2,
                 s21_decimal* result) {
  S21ArithmeticResultCode result_code = kCodeOK;
  s21_big_decimal big_value_1, big_value_2, big_result;

  s21_decimal_to_big_decimal(value_1, &big_value_1);
  s21_decimal_to_big_decimal(value_2, &big_value_2);
  s21_decimal_to_big_decimal(*result, &big_result);

  s21_normalization(&big_value_1, &big_value_2);
  /*printf("Normal:\n");*/
  /*s21_print_bin_big_decimal(big_value_1);*/
  /*s21_print_bin_big_decimal(big_value_2);*/

  s21_binary_add(big_value_1, big_value_2, &big_result);
  s21_print_bin_big_decimal(big_result);

  s21_big_decimal temp = big_result;
  s21_div_to_ten(&temp);
  int scale = s21_get_big_decimal_scale(big_result);
  printf("Scale:%d\n", scale); 
  while(s21_get_max_bit(temp) > 96 && scale > 0) {
    s21_div_to_ten(&temp);
    s21_div_to_ten(&big_result);
    s21_print_bin_big_decimal(big_result);
    scale--;
  }
  s21_print_bin_big_decimal(big_result);
  s21_set_scale(&big_result, scale);
  if (s21_get_max_bit(big_result) >= 96 && scale > 0) {
    printf("Okrug");
    s21_big_decimal big_truncate_decimal = big_result;
    /*printf("Big_trunc_dec\n");*/
    s21_print_bin_big_decimal(big_truncate_decimal);

    s21_big_decimal remaind;
    s21_null_big_decimal(&remaind);

    s21_big_decimal_truncate(&big_truncate_decimal);
    s21_print_bin_big_decimal(big_truncate_decimal);

    s21_normalization(&big_result, &big_truncate_decimal);
    s21_binary_sub(big_result, big_truncate_decimal, &remaind); 
  
    s21_print_bin_big_decimal(big_result);
    s21_div_to_ten(&big_result);
    s21_print_bin_big_decimal(big_result);

    scale--;
    s21_set_scale(&big_result, scale);
    s21_banck_round(&big_result, remaind);
  }
  s21_print_bin_big_decimal(big_result);
  if (s21_get_max_bit(big_result) >= 96) {
    printf("BIG\n");
    result_code = kCodeBig;
  }

  s21_big_decimal_to_decimal(big_result, result);
  /*s21_print_decimal_string(*result);*/
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
  /*printf("Normal:\n");*/
  /*s21_print_bin_big_decimal(big_value_1);*/
  /*s21_print_bin_big_decimal(big_value_2);*/

  s21_binary_sub(big_value_1, big_value_2, &big_result);
  s21_print_bin_big_decimal(big_result);

  s21_big_decimal temp = big_result;
  s21_big_decimal trunc_temp = big_result;

  s21_div_to_ten(&temp);
  int scale = s21_get_big_decimal_scale(big_result);
  printf("Scale:%d\n", scale); 
  while(s21_get_max_bit(temp) > 96 && scale > 1) {
    s21_div_to_ten(&temp);
    printf("%d\n", s21_get_max_bit(temp));
    s21_div_to_ten(&big_result);
    s21_print_bin_big_decimal(big_result);
    scale--;
  }
  s21_print_bin_big_decimal(big_result);
  s21_set_scale(&big_result, scale);
  if (s21_get_max_bit(big_result) >= 96 && scale > 0) {
    printf("Okrug");
    s21_big_decimal big_truncate_decimal = big_result;
    /*printf("Big_trunc_dec\n");*/
    s21_print_bin_big_decimal(big_truncate_decimal);

    s21_big_decimal remaind;
    s21_null_big_decimal(&remaind);

    s21_big_decimal_truncate(&big_truncate_decimal);
    s21_print_bin_big_decimal(big_truncate_decimal);

    s21_normalization(&trunc_temp, &big_truncate_decimal);
    s21_binary_sub(trunc_temp, big_truncate_decimal, &remaind); 
  
    s21_print_bin_big_decimal(big_result);
    s21_div_to_ten(&big_result);
    s21_print_bin_big_decimal(big_result);

    scale--;
    s21_set_scale(&big_result, scale);
    s21_banck_round(&big_result, remaind);
  }
  s21_print_bin_big_decimal(big_result);
  if (s21_get_max_bit(big_result) >= 96) {
    printf("BIG\n");
    result_code = kCodeBig;
  }

  s21_big_decimal_to_decimal(big_result, result);
  /*s21_print_decimal_string(*result);*/
  return result_code;
}

int s21_mul_util(s21_decimal value_1, s21_decimal value_2,
                 s21_decimal* result) {
  S21ArithmeticResultCode result_code = kCodeOK;
  s21_big_decimal big_value_1, big_value_2;

  s21_decimal_to_big_decimal(value_1, &big_value_1);
  s21_decimal_to_big_decimal(value_2, &big_value_2);

  s21_normalization(&big_value_1, &big_value_2);
  s21_binary_mul(big_value_1, big_value_2, &big_value_1);

  while (s21_get_max_bit(big_value_1) >= 96 &&
         s21_get_big_decimal_scale(big_value_1) > 0) {
    s21_div_to_ten(&big_value_1);
  }

  if (s21_get_max_bit(big_value_1) >= 96) {
    result_code = kCodeBig;
  }

  s21_big_decimal_to_decimal(big_value_1, result);

  return result_code;
}
int s21_div_util(s21_decimal value_1, s21_decimal value_2,
                 s21_decimal* result) {}



void s21_normalization(s21_big_decimal* num_one, s21_big_decimal* num_two) {
  int scale_one = s21_get_big_decimal_scale(*num_one);
  int scale_two = s21_get_big_decimal_scale(*num_two);
  /*printf("{%d, %d}", scale_one, scale_two);*/
  while (scale_one < scale_two) {
    /*printf("One\n");*/
    scale_one++;
    s21_mul_to_ten(num_one);
  }

  while (scale_one > scale_two) {
    /*printf("Two\n");*/
    scale_two++;
    s21_mul_to_ten(num_two);
  }

  s21_set_scale(num_one, scale_one);
  s21_set_scale(num_two, scale_two);
}
