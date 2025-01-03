#include "s21_decimal.h"

void print_bin(int num) {
  for (int i = 31; i >= 0; i--) {
    printf("%d", (num >> i) & 1);
  }
  printf("\n");
}

s21_decimal s21_bin_invert(s21_decimal num) {
  s21_decimal res = {0};
  res.bits[0] = ~num.bits[0];
  res.bits[1] = ~num.bits[1];
  res.bits[2] = ~num.bits[2];
  return res;
}

s21_decimal s21_bin_add(s21_decimal num1, s21_decimal num2) {
  s21_decimal res = {0};
  res.bits[2] = num1.bits[2] & num2.bits[2];
  res.bits[1] = num1.bits[1] & num2.bits[1];
  res.bits[0] = num1.bits[0] & num2.bits[0];
  return res;
}

s21_decimal s21_bin_xor(s21_decimal num1, s21_decimal num2) {
  s21_decimal res = {0};
  res.bits[2] = num1.bits[2] ^ num2.bits[2];
  res.bits[1] = num1.bits[1] ^ num2.bits[1];
  res.bits[0] = num1.bits[0] ^ num2.bits[0];
  return res;
}

int is_null(s21_decimal num) {
  return num.bits[0] == 0 && num.bits[1] == 0 && num.bits[2] == 0 && num.bits[3] == 0;
}

s21_decimal decimal_shift_left(s21_decimal num, int index) {
  s21_decimal res;
  res.bits[2] = num.bits[2] << index;

  res.bits[1] = num.bits[1] << index;
  if (((1 << 31) & num.bits[2]) != 0) {
    res.bits[1] |= 1;
  }

  res.bits[0] = num.bits[0] << index;
  if (((1 << 31) & num.bits[1]) != 0) {
    res.bits[0] |= 1;
  }
  return res;
}

void print_bin_decimal(s21_decimal decimal) {
  print_bin(decimal.bits[2]);
  print_bin(decimal.bits[1]);
  print_bin(decimal.bits[0]);
  printf(":");
  print_bin(decimal.bits[3]);
}

s21_decimal s21_add(s21_decimal num1, s21_decimal num2) {
  s21_decimal result = num1;
  while (!is_null(result)) {
    result = decimal_shift_left(s21_bin_add(num1, num2), 1);

    num1 = s21_bin_xor(num1, num2);
    num2 = result;
  }
  return num1;
}

void sravnitel_operations(int byte1, int byte2, int *result, int *stop) {
  if (byte1 <= byte2) {
    if (byte1 < byte2) {
      *result = -1;
      *stop = 1;
    }
    if (byte1 == byte2) {
      *result = 0;
    }
  } else if (byte1 >= byte2) {
    if (byte1 > byte2) {
      *result = 1;
      *stop = 1;
    }
    if (byte1 == byte2) {
      *result = 0;
    }
  }
}

int s21_sravnivatel(s21_decimal num1, s21_decimal num2) {
  int result = 0;
  int stop = 0;
  for (int j = 0; j < 3 && !stop; j++) {
    for (int i = 31; i >= 0 && !stop; i--) {
      int byte1 = ((num1.bits[j] >> i) & 1);
      int byte2 = ((num2.bits[j] >> i) & 1);
      sravnitel_operations(byte1, byte2, &result, &stop);
    }
  }
  return result;
}

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

s21_decimal s21_abs(s21_decimal num) {
  num.bits[3] &= ~(1 << 31);
  return num;
}

int s21_get_sign(s21_decimal num) { return (num.bits[3] >> 31) & 0x1; }

s21_decimal s21_sub(s21_decimal num1, s21_decimal num2) {
  s21_decimal one = {0, 0, 1, 0};
  int positive = 0;
  int negative = 1;
  s21_decimal res = {0};

  int sign_num1 = s21_get_sign(num1);
  int sign_num2 = s21_get_sign(num2);

  if (sign_num1 == positive && sign_num2 == positive) {
    if (s21_is_greater_or_equal(num1, num2)) {
      res = s21_add(num1, s21_add(s21_bin_invert(num2), one));
    } else {
      res = s21_add(num2, s21_add(s21_bin_invert(num1), one));
      res.bits[3] = 1 << 31;
    }
  } else if (sign_num1 == positive && sign_num2 == negative) {
    res = s21_add(num1, s21_abs(num2));
  } else if (sign_num1 == negative && sign_num2 == negative) {
    if (s21_is_greater_or_equal(num1, num2)) {
      res = s21_add(s21_abs(num1), s21_add(s21_bin_invert(s21_abs(num2)), one));
      res.bits[3] = 1 << 31;
    } else {
      res = s21_add(s21_abs(num2), s21_add(s21_bin_invert(s21_abs(num1)), one));
    }
  } else if (sign_num1 == negative && sign_num2 == positive) {
    res = s21_add(s21_abs(num1), num2);
    res.bits[3] = 1 << 31;
  }
  return res;
}

