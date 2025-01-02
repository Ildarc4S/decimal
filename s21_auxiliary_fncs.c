#include "s21_decimal.h"

void print_bin(int num) {
  for (int i = 31; i >= 0; i--) {
    printf("%d", (num >> i) & 1);
  }
  printf("   ");
}

/**
 * должна возвращать индекс первого значащего элемента(единички)
 */
int s21_first_mean_one(s21_decimal number) {
  int res = -1;
  int flag = 1;
  for (int i = 96 - 1; i >= 0 && flag; i--) {
    if (!!((1 << (i % 32)) & number.bits[(i / 32)])) {
      res = i;
      flag = 0;
    }
  }
  return res;
}

void print_bin_decimal(s21_decimal decimal) {
  printf("\t\t[2]\t\t\t\t  [1]\t\t\t\t    [0]\t\t\t\t\t[3]\n");
  print_bin(decimal.bits[2]);
  print_bin(decimal.bits[1]);
  print_bin(decimal.bits[0]);
  printf(":");
  print_bin(decimal.bits[3]);
  printf("\n");
}
int is_null(s21_decimal num) {
  return num.bits[0] == 0 && num.bits[1] == 0 && num.bits[2] == 0 &&
         num.bits[3] == 0;
}

int s21_get_sign(s21_decimal num) { return (num.bits[3] >> 31) & 1; }

s21_decimal s21_abs(s21_decimal num) {
  num.bits[3] &= ~(HEAD_ONE);
  return num;
}
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

int s21_sravnivatel(s21_decimal num1, s21_decimal num2) {
  int result = 0;
  int stop = 0;
  for (int j = 2; j >= 0 && !stop; j--) {
    for (int i = 31; i >= 0 && !stop; i--) {
      int byte1 = ((num1.bits[j] >> i) & 1);
      int byte2 = ((num2.bits[j] >> i) & 1);
      sravnitel_operations(byte1, byte2, &result, &stop);
    }
    // printf("\n");
  }
  return result;
}

/**
 * хз зачем я написал эту функцию, в общем она отдает
 * в формате инт положение запятой в децимале,
 * юзайте пожалуйста, я что зря писал
 */
// int fun1(s21_decimal value) {
//   int j = 0;
//   int res = 0;
//   int stepen_dvoiki = 0;
//   for (int i = 16; i < 23; i++) {
//     if (res + stepen_dvoiki < 28) {
//       res += stepen_dvoiki;
//     } else {
//       return -60065;
//     }
//     stepen_dvoiki = ((value.bits[3] >> i) & 1);  // нужно ли умножаться
//     for (int k = 0; k < j; k++) {
//       stepen_dvoiki *= 2;
//     }
//     j++;
//   }
//   return res;
// }