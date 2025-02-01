#include "../include/binary_operators.h"

void s21_bin_invert(s21_big_decimal* num) {
  for (int i = 0; i < BIG_DECIMAL_LENGTH - 1; i++) {
    num->bits[i] = ~num->bits[i];
  }
}

int s21_bin_operator_and(int num_one, int num_two) { return num_one & num_two; }

int s21_bin_operator_xor(int num_one, int num_two) { return num_one ^ num_two; }

void s21_bin_operators_cycle(s21_big_decimal num_one, s21_big_decimal num_two,
                             s21_big_decimal* result,
                             int (*bin_operator)(int num_one, int num_two)) {
  for (int i = 0; i < BIG_DECIMAL_LENGTH - 1; i++) {
    result->bits[i] = bin_operator(num_one.bits[i], num_two.bits[i]);
  }
}

void s21_bin_and(s21_big_decimal num_one, s21_big_decimal num_two,
                 s21_big_decimal* result) {
  s21_bin_operators_cycle(num_one, num_two, result, s21_bin_operator_and);
}

void s21_bin_xor(s21_big_decimal num_one, s21_big_decimal num_two,
                 s21_big_decimal* result) {
  s21_bin_operators_cycle(num_one, num_two, result, s21_bin_operator_xor);
}
void s21_bin_shift_left_one(s21_big_decimal* num) {
  int temp_bit = 0;
  for (int i = 0; i < BIG_DECIMAL_LENGTH - 1; i++) {
    int temp_num = num->bits[i];
    num->bits[i] = (num->bits[i] << 1) | temp_bit;
    temp_bit = (temp_num >> 31) & 1;
  }
}
void s21_bin_shift_left(s21_big_decimal* num, int shift) {
  for (int i = 0; i < shift; i++) {
    s21_bin_shift_left_one(num);
  }
}
