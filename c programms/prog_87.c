#include <stdio.h>

int main()
{
	int x, y;
	printf("Dose to x : \n");
	scanf("%d", &x);
	printf("Dose to y : \n");
	scanf("%d", &y);

	int temp = x;
	x = y;
	y = temp;

    printf("******************************\n");
	printf("After Swapping: x = %d, y = %d\n", x, y);
	printf("******************************\n");
	return 0;
}
