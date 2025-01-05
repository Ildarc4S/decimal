#include "../s21_decimal.h"

#define copy                 \
  res.bits[0] = num.bits[0]; \
  res.bits[1] = num.bits[1]; \
  res.bits[2] = num.bits[2]; \
  res.bits[3] = num.bits[3];

s21_big_decimal s21_dec_bdec_convers(s21_decimal num);
s21_decimal s21_bdec_dec_convers(s21_big_decimal num);