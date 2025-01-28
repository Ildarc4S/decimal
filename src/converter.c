#include "../include/converter.h"
#include "../include/utils.h"
#include "./../include/ten_functions.h"
#include "./../include/round.h"

#include <math.h>
#include <stdlib.h>
#include <string.h>

#define MAX_FLOAT_TO_CONVERT 79228157791897854723898736640.0f
#define MIN_FLOAT_TO_CONVERT \
    0.00000000000000000000000000010000000031710768509710513471352647538147514756461109f

int s21_from_decimal_to_int(s21_decimal src, int *dst) {}


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

  s21_null_decimal(dst);

  if (src < 0) {
    sign = 1;
    src = -src;
  }
  dst->bits[0] = src;

  s21_set_decimal_scale(dst, 0);
  s21_set_sign(dst, sign);
  
  return 0;
}

int s21_calculate_flaot_scale(int mantissa, char *ptr_to_float_string, s21_big_decimal *big_decimal, int shift){
  int scale=0;
  char scale_sign=*ptr_to_float_string;
  ptr_to_float_string++;
  char scale_string[10]="\0";
  int scale_index = 0;

  while (*ptr_to_float_string != '\0') {
    scale_string[scale_index++] = *ptr_to_float_string;
    ptr_to_float_string++;
  }
  scale = atoi(scale_string);
  if (scale_sign == '+') {
    scale -= 6;
    int i = 0;
    big_decimal->bits[0] = mantissa;
    while (i < scale) {
      s21_mul_to_ten(big_decimal);
      i++;
    }
    if (scale < 0) {
      scale = scale * (-1);
      s21_set_scale(big_decimal, scale);
    }
  } else {
    scale = scale + shift;
    big_decimal->bits[0] = mantissa;
    s21_set_scale(big_decimal, scale);
  }
  return scale;
}

void s21_ockruglenie(s21_big_decimal *big_decimal){
  s21_big_decimal trunc_temp = *big_decimal;
  int scale = s21_get_big_decimal_scale(*big_decimal);
  scale--;
  while (scale > 28) {
    s21_div_to_ten(big_decimal);
    scale--;
  }
  s21_set_scale(big_decimal, ++scale);

  if (scale > 28) {
    s21_big_decimal remainder;
    s21_null_big_decimal(&remainder);
    s21_div_to_ten(big_decimal);
    
    scale--;
    s21_set_scale(big_decimal, scale);
    s21_big_decimal temp_res = *big_decimal;

    s21_normalization(&trunc_temp, &temp_res);
    s21_binary_sub(trunc_temp, temp_res, &remainder);
    s21_set_scale(&remainder, s21_get_big_decimal_scale(trunc_temp) - scale);
    
    s21_banck_round(big_decimal, remainder);
  }
}

char *s21_calculate_mantissa(char *ptr_to_float_string, char *mantissa_string){
  int mantissa_index = 0;
  while(*ptr_to_float_string!='e'){
    if (*ptr_to_float_string == '.') ptr_to_float_string++;
    else {
      mantissa_string[mantissa_index]=*ptr_to_float_string;
      mantissa_index++;
      ptr_to_float_string++;
    }
  }
  ptr_to_float_string++;
  return ptr_to_float_string;
}

int s21_from_float_to_decimal(float src, s21_decimal* dst) {
  int res = 0;
  if (!dst) {
    res = 1;
  } else if (isinf(src) || isnan(src)) {
    res = 1;
  } else if (fabsf(src) > MAX_FLOAT_TO_CONVERT) {
    res = 1;
  } else if (fabsf(src) < MIN_FLOAT_TO_CONVERT) {
    res = 1;
    s21_null_decimal(dst);
  } else {
    s21_null_decimal(dst);
    s21_big_decimal big_decimal;
    s21_null_big_decimal(&big_decimal);
    s21_decimal_to_big_decimal(*dst, &big_decimal);
    
    char float_string[64]="\0";
    char mantissa_string[64]="\0";
    sprintf(float_string, "%.8e", src);
    char *ptr_to_float_string = float_string;
    int sign = 0;
    if(src < 0.0){
      sign = 1;
      ptr_to_float_string++;
    }

    char* ptr_to_scale = &ptr_to_float_string[12];
    int shift = 8;
    int check_scale = atoi(ptr_to_scale);
    if (ptr_to_float_string[11] == '+' || check_scale + 6 < 28) {
      for (int i = 0; i < 64; i++) {
        float_string[i] = '\0'; 
      }
      shift = 6;
      sprintf(float_string, "%.6e", src);
    } 

    ptr_to_float_string = s21_calculate_mantissa(ptr_to_float_string, mantissa_string);
    int mantissa = atoi(mantissa_string);
    int scale = s21_calculate_flaot_scale(mantissa, ptr_to_float_string, &big_decimal, shift);
    s21_ockruglenie(&big_decimal);
    s21_big_decimal_to_decimal(big_decimal, dst);
    if (sign) {
      s21_set_sign(dst, sign);
    }
  } 
  return res;
}
 

int s21_from_decimal_to_float(s21_decimal src, float *dst) {
  
  int res = 0;
  if(!dst){
    res = 1;
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
    
  return res;
}


