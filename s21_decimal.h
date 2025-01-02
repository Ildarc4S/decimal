#ifndef S21_DECIMAL_H
#define S21_DECIMAL_H

/**
 * ОСНОВНОЙ h-файл
 *
 * здесь будут представлены основные структуры, макросы
 */
#include <stdio.h>

#define HEAD_ONE 1 << 31

typedef struct {
  unsigned int bits[4];
} s21_decimal;

#endif  // S21_DECIMAL_H