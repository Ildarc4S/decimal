#include "../include/compare.h"

void sravnitel_operations(int byte1, int byte2, int *result, int *stop) {
  if (byte1 <= byte2) {
    if (byte1 < byte2) {
      *result = CODE_LESS;
      *stop = 1;
    }
    if (byte1 == byte2) {
      *result = CODE_EQUAL;
    }
  } else if (byte1 >= byte2) {
    if (byte1 > byte2) {
      *result = CODE_MORE;
      *stop = 1;
    }
    if (byte1 == byte2) {
      *result = CODE_EQUAL;
    }
  }
}

int s21_big_sravnivatel(s21_big_decimal num1, s21_big_decimal num2) {
  S21CompareCode result = CODE_EQUAL;
  int stop = 0;

  int sign_num1 = s21_get_big_decimal_sign(num1);
  int sign_num2 = s21_get_big_decimal_sign(num2);

  s21_normalization(&num1, &num2);

  if (s21_is_null_big_decimal(num1) && s21_is_null_big_decimal(num2)) {
    result = CODE_EQUAL;
  } else if (sign_num1 == S21_NEGATIVE && sign_num2 == S21_POSITIVE) {
    result = CODE_LESS;
  } else if (sign_num1 == S21_POSITIVE && sign_num2 == S21_NEGATIVE) {
    result = CODE_MORE;
  } else {
    for (int j = BIG_DECIMAL_LENGTH - 2; j >= 0 && !stop; j--) {
      for (int i = INT_LENGTH - 1; i >= 0 && !stop; i--) {
        int byte1 = (num1.bits[j] & (1 << i)) != 0 ? 1 : 0;
        int byte2 = (num2.bits[j] & (1 << i)) != 0 ? 1 : 0;

        sravnitel_operations(byte1, byte2, &result, &stop);
      }
    }
    if (result == CODE_LESS) {
      if (sign_num1 == S21_NEGATIVE && sign_num2 == S21_NEGATIVE) {
        result = CODE_MORE;
      }
    } else if (result == CODE_MORE) {
      if (sign_num1 == S21_NEGATIVE && sign_num2 == S21_NEGATIVE) {
        result = CODE_LESS;
      }
    }
  }
  return result;
}

int s21_sravnivatel(s21_decimal num1, s21_decimal num2) {
  s21_big_decimal num1_big, num2_big;
  s21_decimal_to_big_decimal(num1, &num1_big);
  s21_decimal_to_big_decimal(num2, &num2_big);
  s21_normalization(&num1_big, &num2_big);
  return s21_big_sravnivatel(num1_big, num2_big);
}

int s21_is_less(s21_decimal num1, s21_decimal num2) {
  return s21_sravnivatel(num1, num2) == CODE_LESS;
}

int s21_is_less_or_equal(s21_decimal num1, s21_decimal num2) {
  int result = s21_sravnivatel(num1, num2);
  return result == CODE_EQUAL || result == CODE_LESS;
}

int s21_is_greater(s21_decimal num1, s21_decimal num2) {
  return s21_sravnivatel(num1, num2) == CODE_MORE;
}

int s21_is_greater_or_equal(s21_decimal num1, s21_decimal num2) {
  int result = s21_sravnivatel(num1, num2);
  return result == CODE_EQUAL || result == CODE_MORE;
}

int s21_is_equal(s21_decimal num1, s21_decimal num2) {
  return s21_sravnivatel(num1, num2) == CODE_EQUAL;
}

int s21_is_not_equal(s21_decimal num1, s21_decimal num2) {
  return s21_sravnivatel(num1, num2) != CODE_EQUAL;
}
