#include "./../include/s21_decimal.h"

int main(void) {

  float res = 0;
  s21_decimal b ={0};
  int a = 1<<5;
  b.bits[0]= 1;
  b.bits[1]=1;
  b.bits[2]=1;
  b.bits[3]=1<<18;

  for(int i=0; i<96; i++){
    printf("%d", s21_get_bit(b, i));
  }
  printf("\n");
  s21_from_decimal_to_float(b, &res);
  printf("%f\n", res);
  //printf("%d", s21_get_decimal_scale(b));
  return 0;
}
