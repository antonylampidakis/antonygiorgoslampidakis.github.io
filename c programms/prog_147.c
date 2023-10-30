
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
	FILE* ptr;
	char ch;
	ptr = fopen("test.txt", "r");

	if (NULL == ptr) {
		printf("to arxeio den mporei na aniksei ! ! ! \n");
	}

	printf("to periexomeno tou arxeiou einai : : \n");

	while (!feof(ptr)) {
		ch = fgetc(ptr);
		printf("%c", ch);
	}
	fclose(ptr);
	return 0;
}
