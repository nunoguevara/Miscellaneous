#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

struct Array {
  int *data;
  size_t length;
  size_t capacity;
};

void fillArr(struct Array *arr) {
  int i = 1;
  int *ptr = arr->data;
  while (arr->length < arr->capacity) {
    *ptr = 10 * i;
    i++;
    ptr++;
    arr->length++;
  }
}

int sumArray(struct Array *arr) {
  int sum = 0;
  int *ptr = arr->data;
  while (arr->length > 0) {
    sum += *ptr;
    ptr++;
    arr->length--;
  }
  return sum;
}


int main() {
  int input_int;
  printf("Please enter an integer for the array size: ");
  scanf("%d", &input_int);
  
  struct Array numArr = {
    .data = malloc(input_int * sizeof(int)),
    .length = 0,
    .capacity = input_int
  };
  
  fillArr(&numArr);
  printf("Sum: %d", sumArray(&numArr));
  free(numArr.data);

  return 0;
}

