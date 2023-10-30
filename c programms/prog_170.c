#include <stdio.h>
#include <stdlib.h>

void increment(int *p) {
    (*p)++;
}

int main() {



    int x = 42;

    int *p = &x;


    printf("x = %d\n", x);

    increment(p);


    printf("x = %d\n", x);

    int *arr = (int *)malloc(3 * sizeof(int));
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;


    int *q = arr;

    printf("arr[0] = %d\n", *q);
    q++;


    printf("arr[1] = %d\n", *q);
    q++;


    printf("arr[2] = %d\n", *q);
    free(arr);

    return 0;
}
