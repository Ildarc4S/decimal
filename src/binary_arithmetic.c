#include "../include/binary_arithmetic.h"

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

void s21_binary_div(s21_big_decimal dividend, s21_big_decimal divider,
                    s21_big_decimal* res) {
  int res_index = 0,
      divider_shift = s21_get_max_bit(dividend) - s21_get_max_bit(divider);
  int temp_divider_shift = divider_shift;
  // printf("\n---%d\n", divider_shift);
  if (divider_shift == -1) {
  }  // то происходит это говно
  s21_big_decimal chos;
  s21_null_big_decimal(&chos);
  s21_bin_shift_left(&divider, divider_shift);
  int resss = s21_big_sravnivatel(dividend, divider);
  if (resss == 1 || resss == 0) {
    s21_binary_sub(dividend, divider, &chos);
  } else {
    s21_binary_sub(divider, dividend, &chos);
    chos.bits[6] |= HEAD_ONE;
  }

  s21_print_bin_big_decimal(chos);

  while (divider_shift >= 0) {
    // записываем 0 или 1 в результат частного
    res_index++;
	      s21_bin_shift_left_one(res);
		  s21_print_bin_big_decimal(*res);
    if (!(chos.bits[6] & (HEAD_ONE))) {  // если остаток отриц.
	printf("AAAAA\n");
      res->bits[0] |= 1;
    }
	  //   s21_print_bin_big_decimal(*res);

    s21_bin_shift_left_one(&chos);
    if (!(chos.bits[6] & (HEAD_ONE))) {  // если остаток полож.
      s21_binary_add(divider, chos, &chos);
      chos.bits[6] |= HEAD_ONE;
    } else {
      chos.bits[6] &= 0;  // 0 << 31
      s21_binary_add(chos, divider, &chos);
    }
    divider_shift--;
  }
  // printf("СТАРЫЙ ОСТАТОК -v-\n");
  // s21_print_bin_decimal(chos);
  s21_binary_add(chos, divider, &chos);
  s21_bin_shift_right(&chos, temp_divider_shift + 1);
  // printf("НОВЫЙ ОСТАТОК -v-\n");
  // s21_print_bin_decimal(chos);
}

// s21_big_decimal s21_bbin_invert(s21_big_decimal num) {
//   s21_big_decimal res = num;
//   res.bits[0] = ~num.bits[0];
//   res.bits[1] = ~num.bits[1];
//   res.bits[2] = ~num.bits[2];
//     res.bits[3] = ~num.bits[3];
//   res.bits[4] = ~num.bits[4];
//   res.bits[5] = ~num.bits[5];
//   return res;
// }

// s21_big_decimal s21_aabs(s21_big_decimal num) {
//   num.bits[6] &= ~(HEAD_ONE);
//   return num;
// }

// s21_decimal s21_normal_sub(s21_big_decimal num1, s21_big_decimal num2) {
//   s21_decimal one = {{1, 0, 0, 0}};
//   int positive = 0;
//   int negative = 1;
//   s21_decimal res = {0};

//   int sign_num1 = s21_get_sign(num1);
//   int sign_num2 = s21_get_sign(num2);

//   if (sign_num1 == positive && sign_num2 == positive) {
//     if (s21_is_greater_or_equal(num1, num2)) {
//       res = s21_add(num1, s21_add(s21_bbin_invert(num2), one));
//     } else {
//       res = s21_add(num2, s21_add(s21_bbin_invert(num1), one));
//       res.bits[3] = 1 << 31;
//     }
//   } else if (sign_num1 == positive && sign_num2 == negative) {
// 	s21_binary_add(num1, s21_aabs(num2), &res);
//     res = s21_add(num1, s21_abs(num2));
//   } else if (sign_num1 == negative && sign_num2 == negative) {
//     if (s21_is_greater_or_equal(num1, num2)) {
//       res = s21_add(s21_abs(num2), s21_add(s21_bbin_invert(s21_aabs(num1)),
//       one));
//     } else {
//       res = s21_add(s21_abs(num1), s21_add(s21_bbin_invert(s21_aabs(num2)),
//       one)); res.bits[3] = 1 << 31;
//     }
//   } else if (sign_num1 == negative && sign_num2 == positive) {
//     res = s21_add(s21_abs(num1), num2);
//     res.bits[3] = 1 << 31;
//   }
//   return res;
// }
