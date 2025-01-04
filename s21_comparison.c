#include "s21_comparison.h"

/*НЕ ТРЕБУЕТ РЕДАКТИРОВАНИЯ(скорее всего)*/

/**
 * @author majorswe arniefle
 * @brief операции сравнивающие два децимала
 */
int s21_is_less(s21_decimal num1, s21_decimal num2) {
  return s21_sravnivatel(num1, num2) == -1;
}

int s21_is_less_or_equal(s21_decimal num1, s21_decimal num2) {
  int result = s21_sravnivatel(num1, num2);
  return result == 0 || result == -1;
}

int s21_is_greater(s21_decimal num1, s21_decimal num2) {
  return s21_sravnivatel(num1, num2) == 1;
}

int s21_is_greater_or_equal(s21_decimal num1, s21_decimal num2) {
  int result = s21_sravnivatel(num1, num2);
  return result == 0 || result == 1;
}

int s21_is_equal(s21_decimal num1, s21_decimal num2) {
  return s21_sravnivatel(num1, num2) == 0;
}

int s21_is_not_equal(s21_decimal num1, s21_decimal num2) {
  return s21_sravnivatel(num1, num2) != 0;
}
