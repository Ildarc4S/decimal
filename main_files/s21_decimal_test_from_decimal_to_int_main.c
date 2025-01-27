#include "./../include/s21_decimal.h"

int main(void) {
  // 2147483648
  s21_decimal decimal = {{0x80000000, 0x0, 0x0, 0x0}};
  int a = 2147483648;
    printf("Res: %d\n", a);
  printf("Result code: %d\n", s21_from_decimal_to_int(decimal, &a));
  //   printf("Num: %d\n", check);
  printf("Res: %d\n", a);
  return 0;
}
