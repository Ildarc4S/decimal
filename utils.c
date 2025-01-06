#include "./utils.h"

int is_null(s21_big_decimal num) {
  int result = 1;
  for(int i = 0; i < BIG_DECIMAL_LENGTH - 1 && result; i++) {
    if (num.bits[i] != 0) {
      result = 0;
    }
  }
  return result;
}
void null_decimal(s21_decimal* num) {}

int get_sign(s21_decimal num) {}
int get_scale(s21_big_decimal num) {
  int res = ((num.bits[6] & (0xffffffff << 16)) >> 16);  
  return res;
}
int get_bit(s21_decimal num, int bit) {}

void set_sign(s21_decimal* num, int sign_value) {}
void set_scale(s21_decimal* num, int scale_value) {}
void set_bit(s21_decimal* num, int bit, int value) {}

void print_bin_num(int num, int symbol_count) {
  for (int i = symbol_count; i >= 0; i--) {
    printf("%d", (num >> i) & 1);
  }
  printf("\n");
}

void print_bin_decimal(s21_decimal num) {
  for(int i = 0; i < 3; i++) {
    printf("[%d] ", i); 
    print_bin_num(num.bits[i], 31);
  } 
  printf("\n");
}

void print_bin_big_decimal(s21_big_decimal num) {
  for(int i = 0; i < 7; i++) {
    printf("[%d] ", i); 
    print_bin_num(num.bits[i], 31);
  } 
  printf("\n");
}


