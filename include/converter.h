#ifndef CONVERTER_H
#define CONVERTER_H

#include <math.h>
#include <stdlib.h>

#include "compare.h"
#include "round.h"
#include "type.h"
#include "utils.h"

#define MAX_FLOAT_TO_CONVERT 79228157791897854723898736640.0f
#define MIN_FLOAT_TO_CONVERT \
  0.00000000000000000000000000010000000031710768509710513471352647538147514756461109f

typedef enum {
  CODE_CONVERTER_OK = 0,
  CODE_CONVERTER_ERROR = 1
} S21ConverterResultCode;

int s21_from_int_to_decimal(int src, s21_decimal *dst);
int s21_from_float_to_decimal(float src, s21_decimal *dst);
int s21_from_decimal_to_int(s21_decimal src, int *dst);
int s21_from_decimal_to_float(s21_decimal src, float *dst);

#endif
