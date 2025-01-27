#include "./../include/s21_decimal.h"

/**
 * @author majorswe arniefle sundaeka
 * @brief main-функция для тестирования кода
 */
int main() {
  // printf(
  //     "=================================\n|||||||||||||||||||||||||||||||\n===="
  //     "===========================\n\n");
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

  // s21_decimal decimal1 = {{12345600, 0, 0, 2147483648}};
  // // 100011110010101100111000000000000000000000000000000
  // s21_decimal decimal2 = {{2345678, 0, 0, 2147483648}};

  //   // 79228162514264337593543950335
  //   s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  //   // -626656361.06935169033698303587
  //   s21_decimal decimal2 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C,
  //   0x80140000}};

  //   s21_decimal decimal1 = {{123456, 0, 0, 0}};
  //   // 100011110010101100111000000000000000000000000000000
  //   s21_decimal decimal2 = {{2345678, 0, 0, 0}};

  //   s21_big_decimal decimal1 = {{123456, 0, 0, 0, 0, 0, 2147483648}};
  //   // 100011110010101100111000000000000000000000000000000
  //   s21_big_decimal decimal2 = {{2345678, 0, 0, 0, 0, 0, 2147483648}};

  //   s21_decimal decimal1 = {{123456, 0, 0, 2147483648}};
  //   //   s21_decimal decimal1 = {{123456, 0, 0, 0}};

  //   // 100011110010101100111000000000000000000000000000000
  //   s21_decimal decimal2 = {{2345678, 0, 0, 2147483648}};

  // //   79228162514264337593543950335
  // s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // // 7922816251426433759354395033.5
  // s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
  // // 10
  // s21_decimal decimal_check = {{0xA, 0x0, 0x0, 0x0}};

  // s21_decimal decimal1 = {{0x2, 0x0, 0x0, 0x80000000}};
  // // -626656361.06935169033698303587
  // s21_decimal decimal2 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x80140000}};
  // // 0.0000000031915418469336516926
  // s21_decimal decimal_check = {{0xB2BE893E, 0xBAEA5800, 0x1, 0x1C0000}};

  // s21_decimal decimal1 = {{3011379200, 3340, 0, 2147483648}};
  // s21_decimal decimal2 = {{3221225472, 293209, 0, 2147483648}};

  // s21_big_decimal decimal1 = {{3011379200, 3340, 0, 0, 0, 0, 2147483648}};
  // s21_big_decimal decimal2 = {{3221225472, 293209, 0, 0, 0, 0, 2147483648}};

  //   s21_print_bin_big_decimal(decimal1);
  //   s21_print_bin_big_decimal(decimal2);

  // // 79228162495817593524129366015
  // s21_decimal decimal1 = {{0xFFFFFFFF, 0x0, 0xFFFFFFFF, 0x0}};
  // // 39614081257132168796771975168
  // s21_decimal decimal2 = {{0x0, 0x0, 0x80000000, 0x0}};

  // s21_decimal decimal1 = {{12, 0x0, 0x0, 0x0}};
  // s21_decimal decimal2 = {{15, 0x0, 0x0, 0x0}};

  // s21_decimal decimal1 = {{15, 0x0, 0x0, 0x0}};
  // s21_decimal decimal2 = {{12, 0x0, 0x0, 0x0}};

  s21_decimal decimal1 = {{25, 0, 0, 0}};
  s21_decimal decimal2 = {{23, 0, 0, 0}};

  // printf("\n====================vvod\n");
  s21_decimal quot = {{0, 0, 0, 0}};
  s21_decimal rmndr = {{0, 0, 0, 0}};

  // s21_print_bin_decimal(decimal1);
  // s21_print_bin_decimal(decimal2);

  // s21_big_decimal res = {{0, 0, 0, 0}};
  // s21_binary_add(decimal1, decimal2, &res);
  // s21_binary_div(decimal1, decimal2, &res);

  int bab = s21_div(decimal1, decimal2, &quot, &rmndr);
  printf("\n\n=====================res\n");
  s21_print_bin_decimal(quot);
  printf("=====================quot\n");
  s21_print_bin_decimal(rmndr);

  // printf("\n\n=====================check\n\n");

  // s21_print_bin_decimal(decimal_check);

  //   printf("%d\n", bab);

  return 0;
}
