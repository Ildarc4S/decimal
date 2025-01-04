#ifndef S21_DECIMAL_H
#define S21_DECIMAL_H
#include <stdio.h>
/**
 * ОСНОВНОЙ h-файл
 *
 * здесь будут представлены основные структуры, макросы
 */

#define HEAD_ONE 1 << 31

typedef struct {
  unsigned int bits[4];
} s21_decimal;

typedef struct {
  unsigned int bits[7];
} s21_big_decimal;

#endif  // S21_DECIMAL_H