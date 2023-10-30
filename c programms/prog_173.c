#include<stdio.h>

int main() {

  int x = 42;
  int  * ptr = & x;
  int sz = sizeof(ptr);

  printf("size of ptr is %d byte", sz);

  return 0;
}
