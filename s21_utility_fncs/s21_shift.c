#include "s21_shift.h"

/**
 * @author majorswe arniefle sundaeka
 * @brief функции побитовых сдвигов децималов
 *
 * ВОЗМОЖНО НАДО СОВМЕСТИТЬ КОД СДВИГА ВПРАВО И ВЛЕВО В ОДНУ ФУНКЦИЮ
 */
s21_decimal s21_decimal_shift_left_once(s21_decimal num) {
  s21_decimal res = num;

  res.bits[0] = num.bits[0] << 1;

  res.bits[1] = num.bits[1] << 1;
  if ((HEAD_ONE & num.bits[0]) != 0) {
    res.bits[1] |= 1;
  }

  res.bits[2] = num.bits[2] << 1;
  if ((HEAD_ONE & num.bits[1]) != 0) {
    res.bits[2] |= 1;
  }

  return res;
}

s21_decimal s21_decimal_shift_right_once(s21_decimal num) {
  s21_decimal res = num;

  res.bits[2] = num.bits[2] >> 1;

  res.bits[1] = num.bits[1] >> 1;
  if (!!(num.bits[2] & 1)) {
    res.bits[1] |= HEAD_ONE;
  }

  res.bits[0] = num.bits[0] >> 1;
  if (!!(num.bits[1] & 1)) {
    res.bits[0] |= HEAD_ONE;
  }

  return res;
}

s21_decimal s21_decimal_shift_cycle(
    s21_decimal num, int index, s21_decimal (*shift_func)(s21_decimal num)) {
  for (int i = 0; i < index; i++) {
    num = shift_func(num);  // Вызываем колбэк-функцию
  }
  return num;
}