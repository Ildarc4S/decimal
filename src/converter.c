#include "../include/converter.h"
#include "../include/utils.h"
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

  int res=0;
  if(!dst){
    res = 1;
  }
  else if (isinf(src) || isnan(src)) {
    // Отдельно обрабатываем +inf, -inf, +nan, и -nan
    res = 1;

  }
  else if (fabsf(src) > MAX_FLOAT_TO_CONVERT) {
    // MAX_FLOAT_TO_CONVERT - максимальное число, которое можно сконвертировать в decimal
    res = 1;

  }
  else if (fabsf(src) < MIN_FLOAT_TO_CONVERT) {
    // MIN_FLOAT_TO_CONVERT - минимальное число, которое можно сконвертировать в decimal
    res = 1;
    s21_decimal_to_null(dst);
  }
  else{
    s21_decimal_to_null(dst);
    s21_big_decimal big_decimal = {{0,0,0,0,0,0,0}}; 
    s21_decimal_to_big_decimal(*dst, &big_decimal);
    //float a = -0.000000004;
    
    char b[64];
    char c[64]="\0";
    char sc[5]="\0";
    sprintf(b, "%e", src);
    char *ptr =b;
    int sign=0;
    if(src<0.0){
      sign = 1;
      ptr++;
    }
    int i=0;
    //printf("%s\n", b);
    while(*ptr!='e'){
      if(*ptr=='.')ptr++;
      else {
        c[i]=*ptr;
        i++;
        ptr++;
      }
    }
    ptr++; // на знак
    float num;
    int scale;
    // int num2;

    num = strtod(c, NULL); // Преобразуем строку
    // num2 = num2/10;
    // num = (float)num2;
    //printf("%d\n", num);
    // big_decimal.bits[0]=num;
    //s21_print_bin_big_decimal(big_decimal);
    if(*ptr =='+'){
      ptr++;
      if(*ptr=='0'){
        ptr++;
        scale = atoi(ptr);
        scale = scale - 6;

      }
      else{
        sc[0]=*ptr;
        ptr++;
        sc[1]=*ptr;
        scale = strtod(sc, NULL);
        scale = scale - 6;
      }
      //printf("%d", scale);
      big_decimal.bits[0]=num;
      if(scale<0){
        s21_set_scale(&big_decimal, abs(scale));
      }
      else{
        while(scale>0){
          s21_mul_to_ten(&big_decimal);
          scale--;
        }
      }
      //s21_print_bin_big_decimal(big_decimal);
      // s21_big_decimal_to_decimal(big_decimal, dst);
    }
    else if(*ptr =='-'){
      ptr++;
      if(*ptr=='0'){
        ptr++;
        scale = atoi(ptr);
        scale = scale + 6;
      }
      else{
        sc[0]=*ptr;
        ptr++;
        sc[1]=*ptr;
        scale = strtod(sc, NULL);
        scale = scale + 6;
      }
    // printf("%d", scale);
      if(28-scale<0){
        num /= pow(10, scale-28);
        num = round(num);
        scale = scale - (scale-28);
      }
      big_decimal.bits[0]=num;
      //s21_print_bin_big_decimal(big_decimal);
      s21_set_scale(&big_decimal, scale);
      //s21_print_bin_big_decimal(big_decimal);
      //s21_set_scale(&big_decimal, scale);

      // s21_big_decimal_to_decimal(big_decimal, dst);
    }
    //big_decimal.bits[0]=num;
    s21_big_decimal_to_decimal(big_decimal, dst);

    if(sign){
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


