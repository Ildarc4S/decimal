#include "s21_decimal.h"
#include "_debug.h"

int main() {
// 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
// -7922816251426433759354395033.5
  /*s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};*/

  /*s21_decimal decimal1 = {{10, 0 ,0 , 0}};*/
  s21_big_decimal ten = {{10, 0, 0, 0, 0, 0, 0}};
  s21_print_decimal_string(decimal1);
  /*s21_print_decimal_string(decimal2);*/
  
  s21_print_bin_decimal(decimal1);
  /*s21_print_bin_decimal(decimal2);*/

  s21_big_decimal result;
  s21_decimal_to_big_decimal(decimal1, &result);
  s21_print_bin_big_decimal(result);

  s21_binary_div(result, ten, &result);
  s21_binary_div(result, ten, &result);

  s21_print_bin_big_decimal(result);
  s21_big_decimal_to_decimal(result, &decimal1);
  s21_print_decimal_string(decimal1);

  /*s21_print_bin_decimal(res);*/
  /*s21_decimal check = {{0x66666666, 0x66666666, 0xE6666666, 0x0}};*/
  /*s21_print_decimal_string(res);*/
  /*s21_print_decimal_string(check);*/
}
