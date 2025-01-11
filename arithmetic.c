#include "./arithmetic.h"

void s21_binary_add(s21_big_decimal num_one, s21_big_decimal num_two, s21_big_decimal* result) {
  s21_big_decimal temp_decimal = num_one; 
  int decimal_is_null = 1;
  while (!is_null(temp_decimal)) {
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
  int max_bit_index = get_max_bit(num_two);
  for (int i = 0; i <= max_bit_index; i++) {
    if (is_set_bit(num_two.bits[i/32], i % 32)) {
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
