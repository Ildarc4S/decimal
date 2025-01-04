#include "s21_decimal.h"

int s21_converter_int_dec(s21_decimal num) {
  int j = 0, res = 0, stepen_dvoiki = 0;
  for (int i = 0; i < 32 && res != -1; i++) {
    if (res + stepen_dvoiki < 28) {
      res += stepen_dvoiki;
    } else {
      res = -1;
    }
    stepen_dvoiki = ((num.bits[3] >> i) & 1);  // нужно ли умножаться
    for (int k = 0; k < j; k++) {
      stepen_dvoiki *= 2;
    }
    j++;
  }
  return res;
}
