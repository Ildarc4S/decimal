#include "../include/compare.h"

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

int s21_big_sravnivatel(s21_big_decimal num1, s21_big_decimal num2) {
  int result = 0;
  int stop = 0;
  /*s21_print_bin_big_decimal(num1);*/
  /*s21_print_bin_big_decimal(num2);*/
  int sign_num1 = s21_get_big_decimal_sign(num1);
  int sign_num2 = s21_get_big_decimal_sign(num2);

  s21_normalization(&num1, &num2);

  if (sign_num1 == 1 && sign_num2 == 0) {
    result = -1;
  } else if (sign_num1 == 0 && sign_num2 == 1) {
    result = 1;
  } else {
    for (int j = BIG_DECIMAL_LENGTH - 2; j >= 0 && !stop; j--) {
      for (int i = 31; i >= 0 && !stop; i--) {
        int byte1 = (num1.bits[j] & (1 << i)) != 0 ? 1 : 0;
        int byte2 = (num2.bits[j] & (1 << i)) != 0 ? 1 : 0;
        sravnitel_operations(byte1, byte2, &result, &stop);
      }
    }
    if (result == -1) {
      if (sign_num1 == 1 && sign_num2 == 1) {
        result = 1;
      }
    } else if (result == 1) {
      if (sign_num1 == 1 && sign_num2 == 1) {
        result = -1;
      }
    }
  }
  return result;
}

int s21_sravnivatel(s21_decimal num1, s21_decimal num2) {
  int result = 0;
  int stop = 0;
  int sign_num1 = s21_get_sign(num1);
  int sign_num2 = s21_get_sign(num2);
  // -> big
  s21_big_decimal num1_big, num2_big;
  s21_decimal_to_big_decimal(num1, &num1_big);
  s21_decimal_to_big_decimal(num2, &num2_big);
  // norm
  s21_normalization(&num1_big, &num2_big);
  if (sign_num1 == 1 && sign_num2 == 0) {
    result = -1;
  } else if (sign_num1 == 0 && sign_num2 == 1) {
    result = 1;
  } else {
    for (int j = BIG_DECIMAL_LENGTH - 2; j >= 0 && !stop; j--) {
      for (int i = 31; i >= 0 && !stop; i--) {
        int byte1 = (num1_big.bits[j] & (1 << i)) != 0 ? 1 : 0;
        int byte2 = (num2_big.bits[j] & (1 << i)) != 0 ? 1 : 0;

        sravnitel_operations(byte1, byte2, &result, &stop);
      }
    }
    if (result == -1) {
      if (sign_num1 == 1 && sign_num2 == 1) {
        result = 1;
      }
    } else if (result == 1) {
      if (sign_num1 == 1 && sign_num2 == 1) {
        result = -1;
      }
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
