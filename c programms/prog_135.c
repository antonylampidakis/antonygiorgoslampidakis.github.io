#include <stdio.h>
 #include <stdlib.h>
 #include <string.h>

typedef struct tagA {
    int t_int;
    float t_float;
    char t_char;
    char t_vchar[30];
} A;

typedef struct tagB {
    A *data;
    struct tagB *prox;
} B;

int main() {
    A dA = { 1, 1.5, 'a', "teste123" };
    B dB = { 0 };
    dB.data = &dA;
    B dB2 = { 0 };

    FILE *fp;
    fp = fopen("Data.txt", "w");

    size_t dSize = sizeof(dA);
    printf("Struct size: %d", dSize);

    if(fp == NULL) {
        printf("nope");
    }
    else {
        fwrite(dB.data, dSize, 1, fp);
    }
    fclose(fp);


    fp = fopen("Data.txt", "r");

    dB2.data = malloc(dSize);
    fread(dB2.data, dSize, 1, fp);

    printf("\n\n%s\n", dB2.data->t_vchar);

    return 0;
}
