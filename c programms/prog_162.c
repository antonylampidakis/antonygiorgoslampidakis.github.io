#include <stdio.h>

int main() {

  int m = 43;

  int* ptr = m;

  //int* ptr = &m;

  printf("%d\n", m);


  printf("%p\n", &m);


  printf("%d\n", ptr);

  return 0;
}
