#include "../include/binary_arithmetic.h"

void s21_binary_add(s21_big_decimal num_one, s21_big_decimal num_two,
                    s21_big_decimal* result) {
  s21_big_decimal temp_decimal = num_two;
  s21_big_decimal res_decimal = num_one;
  while (!s21_is_null_big_decimal(temp_decimal)) {
    s21_big_decimal temp;
    s21_null_big_decimal(&temp);
    s21_bin_and(res_decimal, temp_decimal, &temp);
    s21_bin_shift_left_one(&temp);

    s21_bin_xor(res_decimal, temp_decimal, &res_decimal);
    temp_decimal = temp;
  }
  *result = res_decimal;
}

void s21_binary_sub(s21_big_decimal num_one, s21_big_decimal num_two,
                    s21_big_decimal* result) {
  s21_big_decimal singular = s21_create_one_big_decimal();

  s21_bin_invert(&num_two);
  s21_binary_add(num_two, singular, &num_two);

  s21_binary_add(num_one, num_two, result);
}

void s21_binary_mul(s21_big_decimal num_one, s21_big_decimal num_two,
                    s21_big_decimal* result) {
  s21_big_decimal temp = num_one;
  int max_bit_index = s21_get_max_bit(num_two);
  for (int i = 0; i <= max_bit_index; i++) {
    if (s21_is_set_bit(num_two.bits[i / INT_LENGTH], i % INT_LENGTH)) {
      s21_binary_add(*result, temp, result);
    }
    s21_bin_shift_left_one(&temp);
  }
}

void s21_binary_integer_div(s21_big_decimal num_one, s21_big_decimal num_two,
                            s21_big_decimal* result,
                            s21_big_decimal* remainder) {
  num_one.bits[BIG_DECIMAL_LENGTH - 1] = 0;
  num_two.bits[BIG_DECIMAL_LENGTH - 1] = 0;

  s21_big_decimal res = num_one;
  s21_null_big_decimal(result);
  *remainder = num_one;

  while (s21_big_sravnivatel(res, num_two) >= 0) {
    int q = 0;
    num_one = res;
    s21_big_decimal temp = num_two;
    s21_big_decimal temp1 = num_two;
    while (s21_big_sravnivatel(temp, num_one) <= 0) {
      temp = num_two;
      s21_big_decimal two = s21_create_one_big_decimal();
      s21_bin_shift_left(&two, q);
      s21_big_decimal r;
      s21_null_big_decimal(&r);
      s21_binary_mul(temp, two, &r);
      temp = r;
      q++;
    }
    s21_big_decimal tk = s21_create_one_big_decimal();
    if (q > 1) q -= 2;

    s21_bin_shift_left(&tk, q);
    s21_big_decimal rer;
    s21_binary_add(*result, tk, &rer);
    *result = rer;

    s21_big_decimal twot = s21_create_one_big_decimal();
    s21_bin_shift_left(&twot, q);

    s21_big_decimal rt;
    s21_null_big_decimal(&rt);
    s21_binary_mul(temp1, twot, &rt);

    s21_null_big_decimal(&res);
    s21_binary_sub(num_one, rt, &res);
  }
  *remainder = res;
}

void s21_binary_div(s21_big_decimal num_one, s21_big_decimal num_two,
                    s21_big_decimal* result, int* sc) {
  s21_big_decimal res, rem, temp;

  s21_null_big_decimal(&res);
  s21_null_big_decimal(&rem);
  s21_null_big_decimal(&temp);

  int scale =
      s21_get_big_decimal_scale(num_one) - s21_get_big_decimal_scale(num_two);
  do {
    scale++;
    s21_binary_integer_div(num_one, num_two, &temp, &num_one);

    s21_binary_add(res, temp, &res);
    s21_mul_to_ten(&res);
    s21_mul_to_ten(&num_one);
  } while (!s21_is_null_big_decimal(num_one) && scale <= 60 &&
           s21_get_max_bit(res) <= 210);
  *result = res;
  *sc = scale;
}