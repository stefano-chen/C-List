#include <stdio.h>
#include "list.h"

int main(void) {
  for (int i = 0; i < 10; i++) {
    append(i);
  }
  addTop(10);
  printf("size: %d \n", size());
  printList();
  destroy();
  printf("size: %d \n", size());
  printList();
  return 0;
}