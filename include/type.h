#ifndef TYPE_H
#define TYPE_H

typedef struct {
  int bits[4];
} s21_decimal;

typedef struct {
  unsigned int bits[7];
} s21_big_decimal;

#define BIG_DECIMAL_LENGTH 7
#define DECIMAL_LENGTH 4

#endif
