
#include "./../include/s21_decimal.h"
#include "./../include/ten_functions.h"
#include "./../include/converter.h"


#include <stdio.h>
#include <stdlib.h> 
#include <math.h>

int main(void) {

  // s21_decimal decimal;
  // float res = 0.0000000000000000002284016;
  // char dec[64];
  // s21_from_float_to_decimal(res, &decimal);
  
  // printf("%f\n", res);
  // s21_print_bin_decimal(decimal);
  //printf("%d", s21_get_decimal_scale(b));



// 7 цифр засунул 
// E+sht => умножаешь sht-6 раз на 10
// скейл не трогать!

// 1. d1.bits[0] = -5921412
// 2. sht = 23 sht-6 = 17
//    d1.bits[0] = -592141200000000000000000

// 7 цифр засунул 
// Е-sht => суешь скейл равный sht+6
  s21_decimal decimal = {{0,0,0,0}}; 
  s21_big_decimal big_decimal = {{0,0,0,0,0,0,0}}; 
  s21_decimal_to_big_decimal(decimal, &big_decimal);
  float a = -5.92141241E+23;

  s21_from_float_to_decimal(a, &decimal);
  s21_print_bin_decimal(decimal);
  char b[64];
  char c[64]="\0";
  char sc[5]="\0";
  sprintf(b, "%.8e", a);
  char *ptr =b;
  int sign=0;
  if(a<0.0){
    sign = 1;
    ptr++;
  }
  //printf(" %c ", ptr[0]);
  int i=0;
  printf("b : %s\n", b);
  while(*ptr!='e'){
    if(*ptr=='.')ptr++;
    else {
      c[i]=*ptr;
      i++;
      ptr++;
    }
  }
  ptr++; // на знак
  int scale;
  //char *end; // Указатель для отслеживания конца числа
  double num;

  num = strtod(c, NULL); // Преобразуем строку
  // num2 = num2/10;
  // num = num2;
  printf("num : %.7f\n", num);

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
    printf("scale : %d\n", scale);
    if(scale<0){
      s21_set_scale(&big_decimal, abs(scale));
    }
    else{
      while(scale>0){
        s21_mul_to_ten(&big_decimal);
        scale--;
      }
    }

    // while(scale>0){
    //   s21_mul_to_ten(&big_decimal);
    //   scale--;
    // }
    s21_print_bin_big_decimal(big_decimal);
    //s21_big_decimal_to_decimal(big_decimal, &decimal);
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
      //scale = abs(scale);
    }
   // printf("%d", scale);
    if(28-scale<0){
      num /= pow(10, scale-28);
      num = round(num);
      scale = scale - (scale-28);
    }

    //s21_print_bin_big_decimal(big_decimal);
    s21_set_scale(&big_decimal, scale);
    s21_print_bin_big_decimal(big_decimal);
    //s21_set_scale(&big_decimal, scale);

  }
  big_decimal.bits[0]=num;
  s21_big_decimal_to_decimal(big_decimal, &decimal);



  if(sign){
    s21_set_sign(&decimal, sign);
  }
  //printf("Число: %.2f\n", num);
  //printf("%s\n", c);
  //printf("%d", scale);
//
 s21_print_bin_decimal(decimal);
  // float res2;
  // double res = s21_from_decimal_to_float(decimal, &res2);
  // printf("%.10f",res2);
// 100000000000
// 1.0000000000
// 1000000.0000
// 10 - 6 = 4
  return 0;
}