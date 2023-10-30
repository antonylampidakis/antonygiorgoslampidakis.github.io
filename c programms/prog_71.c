#include <stdio.h>

void UsePointers()
{

    int val[3] = { 5, 11, 15 };


    int* ptr;


    ptr = val;

    printf("Oi times tou array einai : ");

    printf("%d, %d, %d", ptr[0], ptr[1], ptr[2]);

    return;
}

int main()
{
    UsePointers();
    return 0;
}
