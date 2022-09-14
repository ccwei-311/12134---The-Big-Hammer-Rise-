#include <stdio.h>

int main(void) {
  int A, B, C, D, sum;
  scanf("%d.%d %d.%d", &A, &B, &C, &D);
  A = A*100;
  C = C*100;
  sum= (A+B) * (C+D);
  printf("%d.%04d\n", sum/10000, sum%10000);
 return 0;
  }