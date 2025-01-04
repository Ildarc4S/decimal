#include "s21_binary_operations.h"

/*НЕ ТРЕБУЕТ РЕДАКТИРОВАНИЯ(скорее всего)*/

/**
 * @author majorswe arniefle
 * @brief инвертирует биты децимала на противоположные
 */
s21_decimal s21_bin_invert(s21_decimal num) {
  s21_decimal res = num;
  res.bits[0] = ~num.bits[0];
  res.bits[1] = ~num.bits[1];
  res.bits[2] = ~num.bits[2];
  return res;
}

/**
 * @author majorswe arniefle
 * @brief перемножает биты децимала (логическое умножение)
 */
s21_decimal s21_bin_mul(s21_decimal num1, s21_decimal num2) {
  s21_decimal res = {0};
  res.bits[2] = num1.bits[2] & num2.bits[2];
  res.bits[1] = num1.bits[1] & num2.bits[1];
  res.bits[0] = num1.bits[0] & num2.bits[0];
  return res;
}

/**
 * @author majorswe arniefle
 * @brief исключающее ИЛИ (XOR)
 */
s21_decimal s21_bin_xor(s21_decimal num1, s21_decimal num2) {
  s21_decimal res = {0};
  res.bits[2] = num1.bits[2] ^ num2.bits[2];
  res.bits[1] = num1.bits[1] ^ num2.bits[1];
  res.bits[0] = num1.bits[0] ^ num2.bits[0];
  return res;
}