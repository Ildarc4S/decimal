#include "s21_binary_operations.h"

#include "../s21_arithmetic_operators.h"

/*НЕ ТРЕБУЕТ РЕДАКТИРОВАНИЯ(скорее всего)*/

/**
 * @author majorswe arniefle
 * @brief инвертирует биты децимала на противоположные
 */
s21_decimal s21_bin_invert(s21_decimal num) {
  s21_decimal res = num;
  res.bits[0] = ~num.bits[0];
  res.bits[1] = ~num.bits[1];
  res.bits[2] = ~num.bits[2];
  return res;
}

/**
 * @author majorswe arniefle
 * @brief перемножает биты децимала (логическое умножение)
 */
s21_decimal s21_bin_mul(s21_decimal num1, s21_decimal num2) {
  s21_decimal res = {0};
  res.bits[2] = num1.bits[2] & num2.bits[2];
  res.bits[1] = num1.bits[1] & num2.bits[1];
  res.bits[0] = num1.bits[0] & num2.bits[0];
  return res;
}

/**
 * @author majorswe arniefle
 * @brief исключающее ИЛИ (XOR)
 */
s21_decimal s21_bin_xor(s21_decimal num1, s21_decimal num2) {
  s21_decimal res = {0};
  res.bits[2] = num1.bits[2] ^ num2.bits[2];
  res.bits[1] = num1.bits[1] ^ num2.bits[1];
  res.bits[0] = num1.bits[0] ^ num2.bits[0];
  return res;
}

s21_big_decimal s21_bin_div(s21_big_decimal bdividend, s21_big_decimal bdivider,
                            s21_big_decimal bres) {
  s21_big_decimal bres = s21_big_dec_init();

  int res_index = 0, divider_shift = s21_first_mean_one(bdividend) -
                                     s21_first_mean_one(bdivider);
  int temp_divider_shift = divider_shift;
  // printf("\n---%d\n", divider_shift);
  if (divider_shift == -1) {
  }  // то происходит это говно
  bdivider = s21_decimal_shift_cycle(bdivider, divider_shift,
                                     s21_decimal_shift_left_once);
  s21_big_decimal chos = s21_sub(bdividend, bdivider);

  while (divider_shift >= 0) {
    // записываем 0 или 1 в результат частного
    bres = s21_decimal_shift_left_once(bres);
    res_index++;
    if (!(chos.bits[3] & (HEAD_ONE))) {  // если остаток отриц.
      bres.bits[0] = bres.bits[0] | 1;
    }
    // print_bin_decimal(res);

    chos = s21_decimal_shift_left_once(chos);
    if (!(chos.bits[3] & (HEAD_ONE))) {  // если остаток полож.
      chos = s21_sub(chos, bdivider);
    } else {                            // если отрицат.
      chos.bits[3] = chos.bits[3] & 0;  // 0 << 31
      chos = s21_sub(bdivider, chos);
    }
    divider_shift--;
  }
  // printf("СТАРЫЙ ОСТАТОК -v-\n");
  // s21_print_bin_decimal(chos);
  chos = s21_add(chos, divider);
  chos = s21_decimal_shift_cycle(chos, temp_divider_shift + 1,
                                 s21_decimal_shift_right_once);
  // printf("НОВЫЙ ОСТАТОК -v-\n");
  // s21_print_bin_decimal(chos);
  return bres;
}