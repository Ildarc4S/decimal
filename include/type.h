#ifndef TYPE_H
#define TYPE_H

typedef struct {
  int bits[4];
} s21_decimal;

typedef struct {
  unsigned int bits[8];
} s21_big_decimal;

#define BIG_DECIMAL_LENGTH 8
#define DECIMAL_LENGTH 4
#define INT_LENGTH 32

#define S21_POSITIVE 0
#define S21_NEGATIVE 1

#endif
