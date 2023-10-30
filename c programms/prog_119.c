#include <stdio.h>
#include <math.h>

int inputfile (){

    FILE *inputFile;
    int radius;

    inputFile = fopen("file.txt", "w");

    if (inputFile == NULL) {
        printf("sfalma sto anoigma toy arxioy file.txt.\n");
        return 1;
    }
    printf("*********************\n");

    for (int i = 0; i < 5; i++) {
        printf("Eisagogi  arithmou:\n");
        scanf("%d", &radius);
        fprintf(inputFile, "%d\n", radius);
    }

    fclose(inputFile);

}

int outfile(){
    FILE *inputFile;
    FILE *outputFile;
    int radius, area;


    outputFile = fopen("results.txt", "w");
    if (outputFile == NULL) {
        printf("sfalma sto anoigma toy arxioy results.txt.\n");
        return 1;
    }


    inputFile = fopen("file.txt", "r");
    if (inputFile == NULL) {
        printf("sfalma sto anoigma toy arxioy file.txt.\n");
        return 1;
    }
    printf("*********************\n");


    printf("Result of embado kikloy  :\n");
    while (fscanf(inputFile, "%d", &radius) != EOF) {

        double p=3.14;
        area= 2 * p * radius;

        fprintf(outputFile, "%d\n", area);
        printf("Gia aktina: %d to embadon einai : %d\n", radius, area);
    }
    printf("*********************\n");


    fclose(inputFile);
    fclose(outputFile);
}
int main() {

    inputfile ();
    outfile();

    return 0;
}
