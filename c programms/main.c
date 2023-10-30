#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[2][2];

    for (int i=0; i<=2; i++){
        for(int j=0; j<=2; j++){

                printf("Dose stoixio : \n");

                scanf("%d",&A[i][j]);
                 printf("****************************\n");


        }

    }


    for (int i=0; i<=2; i++){
        for(int j=0; j<=2; j++){

                printf("Stoixeio pinaka: %d\n",A[i][j]);


        }

    }


    return 0;
}
