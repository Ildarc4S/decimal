#include "./../include/s21_decimal.h"

/**
 * @author majorswe arniefle sundaeka
 * @brief main-функция для тестирования кода
 */
int main() {
  printf(
      "=================================\n|||||||||||||||||||||||||||||||\n===="
      "===========================\n\n");
  // s21_big_decimal num_1 = {{16423, 0, 0, 0, 0, 0, 0}};
  // s21_decimal num_1 = {{4294967295, 0, 0, 0}};
  // s21_decimal num_1 = {{2147483647, 0, 0, 0}};
  // s21_big_decimal num_2 = {{167, 0, 0, 0, 0, 0, 0}};
  //   s21_big_decimal num_2 = {{21376, 0, 0, 0, 0, 0, 0}};
  // s21_decimal num_1 = {{16423, 0, 0, 0}};
  // s21_decimal num_2 = {{167, 0, 0, 0}};

  // // -626656361.06935169033698303587
  // s21_decimal decimal1 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x80140000}};
  // // -3656273013.5441854660747245473
  // s21_decimal decimal2 = {{0x3C2CB7A1, 0x3E0B91AF, 0x7623FB44, 0x80130000}};

  s21_decimal decimal1 = {{123456, 0, 0, 2147483648}};
  // 100011110010101100111000000000000000000000000000000
  s21_decimal decimal2 = {{2345678, 0, 0, 2147483648}};

  // s21_big_decimal decimal1 = {{123456, 0, 0, 0, 0, 0, 2147483648}};
  // // 100011110010101100111000000000000000000000000000000
  // s21_big_decimal decimal2 = {{2345678, 0, 0, 0, 0, 0, 2147483648}};

  // s21_decimal decimal1 = {{3011379200, 3340, 0, 2147483648}};
  // s21_decimal decimal2 = {{3221225472, 293209, 0, 2147483648}};

  // s21_big_decimal decimal1 = {{3011379200, 3340, 0, 0, 0, 0, 2147483648}};
  // s21_big_decimal decimal2 = {{3221225472, 293209, 0, 0, 0, 0, 2147483648}};

  // s21_print_bin_big_decimal(decimal1);
  // s21_print_bin_big_decimal(decimal2);

  // s21_print_bin_decimal(decimal1);
  // s21_print_bin_decimal(decimal2);
  s21_decimal res = {{0, 0, 0, 0}};
  // s21_big_decimal res = {{0, 0, 0, 0}};
  // s21_binary_add(decimal1, decimal2, &res);
  // s21_binary_div(decimal1, decimal2, &res);
  int bab = s21_div(decimal1, decimal2, &res);
  s21_print_bin_decimal(res);
  // printf("%d\n", bab);

  return 0;
}
