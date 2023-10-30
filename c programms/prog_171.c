#include <stdio.h>
#include <stdlib.h>

int main()
{
   int x = 42;
   int *ptr;
   ptr = &x;

   printf("Address stored in a variable ptr is: %x \n", ptr);

   printf("Value stored in a variable ptr is: %d \n", *ptr);
   return 0;
}
