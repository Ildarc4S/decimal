#include "../include/converter.h"
#include "../include/utils.h"
#include "../include/round.h"
#include "./../include/ten_functions.h"


#include <math.h>
#include <stdlib.h>
#include <string.h>

#define MAX_FLOAT_TO_CONVERT 79228157791897854723898736640.0f
#define MIN_FLOAT_TO_CONVERT \
    0.00000000000000000000000000010000000031710768509710513471352647538147514756461109f

int s21_from_decimal_to_int(s21_decimal src, int *dst) {}


void s21_decimal_to_null(s21_decimal *dst){
  for(int i=0; i<4; i++){
    dst->bits[i] = 0;
  }
}

//проверка на подходящий диапазон бита нужно добавить
int s21_get_bit(s21_decimal num, int bit){
  int res = 0;
  int number = 0;
  while(bit>=32){
    bit-=32;
    number++;
  }

  if((num.bits[number] & 1<<bit) !=0){
    res=1;
  }
  return res;
}


int s21_from_int_to_decimal(int src, s21_decimal *dst) {
  int sign = 0;

  s21_decimal_to_null(dst);

  if (src < 0) {
    sign = 1;
    src = -src;
  }

  dst->bits[0] = src;

  s21_set_decimal_scale(dst, 0);

  s21_set_sign(dst, sign);
  
  return 0;
}

int s21_from_float_to_decimal(float src, s21_decimal* dst) {
    static int n = 0;
    printf("%d\n",  n);
    n++;

  int res = 0;
  if (!dst) {
    res = 1;
  } else if (isinf(src) || isnan(src)) {
    res = 1;
  } else if (fabsf(src) > MAX_FLOAT_TO_CONVERT) {
    res = 1;
  } else if (fabsf(src) < MIN_FLOAT_TO_CONVERT) {
    res = 1;
    s21_decimal_to_null(dst);
  } else {
    s21_decimal_to_null(dst);
    s21_big_decimal big_decimal = {{0,0,0,0,0,0,0}}; 
    s21_decimal_to_big_decimal(*dst, &big_decimal);
    
    char b[64];
    char c[64]="\0";
    char sc[5]="\0";
    sprintf(b, "%.8e", src);

    char *ptr = b;
    int sign = 0;
    if(src < 0.0){
      sign = 1;
      ptr++;
    }
    int i = 0;

    char* find = b;
    int find_plus = 0;
    int e = 0;
    while(*find != '\0' && find_plus == 0) {
        if (*find == 'e'){
            e = 1;
        }
        if (e) {
            if (*find == '+') {
                find_plus = 1;
            } else if (*find == '-') {
                find_plus = -1;
            }
        }
        *find++;
    }
    int shift = 8;
    if (e == 0) {
        sprintf(b, "%.6e", src);
        shift = 6;
    } else {
        char find_minus_sign[64];
        int k_find = 0;
        while (*find != '\0') {
            find_minus_sign[k_find++] = *find;
            find++;
        }
        int find_scale = strtod(find_minus_sign, NULL);
        if (find_plus == 1 || find_scale + 6 < 28) {
        for (int i = 0; i < 64; i++) {
            b[i] = '\0'; 
        }
        shift = 6;
        sprintf(b, "%.6e", src);
        }
    }
    
    while(*ptr!='e'){
      if (*ptr == '.') ptr++;
      else {
        c[i]=*ptr;
        i++;
        ptr++;
      }
    }
    ptr++;
    int num;
    int scale;

    num = atoi(c);
    char sca[10];
    if (*ptr == '+') {
      ptr++;
      int k = 0;
      while (*ptr != '\0') {
        sca[k++] = *ptr;
        ptr++;
      }
      scale = strtod(sca, NULL);
      scale -= 6;
      int i = 0;
      big_decimal.bits[0] = num;
      while (i < scale) {
        s21_mul_to_ten(&big_decimal);
        i++;
      }
      if (scale < 0) {
        s21_set_scale(&big_decimal, -scale);
      }
    } else {
      ptr++;
      int k = 0;
      while (*ptr != '\0') {
        sca[k++] = *ptr;
        ptr++;
      }
      scale = strtod(sca, NULL);
      scale = scale + shift;
      big_decimal.bits[0] = num;
      s21_set_scale(&big_decimal, scale);
    }
    s21_big_decimal trunc_temp = big_decimal;

    int scal = s21_get_big_decimal_scale(big_decimal);
    scal--;
    while (scal > 28) {
        s21_div_to_ten(&big_decimal);
        scal--;
    }

    s21_set_scale(&big_decimal, ++scal);

    if (scal > 28) {
      s21_big_decimal remainder;
      s21_null_big_decimal(&remainder);
        
      s21_div_to_ten(&big_decimal);
      scal--;
      s21_set_scale(&big_decimal, scal);
        
      s21_big_decimal temp_res = big_decimal;

      s21_normalization(&trunc_temp, &temp_res);
      s21_binary_sub(trunc_temp, temp_res, &remainder);
      s21_set_scale(&remainder, s21_get_big_decimal_scale(trunc_temp) - scal);
        
      s21_banck_round(&big_decimal, remainder);
    }

        s21_big_decimal_to_decimal(big_decimal, dst);
        if (sign) {
        s21_set_sign(dst, sign);
        }
  }

  return res;
}



int s21_from_decimal_to_float(s21_decimal src, float *dst) {
  
  int flag = 0;
  if(!dst){
    flag = 1;
  }
  else{
    int scale = s21_get_decimal_scale(src);
    *dst = 0.0;
    double temp = 0.0;
    for(int i=0; i<96; i++){
      if(s21_get_bit(src, i)){
        temp += powf(2.0, i);
      }
    }
    temp /= pow(10, scale);
    
    if(s21_get_sign(src)){
      temp = temp * (-1.0);
    }
    *dst = (float)temp;
  }
    
  return flag;
}


