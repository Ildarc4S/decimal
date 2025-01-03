#include <stdio.h>

int main() {
  int n1 = 4294967295;
  n1 >>= 1;
  n1 &= ~(1<<31);
  
  for(int i = 31; i >=0; i--) {
    printf("%d", (n1>>i)&1);
  }
}
