#include <stdio.h>
#include <stdlib.h>

int func(int n) {
  int s = 0;
  s = ((n - 1) * n - 6) / 2;
  return s;
}

int main(void) {
  int n;
  scanf("%d", &n);

  printf("%d\n", func(n));
  return 0;
}