#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[2][2];

    int sum=0;
    int sum1=0;
    int sum2=0;
    double mo;
    double mo1;
    double mo2;

    for (int i=0; i<=2; i++){
        for (int j=0; j<=2; j++){

            printf("Dose stoixio : \n");
            scanf("%d",&A[i][j]);

        }// for j
    }//for i


     for (int i=0; i<=2; i++){
        for (int j=0; j<=2; j++){

            if(i==j){   sum=sum+A[i][j];
                        printf("Anikei stin kiria diagonio ! ! ! %d \n",A[i][j] );     }

        }// for j
    }//for i


        mo=sum/3;
        printf("o mesos oros ton stixion tis kirias diagonioy einai : %lf\n",mo);
        printf("******************************************************************\n");




        for (int i=0; i<=2; i++){
            for (int j=0; j<=2; j++){

            if(i>j){   sum1=sum1+A[i][j];
                        printf("Anikei kato apo tin kiria diagonio ! ! ! %d \n",A[i][j] );     }

        }// for j
    }//for i

    mo1=sum1/3;
    printf("O mesos oros ton stoixion kato apo tin kiria diagonio einai : %lf\n",mo1);
    printf("*************************************************************************\n");


    for (int i=0; i<=2; i++){
            for (int j=0; j<=2; j++){

            if(i<j){   sum2=sum2+A[i][j];
                        printf("Anikei pano apo tin kiria diagonio ! ! ! %d \n",A[i][j] );     }

        }// for j
    }//for i

    mo2=sum2/3;
    printf("O mesos oros ton stoixion pano apo tin kiria diagonio einai : %lf\n",mo2);
    printf("*************************************************************************\n");

    return 0;
}
