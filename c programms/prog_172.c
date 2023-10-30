#include<stdio.h>

int main() {

  void *ptr = NULL;

  int x = 5;
  ptr = & x;

  printf("value of *ptr is %d ", *(int* ) ptr);  //*ptr=&x

  return 0;
}
