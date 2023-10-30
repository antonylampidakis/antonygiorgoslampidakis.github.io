#include <stdio.h>
#include <stdlib.h>

int main(){

    FILE *myFile;
    myFile = fopen("num.txt", "r");


    int numberArray[16];
    int i;

    if (myFile == NULL){
        printf("Error Reading File\n");
        exit (0);
    }

    for (i = 0; i < 16; i++){
        fscanf(myFile, "%d,", &numberArray[i] );
    }

    for (i = 0; i < 16; i++){
        printf("Number is: %d\n\n", numberArray[i]);
    }

    fclose(myFile);

    return 0;
}

