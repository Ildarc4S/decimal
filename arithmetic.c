#include "./arithmetic.h"

int s21_add(s21_decimal value_1, s21_decimal value_2, s21_decimal *result) {
  S21ArithmeticResultCode result_code = kCodeOK;
  /*if (result == NULL) {*/
    /*result_code = kCodeError; */
  /*} else if (!s21_is_correct_decimal(value_1) || !s21_is_correct_decimal(value_2)) {*/
    /*result_code = kCodeError;*/
  /*} else {*/
    /*s21_null_decimal(result);*/
  /*if (s21_get_decimal_scale(value_1) > 28 && s21_get_sign(value_1)) {*/
    /*result_code = kCodeBig; */
  /*} else {*/
    int sign_one = s21_get_sign(value_1);
    int sign_two = s21_get_sign(value_2);
    if (sign_one == 0 && sign_one == 0) {
       result_code = s21_add_util(value_1, value_2, result);
    }
  /*}*/
  return result_code;
}
int s21_sub(s21_decimal value_1, s21_decimal value_2, s21_decimal *result) { }
int s21_mul(s21_decimal value_1, s21_decimal value_2, s21_decimal *result) { }
int s21_div(s21_decimal value_1, s21_decimal value_2, s21_decimal *result) { }

int s21_add_util(s21_decimal value_1, s21_decimal value_2, s21_decimal *result) {
  S21ArithmeticResultCode result_code = kCodeOK;
  s21_big_decimal big_value_1, big_value_2;

  s21_decimal_to_big_decimal(value_1, &big_value_1);
  s21_decimal_to_big_decimal(value_2, &big_value_2);
  
  int scale1 = s21_get_big_decimal_scale(big_value_1);
  int scale2 = s21_get_big_decimal_scale(big_value_2);
  int diff = (scale1 - scale2) > 0 ? (scale1 - scale2) : (scale2 - scale1);
  printf("|%d|\n", diff);
  s21_normalization(&big_value_1, &big_value_2); 
  s21_binary_add(big_value_1, big_value_2, &big_value_1);
  s21_print_bin_big_decimal(big_value_1);
  scale1 = s21_get_big_decimal_scale(big_value_1);
  while (diff--) {
    s21_div_to_ten(&big_value_1);
    s21_set_scale(&big_value_1, --scale1); 
  }

  while (s21_get_max_bit(big_value_1) >= 96 && s21_get_big_decimal_scale(big_value_1) > 0) {
    s21_div_to_ten(&big_value_1);
  }
  if (s21_get_max_bit(big_value_1) >= 96) {
    result_code = 5; 
  }
  s21_big_decimal_to_decimal(big_value_1, result);
  s21_print_bin_decimal(*result);
  return result_code;
}

int s21_sub_util(s21_decimal value_1, s21_decimal value_2, s21_decimal *result) { }
int s21_mul_util(s21_decimal value_1, s21_decimal value_2, s21_decimal *result) { }
int s21_div_util(s21_decimal value_1, s21_decimal value_2, s21_decimal *result) { }


void s21_binary_add(s21_big_decimal num_one, s21_big_decimal num_two, s21_big_decimal* result) {
  s21_big_decimal temp_decimal = num_one; 
  int decimal_is_null = 1;
  while (!s21_is_null(temp_decimal)) {
    decimal_is_null = 0;
    s21_bin_and(num_one, num_two, &temp_decimal);
    s21_bin_shift_left_one(&temp_decimal);

    s21_bin_xor(num_one, num_two, &num_one);
    num_two = temp_decimal;
  }
  if (decimal_is_null) {
    *result = num_two;
  } else {
    *result = num_one;
  }
}

void s21_binary_sub(s21_big_decimal num_one, s21_big_decimal num_two, s21_big_decimal* result) {
  s21_big_decimal singular = {{1, 0, 0, 0, 0, 0, 0}};
  s21_bin_invert(&num_two);
  s21_binary_add(num_two, singular, &num_two);
  s21_binary_add(num_one, num_two, result);
} 

/*
 * (DECIMAL_LENGTH - i - 1)*31 + index = 59
 *
 * DECIMAL_LENGTH - i - 1 = index_max/31 => i = DECIMAL_LENGTH - 1 - index_max/31
 * index = index_max % 31
*/

void s21_binary_mul(s21_big_decimal num_one, s21_big_decimal num_two, s21_big_decimal* result) {
  s21_big_decimal temp = num_one;
  int max_bit_index = s21_get_max_bit(num_two);
  for (int i = 0; i <= max_bit_index; i++) {
    if (s21_is_set_bit(num_two.bits[i/32], i % 32)) {
      s21_binary_add(*result, temp, result);    
    }
    s21_bin_shift_left_one(&temp);
  }
}

void s21_binary_div(s21_big_decimal num_one, s21_big_decimal num_two, s21_big_decimal* result) {
   
} 


void s21_mul_to_ten(s21_big_decimal* num) {
  s21_big_decimal temp = *num;
  s21_bin_shift_left(num, 3);
  s21_bin_shift_left_one(&temp);
  
  s21_binary_add(*num, temp, num);
}

int s21_div_to_ten(s21_big_decimal* num) {
  int remainder = 0;

  for (int i = BIG_DECIMAL_LENGTH - 2; i >= 0; i--) {
    long long current = ((long long)remainder << 32) + num->bits[i];
    remainder = current % 10;
    num->bits[i] = current / 10;
  }
  return remainder;
}

void s21_normalization(s21_big_decimal* num_one, s21_big_decimal* num_two) {
  int scale_one = s21_get_big_decimal_scale(*num_one);
  int scale_two = s21_get_big_decimal_scale(*num_two);

  while (scale_one < scale_two) {
    printf("9");
    scale_one++;
    s21_mul_to_ten(num_one);
  }
  
  while (scale_one > scale_two) {
    printf("8");
    scale_two++;
    s21_mul_to_ten(num_two);
  }
  
  s21_set_scale(num_one, scale_one);
  s21_set_scale(num_two, scale_two);
}
