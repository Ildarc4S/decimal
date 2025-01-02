#include "s21_decimal.h"

/**
 * Функции Артура, осторожнее, малыш
 *
 */

/**
 * хз зачем я написал эту функцию, в общем она отдает
 * в формате инт положение запятой в децимале,
 * юзайте пожалуйста, я что зря писал
 */
// int fun1(s21_decimal value) {
//   int j = 0;
//   int res = 0;
//   int stepen_dvoiki = 0;
//   for (int i = 16; i < 23; i++) {
//     if (res + stepen_dvoiki < 28) {
//       res += stepen_dvoiki;
//     } else {
//       return -60065;
//     }
//     stepen_dvoiki = ((value.bits[3] >> i) & 1);  // нужно ли умножаться
//     for (int k = 0; k < j; k++) {
//       stepen_dvoiki *= 2;
//     }
//     j++;
//   }
//   return res;
// }

// int s21_floor(s21_decimal value) {
//   int res = fun1(value);
//   for (int i = 0; i <= res; i++) {
//   }
//  }

s21_decimal decimal_shift_right_once(s21_decimal num) {
  s21_decimal res = num;

  res.bits[2] = num.bits[2] >> 1;

  res.bits[1] = num.bits[1] >> 1;
  if (!!(num.bits[2] & 1)) {
    res.bits[1] |= (1 << 31);
  }

  res.bits[0] = num.bits[0] >> 1;
  if (!!(num.bits[1] & 1)) {
    res.bits[0] |= (1 << 31);
  }

  return res;
}

s21_decimal decimal_shift_right_cycle(s21_decimal num, int index) {
  for (int i = 0; i < index; i++) {
    num = decimal_shift_right_once(num);
  }
  return num;
}

s21_decimal decimal_shift_left_cycle(s21_decimal num, int index) {
  for (int i = 0; i < index; i++) {
    num = decimal_shift_left_once(num);
  }
  return num;
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
  // printf("\n---%d\n", divider_shift);
  if (divider_shift == -1) {
  }  // то происходит это говно
  divider = decimal_shift_left_cycle(divider, divider_shift);
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
  return res;
}

/**
 * должна возвращать индекс первого значащего элемента(единички)
 */
int s21_first_mean_one(s21_decimal number) {
  int res = -1;
  int flag = 1;
  for (int i = 96 - 1; i >= 0 && flag; i--) {
    if (!!((1 << (i % 32)) & number.bits[(i / 32)])) {
      res = i;
      flag = 0;
    }
  }
  return res;
}