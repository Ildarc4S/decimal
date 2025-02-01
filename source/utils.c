#include "../include/utils.h"

s21_big_decimal s21_create_one_big_decimal() {
  s21_big_decimal result = {{1, 0, 0, 0, 0, 0, 0, 0}};
  return result;
}

void s21_decimal_to_big_decimal(s21_decimal num, s21_big_decimal* result) {
  s21_null_big_decimal(result);

  for (int i = 0; i < DECIMAL_LENGTH - 1; i++) {
    result->bits[i] = num.bits[i];
  }
  result->bits[BIG_DECIMAL_LENGTH - 1] = num.bits[DECIMAL_LENGTH - 1];
}

void s21_big_decimal_to_decimal(s21_big_decimal num, s21_decimal* result) {
  for (int i = 0; i < DECIMAL_LENGTH; i++) {
    result->bits[i] = 0;
  }
  for (int i = 0; i < DECIMAL_LENGTH - 1; i++) {
    result->bits[i] = num.bits[i] & 0xffffffff;
  }
  result->bits[DECIMAL_LENGTH - 1] =
      num.bits[BIG_DECIMAL_LENGTH - 1] & 0xffffffff;
}

void s21_null_decimal(s21_decimal* num) {
  for (int i = 0; i < DECIMAL_LENGTH; i++) {
    num->bits[i] = 0;
  }
}

void s21_null_big_decimal(s21_big_decimal* num) {
  for (int i = 0; i < BIG_DECIMAL_LENGTH; i++) {
    num->bits[i] = 0;
  }
}

void s21_single_decimal(s21_decimal* num) {
  for (int i = 0; i < DECIMAL_LENGTH; i++) {
    num->bits[i] = 0;
  }
  num->bits[0] = 1;
}

int s21_is_null_big_decimal(s21_big_decimal num) {
  int result = 1;
  for (int i = 0; i < BIG_DECIMAL_LENGTH - 1 && result; i++) {
    if (num.bits[i] != 0) {
      result = 0;
    }
  }
  return result;
}

int s21_is_null_decimal(s21_decimal num) {
  int result = 1;
  for (int i = 0; i < DECIMAL_LENGTH - 1 && result; i++) {
    if (num.bits[i] != 0) {
      result = 0;
    }
  }
  return result;
}

int s21_is_even(s21_big_decimal num) { return (num.bits[0] & 1) == 0; }

int s21_is_set_bit(int num, int index) { return (num & (1 << index)) != 0; }

int s21_get_sign(s21_decimal num) {
  return (num.bits[DECIMAL_LENGTH - 1] & 0x80000000) ? 1 : 0;
}

int s21_get_big_decimal_sign(s21_big_decimal num) {
  return (num.bits[BIG_DECIMAL_LENGTH - 1] & 0x80000000) ? 1 : 0;
}

int s21_get_big_decimal_scale(s21_big_decimal num) {
  int res = (num.bits[BIG_DECIMAL_LENGTH - 1] >> SCALE_SHIFT) & 0xFF;
  return res;
}

int s21_get_decimal_scale(s21_decimal num) {
  int res = (num.bits[DECIMAL_LENGTH - 1] >> SCALE_SHIFT) & 0xFF;
  return res;
}

int s21_get_max_bit(s21_big_decimal num) {
  int result = -1;
  for (int i = BIG_DECIMAL_LENGTH - 2; i >= 0 && result == -1; i--) {
    for (int index = INT_LENGTH - 1; index >= 0 && result == -1; index--) {
      if (s21_is_set_bit(num.bits[i], index)) {
        result = i * INT_LENGTH + index;
      }
    }
  }
  return result;
}

int s21_get_bit(s21_decimal num, int bit) {
  int res = 0;
  int number = 0;
  while (bit >= INT_LENGTH) {
    bit -= INT_LENGTH;
    number++;
  }

  if ((num.bits[number] & 1 << bit) != 0) {
    res = 1;
  }
  return res;
}

// void s21_set_big_decimal_sign(s21_big_decimal* num, int sign_value) {
//   if (sign_value == 1) {
//     num->bits[BIG_DECIMAL_LENGTH - 1] |= (1 << (INT_LENGTH - 1));
//   } else if (sign_value == 0) {
//     num->bits[BIG_DECIMAL_LENGTH - 1] &= ~(1 << (INT_LENGTH - 1));
//   }
// }

// void s21_set_decimal_sign(s21_decimal* num, int sign_value) {
//   if (sign_value == 1) {
//     num->bits[DECIMAL_LENGTH - 1] |= (1 << (INT_LENGTH - 1));
//   } else if (sign_value == 0) {
//     num->bits[DECIMAL_LENGTH - 1] &= ~(1 << (INT_LENGTH - 1));
//   }
// }

void s21_set_scale(s21_big_decimal* num, int scale_value) {
  num->bits[BIG_DECIMAL_LENGTH - 1] &= 0xFF00FFFF;
  num->bits[BIG_DECIMAL_LENGTH - 1] |= (scale_value << SCALE_SHIFT);
}

void s21_set_sign(s21_decimal* num, int sign_value) {
  if (sign_value == 1) {
    num->bits[DECIMAL_LENGTH - 1] |= (1 << (INT_LENGTH - 1));
  } else if (sign_value == 0) {
    num->bits[DECIMAL_LENGTH - 1] &= ~(1 << (INT_LENGTH - 1));
  }
}

// void s21_set_decimal_scale(s21_decimal* num, int scale_value) {
//   num->bits[DECIMAL_LENGTH - 1] &= ~(0xFF << SCALE_SHIFT);
//   num->bits[DECIMAL_LENGTH - 1] |= (scale_value & 0xFF) << SCALE_SHIFT;
// }

int s21_negate(s21_decimal value, s21_decimal* result) {
  value.bits[DECIMAL_LENGTH - 1] ^= (1 << (INT_LENGTH - 1));
  *result = value;
  return 0;
}

void s21_normalization(s21_big_decimal* num_one, s21_big_decimal* num_two) {
  int scale_one = s21_get_big_decimal_scale(*num_one);
  int scale_two = s21_get_big_decimal_scale(*num_two);
  while (scale_one < scale_two) {
    scale_one++;
    s21_mul_to_ten(num_one);
  }

  while (scale_one > scale_two) {
    scale_two++;
    s21_mul_to_ten(num_two);
  }

  s21_set_scale(num_one, scale_one);
  s21_set_scale(num_two, scale_two);
}
