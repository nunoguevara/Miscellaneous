#include <stdio.h>

int sumArray(int *index, int size) {
  int sum = 0;
  for (int i = 0; i < size; i++) {
    sum += *index;
    index++;
  }
  return sum;
}
