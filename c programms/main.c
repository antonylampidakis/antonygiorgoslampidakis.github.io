#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[2][2];

    int sum=0;
    int sum1;
    int sum2;


    double mo;
    double mo1;
    double mo2;




    for (int i=0; i<=2; i++){
            for (int j=0; j<=2; j++){
                printf("Dose stoixio gia ton pinka : \n");
                scanf("%d",&A[i][j]);


            }//for j
    }//for i

    for (int i=0; i<=2; i++){
        for (int j=0; j<=2; j++){

                sum=sum+A[i][j];

        }
    }


    mo=sum/9;
    printf("O mesos oros ton timon toy pinaka einai : %lf \n",mo);
    printf("***********************************************\n");

    for (int i=0; i<=2; i++){

            sum1=0;

        for (int j=0; j<=2; j++){

                sum1=sum1+A[j][i];

        }

       mo1= sum1/3;
       printf("O mesos oros grammis einai : %lf \n",mo1);
       printf("***********************************************\n");
    }



    for (int j=0; j<=2; j++){

            int sum2=0;

        for (int i=0; i<=2; i++){

                sum2=sum2+A[i][j];

        }

       mo2= sum2/3;
       printf("O mesos oros stilon einai : %lf \n",mo2);
       printf("***********************************************\n");
    }






    return 0;
}
