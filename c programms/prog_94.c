#include <stdio.h>

void bubble_sort(long list[], long n)
{
  long c, d, temp;

  for (c = 0 ; c < n - 1; c++) {
    for (d = 0 ; d < n - c - 1; d++) {
      if (list[d] > list[d+1]) {

        temp         = list[d];
        list[d]   = list[d+1];
        list[d+1] = temp;
      }
    }
  }
}



int main()
{
  long array[100], n, c;

  printf("Dose to megethos toy pinaka :");
  scanf("%ld", &n);

  printf("Dose %ld akeraious arithmous : \n", n);

  for (c = 0; c < n; c++)
    scanf("%ld", &array[c]);

  bubble_sort(array, n);

  printf("H lista meta tin taxinomisi :\n");

  for (c = 0; c < n; c++)
     printf("%ld\n", array[c]);

  return 0;
}
