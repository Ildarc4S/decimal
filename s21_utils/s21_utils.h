#include "../s21_decimal.h"

#define copy                 \
  res.bits[0] = num.bits[0]; \
  res.bits[1] = num.bits[1]; \
  res.bits[2] = num.bits[2]; \
  res.bits[3] = num.bits[3];

s21_big_decimal s21_decimal_shift_left_once(s21_big_decimal num);
s21_big_decimal s21_decimal_shift_right_once(s21_big_decimal num);
s21_big_decimal s21_decimal_shift_cycle(
    s21_big_decimal num, int index,
    s21_big_decimal (*shift_func)(s21_big_decimal num));

s21_big_decimal s21_dec_bdec_convers(s21_decimal num);
s21_decimal s21_bdec_dec_convers(s21_big_decimal num);

s21_decimal s21_bin_invert(s21_decimal num);
s21_decimal s21_bin_mul(s21_decimal num1, s21_decimal num2);
s21_decimal s21_bin_xor(s21_decimal num1, s21_decimal num2);
s21_big_decimal s21_bin_div(s21_big_decimal bdividend, s21_big_decimal bdivider,
                            s21_big_decimal bres);

s21_decimal s21_dec_init();
s21_big_decimal s21_big_dec_init();
void s21_print_bin(int num);
int s21_first_mean_one(s21_big_decimal num);
void s21_print_bin_decimal(s21_decimal decimal);
int s21_is_null(s21_decimal num);
int s21_get_sign(s21_decimal num);
s21_decimal s21_abs(s21_decimal num);
void s21_sravnitel_operations(int byte1, int byte2, int *result, int *stop);
int s21_sravnivatel(s21_decimal num1, s21_decimal num2);
int s21_get_exponent_dec(s21_decimal value);