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
  //   printf("\n=====%d\n", s21_get_big_decimal_sign(dividend) +
  //                             s21_get_big_decimal_sign(divider));

  dividend.bits[6] = 0;
  divider.bits[6] = 0;
  //   s21_print_bin_big_decimal(dividend);
  //   s21_print_bin_big_decimal(divider);
  s21_big_decimal p_remainder, temp_dividend = dividend, temp_divider = divider;
  int tr = 0;
  int ss = s21_big_sravnivatel(dividend, divider);

  while (s21_big_sravnivatel(dividend, divider) != 1) {
    s21_mul_to_ten(&dividend);
    tr++;
  }
  //   for (int i = 0; i < 8; i++) {
  //     s21_mul_to_ten(&dividend);
  //     tr++;
  //   }

  //   while (s21_get_max_bit(dividend) - s21_get_max_bit(divider) < 0) {
  //     s21_mul_to_ten(&dividend);
  //     tr++;
  //   }

  printf("\t\t\ttr=====%d\n\n\n", tr);

  s21_print_bin_big_decimal(dividend);
  s21_print_bin_big_decimal(divider);
  int divider_shift = s21_get_max_bit(dividend) - s21_get_max_bit(divider);

  if (divider_shift > 0) {
    s21_bin_shift_left(&divider, divider_shift);
  }
  printf("\t\tdividershift = %d\n", divider_shift);

  int temp_divider_shift = divider_shift;

  // тут начинается алгоритм
  int ddcomp = s21_big_sravnivatel(dividend, divider);

  s21_null_big_decimal(&p_remainder);
  s21_null_big_decimal(res);

  // printf("\t\t%d----\n\n", ddcomp);

  if (ddcomp == 1 || ddcomp == 0) {
    s21_binary_sub(dividend, divider, &p_remainder);
  } else {
    s21_binary_sub(divider, dividend, &p_remainder);
  }

  set_one_in_res(p_remainder,
                 res);  // запись 1 в рез при положительном остатке
  s21_print_bin_big_decimal(dividend);
  s21_print_bin_big_decimal(divider);
  printf("================================shift = %d", divider_shift);
  int i = 0;
  while (divider_shift > 1) {
    printf("\n[%d]\n", i);
    s21_print_bin_big_decimal(p_remainder);
    i++;
    // записываем 0 или 1 в результат частного

    s21_bin_shift_left_one(&p_remainder);
    p_remainder.bits[s21_get_max_bit(p_remainder) / 32] &=
        (~(1 << (s21_get_max_bit(p_remainder) % 32)));

    s21_big_decimal abs_p_remainder = p_remainder;
    s21_set_big_dec_sign(&abs_p_remainder, 0);  // модуль
    int p_rdcomp = s21_big_sravnivatel(abs_p_remainder, divider);
    // printf("%d", p_rdcomp);

    if (s21_get_big_decimal_sign(
            p_remainder)) {  // если остаток отриц. -> прибавляем делитель
      if (p_rdcomp == -1) {
        // printf("1\t%d\n\n", i);
        sub_and_set(divider, &p_remainder, 0, 1);
      } else {
        // printf("2\t%d\n\n", i);
        sub_and_set(divider, &p_remainder, 1, 0);
      }

    } else {  // если остаток полож. -> вычитаем делитель
      // printf("5\n");
      if (p_rdcomp == -1) {
        // printf("5\t%d\n\n", i);
        sub_and_set(divider, &p_remainder, 1, 1);
      } else {
        // printf("7\n");
        sub_and_set(divider, &p_remainder, 2, 0);
      }
    }

    s21_bin_shift_left_one(res);
    set_one_in_res(p_remainder, res);

    divider_shift--;
  }

  for (int i = 0; i < tr - 2; i++) {
    s21_div_to_ten(res);
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