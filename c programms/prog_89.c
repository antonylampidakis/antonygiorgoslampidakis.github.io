#include <stdio.h>


void swap(int &x, int &y)
{
	int temp = x;
	x = y;
	y = temp;
}

int main()
{
	int x, y;
	printf("Dose timi to x : \n");
	scanf("%d", &x);

	printf("Dose timi to y \n");
	scanf("%d", &y);

	swap(x, y);

	printf("Meta tin enallagi: x = %d, y = %d \n", x, y);
	return 0;
}
