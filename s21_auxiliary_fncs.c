#include "s21!_decimal.h"

/**
 * @author majorswe arniefle
 * @brief печатает в терминал биты определенного байта инта
 */
void s21_print_bin(int num) {
  for (int i = 31; i >= 0; i--) {
    printf("%d", (num >> i) & 1);
  }
  printf("   ");
}
/**
 * @author majorswe arniefle
 * @brief печатает в терминал децимал
 */
void s21_print_bin_decimal(s21_decimal decimal) {
  printf("\t\t[2]\t\t\t\t  [1]\t\t\t\t    [0]\t\t\t\t\t[3]\n");
  s21_print_bin(decimal.bits[2]);
  s21_print_bin(decimal.bits[1]);
  s21_print_bin(decimal.bits[0]);
  printf(":");
  s21_print_bin(decimal.bits[3]);
  printf("\n");
}

/**
 * @author sundaeka
 * @brief должна возвращать индекс первого значащего элемента(единички)
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

/**
 * @author majorswe arniefle
 * @brief проверяет состоит ли децимал только из нулей
 */
int s21_is_null(s21_decimal num) {
  return num.bits[0] == 0 && num.bits[1] == 0 && num.bits[2] == 0 &&
         num.bits[3] == 0;
}

/**
 * @author majorswe arniefle
 * @brief возвращает знак
 */
int s21_get_sign(s21_decimal num) { return (num.bits[3]) & (HEAD_ONE); }

/**
 * @author majorswe arniefle
 * @brief возвращает модуль децимала
 */
s21_decimal s21_abs(s21_decimal num) {
  num.bits[3] &= ~(HEAD_ONE);
  return num;
}

/**
 * @author majorswe arniefle
 * @brief пишите описание
 */
void s21_sravnitel_operations(int byte1, int byte2, int *result, int *stop) {
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

/**
 * @author majorswe arniefle
 * @brief пишите описание
 */
int s21_sravnivatel(s21_decimal num1, s21_decimal num2) {
  int result = 0;
  int stop = 0;
  int sign_num1 = s21_get_sign(num1);
  int sign_num2 = s21_get_sign(num2);

  if (sign_num1 == 1 && sign_num2 == 0) {
    result = -1;
  } else if (sign_num1 == 0 && sign_num2 == 1) {
    result = 1;
  } else {
    for (int j = 2; j >= 0 && !stop; j--) {
      // printf("[%d %d]", num1.bits[j], num2.bits[j]);
      for (int i = 31; i >= 0 && !stop; i--) {
        int byte1 = ((num1.bits[j] >> i) & 1);
        int byte2 = ((num2.bits[j] >> i) & 1);
        // printf("%d:%d|", byte1, byte2);
        s21_sravnitel_operations(byte1, byte2, &result, &stop);
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

/**
 * @author sundaeka
 * @brief хз зачем я написал эту функцию, в общем она возвращает инт, положение
 * запятой в децимале, юзайте пожалуйста, я что зря писал??!!
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