#include "../include/converter.h"
#include "../include/utils.h"
#include <math.h>

int s21_from_int_to_decimal(int src, s21_decimal *dst) {}
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

int s21_from_float_to_decimal(float src, s21_decimal *dst) {}
int s21_from_decimal_to_float(s21_decimal src, float *dst) {

    int flag = 0;
    int scale = s21_get_decimal_scale(src);
    *dst = 0.0;
    double temp = 0.0;
    for(int i=0; i<96; i++){
        if(s21_get_bit(src, i)){
            temp += pow(2.0, i);
        }
    }
    temp /= powf(10.0, scale);
    //temp /=10000.0; 
    
    if(s21_get_sign(src)){
        temp *= -1.0;
    }
    *dst = (float)temp;
    
    return flag;
}


