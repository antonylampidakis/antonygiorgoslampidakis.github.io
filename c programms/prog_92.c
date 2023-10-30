#include <stdio.h>

int main()
{
  int array[100], n, c, d, swap;

  printf("Dose to megethos toy pinaka : ");
  scanf("%d", &n);

  printf("Dose %d akeraious \n", n);
   printf("******************************\n");
  for (c = 0; c < n; c++)
    scanf("%d", &array[c]);

  for (c = 0 ; c < n - 1; c++)
  {
    for (d = 0 ; d < n - c - 1; d++)
    {
      if (array[d] > array[d+1])
      {
        swap       = array[d];
        array[d]   = array[d+1];
        array[d+1] = swap;
      }
    }
  }
printf("******************************\n");
  printf("Se katanemimeni seira ta stoixeia einai : \n");
printf("******************************\n");
  for (c = 0; c < n; c++)
     printf("%d\n", array[c]);
printf("******************************\n");
  return 0;
}
