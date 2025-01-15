#include "binary_arithmetic.h"

void s21_binary_add(s21_big_decimal num_one, s21_big_decimal num_two,
                    s21_big_decimal* result) {
  s21_big_decimal temp_decimal = num_two;
  s21_big_decimal res_decimal = num_one;
//   s21_print_bin_big_decimal(temp_decimal);
//   s21_print_bin_big_decimal(num_two);
  int decimal_is_null = 1;
  while (!s21_is_null(temp_decimal)) {
    decimal_is_null = 0;
    s21_big_decimal temp;
    s21_null_big_decimal(&temp);
    s21_bin_and(res_decimal, temp_decimal, &temp);
    // s21_print_bin_big_decimal(temp_decimal);
    s21_bin_shift_left_one(&temp);
    // s21_print_bin_big_decimal(temp_decimal);

    s21_bin_xor(res_decimal, temp_decimal, &res_decimal);
    temp_decimal = temp;
  }
//   if (decimal_is_null) {
//     *result = num_two;
//   } else {
//     *result = num_one;
//   }
    *result = res_decimal;
}

void s21_binary_sub(s21_big_decimal num_one, s21_big_decimal num_two,
                    s21_big_decimal* result) {
  s21_big_decimal singular = {{1, 0, 0, 0, 0, 0}};
  /*printf("Do Invert\n");*/
  /*s21_print_bin_big_decimal(num_one);*/
  /*s21_print_bin_big_decimal(num_two);*/

  s21_bin_invert(&num_two);

  /*printf("Invert\n");*/
  /*s21_print_bin_big_decimal(num_two);*/

  s21_binary_add(num_two, singular, &num_two);
  /*printf("Add one\n");*/
  /*s21_print_bin_big_decimal(num_two);*/

  s21_binary_add(num_one, num_two, result);
  /*printf("Add\n");*/
  /*s21_print_bin_big_decimal(*result);*/
}
// res = s21_add(num1, s21_add(s21_bin_invert(num2), one));
/*
 * (DECIMAL_LENGTH - i - 1)*31 + index = 59
 *
 * DECIMAL_LENGTH - i - 1 = index_max/31 => i = DECIMAL_LENGTH - 1 -
 * index_max/31 index = index_max % 31
 */

void s21_binary_mul(s21_big_decimal num_one, s21_big_decimal num_two,
                    s21_big_decimal* result) {
  s21_big_decimal temp = num_one;
  int max_bit_index = s21_get_max_bit(num_two);
  for (int i = 0; i <= max_bit_index; i++) {
    if (s21_is_set_bit(num_two.bits[i / 32], i % 32)) {
      s21_binary_add(*result, temp, result);
    }
    s21_bin_shift_left_one(&temp);
  }
}

void s21_binary_div(s21_big_decimal num_one, s21_big_decimal num_two,
                    s21_big_decimal* result) {
  s21_big_decimal res = {{0, 0, 0, 0, 0, 0, 0}};
  s21_big_decimal one = {{1, 0, 0, 0, 0, 0, 0}};

  int l1 = s21_get_max_bit(num_one);
  int l2 = s21_get_max_bit(num_two);
  
  int dif = l1 - l2 > 0 ? l1 - l2 : l2 - l1;
  dif += 1;

  while (dif >= 0) {
    s21_big_decimal temp = num_two; 
    s21_print_bin_big_decimal(temp);
    s21_bin_shift_left(&temp, dif);
    s21_print_bin_big_decimal(temp);
    s21_print_bin_big_decimal(num_one);
    if (s21_big_sravnivatel(num_one, temp) >= 0) {
      s21_print_bin_big_decimal(num_one);
      s21_binary_sub(num_one, temp, &num_one);
      s21_print_bin_big_decimal(num_one);
      s21_bin_or(res, one, &res); 
    }
    if (dif != 0) {
      s21_bin_shift_left_one(&res);
    }
    dif--;
  }
 *result = res;
}
