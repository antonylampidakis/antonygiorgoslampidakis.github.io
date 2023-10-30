#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[4][4];
    double mo[4];
    double min =99999999999;
    double max=-99999999999;

    for (int i=0; i<=4; i++){
            printf("Foititis : %d \n", i+1);
            printf("*******************************\n");
            for(int j=0; j<=4; j++){
                printf("Dose vathmous : \n");
                scanf("%d",&A[i][j]);
            printf("*******************************\n");
        }// for j
    }//for i

    for (int i=0; i<=4; i++){

        int sum1=0;
        for (int j=0; j<=4; j++){
                sum1=sum1+A[i][j];

        }//for j

        mo[i]=sum1/5;
    }//for i
    for (int i=0; i<=4; i++){
            printf("O mesos oros tis gramis: %lf \n", mo[i]);
    }
    printf("******************************************\n");

    for (int i=0; i<=4; i++){

            if (mo[i]<=min){
                min=mo[i];
            }//end if min

            if (mo[i]>=max){
                max=mo[i];
            }//end if max

    }//end for i

    printf("******************************************\n");
    printf("O megistos mesos oros einai : %lf\n",max);
    printf("******************************************\n");
    printf("o elaxistos mesos oros einai : %lf\n",min);

    return 0;
}
