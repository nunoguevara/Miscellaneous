#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

int safeFree(int *pointer) {

  if (pointer == NULL) {
    return -1;
  }

  free(pointer);
  pointer = NULL;
  return 0;
  
}

int main {

  
  return 0;
  
}
