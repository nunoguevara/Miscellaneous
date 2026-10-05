#include <stdio.h>

int assignVar(int *x, int y) {
  return *x = y;
}

int main() {
  int n = 60;
  int *p = &n;
  assignVar(p, 30);
  printf("%d", n);
}
