#include <stdio.h>
#include <stddef.h>

struct Array {
  int *data;
  size_t length;
};

int maxArray(struct Array arr) {
  if (arr.length == 0) {
    return -1;
  }
  int largest_number = *arr.data;
  while (arr.length > 1) {
    if (largest_number < *(arr.data + 1)) {
      largest_number = *(arr.data + 1);
    } 
    arr.data++;
    arr.length--;
  }
  return largest_number;
}

int main() {
  int nums[] = {4, 17, 2, 9, 31, 8};

  struct Array numArr = {
    .data = nums,
    .length = sizeof(nums) / sizeof(*nums)
  };

  printf("Largest number: %d", maxArray(numArr));

  return 0;
}
