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

s21_decimal s21_div(s21_decimal dividend, s21_decimal divider) {
  // int divider_shift = 0;
  int index = s21_first_mean_one(dividend) - s21_first_mean_one(divider);
  printf("%d", index);
  if (index == -1) {
  }  // то происходит это говно
  divider = decimal_shift_left(divider, index);
  s21_decimal res = s21_sub(dividend, divider);
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