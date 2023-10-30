#include <stdio.h>

void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

int main()
{
	int x, y;
	printf("Dose timi to x : \n");
	scanf("%d", &x);

	printf("Dose timi to y \n");
	scanf("%d", &y);

	swap(&x, &y);

	printf("Meta tin enallagi: x = %d, y = %d \n", x, y);
	return 0;
}
