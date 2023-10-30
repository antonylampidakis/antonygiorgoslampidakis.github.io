
#include <stdio.h>
#include <stdlib.h>


struct Code {
  int Num;
  char Gram;
};

int main() {

  struct Code c1;


  c1.Num = 1222;
  c1.Gram = 'A';


  printf("My number: %d\n", c1.Num);
  printf("My letter: %c\n", c1.Gram);

  return 0;
}
