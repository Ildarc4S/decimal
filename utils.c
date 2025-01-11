#include "./utils.h"

void s21_decimal_to_big_decimal(s21_decimal num, s21_big_decimal* result) {
  int mask = 0xffffffff;
  for (int i = 0; i < DECIMAL_LENGTH; i++) {
    result->bits[i] = num.bits[i] & mask;
  }
}

void s21_big_decimal_to_decimal(s21_big_decimal num, s21_decimal* result) {
  int big_decimal_len = s21_get_max_bit(num);
  if (big_decimal_len > 96) {
    // ocruglenie 
  }
  int mask = 0xffffffff;
  for (int i = 0; i < DECIMAL_LENGTH; i++) {
     result->bits[i] = num.bits[i] & mask;
  }
}

void s21_null_decimal(s21_decimal* num) {
  for (int i = 0; i < DECIMAL_LENGTH; i++) {
    num->bits[i] = 0;
  }
}

void s21_single_decimal(s21_decimal* num) {
  for (int i = 0; i < DECIMAL_LENGTH; i++) {
    num->bits[i] = 0;
  }
  num->bits[2] = 1;
}

int s21_is_null(s21_big_decimal num) {
  int result = 1;
  for(int i = 0; i < BIG_DECIMAL_LENGTH - 1 && result; i++) {
    if (num.bits[i] != 0) {
      result = 0;
    }
  }
  return result;
}

int s21_is_set_bit(int num, int index) {
  return (num & (1<<index)) != 0;
}

int s21_get_sign(s21_decimal num) {
  return (num.bits[3] >> 31) & 0x1;
}

int s21_get_big_decimal_scale(s21_big_decimal num) {
  int res = ((num.bits[BIG_DECIMAL_LENGTH - 1] & (0xffffffff << 16)) >> 16);  
  return res;
}

int s21_get_decimal_scale(s21_decimal num) {
  int res = ((num.bits[DECIMAL_LENGTH - 1] & (0xffffffff << 16)) >> 16);  
  return res;
}

int s21_get_max_bit(s21_big_decimal num) {
  int result = -1;
  for (int i = BIG_DECIMAL_LENGTH - 2; i >= 0 && result == -1; i--) {
    for (int index = 31; index >= 0 && result == -1; index--) {
      if (s21_is_set_bit(num.bits[i], index)) {
        printf("{%d, %d}\n", i, index);
        result = (i-1 < 0 ? 0: i-1)*32 + index;
      }
    }
  }
  return result;
}

void s21_set_big_decimal_sign(s21_big_decimal* num, int sign_value) {
  if (sign_value == 1) {
    num->bits[BIG_DECIMAL_LENGTH - 1] |= (1U << 31);     
  } else if (sign_value == 0) {
    num->bits[BIG_DECIMAL_LENGTH - 1] &= ~(1U << 31);
  }
}

void s21_set_decimal_sign(s21_decimal* num, int sign_value) {
  if (sign_value == 1) {
    num->bits[DECIMAL_LENGTH - 1] |= (1U << 31);     
  } else if (sign_value == 0) {
    num->bits[DECIMAL_LENGTH - 1] &= ~(1U << 31);
  }
}

void s21_set_scale(s21_big_decimal* num, int scale_value) {
  num->bits[6] |= (scale_value << 16);
}

void s21_set_bit(s21_decimal* num, int bit, int value) {
  if (value == 1) {
    num->bits[bit/32] |= (1U << (bit%32));     
  } else if(value == 0) {
    num->bits[bit/32] &= ~(1U << (bit%32));
  }
}

int s21_negate(s21_decimal value, s21_decimal *result) {
  value.bits[DECIMAL_LENGTH - 1] ^= (1U << 31);
  *result = value;
  return 1;
}

void s21_print_bin_num(int num, int symbol_count) {
  for (int i = symbol_count; i >= 0; i--) {
    printf("%d", (num >> i) & 1);
  }
  printf("\n");
}

void s21_print_bin_decimal(s21_decimal num) {
  for(int i = 0; i < 3; i++) {
    printf("[%d] ", i); 
    s21_print_bin_num(num.bits[i], 31);
  } 
  printf("\n");
}

void s21_print_bin_big_decimal(s21_big_decimal num) {
  for(int i = 0; i < 7; i++) {
    printf("[%d] ", i); 
    s21_print_bin_num(num.bits[i], 31);
  } 
  printf("\n");
}


