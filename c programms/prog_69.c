
#include <stdio.h>

int main()
{
	int var = 20;


	int* ptr;


	ptr = &var;


	printf("Value at ptr = %p \n", ptr);
	printf("Value at var = %d \n", var);
	printf("Value at *ptr = %d \n", *ptr);


	return 0;
}
