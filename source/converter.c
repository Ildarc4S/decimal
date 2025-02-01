#include "../include/converter.h"

void s21_calculate_float_scale(int mantissa, char *ptr_to_float_string,
                               s21_big_decimal *big_decimal, int shift) {
  int scale = 0;
  char scale_sign = *ptr_to_float_string;
  ptr_to_float_string++;
  char scale_string[10] = "\0";
  int scale_index = 0;

  while (*ptr_to_float_string != '\0') {
    scale_string[scale_index++] = *ptr_to_float_string;
    ptr_to_float_string++;
  }
  scale = atoi(scale_string);
  if (scale_sign == '+') {
    scale -= 6;
    int i = 0;
    big_decimal->bits[0] = mantissa;
    while (i < scale) {
      s21_mul_to_ten(big_decimal);
      i++;
    }
    if (scale < 0) {
      scale = scale * (-1);
      s21_set_scale(big_decimal, scale);
    }
  } else {
    scale = scale + shift;
    big_decimal->bits[0] = mantissa;
    s21_set_scale(big_decimal, scale);
  }
}

char *s21_calculate_mantissa(char *ptr_to_float_string, char *mantissa_string) {
  int mantissa_index = 0;
  while (*ptr_to_float_string != 'e') {
    if (*ptr_to_float_string == '.')
      ptr_to_float_string++;
    else {
      mantissa_string[mantissa_index] = *ptr_to_float_string;
      mantissa_index++;
      ptr_to_float_string++;
    }
  }
  ptr_to_float_string++;
  return ptr_to_float_string;
}

int s21_from_float_to_decimal(float src, s21_decimal *dst) {
  S21ConverterResultCode result_code = CODE_CONVERTER_OK;

  if (!dst) {
    result_code = CODE_CONVERTER_ERROR;
  } else if (isinf(src) || isnan(src)) {
    result_code = CODE_CONVERTER_ERROR;
  } else if (fabsf(src) > MAX_FLOAT_TO_CONVERT) {
    result_code = CODE_CONVERTER_ERROR;
  } else if (fabsf(src) < MIN_FLOAT_TO_CONVERT) {
    result_code = CODE_CONVERTER_ERROR;
    s21_null_decimal(dst);
  } else {
    s21_null_decimal(dst);
    s21_big_decimal big_decimal;
    s21_null_big_decimal(&big_decimal);
    s21_decimal_to_big_decimal(*dst, &big_decimal);
    char float_string[64] = "\0";
    char mantissa_string[64] = "\0";
    sprintf(float_string, "%.8e", src);
    char *ptr_to_float_string = float_string;
    int sign = 0;
    if (src < 0.0) {
      sign = 1;
      ptr_to_float_string++;
    }
    char *ptr_to_scale = &ptr_to_float_string[12];
    int shift = 8;
    int check_scale = atoi(ptr_to_scale);
    if (ptr_to_float_string[11] == '+' || check_scale + 6 < 28) {
      for (int i = 0; i < 64; i++) {
        float_string[i] = '\0';
      }
      shift = 6;
      sprintf(float_string, "%.6e", src);
    }

    ptr_to_float_string =
        s21_calculate_mantissa(ptr_to_float_string, mantissa_string);
    int mantissa = atoi(mantissa_string);
    s21_calculate_float_scale(mantissa, ptr_to_float_string, &big_decimal,
                              shift);
    s21_truncate_and_round_decimal(&big_decimal);
    s21_big_decimal_to_decimal(big_decimal, dst);
    if (sign) {
      s21_set_sign(dst, sign);
    }
  }
  return result_code;
}

int s21_from_decimal_to_float(s21_decimal src, float *dst) {
  S21ConverterResultCode result_code = CODE_CONVERTER_OK;

  if (!dst) {
    result_code = CODE_CONVERTER_ERROR;
  } else {
    int scale = s21_get_decimal_scale(src);
    *dst = 0.0;
    double temp = 0.0;
    for (int i = 0; i < 96; i++) {
      if (s21_get_bit(src, i)) {
        temp += powf(2.0, i);
      }
    }
    temp /= pow(10, scale);

    if (s21_get_sign(src)) {
      temp = temp * (-1.0);
    }
    *dst = (float)temp;
  }

  return result_code;
}

int s21_from_int_to_decimal(int src, s21_decimal *dst) {
  S21ConverterResultCode result_code = CODE_CONVERTER_OK;

  if (dst == NULL) {
    result_code = CODE_CONVERTER_ERROR;
  } else {
    int sign = 0;
    if (src < 0) {
      sign = 1;
      int max_num = 0x80000000;
      if (src != max_num) {
        src = -src;
      }
    }

    s21_null_decimal(dst);
    dst->bits[0] = src;
    s21_set_sign(dst, sign);
  }

  return result_code;
}

int s21_from_decimal_to_int(s21_decimal src, int *dst) {
  S21ConverterResultCode result_code = CODE_CONVERTER_OK;

  if (dst == NULL) {
    result_code = CODE_CONVERTER_ERROR;
  } else {
    *dst = 0;
    s21_decimal min_int_decimal = {
        {0x80000000, 0x00000000, 0x00000000, 0x80000000}};  // -2147483648
    s21_decimal max_int_decimal = {
        {0x7FFFFFFF, 0x00000000, 0x00000000, 0x00000000}};  // 2147483647
    s21_decimal trunc_decimal = {{0, 0, 0, 0}};

    s21_truncate(src, &trunc_decimal);
    if (s21_is_less(trunc_decimal, min_int_decimal)) {
      result_code = CODE_CONVERTER_ERROR;
    } else if (s21_is_greater(trunc_decimal, max_int_decimal)) {
      result_code = CODE_CONVERTER_ERROR;
    } else {
      *dst = trunc_decimal.bits[0];
      if (s21_get_sign(trunc_decimal)) {
        *dst = -*dst;
      }
    }
  }
  return result_code;
}
