#include "../include/binary_arithmetic.h"

void s21_binary_add(s21_big_decimal num_one, s21_big_decimal num_two,
                    s21_big_decimal* result) {
  s21_big_decimal temp_decimal = num_two;
  s21_big_decimal res_decimal = num_one;
  //   s21_print_bin_big_decimal(temp_decimal);
  //   s21_print_bin_big_decimal(num_two);
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

void s21_binary_div(s21_big_decimal dividend, s21_big_decimal divider,
                    s21_big_decimal* res) {
  s21_big_decimal p_remainder, temp_dividend = dividend, temp_divider = divider;
  s21_set_big_dec_sign(&temp_dividend, 0);  // модуль
  s21_set_big_dec_sign(&temp_divider, 0);   // модуль

  int divider_shift = s21_get_max_bit(dividend) - s21_get_max_bit(divider),
      enter = 1, ddcomp = s21_big_sravnivatel(temp_dividend, temp_divider);
  int temp_divider_shift = divider_shift;

  s21_null_big_decimal(&p_remainder);
  s21_null_big_decimal(res);
  s21_bin_shift_left(&divider, divider_shift);

  if (ddcomp == -1) {
    enter = 0;
    p_remainder = dividend;
  } else if (ddcomp == 0) {
    set_one_in_res(p_remainder, res);
    if (s21_get_big_decimal_sign(dividend) +
            s21_get_big_decimal_sign(divider) ==
        1) {
      s21_set_big_dec_sign(res, 1);  // меняем если хотя бы одна единичка
    }
    // установка того же знака что и в делителе или делимом
    enter = 0;
  } else if (ddcomp == 1) {  // это уже если делим
    ddcomp = s21_big_sravnivatel(dividend, divider);
    if (ddcomp == 1 || ddcomp == 0) {
      s21_binary_sub(dividend, divider, &p_remainder);
    } else {
      s21_binary_sub(divider, dividend, &p_remainder);
      s21_set_big_dec_sign(&p_remainder, 1);  // изменение знака бдецимала
    }
  }
  // printf("%d", ddcomp);
  if (enter) {
    set_one_in_res(p_remainder,
                   res);  // запись 1 в рез при положительном остатке
    while (divider_shift > 0) {
      // записываем 0 или 1 в результат частного
      s21_bin_shift_left_one(&p_remainder);
      p_remainder.bits[0] &= (~(1 << (s21_get_max_bit(p_remainder) + 1)));

      s21_big_decimal temp_p_remainder = p_remainder;
      s21_set_big_dec_sign(&temp_p_remainder, 0);  // модуль
      s21_set_big_dec_sign(&temp_divider, 0);      // модуль

      int p_rdcomp = s21_big_sravnivatel(temp_p_remainder, temp_divider);
      if (s21_get_big_decimal_sign(
              p_remainder)) {  // если остаток отриц. -> прибавляем делитель
        if (!s21_get_big_decimal_sign(divider)) {  // если divider полож.
          if (p_rdcomp == -1) {
            sub_and_set(divider, &p_remainder, 0, 1);
          } else {
            sub_and_set(divider, &p_remainder, 1, 0);
          }
        } else {  // если divider отриц.
          s21_binary_add(p_remainder, divider, &p_remainder);
        }
      } else {  // если остаток полож. -> вычитаем делитель
        if (!s21_get_big_decimal_sign(divider)) {  // если divider полож.
          if (p_rdcomp == -1) {
            sub_and_set(divider, &p_remainder, 1, 1);
          } else {
            sub_and_set(divider, &p_remainder, 2, 0);
          }
        } else {  // если divider отриц.
          if (p_rdcomp == -1) {
            sub_and_set(divider, &p_remainder, 1, 1);
          }
          sub_and_set(divider, &p_remainder, 2, 0);
        }
      }
      s21_bin_shift_left_one(res);
      set_one_in_res(p_remainder, res);
      divider_shift--;
    }
  }
  // printf("СТАРЫЙ ОСТАТОК -v-\n");
  // s21_print_bin_decimal(p_remainder);
  s21_binary_add(p_remainder, divider, &p_remainder);
  s21_bin_shift_right(&p_remainder, temp_divider_shift + 1);
  // printf("НОВЫЙ ОСТАТОК -v-\n");
  // s21_print_bin_decimal(p_remainder);
}

void set_one_in_res(s21_big_decimal p_remainder, s21_big_decimal* res) {
  if (!s21_get_big_decimal_sign(p_remainder)) {  // если остаток полож.
    res->bits[0] |= 1;
  }
}

void sub_and_set(s21_big_decimal divider, s21_big_decimal* p_remainder,
                 int sign, int mode) {
  if (mode) {
    s21_binary_sub(divider, *p_remainder, p_remainder);
  } else {
    s21_binary_sub(*p_remainder, divider, p_remainder);
  }
  s21_set_big_dec_sign(p_remainder, sign);
}