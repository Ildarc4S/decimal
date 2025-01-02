#include "s21_arithmetic_operators.h"

s21_decimal s21_add(s21_decimal num1, s21_decimal num2) {
  s21_decimal result = num1;
  while (!is_null(result)) {
    result = decimal_shift_left_once(s21_bin_mul(num1, num2));

    num1 = s21_bin_add(num1, num2);
    num2 = result;
  }
  return num1;
}

s21_decimal s21_sub(s21_decimal num1, s21_decimal num2) {
  s21_decimal one = {{1, 0, 0, 0}};
  int positive = 0;
  int negative = 1;
  s21_decimal res = {0};

  int sign_num1 = s21_get_sign(num1);
  int sign_num2 = s21_get_sign(num2);

  if (sign_num1 == positive && sign_num2 == positive) {
    if (s21_is_greater_or_equal(num1, num2)) {
      res = s21_add(num1, s21_add(s21_bin_invert(num2), one));
    } else {
      res = s21_add(num2, s21_add(s21_bin_invert(num1), one));
      res.bits[3] = 1 << 31;
    }
  } else if (sign_num1 == positive && sign_num2 == negative) {
    res = s21_add(num1, s21_abs(num2));
  } else if (sign_num1 == negative && sign_num2 == negative) {
    if (s21_is_greater_or_equal(num1, num2)) {
      res = s21_add(s21_abs(num2), s21_add(s21_bin_invert(s21_abs(num1)), one));
    } else {
      res = s21_add(s21_abs(num1), s21_add(s21_bin_invert(s21_abs(num2)), one));
      res.bits[3] = 1 << 31;
    }
  } else if (sign_num1 == negative && sign_num2 == positive) {
    res = s21_add(s21_abs(num1), num2);
    res.bits[3] = 1 << 31;
  }
  return res;
}

/**
 * алгоритм типа
 * 1 - сдвигаем до первой значащей
 *
 */
s21_decimal s21_div(s21_decimal dividend, s21_decimal divider) {
  int res_index = 0;
  s21_decimal res = {{0, 0, 0, 0}};
  int divider_shift =
      s21_first_mean_one(dividend) - s21_first_mean_one(divider);
  int temp_divider_shift = divider_shift;
  // printf("\n---%d\n", divider_shift);
  if (divider_shift == -1) {
  }  // то происходит это говно
  divider =
      decimal_shift_cycle(divider, divider_shift, decimal_shift_left_once);
  s21_decimal chos = s21_sub(dividend, divider);

  while (divider_shift >= 0) {
    // записываем 0 или 1 в результат частного
    res = decimal_shift_left_once(res);
    res_index++;
    if (!(chos.bits[3] & (1 << 31))) {  // если остаток отриц.
      res.bits[0] = res.bits[0] | 1;
    }
    // print_bin_decimal(res);

    chos = decimal_shift_left_once(chos);
    if (!(chos.bits[3] & (1 << 31))) {  // если остаток полож.
      chos = s21_sub(chos, divider);
    } else {  // если отрицат.
      chos.bits[3] = chos.bits[3] & (0 << 31);
      chos = s21_sub(divider, chos);
    }
    divider_shift--;
  }
  printf("СТАРЫЙ ОСТАТОК -v-\n");
  print_bin_decimal(chos);
  chos = s21_add(chos, divider);
  chos = decimal_shift_cycle(chos, temp_divider_shift + 1,
                             decimal_shift_right_once);
  printf("НОВЫЙ ОСТАТОК -v-\n");
  print_bin_decimal(chos);
  return res;
}

// надо потом мелкие функции раскидать по соответсвующим файлам
int is_set_bit(int num, int index) { return (num & (1 << index)) != 0; }

int max_bit(int num) {
  int result = -1;
  for (int i = 31; i >= 0 && result == -1; i--) {
    if (is_set_bit(num, i)) {
      result = i;
    }
  }
  return result;
}

int add_num(int num1, int num2) {
  int result = -11;
  while (result != 0) {
    result = (num1 & num2) << 1;
    num1 = num1 ^ num2;
    num2 = result;
  }
  return num1;
}

int s21_mul(int num1, int num2) {
  print_bin(num1);
  print_bin(num2);
  /*struct { */
  /*s21_decimal num1 = {{0}},*/
  /*s21_decimal num2 = {{0}} */
  /*} big_decimal;*/
  int res = 0x0;
  int tmp = num1;
  int maxb = max_bit(num2);
  printf("%d", maxb);
  for (int i = 0; i <= maxb; i++) {
    if (is_set_bit(num2, i)) {
      printf(":");
      res = add_num(res, tmp);
    }
    tmp <<= 1;
  }
  return res;
}