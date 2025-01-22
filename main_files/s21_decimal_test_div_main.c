#include "./../include/s21_decimal.h"

/**
 * @author majorswe arniefle sundaeka
 * @brief main-функция для тестирования кода
 */
int main() {
  printf(
      "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"
      "!!!!!!!!!\n");
  // s21_big_decimal num_1 = {{16423, 0, 0, 0, 0, 0, 0}};
  // s21_decimal num_1 = {{4294967295, 0, 0, 0}};
  // s21_decimal num_1 = {{2147483647, 0, 0, 0}};
  // s21_big_decimal num_2 = {{167, 0, 0, 0, 0, 0, 0}};
  //   s21_big_decimal num_2 = {{21376, 0, 0, 0, 0, 0, 0}};
  s21_decimal num_1 = {{16423, 0, 0, 0}};
  s21_decimal num_2 = {{167, 0, 0, 0}};

  s21_print_bin_decimal(num_1);
  s21_print_bin_decimal(num_2);
  printf("\n");
  s21_decimal res = {{0, 0, 0, 0}};
  // s21_binary_div(num_1, num_2, &res);
  int bab = s21_div(num_1, num_2, &res);
  // s21_print_bin_decimal(res);
  // printf("\n%d--\n", bab);

  return 0;
}