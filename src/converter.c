#include "../include/converter.h"
#include "../include/utils.h"
#include <math.h>
#include <stdlib.h>
#include <string.h>

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
int getFloatExp(float *value) {
  return ((*((int *)value) & ~(1u << 31)) >> 23) - 127;
}

int s21_from_float_to_decimal(float src, s21_decimal* dst) {
  
  s21_decimal_to_null(dst);
  int flag = 1;
  if (isinf(src) || isnan(src))
    flag = 0;
  else {
    if (src != 0) {
      int sign = (src < 0) ? 1 : 0;
      int exp = ((*(int *)&src & ~0x80000000) >> 23) - 127;
      double temp = (double)fabs(src);
      int scale = 0;
      while (scale < 28 && (int)temp / (int)pow(2, 23) == 0) {
        temp *= 10;
        scale++;
      }
      temp = round(temp);
      if (scale <= 28 && (exp > -94 && exp < 96)) {
        float tmp_float = 0;
        temp = (float)temp;
        while (fmod(temp, 10) == 0 && scale > 0) {
          scale--;
          temp /= 10;
        }
        tmp_float = temp;
        exp = ((*(int *)&tmp_float & ~0x80000000) >> 23) - 127;
        dst->bits[exp / 32] |= 1 << exp % 32;
        for (int i = exp - 1, ii = 22; ii >= 0; i--, ii--)
          if ((*(int *)&tmp_float & (1 << ii)) != 0)
            dst->bits[i / 32] |= 1 << i % 32;
        s21_set_decimal_scale(dst, 0);
        if (sign)s21_set_sign(dst, sign);
      }
    }
  }
  return flag;







  // if(!src){
  //   res = 1;
  // }
  // else{
  //   char dec[64];
  //   float res;
  //   char *ptr = dec;
  //   sprintf(dec, "%.8e", src);

  //   res = atof(dec);

  //   printf("%f", res);
  // }

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


